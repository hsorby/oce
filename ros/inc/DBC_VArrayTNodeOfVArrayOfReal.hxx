// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBC_VArrayTNodeOfVArrayOfReal_HeaderFile
#define _DBC_VArrayTNodeOfVArrayOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_DBC_VArrayNodeOfVArrayOfReal_HeaderFile
#include <Handle_DBC_VArrayNodeOfVArrayOfReal.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class DBC_VArrayOfReal;
class DBC_VArrayNodeOfVArrayOfReal;



class DBC_VArrayTNodeOfVArrayOfReal  {
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

  
      DBC_VArrayTNodeOfVArrayOfReal();
  
      DBC_VArrayTNodeOfVArrayOfReal(const Standard_Real& aValue);
  
        void SetValue(const Standard_Real& aValue) ;
  
        Standard_Address Value() const;





protected:





private:



Standard_Real myValue;


};

#define Item Standard_Real
#define Item_hxx <Standard_Real.hxx>
#define DBC_VArrayNode DBC_VArrayNodeOfVArrayOfReal
#define DBC_VArrayNode_hxx <DBC_VArrayNodeOfVArrayOfReal.hxx>
#define DBC_VArrayTNode DBC_VArrayTNodeOfVArrayOfReal
#define DBC_VArrayTNode_hxx <DBC_VArrayTNodeOfVArrayOfReal.hxx>
#define Handle_DBC_VArrayNode Handle_DBC_VArrayNodeOfVArrayOfReal
#define DBC_VArrayNode_Type_() DBC_VArrayNodeOfVArrayOfReal_Type_()
#define DBC_VArray DBC_VArrayOfReal
#define DBC_VArray_hxx <DBC_VArrayOfReal.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
