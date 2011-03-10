// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_Document_HeaderFile
#define _CDM_Document_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif

#ifndef _TColStd_SequenceOfExtendedString_HeaderFile
#include <TColStd_SequenceOfExtendedString.hxx>
#endif
#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _CDM_ListOfReferences_HeaderFile
#include <CDM_ListOfReferences.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_CDM_MetaData_HeaderFile
#include <Handle_CDM_MetaData.hxx>
#endif
#ifndef _Standard_GUID_HeaderFile
#include <Standard_GUID.hxx>
#endif
#ifndef _Handle_CDM_Application_HeaderFile
#include <Handle_CDM_Application.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_ExtString_HeaderFile
#include <Standard_ExtString.hxx>
#endif
#ifndef _Handle_Resource_Manager_HeaderFile
#include <Handle_Resource_Manager.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _CDM_CanCloseStatus_HeaderFile
#include <CDM_CanCloseStatus.hxx>
#endif
#ifndef _Handle_CDM_Reference_HeaderFile
#include <Handle_CDM_Reference.hxx>
#endif
class CDM_MetaData;
class CDM_Application;
class Standard_NoSuchObject;
class Standard_Failure;
class Standard_DomainError;
class CDM_Reference;
class CDM_ReferenceIterator;
class TCollection_ExtendedString;
class TColStd_SequenceOfExtendedString;
class Resource_Manager;
class Standard_GUID;


//! An applicative document is an instance of a class inheriting CDM_Document. <br>
//!          These documents have the following properties: <br>
//!        - they can have references to other documents. <br>
//!        - the modifications of a document are propagated to the referencing <br>
//!          documents. <br>
//!        - a  document can be   stored in different formats, with  or <br>
//!          without a persistent model. <br>
//!        - the drivers  for  storing  and retrieving documents  are <br>
//!          plugged in when necessary. <br>
//!        - a  document has a modification counter. This counter is <br>
//!          incremented when the document is  modified.  When a document <br>
//!          is stored,  the current  counter  value is memorized as the <br>
//!          last storage  version of the   document.  A document  is <br>
//!          considered to be  modified   when the  counter value  is <br>
//!          different from the storage version.  Once  the document is <br>
//!          saved  the storage  version  and the  counter  value are <br>
//!          identical.  The document  is  now  not considered  to  be <br>
//!          modified. <br>
//!        - a reference is a link between two documents. A reference has two <br>
//!          components: the "From Document" and the "To Document". When <br>
//!          a reference is created, an identifier of the reference is generated. <br>
//!          This identifier is unique in the scope of the From Document and <br>
//!          is conserved during storage and retrieval. This means that the <br>
//!          referenced document will be always accessible through this <br>
//!          identifier. <br>
//!        - a reference memorizes the counter value of the To Document when <br>
//!          the reference is created. The From Document is considered to <br>
//!          be up to date relative to the To Document when the <br>
//!          reference counter value is equal to the To Document counter value. <br>
//!        -  retrieval of a document  having references does not imply <br>
//!           the retrieving of the referenced documents. <br>
class CDM_Document : public Standard_Transient {

public:

  //! The Update  method  will be called  once  for each <br>
//!          reference, but it  should not perform any computation, <br>
//!          to avoid multiple computation of a same document. <br>
  Standard_EXPORT   virtual  void Update(const Handle(CDM_Document)& aToDocument,const Standard_Integer aReferenceIdentifier,const Standard_Address aModifContext) ;
  //! This method Update   will be called <br>
//!          to signal the end   of the modified references list. <br>
//!          The    document     should    be  recomputed     and <br>
//!          UpdateFromDocuments  should be called.  Update should <br>
//!          returns True in case  of success, false otherwise.  In <br>
//!          case of Failure, additional information can be given in <br>
//!          ErrorString. <br>
  Standard_EXPORT   virtual  Standard_Boolean Update(TCollection_ExtendedString& ErrorString) ;
  //! The Storage Format is the key which is used to determine in the <br>
//!          application resources the storage driver plugin, the file <br>
//!          extension and other data used to store the document. <br>
  Standard_EXPORT   virtual  TCollection_ExtendedString StorageFormat() const = 0;
  //! by default empties the extensions. <br>
//! <br>
  Standard_EXPORT   virtual  void Extensions(TColStd_SequenceOfExtendedString& Extensions) const;
  //! This method can be redefined to extract another document in <br>
//!           a different format. For example, to extract a MDTV-Shape <br>
//!           from an applicative document. <br>
  Standard_EXPORT   virtual  Standard_Boolean GetAlternativeDocument(const TCollection_ExtendedString& aFormat,Handle(CDM_Document)& anAlternativeDocument) ;
  //! Creates a reference from this document to {anOtherDocument}. <br>
//!          Returns a reference identifier. This reference identifier <br>
//!          is unique in the document and will not be used for the <br>
//!           next references, even after the storing of the document. <br>
//!           If there is already a reference between the two documents, <br>
//!           the reference is not created, but its reference identifier <br>
//!           is returned. <br>
  Standard_EXPORT     Standard_Integer CreateReference(const Handle(CDM_Document)& anOtherDocument) ;
  //! Removes the reference between the From Document and the <br>
//!          To Document identified by a reference identifier. <br>
  Standard_EXPORT     void RemoveReference(const Standard_Integer aReferenceIdentifier) ;
  //! Removes all references having this document for From Document. <br>
  Standard_EXPORT     void RemoveAllReferences() ;
  //!  Returns the To Document  of the reference identified by <br>
//!           aReferenceIdentifier. If the ToDocument is stored and <br>
//!           has not yet been retrieved, this method will retrieve it. <br>
  Standard_EXPORT     Handle_CDM_Document Document(const Standard_Integer aReferenceIdentifier) const;
  //!   returns True if   the  To Document of the  reference <br>
//!          identified by aReferenceIdentifier is in session,  False <br>
//!          if it corresponds to a not yet retrieved document. <br>
  Standard_EXPORT     Standard_Boolean IsInSession(const Standard_Integer aReferenceIdentifier) const;
  //!   returns True if   the  To Document of the  reference <br>
//!          identified by aReferenceIdentifier has already been stored, <br>
//!          False  otherwise. <br>
  Standard_EXPORT     Standard_Boolean IsStored(const Standard_Integer aReferenceIdentifier) const;
  //! returns the name of the metadata of the To Document of <br>
//!          the reference identified by aReferenceIdentifier. <br>
  Standard_EXPORT     TCollection_ExtendedString Name(const Standard_Integer aReferenceIdentifier) const;
  //!  call  virtual  method   Update  on  all   referencing <br>
//!             documents.   This method keeps  the list  of the -- <br>
//!            documents  to process.It may  be the starting of an <br>
//!              update -- cycle. If  not,  the reentrant calls made by <br>
//!            Update  method (without argument)  will append the <br>
//!            referencing documents to the list and call the Update method <br>
//!            (with arguments). Only the first call to UpdateFromDocuments <br>
//!            generate call to Update(). <br>
  Standard_EXPORT     void UpdateFromDocuments(const Standard_Address aModifContext) const;
  //! returns the number of references having this document as <br>
//!          From Document. <br>
  Standard_EXPORT     Standard_Integer ToReferencesNumber() const;
  //! returns the number of references having this document as <br>
//!          To Document. <br>
  Standard_EXPORT     Standard_Integer FromReferencesNumber() const;
  //! returns True is this document references aDocument; <br>
//! <br>
  Standard_EXPORT     Standard_Boolean ShallowReferences(const Handle(CDM_Document)& aDocument) const;
  //! returns True is this document references aDocument; <br>
//! <br>
  Standard_EXPORT     Standard_Boolean DeepReferences(const Handle(CDM_Document)& aDocument) const;
  //! Copies a  reference  to  this document.   This  method <br>
//!          avoid retrieval of referenced document.  The arguments <br>
//!          are  the  original  document  and a  valid  reference <br>
//!          identifier Returns the  local identifier. <br>
//! <br>
  Standard_EXPORT     Standard_Integer CopyReference(const Handle(CDM_Document)& aFromDocument,const Standard_Integer aReferenceIdentifier) ;
  //! indicates  that  this document cannot be   modified. <br>
  Standard_EXPORT     Standard_Boolean IsReadOnly() const;
  //! indicates that the referenced document cannot be modified, <br>
  Standard_EXPORT     Standard_Boolean IsReadOnly(const Standard_Integer aReferenceIdentifier) const;
  
  Standard_EXPORT     void SetIsReadOnly() ;
  
  Standard_EXPORT     void UnsetIsReadOnly() ;
  //! Indicates that this document has been modified. <br>
//!          This method increments the modification counter. <br>
//! <br>
  Standard_EXPORT     void Modify() ;
  //! returns the current modification counter. <br>
  Standard_EXPORT     Standard_Integer Modifications() const;
  
  Standard_EXPORT     void UnModify() ;
  //! returns true if the modification counter found in the given <br>
//!          reference is equal to the actual modification counter of <br>
//!          the To Document. This method is able to deal with a reference <br>
//!          to a not retrieved document. <br>
  Standard_EXPORT     Standard_Boolean IsUpToDate(const Standard_Integer aReferenceIdentifier) const;
  //! Resets the modification counter in the given reference <br>
//!          to the actual modification counter of its To Document. <br>
//!          This method should be called after the application has updated <br>
//!          this document. <br>
  Standard_EXPORT     void SetIsUpToDate(const Standard_Integer aReferenceIdentifier) ;
  //! associates a comment with this document. <br>
  Standard_EXPORT     void SetComment(const TCollection_ExtendedString& aComment) ;
  //! appends a comment into comments of this document. <br>
  Standard_EXPORT     void AddComment(const TCollection_ExtendedString& aComment) ;
  //! associates a comments with this document. <br>
  Standard_EXPORT     void SetComments(const TColStd_SequenceOfExtendedString& aComments) ;
  //! returns the associated comments through <aComments>. <br>
//!          Returns empty sequence if no comments are associated. <br>
  Standard_EXPORT     void Comments(TColStd_SequenceOfExtendedString& aComments) const;
  //! returns the first of associated comments. By defaut <br>
//!          the comment is an empty string. <br>
  Standard_EXPORT     Standard_ExtString Comment() const;
  //! Returns an alphanumeric string identifying this document <br>
//!          in a unique manner in the current process. The presentation <br>
//!          may change when the document is stored. <br>
//!          Tries to get the 'FileFormat`.Presentation resource <br>
//!          This item is used to give a default presentation <br>
//!          to the document. <br>
  Standard_EXPORT     Standard_ExtString Presentation() ;
  //! returns the document having the given alphanumeric presentation. <br>
  Standard_EXPORT   static  Handle_CDM_Document FindFromPresentation(const TCollection_ExtendedString& aPresentation) ;
  //! indicates whether a document having the given presentation <br>
//!          does exist. <br>
  Standard_EXPORT   static  Standard_Boolean FindPresentation(const TCollection_ExtendedString& aPresentation) ;
  
  Standard_EXPORT     Standard_Boolean IsStored() const;
  //! returns  the value of  the modification counter at the <br>
//!          time of storage. By default returns 0. <br>
  Standard_EXPORT     Standard_Integer StorageVersion() const;
  //!  associates database  information to  a document which <br>
//!          has been stored.  The name of the  document is now the <br>
//!          name which has beenused to store the data. <br>
  Standard_EXPORT     void SetMetaData(const Handle(CDM_MetaData)& aMetaData) ;
  
  Standard_EXPORT     void UnsetIsStored() ;
  
  Standard_EXPORT     Handle_CDM_MetaData MetaData() const;
  
  Standard_EXPORT     TCollection_ExtendedString Folder() const;
  //! defines the folder in which the object should be stored. <br>
  Standard_EXPORT     void SetRequestedFolder(const TCollection_ExtendedString& aFolder) ;
  
  Standard_EXPORT     TCollection_ExtendedString RequestedFolder() const;
  
  Standard_EXPORT     Standard_Boolean HasRequestedFolder() const;
  //! defines the name under which the object should be stored. <br>
  Standard_EXPORT     void SetRequestedName(const TCollection_ExtendedString& aName) ;
  //! determines  under  which the document  is  going to be <br>
//!           store.  By default the name of the document wil be -- <br>
//!           used.  If the document has  no name  its presentation <br>
//!           will be used. <br>
  Standard_EXPORT     TCollection_ExtendedString RequestedName() ;
  
  Standard_EXPORT     void SetRequestedPreviousVersion(const TCollection_ExtendedString& aPreviousVersion) ;
  
  Standard_EXPORT     void UnsetRequestedPreviousVersion() ;
  
  Standard_EXPORT     Standard_Boolean HasRequestedPreviousVersion() const;
  
  Standard_EXPORT     TCollection_ExtendedString RequestedPreviousVersion() const;
  //! defines the Comment with  which the object should be stored. <br>
  Standard_EXPORT     void SetRequestedComment(const TCollection_ExtendedString& aComment) ;
  
  Standard_EXPORT     TCollection_ExtendedString RequestedComment() const;
  //! read (or rereads) the following resource. <br>
  Standard_EXPORT     void LoadResources() ;
  
  Standard_EXPORT     Standard_Boolean FindFileExtension() ;
  //! gets the Desktop.Domain.Application.`FileFormat`.FileExtension resource. <br>
  Standard_EXPORT     TCollection_ExtendedString FileExtension() ;
  
  Standard_EXPORT     Standard_Boolean FindDataType() ;
  //! this datatype will be used if the DBMS deals with this concept <br>//! gets the `FileFormat`.DataType resource. <br>
//!          concept. <br>
  Standard_EXPORT     TCollection_ExtendedString DataType() ;
  
  Standard_EXPORT     Standard_Boolean FindVersionDataType() ;
  //! this datatype will be used if the DBMS deals with this concept <br>//! gets the `FileFormat`.VersionDataType resource. <br>
//! <br>
  Standard_EXPORT     TCollection_ExtendedString VersionDataType() ;
  
  Standard_EXPORT     Standard_Boolean FindDescription() ;
  //! gets the `FileFormat`.Description resource. <br>
  Standard_EXPORT     TCollection_ExtendedString Description() ;
  
  Standard_EXPORT     Standard_Boolean FindDomain() ;
  //! gets the `FileFormat`.Domain resource. <br>
  Standard_EXPORT     TCollection_ExtendedString Domain() ;
  
  Standard_EXPORT     Standard_Boolean FindStoragePlugin() ;
  
  Standard_EXPORT     Standard_GUID StoragePlugin() ;
  //! returns  true  if the   version is greater  than   the <br>
//!          storage version <br>
  Standard_EXPORT     Standard_Boolean IsModified() const;
  
  Standard_EXPORT     Standard_OStream& Print(Standard_OStream& anOStream) const;
Standard_OStream& operator << (Standard_OStream& anOStream);
  
  Standard_EXPORT     Standard_Boolean IsOpened() const;
  
  Standard_EXPORT     void Open(const Handle(CDM_Application)& anApplication) ;
  
  Standard_EXPORT     CDM_CanCloseStatus CanClose() const;
  
  Standard_EXPORT     void Close() ;
  
  Standard_EXPORT    const Handle_CDM_Application& Application() const;
  //! A  referenced  document  may  indicate   through  this <br>
//!          virtual  method that it does  not allow the closing of <br>
//!          aDocument  which  it references through  the reference <br>
//!          aReferenceIdentifier. By default returns Standard_True;; <br>
  Standard_EXPORT   virtual  Standard_Boolean CanCloseReference(const Handle(CDM_Document)& aDocument,const Standard_Integer aReferenceIdentifier) const;
  //! A referenced document may update its internal <br>
//!          data structure when {aDocument} which it references <br>
//!          through the reference {aReferenceIdentifier} is being closed. <br>
//!          By default this method does nothing. <br>
  Standard_EXPORT   virtual  void CloseReference(const Handle(CDM_Document)& aDocument,const Standard_Integer aReferenceIdentifier) ;
  //!  returns true if  the   document corresponding to  the <br>
//!           given   reference has    been retrieved  and  opened. <br>
//!          Otherwise returns false. This method does not retrieve <br>
//!          the referenced document <br>
  Standard_EXPORT     Standard_Boolean IsOpened(const Standard_Integer aReferenceIdentifier) const;
  
  Standard_EXPORT     void CreateReference(const Handle(CDM_MetaData)& aMetaData,const Standard_Integer aReferenceIdentifier,const Handle(CDM_Application)& anApplication,const Standard_Integer aToDocumentVersion,const Standard_Boolean UseStorageConfiguration) ;
  
  Standard_EXPORT     Standard_Integer CreateReference(const Handle(CDM_MetaData)& aMetaData,const Handle(CDM_Application)& anApplication,const Standard_Integer aDocumentVersion,const Standard_Boolean UseStorageConfiguration) ;
  
  Standard_EXPORT     Standard_Integer ReferenceCounter() const;
  //! the following method should be used instead: <br>
//! <br>
//!  Update(me:mutable; ErrorString: out ExtendedString from TCollection) <br>
//!  returns Boolean from Standard <br>
  Standard_EXPORT   virtual  void Update() ;

friend class CDM_Reference;
friend class CDM_ReferenceIterator;
friend class CDM_Application;


  DEFINE_STANDARD_RTTI(CDM_Document)

protected:

  
  Standard_EXPORT   CDM_Document();
  
  Standard_EXPORT     void Destroy() ;
~CDM_Document()
{
  Destroy();
}

Standard_Boolean myResourcesAreLoaded;


private: 

  //!  the manager returned by  this method will be <br>
//!          used to search for the following resource items. <br>
  Standard_EXPORT     Handle_Resource_Manager StorageResource() ;
  
  Standard_EXPORT     Handle_CDM_Reference Reference(const Standard_Integer aReferenceIdentifier) const;
  
  Standard_EXPORT     void ComputePresentation() ;
  
  Standard_EXPORT     void UnvalidPresentation() ;
  
  Standard_EXPORT     void AddToReference(const Handle(CDM_Reference)& aReference) ;
  
  Standard_EXPORT     void AddFromReference(const Handle(CDM_Reference)& aReference) ;
  
  Standard_EXPORT     void RemoveFromReference(const Standard_Integer aReferenceIdentifier) ;
  
  Standard_EXPORT     void SetModifications(const Standard_Integer Modifications) ;
  
  Standard_EXPORT     void SetReferenceCounter(const Standard_Integer aReferenceCounter) ;

TColStd_SequenceOfExtendedString myComments;
TCollection_ExtendedString myPresentation;
Standard_Boolean myValidPresentation;
CDM_ListOfReferences myFromReferences;
CDM_ListOfReferences myToReferences;
Standard_Integer myVersion;
Standard_Integer myActualReferenceIdentifier;
Standard_Integer myStorageVersion;
Handle_CDM_MetaData myMetaData;
TCollection_ExtendedString myRequestedComment;
TCollection_ExtendedString myRequestedFolder;
Standard_Boolean myRequestedFolderIsDefined;
TCollection_ExtendedString myRequestedName;
Standard_Boolean myRequestedNameIsDefined;
Standard_Boolean myRequestedPreviousVersionIsDefined;
TCollection_ExtendedString myRequestedPreviousVersion;
TCollection_ExtendedString myFileExtension;
TCollection_ExtendedString myDataType;
TCollection_ExtendedString myVersionDataType;
TCollection_ExtendedString myDescription;
TCollection_ExtendedString myDomain;
TCollection_ExtendedString myDefaultPresentation;
Standard_Boolean myFileExtensionWasFound;
Standard_Boolean myDataTypeWasFound;
Standard_Boolean myVersionDataTypeWasFound;
Standard_Boolean myDescriptionWasFound;
Standard_Boolean myDomainWasFound;
Standard_Boolean myStoragePluginWasFound;
Standard_Boolean myDefaultPresentationWasFound;
Standard_GUID myStoragePlugin;
Handle_CDM_Application myApplication;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
