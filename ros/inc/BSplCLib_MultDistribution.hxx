// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BSplCLib_MultDistribution_HeaderFile
#define _BSplCLib_MultDistribution_HeaderFile

//! This enumeration describes the repartition of the <br>
//!         knots  sequence.   If all the knots  differ  by the <br>
//!         same positive constant from the  preceding knot the <br>
//!         "KnotDistribution" is    <Uniform>    else   it  is <br>
//!         <NonUniform> <br>
enum BSplCLib_MultDistribution {
BSplCLib_NonConstant,
BSplCLib_Constant,
BSplCLib_QuasiConstant
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
