// File:	ChFiDS_FilSpine.cxx
// Created:	Mon Apr 24 17:04:22 1995
// Author:	Modelistation
//		<model@phylox>


#include <ChFiDS_FilSpine.ixx>
#include <ChFiDS_ListIteratorOfListOfHElSpine.hxx>
#include <Precision.hxx>
#include <TColStd_HArray1OfBoolean.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <gp_XY.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <ElCLib.hxx>
#include <Law_ListIteratorOfLaws.hxx>
#include <Law_Constant.hxx>
#include <Law_S.hxx>
#include <Law_Interpol.hxx>
#include <Standard_DomainError.hxx>

//=======================================================================
//function : ChFiDS_FilSpine
//purpose  : 
//=======================================================================

ChFiDS_FilSpine::ChFiDS_FilSpine() {}

ChFiDS_FilSpine::ChFiDS_FilSpine(const Standard_Real Tol) :
ChFiDS_Spine(Tol)
{}

//=======================================================================
//function : Reset
//purpose  : 
//=======================================================================

void ChFiDS_FilSpine::Reset(const Standard_Boolean AllData)
{
  ChFiDS_Spine::Reset(AllData);
  laws.Clear();
  if(AllData)
    parandrad.Clear();
  else //Complete parandrad
    {
      Standard_Real spinedeb = FirstParameter();
      Standard_Real spinefin = LastParameter();

      gp_XY FirstUandR = parandrad.First();
      gp_XY LastUandR  = parandrad.Last();
      if (Abs( spinedeb - FirstUandR.X() ) > gp::Resolution())
	{
	  FirstUandR.SetX( spinedeb );
	  parandrad.Prepend( FirstUandR );
	}
      if (Abs( spinefin - LastUandR.X() ) > gp::Resolution())
	{
	  LastUandR.SetX( spinefin );
	  parandrad.Append( LastUandR );
	}

      if (IsPeriodic())
	parandrad(parandrad.Length()).SetY( parandrad(1).Y() );
    }
}

//=======================================================================
//function : SetRadius
//purpose  : 
//=======================================================================

void  ChFiDS_FilSpine::SetRadius(const Standard_Real Radius,
				 const TopoDS_Edge&  E)
{
  splitdone = Standard_False;
  Standard_Integer IE = Index(E);
  gp_XY FirstUandR( 0., Radius ), LastUandR( 1., Radius );
  SetRadius( FirstUandR, IE );
  SetRadius( LastUandR, IE );
}

//=======================================================================
//function : UnSetRadius
//purpose  : 
//=======================================================================

void  ChFiDS_FilSpine::UnSetRadius(const TopoDS_Edge&  E)
{
  splitdone = Standard_False;
  Standard_Integer IE = Index(E);

  Standard_Real Uf = FirstParameter(IE);
  Standard_Real Ul = LastParameter(IE);
  Standard_Integer ifirst = 0, ilast = 0;
  for (Standard_Integer i = 1; i <= parandrad.Length(); i++)
    {
      if (Abs(parandrad(i).X()-Uf) <= gp::Resolution())
	ifirst = i;
      if (Abs(parandrad(i).X()-Ul) <= gp::Resolution())
	ilast = i;
    }
  if (ifirst != 0 && ilast != 0)
    parandrad.Remove( ifirst, ilast );
}

//=======================================================================
//function : SetRadius
//purpose  : 
//=======================================================================

void  ChFiDS_FilSpine::SetRadius(const Standard_Real  Radius,
				 const TopoDS_Vertex& V)
{
  Standard_Real npar = Absc(V);
  gp_XY UandR( npar, Radius );
  SetRadius( UandR, 0 );
}

//=======================================================================
//function : SetRadius
//purpose  : 
//=======================================================================

void  ChFiDS_FilSpine::SetRadius(const Standard_Real  Radius)
{
  parandrad.Clear();
  gp_XY FirstUandR( FirstParameter(), Radius );
  gp_XY LastUandR( LastParameter(), Radius );
  SetRadius( FirstUandR, 0 );
  SetRadius( LastUandR, 0 );
}

//=======================================================================
//function : SetRadius
//purpose  : 
//=======================================================================

void  ChFiDS_FilSpine::SetRadius(const gp_XY&           UandR,
				 const Standard_Integer IinC)
{
  Standard_Real W;
  if (IinC == 0)
    W = UandR.X();
  else
    {
      Standard_Real Uf = FirstParameter(IinC);
      Standard_Real Ul = LastParameter(IinC);
      W = Uf + UandR.X()*( Ul - Uf );
    }

  gp_XY pr( W, UandR.Y() );
  Standard_Integer i;
  for(i = 1; i <= parandrad.Length(); i++){
    if(parandrad.Value(i).X() == W) {
      parandrad.ChangeValue(i).SetY( UandR.Y() );
      if (!splitdone) return;
      else break;
    }
    else if(parandrad.Value(i).X() > W) {
      parandrad.InsertBefore(i,pr);
      if (!splitdone) return;
      else break;
    }
  }
  if (i == parandrad.Length()+1) parandrad.Append(pr);

  //si le split est done il faut rejouer la law 
  //correspondant au parametre W 
  if (splitdone) {
    ChFiDS_ListIteratorOfListOfHElSpine It(elspines);
    Law_ListIteratorOfLaws Itl(laws);
    Handle(ChFiDS_HElSpine) Els = It.Value();
    if (Els->IsPeriodic()) Itl.Value() = ComputeLaw(Els);
    else{
      Standard_Real nW = W;
      if(IsPeriodic())
	nW = ElCLib::InPeriod(W,FirstParameter(),LastParameter());
      for (; It.More(); It.Next(), Itl.Next()) {
	Els = It.Value();
	Standard_Real uf = Els->FirstParameter();
	Standard_Real ul = Els->LastParameter();
	if(uf <= W && W <= ul) {
	  Itl.Value() = ComputeLaw(Els);
	}
      }  
    }
  }
}

//=======================================================================
//function : UnSetRadius
//purpose  : 
//=======================================================================

void  ChFiDS_FilSpine::UnSetRadius(const TopoDS_Vertex& V)
{
  Standard_Real npar = Absc(V);
  for(Standard_Integer i = 1; i <= parandrad.Length(); i++){
    if(parandrad.Value(i).X() == npar) {
      parandrad.Remove(i);
      break;
    }
  }
}

//=======================================================================
//function : SetRadius
//purpose  : 
//=======================================================================

void  ChFiDS_FilSpine::SetRadius(const Handle(Law_Function)& C,
				 const Standard_Integer      IinC)
{
  splitdone = Standard_False;
  Handle(Law_Composite) prout = new Law_Composite();
  Law_Laws& lst = prout->ChangeLaws();
  lst.Append(C);
  parandrad.Clear();
}


//=======================================================================
//function : IsConstant
//purpose  : 
//=======================================================================

Standard_Boolean  ChFiDS_FilSpine::IsConstant()const 
{
  if (parandrad.IsEmpty())
    return Standard_False;

  Standard_Boolean isconst = Standard_True;
  Standard_Real Radius = parandrad(1).Y();
  for (Standard_Integer i = 2; i <= parandrad.Length(); i++)
    if (Abs( Radius - parandrad(i).Y() ) > Precision::Confusion())
      {
	isconst = Standard_False;
	break;
      }
  return isconst;
}

//=======================================================================
//function : IsConstant
//purpose  : 
//=======================================================================

Standard_Boolean  ChFiDS_FilSpine::IsConstant(const Standard_Integer IE)const 
{
  Standard_Real Uf = FirstParameter(IE);
  Standard_Real Ul = LastParameter(IE);

  Standard_Real StartRad, par, rad;
  Standard_Integer i;
  for (i = 1; i < parandrad.Length(); i++)
    {
      par = parandrad(i).X();
      rad = parandrad(i).Y();
      Standard_Real nextpar = parandrad(i+1).X();
      if (Abs( Uf-par ) <= gp::Resolution() ||
	  par < Uf && Uf < nextpar && nextpar-Uf > gp::Resolution())
	{
	  StartRad = rad;
	  break;
	}
    }
  for (i++; i <= parandrad.Length(); i++)
    {
      par = parandrad(i).X();
      rad = parandrad(i).Y();
      if (Abs( rad-StartRad ) > Precision::Confusion())
	return Standard_False;
      if (Abs( Ul-par ) <= gp::Resolution())
	return Standard_True;
      if (par > Ul)
	return Standard_True;
    }
  return Standard_True;
}

//=======================================================================
//function : Radius
//purpose  : 
//=======================================================================

Standard_Real  ChFiDS_FilSpine::Radius(const TopoDS_Edge& E)const 
{
  Standard_Integer IE = Index(E);
  return Radius(IE);
}

//=======================================================================
//function : Radius
//purpose  : 
//=======================================================================

Standard_Real  ChFiDS_FilSpine::Radius(const Standard_Integer IE)const 
{
  Standard_Real Uf = FirstParameter(IE);
  Standard_Real Ul = LastParameter(IE);

  Standard_Real StartRad, par, rad;
  Standard_Integer i;
  for (i = 1; i < parandrad.Length(); i++)
    {
      par = parandrad(i).X();
      rad = parandrad(i).Y();
      Standard_Real nextpar = parandrad(i+1).X();
      if (Abs( Uf-par ) <= gp::Resolution() ||
	  par < Uf && Uf < nextpar && nextpar-Uf > gp::Resolution())
	{
	  StartRad = rad;
	  break;
	}
    }
  for (i++; i <= parandrad.Length(); i++)
    {
      par = parandrad(i).X();
      rad = parandrad(i).Y();
      if (Abs( rad-StartRad ) > Precision::Confusion())
	Standard_DomainError::Raise("Arete non constante");
      if (Abs( Ul-par ) <= gp::Resolution())
	return StartRad;
      if (par > Ul)
	return StartRad;
    }
  return StartRad;
}

//=======================================================================
//function : Radius
//purpose  : 
//=======================================================================

Standard_Real  ChFiDS_FilSpine::Radius()const 
{
  if (!IsConstant()) Standard_DomainError::Raise("Spine non constante");
  return parandrad(1).Y();
}

//=======================================================================
//function : AppendElSpine
//purpose  : 
//=======================================================================

void ChFiDS_FilSpine::AppendElSpine(const Handle(ChFiDS_HElSpine)& Els)
{
  ChFiDS_Spine::AppendElSpine(Els);
  AppendLaw(Els);
}

//=======================================================================
//function : AppendLaw
//purpose  : 
//=======================================================================

void ChFiDS_FilSpine::AppendLaw(const Handle(ChFiDS_HElSpine)& Els)
{
  Handle(Law_Composite) l = ComputeLaw(Els);
  laws.Append(l);
}

static void mklaw(Law_Laws&                  res, 
		  const TColgp_SequenceOfXY& pr,
		  const Standard_Real        curdeb,
		  const Standard_Real        curfin,
		  const Standard_Real        Rdeb,
		  const Standard_Real        Rfin,
		  const Standard_Boolean     recadre,
		  const Standard_Real        deb,
		  const Standard_Real        fin,
		  const Standard_Real        tol3d)
{
  TColgp_SequenceOfXY npr;
  Standard_Real rad = Rdeb, raf = Rfin;
  Standard_Boolean yaunpointsurledeb = Standard_False;
  Standard_Boolean yaunpointsurlefin = Standard_False;
  if(!pr.IsEmpty()){
    for (Standard_Integer i = 1; i <= pr.Length(); i++){
      const gp_XY& cur = pr.Value(i);
      Standard_Real wcur = cur.X();
      if(recadre) wcur = ElCLib::InPeriod(wcur,deb,fin);
      if( curdeb - tol3d <= wcur && wcur <= curfin + tol3d) {
	if(wcur - curdeb < tol3d) {
	  yaunpointsurledeb = Standard_True;
	  gp_XY ncur = cur;
	  if(Rdeb < 0.) rad = cur.Y();
	  ncur.SetCoord(curdeb,rad);
	  npr.Append(ncur);
	}  
	else if(curfin - wcur < tol3d) {
	  yaunpointsurlefin = Standard_True;
	  gp_XY ncur = cur;
	  if(Rfin < 0.) raf = cur.Y();
	  ncur.SetCoord(curfin,raf);
	  npr.Append(ncur);
	}  
	else npr.Append(gp_XY(wcur,cur.Y()));
      }
    }
  }

  if(npr.IsEmpty()){
    if( Rdeb < 0. && Rfin <0. ) 
      Standard_DomainError::Raise("construction de la loi impossible");
    else if(Rdeb < 0. || Rfin <0.){
      Standard_Real r = (Rfin<0.)? Rdeb  : Rfin;
      Handle(Law_Constant) loi = new Law_Constant();
      loi->Set(r,curdeb,curfin);
      res.Append(loi);
    }
    else{
      Handle(Law_S) loi = new Law_S();
      loi->Set(curdeb,Rdeb,curfin,Rfin);
      res.Append(loi);
    }
  }
  else{
    //tri bourrin!!
    if(!yaunpointsurledeb && Rdeb >= 0.) npr.Append(gp_XY(curdeb,Rdeb));
    if(!yaunpointsurlefin && Rfin >= 0.) npr.Append(gp_XY(curfin,Rfin));
    Standard_Integer nbp = npr.Length();
//    for(Standard_Integer i = 1; i < nbp; i++){
    Standard_Integer i;
    for(i = 1; i < nbp; i++){
      for(Standard_Integer j = i + 1; j <= nbp; j++){
	if(npr.Value(i).X() > npr.Value(j).X()){
	  gp_XY temp = npr.Value(i);
	  npr.ChangeValue(i) = npr.Value(j);
	  npr.ChangeValue(j) = temp;
	}
      }      
    }
    //On vire les doublons.
    Standard_Boolean fini = (nbp <= 1);
    i = 1;
    while (!fini) {
      if(fabs(npr.Value(i).X() - npr.Value(i+1).X()) < tol3d) {
	npr.Remove(i);
	nbp--;
      }
      else i++;
      fini = (i >= nbp);
    }

    if(rad < 0.) {
      Handle(Law_Constant) loi = new Law_Constant();
      loi->Set(npr.First().Y(),curdeb,npr.First().X());
      res.Append(loi);
    }
    if(nbp > 1){
      TColgp_Array1OfPnt2d tpr(1,nbp);
      for (Standard_Integer l = 1; l <= nbp; l++) {
	tpr(l).SetXY(npr.Value(l));
      }
      Handle(Law_Interpol) curloi = new Law_Interpol();
      curloi->Set(tpr,0.,0.,Standard_False);
      res.Append(curloi);
    }
    if(raf < 0.) {
      Handle(Law_Constant) loi = new Law_Constant();
      loi->Set(npr.Last().Y(),npr.Last().X(),curfin);
      res.Append(loi);
    }
  }
}
				  
//=======================================================================
//function : ComputeLaw
//purpose  : 
//=======================================================================

Handle(Law_Composite) ChFiDS_FilSpine::ComputeLaw
(const Handle(ChFiDS_HElSpine)& Els)
{
  Standard_Real tol3d = Precision::Confusion();
  Standard_Real deb,fin,curdeb,curfin;
  curdeb = deb = Els->FirstParameter();
  curfin = fin = Els->LastParameter();
  Standard_Integer ideb = Index(deb,Standard_True);
  Standard_Integer ifin = Index(fin,Standard_False);
  Standard_Integer len = NbEdges();
  // si la spine est periodique attention aux index et aux parametres!!!
  Standard_Real spinedeb = FirstParameter();
  Standard_Real spinefin = LastParameter();

  Standard_Integer nbed = ifin - ideb + 1;
  Standard_Integer biddeb = ideb, bidfin = ifin;

  Handle(Law_Composite) loi = new Law_Composite();
  Law_Laws& list = loi->ChangeLaws();
#ifndef DEB
  Standard_Real Rdeb = 0., Rfin = 0., Rcur;
#else
  Standard_Real Rdeb, Rfin, Rcur;
#endif
  Standard_Integer icur = 1;
  Handle(Law_S) sl;
  Handle(Law_Constant) lastloi;
  Standard_Boolean lawencours = Standard_False;


  if(IsPeriodic()){
    if(deb < 0 && ideb > ifin)  bidfin += len;
    else if(fin > LastParameter(len) && ideb > ifin)  bidfin += len;
    nbed = bidfin - biddeb + 1;
  }
  TColStd_Array1OfInteger ind(1,nbed);
  Standard_Integer j = 1;
  for(Standard_Integer i = biddeb; i <= bidfin; i++){
    ind(j++) = ((i - 1)%len) + 1; 
  }

  if(Els->IsPeriodic()){
    //On cree une composite periodique de range eventuellement 
    //decale par rapport a l elspine, pour ne pas faire de l 
    //origine un point singulier.
    loi->SetPeriodic();
    //Y a t il une arete constante?
//    for(Standard_Integer k = 1; k <= len; k++){
    Standard_Integer k;
    for( k = 1; k <= len; k++){
      if (IsConstant(k)){ // oui !
	spinedeb = deb = curdeb = FirstParameter(k);
	spinefin = fin = deb + Period();
	for(Standard_Integer l = 1; l <= len; l++){
	  ind(l) = ((k + l -2)%len) + 1; 
	}
	Rdeb = Rfin = Radius(k);
	icur++;
	if(len == 1) curfin = LastParameter(k);//car le InPeriod va rendre 0.!!!
	else curfin = ElCLib::InPeriod(LastParameter(k),spinedeb,spinefin);
	Handle(Law_Constant) curloi = new Law_Constant();
	curloi->Set(Rdeb,curdeb,curfin);
	list.Append(curloi);
	curdeb = curfin;
	break;
      }
    }
    if(k > len){ // non !
      if(parandrad.IsEmpty()) 
	Standard_DomainError::Raise("Rayon non defini");
      Standard_Integer nbp = parandrad.Length();
      if(nbp > 1){
	deb = parandrad.First().X();
	fin = deb + Period();
	if(parandrad.Last().X() - fin <  - tol3d) nbp++;
      }
      else nbp++;
      TColgp_Array1OfPnt2d pr(1,nbp);
      for (Standard_Integer l = 1; l < nbp; l++) {
	pr(l).SetXY(parandrad(l));
      }
      pr(nbp).SetCoord(fin,pr(1).Y());
      Handle(Law_Interpol) curloi = new Law_Interpol();
      curloi->Set(pr,Standard_True);
      list.Append(curloi);
      return loi;
    }
  }
  else if(IsPeriodic()){
    // le rayon au debut.
    if (IsConstant(ind(1))) {
      Rdeb = Radius(ind(1));
      curfin = LastParameter(ind(1));
      curfin = ElCLib::InPeriod(curfin,spinedeb + tol3d, spinefin + tol3d);
      curfin = Min(fin,curfin);
      Handle(Law_Constant) curloi = new Law_Constant();
      curloi->Set(Rdeb,curdeb,curfin);
      list.Append(curloi);
      curdeb = curfin;
      icur++;
    } 
    else{
      // Il y a forcement un kpart juste avant!
      Standard_Integer iprec = (ind(1) - 1);
      if(iprec == 0) iprec = len;
      if (IsConstant(iprec)){
	Rdeb = Radius(iprec);
      }
      else Standard_DomainError::Raise("AppendLaw : pas de precedant constant bizarre!!");
      lawencours = Standard_True;
    }
    // le rayon a la fin.
    if (IsConstant(ind(nbed))) Rfin = Radius(ind(nbed));
    else{
      // Il y a forcement un kpart juste apres!
      Standard_Integer isuiv = (ind(nbed) + 1);
      if(isuiv == len + 1) isuiv = 1;
      if (IsConstant(isuiv)) {
	Rfin = Radius(isuiv);
      }
      else Standard_DomainError::Raise("AppendLaw : pas de suivant constant bizarre!!");
    }
  }
  else{
    // le rayon au debut.
    if (IsConstant(ind(1))) {
      Rdeb = Radius(ind(1));
      curfin = Min(fin,LastParameter(ind(1)));
      Handle(Law_Constant) curloi = new Law_Constant();
      curloi->Set(Rdeb,curdeb,curfin);
      list.Append(curloi);
      curdeb = curfin;
      icur++;
    } 
    else{
      if(ind(1) > 1){
	if (IsConstant(ind(1) - 1)){
	  Rdeb = Radius(ind(1) - 1);
	}
	else Standard_DomainError::Raise("AppendLaw : pas de precedant constant");
      }
      else if(parandrad.IsEmpty()){
	Standard_DomainError::Raise("AppendLaw : pas rayon sur vertex");
      }
      else Rdeb = -1.;
      lawencours = Standard_True;
    }
    // le rayon a la fin.
    if (IsConstant(ind(nbed))) Rfin = Radius(ind(nbed));
    else{
      if(ind(nbed) < len){
	if (IsConstant(ind(nbed) + 1)) Rfin = Radius(ind(nbed) + 1);
	else Standard_DomainError::Raise("AppendLaw : pas de suivant constant");
      }
      else if(parandrad.IsEmpty()){
	Standard_DomainError::Raise("AppendLaw : pas rayon sur vertex");
      }
      else Rfin = -1.;
    }
  }

  // On a les infos sur les extremites de l elspine, 
  // on parcourt toutes les aretes 
  for(; icur <= nbed; icur++){
    if (IsConstant(ind(icur))) {
      Rcur = Radius(ind(icur));
      if(lawencours){
	Law_Laws temp;
	mklaw(temp,parandrad,curdeb,curfin,Rdeb,Rcur,
	      IsPeriodic(),spinedeb,spinefin,tol3d);
	list.Append(temp);
	lawencours = Standard_False;
	curdeb = curfin;
      }
      curfin = LastParameter(ind(icur));
      if(IsPeriodic()){ 
	curfin = ElCLib::InPeriod(curfin,spinedeb + tol3d, spinefin + tol3d);
	if(ind(icur) == ind(nbed)){
	  // Attention le curfin peut etre faut si le dernier edge passe par
	  // dessus l origine de la spine periodique.
	  Standard_Real biddeb = FirstParameter(ind(icur));
	  biddeb = ElCLib::InPeriod(biddeb,spinedeb + tol3d, spinefin + tol3d);
	  if(biddeb >= curfin) curfin = fin;
	  else curfin = Min(fin,curfin);
	}
	else curfin = Min(fin,curfin);
      }
      if((curfin - curdeb) > tol3d){
	Rdeb = Rcur;
	Handle(Law_Constant) curloi = new Law_Constant();
	curloi->Set(Rdeb,curdeb,curfin);
	list.Append(curloi);
	curdeb = curfin;
      }
    }
    else {
      curfin = LastParameter(ind(icur));
      if(IsPeriodic()) 
	curfin = ElCLib::InPeriod(curfin,spinedeb + tol3d, spinefin + tol3d);
      curfin = Min(fin,curfin);
      lawencours = Standard_True;
      if(ind(icur) == ind(nbed)){
	// Attention le curfin peut etre faut si le dernier edge passe par
	// dessus l origine de la spine periodique.
	if(IsPeriodic()) {
	  Standard_Real biddeb = FirstParameter(ind(icur));
	  curfin = LastParameter(ind(icur));
	  biddeb = ElCLib::InPeriod(biddeb,spinedeb + tol3d, spinefin + tol3d);
	  curfin = ElCLib::InPeriod(curfin,spinedeb + tol3d, spinefin + tol3d);
	  if(biddeb >= curfin) curfin = fin;
	  else curfin = Min(fin,curfin);
	}
	// ou si on est en fin de spine avec prolongement.
	else if(ind(icur) == len) curfin = fin;
	Law_Laws temp;
	mklaw(temp,parandrad,curdeb,curfin,Rdeb,Rfin,
	      IsPeriodic(),spinedeb,spinefin,tol3d);
	list.Append(temp);
      }
    }
  }
  if(!lastloi.IsNull()) list.Append(lastloi);
  return loi;
}

//=======================================================================
//function : Law
//purpose  : 
//=======================================================================

Handle(Law_Composite) ChFiDS_FilSpine::Law(const Handle(ChFiDS_HElSpine)& Els) const 
{
  ChFiDS_ListIteratorOfListOfHElSpine Itsp(elspines);
  Law_ListIteratorOfLaws Itl(laws);
  for(; Itsp.More(); Itsp.Next(), Itl.Next()){
    if(Els == Itsp.Value()){
      return Handle(Law_Composite)::DownCast(Itl.Value());
    }
  }
  return Handle(Law_Composite)();
}

//=======================================================================
//function : Law
//purpose  : 
//=======================================================================

Handle(Law_Function)& ChFiDS_FilSpine::ChangeLaw(const TopoDS_Edge& E)
{
  if(!SplitDone()) {
    Standard_DomainError::Raise("ChFiDS_FilSpine::ChangeLaw : les bornes ne sont pas a jour");
  }
  Standard_Integer IE = Index(E);
  if (IsConstant(IE)) {
    Standard_DomainError::Raise("ChFiDS_FilSpine::ChangeLaw : pas de loi sur les aretes constantes");
  }
  Handle(ChFiDS_HElSpine) hsp = ElSpine(IE);
  Standard_Real w = 0.5*(FirstParameter(IE) + LastParameter(IE));
  Handle(Law_Composite) lc = Law(hsp);
  return lc->ChangeElementaryLaw(w);
}


//=======================================================================
//function : Radius
//purpose  : 
//=======================================================================

Standard_Real  ChFiDS_FilSpine::MaxRadFromSeqAndLaws()const 
{
  Standard_Real MaxRad = 0.;

  for (Standard_Integer i = 1; i <= parandrad.Length(); i++)
    if (parandrad(i).Y() > MaxRad)
      MaxRad = parandrad(i).Y();

  Law_ListIteratorOfLaws itl( laws );
  for (; itl.More(); itl.Next())
    {
      Handle(Law_Function) law = itl.Value();
      Standard_Real fpar, lpar, par, delta, rad;
      law->Bounds( fpar, lpar );
      delta = (lpar - fpar)*0.2;
      for (Standard_Integer i = 0; i <= 4; i++)
	{
	  par = fpar + i*delta;
	  rad = law->Value(par);
	  if (rad > MaxRad)
	    MaxRad = rad;
	}
      rad = law->Value(lpar);
      if (rad > MaxRad)
	MaxRad = rad;
    }
  
  return MaxRad;
}
