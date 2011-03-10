// File:      LDOMParser.hxx
// Created:   20.07.01 12:52:47
// Author:    Alexander GRIGORIEV
// Copyright: OpenCascade 2001
// History:   AGV 060302: Input from istream

#ifndef LDOMParser_HeaderFile
#define LDOMParser_HeaderFile

#include <LDOM_Document.hxx>
#include <LDOM_OSStream.hxx>

class LDOM_XmlReader;
//class istream;

//  Class LDOMParser
//

class LDOMParser
{
 public:
  // ---------- PUBLIC METHODS ----------

  LDOMParser () : myReader (NULL), myCurrentData (16384) {}
  // Empty constructor

  virtual Standard_EXPORT ~LDOMParser  ();
  // Destructor

  Standard_EXPORT LDOM_Document
                        getDocument    ();
  // Get the LDOM_Document

  Standard_EXPORT Standard_Boolean
                        parse           (const char * const aFileName);
  // Parse a file
  // Returns True if error occurred, then GetError() can be called

  Standard_EXPORT Standard_Boolean
                        parse           (istream& anInput);
  // Parse a C++ stream
  // Returns True if error occurred, then GetError() can be called

  Standard_EXPORT const TCollection_AsciiString&
                        GetError        (TCollection_AsciiString& aData) const;
  // Return text describing a parsing error, or Empty if no error occurred

 protected:
  // ---------- PROTECTED METHODS ----------

  Standard_EXPORT virtual Standard_Boolean
                        startElement    ();
  // virtual hook on 'StartElement' event for descendant classes

  Standard_EXPORT virtual Standard_Boolean
                        endElement      ();
  // virtual hook on 'EndElement' event for descendant classes

  Standard_EXPORT LDOM_Element
                        getCurrentElement () const;
  // to be called from startElement() and endElement()

 private:
  // ---------- PRIVATE METHODS ----------
  Standard_Boolean      ParseDocument   ();

  Standard_Boolean      ParseElement    ();

  // ---------- PRIVATE (PROHIBITED) METHODS ----------

  LDOMParser (const LDOMParser& theOther);
  // Copy constructor

  LDOMParser& operator = (const LDOMParser& theOther);
  // Assignment

 private:
  // ---------- PRIVATE FIELDS ----------

  LDOM_XmlReader                * myReader;
  Handle(LDOM_MemManager)       myDocument;
  LDOM_OSStream                 myCurrentData;
  TCollection_AsciiString       myError;
};

#endif
