#include <Prs2d_Drawer.ixx>

#include <Prs2d_AspectRoot.hxx>

#include <Prs2d_AspectLine.hxx>
#include <Prs2d_AspectText.hxx>

#include <Prs2d_AspectHidingPoly.hxx>
#include <Prs2d_AspectHidingText.hxx>
#include <Prs2d_AspectFramedText.hxx>

#include <Prs2d_DataMapOfAspectRoot.hxx>
#include <Quantity_Color.hxx>
#include <Aspect_LineStyle.hxx>
#include <Aspect_MarkerStyle.hxx>
#include <Aspect_FontStyle.hxx>


#define NUM_ASPECTROOT 29

Prs2d_Drawer::Prs2d_Drawer()

 :  
	myMaxParameterValue( 500000. )
		 
{

 Prs2d_DataMapOfAspectRoot aDataMapAspectRoot(NUM_ASPECTROOT);
 myDataMapAspectRoot = aDataMapAspectRoot;

 InitAspectRootMap();
 
}

Handle(Prs2d_AspectRoot) Prs2d_Drawer::FindAspect( const Prs2d_AspectName anAspectName ) const {

    return myDataMapAspectRoot(anAspectName);

}

void Prs2d_Drawer::SetAspect( const Handle(Prs2d_AspectRoot)& anAspectRoot,
                              const Prs2d_AspectName anAspectName) {

    myDataMapAspectRoot( anAspectName ) = anAspectRoot;
}

void Prs2d_Drawer::InitAspectRootMap() {
 
 Handle(Prs2d_AspectLine) myLineAspect = new Prs2d_AspectLine();
 myDataMapAspectRoot.Bind( Prs2d_AN_LINE, myLineAspect );

 Handle(Prs2d_AspectText)  myTextAspect   = new Prs2d_AspectText();
 myDataMapAspectRoot.Bind( Prs2d_AN_TEXT, myTextAspect );

 Handle(Prs2d_AspectHidingPoly) myHidingPolyAspect = new Prs2d_AspectHidingPoly
       (Quantity_NOC_BLACK, Quantity_NOC_WHITE, Aspect_TOL_SOLID, Aspect_WOL_THIN);
 myDataMapAspectRoot.Bind( Prs2d_AN_HIDINGPOLY, myHidingPolyAspect );
   
 Handle(Prs2d_AspectHidingText) myHidingTextAspect = new Prs2d_AspectHidingText
	   (Quantity_NOC_YELLOW, Quantity_NOC_BLACK, Quantity_NOC_WHITE, 
	    Aspect_WOL_THIN,Aspect_TOF_DEFAULT, 0.0, 1.0, 1.0, Standard_False);
 myDataMapAspectRoot.Bind( Prs2d_AN_HIDINGTEXT, myHidingTextAspect );

 Handle(Prs2d_AspectFramedText) myFramedTextAspect = new Prs2d_AspectFramedText
	   (Quantity_NOC_BLACK, Quantity_NOC_WHITE, Aspect_WOL_THIN, Aspect_TOF_DEFAULT,
		0.0, 1.0, 1.0, Standard_False );
 myDataMapAspectRoot.Bind( Prs2d_AN_FRAMEDTEXT, myFramedTextAspect );

}

void Prs2d_Drawer::SetMaxParameterValue ( const Standard_Real Value ) {
  myMaxParameterValue = Value;
}

Standard_Real Prs2d_Drawer::MaxParameterValue () const {
  return myMaxParameterValue;
}
