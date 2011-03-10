// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ViewerTest_DoubleMapOfInteractiveAndName_HeaderFile
#define _ViewerTest_DoubleMapOfInteractiveAndName_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName_HeaderFile
#include <Handle_ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_MultiplyDefined;
class Standard_NoSuchObject;
class Standard_Transient;
class TCollection_AsciiString;
class TColStd_MapTransientHasher;
class ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName;
class ViewerTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName;



class ViewerTest_DoubleMapOfInteractiveAndName  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   ViewerTest_DoubleMapOfInteractiveAndName(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     ViewerTest_DoubleMapOfInteractiveAndName& Assign(const ViewerTest_DoubleMapOfInteractiveAndName& Other) ;
    ViewerTest_DoubleMapOfInteractiveAndName& operator =(const ViewerTest_DoubleMapOfInteractiveAndName& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~ViewerTest_DoubleMapOfInteractiveAndName()
{
  Clear();
}
  
  Standard_EXPORT     void Bind(const Handle(Standard_Transient)& K1,const TCollection_AsciiString& K2) ;
  
  Standard_EXPORT     Standard_Boolean AreBound(const Handle(Standard_Transient)& K1,const TCollection_AsciiString& K2) const;
  
  Standard_EXPORT     Standard_Boolean IsBound1(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT     Standard_Boolean IsBound2(const TCollection_AsciiString& K) const;
  
  Standard_EXPORT    const TCollection_AsciiString& Find1(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT    const Handle_Standard_Transient& Find2(const TCollection_AsciiString& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind1(const Handle(Standard_Transient)& K) ;
  
  Standard_EXPORT     Standard_Boolean UnBind2(const TCollection_AsciiString& K) ;





protected:





private:

  
  Standard_EXPORT   ViewerTest_DoubleMapOfInteractiveAndName(const ViewerTest_DoubleMapOfInteractiveAndName& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
