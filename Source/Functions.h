#pragma once
namespace Mod_Hub_Base
{
	extern bool Godmode;

	extern bool Invisible;
	extern bool SuperJump;

	extern bool DroP;


	extern bool NeverWanted;
	extern bool InfinityAmmo;
	extern bool VehInvisible;
	extern bool WalkOnWater;
	extern bool FlyCar;
	extern bool SuperRun;
	extern bool SuperRun2;
	extern bool vomit;
	extern bool RandomOutfit;
	extern bool NoClip;


	extern bool BypassRestrictedArea;


	extern bool RPGg;

	extern bool f_SetWanted;

	extern bool AutoTeleportToWaypoint;

	extern bool WorldGlow;

	extern bool WorldGlow2;

	extern bool RedLazerCar;
	extern bool GreenLaserCar;



	extern bool C4;
	extern bool FlareGun;
	extern bool MolotvGun;
		extern bool FrWrkT;
		extern bool LOL;
		extern bool LOL2;
		extern bool LOL3;
	extern bool ShootMini;
	extern bool Shootfireworks;
	extern bool ShootTankR;


	inline int m_Red{ 255 };
	inline int m_Blue{ 0 };
	inline int m_Green{ 0 };



	extern bool ClearArea;

	//static bool to_blip(Blip blip_sprite, int blip_color = -1);
	//static bool to_objective();
	//static void to_coords(Entity e, Vector3 coords, bool AutoCorrectGroundHeight, bool IgnoreCurrentPedVehicle);




	extern bool  InsVeh;



	extern bool  f_Valkyire;

	extern bool ForceField;


	extern bool m_Head;
	extern bool m_RightHand;
	extern bool m_LeftHand;
	extern bool m_RightFood;
	extern bool m_LeftFood;
	extern bool m_EnableGlow;




	extern bool RainbowNeons;

	extern bool RainbowTireSmoke;

	extern bool DisableHud;







	extern bool DisablePhone;


	extern bool ForceCross;

	extern bool SuperBrakes;

	extern bool JumpAround;

	extern bool ExploAm;
	extern bool AntiAFK;
	extern bool CopsTurn;
	extern bool Snowing;
	extern bool UFOEvent;


	extern bool Y500KL;

	extern bool OffTheRadar;



	//bool WaterLoop;
	//bool FireLoop;


	class CWaterTune
	{
	public:
		DWORD dwWaterColor; //0x0000  Default: 0x1A00191C
		float fRippleScale; //0x0004  Default: 0.040000f
		float fOceanFoamScale; //0x0008  Default: 0.050000f
		float fSpecularFalloff; //0x000C  Default: 1118.000000f
		float fFodPierceIntensity; //0x0010  Default: 1.100000f
		float fRefractionBlend; //0x0014  Default: 0.700000f
		float fRefractionExponent; //0x0018  Default: 0.250000f
		float fWaterCycleDepth; //0x001C  Default: 10.000000f
		float fWaterCycleFade; //0x0020  Default: 50.000000f
		float fWaterLightningDepth; //0x0024  Default: 0.000000f
		float fWaterLightningFade; //0x0028  Default: 10.000000f
		float fDeepWaterModDepth; //0x002C  Default: 90.000000f
		float fDeepWaterModFade; //0x0030  Default: 80.000000f
		float fGodRaysLerpStart; //0x0034  Default: 0.000000f
		float fGodRaysLerpEnd; //0x0038  Default: 200.000000f
		float fDisturbFoamScale; //0x003C  Default: 0.050000f
		void* vec2FogMin; //0x0040  Default: x = -4000.000000 y = -4000.000000
		void* vec2FogMax; //0x0048  Default: x = 4500.000000 y= 8000.000000
	};

	class CWaterDataItem
	{
	public:
		__int16 iMinX; //0x0000 X Coord 1
		__int16 iMinY; //0x0002  Y Coord 1
		__int16 iMaxX; //0x0004 X Coord 2
		__int16 iMaxY; //0x0006 Y Coord 2
		__int8 iAlphaSW; //0x0008  (South West, default 26)
		__int8 iAlphaSE; //0x0009  (South East, default 26)
		__int8 iAlphaNW; //0x000A  (North West, default 26)
		__int8 iAlphaNE; //0x000B  (North East, default 26)
		char _0x000C[8]; // (Unknown, appear to be two floats?)
		float fHeight; //0x0014 (Z-Height, default 0.0)
		BYTE bHasLimitedDepth; //0x0018  (Second bit [binary 10] = On, gives the water quad an effective range of 6 z-points)
		char _0x0019[3]; // (Unknown)
	};//Size=0x001C



	void DisplayVehicle(std::string texture1, std::string texture2);





	/*inline void SelfFeatures(std::uint32_t PlayerId, std::uint32_t PedId) {
*/

	extern bool LAGPLAYER;

	extern bool WaterLoop;
	extern bool FireLoop;



	inline bool m_enabledrop;
	inline int m_drop_delay{ 500 };
	inline int m_drop_value{ 2000 };
	inline float m_drop_pos_x, m_drop_pos_y, m_drop_pos_z{};
	inline const char* m_Droptype[] = { "Money", "Rp" };
	inline std::size_t m_DropIterator;


	static const int GLOBAL_OFFRADAR[] = { 2657589, 466, 210 };
	static const int GLOBAL_COPSTURNBLINDEYE[] = { 2793046, 4654, 5 };
	static const int GLOBAL_NETWORK_STOPWATCH[] = { 2672505, 56 };

	extern bool ExplosiveAmmo2;


	extern bool NoclipV2;
	void noclipv2(bool enable);
	

	extern bool RPDrop;

	extern bool StealthYES1MIL;


	extern bool Dominos;

	

	extern bool Mil40Loop;

	extern bool FastRespawn;
	extern bool BeastJump2;


	extern bool ShootVehicle;
	extern bool ShootVehicle2;

	extern bool BackHornBoost;



#define OFFSET_PLAYER					0x08			//playerbase
#define OFFSET_PLAYER_INFO						0x10C8			//playerInfo struct


	inline bool stimulateCard{ false };

	inline bool Stealth7Mil{ false };


	inline bool Stealth7Mil2{ false };
	inline bool Stealth7Mil3{ false };
	inline bool Stealth7Mil4{ false };
	inline bool Stealth7Mil5{ false };

	inline bool g_stealth{ false };

	inline bool Recovery850K{ false };

	inline bool stealthYES{ false };



	inline static bool f_ExplodeCars{};
	inline static bool f_PushCars{};
	inline static bool f_PersueadeDance{};
	inline static bool f_PersueadeRiot{};
	inline static bool f_PersueadeFollowme{};
	inline static bool f_PersueadePushUps{};
	inline static bool f_BurnPeds{};
	inline static bool f_ThrowPeds{};
	inline static bool f_PushPeds{};
	inline static bool f_ForceLaunch{};
	




	extern bool DiscO;


	extern bool WaterLoop;
	extern bool FireLoop;


	extern bool RainbowVW;

	inline bool shownamechangerthing{ false };

	inline bool m_EnablePaint{ false };
	extern bool PaintG;



	inline bool g_black_hole{ false };

	void setPlayerLevel(int level);
	void setInstantLevel(int level);

	void SetCrewLevel(int level);


	extern bool invis_car;
	void Invis_car(bool toggle);

	extern bool flashrainbow;
	void Flashrainbow(bool toggle);

	extern bool smoothhornboost;
	void Smoothhornbbost(bool toggle);

	extern bool rainbowcar;
	void Rainbowcar(bool toggle);


	void set_vehicle_mod(const int& category, const int& level);

	extern void trigger_transaction(Hash hash, int amount);


	inline int VEHr = 255, VEHg = 0, VEHb = 0;
	inline int r1, g1, b1;


	inline bool hornboosteffect = false;
	inline int hornboostvalue = 50;
	inline int vehiclespeed = 100;


	extern bool rotating;
	void Rotating();


	//void VehicleRamp(bool front, bool back, bool left, bool right);


	//void DeleteRamp();
	//void Ramp();

	//	class GameFunctions
	//	{
	//	public:
	//		explicit GameFunctions();
	//		~GameFunctions() noexcept = default;
	//		GameFunctions(GameFunctions const&) = delete;
	//		GameFunctions(GameFunctions&&) = delete;
	//		GameFunctions& operator=(GameFunctions const&) = delete;
	//		GameFunctions& operator=(GameFunctions&&) = delete;
	//
	//
	//		using PointerToHandle = std::int32_t(uint64_t entity);
	//		PointerToHandle* m_PointerToHande;
	//
	//	};
	//
	//	
	//	inline std::unique_ptr<GameFunctions> g_GameFunctions;
	//}








	struct DropTemplate
	{
		bool Activated{};
		std::uint32_t PickupHash{};

		int Delay{};
		int Amount{};
		int Timer{};

		float x{};
		float y{};
		float z{};
	};


	inline std::vector<DropTemplate> g_Drops{};
	inline std::string g_SelectedDropLabel{};
	inline int SelectedDrop{};

	void DropMgr();




	inline std::vector<Vector3> positions;


	inline bool g_Beastjump{ false };

	inline static bool m_ExplosiveAmmo{ false };

	//inline bool m_ExplosiveAmmo{ false };
	inline bool m_RapidFire{ false };
	inline bool g_Carnado{ false };

	//Outfits
	inline std::vector<const char*> m_ComponentIdList{ "Nothing", "Mask", "Hair", "Gloves", "Pants", "Bags", "Shoes", "Accessories", "Shirts", "Bulletproof Vests", "Emblems", "Jackets" };
	void SetPlayerVariation(int componentId, int drawableId, int textureId, int paletteId);
	void ResetPedVariation();
	void RandomizePedVariation();
	void CreateOutfitFile();
	void LoadOutfitd(std::string name);
	inline int m_ComponentId{ 0 };
	inline int m_DrawableId{ 0 };
	inline int m_TextureId{ 0 };
	inline int m_PaletteId{ 0 };
	inline std::size_t m_ClothIterator{ 0 };
	inline int s0{ 0 }, s1{ 0 }, s2{ 0 }, s3{ 0 }, a0{ 0 }, a1{ 0 }, a2{ 0 }, a3{ 0 }, b0{ 0 }, b5{ 0 }, b2{ 0 }, b3{ 0 }, c0{ 0 }, c1{ 0 }, c2{ 0 }, c3{ 0 }, d0{ 0 }, d1{ 0 }, d2{ 0 }, d3{ 0 }, e0{ 0 }, e1{ 0 }, e2{ 0 }, e3{ 0 }, f0{ 0 }, f1{ 0 }, f2{ 0 }, f3{ 0 }, g0{ 0 }, g5{ 0 }, g2{ 0 }, g3{ 0 }, h0{ 0 }, h1{ 0 }, h2{ 0 }, h3{ 0 }, i0{ 0 }, i1{ 0 }, i2{ 0 }, i3{ 0 }, j0{ 0 }, j1{ 0 }, j2{ 0 }, j3{ 0 }, k0{ 0 }, k1{ 0 }, k2{ 0 }, k3{ 0 }, l0{ 0 }, l1{ 0 }, l2{ 0 }, l3{ 0 };




	////GravityGun
	//inline std::vector<std::int32_t> GravityGunDatabase{};
	//inline float g_PullPushStrength{ 1.5f };
	//inline float g_Velocity{ 1.5f };
	//inline int m_GravityGunEntityCount{ 1 };
	//inline float g_Force{ 5.f };
	//inline bool g_GravityGun{ false };
	//void GravityBug(bool toggle);
	//inline float GravityGunGoto(float aimX, float entityX)
	//{
	//	static float GravityGunVeloPos;
	//	if (aimX > 0 && entityX > 0)
	//	{
	//		GravityGunVeloPos = aimX - (entityX);
	//	}

	//	if (aimX < 0 && entityX < 0)
	//	{
	//		GravityGunVeloPos = aimX - (entityX);
	//	}

	//	if (aimX > 0 && entityX < 0)
	//	{
	//		GravityGunVeloPos = aimX + (entityX);
	//	}

	//	if (aimX < 0 && entityX > 0)
	//	{
	//		GravityGunVeloPos = aimX + (entityX);
	//	}

	//	return GravityGunVeloPos;
	//}
	//inline std::array<const char*, 4> m_Entity = { "Vehicle", "Object", "Pickup", "Propellant" };
	//inline std::array<const char*, 10>m_EntityVehicle = { "Adder", "Oppressor", "Rhino", "Insurgent", "Scramjet",  "T20", "Taipan", "Tempesta", "Tezeract", "Turismor", };
	//inline std::array<const char*, 10>m_EntityObject = { "p_spinning_anus_s", "prop_pipes_conc_02", "prop_barier_conc_03a", "prop_logpile_07b", "prop_asteroid_01",  "prop_tool_shovel2", "prop_prop_tree_01", "prop_conslift_cage", "prop_bush_lrg_01e_cr", "prop_aircon_t_03", };
	//inline std::array<const char*, 4> m_Pickup = { "Vehicle", "Object", "Pickup", "Propellant" };
	//inline std::array<const char*, 3> m_PickupType = { "Money", "Armour", "Health" };
	//inline std::array<const char*, 9> m_PickupModel = { "Bag", "Alien Egg", "X-Mas Tree","Dildo", "Safe","Med Bag", "Gun Case", "Guitar" "Bag", "Golfbag" };
	//inline std::array<const char*, 4> m_PropellantText = { "Firework", "Railgun", "RPG", "Up-n-Atomizer" };
	//inline std::array<int, 9> m_HashModels = { -1666779307, 1803116220, 238789712, -422877666, -1251197000, 1368637848, 1213275131, -708789241, 886428669 };
	//inline std::array<std::uint32_t, 3> m_HashPickups = { 0x1E9A99F8, 0x4BFB42D1, 0x8F707C18 };
	//inline std::array<std::uint32_t, 4> m_PropellantHashes = { 0x7F7497E5, 0x6D544C99, 0xB1CA77B1, 0xAF3696A1 };

	//inline std::size_t m_EntityPickupTypeIterator;
	//inline std::size_t m_EntityPickupModelIterator;
	//inline std::size_t m_EntityIterator;
	//inline std::size_t m_EntityVehicleIterator;
	//inline std::size_t m_EntityObjectIterator;
	//inline std::size_t m_EntityPropellantIterator;

	//inline std::size_t g_GravityGunIterator;

	////Paint
	//inline int m_R{ false };
	//inline int m_G{ false };
	//inline int m_B{ false };
	//inline float m_Range{ 0.1f };
	//inline float m_Intensity{ 1000.f };
	//inline bool m_EnablePaint{ false };
	//inline std::vector<Vector3> positions;







	//EnityGunVehicle(m_EnableEntityGunVehicle, m_EntityVehicle[m_EntityVehicleIterator], m_VehicleSpawnDistance, m_VehicleLaunchSpeed);
	//EntityGunObject(m_EnableEntityGunObject, m_EntityObject[m_EntityObjectIterator], m_ObjectSpawnDistance, m_ObjectLaunchSpeed);
	//PickupGun(m_EnableEntityGunPickups, m_HashModels[m_EntityPickupModelIterator], m_HashPickups[m_EntityPickupModelIterator], m_PickupValue);
	//PropellantGun(m_EnableEntityPropellant, m_PropellantSpawnDistance, m_PropellantHashes[m_EntityPropellantIterator], m_ObjectPropellantSpeed);

	inline bool g_dominos{ false };

	void AttachMents();
	inline bool m_Magnet{ false };
	inline bool g_Rope{ false };

	inline const char* wepattach[] = {
	"Add All", "Remove All"
	};
	inline std::size_t _wepattach = 0;





	inline LPCSTR AllWeapons[] = {
			"WEAPON_KNIFE", "WEAPON_NIGHTSTICK", "WEAPON_HAMMER", "WEAPON_BAT", "WEAPON_GOLFCLUB", "WEAPON_CROWBAR",
			"WEAPON_PISTOL", "WEAPON_COMBATPISTOL","weapon_hatchet", "weapon_battleaxe","weapon_stone_hatchet", "WEAPON_APPISTOL", "WEAPON_PISTOL50", "WEAPON_MICROSMG", "WEAPON_SMG",
			"WEAPON_ASSAULTSMG", "WEAPON_ASSAULTRIFLE", "WEAPON_CARBINERIFLE", "WEAPON_ADVANCEDRIFLE", "WEAPON_MG",
			"WEAPON_COMBATMG", "WEAPON_PUMPSHOTGUN", "WEAPON_SAWNOFFSHOTGUN", "WEAPON_ASSAULTSHOTGUN", "WEAPON_BULLPUPSHOTGUN",
			"WEAPON_STUNGUN", "WEAPON_SNIPERRIFLE", "WEAPON_HEAVYSNIPER", "WEAPON_GRENADELAUNCHER", "WEAPON_GRENADELAUNCHER_SMOKE",
			"WEAPON_RPG", "WEAPON_MINIGUN", "WEAPON_GRENADE", "WEAPON_STICKYBOMB", "WEAPON_SMOKEGRENADE", "WEAPON_BZGAS",
			"WEAPON_MOLOTOV", "WEAPON_FIREEXTINGUISHER", "WEAPON_PETROLCAN",
			"WEAPON_SNSPISTOL", "WEAPON_SPECIALCARBINE", "WEAPON_HEAVYPISTOL", "WEAPON_BULLPUPRIFLE", "WEAPON_HOMINGLAUNCHER",
			"WEAPON_PROXMINE", "WEAPON_SNOWBALL", "WEAPON_VINTAGEPISTOL", "WEAPON_DAGGER", "WEAPON_FIREWORK", "WEAPON_MUSKET",
			"WEAPON_MARKSMANRIFLE", "WEAPON_HEAVYSHOTGUN", "WEAPON_GUSENBERG", "WEAPON_HATCHET", "WEAPON_RAILGUN",
			"WEAPON_COMBATPDW", "WEAPON_KNUCKLE", "WEAPON_MARKSMANPISTOL", "WEAPON_RAYPISTOL", "weapon_ceramicpistol", "weapon_navyrevolver", "weapon_gadgetpistol", "weapon_autoshotgun", "weapon_combatshotgun", "weapon_assaultrifle_mk2",
			"weapon_carbinerifle_mk2", "weapon_specialcarbine_mk2", "weapon_bullpuprifle_mk2", "weapon_compactrifle", "weapon_militaryrifle", "weapon_heavysniper_mk2", "weapon_marksmanrifle_mk2", "weapon_raycarbine", "weapon_minismg",
			"weapon_dbshotgun", "weapon_compactlauncher", "weapon_rayminigun", "weapon_pipebomb", "weapon_flare", "weapon_smokegrenade", "weapon_pistol_mk2", "weapon_snspistol_mk2", "weapon_revolver_mk2", "weapon_combatmg_mk2", "weapon_pumpshotgun_mk2",
			"weapon_machinepistol", "weapon_smg_mk2"
	};

	inline LPCSTR AllAttachments[] = {
		"COMPONENT_PISTOL_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_SUPP_02", "COMPONENT_PISTOL_VARMOD_LUXE", "COMPONENT_COMBATPISTOL_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_SUPP", "COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER",
		"COMPONENT_APPISTOL_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_SUPP", "COMPONENT_APPISTOL_VARMOD_LUXE", "COMPONENT_PISTOL50_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_AR_SUPP_02", "COMPONENT_PISTOL50_VARMOD_LUXE",
		"COMPONENT_REVOLVER_VARMOD_GOON", "COMPONENT_SNSPISTOL_CLIP_02", "COMPONENT_SNSPISTOL_VARMOD_LOWRIDER", "COMPONENT_HEAVYPISTOL_CLIP_02", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_SUPP", "COMPONENT_HEAVYPISTOL_VARMOD_LUXE",
		"COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY", "COMPONENT_AT_SIGHTS", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_COMP_03", "COMPONENT_REVOLVER_MK2_CAMO_10", "COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY", "COMPONENT_AT_PI_FLSH_03", "COMPONENT_AT_PI_RAIL_02",
		"COMPONENT_AT_PI_SUPP_02", "COMPONENT_SNSPISTOL_MK2_CAMO_10", "COMPONENT_PISTOL_MK2_CLIP_INCENDIARY", "COMPONENT_AT_PI_RAIL", "COMPONENT_AT_PI_FLSH_02", "COMPONENT_AT_PI_SUPP_02", "COMPONENT_PISTOL_MK2_CAMO_10", "COMPONENT_VINTAGEPISTOL_CLIP_02",
		"COMPONENT_AT_PI_SUPP", "COMPONENT_RAYPISTOL_VARMOD_XMAS18", "COMPONENT_CERAMICPISTOL_CLIP_02", "COMPONENT_CERAMICPISTOL_SUPP",

		"COMPONENT_MICROSMG_CLIP_02","COMPONENT_AT_PI_FLSH","COMPONENT_AT_SCOPE_MACRO","COMPONENT_AT_AR_SUPP_02","COMPONENT_MICROSMG_VARMOD_LUXE","COMPONENT_SMG_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_MACRO_02","COMPONENT_AT_PI_SUPP",
		"COMPONENT_SMG_VARMOD_LUXE","COMPONENT_ASSAULTSMG_CLIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_MACRO","COMPONENT_AT_AR_SUPP_02","COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER","COMPONENT_MINISMG_CLIP_02","COMPONENT_SMG_MK2_CLIP_02",
		"COMPONENT_SMG_MK2_CLIP_INCENDIARY","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS_SMG","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_SB_BARREL_02","COMPONENT_SMG_MK2_CAMO_10","COMPONENT_MACHINEPISTOL_CLIP_03","COMPONENT_AT_PI_SUPP",
		"COMPONENT_COMBATPDW_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_AFGRIP","COMPONENT_AT_SCOPE_SMALL",

		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_SR_SUPP","COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER","COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE","COMPONENT_ASSAULTSHOTGUN_CLIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP","COMPONENT_AT_AR_AFGRIP",
		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_AR_AFGRIP","COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY","COMPONENT_AT_SIGHTS","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SR_SUPP_03","COMPONENT_PUMPSHOTGUN_MK2_CAMO_10",
		"COMPONENT_HEAVYSHOTGUN_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP",

		"COMPONENT_ASSAULTRIFLE_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_MACRO","COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_AR_AFGRIP","COMPONENT_ASSAULTRIFLE_VARMOD_LUXE","COMPONENT_CARBINERIFLE_CLIP_03","COMPONENT_AT_AR_FLSH",
		"COMPONENT_AT_SCOPE_MEDIUM","COMPONENT_AT_AR_SUPP","COMPONENT_AT_AR_AFGRIP","COMPONENT_CARBINERIFLE_VARMOD_LUXE","COMPONENT_ADVANCEDRIFLE_CLIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_SMALL","COMPONENT_AT_AR_SUPP",
		"COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE","COMPONENT_SPECIALCARBINE_CLIP_03","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_MEDIUM","COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_AR_AFGRIP","COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER",
		"COMPONENT_BULLPUPRIFLE_CLIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SCOPE_SMALL","COMPONENT_AT_AR_SUPP","COMPONENT_AT_AR_AFGRIP","COMPONENT_BULLPUPRIFLE_VARMOD_LOW","COMPONENT_BULLPUPRIFLE_MK2_CLIP_02","COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY",
		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS","COMPONENT_AT_BP_BARREL_02","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_AR_AFGRIP_02","COMPONENT_BULLPUPRIFLE_MK2_CAMO_10","COMPONENT_SPECIALCARBINE_MK2_CLIP_02","COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY",
		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_AR_AFGRIP_02","COMPONENT_AT_SC_BARREL_02","COMPONENT_SPECIALCARBINE_MK2_CAMO_10","COMPONENT_ASSAULTRIFLE_MK2_CLIP_02","COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"
		,"COMPONENT_AT_AR_AFGRIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_AR_BARREL_02","COMPONENT_ASSAULTRIFLE_MK2_CAMO_10","COMPONENT_CARBINERIFLE_MK2_CLIP_02","COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"
		,"COMPONENT_AT_AR_AFGRIP_02","COMPONENT_AT_AR_FLSH","COMPONENT_AT_SIGHTS","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_CR_BARREL_02","COMPONENT_CARBINERIFLE_MK2_CAMO_10","COMPONENT_COMPACTRIFLE_CLIP_03","COMPONENT_MILITARYRIFLE_CLIP_02",
		"COMPONENT_AT_SCOPE_SMALL","COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_SUPP",

		"COMPONENT_MG_CLIP_02","COMPONENT_AT_SCOPE_SMALL_02","COMPONENT_MG_VARMOD_LOWRIDER","COMPONENT_COMBATMG_CLIP_02","COMPONENT_AT_SCOPE_MEDIUM","COMPONENT_AT_AR_AFGRIP","COMPONENT_COMBATMG_VARMOD_LOWRIDER","COMPONENT_COMBATMG_MK2_CLIP_02",
		"COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY","COMPONENT_AT_AR_AFGRIP_02","COMPONENT_AT_SIGHTS","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MG_BARREL_02","COMPONENT_COMBATMG_MK2_CAMO_10","COMPONENT_GUSENBERG_CLIP_02",

		"COMPONENT_AT_AR_SUPP_02","COMPONENT_AT_SCOPE_MAX","COMPONENT_SNIPERRIFLE_VARMOD_LUXE","COMPONENT_AT_SCOPE_MAX","COMPONENT_MARKSMANRIFLE_MK2_CLIP_02","COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY","COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2",
		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_MUZZLE_05","COMPONENT_AT_MRFL_BARREL_02","COMPONENT_AT_AR_AFGRIP_02","COMPONENT_MARKSMANRIFLE_MK2_CAMO_10","COMPONENT_HEAVYSNIPER_MK2_CLIP_02","COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY",
		"COMPONENT_AT_SCOPE_THERMAL","COMPONENT_AT_MUZZLE_09","COMPONENT_AT_SR_BARREL_02","COMPONENT_HEAVYSNIPER_MK2_CAMO_10","COMPONENT_MARKSMANRIFLE_CLIP_02","COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM","COMPONENT_AT_AR_FLSH",
		"COMPONENT_AT_AR_SUPP","COMPONENT_AT_AR_AFGRIP","COMPONENT_MARKSMANRIFLE_VARMOD_LUXE",

		"COMPONENT_AT_AR_FLSH","COMPONENT_AT_AR_AFGRIP","COMPONENT_AT_SCOPE_SMALL"

	};




	extern bool g_misc_player_join_leave_notify;

	inline int g_RedPaint{ 0 };
	inline int g_BluePaint{ 255 };
	inline int g_GreenPaint{ 0 };
	inline int m_R{ false };
	inline int m_G{ false };
	inline int m_B{ false };

	extern int WaveIntensityValue;

	inline bool g_AngryPlanesEnable{ false };
	inline bool g_AngryPlanesRockets{ false };


	inline float m_Range{ 0.1f };
	inline float m_Intensity{ 1000.f };

	//extern bool FastSlotMachines;

	extern bool CayoIPL;

	extern bool TEST1;
	extern bool TEST2;
	extern bool TEST3;
	extern bool TEST4
		;
	extern bool PushVehFun;

	extern bool ExpVehFun;

	extern bool SteathNigger;

	extern bool NorthY;

	extern bool WNoClip;

		extern bool PlayerFlyingcar;

	extern bool McGun;

	extern bool ExplosiveAmmo3;


	extern bool FastRun;

	extern bool FastSwim;


	extern bool CopsTurnBlindEye;

	extern bool TinyPlayer;

	extern bool RainbowNeons;
	extern bool RainbowTireSmoke;
	extern bool RainbowCar22;
	extern bool RainbowMods;

	extern bool StealthYES2;

	extern bool MoonGravity;


	extern bool DiscordRPC;

	extern bool m_EnableExplosives;

	extern bool RPLoop;
	extern int RPLoopDelay;
	void rpLoop();


	void LoadPlayerInfo(char* Playername, Player  p);
	//void LoadPlayerInfo(int type);

	void BypassV(Vehicle vehicle);
	extern bool FireworksGun;
	extern bool ExplosiveMelee;
	extern bool AFK;
	extern bool SuperMan;
	extern bool ExplosiveAmmo;
	extern bool MoneyGun;
	extern bool MoneyGun2;
	extern bool MoneyGun3;
	extern bool Freeze;
	extern bool HornBoost;

	extern bool StickyTires;

	extern bool VehicleMatrixPlate;
	extern bool VehicleMatrixPlate2;

	extern int BoostAmmount;
	extern bool TeleportGun;
	extern bool AirstrikeGun;
	extern bool GravityGun;
	extern bool WaterGun;
	extern bool PedGun;
	extern bool PedGun2;
	extern bool InfiniteAmmo;
	extern bool OffRadar;
	extern bool KickProtec;
	extern bool UnlockAll;
	extern bool CarColor;
	extern bool Shower;


	extern bool AimBot;



	extern bool FlyGun;
	extern bool NoGravity;
	extern bool ClownGun;
	extern bool ExpGun;
	extern bool DriveOnWater;
	extern bool VehicleJump;
	extern bool JumpingVehicles;
	extern bool NoRagdoll;
	extern bool ThermalVision;
	extern bool NightVision;
	extern bool KillPeds;
	extern bool AutoFlip;
	extern bool AutoFix;
	extern bool VehicleGodmode;
	extern bool DriftMode;
	extern bool DestroyGun;
	extern bool PlayerFly;
	extern bool TinyGun;
	extern bool Flameammo;
	extern bool Crash;
	extern bool InfLoad;
	extern bool BlockCayo;
	extern bool Freeze;
	extern bool ExplosionBlock;
	extern bool FireBlock;
	extern bool WeaBlock;
	extern bool WeaponBlock;
	extern bool ReportBlock;
	extern bool apBlock;
	extern bool GlitchVehicle;
	extern bool DriveUnderWater;
	extern bool NinjaJump;

	extern bool EletricRun;


	extern bool SpinBot;

	extern bool BeastJump;

	extern bool FireBr;

	extern bool FPS;
	extern bool Version;
	extern bool Gamev;
	extern bool SpectatePlayer;
	extern bool Wnoclip;
	extern bool FreezeP;
	extern bool Wnoclip;
	extern bool Collision;
	extern bool DestroyPhone;
	extern bool MobileRadio;
	extern bool HideHud;
	extern bool ESPBox;
	extern bool ESPLine;
	extern bool SlowMotion;
	inline int g_Alpha{ 255 };
	inline float g_Height{ 1.f };
	inline float g_Width{ 1.f };
	extern bool FootTrails;
	extern bool VehicleTrails;
	extern bool AlwaysWanted;
	extern bool Flash;
	void vehicle_acrobatics(int type);
	//inline float handscale{ 0.5f };
	extern bool HandTrails;
	extern bool HandTrails2;
	extern bool RapidFire;
	extern bool CARGOPLANE;

	extern bool m_fastrun;
	extern bool m_fastswim;

	extern bool SwimAnywhere;

	inline float handred{ 255.f };
	inline float handgreen{ 0.f };
	inline float handblue{ 0.f };
	inline float handalpha{ 255.f };
	inline float handscale{ 0.5f };
	inline bool m_Handtrails{ false };
	extern bool m_Handtrails;




	extern bool m_enableglow;
	extern bool m_ghead;
	extern bool m_grighthand;
	extern bool m_glefthand;
	extern bool m_grightfoot;
	extern bool m_gleftfoot;

	extern bool ShockWave;
	//inline float handred{ 255.f };
	//inline float handgreen{ 0.f };
	//inline float handblue{ 0.f };
	extern bool DesyncProtection;
	extern bool SpectatePlayer2;
	void vehcrash();
	extern bool TPHotkey;
	extern bool NoclipHotkey;
	extern bool circleDrop;
	extern bool RapidFire;
	extern bool YoinkGun;
	extern bool RainbowCamo;
	extern bool LaserSight;
	extern bool AlwaysRagdoll;
	void proofs(bool bulletproof, bool fireproof, bool explosionproof, bool collisionproof, bool meleeproof, bool drownproof);
	extern bool DeadEye;
	extern bool Spedometer;
	extern bool PlayerNames;

	extern bool Magnet;
	extern bool CMagnet;

	extern bool ForceGun;

	void Function_update_Loop();

	//Explosive
	inline std::vector<const char*> m_Explosion = { "Grenade", "GrenadeL", "Sticky Bomb", "Molotov", "Rocket", "Tank Shell", "Hi Octane", "Car", "Plane", "Petrol Pump", "Bike", "Steam", "Flame", "Water Hydrant", "Gas Canister", "Boat", "Ship", "Truck", "Bullet", "SmokeG", "SmokeGL", "BZ Gas", "Flare", "Gas Canister2", "Extinguisher", "ProgramAR", "Train", "Barrel", "Propane", "Blimp", "Exploding Flame", "Tanker", "Plane Rocket", "Vehicle Bullet", "Gas Tank", "Firework", "Snowball", "Proximity Mine", "Valkyrie" };
	inline std::size_t m_Explosion_Iterator;
	inline bool m_EnableExplosives{ false };
	inline float m_Damage{ 0.f };
	inline float m_CameraShake{ 0.f };
	inline bool  m_Invisible{ false };
	inline bool  m_Audiable{ false };
	inline bool  m_DamageDisable{ false };

	//ShotGun2.init();

	//extern bool ShotGun2;





	//float m_speed; //0x011C
	//uint32_t m_bullets_in_batch; //0x0120
	//float m_batch_spread; //0x0124
	//float m_reload_time_mp; //0x0128
	//float m_reload_time_sp; //0x012C
	//float m_vehicle_reload_time; //0x0130
	//float m_anim_reload_time; //0x0134
	//int32_t m_bullets_per_anime_loop; //0x0138
	//float m_time_between_shots; //0x013C
	//float m_time_left_between_shots_where_should_fire_is_cached; //0x0140
	//float m_spinup_time; //0x0144
	//float m_spin_time; //0x0148
	//float m_spindown_time; //0x014C
	//float m_alternate_wait_time; //0x0150
	//char pad_0154[296]; //0x0154
	//float m_network_player_damage_modifier; //0x027C
	//float m_network_ped_damage_modifier; //0x0280
	//float m_network_headshot_modifier; //0x0284
	//float m_lock_on_range; //0x0288
	//float m_weapon_range; //0x028C
	//float m_ai_sound_range; //0x0290
	//float m_ai_potential_blast_event_range; //0x0294
	//float m_damage_fall_off_range_min; //0x0298
	//float m_damage_fall_off_range_max; //0x029C
	//float m_damage_fall_off_modifier; //0x02A0
	//float m_force; //0x00D8
	//float m_force_on_ped; //0x00DC
	//float m_force_on_vehicle; //0x00E0
	//float m_force_on_heli; //0x00E4




	//inline bool ShotGunMode{ false };

	//inline int ShotGunMode{ false };

	//inline bool  ShotGun2 { false };



	inline Vector3 g_black_hole_pos;

	inline bool g_EnableLight{ false };
	inline bool g_RGBLight{ false };
	inline int g_LightRed{ 255 };
	inline int g_LightBlue{ 0 };
	inline int g_LightGreen{ 0 };
	inline int g_LigtIntensity{ 20 };

	//inline bool g_dominos{ false };

	//inline bool g_black_hole{ false };

	inline const char* RampTypes[2]{ "Ramp", "Halfpipe" };
	inline std::vector<std::int32_t> g_Ramp{};
	inline std::size_t RampIndex{ 0 };
	inline int g_RampCount{ 10 };
	void BlackHole();
	void Ramp();
	void DeleteRamp();
	void dominos(bool toggle);


	




	inline const char* Display1[2]{ "Enabled", "Disabled" };
	inline std::size_t Displayy1{ 0 };
	inline const char* Display2[2]{ "Enabled", "Disabled" };
	inline std::size_t Displayy2{ 0 };
	inline const char* Display3[2]{ "Enabled", "Disabled" };
	inline std::size_t Displayy3{ 0 };
	inline const char* Display4[2]{ "Enabled", "Disabled" };
	inline std::size_t Displayy4{ 0 };

	inline std::size_t Displayy5{ 0 };
	inline const char* Display5[2]{ "Enabled", "Disabled" };
	inline std::size_t Displayy6{ 0 };
	inline const char* Display6[2]{ "Enabled", "Disabled" };
	inline std::size_t Displayy7{ 0 };
	inline const char* Display7[2]{ "Enabled", "Disabled" };
	inline std::size_t Displayy8{ 0 };
	inline const char* Display8[2]{ "Enabled", "Disabled" };



	inline bool g_Fps{ true };
	inline bool g_FreeSlots{ true };
	inline bool g_Speed{ true };
	inline bool g_Position{ true };
	inline bool g_BypassChat{ false };
	inline bool g_BypassMap{ false };


	class entityYES
	{

		static bool remove_attached_entity(Ped Ped, Hash Model);
		static void apply_force(Entity Entity, float x, float y, float z);
		static bool is_in_interior(Entity Entity);
		static void request_network_control(Entity Entity);
		static void attach_to_entity(Entity Entity, Hash Object);
	};




	//class fibermain
	//{
	//public:
	//	static HANDLE handle;
	//	static void func_(LPVOID lpParameter);
	//	static void pause(bool show_msg = true, int duration = 0);
	//	static DWORD wake_time;
	//};



	inline bool yesyes1{ false };
	inline bool yesyes2{ false };
	inline bool yesyes3{ false };
	inline bool yesyes4{ true };








	//inline const char* CrossStyle[2]{ "Plus", "Cross" };
	//inline std::size_t _CrossStyle{ 0 };
	//inline float crosssize{ 6.f };
	//inline float redcross{ 255.f };
	//inline float greencross{ 0.f };
	//inline float bluecross{ 0.f };
	//inline bool testicalcancer{ false };
	//inline std::size_t g_AimbotInterator{ 0 };
	//inline const char* AimbotArray[3]{ "None", "Weak", "Heavy" };



	inline bool GodmodeBool, FireBreathBool, ShrinkPlayerBool, SuperJumpBool, PlayerAlphaBool, SuperRunBool, SlomotionBool, FastSwimBool,
		SeatBeltBool, NoClipBool, NeverWantedBool, OffTheRadarBool, ForceFieldBool, MobileRadioBool,
		FakeWantedLevel, ExplosiveMeleeBool, NightVisionBool, ThermalVisionBool, DrunkPedBool, CAMERAZOOMBOOL, HealthIncreaseBool;




	inline float CamZoomFloat = 4.f;

	//=================
	// PED FUNCTIONS
	//=================

	void drawstring(char* text, float X, float Y);
	void setupdraw(bool outline);

	Ped ClonePed(Ped ped);
	Ped CreatePed(char* PedName, Vector3 SpawnCoordinates, int ped_type, bool network_handle);

	//Animations
	void LoadAnim(char* dict);
	void playAnimation(Ped ped, bool loop, char* dict, char* anim);

	//SKINS
	bool applyChosenSkin(std::string skinName);

	//CONTROL
	void RequestControlOfEnt(Entity entity);

	//FORCE
	void ApplyForceToEntity(Entity e, float x, float y, float z);

	//CALM PEDS
	void set_all_nearby_peds_to_calm();

	//NEARBY PEDS
	std::set<Ped> getNearbyPeds();
	void update_nearby_peds(Ped playerPed, int count);

	//VEHICLE
	bool get_vehicle_keyboard_result(uint* outModel);

	//little one-line function called '$' to convert $TRING into a hash-key:
	Hash $(std::string str);

	//Converts Radians to Degrees
	float degToRad(float degs);

	//quick function to get-coords-of-entity:
	Vector3 coordsOf(Entity entity);

	//quick function to get distance between 2 points:
	float distanceBetween(Vector3 A, Vector3 B);

	//quick "get random int in range 0-x" function:
	int rndInt(int start, int end);

	//KEYBOARD
	std::string show_keyboard(char* title_id, char* prepopulated_text);

	//VECTOR/FLOAT
	Vector3 rot_to_direction(Vector3* rot);
	Vector3 add(Vector3* vectorA, Vector3* vectorB);
	Vector3 multiply(Vector3* vector, float x);
	float get_distance(Vector3* pointA, Vector3* pointB);
	float get_vector_length(Vector3* vector);

	//NOTIFICATION
	void notifyBottom(char* fmt, ...);
	void notifyBottom(std::string str);
	void notifyMap(char* fmt, ...);
	void notifyMap(std::string str);


	void notifyBottom6(char* fmt, ...);
	void notifyBottom6(std::string str);

	void notifyBottom5(char* fmt, ...);
	void notifyBottom5(std::string str);

	void notifyMapRank(char* fmt, ...);
	void notifyMapRank(std::string str);

	void notifyCenter(char* fmt, ...);
	void notifyCenter(std::string str);


	void notifyCenterRank(char* fmt, ...);
	void notifyCenterRank(std::string str);



	void update_status_text();
	void notifyleft(char* msg);
	void notify_Custom(char* Head_txt, char* fmt, ...);
	void notify_Original(char* fmt, ...);
	void notify_Red(char* fmt, ...);
	void notify_Green(char* fmt, ...);

	// Header
	extern bool HeaderImage;
	char* Add_Strings(char* string1, char* string2);
	std::string Documents_Patha();

	//DRAWING FUNCTIONS
	void draw_rect(float A_0, float A_1, float A_2, float A_3, int A_4, int A_5, int A_6, int A_7);
	void draw_menu_line(std::string caption, float lineWidth, float lineHeight, float lineTop, float lineLeft, float textLeft, bool active, bool title, bool rescaleText = true);


	void AddTimeNetwork(int, int, int);

	// Vector things
	//Vector3 RotationToDirectionV3(Vector3 rot);
	//Vector3 AddV3(Vector3 vectorA, Vector3 vectorB);
	//Vector3 MultiplyV3(Vector3 vector, float x);





	inline const char* DemoList1[2]
	{
		"RP Gift",
		"Instant",

	};

	inline std::size_t DemoListPos1 = 0;
	inline int Levels[8000] = { 0, 800, 2100, 3800, 6100, 9500, 12500, 16000, 19800, 24000, 28500, 33400, 38700, 44200, 50200, 56400, 63000, 69900, 77100, 84700, 92500, 100700, 109200, 118000, 127100, 136500, 146200,
	156200, 166500, 177100, 188000, 199200, 210700, 222400, 234500, 246800, 259400, 272300, 285500, 299000, 312700, 326800, 341000, 355600, 370500, 385600, 401000, 416600, 432600, 448800, 465200, 482000, 499000,
	516300, 533800, 551600, 569600, 588000, 606500, 625400, 644500, 663800, 683400, 703300, 723400, 743800, 764500, 785400, 806500, 827900, 849600, 871500, 893600, 916000, 938700, 961600, 984700, 1008100, 1031800,
	1055700, 1079800, 1104200, 1128800, 1153700, 1178800, 1204200, 1229800, 1255600, 1281700, 1308100, 1334600, 1361400, 1388500, 1415800, 1443300, 1471100, 1499100, 1527300, 1555800, 1584350, 1612950, 1641600,
	1670300, 1699050, 1727850, 1756700, 1785600, 1814550, 1843550, 1872600, 1901700, 1930850, 1960050, 1989300, 2018600, 2047950, 2077350, 2106800, 2136300, 2165850, 2195450, 2225100, 2254800, 2284550, 2314350,
	2344200, 2374100, 2404050, 2434050, 2464100, 2494200, 2524350, 2554550, 2584800, 2615100, 2645450, 2675850, 2706300, 2736800, 2767350, 2797950, 2828600, 2859300, 2890050, 2920850, 2951700, 2982600, 3013550,
	3044550, 3075600, 3106700, 3137850, 3169050, 3200300, 3231600, 3262950, 3294350, 3325800, 3357300, 3388850, 3420450, 3452100, 3483800, 3515550, 3547350, 3579200, 3611100, 3643050, 3675050, 3707100, 3739200,
	3771350, 3803550, 3835800, 3868100, 3900450, 3932850, 3965300, 3997800, 4030350, 4062950, 4095600, 4128300, 4161050, 4193850, 4226700, 4259600, 4292550, 4325550, 4358600, 4391700, 4424850, 4458050, 4491300,
	4524600, 4557950, 4591350, 4624800, 4658300, 4691850, 4725450, 4759100, 4792800, 4826550, 4860350, 4894200, 4928100, 4962050, 4996050, 5030100, 5064200, 5098350, 5132550, 5166800, 5201100, 5235450, 5269850,
	5304300, 5338800, 5373350, 5407950, 5442600, 5477300, 5512050, 5546850, 5581700, 5616600, 5651550, 5686550, 5721600, 5756700, 5791850, 5827050, 5862300, 5897600, 5932950, 5968350, 6003800, 6039300, 6074850,
	6110450, 6146100, 6181800, 6217550, 6253350, 6289200, 6325100, 6361050, 6397050, 6433100, 6469200, 6505350, 6541550, 6577800, 6614100, 6650450, 6686850, 6723300, 6759800, 6796350, 6832950, 6869600, 6906300,
	6943050, 6979850, 7016700, 7053600, 7090550, 7127550, 7164600, 7201700, 7238850, 7276050, 7313300, 7350600, 7387950, 7425350, 7462800, 7500300, 7537850, 7575450, 7613100, 7650800, 7688550, 7726350, 7764200,
	7802100, 7840050, 7878050, 7916100, 7954200, 7992350, 8030550, 8068800, 8107100, 8145450, 8183850, 8222300, 8260800, 8299350, 8337950, 8376600, 8415300, 8454050, 8492850, 8531700, 8570600, 8609550, 8648550,
	8687600, 8726700, 8765850, 8805050, 8844300, 8883600, 8922950, 8962350, 9001800, 9041300, 9080850, 9120450, 9160100, 9199800, 9239550, 9279350, 9319200, 9359100, 9399050, 9439050, 9479100, 9519200, 9559350,
	9599550, 9639800, 9680100, 9720450, 9760850, 9801300, 9841800, 9882350, 9922950, 9963600, 10004300, 10045050, 10085850, 10126700, 10167600, 10208550, 10249550, 10290600, 10331700, 10372850, 10414050, 10455300,
	10496600, 10537950, 10579350, 10620800, 10662300, 10703850, 10745450, 10787100, 10828800, 10870550, 10912350, 10954200, 10996100, 11038050, 11080050, 11122100, 11164200, 11206350, 11248550, 11290800, 11333100,
	11375450, 11417850, 11460300, 11502800, 11545350, 11587950, 11630600, 11673300, 11716050, 11758850, 11801700, 11844600, 11887550, 11930550, 11973600, 12016700, 12059850, 12103050, 12146300, 12189600, 12232950,
	12276350, 12319800, 12363300, 12406850, 12450450, 12494100, 12537800, 12581550, 12625350, 12669200, 12713100, 12757050, 12801050, 12845100, 12889200, 12933350, 12977550, 13021800, 13066100, 13110450, 13154850,
	13199300, 13243800, 13288350, 13332950, 13377600, 13422300, 13467050, 13511850, 13556700, 13601600, 13646550, 13691550, 13736600, 13781700, 13826850, 13872050, 13917300, 13962600, 14007950, 14053350, 14098800,
	14144300, 14189850, 14235450, 14281100, 14326800, 14372550, 14418350, 14464200, 14510100, 14556050, 14602050, 14648100, 14694200, 14740350, 14786550, 14832800, 14879100, 14925450, 14971850, 15018300, 15064800,
	15111350, 15157950, 15204600, 15251300, 15298050, 15344850, 15391700, 15438600, 15485550, 15532550, 15579600, 15626700, 15673850, 15721050, 15768300, 15815600, 15862950, 15910350, 15957800, 16005300, 16052850,
	16100450, 16148100, 16195800, 16243550, 16291350, 16339200, 16387100, 16435050, 16483050, 16531100, 16579200, 16627350, 16675550, 16723800, 16772100, 16820450, 16868850, 16917300, 16965800, 17014350, 17062950,
	17111600, 17160300, 17209050, 17257850, 17306700, 17355600, 17404550, 17453550, 17502600, 17551700, 17600850, 17650050, 17699300, 17748600, 17797950, 17847350, 17896800, 17946300, 17995850, 18045450, 18095100,
	18144800, 18194550, 18244350, 18294200, 18344100, 18394050, 18444050, 18494100, 18544200, 18594350, 18644550, 18694800, 18745100, 18795450, 18845850, 18896300, 18946800, 18997350, 19047950, 19098600, 19149300,
	19200050, 19250850, 19301700, 19352600, 19403550, 19454550, 19505600, 19556700, 19607850, 19659050, 19710300, 19761600, 19812950, 19864350, 19915800, 19967300, 20018850, 20070450, 20122100, 20173800, 20225550,
	20277350, 20329200, 20381100, 20433050, 20485050, 20537100, 20589200, 20641350, 20693550, 20745800, 20798100, 20850450, 20902850, 20955300, 21007800, 21060350, 21112950, 21165600, 21218300, 21271050, 21323850,
	21376700, 21429600, 21482550, 21535550, 21588600, 21641700, 21694850, 21748050, 21801300, 21854600, 21907950, 21961350, 22014800, 22068300, 22121850, 22175450, 22229100, 22282800, 22336550, 22390350, 22444200,
	22498100, 22552050, 22606050, 22660100, 22714200, 22768350, 22822550, 22876800, 22931100, 22985450, 23039850, 23094300, 23148800, 23203350, 23257950, 23312600, 23367300, 23422050, 23476850, 23531700, 23586600,
	23641550, 23696550, 23751600, 23806700, 23861850, 23917050, 23972300, 24027600, 24082950, 24138350, 24193800, 24249300, 24304850, 24360450, 24416100, 24471800, 24527550, 24583350, 24639200, 24695100, 24751050,
	24807050, 24863100, 24919200, 24975350, 25031550, 25087800, 25144100, 25200450, 25256850, 25313300, 25369800, 25426350, 25482950, 25539600, 25596300, 25653050, 25709850, 25766700, 25823600, 25880550, 25937550,
	25994600, 26051700, 26108850, 26166050, 26223300, 26280600, 26337950, 26395350, 26452800, 26510300, 26567850, 26625450, 26683100, 26740800, 26798550, 26856350, 26914200, 26972100, 27030050, 27088050, 27146100,
	27204200, 27262350, 27320550, 27378800, 27437100, 27495450, 27553850, 27612300, 27670800, 27729350, 27787950, 27846600, 27905300, 27964050, 28022850, 28081700, 28140600, 28199550, 28258550, 28317600, 28376700,
	28435850, 28495050, 28554300, 28613600, 28672950, 28732350, 28791800, 28851300, 28910850, 28970450, 29030100, 29089800, 29149550, 29209350, 29269200, 29329100, 29389050, 29449050, 29509100, 29569200, 29629350,
	29689550, 29749800, 29810100, 29870450, 29930850, 29991300, 30051800, 30112350, 30172950, 30233600, 30294300, 30355050, 30415850, 30476700, 30537600, 30598550, 30659550, 30720600, 30781700, 30842850, 30904050,
	30965300, 31026600, 31087950, 31149350, 31210800, 31272300, 31333850, 31395450, 31457100, 31518800, 31580550, 31642350, 31704200, 31766100, 31828050, 31890050, 31952100, 32014200, 32076350, 32138550, 32200800,
	32263100, 32325450, 32387850, 32450300, 32512800, 32575350, 32637950, 32700600, 32763300, 32826050, 32888850, 32951700, 33014600, 33077550, 33140550, 33203600, 33266700, 33329850, 33393050, 33456300, 33519600,
	33582950, 33646350, 33709800, 33773300, 33836850, 33900450, 33964100, 34027800, 34091550, 34155350, 34219200, 34283100, 34347050, 34411050, 34475100, 34539200, 34603350, 34667550, 34731800, 34796100, 34860450,
	34924850, 34989300, 35053800, 35118350, 35182950, 35247600, 35312300, 35377050, 35441850, 35506700, 35571600, 35636550, 35701550, 35766600, 35831700, 35896850, 35962050, 36027300, 36092600, 36157950, 36223350,
	36288800, 36354300, 36419850, 36485450, 36551100, 36616800, 36682550, 36748350, 36814200, 36880100, 36946050, 37012050, 37078100, 37144200, 37210350, 37276550, 37342800, 37409100, 37475450, 37541850, 37608300,
	37674800, 37741350, 37807950, 37874600, 37941300, 38008050, 38074850, 38141700, 38208600, 38275550, 38342550, 38409600, 38476700, 38543850, 38611050, 38678300, 38745600, 38812950, 38880350, 38947800, 39015300,
	39082850, 39150450, 39218100, 39285800, 39353550, 39421350, 39489200, 39557100, 39625050, 39693050, 39761100, 39829200, 39897350, 39965550, 40033800, 40102100, 40170450, 40238850, 40307300, 40375800, 40444350,
	40512950, 40581600, 40650300, 40719050, 40787850, 40856700, 40925600, 40994550, 41063550, 41132600, 41201700, 41270850, 41340050, 41409300, 41478600, 41547950, 41617350, 41686800, 41756300, 41825850, 41895450,
	41965100, 42034800, 42104550, 42174350, 42244200, 42314100, 42384050, 42454050, 42524100, 42594200, 42664350, 42734550, 42804800, 42875100, 42945450, 43015850, 43086300, 43156800, 43227350, 43297950, 43368600,
	43439300, 43510050, 43580850, 43651700, 43722600, 43793550, 43864550, 43935600, 44006700, 44077850, 44149050, 44220300, 44291600, 44362950, 44434350, 44505800, 44577300, 44648850, 44720450, 44792100, 44863800,
	44935550, 45007350, 45079200, 45151100, 45223050, 45295050, 45367100, 45439200, 45511350, 45583550, 45655800, 45728100, 45800450, 45872850, 45945300, 46017800, 46090350, 46162950, 46235600, 46308300, 46381050,
	46453850, 46526700, 46599600, 46672550, 46745550, 46818600, 46891700, 46964850, 47038050, 47111300, 47184600, 47257950, 47331350, 47404800, 47478300, 47551850, 47625450, 47699100, 47772800, 47846550, 47920350,
	47994200, 48068100, 48142050, 48216050, 48290100, 48364200, 48438350, 48512550, 48586800, 48661100, 48735450, 48809850, 48884300, 48958800, 49033350, 49107950, 49182600, 49257300, 49332050, 49406850, 49481700,
	49556600, 49631550, 49706550, 49781600, 49856700, 49931850, 50007050, 50082300, 50157600, 50232950, 50308350, 50383800, 50459300, 50534850, 50610450, 50686100, 50761800, 50837550, 50913350, 50989200, 51065100,
	51141050, 51217050, 51293100, 51369200, 51445350, 51521550, 51597800, 51674100, 51750450, 51826850, 51903300, 51979800, 52056350, 52132950, 52209600, 52286300, 52363050, 52439850, 52516700, 52593600, 52670550,
	52747550, 52824600, 52901700, 52978850, 53056050, 53133300, 53210600, 53287950, 53365350, 53442800, 53520300, 53597850, 53675450, 53753100, 53830800, 53908550, 53986350, 54064200, 54142100, 54220050, 54298050,
	54376100, 54454200, 54532350, 54610550, 54688800, 54767100, 54845450, 54923850, 55002300, 55080800, 55159350, 55237950, 55316600, 55395300, 55474050, 55552850, 55631700, 55710600, 55789550, 55868550, 55947600,
	56026700, 56105850, 56185050, 56264300, 56343600, 56422950, 56502350, 56581800, 56661300, 56740850, 56820450, 56900100, 56979800, 57059550, 57139350, 57219200, 57299100, 57379050, 57459050, 57539100, 57619200,
	57699350, 57779550, 57859800, 57940100, 58020450, 58100850, 58181300, 58261800, 58342350, 58422950, 58503600, 58584300, 58665050, 58745850, 58826700, 58907600, 58988550, 59069550, 59150600, 59231700, 59312850,
	59394050, 59475300, 59556600, 59637950, 59719350, 59800800, 59882300, 59963850, 60045450, 60127100, 60208800, 60290550, 60372350, 60454200, 60536100, 60618050, 60700050, 60782100, 60864200, 60946350, 61028550,
	61110800, 61193100, 61275450, 61357850, 61440300, 61522800, 61605350, 61687950, 61770600, 61853300, 61936050, 62018850, 62101700, 62184600, 62267550, 62350550, 62433600, 62516700, 62599850, 62683050, 62766300,
	62849600, 62932950, 63016350, 63099800, 63183300, 63266850, 63350450, 63434100, 63517800, 63601550, 63685350, 63769200, 63853100, 63937050, 64021050, 64105100, 64189200, 64273350, 64357550, 64441800, 64526100,
	64610450, 64694850, 64779300, 64863800, 64948350, 65032950, 65117600, 65202300, 65287050, 65371850, 65456700, 65541600, 65626550, 65711550, 65796600, 65881700, 65966850, 66052050, 66137300, 66222600, 66307950,
	66393350, 66478800, 66564300, 66649850, 66735450, 66821100, 66906800, 66992550, 67078350, 67164200, 67250100, 67336050, 67422050, 67508100, 67594200, 67680350, 67766550, 67852800, 67939100, 68025450, 68111850,
	68198300, 68284800, 68371350, 68457950, 68544600, 68631300, 68718050, 68804850, 68891700, 68978600, 69065550, 69152550, 69239600, 69326700, 69413850, 69501050, 69588300, 69675600, 69762950, 69850350, 69937800,
	70025300, 70112850, 70200450, 70288100, 70375800, 70463550, 70551350, 70639200, 70727100, 70815050, 70903050, 70991100, 71079200, 71167350, 71255550, 71343800, 71432100, 71520450, 71608850, 71697300, 71785800,
	71874350, 71962950, 72051600, 72140300, 72229050, 72317850, 72406700, 72495600, 72584550, 72673550, 72762600, 72851700, 72940850, 73030050, 73119300, 73208600, 73297950, 73387350, 73476800, 73566300, 73655850,
	73745450, 73835100, 73924800, 74014550, 74104350, 74194200, 74284100, 74374050, 74464050, 74554100, 74644200, 74734350, 74824550, 74914800, 75005100, 75095450, 75185850, 75276300, 75366800, 75457350, 75547950,
	75638600, 75729300, 75820050, 75910850, 76001700, 76092600, 76183550, 76274550, 76365600, 76456700, 76547850, 76639050, 76730300, 76821600, 76912950, 77004350, 77095800, 77187300, 77278850, 77370450, 77462100,
	77553800, 77645550, 77737350, 77829200, 77921100, 78013050, 78105050, 78197100, 78289200, 78381350, 78473550, 78565800, 78658100, 78750450, 78842850, 78935300, 79027800, 79120350, 79212950, 79305600, 79398300,
	79491050, 79583850, 79676700, 79769600, 79862550, 79955550, 80048600, 80141700, 80234850, 80328050, 80421300, 80514600, 80607950, 80701350, 80794800, 80888300, 80981850, 81075450, 81169100, 81262800, 81356550,
	81450350, 81544200, 81638100, 81732050, 81826050, 81920100, 82014200, 82108350, 82202550, 82296800, 82391100, 82485450, 82579850, 82674300, 82768800, 82863350, 82957950, 83052600, 83147300, 83242050, 83336850,
	83431700, 83526600, 83621550, 83716550, 83811600, 83906700, 84001850, 84097050, 84192300, 84287600, 84382950, 84478350, 84573800, 84669300, 84764850, 84860450, 84956100, 85051800, 85147550, 85243350, 85339200,
	85435100, 85531050, 85627050, 85723100, 85819200, 85915350, 86011550, 86107800, 86204100, 86300450, 86396850, 86493300, 86589800, 86686350, 86782950, 86879600, 86976300, 87073050, 87169850, 87266700, 87363600,
	87460550, 87557550, 87654600, 87751700, 87848850, 87946050, 88043300, 88140600, 88237950, 88335350, 88432800, 88530300, 88627850, 88725450, 88823100, 88920800, 89018550, 89116350, 89214200, 89312100, 89410050,
	89508050, 89606100, 89704200, 89802350, 89900550, 89998800, 90097100, 90195450, 90293850, 90392300, 90490800, 90589350, 90687950, 90786600, 90885300, 90984050, 91082850, 91181700, 91280600, 91379550, 91478550,
	91577600, 91676700, 91775850, 91875050, 91974300, 92073600, 92172950, 92272350, 92371800, 92471300, 92570850, 92670450, 92770100, 92869800, 92969550, 93069350, 93169200, 93269100, 93369050, 93469050, 93569100,
	93669200, 93769350, 93869550, 93969800, 94070100, 94170450, 94270850, 94371300, 94471800, 94572350, 94672950, 94773600, 94874300, 94975050, 95075850, 95176700, 95277600, 95378550, 95479550, 95580600, 95681700,
	95782850, 95884050, 95985300, 96086600, 96187950, 96289350, 96390800, 96492300, 96593850, 96695450, 96797100, 96898800, 97000550, 97102350, 97204200, 97306100, 97408050, 97510050, 97612100, 97714200, 97816350,
	97918550, 98020800, 98123100, 98225450, 98327850, 98430300, 98532800, 98635350, 98737950, 98840600, 98943300, 99046050, 99148850, 99251700, 99354600, 99457550, 99560550, 99663600, 99766700, 99869850, 99973050,
	100076300, 100179600, 100282950, 100386350, 100489800, 100593300, 100696850, 100800450, 100904100, 101007800, 101111550, 101215350, 101319200, 101423100, 101527050, 101631050, 101735100, 101839200, 101943350,
	102047550, 102151800, 102256100, 102360450, 102464850, 102569300, 102673800, 102778350, 102882950, 102987600, 103092300, 103197050, 103301850, 103406700, 103511600, 103616550, 103721550, 103826600, 103931700,
	104036850, 104142050, 104247300, 104352600, 104457950, 104563350, 104668800, 104774300, 104879850, 104985450, 105091100, 105196800, 105302550, 105408350, 105514200, 105620100, 105726050, 105832050, 105938100,
	106044200, 106150350, 106256550, 106362800, 106469100, 106575450, 106681850, 106788300, 106894800, 107001350, 107107950, 107214600, 107321300, 107428050, 107534850, 107641700, 107748600, 107855550, 107962550,
	108069600, 108176700, 108283850, 108391050, 108498300, 108605600, 108712950, 108820350, 108927800, 109035300, 109142850, 109250450, 109358100, 109465800, 109573550, 109681350, 109789200, 109897100, 110005050,
	110113050, 110221100, 110329200, 110437350, 110545550, 110653800, 110762100, 110870450, 110978850, 111087300, 111195800, 111304350, 111412950, 111521600, 111630300, 111739050, 111847850, 111956700, 112065600,
	112174550, 112283550, 112392600, 112501700, 112610850, 112720050, 112829300, 112938600, 113047950, 113157350, 113266800, 113376300, 113485850, 113595450, 113705100, 113814800, 113924550, 114034350, 114144200,
	114254100, 114364050, 114474050, 114584100, 114694200, 114804350, 114914550, 115024800, 115135100, 115245450, 115355850, 115466300, 115576800, 115687350, 115797950, 115908600, 116019300, 116130050, 116240850,
	116351700, 116462600, 116573550, 116684550, 116795600, 116906700, 117017850, 117129050, 117240300, 117351600, 117462950, 117574350, 117685800, 117797300, 117908850, 118020450, 118132100, 118243800, 118355550,
	118467350, 118579200, 118691100, 118803050, 118915050, 119027100, 119139200, 119251350, 119363550, 119475800, 119588100, 119700450, 119812850, 119925300, 120037800, 120150350, 120262950, 120375600, 120488300,
	120601050, 120713850, 120826700, 120939600, 121052550, 121165550, 121278600, 121391700, 121504850, 121618050, 121731300, 121844600, 121957950, 122071350, 122184800, 122298300, 122411850, 122525450, 122639100,
	122752800, 122866550, 122980350, 123094200, 123208100, 123322050, 123436050, 123550100, 123664200, 123778350, 123892550, 124006800, 124121100, 124235450, 124349850, 124464300, 124578800, 124693350, 124807950,
	124922600, 125037300, 125152050, 125266850, 125381700, 125496600, 125611550, 125726550, 125841600, 125956700, 126071850, 126187050, 126302300, 126417600, 126532950, 126648350, 126763800, 126879300, 126994850,
	127110450, 127226100, 127341800, 127457550, 127573350, 127689200, 127805100, 127921050, 128037050, 128153100, 128269200, 128385350, 128501550, 128617800, 128734100, 128850450, 128966850, 129083300, 129199800,
	129316350, 129432950, 129549600, 129666300, 129783050, 129899850, 130016700, 130133600, 130250550, 130367550, 130484600, 130601700, 130718850, 130836050, 130953300, 131070600, 131187950, 131305350, 131422800,
	131540300, 131657850, 131775450, 131893100, 132010800, 132128550, 132246350, 132364200, 132482100, 132600050, 132718050, 132836100, 132954200, 133072350, 133190550, 133308800, 133427100, 133545450, 133663850,
	133782300, 133900800, 134019350, 134137950, 134256600, 134375300, 134494050, 134612850, 134731700, 134850600, 134969550, 135088550, 135207600, 135326700, 135445850, 135565050, 135684300, 135803600, 135922950,
	136042350, 136161800, 136281300, 136400850, 136520450, 136640100, 136759800, 136879550, 136999350, 137119200, 137239100, 137359050, 137479050, 137599100, 137719200, 137839350, 137959550, 138079800, 138200100,
	138320450, 138440850, 138561300, 138681800, 138802350, 138922950, 139043600, 139164300, 139285050, 139405850, 139526700, 139647600, 139768550, 139889550, 140010600, 140131700, 140252850, 140374050, 140495300,
	140616600, 140737950, 140859350, 140980800, 141102300, 141223850, 141345450, 141467100, 141588800, 141710550, 141832350, 141954200, 142076100, 142198050, 142320050, 142442100, 142564200, 142686350, 142808550,
	142930800, 143053100, 143175450, 143297850, 143420300, 143542800, 143665350, 143787950, 143910600, 144033300, 144156050, 144278850, 144401700, 144524600, 144647550, 144770550, 144893600, 145016700, 145139850,
	145263050, 145386300, 145509600, 145632950, 145756350, 145879800, 146003300, 146126850, 146250450, 146374100, 146497800, 146621550, 146745350, 146869200, 146993100, 147117050, 147241050, 147365100, 147489200,
	147613350, 147737550, 147861800, 147986100, 148110450, 148234850, 148359300, 148483800, 148608350, 148732950, 148857600, 148982300, 149107050, 149231850, 149356700, 149481600, 149606550, 149731550, 149856600,
	149981700, 150106850, 150232050, 150357300, 150482600, 150607950, 150733350, 150858800, 150984300, 151109850, 151235450, 151361100, 151486800, 151612550, 151738350, 151864200, 151990100, 152116050, 152242050,
	152368100, 152494200, 152620350, 152746550, 152872800, 152999100, 153125450, 153251850, 153378300, 153504800, 153631350, 153757950, 153884600, 154011300, 154138050, 154264850, 154391700, 154518600, 154645550,
	154772550, 154899600, 155026700, 155153850, 155281050, 155408300, 155535600, 155662950, 155790350, 155917800, 156045300, 156172850, 156300450, 156428100, 156555800, 156683550, 156811350, 156939200, 157067100,
	157195050, 157323050, 157451100, 157579200, 157707350, 157835550, 157963800, 158092100, 158220450, 158348850, 158477300, 158605800, 158734350, 158862950, 158991600, 159120300, 159249050, 159377850, 159506700,
	159635600, 159764550, 159893550, 160022600, 160151700, 160280850, 160410050, 160539300, 160668600, 160797950, 160927350, 161056800, 161186300, 161315850, 161445450, 161575100, 161704800, 161834550, 161964350,
	162094200, 162224100, 162354050, 162484050, 162614100, 162744200, 162874350, 163004550, 163134800, 163265100, 163395450, 163525850, 163656300, 163786800, 163917350, 164047950, 164178600, 164309300, 164440050,
	164570850, 164701700, 164832600, 164963550, 165094550, 165225600, 165356700, 165487850, 165619050, 165750300, 165881600, 166012950, 166144350, 166275800, 166407300, 166538850, 166670450, 166802100, 166933800,
	167065550, 167197350, 167329200, 167461100, 167593050, 167725050, 167857100, 167989200, 168121350, 168253550, 168385800, 168518100, 168650450, 168782850, 168915300, 169047800, 169180350, 169312950, 169445600,
	169578300, 169711050, 169843850, 169976700, 170109600, 170242550, 170375550, 170508600, 170641700, 170774850, 170908050, 171041300, 171174600, 171307950, 171441350, 171574800, 171708300, 171841850, 171975450,
	172109100, 172242800, 172376550, 172510350, 172644200, 172778100, 172912050, 173046050, 173180100, 173314200, 173448350, 173582550, 173716800, 173851100, 173985450, 174119850, 174254300, 174388800, 174523350,
	174657950, 174792600, 174927300, 175062050, 175196850, 175331700, 175466600, 175601550, 175736550, 175871600, 176006700, 176141850, 176277050, 176412300, 176547600, 176682950, 176818350, 176953800, 177089300,
	177224850, 177360450, 177496100, 177631800, 177767550, 177903350, 178039200, 178175100, 178311050, 178447050, 178583100, 178719200, 178855350, 178991550, 179127800, 179264100, 179400450, 179536850, 179673300,
	179809800, 179946350, 180082950, 180219600, 180356300, 180493050, 180629850, 180766700, 180903600, 181040550, 181177550, 181314600, 181451700, 181588850, 181726050, 181863300, 182000600, 182137950, 182275350,
	182412800, 182550300, 182687850, 182825450, 182963100, 183100800, 183238550, 183376350, 183514200, 183652100, 183790050, 183928050, 184066100, 184204200, 184342350, 184480550, 184618800, 184757100, 184895450,
	185033850, 185172300, 185310800, 185449350, 185587950, 185726600, 185865300, 186004050, 186142850, 186281700, 186420600, 186559550, 186698550, 186837600, 186976700, 187115850, 187255050, 187394300, 187533600,
	187672950, 187812350, 187951800, 188091300, 188230850, 188370450, 188510100, 188649800, 188789550, 188929350, 189069200, 189209100, 189349050, 189489050, 189629100, 189769200, 189909350, 190049550, 190189800,
	190330100, 190470450, 190610850, 190751300, 190891800, 191032350, 191172950, 191313600, 191454300, 191595050, 191735850, 191876700, 192017600, 192158550, 192299550, 192440600, 192581700, 192722850, 192864050,
	193005300, 193146600, 193287950, 193429350, 193570800, 193712300, 193853850, 193995450, 194137100, 194278800, 194420550, 194562350, 194704200, 194846100, 194988050, 195130050, 195272100, 195414200, 195556350,
	195698550, 195840800, 195983100, 196125450, 196267850, 196410300, 196552800, 196695350, 196837950, 196980600, 197123300, 197266050, 197408850, 197551700, 197694600, 197837550, 197980550, 198123600, 198266700,
	198409850, 198553050, 198696300, 198839600, 198982950, 199126350, 199269800, 199413300, 199556850, 199700450, 199844100, 199987800, 200131550, 200275350, 200419200, 200563100, 200707050, 200851050, 200995100,
	201139200, 201283350, 201427550, 201571800, 201716100, 201860450, 202004850, 202149300, 202293800, 202438350, 202582950, 202727600, 202872300, 203017050, 203161850, 203306700, 203451600, 203596550, 203741550,
	203886600, 204031700, 204176850, 204322050, 204467300, 204612600, 204757950, 204903350, 205048800, 205194300, 205339850, 205485450, 205631100, 205776800, 205922550, 206068350, 206214200, 206360100, 206506050,
	206652050, 206798100, 206944200, 207090350, 207236550, 207382800, 207529100, 207675450, 207821850, 207968300, 208114800, 208261350, 208407950, 208554600, 208701300, 208848050, 208994850, 209141700, 209288600,
	209435550, 209582550, 209729600, 209876700, 210023850, 210171050, 210318300, 210465600, 210612950, 210760350, 210907800, 211055300, 211202850, 211350450, 211498100, 211645800, 211793550, 211941350, 212089200,
	212237100, 212385050, 212533050, 212681100, 212829200, 212977350, 213125550, 213273800, 213422100, 213570450, 213718850, 213867300, 214015800, 214164350, 214312950, 214461600, 214610300, 214759050, 214907850,
	215056700, 215205600, 215354550, 215503550, 215652600, 215801700, 215950850, 216100050, 216249300, 216398600, 216547950, 216697350, 216846800, 216996300, 217145850, 217295450, 217445100, 217594800, 217744550,
	217894350, 218044200, 218194100, 218344050, 218494050, 218644100, 218794200, 218944350, 219094550, 219244800, 219395100, 219545450, 219695850, 219846300, 219996800, 220147350, 220297950, 220448600, 220599300,
	220750050, 220900850, 221051700, 221202600, 221353550, 221504550, 221655600, 221806700, 221957850, 222109050, 222260300, 222411600, 222562950, 222714350, 222865800, 223017300, 223168850, 223320450, 223472100,
	223623800, 223775550, 223927350, 224079200, 224231100, 224383050, 224535050, 224687100, 224839200, 224991350, 225143550, 225295800, 225448100, 225600450, 225752850, 225905300, 226057800, 226210350, 226362950,
	226515600, 226668300, 226821050, 226973850, 227126700, 227279600, 227432550, 227585550, 227738600, 227891700, 228044850, 228198050, 228351300, 228504600, 228657950, 228811350, 228964800, 229118300, 229271850,
	229425450, 229579100, 229732800, 229886550, 230040350, 230194200, 230348100, 230502050, 230656050, 230810100, 230964200, 231118350, 231272550, 231426800, 231581100, 231735450, 231889850, 232044300, 232198800,
	232353350, 232507950, 232662600, 232817300, 232972050, 233126850, 233281700, 233436600, 233591550, 233746550, 233901600, 234056700, 234211850, 234367050, 234522300, 234677600, 234832950, 234988350, 235143800,
	235299300, 235454850, 235610450, 235766100, 235921800, 236077550, 236233350, 236389200, 236545100, 236701050, 236857050, 237013100, 237169200, 237325350, 237481550, 237637800, 237794100, 237950450, 238106850,
	238263300, 238419800, 238576350, 238732950, 238889600, 239046300, 239203050, 239359850, 239516700, 239673600, 239830550, 239987550, 240144600, 240301700, 240458850, 240616050, 240773300, 240930600, 241087950,
	241245350, 241402800, 241560300, 241717850, 241875450, 242033100, 242190800, 242348550, 242506350, 242664200, 242822100, 242980050, 243138050, 243296100, 243454200, 243612350, 243770550, 243928800, 244087100,
	244245450, 244403850, 244562300, 244720800, 244879350, 245037950, 245196600, 245355300, 245514050, 245672850, 245831700, 245990600, 246149550, 246308550, 246467600, 246626700, 246785850, 246945050, 247104300,
	247263600, 247422950, 247582350, 247741800, 247901300, 248060850, 248220450, 248380100, 248539800, 248699550, 248859350, 249019200, 249179100, 249339050, 249499050, 249659100, 249819200, 249979350, 250139550,
	250299800, 250460100, 250620450, 250780850, 250941300, 251101800, 251262350, 251422950, 251583600, 251744300, 251905050, 252065850, 252226700, 252387600, 252548550, 252709550, 252870600, 253031700, 253192850,
	253354050, 253515300, 253676600, 253837950, 253999350, 254160800, 254322300, 254483850, 254645450, 254807100, 254968800, 255130550, 255292350, 255454200, 255616100, 255778050, 255940050, 256102100, 256264200,
	256426350, 256588550, 256750800, 256913100, 257075450, 257237850, 257400300, 257562800, 257725350, 257887950, 258050600, 258213300, 258376050, 258538850, 258701700, 258864600, 259027550, 259190550, 259353600,
	259516700, 259679850, 259843050, 260006300, 260169600, 260332950, 260496350, 260659800, 260823300, 260986850, 261150450, 261314100, 261477800, 261641550, 261805350, 261969200, 262133100, 262297050, 262461050,
	262625100, 262789200, 262953350, 263117550, 263281800, 263446100, 263610450, 263774850, 263939300, 264103800, 264268350, 264432950, 264597600, 264762300, 264927050, 265091850, 265256700, 265421600, 265586550,
	265751550, 265916600, 266081700, 266246850, 266412050, 266577300, 266742600, 266907950, 267073350, 267238800, 267404300, 267569850, 267735450, 267901100, 268066800, 268232550, 268398350, 268564200, 268730100,
	268896050, 269062050, 269228100, 269394200, 269560350, 269726550, 269892800, 270059100, 270225450, 270391850, 270558300, 270724800, 270891350, 271057950, 271224600, 271391300, 271558050, 271724850, 271891700,
	272058600, 272225550, 272392550, 272559600, 272726700, 272893850, 273061050, 273228300, 273395600, 273562950, 273730350, 273897800, 274065300, 274232850, 274400450, 274568100, 274735800, 274903550, 275071350,
	275239200, 275407100, 275575050, 275743050, 275911100, 276079200, 276247350, 276415550, 276583800, 276752100, 276920450, 277088850, 277257300, 277425800, 277594350, 277762950, 277931600, 278100300, 278269050,
	278437850, 278606700, 278775600, 278944550, 279113550, 279282600, 279451700, 279620850, 279790050, 279959300, 280128600, 280297950, 280467350, 280636800, 280806300, 280975850, 281145450, 281315100, 281484800,
	281654550, 281824350, 281994200, 282164100, 282334050, 282504050, 282674100, 282844200, 283014350, 283184550, 283354800, 283525100, 283695450, 283865850, 284036300, 284206800, 284377350, 284547950, 284718600,
	284889300, 285060050, 285230850, 285401700, 285572600, 285743550, 285914550, 286085600, 286256700, 286427850, 286599050, 286770300, 286941600, 287112950, 287284350, 287455800, 287627300, 287798850, 287970450,
	288142100, 288313800, 288485550, 288657350, 288829200, 289001100, 289173050, 289345050, 289517100, 289689200, 289861350, 290033550, 290205800, 290378100, 290550450, 290722850, 290895300, 291067800, 291240350,
	291412950, 291585600, 291758300, 291931050, 292103850, 292276700, 292449600, 292622550, 292795550, 292968600, 293141700, 293314850, 293488050, 293661300, 293834600, 294007950, 294181350, 294354800, 294528300,
	294701850, 294875450, 295049100, 295222800, 295396550, 295570350, 295744200, 295918100, 296092050, 296266050, 296440100, 296614200, 296788350, 296962550, 297136800, 297311100, 297485450, 297659850, 297834300,
	298008800, 298183350, 298357950, 298532600, 298707300, 298882050, 299056850, 299231700, 299406600, 299581550, 299756550, 299931600, 300106700, 300281850, 300457050, 300632300, 300807600, 300982950, 301158350,
	301333800, 301509300, 301684850, 301860450, 302036100, 302211800, 302387550, 302563350, 302739200, 302915100, 303091050, 303267050, 303443100, 303619200, 303795350, 303971550, 304147800, 304324100, 304500450,
	304676850, 304853300, 305029800, 305206350, 305382950, 305559600, 305736300, 305913050, 306089850, 306266700, 306443600, 306620550, 306797550, 306974600, 307151700, 307328850, 307506050, 307683300, 307860600,
	308037950, 308215350, 308392800, 308570300, 308747850, 308925450, 309103100, 309280800, 309458550, 309636350, 309814200, 309992100, 310170050, 310348050, 310526100, 310704200, 310882350, 311060550, 311238800,
	311417100, 311595450, 311773850, 311952300, 312130800, 312309350, 312487950, 312666600, 312845300, 313024050, 313202850, 313381700, 313560600, 313739550, 313918550, 314097600, 314276700, 314455850, 314635050,
	314814300, 314993600, 315172950, 315352350, 315531800, 315711300, 315890850, 316070450, 316250100, 316429800, 316609550, 316789350, 316969200, 317149100, 317329050, 317509050, 317689100, 317869200, 318049350,
	318229550, 318409800, 318590100, 318770450, 318950850, 319131300, 319311800, 319492350, 319672950, 319853600, 320034300, 320215050, 320395850, 320576700, 320757600, 320938550, 321119550, 321300600, 321481700,
	321662850, 321844050, 322025300, 322206600, 322387950, 322569350, 322750800, 322932300, 323113850, 323295450, 323477100, 323658800, 323840550, 324022350, 324204200, 324386100, 324568050, 324750050, 324932100,
	325114200, 325296350, 325478550, 325660800, 325843100, 326025450, 326207850, 326390300, 326572800, 326755350, 326937950, 327120600, 327303300, 327486050, 327668850, 327851700, 328034600, 328217550, 328400550,
	328583600, 328766700, 328949850, 329133050, 329316300, 329499600, 329682950, 329866350, 330049800, 330233300, 330416850, 330600450, 330784100, 330967800, 331151550, 331335350, 331519200, 331703100, 331887050,
	332071050, 332255100, 332439200, 332623350, 332807550, 332991800, 333176100, 333360450, 333544850, 333729300, 333913800, 334098350, 334282950, 334467600, 334652300, 334837050, 335021850, 335206700, 335391600,
	335576550, 335761550, 335946600, 336131700, 336316850, 336502050, 336687300, 336872600, 337057950, 337243350, 337428800, 337614300, 337799850, 337985450, 338171100, 338356800, 338542550, 338728350, 338914200,
	339100100, 339286050, 339472050, 339658100, 339844200, 340030350, 340216550, 340402800, 340589100, 340775450, 340961850, 341148300, 341334800, 341521350, 341707950, 341894600, 342081300, 342268050, 342454850,
	342641700, 342828600, 343015550, 343202550, 343389600, 343576700, 343763850, 343951050, 344138300, 344325600, 344512950, 344700350, 344887800, 345075300, 345262850, 345450450, 345638100, 345825800, 346013550,
	346201350, 346389200, 346577100, 346765050, 346953050, 347141100, 347329200, 347517350, 347705550, 347893800, 348082100, 348270450, 348458850, 348647300, 348835800, 349024350, 349212950, 349401600, 349590300,
	349779050, 349967850, 350156700, 350345600, 350534550, 350723550, 350912600, 351101700, 351290850, 351480050, 351669300, 351858600, 352047950, 352237350, 352426800, 352616300, 352805850, 352995450, 353185100,
	353374800, 353564550, 353754350, 353944200, 354134100, 354324050, 354514050, 354704100, 354894200, 355084350, 355274550, 355464800, 355655100, 355845450, 356035850, 356226300, 356416800, 356607350, 356797950,
	356988600, 357179300, 357370050, 357560850, 357751700, 357942600, 358133550, 358324550, 358515600, 358706700, 358897850, 359089050, 359280300, 359471600, 359662950, 359854350, 360045800, 360237300, 360428850,
	360620450, 360812100, 361003800, 361195550, 361387350, 361579200, 361771100, 361963050, 362155050, 362347100, 362539200, 362731350, 362923550, 363115800, 363308100, 363500450, 363692850, 363885300, 364077800,
	364270350, 364462950, 364655600, 364848300, 365041050, 365233850, 365426700, 365619600, 365812550, 366005550, 366198600, 366391700, 366584850, 366778050, 366971300, 367164600, 367357950, 367551350, 367744800,
	367938300, 368131850, 368325450, 368519100, 368712800, 368906550, 369100350, 369294200, 369488100, 369682050, 369876050, 370070100, 370264200, 370458350, 370652550, 370846800, 371041100, 371235450, 371429850,
	371624300, 371818800, 372013350, 372207950, 372402600, 372597300, 372792050, 372986850, 373181700, 373376600, 373571550, 373766550, 373961600, 374156700, 374351850, 374547050, 374742300, 374937600, 375132950,
	375328350, 375523800, 375719300, 375914850, 376110450, 376306100, 376501800, 376697550, 376893350, 377089200, 377285100, 377481050, 377677050, 377873100, 378069200, 378265350, 378461550, 378657800, 378854100,
	379050450, 379246850, 379443300, 379639800, 379836350, 380032950, 380229600, 380426300, 380623050, 380819850, 381016700, 381213600, 381410550, 381607550, 381804600, 382001700, 382198850, 382396050, 382593300,
	382790600, 382987950, 383185350, 383382800, 383580300, 383777850, 383975450, 384173100, 384370800, 384568550, 384766350, 384964200, 385162100, 385360050, 385558050, 385756100, 385954200, 386152350, 386350550,
	386548800, 386747100, 386945450, 387143850, 387342300, 387540800, 387739350, 387937950, 388136600, 388335300, 388534050, 388732850, 388931700, 389130600, 389329550, 389528550, 389727600, 389926700, 390125850,
	390325050, 390524300, 390723600, 390922950, 391122350, 391321800, 391521300, 391720850, 391920450, 392120100, 392319800, 392519550, 392719350, 392919200, 393119100, 393319050, 393519050, 393719100, 393919200,
	394119350, 394319550, 394519800, 394720100, 394920450, 395120850, 395321300, 395521800, 395722350, 395922950, 396123600, 396324300, 396525050, 396725850, 396926700, 397127600, 397328550, 397529550, 397730600,
	397931700, 398132850, 398334050, 398535300, 398736600, 398937950, 399139350, 399340800, 399542300, 399743850, 399945450, 400147100, 400348800, 400550550, 400752350, 400954200, 401156100, 401358050, 401560050,
	401762100, 401964200, 402166350, 402368550, 402570800, 402773100, 402975450, 403177850, 403380300, 403582800, 403785350, 403987950, 404190600, 404393300, 404596050, 404798850, 405001700, 405204600, 405407550,
	405610550, 405813600, 406016700, 406219850, 406423050, 406626300, 406829600, 407032950, 407236350, 407439800, 407643300, 407846850, 408050450, 408254100, 408457800, 408661550, 408865350, 409069200, 409273100,
	409477050, 409681050, 409885100, 410089200, 410293350, 410497550, 410701800, 410906100, 411110450, 411314850, 411519300, 411723800, 411928350, 412132950, 412337600, 412542300, 412747050, 412951850, 413156700,
	413361600, 413566550, 413771550, 413976600, 414181700, 414386850, 414592050, 414797300, 415002600, 415207950, 415413350, 415618800, 415824300, 416029850, 416235450, 416441100, 416646800, 416852550, 417058350,
	417264200, 417470100, 417676050, 417882050, 418088100, 418294200, 418500350, 418706550, 418912800, 419119100, 419325450, 419531850, 419738300, 419944800, 420151350, 420357950, 420564600, 420771300, 420978050,
	421184850, 421391700, 421598600, 421805550, 422012550, 422219600, 422426700, 422633850, 422841050, 423048300, 423255600, 423462950, 423670350, 423877800, 424085300, 424292850, 424500450, 424708100, 424915800,
	425123550, 425331350, 425539200, 425747100, 425955050, 426163050, 426371100, 426579200, 426787350, 426995550, 427203800, 427412100, 427620450, 427828850, 428037300, 428245800, 428454350, 428662950, 428871600,
	429080300, 429289050, 429497850, 429706700, 429915600, 430124550, 430333550, 430542600, 430751700, 430960850, 431170050, 431379300, 431588600, 431797950, 432007350, 432216800, 432426300, 432635850, 432845450,
	433055100, 433264800, 433474550, 433684350, 433894200, 434104100, 434314050, 434524050, 434734100, 434944200, 435154350, 435364550, 435574800, 435785100, 435995450, 436205850, 436416300, 436626800, 436837350,
	437047950, 437258600, 437469300, 437680050, 437890850, 438101700, 438312600, 438523550, 438734550, 438945600, 439156700, 439367850, 439579050, 439790300, 440001600, 440212950, 440424350, 440635800, 440847300,
	441058850, 441270450, 441482100, 441693800, 441905550, 442117350, 442329200, 442541100, 442753050, 442965050, 443177100, 443389200, 443601350, 443813550, 444025800, 444238100, 444450450, 444662850, 444875300,
	445087800, 445300350, 445512950, 445725600, 445938300, 446151050, 446363850, 446576700, 446789600, 447002550, 447215550, 447428600, 447641700, 447854850, 448068050, 448281300, 448494600, 448707950, 448921350,
	449134800, 449348300, 449561850, 449775450, 449989100, 450202800, 450416550, 450630350, 450844200, 451058100, 451272050, 451486050, 451700100, 451914200, 452128350, 452342550, 452556800, 452771100, 452985450,
	453199850, 453414300, 453628800, 453843350, 454057950, 454272600, 454487300, 454702050, 454916850, 455131700, 455346600, 455561550, 455776550, 455991600, 456206700, 456421850, 456637050, 456852300, 457067600,
	457282950, 457498350, 457713800, 457929300, 458144850, 458360450, 458576100, 458791800, 459007550, 459223350, 459439200, 459655100, 459871050, 460087050, 460303100, 460519200, 460735350, 460951550, 461167800,
	461384100, 461600450, 461816850, 462033300, 462249800, 462466350, 462682950, 462899600, 463116300, 463333050, 463549850, 463766700, 463983600, 464200550, 464417550, 464634600, 464851700, 465068850, 465286050,
	465503300, 465720600, 465937950, 466155350, 466372800, 466590300, 466807850, 467025450, 467243100, 467460800, 467678550, 467896350, 468114200, 468332100, 468550050, 468768050, 468986100, 469204200, 469422350,
	469640550, 469858800, 470077100, 470295450, 470513850, 470732300, 470950800, 471169350, 471387950, 471606600, 471825300, 472044050, 472262850, 472481700, 472700600, 472919550, 473138550, 473357600, 473576700,
	473795850, 474015050, 474234300, 474453600, 474672950, 474892350, 475111800, 475331300, 475550850, 475770450, 475990100, 476209800, 476429550, 476649350, 476869200, 477089100, 477309050, 477529050, 477749100,
	477969200, 478189350, 478409550, 478629800, 478850100, 479070450, 479290850, 479511300, 479731800, 479952350, 480172950, 480393600, 480614300, 480835050, 481055850, 481276700, 481497600, 481718550, 481939550, 482160600, 482381700, 482602850, 482824050, 483045300, 483266600, 483487950, 483709350, 483930800, 484152300, 484373850, 484595450, 484817100, 485038800, 485260550, 485482350, 485704200, 485926100, 486148050, 486370050, 486592100, 486814200, 487036350, 487258550, 487480800, 487703100, 487925450, 488147850, 488370300, 488592800, 488815350, 489037950, 489260600, 489483300, 489706050, 489928850, 490151700, 490374600, 490597550, 490820550, 491043600, 491266700, 491489850, 491713050, 491936300, 492159600, 492382950, 492606350, 492829800, 493053300, 493276850, 493500450, 493724100, 493947800, 494171550, 494395350, 494619200, 494843100, 495067050, 495291050, 495515100, 495739200, 495963350, 496187550, 496411800, 496636100, 496860450, 497084850, 497309300, 497533800, 497758350, 497982950, 498207600, 498432300, 498657050, 498881850, 499106700, 499331600, 499556550, 499781550, 500006600, 500231700, 500456850, 500682050, 500907300, 501132600,


	};


}
