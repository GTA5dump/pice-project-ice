#include "Bypass.hpp"

Vehicle Spawn::SpawnVehicle(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL p7) {
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x9090;
	Vehicle veh = VEHICLE::CREATE_VEHICLE(modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, p7);
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x0574;

	return veh;
}

Object Spawn::SpawnObject(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic)
{
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x9090;
	Object obj = OBJECT::CREATE_OBJECT(modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic);
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x0574;

	return obj;
}

Ped Spawn::SpawnPed(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed)
{
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x9090;
	Ped ped = PED::CREATE_PED(pedType, modelHash, x, y, z, heading, isNetwork, bScriptHostPed);
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x0574;

	return ped;
}

Pickup Spawn::SpawnPickup(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8)
{
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x9090;
	Pickup pickup = OBJECT::CREATE_AMBIENT_PICKUP(pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8);
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x0574;

	return pickup;
}

Object Spawn::SpawnObjectNoOffset(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic)
{
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x9090;
	Object objectno = OBJECT::CREATE_OBJECT_NO_OFFSET(modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic);
	*(unsigned short*)g_GameFunctions->m_ModelBypass = 0x0574;

	return objectno;
}