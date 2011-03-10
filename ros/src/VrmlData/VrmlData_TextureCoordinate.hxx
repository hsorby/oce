// File:      VrmlData_TextureCoordinate.hxx
// Created:   26.05.06 18:44:47
// Author:    Alexander GRIGORIEV
// Copyright: Open Cascade 2006


#ifndef VrmlData_TextureCoordinate_HeaderFile
#define VrmlData_TextureCoordinate_HeaderFile

#include <VrmlData_Node.hxx>
class gp_XY;

/**
 *  Implementation of the node TextureCoordinate
 */
class VrmlData_TextureCoordinate : public VrmlData_Node
{
 public:
  // ---------- PUBLIC METHODS ----------

  /**
   * Empty constructor
   */
  inline VrmlData_TextureCoordinate ()
    : myPoints (0L), myLength (0) {}

  /**
   * Constructor
   */
  inline VrmlData_TextureCoordinate (const VrmlData_Scene& theScene,
                                     const char          * theName,
                                     const size_t          nPoints   = 0,
                                     const gp_XY         * arrPoints = 0L)
    : VrmlData_Node     (theScene, theName),
      myPoints          (arrPoints),
      myLength          (nPoints)
  {}

  /**
   * Create a data array and assign the field myArray.
   * @return
   *   True if allocation was successful.
   */ 
  Standard_EXPORT Standard_Boolean
                        AllocateValues  (const Standard_Size theLength);

  /**
   * Query the number of points
   */
  inline size_t                 Length          () { return myLength; }

  /**
   * Query the points
   */
  inline const gp_XY *          Points          () { return myPoints; }

  /**
   * Set the points array
   */
  inline void                   SetPoints       (const size_t nPoints,
                                                 const gp_XY  * arrPoints)
  { myPoints = arrPoints; myLength = nPoints; }

  /**
   * Create a copy of this node.
   * If the parameter is null, a new copied node is created. Otherwise new node
   * is not created, but rather the given one is modified.
   */
  Standard_EXPORT virtual Handle(VrmlData_Node)
                        Clone     (const Handle(VrmlData_Node)& theOther)const;

  /**
   * Read the Node from input stream.
   */
  Standard_EXPORT virtual VrmlData_ErrorStatus
                                Read            (VrmlData_InBuffer& theBuffer);

 private:
  // ---------- PRIVATE FIELDS ----------

  const gp_XY * myPoints;
  size_t        myLength;

 public:
// Declaration of CASCADE RTTI
DEFINE_STANDARD_RTTI (VrmlData_TextureCoordinate)
};

// Definition of HANDLE object using Standard_DefineHandle.hxx
DEFINE_STANDARD_HANDLE (VrmlData_TextureCoordinate, VrmlData_Node)


#endif
