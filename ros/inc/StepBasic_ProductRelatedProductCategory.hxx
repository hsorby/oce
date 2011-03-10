// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductRelatedProductCategory_HeaderFile
#define _StepBasic_ProductRelatedProductCategory_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ProductRelatedProductCategory_HeaderFile
#include <Handle_StepBasic_ProductRelatedProductCategory.hxx>
#endif

#ifndef _Handle_StepBasic_HArray1OfProduct_HeaderFile
#include <Handle_StepBasic_HArray1OfProduct.hxx>
#endif
#ifndef _StepBasic_ProductCategory_HeaderFile
#include <StepBasic_ProductCategory.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepBasic_Product_HeaderFile
#include <Handle_StepBasic_Product.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepBasic_HArray1OfProduct;
class TCollection_HAsciiString;
class StepBasic_Product;



class StepBasic_ProductRelatedProductCategory : public StepBasic_ProductCategory {

public:

  //! Returns a ProductRelatedProductCategory <br>
  Standard_EXPORT   StepBasic_ProductRelatedProductCategory();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Standard_Boolean hasAdescription,const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Standard_Boolean hasAdescription,const Handle(TCollection_HAsciiString)& aDescription,const Handle(StepBasic_HArray1OfProduct)& aProducts) ;
  
  Standard_EXPORT     void SetProducts(const Handle(StepBasic_HArray1OfProduct)& aProducts) ;
  
  Standard_EXPORT     Handle_StepBasic_HArray1OfProduct Products() const;
  
  Standard_EXPORT     Handle_StepBasic_Product ProductsValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbProducts() const;




  DEFINE_STANDARD_RTTI(StepBasic_ProductRelatedProductCategory)

protected:




private: 


Handle_StepBasic_HArray1OfProduct products;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
