#include "extdll.h"
#include "util.h"
#include "cbase.h"

class CPointPrint : public CBaseEntity
{
public:
	//called when entity is triggered by another entity
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value) override;
};

//make an entity out of this class def
LINK_ENTITY_TO_CLASS(point_print, CPointPrint);

void CPointPrint::Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value)
{
	ALERT(at_console, "point_print says: %s\n", STRING(pev->message));
	//int* ptr = nullptr;
	//*ptr = 666; //because im evil mwahahaha
}