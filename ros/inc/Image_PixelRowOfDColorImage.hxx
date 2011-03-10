// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Image_PixelRowOfDColorImage_HeaderFile
#define _Image_PixelRowOfDColorImage_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Aspect_ColorPixel;



class Image_PixelRowOfDColorImage  {
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

  
  Standard_EXPORT   Image_PixelRowOfDColorImage(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Image_PixelRowOfDColorImage(const Aspect_ColorPixel& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Aspect_ColorPixel& V) ;
  
  Standard_EXPORT     void Destroy() ;
~Image_PixelRowOfDColorImage()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const Image_PixelRowOfDColorImage& Assign(const Image_PixelRowOfDColorImage& Other) ;
   const Image_PixelRowOfDColorImage& operator =(const Image_PixelRowOfDColorImage& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Aspect_ColorPixel& Value) ;
  
       const Aspect_ColorPixel& Value(const Standard_Integer Index) const;
     const Aspect_ColorPixel& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Aspect_ColorPixel& ChangeValue(const Standard_Integer Index) ;
      Aspect_ColorPixel& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   Image_PixelRowOfDColorImage(const Image_PixelRowOfDColorImage& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Aspect_ColorPixel
#define Array1Item_hxx <Aspect_ColorPixel.hxx>
#define TCollection_Array1 Image_PixelRowOfDColorImage
#define TCollection_Array1_hxx <Image_PixelRowOfDColorImage.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
