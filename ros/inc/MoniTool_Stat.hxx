// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_Stat_HeaderFile
#define _MoniTool_Stat_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TCollection_HAsciiString;
class TColStd_HArray1OfInteger;


//! This class manages Statistics to be queried asynchronously. <br>
//! <br>
//!           It is organized as a stack of counters, identified by their <br>
//!           levels, from one to ... . Each one has a total account of <br>
//!           items to be counted, a count of already passed items, plus a <br>
//!           count of "current items". The counters of higher level play on <br>
//!           these current items. <br>
//!           For instance, if a counter has been opened for 100 items, 40 <br>
//!           already passed, 20 current, its own percent is 40, but there <br>
//!           is the contribution of higher level counters, rated for 20 % <br>
//!           of this counter. <br>
//! <br>
//!           Hence, a counter is opened, items are added. Also items can be <br>
//!           add for sub-counter (of higher level), they will be added <br>
//!           definitively when the sub-counter will be closed. When the <br>
//!           count has ended, this counter is closed, the counter of <br>
//!           lower level cumulates it and goes on. As follows : <br>
//! <br>
//!           Way of use : <br>
//!           Open(nbitems); <br>
//!           Add(..)  :  direct adding <br>
//!           Add(..) <br>
//!           AddSub (nsub)  :  for sub-counter <br>
//!             Open (nbsubs)  :  nbsubs for this sub-counter <br>
//!             Add (..) <br>
//!             Close        : the sub-counter <br>
//!           AddEnd() <br>
//!           etc... <br>
//!           Close          : the starting counter <br>
//! <br>
//!           This means that a counter can be opened in a Stat, regardless <br>
//!           to the already opened ones :: this will be cumulated <br>
//! <br>
//!           A Current Stat is available, but it is possible to have others <br>
class MoniTool_Stat  {
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

  //! Creates a Stat form. At start, one default phase is defined, <br>
//!           with one default step. Then, it suffises to start with a <br>
//!           count of items (and cycles if several) then record items, <br>
//!           to have a queryable report. <br>
  Standard_EXPORT   MoniTool_Stat(const Standard_CString title = "");
  //! used when starting <br>
  Standard_EXPORT   MoniTool_Stat(const MoniTool_Stat& other);
  
  Standard_EXPORT   static  MoniTool_Stat& Current() ;
  //! Opens a new counter with a starting count of items <br>
  Standard_EXPORT     Standard_Integer Open(const Standard_Integer nb = 100) ;
  //! Adds more items to be counted by Add... on current level <br>
  Standard_EXPORT     void OpenMore(const Standard_Integer id,const Standard_Integer nb) ;
  //! Directly addes items <br>
  Standard_EXPORT     void Add(const Standard_Integer nb = 1) ;
  //! Declares a count of items to be added later. If a sub-counter <br>
//!           is opened, its percentage multiplies this sub-count to compute <br>
//!           the percent of current level <br>
  Standard_EXPORT     void AddSub(const Standard_Integer nb = 1) ;
  //! Ends the AddSub and cumulates the sub-count to current level <br>
  Standard_EXPORT     void AddEnd() ;
  
  Standard_EXPORT     void Close(const Standard_Integer id) ;
  
  Standard_EXPORT     Standard_Integer Level() const;
  
  Standard_EXPORT     Standard_Real Percent(const Standard_Integer fromlev = 0) const;





protected:





private:



Handle_TCollection_HAsciiString thetit;
Standard_Integer thelev;
Handle_TColStd_HArray1OfInteger thetot;
Handle_TColStd_HArray1OfInteger thedone;
Handle_TColStd_HArray1OfInteger thecurr;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
