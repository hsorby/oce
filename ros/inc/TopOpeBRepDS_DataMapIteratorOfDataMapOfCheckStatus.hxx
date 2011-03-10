// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopOpeBRepDS_CheckStatus_HeaderFile
#include <TopOpeBRepDS_CheckStatus.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus_HeaderFile
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus.hxx>
#endif
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_DataMapOfCheckStatus;
class TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus;



class TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus();
  
  Standard_EXPORT   TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus(const TopOpeBRepDS_DataMapOfCheckStatus& aMap);
  
  Standard_EXPORT     void Initialize(const TopOpeBRepDS_DataMapOfCheckStatus& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const TopOpeBRepDS_CheckStatus& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
