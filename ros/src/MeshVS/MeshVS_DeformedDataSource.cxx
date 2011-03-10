// File:	MeshVS_DeformedDataSource.cxx
// Created:	Thu Dec 11 2003
// Author:	Alexander SOLOVYOV
// Copyright:	Open CASCADE 2003

#include <MeshVS_DeformedDataSource.ixx>
#include <MeshVS_Buffer.hxx>

//================================================================
// Function : Constructor MeshVS_DeformedDataSource
// Purpose  :
//================================================================
MeshVS_DeformedDataSource::MeshVS_DeformedDataSource( const Handle(MeshVS_DataSource)& theNonDeformDS,
                                                      const Standard_Real theMagnify )
{
  myNonDeformedDataSource = theNonDeformDS;
  SetMagnify ( theMagnify );
}

//================================================================
// Function : shiftCoord
// Purpose  : auxiliary: shift coordinate of the node on a given vector
//================================================================

static inline void shiftCoord (TColStd_Array1OfReal& Coords, Standard_Integer i, const gp_Vec &aVec)
{
  Coords(3*i-2) = Coords(3*i-2) + aVec.X();
  Coords(3*i-1) = Coords(3*i-1) + aVec.Y();
  Coords(3*i)   = Coords(3*i)   + aVec.Z();
}

//================================================================
// Function : GetGeom
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DeformedDataSource::GetGeom( const Standard_Integer ID,
                                                     const Standard_Boolean IsElement,
                                                     TColStd_Array1OfReal& Coords,
                                                     Standard_Integer& NbNodes,
                                                     MeshVS_EntityType& Type) const
{
  if ( myNonDeformedDataSource.IsNull() ||
       ! myNonDeformedDataSource->GetGeom ( ID, IsElement, Coords, NbNodes, Type ) )
    return Standard_False;
  
  if ( Type==MeshVS_ET_Node )
  {
    gp_Vec Vect;
    if ( ! GetVector( ID, Vect ) )
      return Standard_False;
    shiftCoord ( Coords, 1, myMagnify * Vect );
  }
  else
  {
    MeshVS_Buffer aNodesBuf (NbNodes * sizeof(Standard_Integer));
    TColStd_Array1OfInteger aNodes (aNodesBuf, 1, NbNodes);
    if ( !myNonDeformedDataSource->GetNodesByElement ( ID, aNodes, NbNodes ) )
      return Standard_False;
    for ( int i=1; i <= NbNodes; i++ )
    {
      gp_Vec Vect;
      if ( ! GetVector( aNodes(i), Vect ) )
        return Standard_False;
      shiftCoord ( Coords, i, myMagnify * Vect );
    }
  }
  return Standard_True;
}

//================================================================
// Function : GetGeomType
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DeformedDataSource::GetGeomType( const Standard_Integer ID,
                                                         const Standard_Boolean IsElement,
                                                         MeshVS_EntityType& Type) const
{
  if ( myNonDeformedDataSource.IsNull() )
    return Standard_False;
  else
    return myNonDeformedDataSource->GetGeomType( ID, IsElement, Type );
}

//================================================================
// Function : Get3DGeom
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DeformedDataSource::Get3DGeom( const Standard_Integer ID, 
                                                       Standard_Integer& NbNodes,
                                                       Handle( MeshVS_HArray1OfSequenceOfInteger )& Data ) const
{
  if( myNonDeformedDataSource.IsNull() )
    return Standard_False;
  else
    return myNonDeformedDataSource->Get3DGeom( ID, NbNodes, Data );
}

//================================================================
// Function : GetAddr
// Purpose  :
//================================================================
Standard_Address MeshVS_DeformedDataSource::GetAddr( const Standard_Integer ID,
                                                     const Standard_Boolean IsElement ) const
{
  if ( myNonDeformedDataSource.IsNull() )
    return 0;
  else
    return myNonDeformedDataSource->GetAddr( ID, IsElement );
}

//================================================================
// Function : GetNodesByElement
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DeformedDataSource::GetNodesByElement
                         (const Standard_Integer   ID,
                          TColStd_Array1OfInteger& NodeIDs,
                          Standard_Integer&        NbNodes) const
{
  if ( myNonDeformedDataSource.IsNull() )
    return Standard_False;
  else
    return myNonDeformedDataSource->GetNodesByElement( ID, NodeIDs, NbNodes );
}

//================================================================
// Function : GetAllNodes
// Purpose  :
//================================================================
const TColStd_PackedMapOfInteger& MeshVS_DeformedDataSource::GetAllNodes() const
{
  if ( myNonDeformedDataSource.IsNull() )
    return myEmptyMap;
  else
    return myNonDeformedDataSource->GetAllNodes();
}

//================================================================
// Function : GetAllElements
// Purpose  :
//================================================================
const TColStd_PackedMapOfInteger& MeshVS_DeformedDataSource::GetAllElements() const
{
  if ( myNonDeformedDataSource.IsNull() )
    return myEmptyMap;
  else
    return myNonDeformedDataSource->GetAllElements();
}

//================================================================
// Function : GetVectors
// Purpose  :
//================================================================
const MeshVS_DataMapOfIntegerVector& MeshVS_DeformedDataSource::GetVectors() const
{
  return myVectors;
}

//================================================================
// Function : SetVectors
// Purpose  :
//================================================================
void MeshVS_DeformedDataSource::SetVectors( const MeshVS_DataMapOfIntegerVector& Map )
{
  myVectors = Map;
}

//================================================================
// Function : GetVector
// Purpose  :
//================================================================
Standard_Boolean MeshVS_DeformedDataSource::GetVector( const Standard_Integer ID,
                                                       gp_Vec& Vect ) const
{
  Standard_Boolean aRes = myVectors.IsBound ( ID );
  if ( aRes )
    Vect = myVectors.Find ( ID );
  return aRes;
}

//================================================================
// Function : SetVector
// Purpose  :
//================================================================
void MeshVS_DeformedDataSource::SetVector( const Standard_Integer ID,
                                           const gp_Vec& Vect )
{
  Standard_Boolean aRes = myVectors.IsBound ( ID );
  if ( aRes )
    myVectors.ChangeFind ( ID ) = Vect;
  else
    myVectors.Bind( ID, Vect );
}

//================================================================
// Function : SetNonDeformedDataSource
// Purpose  :
//================================================================
void MeshVS_DeformedDataSource::SetNonDeformedDataSource( const Handle(MeshVS_DataSource)& theDS )
{
  myNonDeformedDataSource = theDS;
}

//================================================================
// Function : GetNonDeformedDataSource
// Purpose  :
//================================================================
Handle_MeshVS_DataSource MeshVS_DeformedDataSource::GetNonDeformedDataSource() const
{
  return myNonDeformedDataSource;
}

//================================================================
// Function : SetMagnify
// Purpose  :
//================================================================
void MeshVS_DeformedDataSource::SetMagnify( const Standard_Real theMagnify )
{
  if ( theMagnify<=0 )
    myMagnify = 1.0;
  else
    myMagnify = theMagnify;
}

//================================================================
// Function : GetMagnify
// Purpose  :
//================================================================
Standard_Real MeshVS_DeformedDataSource::GetMagnify() const
{
  return myMagnify;
}
