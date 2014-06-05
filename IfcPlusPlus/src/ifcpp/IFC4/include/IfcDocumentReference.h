/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and/or modified under  
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
* (at your option) any later version.  The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
* 
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
* OpenSceneGraph Public License for more details.
*/
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/shared_ptr.h"
#include "ifcpp/model/IfcPPObject.h"
#include "IfcDocumentSelect.h"
#include "IfcExternalReference.h"
class IfcText;
class IfcDocumentInformation;
class IfcRelAssociatesDocument;
//ENTITY
class IfcDocumentReference : public IfcDocumentSelect, public IfcExternalReference
{
public:
	IfcDocumentReference();
	IfcDocumentReference( int id );
	~IfcDocumentReference();

	// method setEntity takes over all attributes from another instance of the class
	virtual void setEntity( shared_ptr<IfcPPEntity> other );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::string>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkSelf();
	virtual const char* classname() const { return "IfcDocumentReference"; }


	// IfcExternalReference -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcURIReference>						m_Location;					//optional
	//  shared_ptr<IfcIdentifier>						m_Identification;			//optional
	//  shared_ptr<IfcLabel>								m_Name;						//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_ExternalReferenceForResources_inverse;

	// IfcDocumentReference -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcText>								m_Description;				//optional
	shared_ptr<IfcDocumentInformation>				m_ReferencedDocument;		//optional
	// inverse attributes:
	std::vector<weak_ptr<IfcRelAssociatesDocument> >	m_DocumentRefForObjects_inverse;
};

