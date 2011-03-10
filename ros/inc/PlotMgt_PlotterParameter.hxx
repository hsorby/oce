// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PlotMgt_PlotterParameter_HeaderFile
#define _PlotMgt_PlotterParameter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PlotMgt_PlotterParameter_HeaderFile
#include <Handle_PlotMgt_PlotterParameter.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _PlotMgt_TypeOfPlotterParameter_HeaderFile
#include <PlotMgt_TypeOfPlotterParameter.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class TColStd_HSequenceOfAsciiString;
class PlotMgt_Plotter;
class TCollection_AsciiString;
class OSD_File;



class PlotMgt_PlotterParameter : public MMgt_TShared {

public:

  //! Create the class instance WITH undefined TYPE <br>
  Standard_EXPORT   PlotMgt_PlotterParameter(const TCollection_AsciiString& aName);
  
  Standard_EXPORT     Standard_Boolean Save(OSD_File& aFile) ;
  
  Standard_EXPORT     void SetState(const Standard_Boolean aState) ;
  
  Standard_EXPORT     void SetType(const PlotMgt_TypeOfPlotterParameter aType) ;
  
  Standard_EXPORT     void SValue(TCollection_AsciiString& aValue) const;
  
  Standard_EXPORT     Standard_Boolean BValue() const;
  
  Standard_EXPORT     Standard_Integer IValue() const;
  
  Standard_EXPORT     Standard_Real RValue() const;
  
  Standard_EXPORT     void LValues(Handle(TColStd_HSequenceOfAsciiString)& aList) const;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfAsciiString MValue() const;
  
  Standard_EXPORT     TCollection_AsciiString Name() const;
  
  Standard_EXPORT     TCollection_AsciiString OldName() const;
  
  Standard_EXPORT     Standard_Boolean NeedToBeSaved() const;
  
  Standard_EXPORT     void Dump() const;
  //! Used to put parameter's information in a cmd file <br>
//! used in PlotterDriver's Spool method. <br>
  Standard_EXPORT     void PutCommandInfo(const Aspect_FStream& outStream) const;
  
  Standard_EXPORT     void SetSValue(const TCollection_AsciiString& aValue) ;
  
  Standard_EXPORT     void SetBValue(const Standard_Boolean aValue) ;
  
  Standard_EXPORT     void SetIValue(const Standard_Integer aValue) ;
  
  Standard_EXPORT     void SetRValue(const Standard_Real aValue) ;
  
  Standard_EXPORT     void SetMValue(const Handle(TColStd_HSequenceOfAsciiString)& aMap) ;


friend class PlotMgt_Plotter;


  DEFINE_STANDARD_RTTI(PlotMgt_PlotterParameter)

protected:

  
  Standard_EXPORT     void Normalize() ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfAsciiString& Description() ;



private: 

  
  Standard_EXPORT     void ProcessParamVal(const Standard_CString aParamSign,const Standard_Integer aFlag,TCollection_AsciiString& aValue) ;
  
  Standard_EXPORT     Standard_Boolean CheckListValue() ;

TCollection_AsciiString myName;
TCollection_AsciiString myOldName;
PlotMgt_TypeOfPlotterParameter myType;
Standard_Integer myIndex;
Standard_Boolean myState;
Standard_Boolean myConfigState;
Standard_Boolean myIsModified;
Standard_Integer myFlags;
TCollection_AsciiString myDialog;
TCollection_AsciiString myMinValue;
TCollection_AsciiString myMaxValue;
TCollection_AsciiString myValues;
TCollection_AsciiString myDefValue;
Standard_Integer myMapLength;
Handle_TColStd_HSequenceOfAsciiString myMap;
Handle_TColStd_HSequenceOfAsciiString myDescription;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
