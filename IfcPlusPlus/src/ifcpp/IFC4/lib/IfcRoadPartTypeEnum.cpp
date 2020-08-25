/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcFacilityPartTypeSelect.h"
#include "ifcpp/IFC4/include/IfcRoadPartTypeEnum.h"

// TYPE IfcRoadPartTypeEnum = ENUMERATION OF	(ROADSIDEPART	,BUS_STOP	,HARDSHOULDER	,INTERSECTION	,PASSINGBAY	,ROADWAYPLATEAU	,ROADSIDE	,REFUGEISLAND	,TOLLPLAZA	,CENTRALRESERVE	,SIDEWALK	,PARKINGBAY	,RAILWAYCROSSING	,PEDESTRIAN_CROSSING	,SOFTSHOULDER	,BICYCLECROSSING	,CENTRALISLAND	,SHOULDER	,TRAFFICLANE	,ROADSEGMENT	,ROUNDABOUT	,LAYBY	,CARRIAGEWAY	,TRAFFICISLAND	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcRoadPartTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcRoadPartTypeEnum> copy_self( new IfcRoadPartTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcRoadPartTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCROADPARTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ROADSIDEPART:	stream << ".ROADSIDEPART."; break;
		case ENUM_BUS_STOP:	stream << ".BUS_STOP."; break;
		case ENUM_HARDSHOULDER:	stream << ".HARDSHOULDER."; break;
		case ENUM_INTERSECTION:	stream << ".INTERSECTION."; break;
		case ENUM_PASSINGBAY:	stream << ".PASSINGBAY."; break;
		case ENUM_ROADWAYPLATEAU:	stream << ".ROADWAYPLATEAU."; break;
		case ENUM_ROADSIDE:	stream << ".ROADSIDE."; break;
		case ENUM_REFUGEISLAND:	stream << ".REFUGEISLAND."; break;
		case ENUM_TOLLPLAZA:	stream << ".TOLLPLAZA."; break;
		case ENUM_CENTRALRESERVE:	stream << ".CENTRALRESERVE."; break;
		case ENUM_SIDEWALK:	stream << ".SIDEWALK."; break;
		case ENUM_PARKINGBAY:	stream << ".PARKINGBAY."; break;
		case ENUM_RAILWAYCROSSING:	stream << ".RAILWAYCROSSING."; break;
		case ENUM_PEDESTRIAN_CROSSING:	stream << ".PEDESTRIAN_CROSSING."; break;
		case ENUM_SOFTSHOULDER:	stream << ".SOFTSHOULDER."; break;
		case ENUM_BICYCLECROSSING:	stream << ".BICYCLECROSSING."; break;
		case ENUM_CENTRALISLAND:	stream << ".CENTRALISLAND."; break;
		case ENUM_SHOULDER:	stream << ".SHOULDER."; break;
		case ENUM_TRAFFICLANE:	stream << ".TRAFFICLANE."; break;
		case ENUM_ROADSEGMENT:	stream << ".ROADSEGMENT."; break;
		case ENUM_ROUNDABOUT:	stream << ".ROUNDABOUT."; break;
		case ENUM_LAYBY:	stream << ".LAYBY."; break;
		case ENUM_CARRIAGEWAY:	stream << ".CARRIAGEWAY."; break;
		case ENUM_TRAFFICISLAND:	stream << ".TRAFFICISLAND."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcRoadPartTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ROADSIDEPART:	return L"ROADSIDEPART";
		case ENUM_BUS_STOP:	return L"BUS_STOP";
		case ENUM_HARDSHOULDER:	return L"HARDSHOULDER";
		case ENUM_INTERSECTION:	return L"INTERSECTION";
		case ENUM_PASSINGBAY:	return L"PASSINGBAY";
		case ENUM_ROADWAYPLATEAU:	return L"ROADWAYPLATEAU";
		case ENUM_ROADSIDE:	return L"ROADSIDE";
		case ENUM_REFUGEISLAND:	return L"REFUGEISLAND";
		case ENUM_TOLLPLAZA:	return L"TOLLPLAZA";
		case ENUM_CENTRALRESERVE:	return L"CENTRALRESERVE";
		case ENUM_SIDEWALK:	return L"SIDEWALK";
		case ENUM_PARKINGBAY:	return L"PARKINGBAY";
		case ENUM_RAILWAYCROSSING:	return L"RAILWAYCROSSING";
		case ENUM_PEDESTRIAN_CROSSING:	return L"PEDESTRIAN_CROSSING";
		case ENUM_SOFTSHOULDER:	return L"SOFTSHOULDER";
		case ENUM_BICYCLECROSSING:	return L"BICYCLECROSSING";
		case ENUM_CENTRALISLAND:	return L"CENTRALISLAND";
		case ENUM_SHOULDER:	return L"SHOULDER";
		case ENUM_TRAFFICLANE:	return L"TRAFFICLANE";
		case ENUM_ROADSEGMENT:	return L"ROADSEGMENT";
		case ENUM_ROUNDABOUT:	return L"ROUNDABOUT";
		case ENUM_LAYBY:	return L"LAYBY";
		case ENUM_CARRIAGEWAY:	return L"CARRIAGEWAY";
		case ENUM_TRAFFICISLAND:	return L"TRAFFICISLAND";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcRoadPartTypeEnum> IfcRoadPartTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRoadPartTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRoadPartTypeEnum>(); }
	shared_ptr<IfcRoadPartTypeEnum> type_object( new IfcRoadPartTypeEnum() );
	if( std_iequal( arg, L".ROADSIDEPART." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_ROADSIDEPART;
	}
	else if( std_iequal( arg, L".BUS_STOP." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_BUS_STOP;
	}
	else if( std_iequal( arg, L".HARDSHOULDER." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_HARDSHOULDER;
	}
	else if( std_iequal( arg, L".INTERSECTION." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_INTERSECTION;
	}
	else if( std_iequal( arg, L".PASSINGBAY." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_PASSINGBAY;
	}
	else if( std_iequal( arg, L".ROADWAYPLATEAU." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_ROADWAYPLATEAU;
	}
	else if( std_iequal( arg, L".ROADSIDE." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_ROADSIDE;
	}
	else if( std_iequal( arg, L".REFUGEISLAND." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_REFUGEISLAND;
	}
	else if( std_iequal( arg, L".TOLLPLAZA." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_TOLLPLAZA;
	}
	else if( std_iequal( arg, L".CENTRALRESERVE." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_CENTRALRESERVE;
	}
	else if( std_iequal( arg, L".SIDEWALK." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_SIDEWALK;
	}
	else if( std_iequal( arg, L".PARKINGBAY." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_PARKINGBAY;
	}
	else if( std_iequal( arg, L".RAILWAYCROSSING." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_RAILWAYCROSSING;
	}
	else if( std_iequal( arg, L".PEDESTRIAN_CROSSING." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_PEDESTRIAN_CROSSING;
	}
	else if( std_iequal( arg, L".SOFTSHOULDER." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_SOFTSHOULDER;
	}
	else if( std_iequal( arg, L".BICYCLECROSSING." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_BICYCLECROSSING;
	}
	else if( std_iequal( arg, L".CENTRALISLAND." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_CENTRALISLAND;
	}
	else if( std_iequal( arg, L".SHOULDER." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_SHOULDER;
	}
	else if( std_iequal( arg, L".TRAFFICLANE." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_TRAFFICLANE;
	}
	else if( std_iequal( arg, L".ROADSEGMENT." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_ROADSEGMENT;
	}
	else if( std_iequal( arg, L".ROUNDABOUT." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_ROUNDABOUT;
	}
	else if( std_iequal( arg, L".LAYBY." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_LAYBY;
	}
	else if( std_iequal( arg, L".CARRIAGEWAY." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_CARRIAGEWAY;
	}
	else if( std_iequal( arg, L".TRAFFICISLAND." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_TRAFFICISLAND;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcRoadPartTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}