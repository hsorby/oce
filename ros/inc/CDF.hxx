// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDF_HeaderFile
#define _CDF_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class CDF_Directory;
class CDF_DirectoryIterator;
class CDF_Session;
class CDF_Application;
class CDF_StoreList;
class CDF_Store;
class CDF_MetaDataDriver;
class CDF_MetaDataDriverFactory;
class CDF_Timer;



class CDF  {
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

  
  Standard_EXPORT   static  void GetLicense(const Standard_Integer anApplicationIdentifier) ;
  
  Standard_EXPORT   static  Standard_Boolean IsAvailable(const Standard_Integer anApplicationIdentifier) ;





protected:





private:




friend class CDF_Directory;
friend class CDF_DirectoryIterator;
friend class CDF_Session;
friend class CDF_Application;
friend class CDF_StoreList;
friend class CDF_Store;
friend class CDF_MetaDataDriver;
friend class CDF_MetaDataDriverFactory;
friend class CDF_Timer;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
