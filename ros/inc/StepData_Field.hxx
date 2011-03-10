// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_Field_HeaderFile
#define _StepData_Field_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _StepData_Logical_HeaderFile
#include <StepData_Logical.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_StepData_SelectMember_HeaderFile
#include <Handle_StepData_SelectMember.hxx>
#endif
class Standard_Transient;
class StepData_SelectMember;


//! Defines a generally defined Field for STEP data : can be used <br>
//!           either in any kind of entity to implement it or in free format <br>
//!           entities in a "late-binding" mode <br>
//!           A field can have : no value (or derived), a single value of <br>
//!           any kind, a list of value : single or double list <br>
//! <br>
//!           When a field is set, this defines its new kind (Integer etc..) <br>
//!           A single value is immediately set. A list of value is, firstly <br>
//!           declared as for a kind (Integer String etc), then declared as <br>
//!           a list with its initial size, after this its items are set <br>
//!           Also it can be set in once if the HArray is ready <br>
class StepData_Field  {
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

  //! Creates a Field, empty ("no value defined") <br>
  Standard_EXPORT   StepData_Field();
  //! Creates a Field from another one. If <copy> is True, Handled <br>
//!           data (Select,String,List, not entities) are copied <br>
  Standard_EXPORT   StepData_Field(const StepData_Field& other,const Standard_Boolean copy = Standard_False);
  //! Gets the copy of the values of another field <br>
  Standard_EXPORT     void CopyFrom(const StepData_Field& other) ;
  //! Clears the field, to set it as "no value defined" <br>
//!           Just before SetList, predeclares it as "any" <br>
//!           A Kind can be directly set here to declare a type <br>
  Standard_EXPORT     void Clear(const Standard_Integer kind = 0) ;
  //! Codes a Field as derived (no proper value) <br>
  Standard_EXPORT     void SetDerived() ;
  //! Directly sets the Integer value, if its Kind matches <br>
//!           Integer, Boolean, Logical, or Enum (does not change Kind) <br>
  Standard_EXPORT     void SetInt(const Standard_Integer val) ;
  //! Sets an Integer value (before SetList* declares it as Integer) <br>
  Standard_EXPORT     void SetInteger(const Standard_Integer val = 0) ;
  //! Sets a Boolean value (or predeclares a list as boolean) <br>
  Standard_EXPORT     void SetBoolean(const Standard_Boolean val = Standard_False) ;
  //! Sets a Logical Value (or predeclares a list as logical) <br>
  Standard_EXPORT     void SetLogical(const StepData_Logical val = StepData_LFalse) ;
  //! Sets a Real    Value (or predeclares a list as Real); <br>
  Standard_EXPORT     void SetReal(const Standard_Real val = 0.0) ;
  //! Sets a String  Value (or predeclares a list as String) <br>
//!           Does not redefine the Kind if it is alread String or Enum <br>
  Standard_EXPORT     void SetString(const Standard_CString val = "") ;
  //! Sets an Enum Value (as its integer counterpart) <br>
//!           (or predeclares a list as Enum) <br>
//!           If <text> is given , also sets its textual expression <br>
//!           <val> negative means unknown (known values begin at 0) <br>
  Standard_EXPORT     void SetEnum(const Standard_Integer val = -1,const Standard_CString text = "") ;
  //! Sets a SelectMember (for Integer,Boolean,Enum,Real,Logical) <br>
//!           Hence, the value of the field is accessed through this member <br>
  Standard_EXPORT     void SetSelectMember(const Handle(StepData_SelectMember)& val) ;
  //! Sets an Entity Value <br>
  Standard_EXPORT     void SetEntity(const Handle(Standard_Transient)& val) ;
  //! Predeclares a list as of entity <br>
  Standard_EXPORT     void SetEntity() ;
  //! Declares a field as a list, with an initial size <br>
//!           Initial lower is defaulted as 1, can be defined <br>
//!           The list starts empty, typed by the last Set* <br>
//!           If no Set* before, sets it as "any" (transient/select) <br>
  Standard_EXPORT     void SetList(const Standard_Integer size,const Standard_Integer first = 1) ;
  //! Declares a field as an homogeneous square list, with initial\ <br>
//!           sizes, and initial lowers <br>
  Standard_EXPORT     void SetList2(const Standard_Integer siz1,const Standard_Integer siz2,const Standard_Integer f1 = 1,const Standard_Integer f2 = 1) ;
  //! Sets an undetermined value : can be String, SelectMember, <br>
//!           HArray(1-2) ... else, an Entity <br>
//!           In case of an HArray, determines and records its size(s) <br>
  Standard_EXPORT     void Set(const Handle(Standard_Transient)& val) ;
  //! Declares an item of the list as undefined <br>
//!           (ignored if list not defined as String,Entity or Any) <br>
  Standard_EXPORT     void ClearItem(const Standard_Integer num) ;
  //! Internal access to an Integer Value for a list, plus its kind <br>
  Standard_EXPORT     void SetInt(const Standard_Integer num,const Standard_Integer val,const Standard_Integer kind) ;
  //! Sets an Integer Value for a list (rank num) <br>
//!           (recognizes a SelectMember) <br>
  Standard_EXPORT     void SetInteger(const Standard_Integer num,const Standard_Integer val) ;
  
  Standard_EXPORT     void SetBoolean(const Standard_Integer num,const Standard_Boolean val) ;
  
  Standard_EXPORT     void SetLogical(const Standard_Integer num,const StepData_Logical val) ;
  //! Sets an Enum Value (Integer counterpart), also its text <br>
//!           expression if known (if list has been set as "any") <br>
  Standard_EXPORT     void SetEnum(const Standard_Integer num,const Standard_Integer val,const Standard_CString text = "") ;
  
  Standard_EXPORT     void SetReal(const Standard_Integer num,const Standard_Real val) ;
  
  Standard_EXPORT     void SetString(const Standard_Integer num,const Standard_CString val) ;
  
  Standard_EXPORT     void SetEntity(const Standard_Integer num,const Handle(Standard_Transient)& val) ;
  
  Standard_EXPORT     Standard_Boolean IsSet(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  //! Returns the kind of an item in a list or double list <br>
//!           It is the kind of the list, except if it is "Any", in such a <br>
//!           case the true kind is determined and returned <br>
  Standard_EXPORT     Standard_Integer ItemKind(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  //! Returns the kind of the field <br>
//!           <type> True (D) : returns only the type itself <br>
//!           else, returns the complete kind <br>
  Standard_EXPORT     Standard_Integer Kind(const Standard_Boolean type = Standard_True) const;
  
  Standard_EXPORT     Standard_Integer Arity() const;
  
  Standard_EXPORT     Standard_Integer Length(const Standard_Integer index = 1) const;
  
  Standard_EXPORT     Standard_Integer Lower(const Standard_Integer index = 1) const;
  
  Standard_EXPORT     Standard_Integer Int() const;
  
  Standard_EXPORT     Standard_Integer Integer(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  
  Standard_EXPORT     Standard_Boolean Boolean(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  
  Standard_EXPORT     StepData_Logical Logical(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  
  Standard_EXPORT     Standard_Real Real(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  
  Standard_EXPORT     Standard_CString String(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  
  Standard_EXPORT     Standard_Integer Enum(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  
  Standard_EXPORT     Standard_CString EnumText(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  
  Standard_EXPORT     Handle_Standard_Transient Entity(const Standard_Integer n1 = 1,const Standard_Integer n2 = 1) const;
  
  Standard_EXPORT     Handle_Standard_Transient Transient() const;





protected:





private:



Standard_Integer thekind;
Standard_Integer theint;
Standard_Real thereal;
Handle_Standard_Transient theany;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
