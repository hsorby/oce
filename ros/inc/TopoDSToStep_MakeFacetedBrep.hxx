// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_MakeFacetedBrep_HeaderFile
#define _TopoDSToStep_MakeFacetedBrep_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepShape_FacetedBrep_HeaderFile
#include <Handle_StepShape_FacetedBrep.hxx>
#endif
#ifndef _TopoDSToStep_Root_HeaderFile
#include <TopoDSToStep_Root.hxx>
#endif
#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif
class StepShape_FacetedBrep;
class StdFail_NotDone;
class TopoDS_Shell;
class Transfer_FinderProcess;
class TopoDS_Solid;


//! This class implements the mapping between classes <br>
//!          Shell or Solid from TopoDS and FacetedBrep from <br>
//!          StepShape. All the topology and geometry comprised <br>
//!          into the shell or the solid are taken into account and <br>
//!           translated. <br>
class TopoDSToStep_MakeFacetedBrep  : public TopoDSToStep_Root {
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

  
  Standard_EXPORT   TopoDSToStep_MakeFacetedBrep(const TopoDS_Shell& S,const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT   TopoDSToStep_MakeFacetedBrep(const TopoDS_Solid& S,const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT    const Handle_StepShape_FacetedBrep& Value() const;





protected:





private:



Handle_StepShape_FacetedBrep theFacetedBrep;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
