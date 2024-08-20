#include "Types.hpp"
#include "Natives.hpp"

using namespace Big;

namespace Spawn {
	Vehicle SpawnVehicle(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL p7);
	Object SpawnObject(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic);
	Ped SpawnPed(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed);
	Pickup SpawnPickup(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8);
	Object SpawnObjectNoOffset(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic);
}