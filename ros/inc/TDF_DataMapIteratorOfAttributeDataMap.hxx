// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DataMapIteratorOfAttributeDataMap_HeaderFile
#define _TDF_DataMapIteratorOfAttributeDataMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_DataMapNodeOfAttributeDataMap_HeaderFile
#include <Handle_TDF_DataMapNodeOfAttributeDataMap.hxx>
#endif
class Standard_NoSuchObject;
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_AttributeDataMap;
class TDF_DataMapNodeOfAttributeDataMap;



class TDF_DataMapIteratorOfAttributeDataMap  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   TDF_DataMapIteratorOfAttributeDataMap();
  
  Standard_EXPORT   TDF_DataMapIteratorOfAttributeDataMap(const TDF_AttributeDataMap& aMap);
  
  Standard_EXPORT     void Initialize(const TDF_AttributeDataMap& aMap) ;
  
  Standard_EXPORT    const Handle_TDF_Attribute& Key() const;
  
  Standard_EXPORT    const Handle_TDF_Attribute& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
