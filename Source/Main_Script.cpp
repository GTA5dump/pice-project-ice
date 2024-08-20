#pragma once
#include "stdafx.h"
#include "Discord/discord_rpc.h"
#include "Discord/discord_register.h"
#include <Windows.h>
#include <ShellAPI.h>
#include "Loader.h"



bool First_start = true;
void fisrt_start()



// WHY I AM PASTING THIS SOURCE I guess it's free money and funny to paste  from 2017/2018 sources 
// by v98
// so whoever updating this I hope you get braindamage from this :)






{
	using namespace Mod_Hub_Base;


	//Set YTD value names
	StreamTexture = "PI";// Streaming Texture = Texture File - .ytd so write same name but without .ytd
	StreamTextureFile = StreamTexture + ".ytd";// Texture File (StreamTexture.ytd) //Do NOT TUCH THIS LINE!
	TextureName = "header";// Texture name, The name of the picture inside texture file(StreamTextureFile)/StreamTexture
	Background = "Background";

	FooterName = "footer";
	submenubar1 = "submenubar";
	selected2 = "selected";


	//g_YtdLoader->loadYtd("C:\\Scooby\\scooby.ytd");


	fstream appDpath("C:\\PI");

	if (!fs::exists("C:\\PI"))//checking path for ytd file exist or not
		fs::create_directory("C:\\PI");
	fs::create_directory("C:\\PI");
	string DownloadP = "C:\\PI\\PI.ytd"/*This What the file going to be named when downloaded*/;
	// Added downloading ytd file bc no one know how to do anything manually nowdays
	URLDownloadToFileA(0, "https://cdn.discordapp.com/attachments/1115996815649673226/1138971974148821052/PI.ytd"/*Download Link*/, DownloadP.c_str(), 0, 0); 

	g_YtdLoader->init(); // Documents_Patha() = appdata + menu name
	g_YtdLoader->loadYtd("C:\\PI\\PI.ytd", "PI.ytd");


	
	//notifyBottom((char*)Mod_Menu_Name"", "~b~Scooby has Injected! Open scooby: F5");
	notifyMap((char*)Mod_Menu_Name"", "~b~Project ~y~Ice ~w~has loaded open with F5");

}



int index;

int custom_level = 0;

int crew_level = 0;



inline static std::int32_t playerWantedLevel{ 0 };


int32_t Spoiler, FBumper, RBumper, SSkirt, Exhaust, Grille, Chasis, Hood, Fender, RFender, Roof, Engine, Brakes, Transmission, Horns, Suspension, Armor, Turbo, TSmoke, Xenon, Wheels, Windows, Plateholder, Vanity, Trims, Ornaments, Dashboard, Dial, DoorSpeaker, Seats, SteeringWheel, Shifter, Plaques, Speakers, Trunk, Hydraulics, EngineBlock, Filter, Struts, Arch, Aerials, TrimTwo, Tank, Livery = 0;



//bool discord_rpc_enabled = true;
inline std::size_t DemoListPos = 0;
inline std::size_t DemoListPos1 = 0;
inline std::size_t DemoListPos2 = 0;
inline std::size_t DemoListPos3 = 0;
inline std::size_t DemoListPos4 = 0;
inline std::size_t DemoListPos5 = 0;
inline std::size_t DemoListPos6 = 0;
inline std::size_t DemoListPos7 = 0;
inline std::size_t DemoListPos8 = 0;
inline std::size_t DemoListPos9 = 0;
inline std::size_t DemoListPos10 = 0;
inline std::size_t DemoListPos11 = 0;
inline std::size_t DemoListPos12 = 0;
inline std::size_t DemoListPos13 = 0;
inline std::size_t DemoListPos14 = 0;
inline std::size_t DemoListPos15 = 0;
inline std::size_t DemoListPos16 = 0;
inline std::size_t DemoListPos17 = 0;
inline std::size_t DemoListPos18 = 0;
inline std::size_t DemoListPos19 = 0;
inline std::size_t DemoListPos20 = 0;
inline std::size_t DemoListPos21 = 0;
inline std::size_t DemoListPos22 = 0;
inline std::size_t DemoListPos23 = 0;
inline std::size_t DemoListPos24 = 0;
inline std::size_t DemoListPos25 = 0;
inline std::size_t DemoListPos26 = 0;
inline std::size_t DemoListPos27 = 0;
inline std::size_t DemoListPos28 = 0;
inline std::size_t DemoListPos29 = 0;
inline std::size_t DemoListPos30 = 0;
inline std::size_t DemoListPos31 = 0;
inline std::size_t DemoListPos40 = 0;
inline std::size_t DemoListPos41 = 0;
inline std::size_t DemoListPos42 = 0;
inline std::size_t DemoListPos43 = 0;
inline std::size_t DemoListPos44 = 0;
inline std::size_t DemoListPos45 = 0;
inline std::size_t DemoListPos46 = 0;
inline std::size_t DemoListPos47 = 0;
inline std::size_t DemoListPos48 = 0;
inline std::size_t DemoListPos49 = 0;
inline std::size_t DemoListPos50 = 0;
inline std::size_t DemoListPos51 = 0;
inline std::size_t DemoListPos52 = 0;
inline std::size_t DemoListPos53 = 0;

//void SetPlayerStats_Hash(unsigned int a_uiRecevPlayerIndex, unsigned int Stat_Index, float Value_Index)
//{
//
//	NETWORK_INCREMENT_STATS(Stat_Index, Value_Index, NETWORK_HANDLE_FROM_PLAYER(a_uiRecevPlayerIndex));
//
//}


//void change_player_model(Hash Ped)
//{
//	if (STREAMING::IS_MODEL_A_PED(Ped))
//	{
//		while (!STREAMING::HAS_MODEL_LOADED(Ped)) { STREAMING::REQUEST_MODEL(Ped); fibermain::pause(false); }
//		PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), Ped);
//		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
//		PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
//		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Ped);
//	}
//}

enum VehicleModTypes
{
	MOD_SPOILER = 0,
	MOD_FRONTBUMPER = 1,
	MOD_REARBUMPER = 2,
	MOD_SIDESKIRT = 3,
	MOD_EXHAUST = 4,
	MOD_CHASSIS = 5, // or roll cage
	MOD_GRILLE = 6,
	MOD_HOOD = 7,
	MOD_FENDER = 8,
	MOD_RIGHTFENDER = 9,
	MOD_ROOF = 10,
	MOD_ENGINE = 11,
	MOD_BRAKES = 12,
	MOD_TRANSMISSION = 13,
	MOD_HORNS = 14,
	MOD_SUSPENSION = 15,
	MOD_ARMOR = 16,
	MOD_UNK17 = 17, // ModToggleTurbo use 18
	MOD_TURBO = 18,
	MOD_UNK19 = 19, // ModToggleTireSmoke use 20
	MOD_TIRESMOKE = 20,
	MOD_UNK21 = 21, // ModToggleXenon use 22
	MOD_XENONLIGHTS = 22,
	MOD_FRONTWHEELS = 23,
	MOD_BACKWHEELS = 24, // Bikes only

	// Benny's
	MOD_PLATEHOLDER = 25,
	MOD_VANITY_PLATES = 26,
	MOD_TRIM = 27,
	MOD_ORNAMENTS = 28,
	MOD_DASHBOARD = 29,
	MOD_DIAL = 30,
	MOD_DOOR_SPEAKER = 31,
	MOD_SEATS = 32,
	MOD_STEERINGWHEEL = 33,
	MOD_SHIFTER_LEAVERS = 34,
	MOD_PLAQUES = 35,
	MOD_SPEAKERS = 36,
	MOD_TRUNK = 37,
	MOD_HYDRULICS = 38,
	MOD_ENGINE_BLOCK = 39,
	MOD_AIR_FILTER = 40,
	MOD_STRUTS = 41,
	MOD_ARCH_COVER = 42,
	MOD_AERIALS = 43,
	MOD_TRIM_2 = 44,
	MOD_TANK = 45,
	MOD_WINDOWS = 46,
	MOD_UNK47 = 47, // idk
	MOD_LIVERY = 48,
};



int shootmodelpos = 0;
float get_distance2(Vector3* pointA, Vector3* pointB)
{
	float a_x = pointA->x;
	float a_y = pointA->y;
	float a_z = pointA->z;

	float b_x = pointB->x;
	float b_y = pointB->y;
	float b_z = pointB->z;

	double x_ba = (double)(b_x - a_x);
	double y_ba = (double)(b_y - a_y);
	double z_ba = (double)(b_z - a_z);

	double y_2 = y_ba * y_ba;
	double x_2 = x_ba * x_ba;
	double sum_2 = y_2 + x_2;

	return (float)std::sqrt(sum_2 + z_ba);
}

void setmodel(char* model)
{
	Hash hash = GAMEPLAY::GET_HASH_KEY(model);
	if (STREAMING::IS_MODEL_IN_CDIMAGE(hash) && STREAMING::IS_MODEL_VALID(hash))
	{
		STREAMING::REQUEST_MODEL(hash);
		while (!STREAMING::HAS_MODEL_LOADED(hash)) WAIT(0);
		PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_PED_ID(), hash);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hash);
	}
}


int titleTextRed = 255;
int titleTextGreen = 255;
int titleTextBlue = 255;
int titleTextOpacity = 255;
std::string statusText;
DWORD statusTextDrawTicksMax;
bool statusTextGxtEntry;
void drawText(char* text, int font, float x, float y, float scalex, float scaley, int r, int b, int g, int a, bool center)
{
	UI::SET_TEXT_FONT(font);
	UI::SET_TEXT_SCALE(scalex, scaley);
	UI::SET_TEXT_COLOUR(r, g, b, a);
	UI::SET_TEXT_WRAP(0.0f, 1.0f);
	UI::SET_TEXT_CENTRE(center);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_OUTLINE();
	UI::_SET_TEXT_ENTRY("STRING");
	UI::_ADD_TEXT_COMPONENT_STRING(text);
	UI::_DRAW_TEXT(x, y);
}


void blame_player(std::int32_t player)
{
	for (std::int32_t i = 0; i < 32; i++)
	{
		if (i != PLAYER::PLAYER_ID())
		{
			Hooking::owned_explossion_bypass(true);
			Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 1);
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(player), coords.x, coords.y, coords.z, 29, 999999.f, 1, 1, .1f);
		}
		Hooking::owned_explossion_bypass(false);
	}
}


Object mapMods[250];
int mapModsIndex = 0;
void PlaceObjectByHash(Hash hash, float x, float y, float z, float pitch, float roll, float yaw, float heading, int id) {
	if (STREAMING::IS_MODEL_IN_CDIMAGE(hash)) {
		STREAMING::REQUEST_MODEL(hash);
		while (!STREAMING::HAS_MODEL_LOADED(hash)) WAIT(0);
		Object obj = OBJECT::CREATE_OBJECT_NO_OFFSET(hash, x, y, z, 1, 0, 0);
		//SET_ENTITY_HEADING(obj, heading);
		//SET_ENTITY_ROTATION(obj, pitch, roll, yaw, 2, 1);
		ENTITY::SET_ENTITY_LOD_DIST(obj, 696969);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(obj);
		ENTITY::FREEZE_ENTITY_POSITION(obj, 1);
		ENTITY::SET_ENTITY_ROTATION(obj, pitch, roll, yaw, 0, 1);
		mapMods[mapModsIndex] = obj;
		if (mapModsIndex <= 250) mapModsIndex++;
		WAIT(25);
	}
}


void LoadMapMod1()
{
	PlaceObjectByHash(2475986526, -80.9087, -830.357, 325.097, -14.4264, -8.53774, 152.209, -1, 0);
	PlaceObjectByHash(2475986526, -79.2316, -831.297, 325.108, -14.4054, 4.26887, 164.271, -1, 0);
	PlaceObjectByHash(2475986526, -76.7563, -831.549, 325.123, -14.4263, -0, 171.818, -1, 0);
	PlaceObjectByHash(2475986526, -74.2595, -831.691, 325.09, -14.2059, -1.06722, -176.517, -1, 0);
	PlaceObjectByHash(2475986526, -71.9478, -831.257, 325.113, -14.4264, 2.13443, -166.006, -1, 0);
	PlaceObjectByHash(2475986526, -69.5981, -830.542, 325.066, -14.5918, -4.26887, -155.474, -1, 0);
	PlaceObjectByHash(2475986526, -67.4174, -829.035, 325.097, -14.4263, -4.26887, -140.651, -1, 0);
	PlaceObjectByHash(2475986526, -65.7121, -827.409, 325.068, -14.3048, -1.70755, -130.667, -1, 0);
	PlaceObjectByHash(2475986526, -64.2717, -825.422, 325.112, -14.4263, -0, -121.256, -1, 0);
	PlaceObjectByHash(2475986526, -63.2876, -823.434, 325.114, -14.5345, -0, -111.446, -1, 0);
	PlaceObjectByHash(2475986526, -62.4924, -821.128, 325.082, -14.5467, 2.13443, -102.385, -1, 0);
	PlaceObjectByHash(2475986526, -62.233, -818.528, 325.065, -14.6184, -8.00413, -88.1861, -1, 0);
	PlaceObjectByHash(2475986526, -62.8694, -815.926, 325.118, -14.4265, -6.4033, -76.5979, -1, 0);
	PlaceObjectByHash(2475986526, -63.6142, -813.68, 325.112, -14.3655, 8.53774, -66.7885, -1, 0);
	PlaceObjectByHash(2475986526, -64.9883, -811.439, 325.107, -14.4263, 1.28066, -52.8494, -1, 0);
	PlaceObjectByHash(2475986526, -66.5913, -808.328, 325.238, -12.4517, -0, -40.3246, -1, 0);
	PlaceObjectByHash(2475986526, -68.2603, -807.899, 325.336, -13.8689, -0, -33.062, -1, 0);
	PlaceObjectByHash(2475986526, -71.1526, -807.598, 325.153, -12.0416, 4.26887, -28.0523, -1, 0);
	PlaceObjectByHash(2475986526, -73.2853, -806.628, 325.151, -11.7962, -0, -19.1717, -1, 0);
	PlaceObjectByHash(2475986526, -75.2243, -806.286, 325.164, -12.0419, -0, 1.55726, -1, 0);
	PlaceObjectByHash(2475986526, -77.5757, -806.312, 325.088, -14.1843, -0, 12.6263, -1, 0);
	PlaceObjectByHash(2475986526, -79.8704, -807.22, 325.143, -14.049, -4.26887, 21.4769, -1, 0);
	PlaceObjectByHash(2475986526, -82.0222, -807.83, 325.036, -14.1422, -4.26887, 32.7605, -1, 0);
	PlaceObjectByHash(2475986526, -83.8934, -809.424, 325.073, -14.5264, -8.53774, 46.5132, -1, 0);
	PlaceObjectByHash(2475986526, -85.2523, -810.983, 325.043, -14.859, -0, 53.5324, -1, 0);
	PlaceObjectByHash(2475986526, -86.5177, -813.202, 325.089, -14.5267, 4.26887, 64.6634, -1, 0);
	PlaceObjectByHash(2475986526, -87.6645, -815.707, 325.059, -14.8589, 4.26887, 73.157, -1, 0);
	PlaceObjectByHash(2475986526, -87.7973, -817.987, 325.119, -14.8468, -1.33402, 89.3982, -1, 0);
	PlaceObjectByHash(2475986526, -87.5801, -821.034, 325.059, -14.8593, -0, 95.4435, -1, 0);
	PlaceObjectByHash(2475986526, -87.2815, -822.239, 325.126, -15.6308, -4.26887, 100.311, -1, 0);
	PlaceObjectByHash(2475986526, -86.7602, -824.03, 325.044, -15.9224, -0, 116.957, -1, 0);
	PlaceObjectByHash(2475986526, -85.3743, -826.099, 325.136, -15.7025, 2.56132, 124.307, -1, 0);
	PlaceObjectByHash(2475986526, -83.4737, -828.611, 325.076, -15.0688, -0, 132.538, -1, 0);
	PlaceObjectByHash(2475986526, -87.9554, -832.877, 325.894, -14.1563, 4.26887, 132.995, -1, 0);
	PlaceObjectByHash(2475986526, -89.3865, -831.322, 325.887, -14.1562, -0, 126.154, -1, 0);
	PlaceObjectByHash(2475986526, -86.4247, -834.407, 325.915, -14.2701, 4.26887, 143.277, -1, 0);
	PlaceObjectByHash(2475986526, -85.1736, -833.789, 325.653, -14.4072, -4.26887, 145.777, -1, 0);
	PlaceObjectByHash(2475986526, -83.8118, -835.765, 326.063, -12.243, 4.26887, 151.527, -1, 0);
	PlaceObjectByHash(2475986526, -80.7015, -837.145, 326.059, -12.3172, 2.13443, 162.332, -1, 0);
	PlaceObjectByHash(2475986526, -77.6428, -837.649, 326.163, -10.8391, 3.20165, 171.297, -1, 0);
	PlaceObjectByHash(2475986526, -75.479, -837.909, 326.025, -12.3172, -1.06722, 174.574, -1, 0);
	PlaceObjectByHash(2475986526, -73.861, -837.826, 326.061, -12.3173, 5.33609, -176.632, -1, 0);
	PlaceObjectByHash(2475986526, -70.4799, -837.265, 326.09, -12.3173, -0, -166.182, -1, 0);
	PlaceObjectByHash(2475986526, -67.0415, -836.185, 326.018, -12.3171, -0, -156.039, -1, 0);
	PlaceObjectByHash(2475986526, -64.8504, -834.996, 325.951, -11.5263, -0, -145.834, -1, 0);
	PlaceObjectByHash(2475986526, -63.5702, -833.725, 326.1, -11.2947, -0, -140.961, -1, 0);
	PlaceObjectByHash(2475986526, -60.9992, -831.419, 326.075, -11.5262, -4.26887, -130.963, -1, 0);
	PlaceObjectByHash(2475986526, -58.9923, -828.729, 326.116, -11.5262, 4.26887, -121.973, -1, 0);
	PlaceObjectByHash(2475986526, -57.5045, -825.626, 326.114, -11.5263, -0, -110.959, -1, 0);
	PlaceObjectByHash(2475986526, -56.5533, -822.397, 326.08, -11.1311, -6.4033, -102, -1, 0);
	PlaceObjectByHash(2475986526, -56.0911, -820.05, 326.049, -11.0325, 2.13443, -100.794, -1, 0);
	PlaceObjectByHash(2475986526, -56.0681, -818.32, 326.087, -11.1312, -2.66804, -87.9469, -1, 0);
	PlaceObjectByHash(2475986526, -56.2989, -816.237, 326.048, -11.0324, 2.13443, -83.2139, -1, 0);
	PlaceObjectByHash(2475986526, -56.8952, -814.518, 326.142, -11.0324, -2.13443, -76.5476, -1, 0);
	PlaceObjectByHash(2475986526, -58.1209, -811.23, 326.116, -10.9697, -0, -66.7674, -1, 0);
	PlaceObjectByHash(2475986526, -59.0622, -809.17, 326.095, -11.0574, 4.26887, -62.782, -1, 0);
	PlaceObjectByHash(2475986526, -60.096, -807.639, 326.119, -11.5544, -0, -52.7596, -1, 0);
	PlaceObjectByHash(2475986526, -62.081, -805.317, 326.116, -11.1035, -0, -40.7682, -1, 0);
	PlaceObjectByHash(2475986526, -64.1466, -804.55, 326.283, -11.1035, -0, -30.477, -1, 0);
	PlaceObjectByHash(2475986526, -67.9795, -798.8, 326.717, -10.1561, -0, -29.3495, -1, 0);
	PlaceObjectByHash(2475986526, -67.5734, -802.52, 326.262, -10.471, -8.53774, -31.2185, -1, 0);
	PlaceObjectByHash(2475986526, -70.9341, -800.541, 326.198, -10.5317, -0, -20.0064, -1, 0);
	PlaceObjectByHash(2475986526, -75.3309, -801.285, 325.849, -10.2407, -0, 1.58401, -1, 0);
	PlaceObjectByHash(2475986526, -74.0222, -799.865, 326.177, -10.7327, -0, -5.98314, -1, 0);
	PlaceObjectByHash(2475986526, -76.5167, -797.998, 326.32, -12.4969, -2.66804, 1.58883, -1, 0);
	PlaceObjectByHash(2475986526, -79.2787, -800.531, 326.011, -12.9433, 4.26887, 13.0054, -1, 0);
	PlaceObjectByHash(2475986526, -81.6721, -801.017, 325.9, -12.4601, 2.13443, 17.3792, -1, 0);
	PlaceObjectByHash(2475986526, -83.6027, -801.744, 325.971, -12.9433, -0, 26.3052, -1, 0);
	PlaceObjectByHash(2475986526, -85.6586, -802.789, 325.95, -12.8791, 1.28066, 32.5856, -1, 0);
	PlaceObjectByHash(2475986526, -87.5086, -804.25, 325.978, -12.9432, 4.26887, 42.3279, -1, 0);
	PlaceObjectByHash(2475986526, -88.9923, -805.73, 325.89, -11.9333, -4.26887, 46.0613, -1, 0);
	PlaceObjectByHash(2475986526, -90.167, -807.318, 325.946, -13.0244, -0, 53.178, -1, 0);
	PlaceObjectByHash(2475986526, -93.5987, -807.353, 326.343, -11.5713, 4.26887, 60.8753, -1, 0);
	PlaceObjectByHash(2475986526, -93.5166, -813.963, 325.942, -13.4341, -4.26887, 73.0256, -1, 0);
	PlaceObjectByHash(2475986526, -92.121, -810.584, 325.996, -13.4339, -4.26887, 64.9353, -1, 0);
	PlaceObjectByHash(2475986526, -93.9931, -815.866, 325.924, -13.0519, -0, 79.5966, -1, 0);
	PlaceObjectByHash(2475986526, -93.8716, -817.904, 325.988, -13.4339, -0, 88.8361, -1, 0);
	PlaceObjectByHash(2475986526, -93.7912, -821.777, 325.946, -13.6946, -2.66804, 91.1427, -1, 0);
	PlaceObjectByHash(2475986526, -93.2951, -823.554, 325.966, -13.157, -0, 101.424, -1, 0);
	PlaceObjectByHash(2475986526, -92.5757, -827.033, 325.87, -13.5323, -0, 104.668, -1, 0);
	PlaceObjectByHash(2475986526, -91.53, -828.342, 325.842, -14.1563, 4.26887, 120.328, -1, 0);
	PlaceObjectByHash(2475986526, -90.5203, -829.611, 325.936, -14.1563, -0, 124.573, -1, 0);
	PlaceObjectByHash(2475986526, -95.5355, -833.068, 327.049, -9.63525, 1.70755, 124.512, -1, 0);
	PlaceObjectByHash(2475986526, -94.2445, -835.1, 326.976, -9.27617, -1.28066, 128.396, -1, 0);
	PlaceObjectByHash(2475986526, -92.513, -837.087, 327.008, -9.63523, -4.26887, 132.871, -1, 0);
	PlaceObjectByHash(2475986526, -90.07, -839.341, 327.025, -9.63574, 4.26887, 143.545, -1, 0);
	PlaceObjectByHash(2475986526, -86.7336, -841.135, 327.284, -9.63566, -0, 150.983, -1, 0);
	PlaceObjectByHash(2475986526, -84.8343, -842.167, 327.254, -9.36742, -4.26887, 152.377, -1, 0);
	PlaceObjectByHash(2475986526, -90.0883, -842.661, 327.589, -7.98782, -8.53774, 146.409, -1, 0);
	PlaceObjectByHash(2475986526, -82.595, -843.001, 327.277, -9.6352, -0, 161.654, -1, 0);
	PlaceObjectByHash(2475986526, -80.8027, -843.618, 327.263, -9.36755, -2.13443, 165.215, -1, 0);
	PlaceObjectByHash(2475986526, -78.5619, -843.703, 327.458, -9.63545, -2.13443, 171.015, -1, 0);
	PlaceObjectByHash(2475986526, -76.2479, -844.026, 327.261, -9.36765, 1.06722, 175.986, -1, 0);
	PlaceObjectByHash(2475986526, -73.5382, -843.999, 327.285, -9.6355, -0, -177.212, -1, 0);
	PlaceObjectByHash(2475986526, -71.2047, -843.988, 327.3, -9.36764, -1.06722, -172.013, -1, 0);
	PlaceObjectByHash(2475986526, -69.036, -843.266, 327.309, -9.63525, 4.26887, -166.686, -1, 0);
	PlaceObjectByHash(2475986526, -67.2981, -840.996, 326.756, -9.37509, -2.13443, -159.014, -1, 0);
	PlaceObjectByHash(2475986526, -66.7067, -842.714, 327.222, -9.37501, 2.13443, -159.27, -1, 0);
	PlaceObjectByHash(2475986526, -64.5693, -841.792, 327.24, -9.63515, 4.26887, -156.16, -1, 0);
	PlaceObjectByHash(2475986526, -61.8874, -840.436, 327.231, -9.37483, 4.26887, -146.534, -1, 0);
	PlaceObjectByHash(2475986526, -59.7118, -838.501, 327.384, -9.63533, -0, -141.372, -1, 0);
	PlaceObjectByHash(2475986526, -57.9491, -837.16, 327.309, -9.37471, 4.26887, -135.839, -1, 0);
	PlaceObjectByHash(2475986526, -56.3494, -835.471, 327.34, -9.63578, 4.26887, -131.675, -1, 0);
	PlaceObjectByHash(2475986526, -54.9387, -833.93, 327.334, -9.37482, -0, -127.887, -1, 0);
	PlaceObjectByHash(2475986526, -53.727, -832.032, 327.367, -9.63521, -4.26887, -122.142, -1, 0);
	PlaceObjectByHash(2475986526, -52.5928, -830.077, 327.332, -9.37496, -0, -116.843, -1, 0);
	PlaceObjectByHash(2475986526, -51.7552, -827.819, 327.385, -9.63569, 6.4033, -111.077, -1, 0);
	PlaceObjectByHash(2475986526, -51.0061, -825.839, 327.369, -9.37494, 4.26887, -107.054, -1, 0);
	PlaceObjectByHash(2475986526, -50.5468, -823.622, 327.378, -9.63572, 4.26887, -101.598, -1, 0);
	PlaceObjectByHash(2475986526, -50.0992, -820.896, 327.345, -9.47333, -1.06722, -95.7976, -1, 0);
	PlaceObjectByHash(2475986526, -49.9295, -818.102, 327.381, -9.63531, -8.00413, -88.2146, -1, 0);
	PlaceObjectByHash(2475986526, -50.1895, -815.816, 327.358, -9.4734, -0, -82.8649, -1, 0);
	PlaceObjectByHash(2475986526, -50.9164, -813.132, 327.442, -9.63524, 2.13443, -76.865, -1, 0);
	PlaceObjectByHash(2475986526, -51.1585, -811.568, 327.373, -9.58574, -0, -69.3402, -1, 0);
	PlaceObjectByHash(2475986526, -52.0622, -809.533, 327.354, -9.63541, 2.13443, -65.7624, -1, 0);
	PlaceObjectByHash(2475986526, -53.4048, -806.624, 327.376, -9.63526, 2.13443, -65.3971, -1, 0);
	PlaceObjectByHash(2475986526, -55.2978, -803.815, 327.389, -9.63524, 4.26887, -52.2107, -1, 0);
	PlaceObjectByHash(2475986526, -56.5179, -802.266, 327.366, -9.51013, 4.26887, -50.6537, -1, 0);
	PlaceObjectByHash(2475986526, -57.9995, -800.68, 327.42, -9.6353, 1.28066, -41.7027, -1, 0);
	PlaceObjectByHash(2475986526, -61.0278, -799.404, 327.549, -9.63516, 8.53774, -31.016, -1, 0);
	PlaceObjectByHash(2475986526, -64.37, -797.284, 327.603, -9.6351, -0, -31.6732, -1, 0);
	PlaceObjectByHash(2475986526, -66.3998, -795.965, 327.526, -9.42422, 8.53773, -29.018, -1, 0);
	PlaceObjectByHash(2475986526, -68.8079, -794.744, 327.535, -9.63558, -2.13443, -20.0341, -1, 0);
	PlaceObjectByHash(2475986526, -72.1225, -793.825, 327.497, -9.57894, -2.13443, -12.2336, -1, 0);
	PlaceObjectByHash(2475986526, -75.6415, -795.169, 327.2, -9.63555, -1.60083, 2.8097, -1, 0);
	PlaceObjectByHash(2475986526, -77.9613, -794.235, 327.223, -8.9769, -5.33608, 4.53814, -1, 0);
	PlaceObjectByHash(2475986526, -75.3695, -789.507, 328.306, -8.84722, -8.33763, -0.0879073, -1, 0);
	PlaceObjectByHash(2475986526, -80.6908, -794.505, 327.217, -9.63537, 4.26887, 13.0745, -1, 0);
	PlaceObjectByHash(2475986526, -83.5673, -795.148, 327.101, -9.92985, 2.13443, 17.5819, -1, 0);
	PlaceObjectByHash(2475986526, -86.3087, -796.203, 327.177, -9.63542, -4.26887, 25.9296, -1, 0);
	PlaceObjectByHash(2475986526, -88.9655, -797.634, 327.118, -9.92994, -4.26887, 33.0571, -1, 0);
	PlaceObjectByHash(2475986526, -91.6251, -799.702, 327.176, -9.63539, -0, 42.2513, -1, 0);
	PlaceObjectByHash(2475986526, -93.414, -801.299, 327.124, -9.92995, -0, 48.7085, -1, 0);
	PlaceObjectByHash(2475986526, -95.1453, -803.637, 327.147, -9.63537, -8.53774, 53.6544, -1, 0);
	PlaceObjectByHash(2475986526, -96.5885, -805.701, 327.144, -9.8947, -0, 60.5096, -1, 0);
	PlaceObjectByHash(2475986526, -97.6945, -807.971, 327.174, -9.63569, 4.26887, 64.7568, -1, 0);
	PlaceObjectByHash(2475986526, -98.7075, -809.885, 327.026, -8.13758, -0, 67.8881, -1, 0);
	PlaceObjectByHash(2475986526, -99.394, -812.176, 327.105, -9.63525, -4.26887, 73.0223, -1, 0);
	PlaceObjectByHash(2475986526, -100.025, -814.868, 327.097, -9.97277, 2.13443, 83.1537, -1, 0);
	PlaceObjectByHash(2475986526, -100.012, -817.789, 327.15, -9.63535, -1.33402, 88.8234, -1, 0);
	PlaceObjectByHash(2475986526, -100.069, -819.76, 327.099, -9.95297, -1.33402, 90.8729, -1, 0);
	PlaceObjectByHash(2475986526, -99.969, -821.91, 327.11, -9.63541, -2.66804, 91.5501, -1, 0);
	PlaceObjectByHash(2475986526, -99.3358, -824.801, 327.138, -9.63539, 2.13443, 101.678, -1, 0);
	PlaceObjectByHash(2475986526, -98.5443, -828.598, 327.033, -9.63553, -0, 104.64, -1, 0);
	PlaceObjectByHash(2475986526, -97.0896, -831.054, 326.937, -10.0741, 4.26887, 118.72, -1, 0);
	PlaceObjectByHash(2475986526, -102.435, -833.952, 328.506, -5.26399, -0, 118.502, -1, 0);
	PlaceObjectByHash(2475986526, -103.536, -831.932, 328.513, -5.42142, 4.26887, 111.099, -1, 0);
	PlaceObjectByHash(2475986526, -100.644, -836.571, 328.636, -5.26398, -0, 124.006, -1, 0);
	PlaceObjectByHash(2475986526, -99.0448, -838.912, 328.589, -5.26395, -2.13443, 128.175, -1, 0);
	PlaceObjectByHash(2475986526, -96.9401, -841.184, 328.589, -5.26384, -2.13443, 132.615, -1, 0);
	PlaceObjectByHash(2475986526, -95.4409, -842.718, 328.551, -5.01006, -2.13443, 136.57, -1, 0);
	PlaceObjectByHash(2475986526, -93.6584, -844.231, 328.606, -5.26388, -0, 143.429, -1, 0);
	PlaceObjectByHash(2475986526, -92.1044, -845.82, 328.655, -5.01307, -2.13443, 147.428, -1, 0);
	PlaceObjectByHash(2475986526, -89.6061, -846.328, 328.851, -5.26389, -0, 150.62, -1, 0);
	PlaceObjectByHash(2475986526, -87.5884, -847.552, 328.829, -5.6777, -0, 153.36, -1, 0);
	PlaceObjectByHash(2475986526, -84.5215, -848.802, 328.867, -5.26405, 5.33608, 161.164, -1, 0);
	PlaceObjectByHash(2475986526, -81.9779, -849.605, 328.821, -5.67769, 1.06722, 166.961, -1, 0);
	PlaceObjectByHash(2475986526, -79.5282, -849.717, 329.046, -5.26392, 1.06722, 170.517, -1, 0);
	PlaceObjectByHash(2475986526, -76.7555, -850.113, 328.885, -4.93224, 2.66804, 175.995, -1, 0);
	PlaceObjectByHash(2475986526, -73.2336, -850.06, 328.883, -5.26397, -0, -177.431, -1, 0);
	PlaceObjectByHash(2475986526, -70.4067, -849.836, 328.854, -4.82287, -5.33608, -172.2, -1, 0);
	PlaceObjectByHash(2475986526, -67.6252, -849.166, 328.911, -5.26394, -0, -166.741, -1, 0);
	PlaceObjectByHash(2475986526, -64.6525, -848.331, 328.792, -4.82267, -2.13443, -160.74, -1, 0);
	PlaceObjectByHash(2475986526, -62.1086, -847.355, 328.837, -5.26389, 2.13443, -156.346, -1, 0);
	PlaceObjectByHash(2475986526, -60.2755, -846.895, 328.808, -5.97307, -2.13443, -151.031, -1, 0);
	PlaceObjectByHash(2475986526, -58.5152, -845.543, 328.833, -5.26392, 1.06722, -147.129, -1, 0);
	PlaceObjectByHash(2475986526, -55.9339, -843.258, 328.987, -5.26394, 2.13443, -141.8, -1, 0);
	PlaceObjectByHash(2475986526, -53.6636, -841.564, 328.905, -5.18348, -0, -136.192, -1, 0);
	PlaceObjectByHash(2475986526, -51.8013, -839.526, 328.926, -5.26393, -2.13443, -131.788, -1, 0);
	PlaceObjectByHash(2475986526, -49.9112, -837.51, 328.916, -5.18352, -8.53774, -125.894, -1, 0);
	PlaceObjectByHash(2475986526, -48.5833, -835.261, 328.968, -5.26388, 2.13443, -122.598, -1, 0);
	PlaceObjectByHash(2475986526, -47.1369, -832.806, 328.936, -5.18352, -0, -117.146, -1, 0);
	PlaceObjectByHash(2475986526, -46.1092, -830.019, 328.985, -5.26389, -0, -111.097, -1, 0);
	PlaceObjectByHash(2475986526, -45.2549, -827.659, 328.957, -5.18353, -1.06722, -105.915, -1, 0);
	PlaceObjectByHash(2475986526, -44.5598, -824.856, 328.973, -5.26387, -0, -101.582, -1, 0);
	PlaceObjectByHash(2475986526, -44.0346, -821.522, 328.953, -5.26387, 5.33608, -95.978, -1, 0);
	PlaceObjectByHash(2475986526, -43.8673, -817.92, 328.98, -5.26387, -4.00206, -88.1556, -1, 0);
	PlaceObjectByHash(2475986526, -44.1983, -815.072, 328.956, -5.26387, -0, -82.8806, -1, 0);
	PlaceObjectByHash(2475986526, -45.0463, -811.788, 329.021, -5.26392, -0, -77.2513, -1, 0);
	PlaceObjectByHash(2475986526, -45.6154, -809.566, 328.95, -5.25705, -2.13443, -72.2094, -1, 0);
	PlaceObjectByHash(2475986526, -46.5685, -807.149, 328.929, -5.26395, -2.13443, -66.9958, -1, 0);
	PlaceObjectByHash(2475986526, -47.9752, -804.122, 328.959, -5.26398, -0, -65.1505, -1, 0);
	PlaceObjectByHash(2475986526, -49.0785, -802.078, 328.914, -5.31539, 4.26887, -57.7224, -1, 0);
	PlaceObjectByHash(2475986526, -50.5092, -800.141, 328.99, -5.26406, -0, -52.4683, -1, 0);
	PlaceObjectByHash(2475986526, -52.041, -798.134, 329.001, -5.31536, -2.13443, -49.2493, -1, 0);
	PlaceObjectByHash(2475986526, -53.8808, -796.134, 329.041, -5.26389, -0, -42.3308, -1, 0);
	PlaceObjectByHash(2475986526, -55.4375, -794.682, 329.045, -5.32055, 2.13443, -37.3601, -1, 0);
	PlaceObjectByHash(2475986526, -57.7537, -794.2, 329.16, -5.26393, 2.13443, -32.2267, -1, 0);
	PlaceObjectByHash(2475986526, -61.0299, -792.042, 329.172, -5.26389, -2.13443, -32.1174, -1, 0);
	PlaceObjectByHash(2475986526, -63.5163, -790.736, 329.085, -5.04535, -4.26887, -29.2933, -1, 0);
	PlaceObjectByHash(2475986526, -64.7324, -789.882, 329.081, -4.987, -2.13443, -27.7917, -1, 0);
	PlaceObjectByHash(2475986526, -66.7775, -788.94, 329.155, -5.04558, 1.06722, -19.5666, -1, 0);
	PlaceObjectByHash(2475986526, -68.6555, -788.272, 329.103, -5.30654, 3.20165, -16.9146, -1, 0);
	PlaceObjectByHash(2475986526, -70.8259, -787.837, 329.128, -5.04546, 1.06722, -12.2941, -1, 0);
	PlaceObjectByHash(2475986526, -74.5572, -787.022, 329.08, -4.61724, 1.06722, -10.7316, -1, 0);
	PlaceObjectByHash(2475986526, -75.8754, -788.646, 328.671, -6.78921, -0, 2.98721, -1, 0);
	PlaceObjectByHash(2475986526, -78.4, -788.132, 328.83, -5.91899, 2.66804, 3.75875, -1, 0);
	PlaceObjectByHash(2475986526, -80.5351, -788.179, 328.782, -5.80051, -0, 7.26539, -1, 0);
	PlaceObjectByHash(2475986526, -82.1189, -788.558, 328.793, -5.9192, 1.06722, 12.7168, -1, 0);
	PlaceObjectByHash(2475986526, -85.4054, -789.317, 328.666, -5.79433, -0, 17.1877, -1, 0);
	PlaceObjectByHash(2475986526, -87.4651, -789.98, 328.647, -5.63204, -0, 20.2315, -1, 0);
	PlaceObjectByHash(2475986526, -88.9795, -790.697, 328.76, -5.79416, -0, 25.9501, -1, 0);
	PlaceObjectByHash(2475986526, -90.9922, -791.487, 328.684, -6.26149, -0, 27.0819, -1, 0);
	PlaceObjectByHash(2475986526, -92.3298, -792.474, 328.677, -5.79412, -0, 33.3113, -1, 0);
	PlaceObjectByHash(2475986526, -94.2322, -793.73, 328.669, -5.58479, -2.13443, 37.4974, -1, 0);
	PlaceObjectByHash(2475986526, -95.7282, -795.2, 328.764, -5.79431, -0, 41.8672, -1, 0);
	PlaceObjectByHash(2475986526, -97.9782, -797.316, 328.695, -5.58488, -0, 48.9171, -1, 0);
	PlaceObjectByHash(2475986526, -100.042, -800.063, 328.731, -5.79425, 2.13443, 53.7039, -1, 0);
	PlaceObjectByHash(2475986526, -101.884, -802.718, 328.706, -5.5848, 2.13443, 60.3613, -1, 0);
	PlaceObjectByHash(2475986526, -103.09, -805.421, 328.718, -5.79425, -0, 64.506, -1, 0);
	PlaceObjectByHash(2475986526, -104.284, -807.711, 328.691, -5.58488, -2.13443, 65.966, -1, 0);
	PlaceObjectByHash(2475986526, -105.262, -810.369, 328.729, -5.26384, 1.06722, 73.2414, -1, 0);
	PlaceObjectByHash(2475986526, -105.769, -812.146, 328.645, -5.25205, -1.06722, 75.8091, -1, 0);
	PlaceObjectByHash(2475986526, -106.155, -814.128, 328.687, -5.26388, -1.06722, 82.8157, -1, 0);
	PlaceObjectByHash(2475986526, -106.062, -817.685, 328.758, -5.26388, 2.66804, 88.7458, -1, 0);
	PlaceObjectByHash(2475986526, -106.154, -819.723, 328.716, -5.25204, -0, 90.1628, -1, 0);
	PlaceObjectByHash(2475986526, -106.082, -822.072, 328.729, -5.26387, -1.33402, 91.2972, -1, 0);
	PlaceObjectByHash(2475986526, -105.911, -823.815, 328.7, -5.52135, 5.33608, 99.4393, -1, 0);
	PlaceObjectByHash(2475986526, -105.28, -826.029, 328.734, -5.26391, 1.06722, 101.615, -1, 0);
	PlaceObjectByHash(2475986526, -105.06, -827.904, 328.644, -5.29978, 1.06722, 102.515, -1, 0);
	PlaceObjectByHash(2475986526, -104.327, -830.112, 328.614, -5.26391, -2.13443, 104.719, -1, 0);
	PlaceObjectByHash(3291218330, -108.551, -853.416, 327.387, 2.94456, 89.1111, -166.155, -1, 0);
	PlaceObjectByHash(3291218330, -80.2509, -866.418, 327.301, 3.7405, 89.3, 146.641, -1, 0);
	PlaceObjectByHash(3291218330, -55.8513, -863.921, 327.333, 6.87468, 89.6184, 149.776, -1, 0);
	PlaceObjectByHash(3291218330, -37.3907, -848.122, 327.717, 2.33633, 88.8797, -16.2595, -1, 0);
	PlaceObjectByHash(3291218330, -26.1908, -818.332, 328.76, 0.490556, 84.6598, -18.107, -1, 0);
	PlaceObjectByHash(3291218330, -37.891, -789.138, 328.134, 1.11673, 87.6571, 42.7186, -1, 0);
	PlaceObjectByHash(3291218330, -63.492, -772.044, 327.866, 3.09962, 89.1556, 44.702, -1, 0);
	PlaceObjectByHash(3291218330, -93.4916, -774.848, 327.398, 2.73771, 89.0443, 122.539, -1, 0);
	PlaceObjectByHash(3291218330, -115.991, -795.259, 327.27, 3.28432, 89.2033, 123.086, -1, 0);
	PlaceObjectByHash(3291218330, -122.551, -825.074, 327.213, 173.37, 89.6048, 4.27077, -1, 0);
	PlaceObjectByHash(118627012, -74.8438, -819.617, 323.685, 0, 0, -3.37511, -1, 0);
	PlaceObjectByHash(2475986526, -67.6253, -820.244, 323.793, -14.4263, -8.53774, -100.02, -1, 0);
}
void LoadMapMod2()
{
	PlaceObjectByHash(1600026313, -78.4864, -807.943, 323.202, 109.364, -89.9209, 0, -1, 1);
	PlaceObjectByHash(1600026313, -79.2766, -805.701, 323.204, 109.364, -89.9209, 0, -1, 1);
	PlaceObjectByHash(1600026313, -79.8373, -803.709, 323.205, 109.364, -89.9209, 0, -1, 1);
	PlaceObjectByHash(1600026313, -80.4295, -801.947, 323.207, 109.364, -89.9209, 0, -1, 1);
	PlaceObjectByHash(4143853297, -97.4731, -778.557, 308.877, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(1087520462, -84.2429, -793.182, 321.08, -63.5625, -0, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -83.5429, -795.106, 322.073, -63.5625, -0, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -84.9429, -791.108, 319.956, -62.6673, 8.53774e-007, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -85.8122, -788.585, 318.638, -63.5625, -0, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -89.1589, -779.487, 313.336, -59.5389, 0.0405551, -160.567, -1, 1);
	PlaceObjectByHash(1087520462, -90.7065, -774.863, 310.09, -57.4959, 0.322988, -160.758, -1, 1);
	PlaceObjectByHash(1087520462, -91.4887, -772.564, 308.403, -55.1692, 0.383369, -161.049, -1, 1);
	PlaceObjectByHash(1087520462, -91.7565, -771.74, 307.844, -56.4466, 0.0442451, -160.565, -1, 1);
	PlaceObjectByHash(1087520462, -93.6941, -766.245, 302.736, -45.9996, 0.0556114, -160.556, -1, 1);
	PlaceObjectByHash(1087520462, -94.2969, -764.648, 301.067, -44.7623, -1.70755e-006, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -94.2969, -764.648, 301.067, -44.7623, -1.70755e-006, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -94.886, -762.996, 298.741, -36.7051, -0, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -95.4855, -761.334, 296.406, -36.7051, -0, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -95.4855, -761.334, 296.406, -36.7051, -0, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -96.1606, -759.499, 294.259, -42.0766, -0, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -96.0707, -759.689, 293.709, -36.7051, -0, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -96.0707, -759.689, 293.709, -36.7051, -0, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -96.0707, -759.689, 293.46, -36.7051, -0, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -96.8807, -757.391, 292.506, -51.0291, -8.53774e-007, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -96.8807, -757.391, 292.506, -51.0291, -8.53774e-007, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -97.3203, -756.159, 291.688, -57.2958, -0, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -97.9597, -754.358, 290.78, -62.6673, 8.53774e-007, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -97.9597, -754.358, 290.78, -62.6673, 8.53774e-007, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -98.7192, -752.356, 290.042, -69.9278, 3.20165e-005, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -99.0244, -751.684, 290.499, -90, -8.46346e-007, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -99.3223, -750.534, 290.479, -90, -8.46346e-007, -160.249, -1, 1);
	PlaceObjectByHash(1087520462, -100.348, -747.881, 290.452, -89.5256, -1.33402e-008, -159.354, -1, 1);
	PlaceObjectByHash(1087520462, -100.26, -748.154, 290.462, -76.096, 4.26887e-007, 19.6954, -1, 1);
	PlaceObjectByHash(1087520462, -100.687, -747.053, 290.731, -62.6673, -8.53774e-007, 20.5907, -1, 1);
	PlaceObjectByHash(1087520462, -101.346, -745.387, 291.611, -58.191, 1.70755e-006, 19.6954, -1, 1);
	PlaceObjectByHash(1087520462, -102.234, -743.119, 293.091, -52.2249, 0.00051141, 21.3426, -1, 1);
	PlaceObjectByHash(2475986526, -102.154, -739.285, 294.83, 9.80014, 0.295618, 18.7802, -1, 1);
	PlaceObjectByHash(2475986526, -105.054, -740.282, 294.827, 9.80014, 0.295618, 18.7802, -1, 1);
	PlaceObjectByHash(1087520462, -103.071, -741.047, 294.832, -48.0666, 0.000519094, 21.3419, -1, 1);
	PlaceObjectByHash(1087520462, -103.75, -739.405, 296.413, -45.1472, 0.000547269, 21.3416, -1, 1);
	PlaceObjectByHash(4143853297, -90.3515, -798.112, 319.893, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -93.2293, -790.348, 317.189, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -95.3479, -784.483, 313.696, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -100.01, -771.31, 304.367, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -101.829, -766.277, 299.666, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -103.318, -762.175, 293.966, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -104.948, -757.681, 288.866, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -108.146, -748.798, 288.866, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -108.146, -748.798, 295.608, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -108.225, -748.694, 302.608, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(3167053133, -103.451, -740.541, 307.317, -0.900199, -1.19985, 20.9076, -1, 1);
	PlaceObjectByHash(2375650849, -102.454, -742.6, 309.309, 0, 0, 20.9393, -1, 1);
	PlaceObjectByHash(4143853297, -101.483, -746.044, 305.602, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -94.7458, -743.402, 295.608, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -94.7566, -743.406, 288.866, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -94.7426, -743.595, 302.651, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(1157292806, -99.7732, -750.516, 309.575, 0, 0, 24.1761, -1, 1);
	PlaceObjectByHash(4143853297, -89.9785, -756.476, 293.966, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -91.5378, -752.285, 288.866, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -87.9094, -762.07, 299.666, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -86.2094, -766.939, 304.367, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -84.0215, -772.971, 309.575, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -81.6733, -779.348, 313.696, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -79.5187, -785.083, 317.189, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(4143853297, -76.5616, -793.191, 319.493, 0, -0, -159.831, -1, 1);
	PlaceObjectByHash(1998517203, -81.0993, -790.139, 326.57, 0, 0, -82.6177, -1, 1);
	PlaceObjectByHash(1998517203, -88.8988, -792.911, 326.95, 0, 0, -82.6177, -1, 1);
	PlaceObjectByHash(803874239, -88.3376, -794.173, 327.042, 0, 0, 31.5501, -1, 1);
	PlaceObjectByHash(803874239, -90.0376, -795.174, 327.262, 0, 0, 31.5501, -1, 1);
	PlaceObjectByHash(803874239, -91.6375, -796.175, 327.482, 0, 0, 31.5501, -1, 1);
	PlaceObjectByHash(803874239, -79.0283, -791.31, 326.763, 0, -0, 100.953, -1, 1);
	PlaceObjectByHash(803874239, -76.8377, -790.87, 326.823, 0, -0, 100.953, -1, 1);
	PlaceObjectByHash(803874239, -81.0088, -791.22, 326.713, 0, -0, 100.953, -1, 1);
}
void LoadMapMod3()
{
	PlaceObjectByHash(1952396163, -1497.76, -1113.84, -3.08, -90, 6.14715e-007, 165.792, -1, 2);
	PlaceObjectByHash(2475986526, -1461.92, -1216.88, 2.5836, -2.3048, -0, -154.878, -1, 2);
	PlaceObjectByHash(3291218330, -1465.62, -1217.64, 18, 166.516, -5.12264e-006, 24.1717, -1, 2);
	PlaceObjectByHash(3291218330, -1458.89, -1214.4, 18, -38.4956, 8.53774e-007, -153.982, -1, 2);
	PlaceObjectByHash(2475986526, -1460.32, -1219.97, 4.3801, 12.6953, -0, -154.878, -1, 2);
	PlaceObjectByHash(2475986526, -1457, -1226.67, 11.8772, 31.7229, -0, -154.382, -1, 2);
	PlaceObjectByHash(2475986526, -1458.4, -1223.77, 7.9937, 23.6001, -0.0916355, -154.918, -1, 2);
	PlaceObjectByHash(2475986526, -1456.4, -1228.27, 14.9608, 48.674, -0, -153.982, -1, 2);
	PlaceObjectByHash(2475986526, -1456, -1229.07, 19.7441, 68.6628, -0, -153.982, -1, 2);
	PlaceObjectByHash(2475986526, -1456.2, -1228.47, 24.8276, 82.6252, 3.80938, -152.828, -1, 2);
	PlaceObjectByHash(2475986526, -1456.9, -1226.47, 28.9111, 108.498, -8.51368, -157.244, -1, 2);
	PlaceObjectByHash(2475986526, -1458.59, -1223.37, 31.5945, 130.616, -4.72983, -155.087, -1, 2);
	PlaceObjectByHash(2475986526, -1460.59, -1218.38, 33.5779, 143.744, -3.95611, -152.581, -1, 2);
	PlaceObjectByHash(2475986526, -1462.79, -1214.28, 34.161, 163.63, -2.68302, -155.763, -1, 2);
	PlaceObjectByHash(2475986526, -1465.3, -1209.78, 32.5228, -172.187, 4.69576e-006, -152.192, -1, 2);
	PlaceObjectByHash(2475986526, -1465.3, -1209.78, 32.5228, -172.187, 4.69576e-006, -152.192, -1, 2);
	PlaceObjectByHash(2475986526, -1466.9, -1205.68, 29.0062, -155.178, 9.47689e-005, -153.087, -1, 2);
	PlaceObjectByHash(2475986526, -1468.3, -1202.98, 24.1897, -131.11, 6.74481e-005, -153.088, -1, 2);
	PlaceObjectByHash(2475986526, -1468.59, -1202.68, 19.3732, -107.429, 3.07358e-005, -153.087, -1, 2);
	PlaceObjectByHash(2475986526, -1467.99, -1203.88, 13.5732, -89.6528, -0.153235, -155.853, -1, 2);
	PlaceObjectByHash(2475986526, -1467.11, -1205.68, 10.7072, -63.5491, 8.53774e-007, -156.504, -1, 2);
	PlaceObjectByHash(4109455646, -1465.05, -1210.03, 7.9503, 9.53319, 1.38057, 24.2606, -1, 2);
	PlaceObjectByHash(2975320548, -1460.95, -1218.79, 7.66, -29.9323, -0.173323, 24.7221, -1, 2);
	PlaceObjectByHash(2975320548, -1463.05, -1214.19, 6.7879, -6.50192, 1.391, 24.2651, -1, 2);
}
void LoadMapMod4()
{
	PlaceObjectByHash(1952396163, -1497.76, -1113.84, -3.08, -90, -0, 165.792, 90, 3);
	PlaceObjectByHash(2475986526, -1461.92, -1216.88, 2.5836, -2.3048, 0, -154.878, 205.14, 3);
	PlaceObjectByHash(3291218330, -1458.89, -1214.4, 18, -38.4956, 0, -153.982, 211.95, 3);
	PlaceObjectByHash(2475986526, -1460.32, -1219.97, 4.3801, 12.6953, 0, -154.878, 205.672, 3);
	PlaceObjectByHash(2975320548, -1463.05, -1214.19, 6.7879, -6.5, -1.391, 24.2651, 24.4244, 3);
	PlaceObjectByHash(3291218330, -1465.62, -1217.64, 18, 166.516, 180, 24.1717, 155.224, 3);
	PlaceObjectByHash(4109455646, -1465.05, -1210.03, 7.9503, 9.5304, -1.3806, 24.2606, 24.5148, 3);
	PlaceObjectByHash(2975320548, -1460.95, -1218.79, 7.66, -29.9322, 0.1733, 24.7221, 27.9617, 3);
	PlaceObjectByHash(2475986526, -1458.4, -1223.77, 7.9937, 23.6001, 0.0916, -154.918, 207.065, 3);
	PlaceObjectByHash(2475986526, -1467.11, -1205.68, 10.7072, -63.5491, 0, -156.505, 224.303, 3);
	PlaceObjectByHash(2475986526, -1457, -1226.67, 11.8772, 31.7229, 0, -154.382, 209.411, 3);
	PlaceObjectByHash(2475986526, -1456.4, -1228.27, 14.9608, 48.674, 0, -153.982, 216.471, 3);
	PlaceObjectByHash(2475986526, -1456, -1229.07, 19.7441, 68.6628, 0, -153.982, 233.298, 3);
	PlaceObjectByHash(2475986526, -1456.2, -1228.47, 24.8276, 81.7043, -3.8094, -152.828, 252.429, 3);
	PlaceObjectByHash(2475986526, -1456.9, -1226.47, 28.9111, 110.301, 171.486, -157.244, 312.201, 3);
	PlaceObjectByHash(2475986526, -1458.59, -1223.37, 31.5945, 130.843, 175.27, -155.087, 325.759, 3);
	PlaceObjectByHash(2475986526, -1460.59, -1218.38, 33.5779, 143.844, 176.044, -152.581, 327.979, 3);
	PlaceObjectByHash(2475986526, -1462.79, -1214.28, 34.161, 163.648, 177.317, -155.763, 335.024, 3);
	PlaceObjectByHash(2475986526, -1465.3, -1209.78, 32.5228, -172.187, -180, -152.192, 331.971, 3);
	PlaceObjectByHash(2475986526, -1466.9, -1205.68, 29.0062, -155.178, -180, -153.087, 330.783, 3);
	PlaceObjectByHash(2475986526, -1468.3, -1202.98, 24.1897, -131.11, -180, -153.088, 322.332, 3);
	PlaceObjectByHash(2475986526, -1468.59, -1202.68, 19.3732, -107.429, -180, -153.087, 300.544, 3);
	PlaceObjectByHash(2475986526, -1467.99, -1203.88, 13.5732, -89.6205, 0.1532, -155.853, 269.072, 3);
	PlaceObjectByHash(3966705493, 509.842, 5589.24, 791.066, 0.141, 0, 65.3998, 65.3999, 3);
	PlaceObjectByHash(3966705493, 520.5, 5584.38, 790.503, 5.441, 0, 65.3998, 65.4976, 3);
	PlaceObjectByHash(3966705493, 531.057, 5579.54, 788.691, 12.441, 0, 65.3998, 65.9111, 3);
	PlaceObjectByHash(3966705493, 568.672, 5562.32, 767.428, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 576.972, 5558.53, 759.566, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 560.174, 5566.2, 774.698, 35.0403, 0, 65.3998, 69.4512, 3);
	PlaceObjectByHash(3966705493, 541.325, 5574.84, 785.49, 19.4409, 0, 65.3998, 66.6484, 3);
	PlaceObjectByHash(3966705493, 551.066, 5570.37, 780.799, 27.5407, 0, 65.3998, 67.9049, 3);
	PlaceObjectByHash(3966705493, 585.249, 5554.75, 751.745, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 618.334, 5539.62, 720.386, 40.7936, 0, 65.3998, 70.8829, 3);
	PlaceObjectByHash(3966705493, 626.602, 5535.85, 712.547, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 610.065, 5543.4, 728.217, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 601.777, 5547.19, 736.076, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 593.507, 5550.97, 743.917, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 634.862, 5532.07, 704.725, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 643.121, 5528.29, 696.894, 40.7936, 0, 65.3998, 70.8829, 3);
	PlaceObjectByHash(3966705493, 651.391, 5524.51, 689.053, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 659.651, 5520.73, 681.221, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 667.911, 5516.94, 673.389, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 676.171, 5513.17, 665.558, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 684.431, 5509.38, 657.727, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 692.691, 5505.61, 649.905, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 700.95, 5501.83, 642.074, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 709.22, 5498.05, 634.243, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 717.46, 5494.28, 626.431, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 725.72, 5490.5, 618.6, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 733.98, 5486.72, 610.778, 40.7396, 0, 65.3998, 70.8685, 3);
	PlaceObjectByHash(3966705493, 742.6, 5482.78, 603.167, 36.9395, 0, 65.3998, 69.9005, 3);
	PlaceObjectByHash(3966705493, 751.83, 5478.55, 596.335, 31.0392, 0, 65.3998, 68.5807, 3);
	PlaceObjectByHash(3966705493, 761.71, 5474.02, 590.613, 24.5989, 0, 65.3998, 67.3986, 3);
	PlaceObjectByHash(3966705493, 772.07, 5469.28, 586.08, 18.9288, 0, 65.3998, 66.5835, 3);
	PlaceObjectByHash(3966705493, 782.84, 5464.34, 582.86, 11.5788, 0, 65.3998, 65.8427, 3);
	PlaceObjectByHash(3966705493, 793.89, 5459.28, 581.117, 5.0787, 0, 65.3998, 65.485, 3);
	PlaceObjectByHash(3966705493, 805.1, 5454.15, 580.876, -2.5212, 0, 65.3998, 65.4208, 3);
	PlaceObjectByHash(3966705493, 816.17, 5449.08, 581.975, -7.6213, 0, 65.3998, 65.5917, 3);
	PlaceObjectByHash(3966705493, 827.191, 5444.04, 584.582, -16.6212, 0, 65.3998, 66.3125, 3);
	PlaceObjectByHash(3966705493, 837.681, 5439.24, 588.899, -24.421, 0, 65.3998, 67.3698, 3);
	PlaceObjectByHash(2580877897, 522.61, 5584.49, 779.214, 79.7153, -9.2252, 55.7018, 77.7612, 3);
	PlaceObjectByHash(3862788492, 522.445, 5583.69, 779.551, -0.9197, -69.229, -167.468, 184.555, 3);
}
void LoadMapMod5()
{
	PlaceObjectByHash(2475986526, -1242.08, -2931.15, 12.9924, -0.1046, -3.33505e-009, 61.0607, -1, 4);
	PlaceObjectByHash(2475986526, -1247.11, -2928.46, 15.013, -0.1046, -3.33505e-009, 61.0607, -1, 4);
	PlaceObjectByHash(2475986526, -1251.58, -2926.05, 16.7865, -0.1046, -3.33505e-009, 61.0607, -1, 4);
	PlaceObjectByHash(2475986526, -1254.69, -2924.35, 18.25, -0.1046, -3.33505e-009, 61.0607, -1, 4);
	PlaceObjectByHash(3966705493, -1276.69, -2912.99, 23.0019, 0, 0.05, 60.9705, -1, 4);
	PlaceObjectByHash(2475986526, -1258.35, -2922.28, 20.2135, -0.1046, -3.33505e-009, 61.0607, -1, 4);
	PlaceObjectByHash(3966705493, -1270.89, -2916.22, 23.0123, 0, 0, 60.8909, -1, 4);
	PlaceObjectByHash(3966705493, -1270.25, -2914.99, 23.0137, 0, 0, 60.8909, -1, 4);
	PlaceObjectByHash(3966705493, -1274.87, -2909.4, 23.0049, 0, 0.05, 60.9705, -1, 4);
	PlaceObjectByHash(3966705493, -1269.01, -2912.64, 22.9993, 0, 0.05, 60.9705, -1, 4);
	PlaceObjectByHash(3966705493, -1267.87, -2915.44, 28.3632, 0, -0, 147.299, -1, 4);
	PlaceObjectByHash(3966705493, -1272.13, -2918.33, 28.4791, 0, 0.05, 60.9705, -1, 4);
	PlaceObjectByHash(3966705493, -1272.11, -2918.35, 25.6708, -0.48, 0.0499982, 60.9701, -1, 4);
	PlaceObjectByHash(3966705493, -1277.93, -2915.14, 25.604, 0, 0.05, 60.9705, -1, 4);
	PlaceObjectByHash(3966705493, -1279.69, -2909.85, 25.6358, 0, -0, -151.239, -1, 4);
	PlaceObjectByHash(3966705493, -1279.69, -2909.85, 28.4844, 0, -0, -151.239, -1, 4);
	PlaceObjectByHash(2475986526, -1261.82, -2920.38, 21.767, -0.1046, -3.33505e-009, 61.0607, -1, 4);
	PlaceObjectByHash(3966705493, -1273.65, -2907.11, 22.9763, 0, 0.05, 60.9705, -1, 4);
	PlaceObjectByHash(3966705493, -1267.77, -2910.37, 22.9978, 0, 0.05, 60.9705, -1, 4);
	PlaceObjectByHash(3966705493, -1266.49, -2908.08, 22.9987, 0, -0, -119.462, -1, 4);
	PlaceObjectByHash(3966705493, -1265.15, -2905.8, 23.0042, 0, -0, -119.462, -1, 4);
	PlaceObjectByHash(3966705493, -1266.44, -2905.21, 25.6255, 0, -0, -118.761, -1, 4);
	PlaceObjectByHash(3966705493, -1265.66, -2911.99, 25.6968, 0, 0, -30.9603, -1, 4);
	PlaceObjectByHash(3966705493, -1264.88, -2910.66, 25.6982, 0, 0, -30.9603, -1, 4);
	PlaceObjectByHash(3966705493, -1264.84, -2905.14, 25.624, 0, -0, -118.761, -1, 4);
	PlaceObjectByHash(3966705493, -1272.37, -2900.96, 25.6199, 0, -0, -118.761, -1, 4);
	PlaceObjectByHash(3966705493, -1276.35, -2903.91, 25.6214, 0, -0, -151.239, -1, 4);
	PlaceObjectByHash(3966705493, -1276.35, -2903.91, 28.4329, 0, -0, -151.239, -1, 4);
	PlaceObjectByHash(3966705493, -1272.37, -2900.96, 28.4385, 0, -0, -118.761, -1, 4);
	PlaceObjectByHash(3966705493, -1266.44, -2905.21, 28.437, 0, -0, -118.761, -1, 4);
	PlaceObjectByHash(3966705493, -1265.17, -2905.14, 28.3426, 0, -0, -118.861, -1, 4);
	PlaceObjectByHash(3966705493, -1271.09, -2902.58, 23.0057, 0, -0, -119.462, -1, 4);
	PlaceObjectByHash(3966705493, -1272.37, -2904.83, 22.9972, 0, -0, -119.462, -1, 4);
}
void LoadMapMod6()
{
	PlaceObjectByHash(2475986526, -1098.36, -2631.17, 19, 0, -0, 152.671, -1, 5);
	PlaceObjectByHash(2475986526, -1100.26, -2634.64, 21.1976, 16.2002, 0.192059, 150.427, -1, 5);
	PlaceObjectByHash(2475986526, -1102.26, -2638.02, 25.01, 26.7003, 0.178675, 149.261, -1, 5);
	PlaceObjectByHash(2475986526, -1103.96, -2640.91, 29.04, 28.3717, -0, 146.82, -1, 5);
	PlaceObjectByHash(1952396163, -1119.61, -2670.96, -5.125, 0, -0, 150.514, -1, 5);
	PlaceObjectByHash(1952396163, -1119.61, -2670.96, -5.125, 0, -0, 150.401, -1, 5);
	PlaceObjectByHash(3137065507, -1044.69, -2530.08, 20.4011, 94.8962, 4.26887e-007, 147.716, -1, 5);
}
void LoadMapMod7()
{
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 654.365, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 646.186, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 638.008, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 629.829, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 621.65, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 613.471, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 605.292, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 597.114, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 588.935, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 580.756, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 572.577, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 564.399, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 556.22, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 662.544, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 548.041, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 539.862, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 531.683, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 523.505, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 515.326, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 507.147, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 498.968, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 490.79, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 482.611, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 474.432, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 466.253, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 458.074, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 449.896, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 441.717, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 433.538, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 425.359, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 417.18, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 409.001, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 400.823, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 392.644, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 384.465, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 376.286, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 368.107, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 359.929, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 351.75, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 343.571, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 335.392, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 327.213, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 319.035, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 310.856, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 302.677, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 294.498, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 286.319, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 278.141, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 269.962, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 261.783, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 253.604, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 245.425, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 237.247, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 229.068, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 220.889, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 212.71, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 204.531, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 196.353, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 188.174, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 179.995, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 171.816, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 163.637, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 155.459, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 147.28, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 139.101, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 130.922, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 122.743, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 114.565, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 106.386, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 98.207, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 90.0282, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 81.8494, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 73.6706, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 65.4918, 0.660085, -0.919939, -109.32, -1, 6);
	PlaceObjectByHash(3026699584, 70.2592, -674.044, 57.313, 0.660085, -0.919939, -109.32, -1, 6);
}
void LoadMapMod8()
{
	PlaceObjectByHash(3522933110, -81.3886, -814.648, 325.169, 0, -0, 180, -1, 7);
	PlaceObjectByHash(3681122061, -81.7456, -809.064, 324.799, 0.500021, 2.66804, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -86.1333, -802.279, 321.92, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -89.7406, -796.701, 316.539, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -93.601, -790.725, 310.777, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -97.4741, -784.73, 304.997, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -101.373, -778.696, 299.179, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -105.233, -772.72, 293.417, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -109.106, -766.725, 287.637, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -112.954, -760.769, 281.894, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -116.827, -754.773, 276.113, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -120.687, -748.798, 270.352, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -124.518, -742.868, 264.636, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -128.358, -736.925, 258.909, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -132.22, -730.949, 253.151, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -136.081, -724.974, 247.394, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -139.943, -718.998, 241.636, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -143.826, -712.99, 235.846, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -147.667, -707.047, 230.12, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -151.508, -701.104, 224.394, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -155.369, -695.128, 218.636, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -159.252, -689.12, 212.846, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -163.072, -683.209, 207.152, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -166.976, -677.168, 201.331, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -170.838, -671.193, 195.573, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -174.7, -665.217, 189.815, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -178.583, -659.209, 184.026, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -182.444, -653.233, 178.268, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -186.327, -647.225, 172.479, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -190.189, -641.249, 166.721, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -194.03, -635.306, 160.994, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -197.871, -629.363, 155.268, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -201.711, -623.42, 149.542, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -205.552, -617.477, 143.815, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -209.393, -611.534, 138.089, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -213.255, -605.559, 132.331, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -217.095, -599.616, 126.605, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -220.957, -593.64, 120.847, -38.9999, -1.45141, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -222.245, -591.648, 118.928, -33.8999, 1.02453, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -223.349, -589.94, 117.561, -29.31, 1.79292, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -224.58, -588.036, 116.288, -26.25, 5.12264, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -225.869, -586.04, 115.116, -24.7199, -1.10991, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -227.127, -584.095, 114.05, -21.6599, 1.8783, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -228.615, -581.794, 112.961, -19.6199, 1.02453, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -230.201, -579.341, 111.92, -17.0699, -0, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -232.121, -576.369, 110.833, -12.9899, 4.26887, 32.8808, -1, 7);
	PlaceObjectByHash(3681122061, -234.105, -573.302, 109.991, -9.9299, -2.98821, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -236.628, -569.396, 109.329, -7.3799, -4.26887, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -239.81, -564.475, 108.721, -4.3199, 1.28066, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -241.76, -561.459, 108.549, -0.7499, -1.12058, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -244.04, -557.932, 108.494, 2.82011, -2.77476, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -246.372, -554.326, 108.705, 5.8801, -2.77476, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -248.668, -550.777, 109.14, 10.4701, 8.96462, 32.8806, -1, 7);
	PlaceObjectByHash(3681122061, -251.664, -546.138, 110.313, 13.5301, 1.15259, 32.8806, -1, 7);
	PlaceObjectByHash(3681122061, -254.537, -541.694, 111.791, 16.5901, 4.26887, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -256.28, -538.999, 112.748, 19.6501, -1.19528, 32.8807, -1, 7);
	PlaceObjectByHash(3681122061, -65.9078, -814.752, 326.106, 19.89, 4.26887, -53.8105, -1, 7);
	PlaceObjectByHash(3681122061, -58.6541, -809.444, 327.336, -4.08004, -2.13443, -53.8103, -1, 7);
	PlaceObjectByHash(3681122061, -52.4476, -804.909, 323.715, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -47.2332, -801.09, 317.168, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -42.0187, -797.272, 310.621, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -36.8326, -793.474, 304.109, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -31.5898, -789.635, 297.526, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -26.4037, -785.838, 291.014, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -21.1893, -782.019, 284.467, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -15.9748, -778.201, 277.919, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -10.7604, -774.383, 271.372, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -5.57426, -770.585, 264.86, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, -0.359839, -766.767, 258.313, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 4.82623, -762.969, 251.799, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 10.0123, -759.171, 245.285, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 15.2268, -755.353, 238.735, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 20.4412, -751.535, 232.184, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 25.6273, -747.737, 225.67, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 30.8135, -743.939, 219.155, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 36.0279, -740.121, 212.605, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 41.214, -736.323, 206.091, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 46.4285, -732.505, 199.54, -45.3899, 2.56132, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 48.4122, -731.052, 197.049, -41.8198, 1.62217, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 49.5549, -730.218, 195.782, -38.2499, 3.24434, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 51.171, -729.035, 194.203, -36.2098, 2.39057, -53.81, -1, 7);
	PlaceObjectByHash(3681122061, 52.8966, -727.773, 192.637, -33.1499, -6.83019, -53.8101, -1, 7);
	PlaceObjectByHash(3681122061, 54.586, -726.537, 191.27, -30.0898, 8.70849, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 56.5413, -725.105, 189.866, -25.4998, 7.59859, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 58.8359, -723.425, 188.509, -22.4398, 4.26887, -53.81, -1, 7);
	PlaceObjectByHash(3681122061, 60.738, -722.033, 187.536, -18.3599, 1.10991, -53.81, -1, 7);
	PlaceObjectByHash(3681122061, 63.1509, -720.268, 186.544, -15.8098, 5.03727, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 65.131, -718.821, 185.849, -12.7498, 5.07995, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 67.1384, -717.352, 185.286, -9.17981, 4.78113, -53.81, -1, 7);
	PlaceObjectByHash(3681122061, 69.2894, -715.776, 184.855, -4.5898, 4.18349, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 71.7831, -713.952, 184.607, 0.000193536, 4.16213, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 74.0832, -712.268, 184.607, 3.06019, 3.7566, -53.81, -1, 7);
	PlaceObjectByHash(3681122061, 76.0175, -710.853, 184.736, 8.1602, 4.35424, -53.81, -1, 7);
	PlaceObjectByHash(3681122061, 77.7752, -709.567, 185.048, 13.2602, 5.50684, -53.81, -1, 7);
	PlaceObjectByHash(3681122061, 79.6997, -708.158, 185.61, 17.3402, 3.7566, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 81.3947, -706.918, 186.266, 21.9302, 4.26887, -53.81, -1, 7);
	PlaceObjectByHash(3681122061, 83.3036, -705.52, 187.219, 26.0102, 9.39151, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 85.6244, -703.821, 188.622, 29.0702, 1.96368, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 87.3526, -702.556, 189.812, 33.1501, 2.90283, -53.8098, -1, 7);
	PlaceObjectByHash(3681122061, 89.2107, -701.196, 191.316, 37.2301, 4.86651, -53.8098, -1, 7);
	PlaceObjectByHash(3681122061, 90.8492, -699.998, 192.859, 41.82, -2.56132, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 92.6236, -698.701, 194.826, 46.41, 8.2816, -53.8099, -1, 7);
	PlaceObjectByHash(3681122061, 94.2096, -697.539, 196.89, 52.0199, 6.57406, -53.8098, -1, 7);
	PlaceObjectByHash(3681122061, 95.6251, -696.503, 199.137, 56.61, 9.22075, -53.8097, -1, 7);
	PlaceObjectByHash(3681122061, 96.9799, -695.512, 201.683, 61.7098, 8.53774, -53.8097, -1, 7);
	PlaceObjectByHash(3681122061, 98.1658, -694.646, 204.413, 65.7899, 5.03726, -53.8096, -1, 7);
	PlaceObjectByHash(3681122061, -69.0186, -829.452, 324.775, 0, -0, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -65.276, -836.288, 321.491, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -62.2554, -842.061, 315, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -59.2515, -847.802, 308.544, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -56.2313, -853.574, 302.053, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -53.1945, -859.378, 295.526, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -50.2071, -865.088, 289.106, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -47.2032, -870.829, 282.65, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -44.1829, -876.602, 276.159, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -41.1626, -882.374, 269.667, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -38.1751, -888.084, 263.247, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -35.1713, -893.825, 256.791, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -32.1674, -899.566, 250.335, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -29.1635, -905.307, 243.879, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -26.1432, -911.079, 237.388, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -23.1393, -916.821, 230.932, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -20.119, -922.593, 224.44, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -17.1152, -928.334, 217.985, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -14.1112, -934.075, 211.529, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -11.1235, -939.785, 205.108, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -8.13589, -945.495, 198.687, -44.8796, 3.24434, -152.398, -1, 7);
	PlaceObjectByHash(3681122061, -5.28891, -951.101, 192.102, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, -2.35757, -956.552, 185.364, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 0.589775, -962.033, 178.59, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 3.5211, -967.483, 171.852, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 9.3998, -978.414, 158.339, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 6.46847, -972.964, 165.077, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 12.3311, -983.865, 151.601, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 15.2944, -989.375, 144.789, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 21.1569, -1000.28, 131.313, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 18.2417, -994.856, 138.014, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 24.0722, -1005.7, 124.612, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 27.0355, -1011.21, 117.801, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 29.9828, -1016.69, 111.026, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 35.8294, -1027.56, 97.5867, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 37.2241, -1030.15, 94.4555, -44.3698, -1.70754, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 38.7475, -1032.99, 91.3086, -39.7798, -4.26887, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 39.7483, -1034.85, 89.5491, -36.7197, 3.4151, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 40.9818, -1037.14, 87.6062, -33.6597, -2.21981, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 42.1248, -1039.27, 85.999, -30.0898, -1.96368, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 32.9141, -1022.14, 104.288, -47.4298, -1.79292, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 43.3132, -1041.47, 84.5449, -26.5197, -1.79293, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 44.7115, -1044.08, 83.0715, -23.4597, -2.39056, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 45.9496, -1046.38, 81.937, -20.3997, -2.47594, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 47.0815, -1048.48, 81.0483, -17.3397, -2.09174, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 48.302, -1050.75, 80.2436, -14.7897, -8.96462, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 50.0647, -1054.03, 79.2608, -13.2597, -2.77476, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 52.0238, -1057.67, 78.2861, -11.7297, -1.45141, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 53.7395, -1060.86, 77.5341, -9.17973, -1.1099, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 55.7265, -1064.56, 76.8558, -6.11973, -6.61674, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 57.3746, -1067.62, 76.4825, -3.56972, -9.60496, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 59.3125, -1071.23, 76.2272, 0.000276446, -9.05818, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 61.112, -1074.58, 76.2272, 4.08028, -8.00412, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 62.529, -1077.21, 76.4405, 7.65027, -7.04364, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 64.0779, -1080.1, 76.8796, 10.7103, -1.28066, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 65.9388, -1083.55, 77.623, 14.2802, -1.70755, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 67.4076, -1086.29, 78.4126, 17.3403, -1.57948, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, 68.7639, -1088.81, 79.3066, 21.4202, 1.36604, -151.734, -1, 7);
	PlaceObjectByHash(3681122061, -86.0915, -825.576, 324.775, 0, -0, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -99.1939, -833.684, 315.911, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -105.248, -837.511, 310.056, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -93.1729, -829.876, 321.734, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -111.268, -841.319, 304.233, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -123.245, -848.891, 292.651, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -147.333, -864.12, 269.359, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -141.278, -860.292, 275.213, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -135.256, -856.485, 281.036, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -129.266, -852.699, 286.828, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -117.224, -845.084, 298.474, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -165.367, -875.521, 251.921, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -213.415, -905.895, 205.464, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -207.426, -902.108, 211.255, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -201.403, -898.301, 217.078, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -195.414, -894.515, 222.87, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -183.434, -886.942, 234.452, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -177.445, -883.156, 240.244, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -171.422, -879.348, 246.067, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -159.378, -871.734, 257.713, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -153.355, -867.927, 263.536, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -189.424, -890.728, 228.661, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -231.449, -917.296, 188.027, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -225.46, -913.509, 193.818, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -219.47, -909.723, 199.609, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -237.439, -921.082, 182.235, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -284.806, -951.016, 167.673, 28.5601, -7.5132, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -289.048, -953.697, 170.578, 34.1701, -3.41509, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -290.727, -954.757, 171.926, 37.23, 3.41509, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -286.998, -952.399, 169.084, 31.62, -1.36604, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -282.375, -949.481, 166.27, 26.0101, 3.50047, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -280.014, -947.991, 165.174, 21.4201, -6.83019, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -277.4, -946.336, 164.178, 17.8501, -3.15896, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -270.266, -941.827, 162.896, 4.59013, -1.79292, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -266.683, -939.562, 163.103, -6.11989, -1.38738, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -259.328, -934.913, 165.339, -17.8499, -4.69576, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -253.478, -931.22, 168.474, -26.01, -4.18349, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -248.103, -927.823, 172.247, -33.66, -5.97642, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -243.429, -924.868, 176.444, -39.27, -2.30519, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -256.593, -933.187, 166.676, -22.4399, -5.97641, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -262.183, -936.72, 164.252, -14.2799, -3.20165, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -268.321, -940.597, 162.896, 0.000125527, -1.95033, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -272.668, -943.344, 163.123, 8.67012, -2.86014, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -275.091, -944.877, 163.561, 12.7501, -5.1226, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -249.757, -928.867, 170.944, -31.11, -6.0617, 122.286, -1, 7);
	PlaceObjectByHash(3681122061, -251.566, -930.012, 169.653, -27.54, -3.58585, 122.286, -1, 7);
}
void LoadMapMod9()
{
	PlaceObjectByHash(3213433054, -2661.22, 3209.43, 32.7118, 0, -0, -120.437, -1, 8);
	PlaceObjectByHash(3213433054, -2657.86, 3207.56, 32.7118, 0, 0, 59.6808, -1, 8);
	PlaceObjectByHash(3213433054, -2659.52, 3212.33, 32.7118, 0, -0, -120.437, -1, 8);
	PlaceObjectByHash(3213433054, -2656.2, 3210.41, 32.7118, 0, 0, 59.6808, -1, 8);
	PlaceObjectByHash(3213433054, -2654.54, 3213.26, 32.7118, 0, 0, 59.6808, -1, 8);
	PlaceObjectByHash(3213433054, -2657.84, 3215.18, 32.7118, 0, -0, -120.437, -1, 8);
	PlaceObjectByHash(3213433054, -2615.14, 3183, 32.8118, 0, -0, -120.45, -1, 8);
	PlaceObjectByHash(3213433054, -2611.82, 3181.02, 32.8118, 0, 0, 58.529, -1, 8);
	PlaceObjectByHash(3213433054, -2613.47, 3185.85, 32.8118, 0, -0, -120.45, -1, 8);
	PlaceObjectByHash(3213433054, -2610.11, 3183.91, 32.8118, 0, 0, 59.589, -1, 8);
	PlaceObjectByHash(3213433054, -2611.79, 3188.7, 32.8118, 0, -0, -120.45, -1, 8);
	PlaceObjectByHash(3213433054, -2608.46, 3186.71, 32.8118, 0, 0, 58.529, -1, 8);
	PlaceObjectByHash(3213433054, -2550.83, 3162.65, 32.7702, 0, -0, -117.989, -1, 8);
	PlaceObjectByHash(4109455646, -2547.01, 3160.66, 34.9496, 11.66, -2.56132e-006, -118.95, -1, 8);
	PlaceObjectByHash(3213433054, -2476.76, 3120.72, 32.7718, 0, -0, -119.612, -1, 8);
	PlaceObjectByHash(4109455646, -2473.51, 3118.83, 34.5672, 8.47412, -0.0223369, -120.965, -1, 8);
	PlaceObjectByHash(2975320548, -2442.43, 3105.7, 35.6224, -7.42001, -5.12265e-006, 150.074, -1, 8);
	PlaceObjectByHash(2975320548, -2443.67, 3101.83, 35.8732, -11.66, 3.84198e-006, 59.738, -1, 8);
	PlaceObjectByHash(2975320548, -2438.8, 3099, 36.0155, -11.66, -6.40331e-006, 59.7379, -1, 8);
	PlaceObjectByHash(2975320548, -2434.05, 3096.22, 36.6871, -22.26, -1.45141e-005, 59.7379, -1, 8);
	PlaceObjectByHash(2975320548, -2446.85, 3098.2, 35.6088, -7.42, 3.20165e-006, -31.8463, -1, 8);
	PlaceObjectByHash(2402097066, -2448.77, 3097.65, 35.4732, 0, -0, -120.616, -1, 8);
	PlaceObjectByHash(2402097066, -2442.95, 3108.08, 35.4832, 0, -0, -117.436, -1, 8);
	PlaceObjectByHash(2402097066, -2442.95, 3108.08, 35.4832, 0, -0, -117.436, -1, 8);
	PlaceObjectByHash(3681122061, -2389.55, 3069.11, 36.5952, 179.801, -3.76861e-006, -117.806, -1, 8);
	PlaceObjectByHash(1982829832, -2363.33, 3056.01, 31.8257, 0, -0, -119.219, -1, 8);
	PlaceObjectByHash(3681122061, -2389.55, 3069.11, 36.5952, 179.801, -3.76861e-006, -117.806, -1, 8);
	PlaceObjectByHash(2609922146, -2358.79, 3060.59, 31.8217, 0, -0, -119.371, -1, 8);
	PlaceObjectByHash(2975320548, -2325.93, 3034.99, 33.3214, 19.8, 3.41509e-006, -120.09, -1, 8);
	PlaceObjectByHash(2975320548, -2321.78, 3032.58, 36.3899, 25.7399, -8.62311e-005, -120.09, -1, 8);
	PlaceObjectByHash(2975320548, -2317.79, 3030.29, 39.6222, 25.0799, -6.23256e-005, -120.09, -1, 8);
	PlaceObjectByHash(2975320548, -2313.74, 3027.94, 42.9228, 25.7399, -8.62311e-005, -120.09, -1, 8);
	PlaceObjectByHash(2975320548, -2309.83, 3025.69, 46.2289, 27.06, -8.2816e-005, -120.09, -1, 8);
	PlaceObjectByHash(2975320548, -2306.07, 3023.49, 49.5919, 29.0399, -0.000116113, -120.09, -1, 8);
	PlaceObjectByHash(2975320548, -2283.14, 3009.97, 44.7284, 14.12, -2.04906e-005, 60.0397, -1, 8);
	PlaceObjectByHash(2975320548, -2287.5, 3012.47, 46.9591, 13.6, 0.680011, 60.0397, -1, 8);
	PlaceObjectByHash(2975320548, -2302.26, 3021.28, 53.174, 29.6999, -0.000100745, -120.09, -1, 8);
	PlaceObjectByHash(2975320548, -2292.06, 3015.11, 49.2546, 13.6, 1.53679e-005, 60.0397, -1, 8);
	PlaceObjectByHash(2975320548, -2298.56, 3019.12, 56.7472, 30.36, -8.79386e-005, -120.09, -1, 8);
	PlaceObjectByHash(2052512905, -2294.52, 3015.08, 58.6366, 82.6616, 0.00430302, -31.2919, -1, 8);
	PlaceObjectByHash(2052512905, -2293.13, 3017.4, 58.6822, 80.9428, 0.00560716, 149.187, -1, 8);
	PlaceObjectByHash(2787492567, -2293.66, 3016.58, 31.8318, -90, 0.0833042, 109.919, -1, 8);
	PlaceObjectByHash(3213433054, -2202.78, 2963.39, 32.8003, 0, -0, -120.04, -1, 8);
	PlaceObjectByHash(3213433054, -2199.53, 2961.53, 34.17, -40.5599, -2.56132e-006, 59.8803, -1, 8);
	PlaceObjectByHash(3681122061, -2137.1, 2904.97, 32.8327, 16.8, -1.10991e-005, -141.061, -1, 8);
	PlaceObjectByHash(3681122061, -2132.27, 2897.94, 34.4465, 16.8, -14, -141.061, -1, 8);
	PlaceObjectByHash(3681122061, -2127.12, 2890.88, 36.4432, 17.92, -29.68, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2119.98, 2885.33, 38.8379, 17.92, -29.68, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2113.02, 2880, 41.2705, 17.92, -29.68, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2085.18, 2857.71, 49.9177, 19.04, -43.12, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2078.1, 2852.44, 51.662, 19.0399, -50.4001, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2092.05, 2863.54, 48.2285, 17.92, -34.16, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2098.91, 2869.18, 46.2053, 17.92, -29.68, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2105.97, 2874.59, 43.7379, 17.92, -29.68, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2070.42, 2847.69, 53.5814, 19.0399, -50.4001, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2062.85, 2843.01, 55.4739, 19.0399, -50.4001, -136.581, -1, 8);
	PlaceObjectByHash(3681122061, -2055.32, 2838.69, 56.5097, 17.7868, -43.8868, -131.905, -1, 8);
	PlaceObjectByHash(3681122061, -2047.61, 2834.88, 58.9097, 26.1867, -43.8868, -131.905, -1, 8);
	PlaceObjectByHash(3681122061, -2039.74, 2832.2, 62.2769, 38.5067, -45.5668, -131.905, -1, 8);
	PlaceObjectByHash(3681122061, -1996.98, 2830.2, 48.384, 0.202822, -14.4337, -105.503, -1, 8);
	PlaceObjectByHash(3681122061, -1996.42, 2832.89, 59.0601, -179.433, 12.3451, 76.9258, -1, 8);
	PlaceObjectByHash(3213433054, -1951.86, 2849.63, 34.5146, -47.5199, -7.59859e-005, 59.6261, -1, 8);
	PlaceObjectByHash(3213433054, -1950.16, 2852.52, 34.5146, -47.5199, -7.59859e-005, 59.6261, -1, 8);
	PlaceObjectByHash(3213433054, -1953.57, 2854.49, 32.8004, 0, -0, -120.091, -1, 8);
	PlaceObjectByHash(3213433054, -1955.25, 2851.59, 32.8004, 0, -0, -120.091, -1, 8);
	PlaceObjectByHash(4111834409, -1960.72, 2857.38, 31.7305, 0, -0, -118.505, -1, 8);
	PlaceObjectByHash(4109455646, -2144, 2967.21, 36.0606, 9.35852, -0.00134085, 59.8371, -1, 8);
	PlaceObjectByHash(4109455646, -2139.63, 2964.67, 33.9985, 5.84852, -0.0013321, 59.8371, -1, 8);
	PlaceObjectByHash(4109455646, -2135.45, 2962.3, 32.4604, 0, 0, 60.4792, -1, 8);
	PlaceObjectByHash(2975320548, -2193.23, 2995.21, 35.0684, 11.6996, -0.00262322, -119.238, -1, 8);
	PlaceObjectByHash(2975320548, -2197.74, 2997.74, 32.8074, 15.2099, 2.04906e-005, -119.328, -1, 8);
	PlaceObjectByHash(3213433054, -2246.82, 3026.19, 33.0318, 0.0331696, 0.0056356, 58.6423, -1, 8);
	PlaceObjectByHash(3213433054, -2256.38, 3032.02, 35.4343, 6.5707, 0.0279573, 58.7685, -1, 8);
	PlaceObjectByHash(3213433054, -2265.19, 3037.37, 38.408, 10.1262, 0.0254109, 58.7585, -1, 8);
	PlaceObjectByHash(3213433054, -2273.45, 3042.38, 40.214, 8.95404, -0.00182451, 58.7729, -1, 8);
	PlaceObjectByHash(3213433054, -2281.36, 3047.19, 42.7382, 8.89319, 0.151422, 58.8279, -1, 8);
	PlaceObjectByHash(3213433054, -2289.41, 3052.05, 46.2871, 13.2, 0.000150264, 58.7642, -1, 8);
	PlaceObjectByHash(3213433054, -2397.86, 3114.2, 32.8449, 0, 0, 60.2049, -1, 8);
	PlaceObjectByHash(3213433054, -2402.38, 3116.77, 34.7648, 0, 0, 60.2049, -1, 8);
	PlaceObjectByHash(2475986526, -2394.65, 3118.07, 32.5452, 0, 0, 56.6241, -1, 8);
	PlaceObjectByHash(2475986526, -2397.73, 3120.09, 34.1452, 2.04, -1.38738e-006, 56.6241, -1, 8);
	PlaceObjectByHash(2475986526, -2401.78, 3122.77, 36.6227, 8.16, 1.28066e-006, 56.6239, -1, 8);
	PlaceObjectByHash(2475986526, -2405.48, 3125.2, 39.5571, 14.28, 1.02453e-005, 56.6239, -1, 8);
	PlaceObjectByHash(2475986526, -2409.12, 3127.6, 43.2064, 20.4, -2.39057e-005, 56.6239, -1, 8);
	PlaceObjectByHash(2475986526, -2412.29, 3129.71, 46.9494, 24.4781, -1.43125, 56.2632, -1, 8);
	PlaceObjectByHash(2475986526, -2415.18, 3131.49, 51.529, 38.3931, -3.70399, 55.299, -1, 8);
	PlaceObjectByHash(2475986526, -2416.96, 3132.28, 56.2986, 54.0331, -3.70398, 53.2589, -1, 8);
	PlaceObjectByHash(2475986526, -2417.37, 3132.16, 61.6124, 73.753, -3.70394, 53.2588, -1, 8);
	PlaceObjectByHash(2475986526, -2416.48, 3131.04, 66.996, 90.9129, -3.70395, 53.2587, -1, 8);
	PlaceObjectByHash(2475986526, -2414.88, 3129.5, 70.998, 104.113, -3.70383, 50.6186, -1, 8);
	PlaceObjectByHash(2475986526, -2412.46, 3127.2, 74.61, 116.653, -3.70392, 50.6185, -1, 8);
	PlaceObjectByHash(2475986526, -2409.58, 3124.71, 77.6119, 121.273, -3.70395, 50.6185, -1, 8);
	PlaceObjectByHash(2475986526, -2406.75, 3122.18, 80.0586, 127.213, -3.70391, 50.6184, -1, 8);
	PlaceObjectByHash(2475986526, -2403.38, 3119.23, 82.2502, 135.793, -3.70396, 50.6185, -1, 8);
	PlaceObjectByHash(2475986526, -2369.71, 3092.81, 68.2807, -146.327, -3.7039, 50.6183, -1, 8);
	PlaceObjectByHash(2475986526, -2367.45, 3091.4, 63.3347, -134.447, -3.70392, 50.6182, -1, 8);
	PlaceObjectByHash(2475986526, -2366, 3090.66, 58.0814, -123.887, -3.7039, 50.6182, -1, 8);
	PlaceObjectByHash(2475986526, -2365.38, 3090.57, 53.1623, -112.007, -3.70391, 50.6182, -1, 8);
	PlaceObjectByHash(2475986526, -2365.62, 3091.18, 48.0172, -99.4666, -3.70393, 50.6181, -1, 8);
	PlaceObjectByHash(2475986526, -2366.77, 3092.54, 43.04, -86.2661, -3.70399, 50.6181, -1, 8);
	PlaceObjectByHash(2475986526, -2368.73, 3094.52, 38.5669, -74.386, -3.70392, 50.6181, -1, 8);
	PlaceObjectByHash(2475986526, -2371.25, 3096.8, 35.0692, -59.206, -3.70384, 55.2379, -1, 8);
	PlaceObjectByHash(2475986526, -2375.18, 3099.61, 32.3997, -42.0459, -3.70387, 57.2179, -1, 8);
	PlaceObjectByHash(2475986526, -2395.69, 3112.77, 84.6355, 152.292, -3.70389, 50.6184, -1, 8);
	PlaceObjectByHash(2475986526, -2391.54, 3109.37, 84.6603, 162.192, -3.70393, 50.6184, -1, 8);
	PlaceObjectByHash(2475986526, -2387.13, 3105.84, 83.6595, 172.752, -3.70391, 50.6184, -1, 8);
	PlaceObjectByHash(2475986526, -2382.97, 3102.56, 81.8101, -179.988, -3.70391, 50.6184, -1, 8);
	PlaceObjectByHash(2475986526, -2372.52, 3094.76, 72.6855, -154.907, -3.70391, 50.6183, -1, 8);
	PlaceObjectByHash(2475986526, -2379.11, 3099.59, 79.371, -172.728, -3.70391, 50.6183, -1, 8);
	PlaceObjectByHash(2475986526, -2375.46, 3096.85, 76.1692, -162.168, -3.70388, 50.6182, -1, 8);
	PlaceObjectByHash(2475986526, -2399.8, 3116.19, 83.7512, 143.712, -3.70387, 50.6184, -1, 8);
	PlaceObjectByHash(3213433054, -2510.73, 3180.4, 32.8111, 0, 0, 59.4291, -1, 8);
	PlaceObjectByHash(209943352, -2302.92, 3059.95, 50.2208, 76.8397, -0.679965, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2298.84, 3057.5, 48.7042, 71.3997, -0.679954, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2290.6, 3052.58, 47.3498, 84.3198, -0.679946, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2290.6, 3052.58, 47.3498, 84.3198, -0.679946, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2294.73, 3055.05, 47.6692, 76.8398, -0.680059, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2533.2, 3193.91, 37.3948, 0, -0, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2533.2, 3193.91, 37.3948, 0, -0, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2425.58, 3091.36, 36.493, 0, -0, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2425.58, 3091.36, 36.493, 0, -0, -120.716, -1, 8);
	PlaceObjectByHash(209943352, -2293.7, 3012.65, 55.3685, -89.7587, -0.659716, -30.2946, -1, 8);
	PlaceObjectByHash(209943352, -2293.7, 3012.65, 55.3685, -89.7587, -0.659716, -30.2946, -1, 8);
}
void LoadMapMod10()
{
	PlaceObjectByHash(3681122061, -1018.78, -2937.26, 12.9646, 0, 0, -30.3132, -1, 9);
	PlaceObjectByHash(3681122061, -1023.38, -2945.17, 12.9646, 0, 0, -30.3132, -1, 9);
	PlaceObjectByHash(3681122061, -1028.02, -2953.13, 12.9646, 0, 0, -30.3132, -1, 9);
	PlaceObjectByHash(3681122061, -1032.66, -2961.06, 12.9646, 0, 0, -30.3132, -1, 9);
	PlaceObjectByHash(3681122061, -1037.32, -2969.04, 12.9646, 0, 0, -30.3132, -1, 9);
	PlaceObjectByHash(3681122061, -1041.95, -2976.96, 12.9646, 0, 0, -30.3132, -1, 9);
	PlaceObjectByHash(3681122061, -1046.18, -2984.19, 12.9646, 0, 0, -30.3132, -1, 9);
	PlaceObjectByHash(3681122061, -1050.78, -2992.12, 12.9646, 0, 0, -29.8732, -1, 9);
	PlaceObjectByHash(3681122061, -1053.22, -2998.13, 12.9646, 0, 0, -14.2534, -1, 9);
	PlaceObjectByHash(3681122061, -1054.14, -3005.28, 12.9646, 0, 0, -0.613478, -1, 9);
	PlaceObjectByHash(3681122061, -1053.45, -3012.85, 12.9646, 0, 0, 11.4866, -1, 9);
	PlaceObjectByHash(3681122061, -1051.19, -3020.08, 12.9646, 0, 0, 23.3667, -1, 9);
	PlaceObjectByHash(3681122061, -1047.43, -3026.73, 12.9646, 0, 0, 35.2469, -1, 9);
	PlaceObjectByHash(3681122061, -1042.42, -3032.37, 12.9646, 0, 0, 47.7871, -1, 9);
	PlaceObjectByHash(3681122061, -1037.1, -3038.16, 12.9646, 0, 0, 37.2273, -1, 9);
	PlaceObjectByHash(3681122061, -1033.11, -3044.75, 12.9646, 0, 0, 25.5675, -1, 9);
	PlaceObjectByHash(3681122061, -1030.43, -3052.11, 12.9646, 0, 0, 14.5676, -1, 9);
	PlaceObjectByHash(3681122061, -1029.18, -3059.85, 12.9646, 0, 0, 4.00757, -1, 9);
	PlaceObjectByHash(3681122061, -1029.37, -3067.7, 12.9646, 0, 0, -6.55247, -1, 9);
	PlaceObjectByHash(3681122061, -1031, -3075.33, 12.9646, 0, 0, -17.5525, -1, 9);
	PlaceObjectByHash(3681122061, -1034.09, -3082.35, 12.9646, 0, 0, -29.6525, -1, 9);
	PlaceObjectByHash(3681122061, -1038.6, -3088.77, 12.9646, 0, 0, -40.2127, -1, 9);
	PlaceObjectByHash(3681122061, -1044.19, -3094.15, 12.9646, 0, 0, -51.653, -1, 9);
	PlaceObjectByHash(3681122061, -1050.65, -3098.2, 12.9646, 0, 0, -63.7531, -1, 9);
	PlaceObjectByHash(3681122061, -1057.89, -3100.91, 12.9646, 0, 0, -75.1935, -1, 9);
	PlaceObjectByHash(3681122061, -1065.18, -3101.87, 12.9646, 0, 0, -89.7139, -1, 9);
	PlaceObjectByHash(3681122061, -1073.03, -3101.2, 12.9646, 0, -0, -100.054, -1, 9);
	PlaceObjectByHash(3681122061, -1080.63, -3099.11, 12.9646, 0, -0, -110.615, -1, 9);
	PlaceObjectByHash(3681122061, -1087.92, -3095.65, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1095.95, -3091.03, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1104.01, -3086.4, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1112.04, -3081.79, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1120.04, -3077.19, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1128.1, -3072.56, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1136.15, -3067.93, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1144.2, -3063.31, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1152.22, -3058.7, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1160.24, -3054.09, 12.9646, 0, -0, -119.855, -1, 9);
	PlaceObjectByHash(3681122061, -1168.22, -3049.48, 12.9646, 0, -0, -120.295, -1, 9);
	PlaceObjectByHash(3681122061, -1176.21, -3044.8, 12.9646, 0, -0, -120.295, -1, 9);
	PlaceObjectByHash(3681122061, -1183.28, -3040.14, 12.9646, 0, -0, -126.455, -1, 9);
	PlaceObjectByHash(3681122061, -1189.23, -3034.89, 12.9646, 0, -0, -136.356, -1, 9);
	PlaceObjectByHash(3681122061, -1193.86, -3028.84, 12.9646, 0, -0, -148.677, -1, 9);
	PlaceObjectByHash(3681122061, -1197.2, -3021.86, 12.9646, 0, -0, -159.898, -1, 9);
	PlaceObjectByHash(3681122061, -1198.78, -3014.77, 12.9646, 0, -0, -174.639, -1, 9);
	PlaceObjectByHash(3681122061, -1198.72, -3007.04, 12.9646, 0, -0, 173.701, -1, 9);
	PlaceObjectByHash(3681122061, -1197, -2999.97, 12.9646, 0, -0, 158.962, -1, 9);
	PlaceObjectByHash(3681122061, -1193.5, -2993.3, 12.9646, 0, -0, 145.982, -1, 9);
	PlaceObjectByHash(3681122061, -1188.51, -2987.1, 12.9646, 0, -0, 136.083, -1, 9);
	PlaceObjectByHash(3681122061, -1182.5, -2981.85, 12.9646, 0, -0, 126.183, -1, 9);
	PlaceObjectByHash(3681122061, -1175.98, -2978.23, 12.9646, 0, -0, 112.104, -1, 9);
	PlaceObjectByHash(3681122061, -1168.67, -2976.15, 12.9646, 0, -0, 99.7843, -1, 9);
	PlaceObjectByHash(3681122061, -1160.82, -2975.53, 12.9646, 0, 0, 89.4449, -1, 9);
	PlaceObjectByHash(3681122061, -1152.93, -2976.29, 12.9646, 0, 0, 79.5455, -1, 9);
	PlaceObjectByHash(3681122061, -1145.21, -2978.39, 12.9646, 0, 0, 70.0859, -1, 9);
	PlaceObjectByHash(3681122061, -1138.14, -2981.75, 12.9646, 0, 0, 59.0863, -1, 9);
	PlaceObjectByHash(3681122061, -1130.27, -2986.43, 12.9646, 0, 0, 59.0863, -1, 9);
	PlaceObjectByHash(3681122061, -1122.46, -2991.09, 12.9646, 0, 0, 59.0863, -1, 9);
	PlaceObjectByHash(3681122061, -1115.12, -2994.75, 12.9646, 0, 0, 67.1435, -1, 9);
	PlaceObjectByHash(3681122061, -1107.63, -2997.13, 12.9646, 0, 0, 76.9913, -1, 9);
	PlaceObjectByHash(3681122061, -1099.8, -2998.14, 12.9646, 0, 0, 86.8389, -1, 9);
	PlaceObjectByHash(3681122061, -1091.94, -2997.76, 12.9646, 0, -0, 97.5819, -1, 9);
	PlaceObjectByHash(3681122061, -1084.47, -2995.95, 12.9646, 0, -0, 108.325, -1, 9);
	PlaceObjectByHash(3681122061, -1077.64, -2992.78, 12.9646, 0, -0, 119.963, -1, 9);
	PlaceObjectByHash(3681122061, -1077.64, -2992.78, 12.9646, 0, -0, 119.963, -1, 9);
	PlaceObjectByHash(3681122061, -1071.68, -2988.3, 12.9646, 0, -0, 132.496, -1, 9);
	PlaceObjectByHash(3681122061, -1066.33, -2982.53, 12.9646, 0, -0, 141.449, -1, 9);
	PlaceObjectByHash(3681122061, -1053.01, -2960.01, 12.9646, 0, 0, -28.5532, -1, 9);
	PlaceObjectByHash(3681122061, -1048.58, -2951.88, 12.9646, 0, 0, -28.5532, -1, 9);
	PlaceObjectByHash(3681122061, -1044.16, -2943.76, 12.9646, 0, 0, -28.5532, -1, 9);
	PlaceObjectByHash(3681122061, -1039.74, -2935.64, 12.9646, 0, 0, -28.5532, -1, 9);
	PlaceObjectByHash(3681122061, -1035.5, -2927.86, 12.9646, 0, 0, -28.5532, -1, 9);
	PlaceObjectByHash(3608473212, -1063.23, -2993.67, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1067.37, -2998.06, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1063.7, -2994.67, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1064.21, -2995.73, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1064.71, -2996.8, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1065.21, -2997.84, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1067.1, -2999.45, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1065.43, -3000.24, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1068.29, -3000.06, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1065.92, -3001.18, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1066.44, -3002.28, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1065.35, -3002.77, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1065.6, -3003.96, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1066.11, -3005.04, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1064.21, -2999.56, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1069.53, -3000.82, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1070.75, -3001.52, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1068.76, -3002.46, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1069.29, -3003.54, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1068.44, -3005.23, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1071.58, -3003.74, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(2475986526, -1072.98, -3006.81, 16.0846, 0, 0, -26.0348, -1, 9);
	PlaceObjectByHash(3608473212, -1072.44, -3002.05, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(3608473212, -1073.73, -3002.72, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(2475986526, -1076.54, -3005.07, 16.0846, 0, 0, -26.0348, -1, 9);
	PlaceObjectByHash(2475986526, -1078.92, -3009.92, 13.7046, 0, 0, -26.0348, -1, 9);
	PlaceObjectByHash(2475986526, -1075.31, -3011.69, 13.7046, 0, 0, -26.0348, -1, 9);
	PlaceObjectByHash(2475986526, -1069.34, -3008.59, 16.0846, 0, 0, -26.0348, -1, 9);
	PlaceObjectByHash(2475986526, -1071.71, -3013.45, 13.7046, 0, 0, -26.0348, -1, 9);
	PlaceObjectByHash(2475986526, -1068.14, -3015.2, 13.7046, 0, 0, -26.0348, -1, 9);
	PlaceObjectByHash(3608473212, -1065.36, -3006.66, 15.3449, 0, 0, -25.1145, -1, 9);
	PlaceObjectByHash(2475986526, -1065.75, -3010.35, 16.0846, 0, 0, -26.0348, -1, 9);
}
void LoadMapMod11()
{
	PlaceObjectByHash(3966705493, -1041.89, -3219.51, 10.1797, -2.43331, 5.32208, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1037.79, -3221.47, 10.3641, -2.43331, 5.32208, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1034.16, -3223.3, 10.5366, -2.43331, 5.32208, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1036.76, -3219.45, 10.1526, -2.43331, 5.32208, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1033.12, -3221.28, 10.3251, -2.43331, 5.32208, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1029.37, -3225.6, 11.1956, -11.6033, 5.32207, 62.9335, -1, 10);
	PlaceObjectByHash(3966705493, -1028.33, -3223.58, 10.9842, -11.6033, 5.32207, 62.9335, -1, 10);
	PlaceObjectByHash(3966705493, -1024.27, -3225.54, 12.1104, -18.1533, 5.32205, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1025.44, -3227.83, 12.3497, -18.1533, 5.32205, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1020.36, -3230.06, 15.7972, -40.4234, 5.32214, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1019.22, -3227.83, 15.5634, -40.4234, 5.32214, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1014.85, -3229.56, 20.4393, -50.9034, 5.3221, 62.9337, -1, 10);
	PlaceObjectByHash(3966705493, -1016.07, -3231.95, 20.6898, -50.9034, 5.3221, 62.9337, -1, 10);
	PlaceObjectByHash(3966705493, -1012.88, -3232.96, 26.0664, -64.0034, 5.32209, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1011.63, -3230.51, 25.8104, -64.0034, 5.32209, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1009.27, -3231.06, 32.0819, -73.1735, 5.32204, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1010.52, -3233.51, 32.3379, -73.1735, 5.32214, 62.9337, -1, 10);
	PlaceObjectByHash(3966705493, -1009.36, -3233.48, 38.2311, -83.6535, 5.32208, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1008.09, -3230.98, 37.9695, -83.6535, 5.32208, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1007.71, -3230.43, 44.185, -92.8235, 6.63212, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1009.05, -3228.93, 49.9682, -119.024, 6.63217, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1008.93, -3232.81, 44.4969, -92.8235, 6.63212, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1010.27, -3231.31, 50.2801, -119.024, 6.63217, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1011.96, -3226.91, 54.0691, -142.604, 6.6321, 62.9337, -1, 10);
	PlaceObjectByHash(3966705493, -1013.1, -3229.14, 54.3602, -142.604, 6.6321, 62.9337, -1, 10);
	PlaceObjectByHash(3966705493, -1017.49, -3226.51, 57.2125, -159.634, 6.63211, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1022.14, -3223.91, 58.9186, -168.804, 6.63213, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1035.97, -3216.05, 58.7162, 155.826, 1.39214, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1031.37, -3218.71, 60.1775, 176.786, 6.63213, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1026.33, -3221.63, 59.8766, -168.804, 6.63212, 60.3136, -1, 10);
	PlaceObjectByHash(3966705493, -1020.98, -3221.63, 58.6206, -168.804, 6.63213, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1024.97, -3219.25, 59.5578, -168.804, 6.63212, 60.3136, -1, 10);
	PlaceObjectByHash(3966705493, -1016.33, -3224.24, 56.9145, -159.634, 6.63211, 62.9336, -1, 10);
	PlaceObjectByHash(3966705493, -1029.99, -3216.28, 59.8517, 176.786, 6.63213, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1029.99, -3216.28, 59.8517, 176.786, 6.63213, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1034.73, -3213.86, 58.655, 155.826, 1.39214, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1039.18, -3211.42, 55.2255, 138.796, 1.39206, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1039.18, -3211.42, 55.2255, 138.796, 1.39206, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1040.42, -3213.61, 55.2867, 138.796, 1.39206, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1044.34, -3211.51, 50.6082, 128.316, 1.39213, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1043.09, -3209.33, 50.547, 128.316, 1.39213, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1046.16, -3207.74, 45.1535, 117.837, 1.39215, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1048.17, -3206.74, 39.6252, 104.737, 1.39214, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1048.92, -3206.44, 33.1586, 87.6005, 0.0914728, 60.6227, -1, 10);
	PlaceObjectByHash(3966705493, -1048.18, -3206.88, 26.5446, 77.3408, 0.0913896, 60.6229, -1, 10);
	PlaceObjectByHash(3966705493, -1049.44, -3209.13, 26.5487, 77.3407, 0.0913427, 60.6228, -1, 10);
	PlaceObjectByHash(3966705493, -1047.3, -3210.37, 21.3947, 56.6411, 0.0914017, 58.823, -1, 10);
	PlaceObjectByHash(3966705493, -1047.3, -3210.37, 21.3947, 56.6411, 0.0914017, 58.823, -1, 10);
	PlaceObjectByHash(3966705493, -1045.93, -3208.12, 21.3905, 56.6411, 0.0914017, 58.823, -1, 10);
	PlaceObjectByHash(3966705493, -1042.61, -3210.12, 16.8766, 42.1517, 0.0913785, 58.8231, -1, 10);
	PlaceObjectByHash(3966705493, -1038.64, -3212.63, 13.6141, 28.2018, 0.0914187, 58.8231, -1, 10);
	PlaceObjectByHash(3966705493, -1039.97, -3214.83, 13.6182, 28.2018, 0.0914187, 58.8231, -1, 10);
	PlaceObjectByHash(3966705493, -1034.82, -3217.71, 11.1985, 16.4116, 0.0913871, 69.303, -1, 10);
	PlaceObjectByHash(3966705493, -1033.53, -3215.55, 11.1081, 16.4117, 0.0913619, 66.683, -1, 10);
	PlaceObjectByHash(3966705493, -1043.97, -3212.37, 16.8808, 42.1517, 0.0913785, 58.8231, -1, 10);
	PlaceObjectByHash(3966705493, -1050.19, -3208.69, 33.1627, 87.6005, 0.0914728, 60.6227, -1, 10);
	PlaceObjectByHash(3966705493, -1049.45, -3208.98, 39.6879, 104.737, 1.39214, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1047.44, -3209.98, 45.2161, 117.837, 1.39215, 60.3137, -1, 10);
	PlaceObjectByHash(3966705493, -1047.44, -3209.98, 45.2161, 117.837, 1.39215, 60.3137, -1, 10);
}
void LoadMapMod12()
{
	PlaceObjectByHash(3681122061, -82.9657, -818.944, 325.175, 0, -0, 91.03, -1, 11);
	PlaceObjectByHash(3681122061, -91.0941, -819.089, 322.355, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -98.36, -819.224, 316.632, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -105.626, -819.358, 310.91, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -112.892, -819.492, 305.187, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -120.158, -819.626, 299.464, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -127.424, -819.761, 293.741, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -134.69, -819.895, 288.018, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -141.956, -820.029, 282.296, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -149.222, -820.163, 276.573, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -156.487, -820.298, 270.85, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -163.753, -820.432, 265.127, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -171.019, -820.566, 259.404, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -178.285, -820.701, 253.682, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -185.551, -820.835, 247.959, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -192.817, -820.969, 242.236, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -200.083, -821.103, 236.513, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -207.349, -821.238, 230.79, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -214.615, -821.372, 225.068, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -221.881, -821.506, 219.345, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -229.147, -821.641, 213.622, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -236.413, -821.775, 207.899, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -243.679, -821.909, 202.176, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -250.945, -822.043, 196.453, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -258.21, -822.178, 190.731, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -265.476, -822.312, 185.008, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -287.274, -822.715, 167.839, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -280.008, -822.58, 173.562, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -272.742, -822.446, 179.285, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -294.54, -822.849, 162.117, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -301.806, -822.983, 156.394, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -309.072, -823.118, 150.671, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -316.338, -823.252, 144.948, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -323.604, -823.386, 139.225, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -330.87, -823.52, 133.503, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -338.136, -823.655, 127.78, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -345.402, -823.789, 122.057, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -352.668, -823.923, 116.334, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -359.934, -824.057, 110.611, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -367.199, -824.192, 104.889, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -374.465, -824.326, 99.1657, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -381.731, -824.46, 93.4429, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -388.997, -824.595, 87.7201, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -396.263, -824.729, 81.9973, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -403.529, -824.863, 76.2745, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -411.479, -825.022, 68.7971, -19.78, -3.43377e-005, 91.1094, -1, 11);
	PlaceObjectByHash(3681122061, -410.795, -824.997, 70.5517, -38.2199, 0.00787841, 91.0529, -1, 11);
	PlaceObjectByHash(3681122061, -411.96, -825.029, 69.097, -27.6, 1.15259e-005, 91.1095, -1, 11);
	PlaceObjectByHash(3681122061, -412.719, -825.046, 67.8516, -10.58, -2.92151e-006, 91.1095, -1, 11);
	PlaceObjectByHash(3681122061, -413.903, -825.068, 67.2075, -3.21999, 5.66959e-007, 91.1095, -1, 11);
	PlaceObjectByHash(3681122061, -415.378, -825.099, 66.7734, 3.68002, -4.58236e-006, 91.1095, -1, 11);
	PlaceObjectByHash(3681122061, -416.883, -825.126, 66.57, 9.66002, -8.44435e-006, 91.1096, -1, 11);
	PlaceObjectByHash(3681122061, -418.526, -825.157, 66.5571, 15.64, -1.80093e-005, 91.1095, -1, 11);
	PlaceObjectByHash(3681122061, -419.945, -825.184, 66.6727, 20.7001, 8.69782e-006, 91.1094, -1, 11);
	PlaceObjectByHash(3681122061, -421.727, -825.218, 67.0936, 25.7601, -2.09975e-005, 91.1095, -1, 11);
	PlaceObjectByHash(3681122061, -422.006, -825.234, 66.966, 30.8199, 0.114757, 90.6829, -1, 11);
	PlaceObjectByHash(3681122061, -429.913, -825.328, 71.6856, 30.8199, 0.114757, 90.6829, -1, 11);
}



static const char* vehModels[] = {
	"NINEF", "NINEF2", "BLISTA", "ASEA", "ASEA2", "T20", "BRAWLER", "COQUETTE3", "VINDICATOR"
	"COACH", "AIRBUS", "ASTEROPE", "AIRTUG", "AMBULANCE", "BARRACKS", "BARRACKS2", "BALLER", "BALLER2",
	"BJXL", "BANSHEE", "BENSON", "BFINJECTION", "BIFF", "BLAZER", "BLAZER2", "BLAZER3", "BISON", "BISON2",
	"BISON3", "BOXVILLE", "BOXVILLE2", "BOXVILLE3", "BOBCATXL", "BODHI2", "BUCCANEER", "BUFFALO", "BUFFALO2", "BULLDOZER",
	"BULLET", "BURRITO", "BURRITO2", "BURRITO3", "BURRITO4", "BURRITO5", "CAVALCADE", "CAVALCADE2", "POLICET",
	"GBURRITO", "CABLECAR", "CADDY", "CADDY2", "CAMPER", "CARBONIZZARE", "CHEETAH", "COMET2", "COGCABRIO", "COQUETTE",
	"CUTTER", "GRESLEY", "DILETTANTE", "DILETTANTE2", "DUNE", "DUNE2", "HOTKNIFE", "DLOADER", "DUBSTA", "DUBSTA2",
	"DUMP", "RUBBLE", "DOCKTUG", "DOMINATOR", "EMPEROR", "EMPEROR2", "EMPEROR3", "ENTITYXF", "EXEMPLAR", "ELEGY2",
	"F620", "FBI", "FBI2", "FELON", "FELON2", "FELTZER2", "FIRETRUK", "FLATBED", "FORKLIFT", "FQ2",
	"FUSILADE", "FUGITIVE", "FUTO", "GRANGER", "GAUNTLET", "HABANERO", "HAULER", "HANDLER", "INFERNUS", "INGOT",
	"INTRUDER", "ISSI2", "JACKAL", "JOURNEY", "JB700", "KHAMELION", "LANDSTALKER", "LGUARD", "MANANA", "MESA",
	"MESA2", "MESA3", "CRUSADER", "MINIVAN", "MIXER", "MIXER2", "MONROE", "MOWER", "MULE", "MULE2",
	"ORACLE", "ORACLE2", "PACKER", "PATRIOT", "PBUS", "PENUMBRA", "PEYOTE", "PHANTOM", "PHOENIX", "PICADOR",
	"POUNDER", "POLICE", "POLICE4", "POLICE2", "POLICE3", "POLICEOLD1", "POLICEOLD2", "PONY", "PONY2", "PRAIRIE",
	"PRANGER", "PREMIER", "PRIMO", "RANCHERXL", "RANCHERXL2", "RAPIDGT", "RAPIDGT2", "RADI", "RATLOADER",
	"REBEL", "REGINA", "REBEL2", "RENTALBUS", "RUINER", "RUMPO", "RUMPO2", "RHINO", "RIOT", "RIPLEY",
	"ROCOTO", "ROMERO", "SABREGT", "SADLER", "SADLER2", "SANDKING", "SANDKING2", "SCHAFTER2", "SCHWARZER", "SCRAP",
	"SEMINOLE", "SENTINEL", "SENTINEL2", "ZION", "ZION2", "SERRANO", "SHERIFF", "SHERIFF2", "SPEEDO", "SPEEDO2",
	"STANIER", "STINGER", "STINGERGT", "STOCKADE", "STOCKADE3", "STRATUM", "SULTAN", "SUPERD", "SURANO", "SURFER",
	"SURFER2", "SURGE", "TACO", "TAILGATER", "TAXI", "TRASH", "TRACTOR", "TRACTOR2", "TRACTOR3",
	"TIPTRUCK", "TIPTRUCK2", "TORNADO", "TORNADO2", "TORNADO3", "TORNADO4", "TOURBUS", "TOWTRUCK", "TOWTRUCK2",
	"UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3", "VOODOO2", "WASHINGTON", "STRETCH", "YOUGA", "ZTYPE", "SANCHEZ", "SANCHEZ2",
	"POLICEB", "AKUMA", "CARBONRS", "HEXER", "NEMESIS", "ADDER", "VOLTIC", "VACCA", "BIFTA",
	"BAGGER", "BATI", "BATI2", "RUFFIAN", "DAEMON", "DOUBLE", "PCJ", "VADER", "VIGERO", "FAGGIO2",
	"PARADISE", "KALAHARI", "JESTER", "TURISMOR", "ALPHA", "HUNTLEY", "THRUST", "MASSACRO",
	"MASSACRO2", "ZENTORNO", "BLADE", "GLENDALE", "PANTO", "PIGALLE", "WARRENER", "RHAPSODY", "DUBSTA3", "MONSTER",
	"SOVEREIGN", "INNOVATION", "HAKUCHOU", "FUROREGT", "COQUETTE2", "BTYPE", "BUFFALO3", "DOMINATOR2", "GAUNTLET2",
	"MARSHALL", "DUKES", "DUKES2", "STALION", "STALION2", "BLISTA2", "BLISTA3", "VIRGO", "WINDSOR",
	"INSURGENT", "INSURGENT2", "TECHNICAL", "KURUMA", "KURUMA2", "JESTER2", "CASCO",
	"GUARDIAN", "ENDURO", "LECTRO", "SLAMVAN", "SLAMVAN2", "RATLOADER2", "FELTZER3", "OSIRIS"
};


static const char* beachbum[] = {
	"BIFTA", "KALAHARI", "PARADISE"
};
static const char* valetinesmassacre[] = {
	"BTYPE"
};
static const char* business[] = {
	"ALPHA", "JESTER", "TURISMOR", "VESTRA"
};
static const char* highlife[] = {
	"THRUST", "ZENTORNO", "MASSACRO", "HUNTLEY"
};
static const char* notahipster[] = {
	"PIGALLE", "BLADE", "RHAPSODY", "WARR",
	"GLENDALE", "PANTO", "DUBSTA3"
};
static const char* independence[] = {
	"SOVEREIGN", "MONSTER"
};
static const char* saflightschool[] = {
	"BESRA", "MILJET", "SWIFT", "COQUETTE2"
};
static const char* lastteamstanding[] = {
	"HAKUCHOU", "INNOVATION", "FUROREGT"
};
static const char* festive2014[] = {
	"SLAMVAN", "RATLOADER", "MASSACRO2",
	"JESTER2"
};
static const char* heist[] = {
	"ENDURO", "GUARDIAN", "KURUMA", "KURUMA2",
	"CASCO", "VELUM2", "HYDRA", "INSURGENT",
	"INSURGENT2", "VALKYRIE", "MULE2", "TECHNICAL2",
	"BOXVILLE", "BOXVILLE2", "BOXVILLE3", "GBURRITO",
	"GBURRITO2", "SAVAGE", "LECTRO", "TRASH2",
	"TANKERCAR", "BARRACKS2"
};
static const char* illgg[] = {
	"OSIRIS", "VIRGO", "WINDSOR", "STINGERGT",
	"LUXOR2", "SWIFT2", "BRAWLER", "CHINO",
	"COQUETTE3", "T20", "TORO", "TORO2",
	"VINDICATOR"
};
static const char* lowriders[] = {
	"BUCCANEER2", "CHINO2", "FACTION", "FACTION2",
	"MOONBEAM", "MOONBEAM2", "PRIMO2", "VOODOO2"
};
static const char* halloween[] = {
	"BTYPE2", "LURCHER"
};
static const char* executives[] = {
	"SUPERVOLITO", "SUPERVOLITO2", "LIMO2",
	"SCHAFTER3", "SCHAFTER4", "SCHAFTER5",
	"SCHAFTER6", "NIGHTSHADE", "MAMBA",
	"VERLIERER2", "COGNOSCENTI", "COGNOSCENTI2",
	"COG55", "COG552", "BALLER3", "BALLER4", "BALLER5",
	"BALLER6", "DINGHY2", "DINGHY3", "DINGHY4",
	"SEASHARK2", "SEASHARK3", "SPEEDER2", "TROPIC2",
	"TORO2"
};
static const char* festive2015[] = {
	"TAMPA"
};
static const char* dropzone[] = {
	"BANSHEE2", "SULTANRS"
};
static const char* bemyvalentine[] = {
	"BTYPE3"
};
static const char* customclassics[] = {
	"VIRGO2", "VIRGO3", "SLAMVAN2", "FACTION3",
	"TORNADO2", "MINIVAN2", "SABREGT2"
};
static const char* financefelony[] = {
	"XLS", "XLS2", "RUMPO2", "NIMBUS", "TUG",
	"VOLATUS", "WINDSOR2", "BESTIAGTS",
	"BRICKADE", "REAPER", "FMJ"
};
static const char* CUNNINGSTUNTS1[] = {
	"BF400", "BRIOSO", "CLIFFHANGER", "CONTENDER", "GARGOYLE", "LE7B", "LYNX",
	"OMNIS", "RALLYTRUCK", "SHEAVA", "TAMPA2", "TROPHYTRUCK", "TROPHYTRUCK2",
	"TROPOS", "TYRUS"
};
static const char* bikers[] = {
	"AVARUS", "MANCHEZ", "CHIMERA", "BLAZER2", "FAGGIO2", "FAGGIO3",
	"DEFILER", "HAKUCHOU2", "NIGHTBLADE", "RATBIKE", "WOLFSBANE",
	"ZOMBIEB", "VORTEX", "SANCTUS", "TORNADO3", "SHOTARO", "ESSKEY",
	"YOUGA2"
};
static const char* IMPORTEXPORT1[] = {
	"BLAZER5", "BOXVILLE5", "COMET3", "DIABLOUS", "DIABLOUS2", "DUNE4", "DUNE5",
	"ELEGY", "FCR", "FCR2", "ITALIGTB", "ITALIGTB2", "NERO", "NERO2", "PENETRATOR",
	"PHANTOM2", "RUINER2", "SPECTER", "SPECTER2", "TECHNICAL2", "TEMPESTA", "VOLTIC2",
	"WASTELANDER"
};
static const char* specialvcircuit[] = {
	"GP1", "RUSTON", "INFERNUS2", "TURISMO2"
};
static const char* GUNRUNNING1[] = {
	"APC", "ARDENT", "CADDY3", "CHEETAH2", "DUNE3", "HALFTRACK", "HAULER2",
	"INSUGENT3", "NIGHTSHARK", "OPPRESSOR", "PHANTOM3", "TAMPA3", "TECHNICAL3",
	"TORERO", "TRAILERLARGE", "TRAILERS4", "TRAILERSMALL2", "VAGNER", "XA21"
};
static const char* SMUGLERSRUN1[] = {
	"havok", "rapidgt3", "retinue", "vigilante", "visione", "cyclone", "ALPHAZ1",
	"BOMBUSHKA", "HOWARD", "HUNTER", "MICROLIGHT", "MOGUL", "MOLOTOK", "NOKOTA", "PYRO",
	"ROGUE", "SEABREEZE", "STARLING", "TULA"
};
static const char* Doomsday1[] = {
	"autarch", "avenger", "barrage", "chernobog", "comet4", "comet5",
	"deluxo", "gt500", "hermes", "hustler", "kamacho","khanjali",
	"neon", "pariah", "raiden", "revolter", "riata", "riot2", "savestra",
	"sc1", "sentinel3", "streiter", "stromberg", "thruster", "viseris",
	"volatol", "yosemite", "z190"
};
static const char* SOUTHERNSAN[] = {
	"caracara", "cheburek", "dominator3", "ellie", "entity2", "fagaloa", "flashgt",
	"gb200", "hotring", "issi3", "jester3", "michelli", "seasparrow", "taipan", "tezeract",
	"tyrant"
};
static const char* afterhrs[] = {
	"stafford", "scramjet", "strikeforce", "terbyte",
	"pbus2", "oppressor2", "pounder2", "speedo4",
	"freecrawler", "mule4", "menacer", "blimp3",
	"swinger", "patriot2"
};
static const char* arenawar[] = {
	"bruiser", "bruiser2", "bruiser3", "brutus", "brutus2",
	"brutus3", "cerberus", "cerberus2", "cerberus3", "clique",
	"deathbike", "deathbike2", "deathbike3", "deveste", "deviant",
	"dominator4", "dominator5", "dominator6", "impaler", "impaler2",
	"impaler3", "issi4", "issi5", "issi6", "italigto", "monster3",
	"monster4", "monster5", "rcbandito", "scarab", "scarab2", "scarab3",
	"schlagen", "slamvan4", "slamvan5", "slamvan6", "toros", "tulip",
	"vamos", "zr380", "zr3802", "zr3803"
};
static const char* casinoheist[] = {
	"FORMULA", "FORMULA2", "FURIA", "IMORGON",
	"KOMODA", "REBLA", "STRYDER", "VSTR",
	"ASBO", "EVERON", "KANJO", "OUTLAW",
	"RETINUE2", "SUGOI", "SULTAN2", "VAGRANT",
	"YOSEMITE2", "JB7002", "MINITANK", "ZHABA",
};
static const char* casino_vehicles[] = {
	"CARACARA2", "DRAFTER", "DYNASTY", "EMERUS", "GAUNTLET3",
	"GAUNTLET4", "HELLION", "ISSI7", "JUGULAR", "KRIEGER",
	"LOCUST", "NEBULA", "NEO", "NOVAK", "PARAGON", "PARAGON2",
	"PEYOTE2", "RROCKET", "S80", "THRAX", "ZION3", "ZORRUSSO"
};
static const char* summerspecial[] = {
	"CLUB", "COQUETTE4", "DUKES3", "GAUNTLET5",
	"GLENDALE2", "LANDSTALKER2", "MANANA2", "OPENWHEEL1",
	"OPENWHEEL2", "PENUMBRA2", "PEYOTE3", "SEMINOLE2",
	"TIGON", "YOSEMITE3", "YOUGA3"
};


void ResetAppearance()
{
	PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
	PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
}

char* call22;
char* call2oo;
char* nameoo;
void PTFXCALL(char* call1, char* call2, char* name)
{
	call22 = call1;
	call2oo = call2;
	nameoo = name;

	STREAMING::REQUEST_NAMED_PTFX_ASSET(call1);
	GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL(call2);
	GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(name, PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);

}

bool cstrcmp(const char* s1, const char* s2)
{
	while (*s1 && (*s1 == *s2))
		s1++, s2++;
	if (*(const unsigned char*)s1 - *(const unsigned char*)s2 == 0)
		return true;
	else
		return false;
}

int fam;
void changeAppearance(char* family, int model, int texture)
{
	if (cstrcmp(family, "HATS") || cstrcmp(family, "GLASSES") || cstrcmp(family, "EARS"))
	{
		if (cstrcmp(family, "HATS"))
			fam = 0;
		else if (cstrcmp(family, "GLASSES"))
			fam = 1;
		else if (cstrcmp(family, "EARS"))
			fam = 2;
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), fam, model - 1, texture, 1);
	}
	else
	{
		if (cstrcmp(family, "FACE"))
			fam = 0;
		else if (cstrcmp(family, "MASK"))
			fam = 1;
		else if (cstrcmp(family, "HAIR"))
			fam = 2;
		else if (cstrcmp(family, "TORSO"))
			fam = 3;
		else if (cstrcmp(family, "LEGS"))
			fam = 4;
		else if (cstrcmp(family, "HANDS"))
			fam = 5;
		else if (cstrcmp(family, "SHOES"))
			fam = 6;
		else if (cstrcmp(family, "SPECIAL1"))
			fam = 7;
		else if (cstrcmp(family, "SPECIAL2"))
			fam = 8;
		else if (cstrcmp(family, "SPECIAL3"))
			fam = 9;
		else if (cstrcmp(family, "TEXTURE"))
			fam = 10;
		else if (cstrcmp(family, "TORSO2"))
			fam = 11;
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), fam, model, texture, 0);
	}
}



static struct {
	const char* vehiclePreviewDict;
	const char* vehicleName;
} VehiclePreviews[332] = {
	{ "lgm_default", "adder" },
	{ "lgm_default", "banshee" },
	{ "lgm_default", "bullet" },
	{ "lgm_default", "carbon" },
	{ "lgm_default", "carboniz" },
	{ "lgm_default", "cheetah" },
	{ "lgm_default", "cogcabri" },
	{ "lgm_default", "comet2" },
	{ "lgm_default", "coquette" },
	{ "lgm_default", "elegy2" },
	{ "lgm_default", "entityxf" },
	{ "lgm_default", "exemplar" },
	{ "lgm_default", "feltzer" },
	{ "lgm_default", "hotknife" },
	{ "lgm_default", "infernus" },
	{ "lgm_default", "jb700" },
	{ "lgm_default", "khamel" },
	{ "lgm_default", "monroe" },
	{ "lgm_default", "ninef" },
	{ "lgm_default", "ninef2" },
	{ "lgm_default", "rapidgt" },
	{ "lgm_default", "rapidgt2" },
	{ "lgm_default", "stinger" },
	{ "lgm_default", "stingerg" },
	{ "lgm_default", "superd" },
	{ "lgm_default", "surano_convertable" },
	{ "lgm_default", "vacca" },
	{ "lgm_default", "voltic_tless" },
	{ "lgm_default", "ztype" },
	{ "lgm_dlc_apartments", "baller3" },
	{ "lgm_dlc_apartments", "baller4" },
	{ "lgm_dlc_apartments", "voltic_tless" },
	{ "lgm_dlc_apartments", "cog55" },
	{ "lgm_dlc_apartments", "cognosc" },
	{ "lgm_dlc_apartments", "mamba" },
	{ "lgm_dlc_apartments", "niteshad" },
	{ "lgm_dlc_apartments", "schafter3" },
	{ "lgm_dlc_apartments", "schafter4" },
	{ "lgm_dlc_apartments", "verlier" },
	{ "lgm_dlc_arena", "cliquexmas" },
	{ "lgm_dlc_arena", "deveste" },
	{ "lgm_dlc_arena", "deviant" },
	{ "lgm_dlc_arena", "italigto" },
	{ "lgm_dlc_arena", "schlagen" },
	{ "lgm_dlc_arena", "toros" },
	{ "lgm_dlc_arena", "clique" },
	{ "lgm_dlc_assault", "flashgt" },
	{ "lgm_dlc_assault", "gb200" },
	{ "lgm_dlc_assault", "jester3" },
	{ "lgm_dlc_assault", "taipan" },
	{ "lgm_dlc_assault", "tezeract" },
	{ "lgm_dlc_assault", "tyrant" },
	{ "lgm_dlc_assault", "entity2" },
	{ "lgm_dlc_battle", "freecrawler" },
	{ "lgm_dlc_battle", "stafford" },
	{ "lgm_dlc_battle", "swinger" },
	{ "lgm_dlc_biker", "hakuchou2" },
	{ "lgm_dlc_biker", "raptor" },
	{ "lgm_dlc_biker", "shotaro" },
	{ "lgm_dlc_business", "alpha" },
	{ "lgm_dlc_business", "jester" },
	{ "lgm_dlc_business", "turismor" },
	{ "lgm_dlc_business2", "banshee_tless" },
	{ "lgm_dlc_business2", "coquette_tless" },
	{ "lgm_dlc_business2", "huntley" },
	{ "lgm_dlc_business2", "massacro" },
	{ "lgm_dlc_business2", "stinger_tless" },
	{ "lgm_dlc_business2", "thrust" },
	{ "lgm_dlc_business2", "voltic_htop" },
	{ "lgm_dlc_business2", "zentorno" },
	{ "lgm_dlc_casinoheist", "imorgon" },
	{ "lgm_dlc_casinoheist", "komoda" },
	{ "lgm_dlc_casinoheist", "rebla" },
	{ "lgm_dlc_casinoheist", "stryder" },
	{ "lgm_dlc_casinoheist", "vstr" },
	{ "lgm_dlc_casinoheist", "formula" },
	{ "lgm_dlc_casinoheist", "formula2" },
	{ "lgm_dlc_casinoheist", "furia" },
	{ "lgm_dlc_executive1", "bestiagts" },
	{ "lgm_dlc_executive1", "fmj" },
	{ "lgm_dlc_executive1", "pfister811" },
	{ "lgm_dlc_executive1", "prototipo" },
	{ "lgm_dlc_executive1", "reaper" },
	{ "lgm_dlc_executive1", "seven70" },
	{ "lgm_dlc_executive1", "windsor2" },
	{ "lgm_dlc_executive1", "xls_web_vehicle_regular_b" },
	{ "lgm_dlc_gunrunning", "vagner" },
	{ "lgm_dlc_gunrunning", "xa21" },
	{ "lgm_dlc_gunrunning", "cheetah2" },
	{ "lgm_dlc_gunrunning", "torero" },
	{ "lgm_dlc_heist", "casco" },
	{ "lgm_dlc_heist", "lectro" },
	{ "lgm_dlc_heist4", "italirsx" },
	{ "lgm_dlc_importexport", "penetrator" },
	{ "lgm_dlc_importexport", "tempesta" },
	{ "lgm_dlc_lts_creator", "furore" },
	{ "lgm_dlc_luxe", "brawler" },
	{ "lgm_dlc_luxe", "chino" },
	{ "lgm_dlc_luxe", "coquette3" },
	{ "lgm_dlc_luxe", "feltzer3" },
	{ "lgm_dlc_luxe", "osiris" },
	{ "lgm_dlc_luxe", "t20" },
	{ "lgm_dlc_luxe", "vindicator" },
	{ "lgm_dlc_luxe", "virgo" },
	{ "lgm_dlc_luxe", "windsor_windsor_lgm_1_b" },
	{ "lgm_dlc_pilot", "coquette2" },
	{ "lgm_dlc_pilot", "coquette2_tless" },
	{ "lgm_dlc_specialraces", "gp1" },
	{ "lgm_dlc_specialraces", "infernus2" },
	{ "lgm_dlc_specialraces", "ruston" },
	{ "lgm_dlc_specialraces", "turismo2" },
	{ "lgm_dlc_security", "baller7" },
	{ "lgm_dlc_security", "champion" },
	{ "lgm_dlc_security", "cinquemila" },
	{ "lgm_dlc_security", "comet7" },
	{ "lgm_dlc_security", "deity" },
	{ "lgm_dlc_security", "ignus" },
	{ "lgm_dlc_security", "jubilee" },
	{ "lgm_dlc_security", "reever" },
	{ "lgm_dlc_security", "shinobi" },
	{ "lgm_dlc_security", "zeno" },
	{ "lgm_dlc_security", "astron" },
	{ "lgm_dlc_smuggler", "cyclone" },
	{ "lgm_dlc_smuggler", "rapidgt3" },
	{ "lgm_dlc_smuggler", "visione" },
	{ "lgm_dlc_stunt", "le7b_lms_le7b_livery_1_b" },
	{ "lgm_dlc_stunt", "lynx_lms_lynx_livery_2_b" },
	{ "lgm_dlc_stunt", "sheava_lms_sheava_livery_2_b" },
	{ "lgm_dlc_stunt", "tyrus_lms_tyrus_livery_1_b" },
	{ "lgm_dlc_summer2020", "openwheel2" },
	{ "lgm_dlc_summer2020", "tigon" },
	{ "lgm_dlc_summer2020", "coquette4" },
	{ "lgm_dlc_summer2020", "openwheel1" },
	{ "lgm_dlc_tuner", "cypher" },
	{ "lgm_dlc_tuner", "euros" },
	{ "lgm_dlc_tuner", "growler" },
	{ "lgm_dlc_tuner", "jester4" },
	{ "lgm_dlc_tuner", "tailgater2" },
	{ "lgm_dlc_tuner", "vectre" },
	{ "lgm_dlc_tuner", "zr350" },
	{ "lgm_dlc_tuner", "comet6" },
	{ "lgm_dlc_valentines", "roosevelt" },
	{ "lgm_dlc_valentines2", "roosevelt2" },
	{ "lgm_dlc_vinewood", "jugular" },
	{ "lgm_dlc_vinewood", "krieger" },
	{ "lgm_dlc_vinewood", "locust" },
	{ "lgm_dlc_vinewood", "neo" },
	{ "lgm_dlc_vinewood", "novak" },
	{ "lgm_dlc_vinewood", "paragon" },
	{ "lgm_dlc_vinewood", "rrocket" },
	{ "lgm_dlc_vinewood", "s80" },
	{ "lgm_dlc_vinewood", "thrax" },
	{ "lgm_dlc_vinewood", "zorrusso" },
	{ "lgm_dlc_vinewood", "drafter" },
	{ "lgm_dlc_vinewood", "emerus" },
	{ "lsc_default", "buccaneer2" },
	{ "lsc_default", "chino2" },
	{ "lsc_default", "faction2" },
	{ "lsc_default", "moonbeam2" },
	{ "lsc_default", "primo2" },
	{ "lsc_default", "voodoo" },
	{ "lsc_dlc_import_export", "comet3" },
	{ "lsc_dlc_import_export", "diablous2" },
	{ "lsc_dlc_import_export", "elegy" },
	{ "lsc_dlc_import_export", "fcr2" },
	{ "lsc_dlc_import_export", "italiagtb2" },
	{ "lsc_dlc_import_export", "nero2" },
	{ "lsc_dlc_import_export", "specter2" },
	{ "lsc_jan2016", "banshee2" },
	{ "lsc_jan2016", "sultan2" },
	{ "lsc_lowrider2", "faction3" },
	{ "lsc_lowrider2", "minivan2" },
	{ "lsc_lowrider2", "sabregt2" },
	{ "lsc_lowrider2", "slamvan3" },
	{ "lsc_lowrider2", "tornado5" },
	{ "lsc_lowrider2", "virgo2" },
	{ "sssa_default", "akuma" },
	{ "sssa_default", "baller2" },
	{ "sssa_default", "banshee" },
	{ "sssa_default", "bati" },
	{ "sssa_default", "bati2_sss_cerveza_b" },
	{ "sssa_default", "bfinject" },
	{ "sssa_default", "bifta" },
	{ "sssa_default", "bison" },
	{ "sssa_default", "blazer" },
	{ "sssa_default", "bodhi" },
	{ "sssa_default", "cavcade" },
	{ "sssa_default", "comet2" },
	{ "sssa_default", "dilettan" },
	{ "sssa_default", "double" },
	{ "sssa_default", "dune" },
	{ "sssa_default", "exemplar" },
	{ "sssa_default", "faggio" },
	{ "sssa_default", "felon" },
	{ "sssa_default", "felon2" },
	{ "sssa_default", "feltzer" },
	{ "sssa_default", "fugitive" },
	{ "sssa_default", "gauntlet" },
	{ "sssa_default", "hexer" },
	{ "sssa_default", "infernus" },
	{ "sssa_default", "issi2" },
	{ "sssa_default", "kalahari" },
	{ "sssa_default", "ninef" },
	{ "sssa_default", "oracle" },
	{ "sssa_default", "paradise_sss_logger_b" },
	{ "sssa_default", "pcj" },
	{ "sssa_default", "rebel" },
	{ "sssa_default", "rocoto" },
	{ "sssa_default", "ruffian" },
	{ "sssa_default", "sadler" },
	{ "sssa_default", "sanchez_sss_atomic_b" },
	{ "sssa_default", "sanchez2" },
	{ "sssa_default", "sandkin2" },
	{ "sssa_default", "sandking" },
	{ "sssa_default", "schwarze" },
	{ "sssa_default", "superd" },
	{ "sssa_default", "surano" },
	{ "sssa_default", "vacca" },
	{ "sssa_default", "vader" },
	{ "sssa_default", "vigero" },
	{ "sssa_default", "zion" },
	{ "sssa_default", "zion2" },
	{ "sssa_dlc_biker", "avarus" },
	{ "sssa_dlc_biker", "bagger" },
	{ "sssa_dlc_biker", "blazer4" },
	{ "sssa_dlc_biker", "chimera" },
	{ "sssa_dlc_biker", "daemon2" },
	{ "sssa_dlc_biker", "defiler" },
	{ "sssa_dlc_biker", "esskey" },
	{ "sssa_dlc_biker", "faggio3" },
	{ "sssa_dlc_biker", "faggion" },
	{ "sssa_dlc_biker", "manchez" },
	{ "sssa_dlc_biker", "nightblade" },
	{ "sssa_dlc_biker", "ratbike" },
	{ "sssa_dlc_biker", "sanctus" },
	{ "sssa_dlc_biker", "tornado6" },
	{ "sssa_dlc_biker", "vortex" },
	{ "sssa_dlc_biker", "woflsbane" },
	{ "sssa_dlc_biker", "youga2" },
	{ "sssa_dlc_biker", "zombiea" },
	{ "sssa_dlc_biker", "zombieb" },
	{ "sssa_dlc_business", "asea" },
	{ "sssa_dlc_business", "astrope" },
	{ "sssa_dlc_business", "bobcatxl" },
	{ "sssa_dlc_business", "cavcade2" },
	{ "sssa_dlc_business", "granger" },
	{ "sssa_dlc_business", "ingot" },
	{ "sssa_dlc_business", "intruder" },
	{ "sssa_dlc_business", "minivan" },
	{ "sssa_dlc_business", "premier" },
	{ "sssa_dlc_business", "radi" },
	{ "sssa_dlc_business", "rancherx" },
	{ "sssa_dlc_business", "stanier" },
	{ "sssa_dlc_business", "stratum" },
	{ "sssa_dlc_business", "washingt" },
	{ "sssa_dlc_business2", "dominato" },
	{ "sssa_dlc_business2", "f620" },
	{ "sssa_dlc_business2", "fusilade" },
	{ "sssa_dlc_business2", "penumbra" },
	{ "sssa_dlc_business2", "sentinel" },
	{ "sssa_dlc_business2", "sentinel_convertable" },
	{ "sssa_dlc_christmas_2", "jester2" },
	{ "sssa_dlc_christmas_2", "massacro2" },
	{ "sssa_dlc_christmas_2", "rloader2" },
	{ "sssa_dlc_christmas_2", "slamvan" },
	{ "sssa_dlc_christmas_3", "tampa" },
	{ "sssa_dlc_executive_1", "rumpo3" },
	{ "sssa_dlc_halloween", "btype2_sss_death_b" },
	{ "sssa_dlc_halloween", "lurcher_sss_hangman_b" },
	{ "sssa_dlc_heist", "blade" },
	{ "sssa_dlc_heist", "enduro" },
	{ "sssa_dlc_heist", "gburrito2" },
	{ "sssa_dlc_heist", "gresley" },
	{ "sssa_dlc_heist", "guardian" },
	{ "sssa_dlc_heist", "innovation" },
	{ "sssa_dlc_heist", "jackal" },
	{ "sssa_dlc_heist", "kuruma" },
	{ "sssa_dlc_heist", "kuruma2" },
	{ "sssa_dlc_heist", "landstalker" },
	{ "sssa_dlc_heist", "nemesis" },
	{ "sssa_dlc_heist", "oracle1" },
	{ "sssa_dlc_heist", "rumpo" },
	{ "sssa_dlc_heist", "schafter2" },
	{ "sssa_dlc_heist", "seminole" },
	{ "sssa_dlc_heist", "surge" },
	{ "sssa_dlc_hipster", "blade" },
	{ "sssa_dlc_hipster", "blazer3" },
	{ "sssa_dlc_hipster", "buffalo" },
	{ "sssa_dlc_hipster", "buffalo2" },
	{ "sssa_dlc_hipster", "glendale" },
	{ "sssa_dlc_hipster", "panto" },
	{ "sssa_dlc_hipster", "picador" },
	{ "sssa_dlc_hipster", "pigalle" },
	{ "sssa_dlc_hipster", "primo" },
	{ "sssa_dlc_hipster", "rebel2" },
	{ "sssa_dlc_hipster", "regina" },
	{ "sssa_dlc_hipster", "rhapsody" },
	{ "sssa_dlc_hipster", "surfer" },
	{ "sssa_dlc_hipster", "tailgater" },
	{ "sssa_dlc_hipster", "warrener" },
	{ "sssa_dlc_hipster", "youga" },
	{ "sssa_dlc_independence", "sovereign" },
	{ "sssa_dlc_lts_creator", "hakuchou" },
	{ "sssa_dlc_lts_creator", "innovation" },
	{ "sssa_dlc_lts_creator", "kalahari_topless" },
	{ "sssa_dlc_mp_to_sp", "blista2" },
	{ "sssa_dlc_mp_to_sp", "buffalo3" },
	{ "sssa_dlc_mp_to_sp", "dominator2" },
	{ "sssa_dlc_mp_to_sp", "dukes" },
	{ "sssa_dlc_mp_to_sp", "gauntlet2" },
	{ "sssa_dlc_mp_to_sp", "stalion2" },
	{ "sssa_dlc_mp_to_sp", "stallion" },
	{ "sssa_dlc_stunt", "bf400_sss_bf400_livery_1_b" },
	{ "sssa_dlc_stunt", "brioso_sss_brioso_livery_1_b" },
	{ "sssa_dlc_stunt", "cliffhanger_sss_cliffhanger_livery_1_b" },
	{ "sssa_dlc_stunt", "contender" },
	{ "sssa_dlc_stunt", "gargoyle_sss_gargoyle_livery_1_b" },
	{ "sssa_dlc_stunt", "omnis_sss_omnis_livery_1_b" },
	{ "sssa_dlc_stunt", "rallytruck_sss_dune_livery_1_b" },
	{ "sssa_dlc_stunt", "tampa2_sss_tampa2_livery_1_b" },
	{ "sssa_dlc_stunt", "trophy_sss_trophy_livery_1_b" },
	{ "sssa_dlc_stunt", "trophy2_sss_trophy2_livery_1_b" },
	{ "sssa_dlc_stunt", "tropos_sss_tropos_livery_1_b" },
	{ "sssa_dlc_valentines", "rloader" },
	{ "candc_gunrunning", "apc" },
	{ "candc_gunrunning", "ardent" },
	{ "candc_gunrunning", "dune3" },
	{ "candc_gunrunning", "halftrack" },
	{ "candc_gunrunning", "nightshark" },
	{ "candc_gunrunning", "oppressor" },
	{ "candc_gunrunning", "tampa3" },
	{ "candc_gunrunning", "trsmall2" },
};

char* pedModels2[] = {
	"mp_m_freemode_01","player_zero","player_one","player_two","s_m_m_movalien_01","u_m_y_zombie_01","u_m_y_imporage","s_m_y_fireman_01","a_f_y_topless_01","u_f_y_poppymich","a_m_y_acult_01","ig_lamardavis","ig_jimmydisanto","ig_tracydisanto",
	"ig_johnnyklebitz","ig_wade","a_f_y_juggalo_01",
};

int PedListPos = 0;
static const char* pedModels[] = {
"A_C_Boar","A_C_Chickenhawk","A_C_Chimp","A_C_Chop","A_C_Cormorant","A_C_Cow","A_C_Coyote","A_C_Crow","A_C_Deer","A_C_Fish","A_C_Hen","A_C_Husky","A_C_MtLion","A_C_Pig","A_C_Pigeon","A_C_Rat","A_C_Retriever",
"A_C_Rhesus","A_C_Rottweiler","A_C_Seagull","A_C_SharkTiger","A_C_shepherd","A_F_M_Beach_01","A_F_M_BevHills_01","A_F_M_BevHills_02","A_F_M_BodyBuild_01","A_F_M_Business_02","A_F_M_Downtown_01","A_F_M_EastSA_01",
"A_F_M_EastSA_02","A_F_M_FatBla_01","A_F_M_FatCult_01","A_F_M_FatWhite_01","A_F_M_KTown_01","A_F_M_KTown_02","A_F_M_ProlHost_01","A_F_M_Salton_01","A_F_M_SkidRow_01","A_F_M_SouCentMC_01","A_F_M_SouCent_01","A_F_M_SouCent_02",
"A_F_M_Tourist_01","A_F_M_TrampBeac_01","A_F_M_Tramp_01","A_F_O_GenStreet_01","A_F_O_Indian_01","A_F_O_KTown_01","A_F_O_Salton_01","A_F_O_SouCent_01","A_F_O_SouCent_02","A_F_Y_Beach_01","A_F_Y_BevHills_01","A_F_Y_BevHills_02",
"A_F_Y_BevHills_03","A_F_Y_BevHills_04","A_F_Y_Business_01","A_F_Y_Business_02","A_F_Y_Business_03","A_F_Y_Business_04","A_F_Y_EastSA_01","A_F_Y_EastSA_02","A_F_Y_EastSA_03","A_F_Y_Epsilon_01","A_F_Y_Fitness_01",
"A_F_Y_Fitness_02","A_F_Y_GenHot_01","A_F_Y_Golfer_01","A_F_Y_Hiker_01","A_F_Y_Hippie_01","A_F_Y_Hipster_01","A_F_Y_Hipster_02","A_F_Y_Hipster_03","A_F_Y_Hipster_04","A_F_Y_Indian_01","A_F_Y_Juggalo_01","A_F_Y_Runner_01",
"A_F_Y_RurMeth_01","A_F_Y_SCDressy_01","A_F_Y_Skater_01","A_F_Y_SouCent_01","A_F_Y_SouCent_02","A_F_Y_SouCent_03","A_F_Y_Tennis_01","A_F_Y_titleless_01","A_F_Y_Tourist_01","A_F_Y_Tourist_02","A_F_Y_Vinewood_01",
"A_F_Y_Vinewood_02","A_F_Y_Vinewood_03","A_F_Y_Vinewood_04","A_F_Y_Yoga_01","A_M_M_ACult_01","A_M_M_AfriAmer_01","A_M_M_Beach_01","A_M_M_Beach_02","A_M_M_BevHills_01","A_M_M_BevHills_02","A_M_M_Business_01",
"A_M_M_EastSA_01","A_M_M_EastSA_02","A_M_M_Farmer_01","A_M_M_FatLatin_01","A_M_M_GenFat_01","A_M_M_GenFat_02","A_M_M_Golfer_01","A_M_M_HasJew_01","A_M_M_Hillbilly_01","A_M_M_Hillbilly_02","A_M_M_Indian_01",
"A_M_M_KTown_01","A_M_M_Malibu_01","A_M_M_MexCntry_01","A_M_M_MexLabor_01","A_M_M_OG_Boss_01","A_M_M_Paparazzi_01","A_M_M_Polynesian_01","A_M_M_ProlHost_01","A_M_M_RurMeth_01","A_M_M_Salton_01","A_M_M_Salton_02",
"A_M_M_Salton_03","A_M_M_Salton_04","A_M_M_Skater_01","A_M_M_Skidrow_01","A_M_M_SoCenLat_01","A_M_M_SouCent_01","A_M_M_SouCent_02","A_M_M_SouCent_03","A_M_M_SouCent_04","A_M_M_StLat_02","A_M_M_Tennis_01",
"A_M_M_Tourist_01","A_M_M_TrampBeac_01","A_M_M_Tramp_01","A_M_M_TranVest_01","A_M_M_TranVest_02","A_M_O_ACult_01","A_M_O_ACult_02","A_M_O_Beach_01","A_M_O_GenStreet_01","A_M_O_KTown_01","A_M_O_Salton_01",
"A_M_O_SouCent_01","A_M_O_SouCent_02","A_M_O_SouCent_03","A_M_O_Tramp_01","A_M_Y_ACult_01","A_M_Y_ACult_02","A_M_Y_BeachVesp_01","A_M_Y_BeachVesp_02","A_M_Y_Beach_01","A_M_Y_Beach_02","A_M_Y_Beach_03","A_M_Y_BevHills_01",
"A_M_Y_BevHills_02","A_M_Y_BreakDance_01","A_M_Y_BusiCas_01","A_M_Y_Business_01","A_M_Y_Business_02","A_M_Y_Business_03","A_M_Y_Cyclist_01","A_M_Y_DHill_01","A_M_Y_Downtown_01","A_M_Y_EastSA_01","A_M_Y_EastSA_02",
"A_M_Y_Epsilon_01","A_M_Y_Epsilon_02","A_M_Y_Gay_01","A_M_Y_Gay_02","A_M_Y_GenStreet_01","A_M_Y_GenStreet_02","A_M_Y_Golfer_01","A_M_Y_HasJew_01","A_M_Y_Hiker_01","A_M_Y_Hippy_01","A_M_Y_Hipster_01","A_M_Y_Hipster_02",
"A_M_Y_Hipster_03","A_M_Y_Indian_01","A_M_Y_Jetski_01","A_M_Y_Juggalo_01","A_M_Y_KTown_01","A_M_Y_KTown_02","A_M_Y_Latino_01","A_M_Y_MethHead_01","A_M_Y_MexThug_01","A_M_Y_MotoX_01","A_M_Y_MotoX_02","A_M_Y_MusclBeac_01",
"A_M_Y_MusclBeac_02","A_M_Y_Polynesian_01","A_M_Y_RoadCyc_01","A_M_Y_Runner_01","A_M_Y_Runner_02","A_M_Y_Salton_01","A_M_Y_Skater_01","A_M_Y_Skater_02","A_M_Y_SouCent_01","A_M_Y_SouCent_02","A_M_Y_SouCent_03","A_M_Y_SouCent_04",
"A_M_Y_StBla_01","A_M_Y_StBla_02","A_M_Y_StLat_01","A_M_Y_StWhi_01","A_M_Y_StWhi_02","A_M_Y_Sunbathe_01","A_M_Y_Surfer_01","A_M_Y_VinDouche_01","A_M_Y_Vinewood_01","A_M_Y_Vinewood_02","A_M_Y_Vinewood_03","A_M_Y_Vinewood_04",
"A_M_Y_Yoga_01","CSB_Abigail","CSB_Anita","CSB_Anton","CSB_BallasOG","CSB_Bride","CSB_BurgerDrug","CSB_Car3guy1","CSB_Car3guy2","CSB_Chef","CSB_Chin_goon","CSB_Cletus","CSB_Cop","CSB_Customer","CSB_Denise_friend",
"CSB_FOS_rep","CSB_G","CSB_Groom","CSB_Grove_str_dlr","CSB_Hao","CSB_Hugh","CSB_Imran","CSB_Janitor","CSB_Maude","CSB_MWeather","CSB_Ortega","CSB_Oscar","CSB_PornDudes","CSB_PrologueDriver","CSB_ProlSec","CSB_Ramp_gang",
"CSB_Ramp_hic","CSB_Ramp_hipster","CSB_Ramp_marine","CSB_Ramp_mex","CSB_Reporter","CSB_RoccoPelosi","CSB_Screen_Writer","CSB_Stripper_01","CSB_Stripper_02","CSB_Tonya","CSB_TrafficWarden","CS_AmandaTownley","CS_Andreas",
"cs_ashley","CS_Bankman","CS_Barry","CS_Beverly","CS_Brad","CS_BradCadaver","CS_Carbuyer","CS_Casey","CS_ChengSr","CS_ChrisFormage","CS_Clay","CS_Dale","CS_DaveNorton","cs_debra","cs_denise","CS_Devin","CS_Dom","CS_Dreyfuss",
"CS_DrFriedlander","CS_Fabien","CS_FBISuit_01","CS_Floyd","CS_Guadalope","cs_gurk","CS_Hunter","CS_Janet","CS_JewelAss","CS_JimmyBoston","CS_JimmyDiSanto","CS_JoeMinuteMan","CS_JohnnyKlebitz","CS_Josef","CS_Josh","CS_LamarDavis",
"CS_Lazlow","CS_LesterCrest","CS_LifeInvad_01","CS_Magenta","CS_Manuel","CS_Marnie","CS_MartinMadrazo","CS_MaryAnn","CS_Michelle","CS_Milton","CS_Molly","CS_MovPremF_01","CS_MovPremMale","CS_MRK","CS_MrsPhillips","CS_MRS_Thornhill",
"CS_Natalia","CS_NervousRon","CS_Nigel","CS_Old_Man1A","CS_Old_Man2","CS_b1rd","CS_Orleans","CS_Paper","CS_Patricia","CS_Priest","CS_ProlSec_02","CS_RussianDrunk","CS_SiemonYetarian","CS_Solomon","CS_SteveHains","CS_Stretch",
"CS_Tanisha","CS_TaoCheng","CS_TaosTranslator","CS_TennisCoach","CS_Terry","CS_Tom","CS_TomEpsilon","CS_TracyDiSanto","CS_Wade","CS_Zimbor","G_F_Y_ballas_01","G_F_Y_Families_01","G_F_Y_Lost_01","G_F_Y_Vagos_01","G_M_M_ArmBoss_01",
"G_M_M_ArmGoon_01","G_M_M_ArmLieut_01","G_M_M_ChemWork_01","G_M_M_ChiBoss_01","G_M_M_ChiCold_01","G_M_M_ChiGoon_01","G_M_M_ChiGoon_02","G_M_M_KorBoss_01","G_M_M_MexBoss_01","G_M_M_MexBoss_02","G_M_Y_ArmGoon_02","G_M_Y_Azteca_01",
"G_M_Y_BallaEast_01","G_M_Y_BallaOrig_01","G_M_Y_BallaSout_01","G_M_Y_FamCA_01","G_M_Y_FamDNF_01","G_M_Y_FamFor_01","G_M_Y_Korean_01","G_M_Y_Korean_02","G_M_Y_KorLieut_01","G_M_Y_Lost_01","G_M_Y_Lost_02","G_M_Y_Lost_03",
"G_M_Y_MexGang_01","G_M_Y_MexGoon_01","G_M_Y_MexGoon_02","G_M_Y_MexGoon_03","G_M_Y_PoloGoon_01","G_M_Y_PoloGoon_02","G_M_Y_SalvaBoss_01","G_M_Y_SalvaGoon_01","G_M_Y_SalvaGoon_02","G_M_Y_SalvaGoon_03","G_M_Y_StrPunk_01","G_M_Y_StrPunk_02",
"HC_Driver","HC_Gunman","HC_Hacker","IG_Abigail","IG_AmandaTownley","IG_Andreas","IG_Ashley","IG_BallasOG","IG_Bankman","IG_Barry","IG_BestMen","IG_Beverly","IG_Brad","IG_Bride","IG_Car3guy1","IG_Car3guy2","IG_Casey",
"IG_Chef","IG_ChengSr","IG_ChrisFormage","IG_Clay","IG_ClayPain","IG_Cletus","IG_Dale","IG_DaveNorton","IG_Denise","IG_Devin","IG_Dom","IG_Dreyfuss","IG_DrFriedlander","IG_Fabien","IG_FBISuit_01","IG_Floyd","IG_Groom",
"IG_Hao","IG_Hunter","IG_Janet","ig_JAY_Norris","IG_JewelAss","IG_JimmyBoston","IG_JimmyDiSanto","IG_JoeMinuteMan","ig_JohnnyKlebitz","IG_Josef","IG_Josh","IG_KerryMcIntosh","IG_LamarDavis","IG_Lazlow","IG_LesterCrest",
"IG_LifeInvad_01","IG_LifeInvad_02","IG_Magenta","IG_Manuel","IG_Marnie","IG_MaryAnn","IG_Maude","IG_Michelle","IG_Milton","IG_Molly","IG_MRK","IG_MrsPhillips","IG_MRS_Thornhill","IG_Natalia","IG_NervousRon","IG_Nigel",
"IG_Old_Man1A","IG_Old_Man2","IG_b1rd","IG_ONeil","IG_Orleans","IG_Ortega","IG_Paper","IG_Patricia","IG_Priest","IG_ProlSec_02","IG_Ramp_Gang","IG_Ramp_Hic","IG_Ramp_Hipster","IG_Ramp_Mex","IG_RoccoPelosi","IG_RussianDrunk",
"IG_Screen_Writer","IG_SiemonYetarian","IG_Solomon","IG_SteveHains","IG_Stretch","IG_Talina","IG_Tanisha","IG_TaoCheng","IG_TaosTranslator","ig_TennisCoach","IG_Terry","IG_TomEpsilon","IG_Tonya","IG_TracyDiSanto","IG_TrafficWarden",
"IG_TylerDix","IG_Wade","IG_Zimbor","MP_F_DeadHooker","MP_F_Freemode_01","MP_F_Misty_01","MP_F_StripperLite","MP_G_M_Pros_01","MP_HeadTargets","MP_M_Claude_01","MP_M_ExArmy_01","MP_M_FamDD_01","MP_M_FIBSec_01","MP_M_Freemode_01",
"MP_M_Marston_01","MP_M_Niko_01","MP_M_ShopKeep_01","MP_S_M_Armoured_01","Player_One","Player_Two","Player_Zero","slod_human","slod_large_quadped","slod_small_quadped","S_F_M_Fembarber","S_F_M_Maid_01","S_F_M_Shop_HIGH",
"S_F_M_SweatShop_01","S_F_Y_AirHostess_01","S_F_Y_Bartender_01","S_F_Y_Baywatch_01","S_F_Y_Cop_01","S_F_Y_Factory_01","S_F_Y_Hooker_01","S_F_Y_Hooker_02","S_F_Y_Hooker_03","S_F_Y_Migrant_01","S_F_Y_MovPrem_01","S_F_Y_Ranger_01",
"S_F_Y_Scrubs_01","S_F_Y_Sheriff_01","S_F_Y_Shop_LOW","S_F_Y_Shop_MID","S_F_Y_StripperLite","S_F_Y_Stripper_01","S_F_Y_Stripper_02","S_F_Y_SweatShop_01","S_M_M_AmmuCountry","S_M_M_Armoured_01","S_M_M_Armoured_02","S_M_M_AutoShop_01",
"S_M_M_AutoShop_02","S_M_M_Bouncer_01","S_M_M_ChemSec_01","S_M_M_CIASec_01","S_M_M_CntryBar_01","S_M_M_DockWork_01","S_M_M_Doctor_01","S_M_M_FIBOffice_01","S_M_M_FIBOffice_02","S_M_M_Gaffer_01","S_M_M_Gardener_01","S_M_M_GenTransport",
"S_M_M_HairDress_01","S_M_M_HighSec_01","S_M_M_HighSec_02","S_M_M_Janitor","S_M_M_LatHandy_01","S_M_M_LifeInvad_01","S_M_M_Linecook","S_M_M_LSMetro_01","S_M_M_Mariachi_01","S_M_M_Marine_01","S_M_M_Marine_02","S_M_M_Migrant_01",
"S_M_M_MovAlien_01","S_M_M_MovPrem_01","S_M_M_Movspace_01","S_M_M_Paramedic_01","S_M_M_Pilot_01","S_M_M_Pilot_02","S_M_M_Postal_01","S_M_M_Postal_02","S_M_M_PrisGuard_01","S_M_M_Scientist_01","S_M_M_Security_01","S_M_M_SnowCop_01",
"S_M_M_StrPerf_01","S_M_M_StrPreach_01","S_M_M_StrVend_01","S_M_M_Trucker_01","S_M_M_UPS_01","S_M_M_UPS_02","S_M_O_Busker_01","S_M_Y_AirWorker","S_M_Y_AmmuCity_01","S_M_Y_ArmyMech_01","S_M_Y_Autitlesy_01","S_M_Y_Barman_01","S_M_Y_BayWatch_01",
"S_M_Y_BlackOps_01","S_M_Y_BlackOps_02","S_M_Y_BlackOps_03","S_M_Y_BusBoy_01","S_M_Y_Chef_01","S_M_Y_Clown_01","S_M_Y_Construct_01","S_M_Y_Construct_02","S_M_Y_Cop_01","S_M_Y_Dealer_01","S_M_Y_DevinSec_01","S_M_Y_DockWork_01","S_M_Y_Doorman_01",
"S_M_Y_DWService_01","S_M_Y_DWService_02","S_M_Y_Factory_01","S_M_Y_Fireman_01","S_M_Y_Garbage","S_M_Y_Grip_01","S_M_Y_HwayCop_01","S_M_Y_Marine_01","S_M_Y_Marine_02","S_M_Y_Marine_03","S_M_Y_Mime","S_M_Y_PestCont_01",
"S_M_Y_Pilot_01","S_M_Y_PrisMuscl_01","S_M_Y_Prisoner_01","S_M_Y_Ranger_01","S_M_Y_Robber_01","S_M_Y_Sheriff_01","S_M_Y_Shop_MASK","S_M_Y_StrVend_01","S_M_Y_Swat_01","S_M_Y_USCG_01","S_M_Y_Valet_01","S_M_Y_Waiter_01",
"S_M_Y_WinClean_01","S_M_Y_XMech_01","S_M_Y_XMech_02","U_F_M_Corpse_01","U_F_M_Miranda","U_F_M_ProMourn_01","U_F_O_MovieStar","U_F_O_ProlHost_01","U_F_Y_BikerChic","U_F_Y_COMJane","U_F_Y_corpse_01","U_F_Y_corpse_02",
"U_F_Y_HotPosh_01","U_F_Y_JewelAss_01","U_F_Y_Mistress","U_F_Y_PoppyMich","U_F_Y_Princess","U_F_Y_SpyActress","U_M_M_Aldinapoli","U_M_M_BankMan","U_M_M_BikeHire_01","U_M_M_FIBArchitect","U_M_M_FilmDirector","U_M_M_GlenStank_01",
"U_M_M_Griff_01","U_M_M_Jesus_01","U_M_M_JewelSec_01","U_M_M_JewelThief","U_M_M_MarkFost","U_M_M_PartyTarget","U_M_M_ProlSec_01","U_M_M_ProMourn_01","U_M_M_RivalPap","U_M_M_SpyActor","U_M_M_WillyFist","U_M_O_FinGuru_01",
"U_M_O_TapHillBilly","U_M_O_Tramp_01","U_M_Y_Abner","U_M_Y_AntonB",	"U_M_Y_BabyD","U_M_Y_Baygor","U_M_Y_BurgerDrug_01","U_M_Y_Chip","U_M_Y_Cyclist_01","U_M_Y_FIBMugger_01","U_M_Y_Guido_01","U_M_Y_GunVend_01","U_M_Y_Hippie_01",
"U_M_Y_ImpoRage","U_M_Y_Justin","U_M_Y_Mani","U_M_Y_MilitaryBum","U_M_Y_Paparazzi","U_M_Y_Party_01","U_M_Y_Pogo_01","U_M_Y_Prisoner_01","U_M_Y_ProlDriver_01","U_M_Y_RSRanger_01","U_M_Y_SBike","U_M_Y_StagGrm_01","U_M_Y_Tattoo_01",
"U_M_Y_Zombie_01"
};













static const char* Planes1[] = {
	"BESRA", "CARGOPLANE", "CUBAN800", "DODO", "DUSTER",
	"HYDRA", "JET", "LAZER", "LUXOR", "LUXOR2",
	"MAMMATUS", "MILJET", "NIMBUS", "SHAMAL", "STUNT",
	"TITAN", "VELUM", "VELUM2", "VESTRA", "BOMBUSHKA",
	"ALPHAZ1", "TULA", "ROGUE", "PYRO", "MOGUL",
	"NOKOTA", "MOLOTOK", "SEABREEZE", "MICROLIGHT", "HOWARD",
	"STARLING", "AVENGER2", "VOLATOL", "STRIKEFORCE"
};
static const char* Sedans1[] = {
	"ASEA", "ASEA2", "ASTEROPE", "COG55", "COG552",
	"COGNOSCENTI", "COGNOSCENTI2", "EMPEROR", "EMPEROR2", "EMPEROR3",
	"FUGITIVE", "GLENDALE", "INGOT", "INTRUDER", "LIMO2",
	"PREMIER", "PRIMO", "PRIMO2", "REGINA", "ROMERO",
	"SCHAFTER2", "SCHAFTER5", "SCHAFTER6", "STANIER", "STRATUM",
	"STRETCH", "SUPERD", "SURGE", "TAILGATER", "WARRENER",
	"WASHINGTON", "STAFFORD", "NEBULA"
};
static const char* Service1[] = {
	"AIRBUS", "BRICKADE", "BUS", "COACH", "RALLYTRUCK",
	"RENTALBUS", "TAXI", "TOURBUS", "TRASH", "TRASH2",
	"WASTELANDER", "PBUS2"
};
static const char* Sports1[] = {
	"ALPHA", "BANSHEE", "BESTIAGTS", "BLISTA2", "BLISTA3",
	"BUFFALO", "BUFFALO2", "BUFFALO3", "CARBONIZZARE", "COMET2",
	"COQUETTE", "ELEGY", "ELEGY2", "FELTZER2", "FUROREGT", "FUSILADE",
	"FUTO", "JESTER", "JESTER2", "KHAMELION", "KURUMA",
	"KURUMA2", "LYNX", "MASSACRO", "MASSACRO2", "NINEF",
	"NINEF2", "OMNIS", "PENUMBRA", "RAPIDGT", "RAPIDGT2",
	"RAPTOR", "SCHAFTER3", "SCHAFTER4", "SCHWARZE", "SEVEN70",
	"SULTAN", "SURANO", "SPECTER", "SPECTER2", "TAMPA2", "TROPOS", "VERLIERER2",
	"RUINER2", "PHANTOM2", "RUSTON", "COMET4", "COMET5", "NEON", "PARIAH", "RAIDEN", "REVOLTER", "SENTINEL3", "STREITER", "Z190",
	"GB200", "HOTRING", "ITALIGTO", "SCHLAGEN", "ZR380", "ZR3802", "ZR3803",
	"DRAFTER", "JUGULAR", "LOCUST", "NEO", "PARAGON", "PARAGON2"
};
static const char* SportsClassics1[] = {
	"BTYPE", "BTYPE2", "BTYPE3", "CASCO", "COQUETTE2",
	"FELTZER3", "JB700", "MAMBA", "MANANA", "MONROE",
	"PEYOTE", "PIGALLE", "STINGER", "STINGERGT", "TORNADO",
	"TORNADO2", "TORNADO3", "TORNADO4", "TORNADO5", "TORNADO6",
	"ZTYPE", "INFERNUS2", "TURISMO2", "RAPIDGT3", "RETINUE", "DELUXO", "GT500",
	"SAVESTRA", "STROMBERG", "VISERIS", "CHEBUREK", "FAGALOA", "JESTER3", "MICHELLI", "SWINGER",
	"DYNASTY", "PEYOTE2", "ZION3"
};
static const char* Super1[] = {
	"ADDER", "BANSHEE2", "BULLET", "CHEETAH", "ENTITYXF",
	"FMJ", "SHEAVA", "INFERNUS", "NERO", "NERO2","OSIRIS", "LE7B",
	"ITALIGTB", "ITALIGTB2", "PFISTER811", "PROTOTIPO", "REAPER", "SULTANRS", "T20",
	"TEMPESTA", "TURISMOR", "TYRUS", "VACCA", "VOLTIC", "ZENTORNO", "VOLTIC2", "PENETRATOR", "GP1", "XA21", "VIGILANTE",
	"CYCLONE", "VISIONE", "AUTARCH", "SC1", "ENTITY2", "TAIPAN", "TEZERACT", "TYRANT", "SCRAMJET", "DEVESTE",
	"EMERUS", "KRIEGER", "S80", "THRAX", "ZORRUSSO"
};
static const char* SUVs1[] = {
	"BALLER", "BALLER2", "BALLER3", "BALLER4", "BALLER5",
	"BALLER6", "BJXL", "CAVALCADE", "CAVALCADE2", "CONTENDER",
	"DUBSTA", "DUBSTA2", "FQ2", "GRANGER", "GRESLEY",
	"HABANERO", "HUNTLEY", "LANDSTALKER", "MESA", "MESA2",
	"PATRIOT", "RADI", "ROCOTO", "SEMINOLE", "SERRANO",
	"XLS", "XLS2", "PATRIOT2", "TOROS", "NOVAK"
};
static const char* Trailer1[] = {
	"ARMYTANKER", "ARMYTRAILER", "ARMYTRAILER2", "BALETRAILER", "BOATTRAILER",
	"DOCKTRAILER", "FREIGHTTRAILER", "GRAINTRAILER", "PROPTRAILER", "RAKETRAILER",
	"TANKER", "TANKER2", "TR2", "TR3", "TR4",
	"TRAILERLOGS", "TRAILERS", "TRAILERS2", "TRAILERS3", "TRAILERSMALL",
	"TRFLAT", "TVTRAILER"
};
static const char* Trains1[] = {
	"CABLECAR", "FREIGHT", "FREIGHTCAR", "FREIGHTCONT1", "FREIGHTCONT2",
	"FREIGHTGRAIN", "METROTRAIN", "TANKERCAR"
};
static const char* Utility1[] = {
	"AIRTUG", "CADDY", "CADDY2", "DOCKTUG", "FORKLIFT",
	"MOWER", "RIPLEY", "SADLER", "SADLER2", "SCRAP",
	"TOWTRUCK", "TOWTRUCK2", "TRACTOR", "TRACTOR2", "TRACTOR3",
	"UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3"
};
static const char* Vans1[] = {
	"BISON", "BISON2", "BISON3", "BOBCATXL", "BOXVILLE",
	"BOXVILLE2", "BOXVILLE3", "BOXVILLE4", "BURRITO", "BURRITO2",
	"BURRITO3", "BURRITO4", "BURRITO5", "CAMPER", "GBURRITO",
	"GBURRITO2", "JOURNEY", "MINIVAN", "MINIVAN2", "PARADISE",
	"PONY", "PONY2", "RUMPO", "RUMPO2", "RUMPO3",
	"SPEEDO", "SPEEDO2", "SURFER", "SURFER2", "TACO",
	"YOUGA", "YOUGA2", "SPEEDO4"
};
static const char* Boats1[] = {
	"DINGHY", "DINGHY2", "DINGHY3", "DINGHY4", "JETMAX",
	"MARQUIS", "PREDATOR", "SEASHARK", "SEASHARK2", "SEASHARK3",
	"SPEEDER", "SPEEDER2", "SQUALO", "SUBMERSIBLE", "SUBMERSIBLE2",
	"SUNTRAP", "TORO", "TORO2", "TROPIC", "TROPIC2",
	"TUG"
};
static const char* Commercial1[] = {
	"BENSON", "BIFF", "HAULER", "MULE", "MULE2",
	"MULE3", "PACKER", "PHANTOM", "POUNDER", "STOCKADE",
	"STOCKADE3", "MULE4", "POUNDER2", "TERROBYTE", "CERBERUS2", "CERBERUSS3",
	"CERBERUS"
};
static const char* Compacts1[] = {
	"BLISTA", "BRIOSO", "DILETTANTE", "DILETTANTE2", "ISSI2",
	"PANTO", "PRAIRIE", "RHAPSODY", "ISSI3", "ISSI6", "ISSI4", "ISSI5",
	"ISSI7"
};
static const char* Coupes1[] = {
	"COGCABRIO", "EXEMPLAR", "F620", "FELON", "FELON2",
	"JACKAL", "ORACLE", "ORACLE2", "SENTINEL", "SENTINEL2",
	"WINDSOR", "WINDSOR2", "ZION", "ZION2"
};
static const char* Cycles1[] = {
	"BMX", "CRUISER", "FIXTER", "SCORCHER", "TRIBIKE",
	"TRIBIKE2", "TRIBIKE3"
};
static const char* Emergency1[] = {
	"AMBULANCE", "FBI", "FBI2", "FIRETRUK", "LGUARD",
	"PBUS", "PRANGER", "POLICE", "POLICE2", "POLICE3",
	"POLICE4", "POLICEB", "POLICEOLD1", "POLICEOLD2", "POLICET",
	"SHERIFF", "SHERIFF2", "RIOT", "RIOT2"
};
static const char* Helicopters1[] = {
	"ANNIHILATOR", "BLIMP", "BLIMP2", "BUZZARD", "BUZZARD2",
	"CARGOBOB", "CARGOBOB2", "CARGOBOB3", "CARGOBOB4", "FROGGER",
	"FROGGER2", "MAVERICK", "POLMAV", "SAVAGE", "SKYLIFT",
	"SUPERVOLITO", "SUPERVOLITO2", "SWIFT", "SWIFT2", "VALKYRIE",
	"VALKYRIE2", "VOLATUS", "HUNTER", "HAVOK", "AKULA", "SEASPARROW",
	"BLIMP3"
};
static const char* Industrial1[] = {
	"BULLDOZER", "CUTTER", "DUMP", "FLATBED", "GUARDIAN",
	"HANDLER", "MIXER", "MIXER2", "RUBBLE", "TIPTRUCK",
	"TIPTRUCK2"
};
static const char* Military1[] = {
	"BARRACKS", "BARRACKS2", "BARRACKS3", "CRUSADER", "RHINO", "BARRAGE", "CHERNOBOG", "KHANJALI", "THRUSTER", "SCARAB", "SCARAB2", "SCARAB3"
};
static const char* Motorcycles1[] = {
	"AKUMA", "AVARUS", "BAGGER", "BATI", "BATI2",
	"BF400", "CARBONRS", "CHIMERA", "CLIFFHANGER", "DAEMON",
	"DAEMON2", "DEFILER", "DOUBLE", "ENDURO", "ESSKEY",
	"FAGGIO", "FAGGIO2", "FAGGIO3", "GARGOYLE", "HAKUCHOU",
	"HAKUCHOU2", "HEXER", "INNOVATION", "LECTRO", "MANCHEZ",
	"NEMESIS", "NIGHTBLADE", "PCJ", "RATBIKE", "RUFFIAN",
	"SANCHEZ", "SANCHEZ2", "SANCTUS", "SHOTARO", "SOVEREIGN",
	"THRUST", "VADER", "VINDICATOR", "VORTEX", "WOLFSBANE",
	"ZOMBIEA", "ZOMBIEB", "DIABLOUS", "DIABLOUS2", "FCR",
	"FCR2", "OPPRESSOR", "AVENGER", "OPPRESSOR2", "DEATHBIKE2",
	"DEATHBIKE3", "DEATHBIKE", "RROCKET"
};
static const char* Muscle1[] = {
	"BLADE", "BUCCANEER", "BUCCANEER2", "CHINO", "CHINO2",
	"COQUETTE3", "DOMINATOR", "DOMINATOR2", "DUKES", "DUKES2",
	"GAUNTLET", "GAUNTLET2", "FACTION", "FACTION2", "FACTION3",
	"HOTKNIFE", "LURCHER", "MOONBEAM", "MOONBEAM2", "NIGHTSHADE",
	"PHOENIX", "PICADOR", "RATLOADER", "RATLOADER2", "RUINER", "RUINER2", "RUINER3",
	"SABREGT", "SABREGT2", "SLAMVAN", "SLAMVAN2", "SLAMVAN3",
	"STALION", "STALION2", "TAMPA", "VIGERO", "VIRGO",
	"VIRGO2", "VIRGO3", "VOODOO", "VOODOO2", "HERMES", "HUSTLER", "YOSEMITE", "DOMINATOR3", "ELLIE",
	"IMPALER3", "SLAMVAN6", "DOMINATOR6", "IMPALER4","SLAMVAN4","SLAMVAN5",
	"DOMINATOR4", "DOMINATOR5", "BRUISER", "BRUISER2", "BRUISER3", "RCBANDITO", "IMPALER2",
	"TULIP", "CLIQUE", "VAMOS", "IMPERATOR", "IMPERATOR2", "IMPERATOR3",
	"DEVIANT", "IMPALER", "GAUNTLET3", "GAUNTLET4"
};
static const char* OffRoad1[] = {
	"BFINJECTION", "BIFTA", "BLAZER", "BLAZER2", "BLAZER3",
	"BLAZER4", "BODHI2", "BRAWLER", "DLOADER", "DUBSTA3",
	"DUNE", "DUNE2", "INSURGENT", "INSURGENT2", "KALAHARI",
	"MARSHALL", "MESA3", "MONSTER", "RANCHERXL", "RANCHERXL2",
	"REBEL", "REBEL2", "SANDKING", "SANDKING2", "TECHNICAL",
	"TROPHYTRUCK", "TROPHYTRUCK2", "TECHNICAL2", "DUNE4", "DUNE5",
	"BLAZER5", "KAMACHO", "RIATA", "CARACARA", "FREECRAWLER", "MENACER",
	"MONSTER4", "MONSTER5", "BRUTUS", "BRUTUS2", "BRUTUS3", "MONSTER3",
	"CARACARA2", "HELLION"
};

static const char* CriminalEnterprise1[] = {
	"CONADA", "CORSITA", "GREENWOOD", "LM87", "TENF", "TORERO2", "VIGERO2", "SM722", "RHINEHART", "DRAUGUR", "POSTLUDE", "KANJOSJ", "OMNISEGT",
	"RUINER4", 
};

static const char* DrugWars1[] = {
	"BOOR", "BRICKADE2", "BROADWAY", "CARGOPLANE2", "ENTITY3", "EUDORA", "EVERON2", "ISSI8", "JOURNEY2", "MANCHEZ3", "PANTHERE", "POWERSURGE", "R300", "SURFER3", "TAHOMA", "TULIP2", "PANTHERE",

};

static const char* PVP[] = {
	"oppressor2", "lazer", "thrax", "khanjali", "buzzard", "savage", "minitank", "lazer", "starling", "akula", "kuruma2", "insurgent", "R300", "rcbandito", "strikeforce",

};


static const char* Fun[] = {
	"marshall", "blista3", "dune2", "oppressor2", "voltic2", "scramjet", "thruster", "minitank", "scarab2", "starling", "akula", "jet", "blimp", "CARGOPLANE2", "microlight", "limo2", "wastelander",

};


//static const char* Cop[] = {
//	"police2", "police", "police3", "police4", "policeb", "polmav", "fbi", "riot2", "pbus", "scarab2", "riot", "fbi2",  "policet", "sheriff2", "sheriff", "firetruck", "ambulance", "predator", "policeold1", "policeold2",
//
//};




		
//void spawn_peds(char* model)
//{
//	
//	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_PED_ID());
//	if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
//	Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_CARBINERIFLE");
//	Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
//	
//	Hash pedm = GAMEPLAY::GET_HASH_KEY(model);
//	int createdPED = PED::CREATE_PED(26, 0, pos.x, pos.y, pos.z, 1, 1, 0);
//
//}
//
//CPattern PatternModelSpawn("\x48\x8B\xC8\xFF\x52\x30\x84\xC0\x74\x05\x48", "xxxxxxxxxxx");
//auto ModelPattern = PatternModelSpawn.find(0).get(0).get<char>(8);
//char* ObjectRestore[2];
//void PatchObjects()
//{
//	memcpy_s(ObjectRestore, 2, ModelPattern, 2);
//	memset(ModelPattern, 0x90, 2);
//}
//void RestoreObjects()
//{
//	memcpy_s(ModelPattern, 2, ObjectRestore, 2);
//}




bool spawn_in_vehicle = true;
bool max_on_spawn = false;
//bool sp_bypass = true;
bool engine_on = false;
bool spawn_god = false;

void spawn_vehicle(char* toSpawn) {
	Hash model = GAMEPLAY::GET_HASH_KEY(toSpawn);
	if (STREAMING::IS_MODEL_VALID(model))
	{
		STREAMING::REQUEST_MODEL(model);
		while (!STREAMING::HAS_MODEL_LOADED(model)) Mod_Hub_Base::WAIT(0);
		Vector3 ourCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		float forward = 5.f;
		float heading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		float xVector = forward * sin(degToRad(heading)) * -1.f;
		float yVector = forward * cos(degToRad(heading));
		*(unsigned short*)Hooking::m_model_spawn_bypass = 0x9090;
		Vehicle veh = VEHICLE::CREATE_VEHICLE(model, ourCoords.x + xVector, ourCoords.y + yVector, ourCoords.z, heading, true, true);
		*(unsigned short*)Hooking::m_model_spawn_bypass = 0x0574;
		RequestControlOfEnt(veh);


		Object selecObjj;
		Object latestObjj;
		Object selecObj;
		Object latestObj;

		float air_drag_multipler = 1.f,
			speed_bump_severity_multipler = 1.f,
			cargobob_pickup_rope_damping_multipler = 1.f,
			headlight_multipler = 1.f,
			lod_multipler = 1.f, Acceleration, Brake, Traction, Deform, Suspension;



		//if (sp_bypass)
		//{
		//	globalHandle(0x41183A).As<BOOL>() = 0;
		//	globalHandle(4267883).As<BOOL>() = 0;
		//	globalHandle(4266905).As<BOOL>() = 0;
		//	globalHandle(4268190).As<BOOL>() = 0;

		//	BypassV(veh);
		//	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
		//}


		//if (Spawn plane in the sky)
		//{
		//	if (VEHICLE::IS_THIS_MODEL_A_PLANE(model)) {
		//		veh = VEHICLE::CREATE_VEHICLE(model, cord.x + xVector + 3.0f, cord.y + yVector, cord.z + 320.0f, true, true);
		//		VEHICLE::SET_VEHICLE_ENGINE_ON(veh, true, true, true);
		//		VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, 200.0);
		//		VEHICLE::CONTROL_LANDING_GEAR(veh, 0);
		//}



		if (spawn_in_vehicle)
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veh, -1);
		}




		if (max_on_spawn)
		{

			VEHICLE::SET_VEHICLE_MOD_KIT(veh, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veh, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(veh, 18, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(veh, 22, 1);
			VEHICLE::SET_VEHICLE_MOD(veh, 16, 5, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 12, 2, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 11, 3, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 14, 14, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 15, 3, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 13, 2, 0);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(veh, 6);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veh, 5);
			VEHICLE::SET_VEHICLE_MOD(veh, 23, 19, 1);
			VEHICLE::SET_VEHICLE_MOD(veh, 0, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 1, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 2, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 3, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 4, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 5, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 6, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 7, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 8, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 9, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(veh, 10, 1, 0);
			VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(veh, 1);
			VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 0, 1);
			VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 1, 1);
			VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 2, 1);
			VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 3, 1);
			VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 4, 1);
			VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 5, 1);
			VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 6, 1);
			VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 7, 1);
			VEHICLE::SET_VEHICLE_MOD_KIT(veh, 0);
			VEHICLE::TOGGLE_VEHICLE_MOD(veh, 20, 1);
			VEHICLE::SET_VEHICLE_MOD_KIT(veh, 0);
			VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veh, 0, 255, 0);
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			char* plateText = "scooby";
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veh, plateText);
			STREAMING::REQUEST_NAMED_PTFX_ASSET("proj_xmas_firework");
			STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_clown_appears");


		}



		if(engine_on)
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(veh, true, true, true);
		}
		if (spawn_god)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(veh, true); 		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), "scooby");
		}


		DECORATOR::DECOR_SET_INT(veh, "MPBitset", 0);
		auto networkId = NETWORK::VEH_TO_NET(veh);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veh))
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(networkId, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);


	}
}




	


inline std::size_t BoostListPos = 0;
static const double boostarray[] = {
	300, 400, 500, 600, 700, 800
};
void boost_vehicle(double boostnum) {
	Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (veh)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, boostnum);
	}
}


//void Mod_Hub_Base::BypassV(Vehicle vehicle)
//{
//	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle) || NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(vehicle))
//	{
//		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(vehicle);
//		int netid = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(vehicle);
//		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(netid);
//	}
//	DECORATOR::DECOR_SET_INT(vehicle, "MPBitset", 0);
//	int networkId = NETWORK::VEH_TO_NET(vehicle);
//	if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(vehicle))
//	{
//		NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(networkId, true);
//	}
//}






extern bool infobox = true;




namespace Mod_Hub_Base
{
	void main() {
		using namespace UserInterface;
		while (true) {
			infobox = false;
			g_UiManager->OnTick();
			/* Features */
			Function_update_Loop();
			if (First_start)
			{
				fisrt_start();
				First_start = false;
			}

	/*		drawText("Join ~r~Discord.io~w~/~g~ScoobyMenu", 7, 0.15, 0.03f, 0.75f, 0.75f, titleTextRed, titleTextGreen, titleTextBlue, titleTextOpacity, true);*/

			g_UiManager->AddSubmenu<RegularSubmenu>("Main Menu", Home_Menu, [](RegularSubmenu* sub)
				{
					//	sub->AddOption<BoolOption<bool>>("Spin me right around", nullptr, &rotating, BoolDisplay::OnOff_Icon);

					sub->AddOption<SubOption>("Player", nullptr, Local_Menu);
			sub->AddOption<SubOption>("Network", nullptr, Network);

			//	sub->AddOption<SubOption>("Helpful", nullptr, quick);
			sub->AddOption<SubOption>("Teleport", nullptr, Teleport_Menu);
			sub->AddOption<SubOption>("Weapon", nullptr, Weapon_Menu);
			sub->AddOption<SubOption>("Vehicle", nullptr, Vehicle_Menu);
			//sub->AddOption<SubOption>("Vehicle Spawner", nullptr, Vehicle_Spawner);
			//sub->AddOption<SubOption>("Vehicle dlc list ", nullptr, Vehicles_DLC);
			//sub->AddOption<SubOption>("Ped Spawner (SP Only)", nullptr, Bodygurad);
			//sub->AddOption<SubOption>("Map Spawner", nullptr, Maps);
			sub->AddOption<SubOption>("Recovery", nullptr, Recovery_Menu);
			//sub->AddOption<SubOption>("Ped Spawner", nullptr, Bodygurad);

			sub->AddOption<SubOption>("Misc", nullptr, Halloween);
			//sub->AddOption<BoolOption<bool>>("Test", nullptr, &TEST1, BoolDisplay::OnOff_Icon);




		/*	sub->AddOption<BoolOption<bool>>("Test Join & Leave", "Spins you around.", &g_misc_player_join_leave_notify, BoolDisplay::OnOff_Icon, false, [] {});
*/

	/*		sub->AddOption<SubOption>("idk random", "all pasted shit haven't tested may work or not idc", idk);
*/

			sub->AddOption<SubOption>("Settings", nullptr, SubmenuSettings);

				});





			
			


			g_UiManager->AddSubmenu<RegularSubmenu>("Map spawner", Maps, [](RegularSubmenu* sub)
				{







					sub->AddOption<RegularOption>("tp to maze bank", "Maze bank 4 ramps", []
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
						});









			sub->AddOption<RegularOption>("Load 4 ramps onto Maze", "Maze bank 4 ramps", []
				{
					PlaceObjectByHash(3522933110, -81.3886, -814.648, 325.169, 0, -0, 180, -1, 7);
			PlaceObjectByHash(3681122061, -81.7456, -809.064, 324.799, 0.500021, 2.66804, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -86.1333, -802.279, 321.92, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -89.7406, -796.701, 316.539, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -93.601, -790.725, 310.777, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -97.4741, -784.73, 304.997, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -101.373, -778.696, 299.179, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -105.233, -772.72, 293.417, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -109.106, -766.725, 287.637, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -112.954, -760.769, 281.894, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -116.827, -754.773, 276.113, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -120.687, -748.798, 270.352, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -124.518, -742.868, 264.636, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -128.358, -736.925, 258.909, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -132.22, -730.949, 253.151, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -136.081, -724.974, 247.394, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -139.943, -718.998, 241.636, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -143.826, -712.99, 235.846, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -147.667, -707.047, 230.12, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -151.508, -701.104, 224.394, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -155.369, -695.128, 218.636, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -159.252, -689.12, 212.846, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -163.072, -683.209, 207.152, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -166.976, -677.168, 201.331, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -170.838, -671.193, 195.573, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -174.7, -665.217, 189.815, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -178.583, -659.209, 184.026, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -182.444, -653.233, 178.268, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -186.327, -647.225, 172.479, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -190.189, -641.249, 166.721, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -194.03, -635.306, 160.994, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -197.871, -629.363, 155.268, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -201.711, -623.42, 149.542, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -205.552, -617.477, 143.815, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -209.393, -611.534, 138.089, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -213.255, -605.559, 132.331, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -217.095, -599.616, 126.605, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -220.957, -593.64, 120.847, -38.9999, -1.45141, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -222.245, -591.648, 118.928, -33.8999, 1.02453, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -223.349, -589.94, 117.561, -29.31, 1.79292, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -224.58, -588.036, 116.288, -26.25, 5.12264, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -225.869, -586.04, 115.116, -24.7199, -1.10991, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -227.127, -584.095, 114.05, -21.6599, 1.8783, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -228.615, -581.794, 112.961, -19.6199, 1.02453, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -230.201, -579.341, 111.92, -17.0699, -0, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -232.121, -576.369, 110.833, -12.9899, 4.26887, 32.8808, -1, 7);
			PlaceObjectByHash(3681122061, -234.105, -573.302, 109.991, -9.9299, -2.98821, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -236.628, -569.396, 109.329, -7.3799, -4.26887, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -239.81, -564.475, 108.721, -4.3199, 1.28066, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -241.76, -561.459, 108.549, -0.7499, -1.12058, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -244.04, -557.932, 108.494, 2.82011, -2.77476, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -246.372, -554.326, 108.705, 5.8801, -2.77476, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -248.668, -550.777, 109.14, 10.4701, 8.96462, 32.8806, -1, 7);
			PlaceObjectByHash(3681122061, -251.664, -546.138, 110.313, 13.5301, 1.15259, 32.8806, -1, 7);
			PlaceObjectByHash(3681122061, -254.537, -541.694, 111.791, 16.5901, 4.26887, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -256.28, -538.999, 112.748, 19.6501, -1.19528, 32.8807, -1, 7);
			PlaceObjectByHash(3681122061, -65.9078, -814.752, 326.106, 19.89, 4.26887, -53.8105, -1, 7);
			PlaceObjectByHash(3681122061, -58.6541, -809.444, 327.336, -4.08004, -2.13443, -53.8103, -1, 7);
			PlaceObjectByHash(3681122061, -52.4476, -804.909, 323.715, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -47.2332, -801.09, 317.168, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -42.0187, -797.272, 310.621, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -36.8326, -793.474, 304.109, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -31.5898, -789.635, 297.526, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -26.4037, -785.838, 291.014, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -21.1893, -782.019, 284.467, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -15.9748, -778.201, 277.919, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -10.7604, -774.383, 271.372, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -5.57426, -770.585, 264.86, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, -0.359839, -766.767, 258.313, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 4.82623, -762.969, 251.799, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 10.0123, -759.171, 245.285, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 15.2268, -755.353, 238.735, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 20.4412, -751.535, 232.184, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 25.6273, -747.737, 225.67, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 30.8135, -743.939, 219.155, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 36.0279, -740.121, 212.605, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 41.214, -736.323, 206.091, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 46.4285, -732.505, 199.54, -45.3899, 2.56132, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 48.4122, -731.052, 197.049, -41.8198, 1.62217, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 49.5549, -730.218, 195.782, -38.2499, 3.24434, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 51.171, -729.035, 194.203, -36.2098, 2.39057, -53.81, -1, 7);
			PlaceObjectByHash(3681122061, 52.8966, -727.773, 192.637, -33.1499, -6.83019, -53.8101, -1, 7);
			PlaceObjectByHash(3681122061, 54.586, -726.537, 191.27, -30.0898, 8.70849, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 56.5413, -725.105, 189.866, -25.4998, 7.59859, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 58.8359, -723.425, 188.509, -22.4398, 4.26887, -53.81, -1, 7);
			PlaceObjectByHash(3681122061, 60.738, -722.033, 187.536, -18.3599, 1.10991, -53.81, -1, 7);
			PlaceObjectByHash(3681122061, 63.1509, -720.268, 186.544, -15.8098, 5.03727, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 65.131, -718.821, 185.849, -12.7498, 5.07995, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 67.1384, -717.352, 185.286, -9.17981, 4.78113, -53.81, -1, 7);
			PlaceObjectByHash(3681122061, 69.2894, -715.776, 184.855, -4.5898, 4.18349, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 71.7831, -713.952, 184.607, 0.000193536, 4.16213, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 74.0832, -712.268, 184.607, 3.06019, 3.7566, -53.81, -1, 7);
			PlaceObjectByHash(3681122061, 76.0175, -710.853, 184.736, 8.1602, 4.35424, -53.81, -1, 7);
			PlaceObjectByHash(3681122061, 77.7752, -709.567, 185.048, 13.2602, 5.50684, -53.81, -1, 7);
			PlaceObjectByHash(3681122061, 79.6997, -708.158, 185.61, 17.3402, 3.7566, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 81.3947, -706.918, 186.266, 21.9302, 4.26887, -53.81, -1, 7);
			PlaceObjectByHash(3681122061, 83.3036, -705.52, 187.219, 26.0102, 9.39151, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 85.6244, -703.821, 188.622, 29.0702, 1.96368, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 87.3526, -702.556, 189.812, 33.1501, 2.90283, -53.8098, -1, 7);
			PlaceObjectByHash(3681122061, 89.2107, -701.196, 191.316, 37.2301, 4.86651, -53.8098, -1, 7);
			PlaceObjectByHash(3681122061, 90.8492, -699.998, 192.859, 41.82, -2.56132, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 92.6236, -698.701, 194.826, 46.41, 8.2816, -53.8099, -1, 7);
			PlaceObjectByHash(3681122061, 94.2096, -697.539, 196.89, 52.0199, 6.57406, -53.8098, -1, 7);
			PlaceObjectByHash(3681122061, 95.6251, -696.503, 199.137, 56.61, 9.22075, -53.8097, -1, 7);
			PlaceObjectByHash(3681122061, 96.9799, -695.512, 201.683, 61.7098, 8.53774, -53.8097, -1, 7);
			PlaceObjectByHash(3681122061, 98.1658, -694.646, 204.413, 65.7899, 5.03726, -53.8096, -1, 7);
			PlaceObjectByHash(3681122061, -69.0186, -829.452, 324.775, 0, -0, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -65.276, -836.288, 321.491, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -62.2554, -842.061, 315, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -59.2515, -847.802, 308.544, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -56.2313, -853.574, 302.053, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -53.1945, -859.378, 295.526, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -50.2071, -865.088, 289.106, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -47.2032, -870.829, 282.65, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -44.1829, -876.602, 276.159, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -41.1626, -882.374, 269.667, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -38.1751, -888.084, 263.247, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -35.1713, -893.825, 256.791, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -32.1674, -899.566, 250.335, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -29.1635, -905.307, 243.879, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -26.1432, -911.079, 237.388, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -23.1393, -916.821, 230.932, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -20.119, -922.593, 224.44, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -17.1152, -928.334, 217.985, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -14.1112, -934.075, 211.529, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -11.1235, -939.785, 205.108, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -8.13589, -945.495, 198.687, -44.8796, 3.24434, -152.398, -1, 7);
			PlaceObjectByHash(3681122061, -5.28891, -951.101, 192.102, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, -2.35757, -956.552, 185.364, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 0.589775, -962.033, 178.59, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 3.5211, -967.483, 171.852, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 9.3998, -978.414, 158.339, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 6.46847, -972.964, 165.077, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 12.3311, -983.865, 151.601, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 15.2944, -989.375, 144.789, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 21.1569, -1000.28, 131.313, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 18.2417, -994.856, 138.014, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 24.0722, -1005.7, 124.612, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 27.0355, -1011.21, 117.801, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 29.9828, -1016.69, 111.026, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 35.8294, -1027.56, 97.5867, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 37.2241, -1030.15, 94.4555, -44.3698, -1.70754, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 38.7475, -1032.99, 91.3086, -39.7798, -4.26887, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 39.7483, -1034.85, 89.5491, -36.7197, 3.4151, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 40.9818, -1037.14, 87.6062, -33.6597, -2.21981, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 42.1248, -1039.27, 85.999, -30.0898, -1.96368, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 32.9141, -1022.14, 104.288, -47.4298, -1.79292, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 43.3132, -1041.47, 84.5449, -26.5197, -1.79293, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 44.7115, -1044.08, 83.0715, -23.4597, -2.39056, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 45.9496, -1046.38, 81.937, -20.3997, -2.47594, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 47.0815, -1048.48, 81.0483, -17.3397, -2.09174, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 48.302, -1050.75, 80.2436, -14.7897, -8.96462, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 50.0647, -1054.03, 79.2608, -13.2597, -2.77476, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 52.0238, -1057.67, 78.2861, -11.7297, -1.45141, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 53.7395, -1060.86, 77.5341, -9.17973, -1.1099, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 55.7265, -1064.56, 76.8558, -6.11973, -6.61674, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 57.3746, -1067.62, 76.4825, -3.56972, -9.60496, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 59.3125, -1071.23, 76.2272, 0.000276446, -9.05818, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 61.112, -1074.58, 76.2272, 4.08028, -8.00412, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 62.529, -1077.21, 76.4405, 7.65027, -7.04364, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 64.0779, -1080.1, 76.8796, 10.7103, -1.28066, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 65.9388, -1083.55, 77.623, 14.2802, -1.70755, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 67.4076, -1086.29, 78.4126, 17.3403, -1.57948, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, 68.7639, -1088.81, 79.3066, 21.4202, 1.36604, -151.734, -1, 7);
			PlaceObjectByHash(3681122061, -86.0915, -825.576, 324.775, 0, -0, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -99.1939, -833.684, 315.911, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -105.248, -837.511, 310.056, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -93.1729, -829.876, 321.734, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -111.268, -841.319, 304.233, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -123.245, -848.891, 292.651, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -147.333, -864.12, 269.359, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -141.278, -860.292, 275.213, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -135.256, -856.485, 281.036, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -129.266, -852.699, 286.828, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -117.224, -845.084, 298.474, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -165.367, -875.521, 251.921, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -213.415, -905.895, 205.464, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -207.426, -902.108, 211.255, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -201.403, -898.301, 217.078, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -195.414, -894.515, 222.87, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -183.434, -886.942, 234.452, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -177.445, -883.156, 240.244, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -171.422, -879.348, 246.067, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -159.378, -871.734, 257.713, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -153.355, -867.927, 263.536, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -189.424, -890.728, 228.661, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -231.449, -917.296, 188.027, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -225.46, -913.509, 193.818, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -219.47, -909.723, 199.609, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -237.439, -921.082, 182.235, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -284.806, -951.016, 167.673, 28.5601, -7.5132, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -289.048, -953.697, 170.578, 34.1701, -3.41509, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -290.727, -954.757, 171.926, 37.23, 3.41509, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -286.998, -952.399, 169.084, 31.62, -1.36604, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -282.375, -949.481, 166.27, 26.0101, 3.50047, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -280.014, -947.991, 165.174, 21.4201, -6.83019, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -277.4, -946.336, 164.178, 17.8501, -3.15896, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -270.266, -941.827, 162.896, 4.59013, -1.79292, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -266.683, -939.562, 163.103, -6.11989, -1.38738, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -259.328, -934.913, 165.339, -17.8499, -4.69576, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -253.478, -931.22, 168.474, -26.01, -4.18349, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -248.103, -927.823, 172.247, -33.66, -5.97642, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -243.429, -924.868, 176.444, -39.27, -2.30519, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -256.593, -933.187, 166.676, -22.4399, -5.97641, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -262.183, -936.72, 164.252, -14.2799, -3.20165, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -268.321, -940.597, 162.896, 0.000125527, -1.95033, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -272.668, -943.344, 163.123, 8.67012, -2.86014, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -275.091, -944.877, 163.561, 12.7501, -5.1226, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -249.757, -928.867, 170.944, -31.11, -6.0617, 122.286, -1, 7);
			PlaceObjectByHash(3681122061, -251.566, -930.012, 169.653, -27.54, -3.58585, 122.286, -1, 7);
				});

			sub->AddOption<RegularOption>("tp to Airport Loop", "Airport Loop", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1074, -3201, 13, 1, 0, 0, 1);
				});

			sub->AddOption<RegularOption>("Load Airport Loop", "Airport Loop", []
				{
					PlaceObjectByHash(3966705493, -1041.89, -3219.51, 10.1797, -2.43331, 5.32208, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1037.79, -3221.47, 10.3641, -2.43331, 5.32208, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1034.16, -3223.3, 10.5366, -2.43331, 5.32208, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1036.76, -3219.45, 10.1526, -2.43331, 5.32208, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1033.12, -3221.28, 10.3251, -2.43331, 5.32208, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1029.37, -3225.6, 11.1956, -11.6033, 5.32207, 62.9335, -1, 10);
			PlaceObjectByHash(3966705493, -1028.33, -3223.58, 10.9842, -11.6033, 5.32207, 62.9335, -1, 10);
			PlaceObjectByHash(3966705493, -1024.27, -3225.54, 12.1104, -18.1533, 5.32205, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1025.44, -3227.83, 12.3497, -18.1533, 5.32205, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1020.36, -3230.06, 15.7972, -40.4234, 5.32214, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1019.22, -3227.83, 15.5634, -40.4234, 5.32214, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1014.85, -3229.56, 20.4393, -50.9034, 5.3221, 62.9337, -1, 10);
			PlaceObjectByHash(3966705493, -1016.07, -3231.95, 20.6898, -50.9034, 5.3221, 62.9337, -1, 10);
			PlaceObjectByHash(3966705493, -1012.88, -3232.96, 26.0664, -64.0034, 5.32209, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1011.63, -3230.51, 25.8104, -64.0034, 5.32209, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1009.27, -3231.06, 32.0819, -73.1735, 5.32204, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1010.52, -3233.51, 32.3379, -73.1735, 5.32214, 62.9337, -1, 10);
			PlaceObjectByHash(3966705493, -1009.36, -3233.48, 38.2311, -83.6535, 5.32208, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1008.09, -3230.98, 37.9695, -83.6535, 5.32208, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1007.71, -3230.43, 44.185, -92.8235, 6.63212, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1009.05, -3228.93, 49.9682, -119.024, 6.63217, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1008.93, -3232.81, 44.4969, -92.8235, 6.63212, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1010.27, -3231.31, 50.2801, -119.024, 6.63217, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1011.96, -3226.91, 54.0691, -142.604, 6.6321, 62.9337, -1, 10);
			PlaceObjectByHash(3966705493, -1013.1, -3229.14, 54.3602, -142.604, 6.6321, 62.9337, -1, 10);
			PlaceObjectByHash(3966705493, -1017.49, -3226.51, 57.2125, -159.634, 6.63211, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1022.14, -3223.91, 58.9186, -168.804, 6.63213, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1035.97, -3216.05, 58.7162, 155.826, 1.39214, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1031.37, -3218.71, 60.1775, 176.786, 6.63213, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1026.33, -3221.63, 59.8766, -168.804, 6.63212, 60.3136, -1, 10);
			PlaceObjectByHash(3966705493, -1020.98, -3221.63, 58.6206, -168.804, 6.63213, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1024.97, -3219.25, 59.5578, -168.804, 6.63212, 60.3136, -1, 10);
			PlaceObjectByHash(3966705493, -1016.33, -3224.24, 56.9145, -159.634, 6.63211, 62.9336, -1, 10);
			PlaceObjectByHash(3966705493, -1029.99, -3216.28, 59.8517, 176.786, 6.63213, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1029.99, -3216.28, 59.8517, 176.786, 6.63213, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1034.73, -3213.86, 58.655, 155.826, 1.39214, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1039.18, -3211.42, 55.2255, 138.796, 1.39206, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1039.18, -3211.42, 55.2255, 138.796, 1.39206, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1040.42, -3213.61, 55.2867, 138.796, 1.39206, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1044.34, -3211.51, 50.6082, 128.316, 1.39213, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1043.09, -3209.33, 50.547, 128.316, 1.39213, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1046.16, -3207.74, 45.1535, 117.837, 1.39215, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1048.17, -3206.74, 39.6252, 104.737, 1.39214, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1048.92, -3206.44, 33.1586, 87.6005, 0.0914728, 60.6227, -1, 10);
			PlaceObjectByHash(3966705493, -1048.18, -3206.88, 26.5446, 77.3408, 0.0913896, 60.6229, -1, 10);
			PlaceObjectByHash(3966705493, -1049.44, -3209.13, 26.5487, 77.3407, 0.0913427, 60.6228, -1, 10);
			PlaceObjectByHash(3966705493, -1047.3, -3210.37, 21.3947, 56.6411, 0.0914017, 58.823, -1, 10);
			PlaceObjectByHash(3966705493, -1047.3, -3210.37, 21.3947, 56.6411, 0.0914017, 58.823, -1, 10);
			PlaceObjectByHash(3966705493, -1045.93, -3208.12, 21.3905, 56.6411, 0.0914017, 58.823, -1, 10);
			PlaceObjectByHash(3966705493, -1042.61, -3210.12, 16.8766, 42.1517, 0.0913785, 58.8231, -1, 10);
			PlaceObjectByHash(3966705493, -1038.64, -3212.63, 13.6141, 28.2018, 0.0914187, 58.8231, -1, 10);
			PlaceObjectByHash(3966705493, -1039.97, -3214.83, 13.6182, 28.2018, 0.0914187, 58.8231, -1, 10);
			PlaceObjectByHash(3966705493, -1034.82, -3217.71, 11.1985, 16.4116, 0.0913871, 69.303, -1, 10);
			PlaceObjectByHash(3966705493, -1033.53, -3215.55, 11.1081, 16.4117, 0.0913619, 66.683, -1, 10);
			PlaceObjectByHash(3966705493, -1043.97, -3212.37, 16.8808, 42.1517, 0.0913785, 58.8231, -1, 10);
			PlaceObjectByHash(3966705493, -1050.19, -3208.69, 33.1627, 87.6005, 0.0914728, 60.6227, -1, 10);
			PlaceObjectByHash(3966705493, -1049.45, -3208.98, 39.6879, 104.737, 1.39214, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1047.44, -3209.98, 45.2161, 117.837, 1.39215, 60.3137, -1, 10);
			PlaceObjectByHash(3966705493, -1047.44, -3209.98, 45.2161, 117.837, 1.39215, 60.3137, -1, 10);
				});


			sub->AddOption<RegularOption>("-------Pasted dogshit maps-------", "Airport Loop", []
				{

				});






			sub->AddOption<SubOption>("Maze Bank Small Ramp", nullptr, SubmenuRamp1);
			sub->AddOption<SubOption>("Maze Bank Roof Ramp", nullptr, SubmenuRamp2);
			sub->AddOption<SubOption>("Beach Ramp", nullptr, SubmenuRamp3);
			sub->AddOption<SubOption>("Mount Chilliad Ramp", nullptr, SubmenuRamp4);
			sub->AddOption<SubOption>("Airport Mini Ramp", nullptr, SubmenuRamp5);
			sub->AddOption<SubOption>("Airport Gate Ramp", nullptr, SubmenuRamp6);
			sub->AddOption<SubOption>("Space Tower", nullptr, SubmenuRamp7);
			sub->AddOption<SubOption>("Quad Ramp", nullptr, SubmenuRamp8);
			sub->AddOption<SubOption>("Fort", nullptr, SubmenuRamp9);
			sub->AddOption<SubOption>("Halfpipe", nullptr, SubmenuRamp10);
			sub->AddOption<SubOption>("Airport Loop Ramp", nullptr, SubmenuRamp11);
			sub->AddOption<SubOption>("Mega Ramp", nullptr, SubmenuRamp12);



			sub->AddOption<RegularOption>("will add more soon", "dog", []
				{

				});

				});





				g_UiManager->AddSubmenu<RegularSubmenu>("idk", idk, [](RegularSubmenu* sub)
					{

								sub->AddOption<RegularOption>("Summon The Gooch", nullptr, []
									{
										globalHandle(2756261).As<int>() = 171;
				globalHandle(2756259).As<int>() = 6;
									});
				sub->AddOption<RegularOption>("Summon Phantom Car", nullptr, []
					{
						globalHandle(2756257 + 3 + 1).As<int>() = 143;
				globalHandle(2756257 + 2).As<int>() = 6;
					});
				sub->AddOption<RegularOption>("Summon Slasher", nullptr, []
					{
						globalHandle(2756257 + 3 + 1).As<int>() = 144;
				globalHandle(2756257 + 2).As<int>() = 6;
					});
				sub->AddOption<RegularOption>("Summon Cerberus", nullptr, []
					{
						globalHandle(2756257 + 3 + 1).As<int>() = 149;
				globalHandle(2756257 + 2).As<int>() = 6;
					});
				sub->AddOption<RegularOption>("Stash House", nullptr, []
					{
						globalHandle(2756257 + 3 + 1).As<int>() = 169;
				globalHandle(2756257 + 2).As<int>() = 6;
					});
				sub->AddOption<RegularOption>("Taxi Driver", nullptr, []
					{
						globalHandle(2756257 + 3 + 1).As<int>() = 170;
				globalHandle(2756257 + 2).As<int>() = 6;
					});
				sub->AddOption<RegularOption>("Bank Shootout", nullptr, []
					{
						globalHandle(2756257 + 3 + 1).As<int>() = 172;
				globalHandle(2756257 + 2).As<int>() = 6;
					});
						

				sub->AddOption<RegularOption>("draw onscreen Keyboard", nullptr, []
					{

					});
				



				
				sub->AddOption<RegularOption>("hard spoof rid ", nullptr, []
					{

					});

				sub->AddOption<RegularOption>("test ", nullptr, []
					{

					});


				sub->AddOption<RegularOption>("do a overdose like george", nullptr, []
					{

					});



				sub->AddOption<RegularOption>("draw mouse ui ", nullptr, []
					{

					});




				sub->AddOption<BoolOption<bool>>("Toggle UFO Event", nullptr, &UFOEvent, BoolDisplay::OnOff_Icon);

	

				sub->AddOption<BoolOption<bool>>("Toggle Snow", nullptr, &Snowing, BoolDisplay::OnOff_Icon);




	
					});

			g_UiManager->AddSubmenu<RegularSubmenu>("Player", Local_Menu, [](RegularSubmenu* sub)
				{
					g_UiManager->AddSubmenu<RegularSubmenu>("Scenarios", Scenarios, [](RegularSubmenu* sub)
						{
							sub->AddOption<RegularOption>("Stop All Scenarios", nullptr, [] { AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID()); AI::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID()); });
			sub->AddOption<RegularOption>("Paparazzi", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_PAPARAZZI", 0, true); });
			sub->AddOption<RegularOption>("Drug Dealer", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_DRUG_DEALER_HARD", 0, true); });
			sub->AddOption<RegularOption>("Drinking Coffee", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_AA_COFFEE", 0, true); });
	
			
			
			
			
			
			
			sub->AddOption<RegularOption>("Playing Instruments", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MUSICIAN", 0, true); });
			sub->AddOption<RegularOption>("Flexing", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MUSCLE_FLEX", 0, true); });
			sub->AddOption<RegularOption>("Jogging", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_JOG_STANDING", 0, true); });
			sub->AddOption<RegularOption>("Binoculars", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_BINOCULARS", 0, true); });
			sub->AddOption<RegularOption>("Clipboard", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_CLIPBOARD", 0, true); });
			sub->AddOption<RegularOption>("Bench Press", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_SEAT_MUSCLE_BENCH_PRESS", 0, true); });
			sub->AddOption<RegularOption>("Chin Ups", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_MUSCLE_CHIN_UPS", 0, true); });
			sub->AddOption<RegularOption>("BBQ", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_BBQ", 0, true); });
			sub->AddOption<RegularOption>("Superhero", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SUPERHERO", 0, true); });
			sub->AddOption<RegularOption>("Fishing", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_STAND_FISHING", 0, true); });
			sub->AddOption<RegularOption>("Drilling", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_CONST_DRILL", 0, true); });
			sub->AddOption<RegularOption>("Tennis", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_TENNIS_PLAYER", 0, true); });
			sub->AddOption<RegularOption>("Hammering", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_HAMMERING", 0, true); });
			sub->AddOption<RegularOption>("Smoking Pot", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SMOKING_POT", 0, true); });
			sub->AddOption<RegularOption>("Welding", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_WELDING", 0, true); });
			sub->AddOption<RegularOption>("Gold Player", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_GOLF_PLAYER", 0, true); });
			sub->AddOption<RegularOption>("Drinking", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_DRINKING", 0, true); });
			sub->AddOption<RegularOption>("Idle Cop", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_COP_IDLES", 0, true); });
			sub->AddOption<RegularOption>("Film Shocking", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, true); });
			sub->AddOption<RegularOption>("Leaf Blower", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 0, true); });
			sub->AddOption<RegularOption>("Security", nullptr, [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SECURITY_SHINE_TORCH", 0, true); });
						});
			g_UiManager->AddSubmenu<RegularSubmenu>("Animations", Animations, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Stop All Animations", nullptr, [] { AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID()); AI::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID()); });
			sub->AddOption<RegularOption>("Jerk Off", nullptr, [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "switch@trevor@jerking_off", "trev_jerking_off_loop"); });

	/*		sub->AddOption<RegularOption>("become a monkey nigger", nullptr, [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "missfbi5ig_30monkeys", "monkey_a_freakout_loop"); });
*/



			sub->AddOption<RegularOption>("Sex Receiver", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "rcmpaparazzo_2", (char*)"shag_loop_poppy"); });
			sub->AddOption<RegularOption>("Sex Giver", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "rcmpaparazzo_2", (char*)"shag_loop_a"); });
			sub->AddOption<RegularOption>("Stripper Dance", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0,"mini@strip_club@private_dance@part1", (char*)"priv_dance_p1"); });
			sub->AddOption<RegularOption>("Pole Dance", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "mini@strip_club@pole_dance@pole_dance1", (char*)"pd_dance_01"); });
			sub->AddOption<RegularOption>("Push Ups", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "amb@world_human_push_ups@male@base", (char*)"base"); });
			sub->AddOption<RegularOption>("Sit Ups", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "amb@world_human_sit_ups@male@base", (char*)"base"); });
			sub->AddOption<RegularOption>("Celebrate", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "rcmfanatic1celebrate", (char*)"celebrate"); });
			sub->AddOption<RegularOption>("Electrocution", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "ragdoll@human", (char*)"electrocute"); });
			sub->AddOption<RegularOption>("Suicide", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "mp_suicide", (char*)"pistol"); });
			sub->AddOption<RegularOption>("Showering", "", [] { Mod_Hub_Base::playAnimation(PLAYER::PLAYER_PED_ID(), 0, "mp_safehouseshower@male@", (char*)"male_shower_idle_b"); });

		





			sub->AddOption<RegularOption>("Cat", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_CAT_SLEEPING_GROUND", 0, true); });
			sub->AddOption<RegularOption>("Cow", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_COW_GRAZING", 0, true); });
			sub->AddOption<RegularOption>("Coyote", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_COYOTE_HOWL", 0, true); });
			sub->AddOption<RegularOption>("Coyote2", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_COYOTE_WANDER", 0, true); });
			sub->AddOption<RegularOption>("Chicken", "", [] {AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_CHICKENHAWK_FEEDING", 0, true); });
			sub->AddOption<RegularOption>("Deer", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_DEER_GRAZING", 0, true); });
			sub->AddOption<RegularOption>("Rottweiler", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_DOG_BARKING_ROTTWEILER", 0, true); });
			sub->AddOption<RegularOption>("Retreiver", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_DOG_BARKING_RETRIEVER", 0, true); });
			sub->AddOption<RegularOption>("Shepard", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_DOG_BARKING_SHEPHERD", 0, true); });
			sub->AddOption<RegularOption>("Lion1", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_MOUNTAIN_LION_REST", 0, true); });
			sub->AddOption<RegularOption>("Lion2", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_MOUNTAIN_LION_WANDER", 0, true); });
			sub->AddOption<RegularOption>("Pig", "", [] { AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), (char*)"WORLD_PIG_GRAZING", 0, true); });



				});




			g_UiManager->AddSubmenu<RegularSubmenu>("Vision Options", SubmenuVisions, [](RegularSubmenu* sub)
				{

			sub->AddOption<RegularOption>("Reset", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"DEFAULT"); });
			sub->AddOption<RegularOption>("Stoned", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"stoned"); });
			sub->AddOption<RegularOption>("Orange", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"REDMIST"); });
			sub->AddOption<RegularOption>("Red", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"DEATH"); });
			sub->AddOption<RegularOption>("Cocaine", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"drug_flying_base"); });
			sub->AddOption<RegularOption>("Huffin Gas", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"DRUG_gas_huffin"); });
			sub->AddOption<RegularOption>("Wobbly", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"drug_wobbly"); });
			sub->AddOption<RegularOption>("Drunk", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"Drunk"); });
			sub->AddOption<RegularOption>("Heaven", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"Bloom"); });
			sub->AddOption<RegularOption>("3D", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"PlayerSwitchPulse"); });
			sub->AddOption<RegularOption>("Killstreak", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"MP_Killstreak"); });
			sub->AddOption<RegularOption>("Hallucinations", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"player_transition"); });
			sub->AddOption<RegularOption>("Low Quality", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"cinema_001"); });
			sub->AddOption<RegularOption>("Blurry", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"CHOP"); });
			sub->AddOption<RegularOption>("Fucked Up Screen", "", [] { GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"BarryFadeOut"); });
				});


			g_UiManager->AddSubmenu<RegularSubmenu>("Animations & Scenarios", AnimationsSSS, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Animations", nullptr, Animations);
					sub->AddOption<SubOption>("Scenarios", nullptr, Scenarios);
			
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Effects & Other", TrailsEEE, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Effects", nullptr, SubmenuEffects);
			sub->AddOption<SubOption>("Vision", nullptr, SubmenuVisions);
			sub->AddOption<SubOption>("Hand Trails", nullptr, Trails);
			
				});



			g_UiManager->AddSubmenu<RegularSubmenu>(("Wardrobe"), SubmenuWardrobe, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>(("Premade outfits"), "Too lazy to make more", Premade);



			//sub->AddOption<RegularOption>(("Load BincoHaX"), "will load BincoHaX ", [] {

			//	ShellExecute(NULL, L"open", L"C:\\Scooby\\Outfit\\BincoHaXUI.exe", NULL, NULL, SW_SHOWDEFAULT);

			//	});

			sub->AddOption<RegularOption>(("Load xDev Outfit editor"), "will load xDev Outfit editor", [] {

				ShellExecute(NULL, L"open", L"C:\\Scooby\\Outfit\\Outfit_Editor.exe", NULL, NULL, SW_SHOWDEFAULT);

				});

			sub->AddOption<ChooseOption<const char*, std::size_t>>(("Component:"), "Thanks k3", &m_ComponentIdList, &m_ClothIterator);
			switch (m_ClothIterator)
			{
			case 0:
			{

			}
			break;
			case 1:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &s1, 0, 215, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, s1, s2, s3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &s2, 0, 215, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, s1, s2, s3); });
			}
			break;
			case 2:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &a1, 0, 210, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, a1, a2, a3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &a2, 0, 210, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, a1, a2, a3); });
			}
			break;
			case 3:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &b1, 0, 210, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, b1, b2, b3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &b2, 0, 210, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, b1, b2, b3); });
			}
			break;
			case 4:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &c1, 0, 163, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, c1, c2, c3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &c2, 0, 163, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, c1, c2, c3); });
			}
			break;
			case 5:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &d1, 0, 110, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, d1, d2, d3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &d2, 0, 110, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, d1, d2, d3); });
			}
			break;
			case 6:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &e1, 0, 127, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, e1, e2, e3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &e2, 0, 127, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, e1, e2, e3); });
			}
			break;
			case 7:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &f1, 0, 167, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, f1, f2, f3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &f2, 0, 167, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, f1, f2, f3); });
			}
			break;
			case 8:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &g1, 0, 200, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, g1, g2, g3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &g2, 0, 50, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, g1, g2, g3); });
			}
			break;
			case 9:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &h1, 0, 60, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, h1, h2, h3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &h2, 0, 60, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, h1, h2, h3); });
			}
			break;
			case 10:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &i1, 0, 452, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, i1, i2, i3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &i2, 0, 25, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, i1, i2, i3); });
			}
			break;
			case 11:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &j1, 0, 452, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, j1, j2, j3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &j2, 0, 25, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, j1, j2, j3); });
			}
			break;
			case 12:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &k1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, k1, k2, k3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &k2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, k1, k2, k3); });
			}
			break;
			}
			sub->AddOption<RegularOption>(("Reset"), nullptr, [] { ResetPedVariation(); });
			sub->AddOption<RegularOption>(("Randomize"), nullptr, [] { RandomizePedVariation(); });



			sub->AddOption<RegularOption>("Rockstar Logo", "", []
				{
					PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
			switch (index)
			{
			case 0:
				PED::_SET_PED_DECORATION(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY((char*)"mphipster_overlays"), GAMEPLAY::GET_HASH_KEY((char*)"fm_rstar_m_tshirt_000"));
				break;
			case 1:
				PED::_SET_PED_DECORATION(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY((char*)"mphipster_overlays"), GAMEPLAY::GET_HASH_KEY((char*)"fm_rstar_m_tshirt_001"));
				break;
			case 2:
				PED::_SET_PED_DECORATION(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY((char*)"mphipster_overlays"), GAMEPLAY::GET_HASH_KEY((char*)"fm_rstar_m_tshirt_002"));
				break;
			}
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY((char*)"TSHIRT_DECAL_HASH"), GAMEPLAY::GET_HASH_KEY((char*)"fm_rstar_m_tshirt_000"), 1);
			index++;
			if (index > 2)
				index = 0;
				});

				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Premade outfits", Premade, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("----Male outfits----", "", []
						{

						});

			sub->AddOption<RegularOption>("Blackout (Male)", "Blackout (Male)", []
				{
					ResetAppearance();
			changeAppearance("TORSO", 96, 0);
			changeAppearance("HATS", 40, 0);
			changeAppearance("MASK", 54, 0);
			changeAppearance("GLASSES", 0, 1);
			changeAppearance("LEGS", 34, 0);
			changeAppearance("SHOES", 25, 0);
			changeAppearance("SPECIAL1", 0, 0);
			changeAppearance("SPECIAL2", 15, 0);
			changeAppearance("TORSO2", 53, 0);
			changeAppearance("HANDS", 51, 0);
				});


			sub->AddOption<RegularOption>("Whiteout (Male)", "Whiteout (Male)", []
				{
					ResetAppearance();
			changeAppearance("TORSO", 170, 13);
			changeAppearance("HATS", 142, 1);
			changeAppearance("MASK", 185, 8);
			changeAppearance("GLASSES", 25, 4);
			changeAppearance("LEGS", 102, 6);
			changeAppearance("SHOES", 71, 11);
			changeAppearance("SPECIAL1", 170, 13);
			changeAppearance("SPECIAL2", 170, 13); //overtop
			changeAppearance("TORSO2", 53, 1); // undertop
			changeAppearance("HANDS", 174, 1);
				});


			sub->AddOption<RegularOption>("Cop", "", []
				{
			ResetAppearance();
			changeAppearance((char*)"TORSO", 0, 0);
			changeAppearance((char*)"GLASSES", 6, 1);
			changeAppearance((char*)"LEGS", 35, 0);
			changeAppearance((char*)"SHOES", 25, 0);
			changeAppearance((char*)"SPECIAL2", 58, 0);
			changeAppearance((char*)"TORSO2", 55, 0);
				});

			sub->AddOption<RegularOption>("----Female outfits----", "", []
				{

				});

			sub->AddOption<RegularOption>("Galaxy (Female)", "Galaxy (Female)", []
				{
					ResetAppearance();
			changeAppearance("TORSO", 287, 12);
			changeAppearance("HATS", 59, 5);
			changeAppearance("MASK", 134, 12);
			changeAppearance("GLASSES", -1, -1);
			changeAppearance("LEGS", 61, 5);
			changeAppearance("SHOES", 81, 0);
			changeAppearance("SPECIAL1", 82, 0);
			changeAppearance("SPECIAL2", 6, 0); //overtop
			changeAppearance("TORSO2", 287, 12); // undertop
			changeAppearance("HANDS", 174, 1);
				});


			sub->AddOption<RegularOption>("Cop", "", []
				{
					ResetAppearance();
			changeAppearance((char*)"TORSO", 14, 0);
			changeAppearance((char*)"GLASSES", 12, 1);
			changeAppearance((char*)"LEGS", 34, 0);
			changeAppearance((char*)"SHOES", 25, 0);
			changeAppearance((char*)"SPECIAL2", 35, 0);
			changeAppearance((char*)"TORSO2", 48, 0);
				});

			sub->AddOption<RegularOption>("The Whore", "", []
				{
					ResetAppearance();
			changeAppearance((char*)"TORSO", 15, 0);
			changeAppearance((char*)"LEGS", 22, 2);
			changeAppearance((char*)"HAIRS", 4, 0);
			changeAppearance((char*)"SHOES", 14, 0);
			changeAppearance((char*)"SPECIAL1", 2, 0);
			changeAppearance((char*)"SPECIAL2", 2, 0);
			changeAppearance((char*)"TORSO2", 0, 16);
				});


				});



			g_UiManager->AddSubmenu<RegularSubmenu>("Effects", SubmenuEffects, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Clown Appears", "", [] { PTFXCALL((char*)"scr_rcbarry2", (char*)"scr_rcbarry2", (char*)"scr_clown_appears"); });
			sub->AddOption<RegularOption>("Firework 1", "", [] { PTFXCALL((char*)"scr_indep_fireworks", (char*)"scr_indep_fireworks", (char*)"scr_indep_firework_trailburst"); });
			sub->AddOption<RegularOption>("Firework 2", "", [] { PTFXCALL((char*)"proj_xmas_firework", (char*)"proj_xmas_firework", (char*)"scr_firework_xmas_burst_rgw"); });
			sub->AddOption<RegularOption>("Firework 3", "", [] { PTFXCALL((char*)"proj_xmas_firework", (char*)"proj_xmas_firework", (char*)"scr_firework_xmas_spiral_burst_rgw"); });
			sub->AddOption<RegularOption>("Banknotes", "", [] { PTFXCALL((char*)"scr_ornate_heist", (char*)"scr_ornate_heist", (char*)"scr_heist_ornate_banknotes"); });
			sub->AddOption<RegularOption>("Truck Crash", "", [] { PTFXCALL((char*)"scr_fbi4", (char*)"scr_fbi4", (char*)"scr_fbi4_trucks_crash"); });
			sub->AddOption<RegularOption>("Alien 1", "", [] { PTFXCALL((char*)"scr_rcbarry1", (char*)"scr_rcbarry1", (char*)"scr_alien_disintegrate"); });
			sub->AddOption<RegularOption>("Alien 2", "", [] { PTFXCALL((char*)"scr_rcbarry1", (char*)"scr_rcbarry1", (char*)"scr_alien_teleport"); });
			sub->AddOption<RegularOption>("Electric Box", "", [] { PTFXCALL((char*)"scr_agencyheistb", (char*)"scr_agencyheistb", (char*)"scr_agency3b_elec_box"); });
			sub->AddOption<RegularOption>("Water Splash", "", [] { PTFXCALL((char*)"scr_fbi5a", (char*)"scr_fbi5a", (char*)"scr_fbi5_ped_water_splash"); });
			sub->AddOption<RegularOption>("Bubbles", "", [] { PTFXCALL((char*)"scr_fbi5a", (char*)"scr_fbi5a", (char*)"water_splash_ped_bubbles"); });
			sub->AddOption<RegularOption>("Blood Entry", "", [] { PTFXCALL((char*)"scr_finalec2", (char*)"scr_finalec2", (char*)"scr_finale2_blood_entry"); });
			sub->AddOption<RegularOption>("Sniper Impact", "", [] { PTFXCALL((char*)"scr_martin1", (char*)"scr_martin1", (char*)"scr_sol1_sniper_impact"); });
			sub->AddOption<RegularOption>("Dirt Throw", "", [] { PTFXCALL((char*)"core_snow", (char*)"core_snow", (char*)"cs_mich1_spade_dirt_throw"); });
			sub->AddOption<RegularOption>("Blood Stab", "", [] { PTFXCALL((char*)"scr_michael2", (char*)"scr_michael2", (char*)"scr_mich2_blood_stab"); });
			sub->AddOption<RegularOption>("Ped Sliced", "", [] { PTFXCALL((char*)"scr_michael2", (char*)"scr_michael2", (char*)"scr_abattoir_ped_sliced"); });
			sub->AddOption<RegularOption>("Camera", "", [] { PTFXCALL((char*)"scr_rcpaparazzo1", (char*)"scr_rcpaparazzo1", (char*)"scr_rcpap1_camera"); });
			sub->AddOption<RegularOption>("Meth Smoke", "", [] { PTFXCALL((char*)"scr_familyscenem", (char*)"scr_familyscenem", (char*)"scr_meth_pipe_smoke"); });
			sub->AddOption<RegularOption>("Burial Dirt", "", [] { PTFXCALL((char*)"scr_reburials", (char*)"scr_reburials", (char*)"scr_burial_dirt"); });
				});




			sub->AddOption<SubOption>("Animations & Scenarios", nullptr, AnimationsSSS);
	


			sub->AddOption<SubOption>("Effects & others", nullptr, TrailsEEE);


			//sub->AddOption<BoolOption<bool>>("La eyes (Shift)", nullptr, &FireBr, BoolDisplay::OnOff_Icon);
			sub->AddOption<SubOption>("Powers", nullptr, SubmenuForcePowers);

			sub->AddOption<SubOption>(("Wardrobe"), "", SubmenuWardrobe);

			//sub->AddOption<SubOption>("Model Changer", "", modelchanger);
			//static int alpha33{};
			//sub->AddOption<NumberOption<int>>("Player Alpha"), nullptr, &g_Alpha, 0, 255, 1, 5, true, [] { ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), g_Alpha, 0); };

			//sub->AddOption<NumberOption<int>>("Alpha", nullptr, &g_Alpha, 0, 255, 10);

			sub->AddOption<BoolOption<bool>>("Godmode", nullptr, &Godmode, BoolDisplay::OnOff_Icon);
			sub->AddOption<RegularOption>("Max Health", " max health.", [] { ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 400); });
			sub->AddOption<RegularOption>("Max Armour", "max armour.", []
				{
					PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), 200);
				});
			sub->AddOption<RegularOption>("Suicide", "Kill yourelf like george.", [] { ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0); });
		

			sub->AddOption<BoolOption<bool>>("Invisible", nullptr, &Invisible, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Never Wanted", nullptr, &NeverWanted, BoolDisplay::OnOff_Icon);


			//sub->AddOption<RegularOption>("Set Wanted Level", "Set Wanted Level.", [] { Memory::set_value<int>({ 0x08, 0x10A8, 0x888 }, playerWantedLevel);/*Memory Method*/ });
			//sub->AddOption<BoolOption<bool>>("Set Wanted Level loop", nullptr, &f_SetWanted, BoolDisplay::OnOff);




			sub->AddOption<BoolOption<bool>>("No Ragdoll", nullptr, &NoRagdoll, BoolDisplay::OnOff_Icon);
		/*	sub->AddOption<BoolOption<bool>>("Always Ragdoll", nullptr, &AlwaysRagdoll, BoolDisplay::OnOff_Icon);*/
			//sub->AddOption<BoolOption<bool>>("No Clip", nullptr, &PlayerFly, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("No Clip", nullptr, &NoclipV2, BoolDisplay::OnOff_Icon);



			sub->AddOption<BoolOption<bool>>("Super Jump", nullptr, &SuperJump, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Roll Jumper", nullptr, &NinjaJump, BoolDisplay::OnOff_Icon);

			/*		sub->AddOption<BoolOption<bool>>("Beast Jump", "weird.", &BeastJump2, BoolDisplay::OnOff_Icon);*/
			sub->AddOption<BoolOption<bool>>("Swim Anywhere", nullptr, &SwimAnywhere, BoolDisplay::OnOff_Icon);


			//sub->AddOption<BoolOption<bool>>("Glitch run", "weird.", &BeastJump, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Slide Run", "Will make your character slide", &SuperRun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Eletric Run", "Super run but with particles.", &EletricRun, BoolDisplay::OnOff_Icon);

		/*	sub->AddOption<BoolOption<bool>>("Fast Run"), nullptr, &m_fastrun, BoolDisplay::OnOff, false, [] {if (!m_fastrun) { Memory::set_value<float>({ 0x8, 0x10C8, 0xCF0 }, 1.f); }};
			sub->AddOption<BoolOption<bool>>("Fast Swim"), nullptr, &m_fastswim, BoolDisplay::OnOff, false, [] { if (!m_fastswim) { Memory::set_value<float>({ 0x8, 0x10C8, 0x170 }, 1.f); } };*/

			sub->AddOption<BoolOption<bool>>("Spin Mode", "Spins you around.", &SpinBot, BoolDisplay::OnOff_Icon, false, [] {});

	/*		sub->AddOption<BoolOption<bool>>("Disco idk", nullptr, &DiscO, BoolDisplay::OnOff_Icon);*/
			//sub->AddOption<BoolOption<bool>>("Tiny Player", nullptr, &TinyPlayer, BoolDisplay::OnOff);
			//sub->AddOption<BoolOption<bool>>("ForceField", nullptr, &ForceField, BoolDisplay::OnOff_Icon);


			sub->AddOption<BoolOption<bool>>("Superman", nullptr, &SuperMan, BoolDisplay::OnOff_Icon);
			sub->AddOption<RegularOption>("Skydive", nullptr, [] { Vector3 me = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0); WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("gadget_parachute"), 1, 0); ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), me.x, me.y, me.z + 1000, 0, 0, 0, 0); });
			//sub->AddOption<BoolOption<bool>>("Flash Mode", nullptr, &Flash, BoolDisplay::OnOff_Icon);
			//	sub->AddOption<NumberOption<float>>("Width", nullptr, &g_Width, 0.f, 10.f, 0.1f, 1);
		//        sub->AddOption<NumberOption<float>>("Height", nullptr, &g_Height, 0.f, 10.f, 0.1f, 1);


	/*		sub->AddOption<BoolOption<bool>>("Camera Zoom", nullptr, &CAMERAZOOMBOOL, BoolDisplay::OnOff);
			if (CAMERAZOOMBOOL)
				sub->AddOption<NumberOption<float>>("Camera Zoom Level", nullptr, &CamZoomFloat, 0, 100, 1, 3, true, "", "", [] {});*/

			//sub->AddOption<BoolOption<bool>>("Thermal Vision", nullptr, &ThermalVision, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Night Vision", nullptr, &NightVision, BoolDisplay::OnOff_Icon);




			//sub->AddOption<RegularOption>("Clean", nullptr, [] { PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID()); });
			//sub->AddOption<RegularOption>("Dry", nullptr, [] { PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID()); });
			

			sub->AddOption<RegularOption>("Skip Cutscene", "This option will skip the current Cutscene", []
				{
					CUTSCENE::STOP_CUTSCENE(true);
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				});
			//sub->AddOption<RegularOption>("Clone Ped", "This will clone your current ped", []
			//	{
			//		PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
			//	});
				});



			g_UiManager->AddSubmenu<RegularSubmenu>("Model Changer", modelchanger, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Animal", "", animals);
				});
			g_UiManager->AddSubmenu<RegularSubmenu>("Animal", animals, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Boar", "Sets model to a boar.", []
						{
							setmodel((char*)"a_c_boar");
						});
			sub->AddOption<RegularOption>("Cat", "Sets model to a cat.", []
				{
					setmodel((char*)"a_c_cat_01");
				});
			sub->AddOption<RegularOption>("Chickenhawk", "Sets model to a chickenhawk.", []
				{
					setmodel((char*)"a_c_chickenhawk");
				});
			sub->AddOption<RegularOption>("Chimp", "Sets model to a chimp.", []
				{
					setmodel((char*)"a_c_chimp");
				});
			sub->AddOption<RegularOption>("Chop", "Sets model to chop.", []
				{
					setmodel((char*)"a_c_chop");
				});
			sub->AddOption<RegularOption>("Cormorant", "Sets model to a cormorant.", []
				{
					setmodel((char*)"a_c_cormorant");
				});
			sub->AddOption<RegularOption>("Cow", "Sets model to a cow.", []
				{
					setmodel((char*)"a_c_cow");
				});
			sub->AddOption<RegularOption>("Coyote", "Sets model to a coyote.", []
				{
					setmodel((char*)"a_c_coyote");
				});
			sub->AddOption<RegularOption>("Crow", "Sets model to a crow.", []
				{
					setmodel((char*)"a_c_crow");
				});
			sub->AddOption<RegularOption>("Deer", "Sets model to a deer.", []
				{
					setmodel((char*)"a_c_deer");
				});
			sub->AddOption<RegularOption>("Dolphin", "Sets model to a dolphin.", []
				{
					setmodel((char*)"a_c_dolphin");
				});
			sub->AddOption<RegularOption>("Fish", "Sets model to a fish.", []
				{
					setmodel((char*)"a_c_fish");
				});
			sub->AddOption<RegularOption>("Hen", "Sets model to a hen.", []
				{
					setmodel((char*)"a_c_hen");
				});
			sub->AddOption<RegularOption>("Humpback", "Sets model to a humpback.", []
				{
					setmodel((char*)"a_c_humpback");
				});
			sub->AddOption<RegularOption>("Husky", "Sets model to a husky.", []
				{
					setmodel((char*)"a_c_husky");
				});
			sub->AddOption<RegularOption>("Killer Whale", "Sets model to a killer whale.", []
				{
					setmodel((char*)"a_c_killerwhale");
				});
			sub->AddOption<RegularOption>("Mountain Lion", "Sets model to a mountain lion.", []
				{
					setmodel((char*)"a_c_mtlion");
				});
			sub->AddOption<RegularOption>("Panther", "Sets model to a panther.", []
				{
					setmodel((char*)"a_c_panther");
				});
			sub->AddOption<RegularOption>("Pig", "Sets model to a pig.", []
				{
					setmodel((char*)"a_c_pig");
				});
			sub->AddOption<RegularOption>("Pigeon", "Sets model to a pigeon.", []
				{
					setmodel((char*)"a_c_pigeon");
				});
			sub->AddOption<RegularOption>("Poodle", "Sets model to a poodle.", []
				{
					setmodel((char*)"a_c_poodle");
				});
			sub->AddOption<RegularOption>("Pug", "Sets model to a pug.", []
				{
					setmodel((char*)"a_c_pug");
				});
			sub->AddOption<RegularOption>("Rabbit", "Sets model to a rabbit.", []
				{
					setmodel((char*)"a_c_rabbit_01");
				});
			sub->AddOption<RegularOption>("Rat", "Sets model to a rat.", []
				{
					setmodel((char*)"a_c_rat");
				});
			sub->AddOption<RegularOption>("Retriever", "Sets model to a retriever.", []
				{
					setmodel((char*)"a_c_retriever");
				});
			sub->AddOption<RegularOption>("Rhesus", "Sets model to a rhesus.", []
				{
					setmodel((char*)"a_c_rhesus");
				});
			sub->AddOption<RegularOption>("Rottweiler", "Sets model to a rottweiler.", []
				{
					setmodel((char*)"a_c_rottweiler");
				});
			sub->AddOption<RegularOption>("Seagull", "Sets model to a seagull.", []
				{
					setmodel((char*)"a_c_seagull");
				});
			sub->AddOption<RegularOption>("Hammer Head", "Sets model to a hammer head.", []
				{
					setmodel((char*)"a_c_sharkhammer");
				});
			sub->AddOption<RegularOption>("Tiger Shark", "Sets model to a tiger shark.", []
				{
					setmodel((char*)"a_c_sharktiger");
				});
			sub->AddOption<RegularOption>("Shepherd", "Sets model to a shepherd.", []
				{
					setmodel((char*)"a_c_shepherd");
				});
			sub->AddOption<RegularOption>("Stingray", "Sets model to a stingray.", []
				{
					setmodel((char*)"a_c_stingray");
				});
			sub->AddOption<RegularOption>("Westy", "Sets model to westy.", []
				{
					setmodel((char*)"a_c_westy");
				});


				});


		


				g_UiManager->AddSubmenu<RegularSubmenu>("Glow", SubmenuGlow, [](RegularSubmenu* sub)
					{

						sub->AddOption<BoolOption<bool>>("Toggle", nullptr, &WorldGlow, BoolDisplay::OnOff_Icon);
				sub->AddOption<BoolOption<bool>>("Rainbow", nullptr, &WorldGlow2, BoolDisplay::OnOff_Icon);

				sub->AddOption<NumberOption<int>>("R", nullptr, &m_Red, 0, 255);
				sub->AddOption<NumberOption<int>>("G", nullptr, &m_Green, 0, 255);
				sub->AddOption<NumberOption<int>>("B", nullptr, &m_Blue, 0, 255);
					});






			g_UiManager->AddSubmenu<RegularSubmenu>("Misc & world", Halloween, [](RegularSubmenu* sub)
				{

		    sub->AddOption<SubOption>("Map Loader", nullptr, Maps);


			sub->AddOption<RegularOption>(("Open External ESP & Aimbot"), "Opens a External Overlay for Peds/Players", [=] {

				ShellExecute(NULL, L"open", L"C:\\River\\riveresp.exe", NULL, NULL, SW_SHOWDEFAULT);

				});

			//sub->AddOption<RegularOption>(("Inject YimMenu (~g~Press inject on Xenons~w~)"), " YimMenu (~g~Press inject on Xenons~w~)", [] {

			//	ShellExecute(NULL, L"open", L"C:\\Scooby\\Xenos64.exe", NULL, NULL, SW_SHOWDEFAULT);

			//	});


			sub->AddOption<RegularOption>(("Load Kiddions"), "will load kiddions menu", [] {

				ShellExecute(NULL, L"open", L"C:\\Scooby\\Kiddions\\modest-menu.exe", NULL, NULL, SW_SHOWDEFAULT);

				});

	
			//sub->AddOption<RegularOption>("Dark Blue hud", "Give give All Weapons even the newest ones ", []
			//	{
			//		UI::REPLACE_HUD_COLOUR_WITH_RGBA(144, 105, 0, 255, 255);
			//UI::REPLACE_HUD_COLOUR_WITH_RGBA(143, 105, 0, 255, 255);
			//UI::REPLACE_HUD_COLOUR_WITH_RGBA(145, 105, 0, 255, 255);
			//UI::REPLACE_HUD_COLOUR_WITH_RGBA(140, 15, 0, 55, 255);
			//UI::REPLACE_HUD_COLOUR_WITH_RGBA(142, 15, 0, 55, 255);
			//UI::REPLACE_HUD_COLOUR_WITH_RGBA(117, 15, 0, 55, 255);
			//UI::REPLACE_HUD_COLOUR_WITH_RGBA(116, 105, 0, 255, 255);
			//UI::REPLACE_HUD_COLOUR_WITH_RGBA(18, 255, 255, 0, 255);
			//UI::REPLACE_HUD_COLOUR_WITH_RGBA(20, 155, 155, 0, 255);
			//	});

			sub->AddOption<SubOption>("Weather", nullptr, WeatherOp);

			sub->AddOption<SubOption>("Time", nullptr, TimeOp);



			sub->AddOption<SubOption>("World Glow", nullptr, SubmenuGlow);

			sub->AddOption<BoolOption<bool>>("Blackout", nullptr, &TEST3, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Dominos", "C", &Dominos, BoolDisplay::OnOff_Icon);


			sub->AddOption<BoolOption<bool>>("Disable Phone", nullptr, &DisablePhone, BoolDisplay::OnOff_Icon);


			sub->AddOption<BoolOption<bool>>("Disable Hud", nullptr, &DisableHud, BoolDisplay::OnOff_Icon);




			sub->AddOption<RegularOption>("Skip Cutscene", "This option will skip the current Cutscene", []
				{
					CUTSCENE::STOP_CUTSCENE(true);
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				});

			sub->AddOption<BoolOption<bool>>("No Gravity", nullptr, &NoGravity, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Bypass Restricted Area", nullptr, &BypassRestrictedArea, BoolDisplay::OnOff_Icon);



			sub->AddOption<RegularOption>(("Load Online Map"), nullptr, [=] {


				DLC2::_LOAD_MP_DLC_MAPS();

				});

			sub->AddOption<RegularOption>(("unload Online Map"), nullptr, [=] {


				DLC2::_UNLOAD_MP_DLC_MAPS();

				});


			sub->AddOption<RegularOption>(("Load SP Map"), nullptr, [=] {


				DLC2::_ON_ENTER_SP();

				});


			sub->AddOption<RegularOption>("Reload Map", "if ur map glitches u can use this (:", [] { GAMEPLAY::_USE_FREEMODE_MAP_BEHAVIOR(true);  });
			sub->AddOption<RegularOption>("Riot mode (Peds)", nullptr, [] { GAMEPLAY::_0x2587A48BC88DFADF(1);  });

			sub->AddOption<BoolOption<bool>>("no idle kick", "This will make it so you won't get kicked when you are AFK", &AFK, BoolDisplay::OnOff_Icon);





			sub->AddOption<BoolOption<bool>>("Mobile Radio", nullptr, &MobileRadio, BoolDisplay::OnOff_Icon);


			//sub->AddOption<RegularOption>("Skip Radio music", nullptr, [] { AUDIO::SKIP_RADIO_FORWARD(); });
			//sub->AddOption<RegularOption>("Freeze Radio music", nullptr, [] { AUDIO::FREEZE_RADIO_STATION(AUDIO::GET_PLAYER_RADIO_STATION_NAME()); });
			//sub->AddOption<RegularOption>("Unfreeze Radio music", nullptr, [] { AUDIO::UNFREEZE_RADIO_STATION(AUDIO::GET_PLAYER_RADIO_STATION_NAME()); });


			sub->AddOption<SubOption>("Riding", nullptr, ride);

			/*sub->AddOption<BoolOption<bool>>(("Dominos"), nullptr, &g_dominos, BoolDisplay::OnOff);*/
			//sub->AddOption<BoolOption<bool>>("Asteroid Shower", nullptr, &Shower, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Flying Vehicles", nullptr, &JumpingVehicles, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Jump Around Mode", nullptr, &JumpAround, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Clear Area", nullptr, &ClearArea, BoolDisplay::OnOff_Icon);



			sub->AddOption<BoolOption<bool>>("Slow Motion", nullptr, &SlowMotion, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Dead Eye", nullptr, &DeadEye, BoolDisplay::OnOff_Icon);

			//sub->AddOption<BoolOption<bool>>("Speedometer", nullptr, &Spedometer, BoolDisplay::OnOff_Icon);

			//sub->AddOption<BoolOption<bool>>("ESP Box", nullptr, &ESPBox, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Better Player Names", nullptr, &PlayerNames, BoolDisplay::OnOff_Icon);


			sub->AddOption<BoolOption<bool>>("No Collision", nullptr, &Collision, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Auto Kill Nearby Peds", nullptr, &KillPeds, BoolDisplay::OnOff_Icon);



			sub->AddOption<BoolOption<bool>>("Rainbow Cars", "Makes Cars Around You Rainbow", &RainbowVW, BoolDisplay::OnOff_Icon, false);

			sub->AddOption<RegularOption>("Boost Nearby Vehicles", nullptr, []
				{
					const int ElementAmount = 10;
			const int ArrSize = ElementAmount * 2 + 2;

			Vehicle* vehs = new Vehicle[ArrSize];
			vehs[0] = ElementAmount;
			int VehFound = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), vehs);

			for (int i = 0; i < VehFound; i++)
			{
				int OffsetID = i * 2 + 2;

				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehs[OffsetID]))
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(vehs[OffsetID], 70.f);
				else
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(vehs[OffsetID]);
			}

			delete vehs;
				});




			sub->AddOption<RegularOption>("Fix Cars around you ", nullptr, []
				{

					const int ElementAmount = 10;
			const int ArrSize = ElementAmount * 2 + 2;

			Vehicle* vehs = new Vehicle[ArrSize];
			vehs[0] = ElementAmount;
			int VehFound = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), vehs);

			for (int i = 0; i < VehFound; i++)
			{
				int OffsetID = i * 2 + 2;
				if (vehs[OffsetID] != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
				{
					RequestControlOfEnt(vehs[OffsetID]);
					for (int i = 0; i < 50; i++)
					{
						VEHICLE::SET_VEHICLE_FIXED(vehs[OffsetID]);
						VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(vehs[OffsetID]);
						VEHICLE::SET_VEHICLE_DIRT_LEVEL(vehs[OffsetID], 0);
					}

				}
			}
				});


		/*	sub->AddOption<SubOption>("idk", "Basic pasted dogshit I haven't tested", idk);*/




				});


				g_UiManager->AddSubmenu<RegularSubmenu>("Time", TimeOp, [](RegularSubmenu* sub)
					{
			    static std::int64_t hours{ 1 }, min{ 1 }, sec{ 1 };

				sub->AddOption<NumberOption<std::int64_t>>("Hour", nullptr, &hours, 0, 23, 1);
				sub->AddOption<NumberOption<std::int64_t>>("Minute", nullptr, &min, 0, 59, 1);
				sub->AddOption<NumberOption<std::int64_t>>("Second", nullptr, &sec, 0, 59, 1);
				{
					AddTimeNetwork(hours, min, sec);
				};
					});




				g_UiManager->AddSubmenu<RegularSubmenu>("Teleport", Teleport_Menu, [](RegularSubmenu* sub)
					{


						//sub->AddOption<BoolOption<bool>>("Nigger", nullptr, &SteathNigger, BoolDisplay::OnOff_Icon);

						sub->AddOption<RegularOption>("Teleport To Waypoint", nullptr, [] {
						int waypoint = UI::GET_FIRST_BLIP_INFO_ID(8);
				if (UI::DOES_BLIP_EXIST(waypoint)) {
					Vector3 WPcoords = UI::GET_BLIP_COORDS(waypoint);
					int Handle = PLAYER::PLAYER_PED_ID();
					if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0)) {
						Handle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), WPcoords.x + 5, WPcoords.y + 5, WPcoords.z + 5);
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), WPcoords.x + 5, WPcoords.y + 5, WPcoords.z + 5, false, false, false, true);
				}
							}
				);

				sub->AddOption<RegularOption>("TP Into Nearest Vehicle", "", []
					{
						Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(VEHICLE::GET_CLOSEST_VEHICLE(pos.x, pos.y, pos.z, 500.f, 0, 0));
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), VEHICLE::GET_CLOSEST_VEHICLE(pos.x, pos.y, pos.z, 500.f, 0, 0), -1);
					});


				sub->AddOption<RegularOption>("TP into last used vehicle", "yes", []
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), VEHICLE::GET_LAST_DRIVEN_VEHICLE(), -1);
					});


				sub->AddOption<RegularOption>("------------------------------", "yes", []
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), VEHICLE::GET_LAST_DRIVEN_VEHICLE(), -1);
					});

				//sub->AddOption<BoolOption<bool>>("Auto Teleport To Waypoint", "Auto Teleport To Waypoint", &AutoTeleportToWaypoint, BoolDisplay::OnOff, false);



				//sub->AddOption<SubOption>("Airports", nullptr, Airports);
				//sub->AddOption<SubOption>("IPLs", nullptr, IPLs);
				//sub->AddOption<SubOption>("Landmarks", nullptr, Landmarks);
				//sub->AddOption<SubOption>("Safe Houses", nullptr, Safehouses);
				//sub->AddOption<SubOption>("Shops", nullptr, Shops);

				sub->AddOption<BoolOption<bool>>("Cayo Perico", nullptr, &CayoIPL, BoolDisplay::OnOff_Icon);
				sub->AddOption<RegularOption>("TP to Cayo Perico", "yes", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 4517.016, -4527.2144, 4.656798); //Calais Ave

					});
				sub->AddOption<BoolOption<bool>>("North yanktom", nullptr, &NorthY, BoolDisplay::OnOff_Icon);
				sub->AddOption<RegularOption>("TP to North yanktom", "yes", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 3595.39673f, -4893.727f, 115.838394f);
					});

				//sub->AddOption<RegularOption>("North Yankton", "Teleport to North Yankton", []
				//	{
				//		STREAMING::REQUEST_IPL("prologue01");
				//STREAMING::REQUEST_IPL("Prologue01c");
				//STREAMING::REQUEST_IPL("Prologue01d");
				//STREAMING::REQUEST_IPL("Prologue01e");
				//STREAMING::REQUEST_IPL("Prologue01f");
				//STREAMING::REQUEST_IPL("Prologue01g");
				//STREAMING::REQUEST_IPL("prologue01h");
				//STREAMING::REQUEST_IPL("prologue01i");
				//STREAMING::REQUEST_IPL("prologue01j");
				//STREAMING::REQUEST_IPL("prologue01k");
				//STREAMING::REQUEST_IPL("prologue01z");
				//STREAMING::REQUEST_IPL("prologue02");
				//STREAMING::REQUEST_IPL("prologue03");
				//STREAMING::REQUEST_IPL("prologue03b");
				//STREAMING::REQUEST_IPL("prologue03_grv_cov");
				//STREAMING::REQUEST_IPL("prologue03_grv_dug");
				//STREAMING::REQUEST_IPL("prologue03_grv_fun");
				//STREAMING::REQUEST_IPL("prologue04");
				//STREAMING::REQUEST_IPL("prologue04b");
				//STREAMING::REQUEST_IPL("prologue04_cover");
				//STREAMING::REQUEST_IPL("prologue05");
				//STREAMING::REQUEST_IPL("prologue05b");
				//STREAMING::REQUEST_IPL("prologue06");
				//STREAMING::REQUEST_IPL("prologue06b");
				//STREAMING::REQUEST_IPL("prologue06_int");
				//STREAMING::REQUEST_IPL("prologuerd");
				//STREAMING::REQUEST_IPL("prologuerdb");
				//STREAMING::REQUEST_IPL("prologue_DistantLights");
				//STREAMING::REQUEST_IPL("prologue_grv_torch");
				//STREAMING::REQUEST_IPL("prologue_m2_door");
				//STREAMING::REQUEST_IPL("prologue_LODLights");
				//STREAMING::REQUEST_IPL("DES_ProTree_start");
				//Vector3 Coords;
				////	g_Logger->Info("Set Peds At Coords.");
				//PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 3595.39673f, -4893.727f, 115.838394f);
				//	});





				sub->AddOption<RegularOption>("------------------------------", "yes", []
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), VEHICLE::GET_LAST_DRIVEN_VEHICLE(), -1);
					});


				sub->AddOption<RegularOption>("LSIA Airport", "Teleport to LSIA Airport", []
					{
						Vector3 Coords;
				Coords.x = -1102.2910f; Coords.y = -2894.5160f; Coords.z = 13.9467f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("Sandy Shores Airport", "Teleport to Sandy Shores Airport", []
					{
						Vector3 Coords;
				Coords.x = 1741.4960f; Coords.y = 3269.2570f; Coords.z = 41.6014f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});



				sub->AddOption<RegularOption>("Barber Shop", "Teleport to Barber Shop", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -1293.231f, -1117.002f, 6.6402f);
					});
				sub->AddOption<RegularOption>("Tattoo Shop", "Teleport to Tattoo Shop", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 319.7877f, 172.2311f, 103.7454f);
					});
				sub->AddOption<RegularOption>("Clothes Shop", "Teleport to Clothes Shop", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -718.91, -158.16, 37.00);
					});
				sub->AddOption<RegularOption>("Gun Shop", "Teleport to Gun Shop", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 247.3652, -45.8777, 69.9411);
					});

				sub->AddOption<RegularOption>("First Franklins House", "Teleport to Franklins House", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 7.1190f, 536.6150f, 176.0280f);
					});
				sub->AddOption<RegularOption>("Main Franklins House ", "Teleport to Franklins House 2", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -14.3803f, -1483.510f, 31.1044f);
					});
				sub->AddOption<RegularOption>("Michaels House", "Teleport to Michaels House", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -14.3803f, -1483.510f, 31.1044f);
					});
				sub->AddOption<RegularOption>("Trevors House", "Teleport to Trevors House", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 1972.6100f, 3817.0400f, 33.4283f);
					});



				sub->AddOption<RegularOption>("FBI", "Teleport to FBI", []
					{
						Vector3 Coords;
				Coords.x = 135.5220f; Coords.y = -749.0003f; Coords.z = 260.0000f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("Human Labs", "Teleport to Human Labs", []
					{
						Vector3 Coords;
				Coords.x = 3617.231f; Coords.y = 3739.871f; Coords.z = 28.6901f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("MMI", "Teleport to MMI", []
					{
						Vector3 Coords;
				Coords.x = -222.1977; Coords.y = -1185.8500; Coords.z = 23.0294;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("Waterfall", "Teleport to Waterfall", []
					{
						Vector3 Coords;
				Coords.x = -597.9525f; Coords.y = 4475.2910f; Coords.z = 25.6890f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("Crane Top", "Teleport to Crane Top", []
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -119.8790f, -977.3570f, 304.2491f);
					});
				sub->AddOption<RegularOption>("Mount Chiliad", "Teleport to Mount Chilliad", []
					{
						Vector3 Coords;
				Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("Maze Bank", "Teleport to Maze Bank", []
					{
						Vector3 Coords;
				Coords.x = -74.94243f; Coords.y = -818.63446f; Coords.z = 326.174347f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("Military Base", "Teleport to Military Base", []
					{
						Vector3 Coords;
				Coords.x = -2012.8470f; Coords.y = 2956.5270f; Coords.z = 32.8101f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("Zancudo Tower", "Teleport to Zancudo Tower", []
					{
						Vector3 Coords;
				Coords.x = -2356.0940; Coords.y = 3248.645; Coords.z = 101.4505;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("Mask Shop", "Teleport to Mask Shop", []
					{
						Vector3 Coords;
				Coords.x = -1338.16; Coords.y = -1278.11; Coords.z = 4.87;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});
				sub->AddOption<RegularOption>("LSC", "Teleport to LSC", []
					{
						Vector3 Coords;
				Coords.x = -373.01; Coords.y = -124.91; Coords.z = 38.31;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});


				sub->AddOption<RegularOption>("Life Invader Office", "Teleport to Life Invader Office", []
					{
						STREAMING::REQUEST_IPL("facelobby");
				STREAMING::REQUEST_IPL("facelobbyfake");
				Vector3 Coords;
				Coords.x = -1047.9f; Coords.y = -233.0f; Coords.z = 39.0f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -1047.9f, -233.0f, 39.0f);

					});
				
				sub->AddOption<RegularOption>("Custom Yacht ", "Teleport to Custom Yacht", []
					{
						STREAMING::REQUEST_IPL("smboat");
				Vector3 Coords;
				Coords.x = -2045.8f; Coords.y = -1031.2f; Coords.z = 11.9f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -2045.8f, -1031.2f, 11.9f);

					});
				sub->AddOption<RegularOption>("Jewelry Store", "Teleport to Jewelry Store", []
					{
						STREAMING::REQUEST_IPL("jewel2fake");
				STREAMING::REQUEST_IPL("post_hiest_unload");
				STREAMING::REQUEST_IPL("bh1_16_refurb");
				Vector3 Coords;
				Coords.x = -630.4f; Coords.y = -236.7f; Coords.z = 40.0f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);

					});
				sub->AddOption<RegularOption>("Cargoship", "Teleport to Cargoship", []
					{
						STREAMING::REQUEST_IPL("cargoship");
				Vector3 Coords;
				Coords.x = -162.8918f; Coords.y = -2365.769f; Coords.z = 9.3192f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);

					});
				sub->AddOption<RegularOption>("Oneil Farm", "Teleport to Oneil Farm", []
					{
						STREAMING::REMOVE_IPL("farm_burnt");
				STREAMING::REMOVE_IPL("farm_burnt_props");
				STREAMING::REQUEST_IPL("farm");
				STREAMING::REQUEST_IPL("farm_props");
				STREAMING::REQUEST_IPL("farmint");
				STREAMING::REQUEST_IPL("farmint_cap");
				Vector3 Coords;
				Coords.x = 2441.2f; Coords.y = 4968.5f; Coords.z = 51.7f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);

					});
				sub->AddOption<RegularOption>("Hospital ", "Teleport to Hospital", []
					{
						STREAMING::REQUEST_IPL("RC12B_HospitalInterior");
				STREAMING::REQUEST_IPL("RC12B_Destroyed");
				Vector3 Coords;
				Coords.x = 356.8f; Coords.y = -590.1f; Coords.z = 43.3f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
				;
					});
				sub->AddOption<RegularOption>("Morgue", "Teleport to Morgue", []
					{
						STREAMING::REQUEST_IPL("Coroner_Int_on");
				Vector3 Coords;
				Coords.x = 244.9f; Coords.y = -1374.7f; Coords.z = 39.5f;
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
					});



					});








			g_UiManager->AddSubmenu<RegularSubmenu>("Weapon", Weapon_Menu, [](RegularSubmenu* sub)
				{

					sub->AddOption<SubOption>("Light gun", nullptr, SubmenuPaintGun);

	/*		sub->AddOption<SubOption>("Pickups", nullptr, SubmenuPickupsGun);*/

			//sub->AddOption<SubOption>("Shoot vehicles", nullptr, SubmenuVehicleGun);
			//


			

			sub->AddOption<RegularOption>("Give All Weapons", "Give give All Weapons even the newest ones ", []
				{
					int Weapons[] = { 0xF7F1E25E, 0x14E5AFD5, 0xF7F1E25E, 0xFEA23564, 0x1BC4FDB9, 0x6589186A, 1649403952, 125959754, 101631238, 94989220, 317205821, 2937143193, 137902532, 0x57A4368C,  0x97EA20B8, 0x917F6C8C, 0x2B5EF5EC, 0x45CD9CF3, 0x3AABBBAA, 0xEF951FBB, 0xD1D5F52B, 0x6E7DDDEC, 0xDB26713A, 0x497FACC3, 0x23C9F95C, 0x787F0BB, 0xC78D71B4, 2636060646, 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D, 0x3813FC08,
							0xA2719263, 0x8BB05FD7, 0xF9DCBF2D, 0xD8DF3C3C, 0xDD5DF8D9, 0xDFE37640, 0x19044EE0, 0xCD274149, 0x94117305, 0x3813FC08, 0xBFE256D4, 0x88374054, 0x83839C4, 0xDC4DB296, 0xC1B3C3D1, 0xCB96392F, 0x97EA20B8, 0x2BE6766B, 0x0A3D4D34, 0xDB1AA450, 0xBD248B55, 0x555AF99A, 0xEF951FBB, 0x12E82D3D, 0x394F415C, 0xFAD1F1C9, 0x969C3D67, 0x84D6FAFD, 0x624FE830, 0xDBBD7280, 0xA914799, 0x6A6C02E0, 0x6D544C99, 0x63AB0442, 0x0781FE4A, 0xA0973D5E, 0xAB564B93, 0xBA45E8B8, 0xFBAB5776, 0x060EC506, 0xAF3696A1, 0xD7DBF707, 0x476BF155, 0xB62D1F67,0xF38A0747, 0x167C5572, 0x2C9CA024, 0xA991DAE8, 0xD6678401, 0x6AA85572
				};
			for (int i = 0; i < (sizeof(Weapons) / 4); i++) {
				WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Weapons[i], 9999, 1);
			}

				});




			sub->AddOption<ChooseOption<const char*, std::size_t>>(("Attachments:"), nullptr, &wepattach, &_wepattach, false, [] { AttachMents(); });

			//g_UiManager->AddSubmenu<RegularSubmenu>(("Crosshair"), SubmenuCrosshair, [](RegularSubmenu* sub)
			//	{
			//		sub->AddOption<BoolOption<bool>>(("Enable"), nullptr, &testicalcancer, BoolDisplay::OnOff, false, [] {});
			//sub->AddOption<ChooseOption<const char*, std::size_t>>(("Type"), nullptr, &CrossStyle, &_CrossStyle);
			//sub->AddOption<NumberOption<float>>(("Size"), nullptr, &crosssize, 1.f, 20.f, 1, 0);
			//sub->AddOption<NumberOption<float>>(("Red"), nullptr, &redcross, 0.f, 255.f, 1, 0);
			//sub->AddOption<NumberOption<float>>(("Green"), nullptr, &greencross, 0.f, 255.f, 1, 0);
			//sub->AddOption<NumberOption<float>>(("Blue"), nullptr, &bluecross, 0.f, 255.f, 1, 0);




			

			sub->AddOption<RegularOption>("Remove All Weapons", "WARNING: This is will remove all your weapons!", [] { WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true); });
			sub->AddOption<BoolOption<bool>>("Infinite Ammo", nullptr, &InfiniteAmmo, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Money Gun", "will spawn a pickup and you get money,same with other players", &MoneyGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("RP Gun", "will spawn a pickup and you get rp,same with other players", &MoneyGun2, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Laser Sight", nullptr, &LaserSight, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Force Crosshair", nullptr, &ForceCross, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Exp Ammo", nullptr, &LOL, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Taze Gun", nullptr, &LOL2, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Shotgun bullets", nullptr, &LOL3, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("RPG Rocket bullets", nullptr, &RPGg, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Fireworks Gun", nullptr, &FrWrkT, BoolDisplay::OnOff_Icon);

			//sub->AddOption<BoolOption<bool>>("Sticky Bombs", nullptr, &C4, BoolDisplay::OnOff_Icon);
		
			sub->AddOption<BoolOption<bool>>("Flare", nullptr, &FlareGun, BoolDisplay::OnOff_Icon);

		/*	sub->AddOption<BoolOption<bool>>("Molotv", nullptr, &MolotvGun, BoolDisplay::OnOff_Icon);*/

			

			//sub->AddOption<BoolOption<bool>>("Valkyire Gun", nullptr, &f_Valkyire, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Airstrike Gun", nullptr, &AirstrikeGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Shockwave Gun", nullptr, &ShockWave, BoolDisplay::OnOff_Icon);
			/*sub->AddOption<BoolOption<bool>>("Cargo Plane gun", nullptr, &CARGOPLANE, BoolDisplay::OnOff_Icon);*/
			sub->AddOption<BoolOption<bool>>("Delete gun", "This will delete ped/vehicles", &ExplosiveAmmo, BoolDisplay::OnOff_Icon);


			//sub->AddOption<BoolOption<bool>>("Teleport Gun", nullptr, &TeleportGun, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Force Gun", "", &ForceGun, BoolDisplay::OnOff_Icon);

		/*	sub->AddOption<BoolOption<bool>>("Carnado Vehicles", "", &CMagnet, BoolDisplay::OnOff_Icon);*/

			sub->AddOption<BoolOption<bool>>("Magnet Gun", "", &Magnet, BoolDisplay::OnOff_Icon);


			sub->AddOption<BoolOption<bool>>("Gravity Gun", "Bad", &GravityGun, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Water Gun (SP Only)", nullptr, &WaterGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Flame ammo ", "Impact Flames shoot a vehicle or ped.", &Flameammo, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Minecraft gun", nullptr, &McGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Asteroid Gun", nullptr, &ExpGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Ped Gun", nullptr, &PedGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Vehicle Gun", nullptr, &ShootVehicle, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("1 shot 1 kill", nullptr, &DestroyGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Drive Gun", "Aim at a vehicle & shoot will drag you into that vehicle", &YoinkGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Rainbow Gun", nullptr, &RainbowCamo, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Fly Gun", nullptr, &FlyGun, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Parachute Gun", nullptr, &LaserSight, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Tiny Gun", "Will make a ped small.", &TinyGun, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Pretty much shit Aimbot", nullptr, &AimBot, BoolDisplay::OnOff_Icon);



			//sub->AddOption<RegularOption>("Give Briefcase", nullptr, [] {
			//	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 0x88C78EB7, 9999, 1);
			//	});
			//sub->AddOption<RegularOption>("Give Digiscanner", nullptr, [] {
			//	for (int i = 0; i < (sizeof(0xFDBADCED) / 4); i++) {
			//		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 0xFDBADCED, 9999, 1);
			//	}
			//	});

				});





			g_UiManager->AddSubmenu<RegularSubmenu>("Vehicle", Vehicle_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Vehicle Spawner", nullptr, Vehicle_Spawner);

					//sub->AddOption<SubOption>("Scooby Customs", "Basic just the LSC in the menu", SubmenuVehicleColors2);

			//sub->AddOption<SubOption>("Vehicle Colours", "Colour options & max vehicle & more to come", SubmenuVehicleColors);

			//sub->AddOption<SubOption>("Ramp Builder", nullptr, SubmenuVehicleRampBuilder);

			sub->AddOption<SubOption>("Vehicle Acrobatics", nullptr, Acrobatics);

			sub->AddOption<SubOption>("Vehicle weapons", nullptr, vehWeapons);

			

			sub->AddOption<RegularOption>("Upgrade Vehicle", nullptr, []
				{
					Vehicle Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_MOD_KIT(Vehicle, 0);
				for (int i = 0; i < 50; i++)
				{
					VEHICLE::SET_VEHICLE_MOD(Vehicle, i, VEHICLE::GET_NUM_VEHICLE_MODS(Vehicle, i) - 1, false);
				}
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle, 255, 84, 61);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle, 255, 84, 61);
				VEHICLE::SET_VEHICLE_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
			}
				});
			sub->AddOption<RegularOption>("Repair Vehicle", nullptr, []
				{
					Entity Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
				VEHICLE::SET_VEHICLE_FIXED(Vehicle);
				VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
			}
				});
			sub->AddOption<BoolOption<bool>>("Vehicle Godmode", nullptr, &VehicleGodmode, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Vehicle Invisible", nullptr, &VehInvisible, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Auto Repair", nullptr, &AutoFix, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Speedometer", nullptr, &Spedometer, BoolDisplay::OnOff_Icon);
			/*sub->AddOption<BoolOption<bool>>("Matrix Plate", nullptr, &VehicleMatrixPlate, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Nigger Plate", nullptr, &VehicleMatrixPlate2, BoolDisplay::OnOff_Icon);*/





			sub->AddOption<BoolOption<bool>>("Instant Brakes", nullptr, &SuperBrakes, BoolDisplay::OnOff_Icon);


			//sub->AddOption<BoolOption<bool>>("Sticky Tires", nullptr, &StickyTires, BoolDisplay::OnOff_Icon);


			sub->AddOption<BoolOption<bool>>("Fly Car", nullptr, &FlyCar, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Retarded mode", nullptr, &PlayerFlyingcar, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Drift Mode [SHIFT]", nullptr, &DriftMode, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Horn Boost", nullptr, &HornBoost, BoolDisplay::OnOff_Icon);
			//sub->AddOption<NumberOption<std::int32_t>>("Boost Ammount", nullptr, &BoostAmmount, 100, 1000, 50, 0, true, "< ", " >", [&] {});
			sub->AddOption<BoolOption<bool>>("Back Horn Boost", nullptr, &BackHornBoost, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Vehicle Parachute", "Press Space to Open Parachute", &VehParachute, BoolDisplay::OnOff_Icon, false);



			sub->AddOption<BoolOption<bool>>("Drive On Water", nullptr, &DriveOnWater, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Drive Under Water", nullptr, &DriveUnderWater, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Vehicle Jump", nullptr, &VehicleJump, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Auto Flip Vehicle", nullptr, &AutoFlip, BoolDisplay::OnOff_Icon);
			//sub->AddOption<BoolOption<bool>>("Glitch Vehicle", nullptr, &GlitchVehicle, BoolDisplay::OnOff_Icon);
		

			sub->AddOption<RegularOption>("Launch Forward", nullptr, []
				{
					Vehicle Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Vehicle, 80);
			}
				});
			sub->AddOption<RegularOption>("Launch Up", nullptr, []
				{
					Vehicle Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Vehicle, true, 0, 0, 40.0f, 0, 0, 0, true, true, true, true, false, true);
			}
				});
			sub->AddOption<RegularOption>("Random Color", nullptr, []
				{
					Vehicle Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255));
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255));
			}
				});
			sub->AddOption<RegularOption>("Open All Doors", nullptr, []
				{
					Entity Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Vehicle, 0, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Vehicle, 1, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Vehicle, 2, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Vehicle, 3, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Vehicle, 4, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Vehicle, 5, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Vehicle, 6, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(Vehicle, 7, true, false);
			}
				});
			sub->AddOption<RegularOption>("Close All Doors", nullptr, []
				{
					Entity Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Vehicle, false);
			}
				});
				});










			g_UiManager->AddSubmenu<RegularSubmenu>("Spawner", Vehicle_Spawner, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Spawner Settings", nullptr, Vehicles_Spawner_Settings);

			sub->AddOption<SubOption>("Custom Vehicles", nullptr, custom_vehicles);

			sub->AddOption<SubOption>("DLC List", nullptr, Vehicles_DLC);
			sub->AddOption<SubOption>("List", nullptr, Vehicles_LIST);

			float m_PosX = 0.8f;
			float m_PosY = 0.1f;

			void DisplayVehicle(std::string texture1, std::string texture2);
			{
				float VehBannerWidth = 0.13f;
				float VehBannerHeight = 0.045f;
				RGBA line{ 255, 255, 255, 255 };
				float lineX = { m_PosY - 0.19f };
				float lineY = 0.2451f;

			}


			sub->AddOption<ChooseOption<const char*, std::size_t>>("PvP Vehicles", nullptr, &PVP, &DemoListPos28, false, [] { spawn_vehicle((char*)PVP[DemoListPos28]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Fun Vehicles", nullptr, &Fun, &DemoListPos27, false, [] { spawn_vehicle((char*)Fun[DemoListPos27]);	});
			//sub->AddOption<ChooseOption<const char*, std::size_t>>("Drug Wars DLC", nullptr, &DrugWars1, &DemoListPos26, false, [] { spawn_vehicle((char*)DrugWars1[DemoListPos26]);	});
			//sub->AddOption<ChooseOption<const char*, std::size_t>>("Criminal Enterprise DLC", nullptr, &CriminalEnterprise1, &DemoListPos25, false, [] { spawn_vehicle((char*)CriminalEnterprise1[DemoListPos25]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Sports", nullptr, &Sports1, &DemoListPos2, false, [] { spawn_vehicle((char*)Sports1[DemoListPos2]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Sport Classic", nullptr, &SportsClassics1, &DemoListPos3, false, [] { spawn_vehicle((char*)SportsClassics1[DemoListPos3]);	});


			sub->AddOption<ChooseOption<const char*, std::size_t>>("Super", nullptr, &Super1, &DemoListPos24, false, [] { spawn_vehicle((char*)Super1[DemoListPos24]);	});
			//if (sub->GetSelectedOption() == sub->GetNumOptions()) {
			//	std::string pic[2] = { "**Invalid**", "**Invalid**" };
			//	for (int i = 0; i < 267; i++)
			//	{
			//		if (Super1 == VehiclePreviews[i].vehicleName) {
			//			pic[0] = VehiclePreviews[i].vehiclePreviewDict;
			//			pic[1] = VehiclePreviews[i].vehicleName;
			//			break;
			//		}
			//	}
			//	DisplayVehicle(pic[0], pic[1]);
			//}



			sub->AddOption<ChooseOption<const char*, std::size_t>>("Offroad", nullptr, &OffRoad1, &DemoListPos4, false, [] { spawn_vehicle((char*)OffRoad1[DemoListPos4]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Sedans", nullptr, &Sedans1, &DemoListPos5, false, [] { spawn_vehicle((char*)Sedans1[DemoListPos5]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Coupes", nullptr, &Coupes1, &DemoListPos6, false, [] { spawn_vehicle((char*)Coupes1[DemoListPos6]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Muscle", nullptr, &Muscle1, &DemoListPos7, false, [] { spawn_vehicle((char*)Muscle1[DemoListPos7]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Boats", nullptr, &Boats1, &DemoListPos8, false, [] { spawn_vehicle((char*)Boats1[DemoListPos8]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Commercial", nullptr, &Commercial1, &DemoListPos9, false, [] { spawn_vehicle((char*)Commercial1[DemoListPos9]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Compacts", nullptr, &Compacts1, &DemoListPos10, false, [] { spawn_vehicle((char*)Compacts1[DemoListPos10]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Cycles", nullptr, &Cycles1, &DemoListPos11, false, [] { spawn_vehicle((char*)Cycles1[DemoListPos11]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Emergency", nullptr, &Emergency1, &DemoListPos12, false, [] { spawn_vehicle((char*)Emergency1[DemoListPos12]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Commercial", nullptr, &Commercial1, &DemoListPos13, false, [] { spawn_vehicle((char*)Commercial1[DemoListPos13]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Helicopters", nullptr, &Helicopters1, &DemoListPos14, false, [] { spawn_vehicle((char*)Helicopters1[DemoListPos14]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Industrial", nullptr, &Industrial1, &DemoListPos15, false, [] { spawn_vehicle((char*)Industrial1[DemoListPos15]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Military", nullptr, &Military1, &DemoListPos16, false, [] { spawn_vehicle((char*)Military1[DemoListPos16]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Motorcycles", nullptr, &Motorcycles1, &DemoListPos17, false, [] { spawn_vehicle((char*)Motorcycles1[DemoListPos17]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Planes", nullptr, &Planes1, &DemoListPos18, false, [] { spawn_vehicle((char*)Planes1[DemoListPos18]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Service", nullptr, &Service1, &DemoListPos19, false, [] { spawn_vehicle((char*)Service1[DemoListPos19]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("SUV", nullptr, &SUVs1, &DemoListPos20, false, [] { spawn_vehicle((char*)SUVs1[DemoListPos20]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Trailer", nullptr, &Trailer1, &DemoListPos21, false, [] { spawn_vehicle((char*)Trailer1[DemoListPos21]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Trains", nullptr, &Trains1, &DemoListPos22, false, [] { spawn_vehicle((char*)Trains1[DemoListPos22]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Utility", nullptr, &Utility1, &DemoListPos23, false, [] { spawn_vehicle((char*)Utility1[DemoListPos23]);	});
				});



			g_UiManager->AddSubmenu<RegularSubmenu>("Vehicle Colors", SubmenuVehicleColors, [&](RegularSubmenu* sub)
				{

				/*	sub->AddOption<BoolOption<bool>>("Smooth Rainbow Car", nullptr, &RainbowCar22, BoolDisplay::OnOff_Icon);
		*/

	/*		sub->AddOption<BoolOption<bool>>("Random Mods", nullptr, &RainbowMods, BoolDisplay::OnOff_Icon);
*/

					sub->AddOption<BoolOption<bool>>("Flash rainbow Car", nullptr, &CarColor, BoolDisplay::OnOff_Icon);


			sub->AddOption<BoolOption<bool>>("Rainbow Tire Smoke", nullptr, &RainbowTireSmoke, BoolDisplay::OnOff_Icon);



			sub->AddOption<BoolOption<bool>>("Rainbow Neon lights", nullptr, &RainbowNeons, BoolDisplay::OnOff_Icon);


			

			sub->AddOption<NumberOption<std::int32_t>>("Color [~r~R~s~]", nullptr, &VEHr, 0, 255, 10, 3, true, "< ", " >", [&] {});
			sub->AddOption<NumberOption<std::int32_t>>("Color [~g~G~s~]", nullptr, &VEHg, 0, 255, 10, 3, true, "< ", " >", [&] {});
			sub->AddOption<NumberOption<std::int32_t>>("Color [~b~B~s~]", nullptr, &VEHb, 0, 255, 10, 3, true, "< ", " >", [&] {});
			sub->AddOption<RegularOption>("Set Vehicle Primary RGB", "Random Paint Vehicle", [&]
				{
					static const int VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(VehID, VEHr, VEHg, VEHb);
				});

			sub->AddOption<RegularOption>("Set Vehicle Secondary RGB", "Random Paint Vehicle", [&]
				{
					static const int VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(VehID, VEHr, VEHg, VEHb);
				});
			sub->AddOption<RegularOption>("Random Paint", "Random Paint Vehicle", [&]
				{
					static const int VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(VehID, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255));
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(VehID, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255));
				});
				});



			//g_UiManager->AddSubmenu<RegularSubmenu>("Vehicle Loader", VH, [](RegularSubmenu* sub)
			//	{
			//		namespace fs = std::filesystem;
			//fs::directory_iterator dirIt{ "C:\\Scooby\\Vehicles\\" };
			//for (auto&& dirEntry : dirIt)
			//{
			//	if (dirEntry.is_regular_file())
			//	{
			//		auto path = dirEntry.path();
			//		if (path.has_filename())
			//		{
			//			if (path.extension() == ".ini")
			//			{
			//				Big::OutfitList();
			//				sub->AddOption<RegularOption>(path.stem().u8string().c_str(), nullptr, [=]
			//					{
			//						Big::LoadPreset(path.stem().u8string().c_str());
			//					});

			//			}

			//		}
			//	}
			//}
			//	});


			g_UiManager->AddSubmenu<RegularSubmenu>("dlc list", Vehicles_DLC, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Spawner Settings", nullptr, Vehicles_Spawner_Settings);


			sub->AddOption<ChooseOption<const char*, std::size_t>>("Drug Wars", nullptr, &DrugWars1, &DemoListPos26, false, [] { spawn_vehicle((char*)DrugWars1[DemoListPos26]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Criminal Enterprise ", nullptr, &CriminalEnterprise1, &DemoListPos25, false, [] { spawn_vehicle((char*)CriminalEnterprise1[DemoListPos25]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Summer Special ~r~[1.52] ", nullptr, &summerspecial, &DemoListPos41, false, [] { spawn_vehicle((char*)summerspecial[DemoListPos41]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Casino Heist ~r~[1.50]", nullptr, &casinoheist, &DemoListPos42, false, [] { spawn_vehicle((char*)casinoheist[DemoListPos42]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Casino ~r~[1.48]", nullptr, &casino_vehicles, &DemoListPos43, false, [] { spawn_vehicle((char*)casino_vehicles[DemoListPos43]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Arena war ~r~[1.46]", nullptr, &arenawar, &DemoListPos44, false, [] { spawn_vehicle((char*)arenawar[DemoListPos44]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Afterhours ~r~[1.44]", nullptr, &afterhrs, &DemoListPos45, false, [] { spawn_vehicle((char*)afterhrs[DemoListPos46]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Southern san andreas ~r~[1.43]", nullptr, &SOUTHERNSAN, &DemoListPos47, false, [] { spawn_vehicle((char*)SOUTHERNSAN[DemoListPos48]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Doomsday ~r~[1.42]", nullptr, &Doomsday1, &DemoListPos49, false, [] { spawn_vehicle((char*)Doomsday1[DemoListPos49]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Smugglers run  ~r~[1.41]", nullptr, &SMUGLERSRUN1, &DemoListPos50, false, [] { spawn_vehicle((char*)SMUGLERSRUN1[DemoListPos50]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Afterhours ~r~[1.44]", nullptr, &afterhrs, &DemoListPos45, false, [] { spawn_vehicle((char*)afterhrs[DemoListPos46]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Southern san andreas ~r~[1.43]", nullptr, &SOUTHERNSAN, &DemoListPos47, false, [] { spawn_vehicle((char*)SOUTHERNSAN[DemoListPos48]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Doomsday ~r~[1.42]", nullptr, &Doomsday1, &DemoListPos49, false, [] { spawn_vehicle((char*)Doomsday1[DemoListPos49]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Smugglers run  ~r~[1.41]", nullptr, &SMUGLERSRUN1, &DemoListPos50, false, [] { spawn_vehicle((char*)SMUGLERSRUN1[DemoListPos50]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Gunrunning  ~r~[1.40]", nullptr, &GUNRUNNING1, &DemoListPos45, false, [] { spawn_vehicle((char*)GUNRUNNING1[DemoListPos46]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Special vehicle circuit ~r~[1.38]", nullptr, &specialvcircuit, &DemoListPos47, false, [] { spawn_vehicle((char*)specialvcircuit[DemoListPos48]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Import export ~r~[1.37]", nullptr, &IMPORTEXPORT1, &DemoListPos49, false, [] { spawn_vehicle((char*)IMPORTEXPORT1[DemoListPos49]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Bikers ~r~[1.36]", nullptr, &bikers, &DemoListPos50, false, [] { spawn_vehicle((char*)bikers[DemoListPos50]);	});

			sub->AddOption<ChooseOption<const char*, std::size_t>>("Cunning stunts ~r~[1.35]", nullptr, &CUNNINGSTUNTS1, &DemoListPos45, false, [] { spawn_vehicle((char*)CUNNINGSTUNTS1[DemoListPos46]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Finance and felony ~r~[1.34]", nullptr, &financefelony, &DemoListPos47, false, [] { spawn_vehicle((char*)financefelony[DemoListPos48]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Custom classics ~r~[1.33]", nullptr, &customclassics, &DemoListPos49, false, [] { spawn_vehicle((char*)customclassics[DemoListPos49]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Be my valentine ~r~[1.32]", nullptr, &bemyvalentine, &DemoListPos50, false, [] { spawn_vehicle((char*)bemyvalentine[DemoListPos50]);	});

			sub->AddOption<ChooseOption<const char*, std::size_t>>("Drop zone ~r~[1.32]", nullptr, &dropzone, &DemoListPos45, false, [] { spawn_vehicle((char*)dropzone[DemoListPos46]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Festive 2015 ~r~[1.32]", nullptr, &festive2015, &DemoListPos47, false, [] { spawn_vehicle((char*)festive2015[DemoListPos48]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Executives ~r~[1.31]", nullptr, &executives, &DemoListPos49, false, [] { spawn_vehicle((char*)executives[DemoListPos49]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Halloween 2015 ~r~[1.30]", nullptr, &halloween, &DemoListPos50, false, [] { spawn_vehicle((char*)halloween[DemoListPos50]);	});

			sub->AddOption<ChooseOption<const char*, std::size_t>>("Lowrider ~r~[1.30]", nullptr, &lowriders, &DemoListPos45, false, [] { spawn_vehicle((char*)lowriders[DemoListPos46]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Ill-gotton-gains ~r~[1.27]", nullptr, &illgg, &DemoListPos47, false, [] { spawn_vehicle((char*)illgg[DemoListPos48]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Heists ~r~[1.21]", nullptr, &heist, &DemoListPos49, false, [] { spawn_vehicle((char*)heist[DemoListPos49]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Festive 2014 ~r~[1.19]", nullptr, &festive2014, &DemoListPos50, false, [] { spawn_vehicle((char*)festive2014[DemoListPos50]);	});

			sub->AddOption<ChooseOption<const char*, std::size_t>>("Last team standing ~r~[1.17]", nullptr, &lastteamstanding, &DemoListPos45, false, [] { spawn_vehicle((char*)lastteamstanding[DemoListPos46]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Flight school ~r~[1.16]", nullptr, &saflightschool, &DemoListPos47, false, [] { spawn_vehicle((char*)saflightschool[DemoListPos48]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Independence day ~r~[1.15]", nullptr, &independence, &DemoListPos49, false, [] { spawn_vehicle((char*)independence[DemoListPos49]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Hipster ~r~[1.14]", nullptr, &notahipster, &DemoListPos50, false, [] { spawn_vehicle((char*)notahipster[DemoListPos50]);	});


			sub->AddOption<ChooseOption<const char*, std::size_t>>("High life ~r~[1.13]", nullptr, &highlife, &DemoListPos45, false, [] { spawn_vehicle((char*)highlife[DemoListPos46]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Business ~r~[1.11]", nullptr, &business, &DemoListPos47, false, [] { spawn_vehicle((char*)business[DemoListPos48]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Valentines massacre ~r~[1.10]", nullptr, &valetinesmassacre, &DemoListPos49, false, [] { spawn_vehicle((char*)&valetinesmassacre[DemoListPos49]);	});
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Beach bum ~r~[1.06", nullptr, &beachbum, &DemoListPos50, false, [] { spawn_vehicle((char*)beachbum[DemoListPos50]);	});

				});








			g_UiManager->AddSubmenu<RegularSubmenu>("Custom ", custom_vehicles, [](RegularSubmenu* sub)
				{

					sub->AddOption<RegularOption>("6x6 War RC", "Random Paint Vehicle", [&]
						{
							int Handle = PLAYER::PLAYER_PED_ID();
			Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Vector3 null; null.x = 0, null.y = 0; null.z = 0;
			Vector3 a; a.x = 0, a.y = 0, a.z = 0.03f;
			Vector3 b; b.x = 0, b.y = 0, b.z = 0;
			int hash = GAMEPLAY::GET_HASH_KEY("dune2");
			int hash2 = GAMEPLAY::GET_HASH_KEY("t20");
			int hash3 = GAMEPLAY::GET_HASH_KEY("dune2");
			int hash4 = GAMEPLAY::GET_HASH_KEY("dune2");
			int hash5 = GAMEPLAY::GET_HASH_KEY("monster");
			int hash6 = GAMEPLAY::GET_HASH_KEY("monster");


			STREAMING::REQUEST_MODEL(hash);
			STREAMING::REQUEST_MODEL(hash2);
			STREAMING::REQUEST_MODEL(hash3);
			STREAMING::REQUEST_MODEL(hash4);
			STREAMING::REQUEST_MODEL(hash5);
			STREAMING::REQUEST_MODEL(hash6);


			if (STREAMING::HAS_MODEL_LOADED(hash) && STREAMING::HAS_MODEL_LOADED(hash2) && STREAMING::HAS_MODEL_LOADED(hash3) && STREAMING::HAS_MODEL_LOADED(hash4) && STREAMING::HAS_MODEL_LOADED(hash5) && STREAMING::HAS_MODEL_LOADED(hash6))
			{
				int Object1 = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
				int Object2 = VEHICLE::CREATE_VEHICLE(hash3, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
				int Object3 = VEHICLE::CREATE_VEHICLE(hash4, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
				int Object4 = VEHICLE::CREATE_VEHICLE(hash5, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
				int Object5 = VEHICLE::CREATE_VEHICLE(hash6, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);



				if (ENTITY::DOES_ENTITY_EXIST(Object1) && ENTITY::DOES_ENTITY_EXIST(Object2) && ENTITY::DOES_ENTITY_EXIST(Object3) && ENTITY::DOES_ENTITY_EXIST(Object4) && ENTITY::DOES_ENTITY_EXIST(Object5))
				{
					int Vehicle = VEHICLE::CREATE_VEHICLE(hash2, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Vehicle))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Vehicle, -1);

						ENTITY::ATTACH_ENTITY_TO_ENTITY(Object1, Vehicle, 0, a.x, a.y, a.z, b.x, b.y, b.z, 0, 1, 0, 0, 2, 1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Object2, Vehicle, 0, a.x - 0.1f, a.y, a.z, b.x, b.y + 41.1f, b.z, 0, 1, 0, 0, 2, 1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Object3, Vehicle, 0, a.x + 0.1f, a.y, a.z, b.x, b.y - 41.4f, b.z, 0, 1, 0, 0, 2, 1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Object4, Vehicle, 0, a.x + 1.41f, a.y, a.z - 0.2f, b.x - 179.99f, b.y, b.z, 0, 1, 0, 0, 2, 1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Object5, Vehicle, 0, a.x - 1.41f, a.y, a.z - 0.2f, b.x - 179.99f, b.y, b.z, 0, 1, 0, 0, 2, 1);

						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle, 255, 255, 255);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle, 255, 255, 255);
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object1, 255, 255, 255);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object1, 255, 255, 255);
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object4, 255, 255, 255);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object4, 255, 255, 255);
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object5, 255, 255, 255);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object5, 255, 255, 255);
					

					}

				}

			}
						

						});


			sub->AddOption<RegularOption>("Speeder Prototype", "Random Paint Vehicle", [&]
				{
					int Handle = PLAYER::PLAYER_PED_ID();
			Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Vector3 null; null.x = 0, null.y = 0; null.z = 0;
			Vector3 a; a.x = 0, a.y = 0, a.z = 0.03f;
			Vector3 b; b.x = 0, b.y = 0, b.z = 0;
			int hash = GAMEPLAY::GET_HASH_KEY("seashark");
			int hash1 = GAMEPLAY::GET_HASH_KEY("seashark");
			int hash2 = GAMEPLAY::GET_HASH_KEY("turismor");
			STREAMING::REQUEST_MODEL(hash);
			STREAMING::REQUEST_MODEL(hash1);
			STREAMING::REQUEST_MODEL(hash2);
			if (STREAMING::HAS_MODEL_LOADED(hash) && STREAMING::HAS_MODEL_LOADED(hash1) && STREAMING::HAS_MODEL_LOADED(hash2))
			{
				int Object = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
				int Object1 = VEHICLE::CREATE_VEHICLE(hash1, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Object))
				{
					int Vehicle = VEHICLE::CREATE_VEHICLE(hash2, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Handle), 1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Vehicle))
					{
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle, 255, 0, 0);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle, 255, 0, 0);
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object, 255, 0, 0);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object, 255, 0, 0);
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Object1, 255, 0, 0);
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Object1, 255, 0, 0);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Vehicle, -1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, Vehicle, 0, a.x, a.y + 1.37f, a.z + 0.59f, b.x - 14.33f, b.y + 541.20f, b.z - 1.42f, 0, 1, 0, 0, 2, 1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Object1, Vehicle, 0, a.x, a.y - 0.79f, a.z + 0.83f, b.x + 9.72f, b.y + 539.03f, b.z - 0.16f, 0, 1, 0, 0, 2, 1);
					}
				}
			}
				


				});

			sub->AddOption<RegularOption>("Ramp Truck", "Random Paint Vehicle", [&]
				{
					uint Me = PLAYER::PLAYER_PED_ID();
			Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Vector3 null; null.x = 0, null.y = 0; null.z = 0;
			Vector3 a; a.x = 0, a.y = 10.0, a.z = -0.3;
			Vector3 b; b.x = 0, b.y = -147.0, b.z = 90.0;
			int hash = GAMEPLAY::GET_HASH_KEY("phantom");
			int hash2 = GAMEPLAY::GET_HASH_KEY("prop_lev_des_barge_01");
			STREAMING::REQUEST_MODEL(hash);
			STREAMING::REQUEST_MODEL(hash2);
			if (STREAMING::HAS_MODEL_LOADED(hash) && STREAMING::HAS_MODEL_LOADED(hash2))
			{
				int Vehicle = VEHICLE::CREATE_VEHICLE(hash, MyCoords.x, MyCoords.y, MyCoords.z, ENTITY::GET_ENTITY_HEADING(Me), 1, 0);
				int Object = OBJECT::CREATE_OBJECT(hash2, null.x, null.y, null.z, ENTITY::GET_ENTITY_HEADING(Me), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Vehicle) && ENTITY::DOES_ENTITY_EXIST(Object))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hash);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Vehicle, -1);
					ENTITY::SET_ENTITY_VISIBLE(Vehicle, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, Vehicle, 0, a.x, a.y, a.z, b.x, b.y, b.z, 0, false, 0, 0, 2, true);
					ENTITY::SET_ENTITY_COLLISION(Object, 1, 0);

				}

			}

				


				});






				});


			g_UiManager->AddSubmenu<RegularSubmenu>("Ride options", ride, [](RegularSubmenu* sub)
				{



					sub->AddOption<RegularOption>("Stop riding", "Stop", [&]
						{
							Ped playerPed = PLAYER::PLAYER_PED_ID();
			ENTITY::DETACH_ENTITY(playerPed, 1, 1);
			AI::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
						


							});



			sub->AddOption<RegularOption>("Ride deer", "Stop", [&]
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_deer");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
			//				SET_ENTITY_HEADING(createdPED, 180.0f);

			ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPed, createdPED, -1, 0.0f, 0.35f, 0.72f, 0.0f, 0.0f, 0.0f, 1, 0, 0, 2, 1, 1);

			//deer animation
			char* anim = "creatures@deer@move";
			char* animID = "trot";

			STREAMING::REQUEST_ANIM_DICT(anim);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(anim))
				WAIT(0);

			AI::TASK_PLAY_ANIM(createdPED, anim, animID, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

			//charPose
			char* anim2 = "mp_safehouselost_table@";
			char* animID2 = "lost_table_negative_a";

			STREAMING::REQUEST_ANIM_DICT(anim2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(anim2))
				WAIT(0);

			AI::TASK_PLAY_ANIM(playerPed, anim2, animID2, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

				
				});

			sub->AddOption<RegularOption>("Ride cow", "Stop", [&]
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_cow");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
			//				SET_ENTITY_HEADING(createdPED, 180.0f);

			ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPed, createdPED, -1, 0.0f, 0.35f, 0.72f, 0.0f, 0.0f, 0.0f, 1, 0, 0, 2, 1, 1);

			//charPose
			char* anim2 = "mp_safehouselost_table@";
			char* animID2 = "lost_table_negative_a";

			STREAMING::REQUEST_ANIM_DICT(anim2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(anim2))
				WAIT(0);

			AI::TASK_PLAY_ANIM(playerPed, anim2, animID2, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

				});


			sub->AddOption<RegularOption>("walking deer", "Stop", [&]
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_deer");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
			//				SET_ENTITY_HEADING(createdPED, 180.0f);

			ENTITY::ATTACH_ENTITY_TO_ENTITY(playerPed, createdPED, -1, 0.0f, 0.35f, 0.72f, 0.0f, 0.0f, 0.0f, 1, 0, 0, 2, 1, 1);

			//deer animation
			char* anim = "creatures@deer@move";
			char* animID = "walk";

			STREAMING::REQUEST_ANIM_DICT(anim);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(anim))
				WAIT(0);

			AI::TASK_PLAY_ANIM(createdPED, anim, animID, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

			//charPose
			char* anim2 = "mp_safehouselost_table@";
			char* animID2 = "lost_table_negative_a";

			STREAMING::REQUEST_ANIM_DICT(anim2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(anim2))
				WAIT(0);

			AI::TASK_PLAY_ANIM(playerPed, anim2, animID2, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

				});


					});





			g_UiManager->AddSubmenu<RegularSubmenu>("Basic Protections", Protection_Main, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("DeSync Protection", nullptr, &DesyncProtection, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Kick Protection", nullptr, &KickProtec, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Anti CEO Kick", nullptr, &Protections::Anti_CEO_Kick, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Anti CEO Ban", nullptr, &Protections::Anti_CEO_Ban, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Anti Karma", nullptr, &Protections::g_Karma, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Block Crashes", nullptr, &Crash, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Block Force Apartment", nullptr, &apBlock, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Infinite Loading", nullptr, &InfLoad, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Block Island", nullptr, &BlockCayo, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Freeze", nullptr, &Freeze, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Fire", nullptr, &FireBlock, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Explosion", nullptr, &ExplosionBlock, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Remove Weapon", nullptr, &WeaBlock, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Give Weapon", nullptr, &WeaponBlock, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Report", nullptr, &ReportBlock, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Log Script Events", nullptr, &g_LogScriptEvents, BoolDisplay::OnOff_Icon);
				});




			g_UiManager->AddSubmenu<RegularSubmenu>("Dlc", DlcRecovery, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Contract DLC", nullptr, ContractDLC);
			sub->AddOption<SubOption>("Doomsday Heist", nullptr, Doomsday);
			sub->AddOption<SubOption>("Diamond Casino Heist", nullptr, CasinoHeist);
					sub->AddOption<SubOption>("Cayo Perico Heist", nullptr, CayoHeist);

		


			sub->AddOption<RegularOption>("Stone Hatchet & Double Revolver"), nullptr, []
			{
				STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP0_GANGOPSPSTAT_INT102"), 24, 8, 3, true);
			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP1_GANGOPSPSTAT_INT102"), 24, 8, 3, true);

			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP1_GANGOPSPSTAT_INT102"), 24, 8, 3, true);
			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP0_GANGOPSPSTAT_INT102"), 24, 8, 3, true);


			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP0_GANGOPSPSTAT_INT102"), 24, 8, 3, true);
			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP1_GANGOPSPSTAT_INT102"), 0, 24, 8, true);

			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP1_GANGOPSPSTAT_INT102"), 24, 8, 3, true);
			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP0_GANGOPSPSTAT_INT102"), 0, 24, 8, true);

			// ----------------------

			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP0_MP_NGDLCPSTAT_INT0"), 16, 8, 5, true);
			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP1_MP_NGDLCPSTAT_INT0"), 16, 8, 5, true);

			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP0_MP_NGDLCPSTAT_INT0"), 5, 16, 8, true);
			STATS::STAT_SET_MASKED_INT(GAMEPLAY::GET_HASH_KEY("MP1_MP_NGDLCPSTAT_INT0"), 5, 16, 8, true);


			};




			sub->AddOption<RegularOption>("Unlock LS Car Meet Prize"), nullptr, []
			{
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CARMEET_PV_CHLLGE_CMPLT"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CARMEET_PV_CHLLGE_CMPLT"), 1, 1);
			};
			sub->AddOption<RegularOption>("Unlock All Gunrunning Missions"), nullptr, []
			{
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_LFETIME_BIKER_BUY_COMPLET5"), 14, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_LFETIME_BIKER_BUY_COMPLET5"), 14, 1);
			};
			sub->AddOption<RegularOption>("Unlock Rare Alien Egg Tattoo"), nullptr, []
			{
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_TATTOO_FM_CURRENT_32"), 32768, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_TATTOO_FM_CURRENT_32"), 67108864, 1);
			};


			sub->AddOption<RegularOption>("2022 Xmas clothing", nullptr, []
				{
					globalHandle(262145 + 33794).As<int>() = 1;

			globalHandle(262145 + 34044).As<int>() = 1;



			globalHandle(262145 + 34043).As<int>() = 1;


			globalHandle(262145 + 34045).As<int>() = 1;

				});



				});



			g_UiManager->AddSubmenu<RegularSubmenu>("Recovery", Recovery_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("~g~Money ~y~Options", nullptr, Money_Recovery);
			sub->AddOption<SubOption>("~b~Rank", nullptr, Recovery_Level);
			sub->AddOption<SubOption>("~p~Unlocks", nullptr, Unlock_Recovery);
			sub->AddOption<SubOption>("~y~Character Stats", nullptr, Increase_Recovery);

			sub->AddOption<SubOption>("DLC unlocks and yeah", nullptr, DlcRecovery);

			sub->AddOption<SubOption>("CEO Crates", nullptr, Cargo_Sell);


			//sub->AddOption<BoolOption<bool>>("Max chips sell & remove casino ban ", "idk", &FastSlotMachines, BoolDisplay::OnOff_Icon);




		



			sub->AddOption<RegularOption>(("Load LSCHax"), "will load LSCHax.", [] {

				ShellExecute(NULL, L"open", L"C:\\Scooby\\Recovery\\LSCHax.exe", NULL, NULL, SW_SHOWDEFAULT);

				});

			sub->AddOption<RegularOption>(("Load GTAHaXUI"), "will load GTAHaXUI.", [] {

				ShellExecute(NULL, L"open", L"C:\\Scooby\\Recovery\\GTAHaXUI.exe", NULL, NULL, SW_SHOWDEFAULT);

				});





			//sub->AddOption<RegularOption>(("Bool Stat Editor"), "Will load a Stat editor", [] {

			//	ShellExecute(NULL, L"open", L"C:\\Scooby\\STAT_EDITOR_.exe", NULL, NULL, SW_SHOWDEFAULT);

			//	});


	/*		sub->AddOption<SubOption>("Casino Slotmachines", nullptr, Slotmachine);*/


			sub->AddOption<RegularOption>(("Heist Editor"), "Will load a heist editor", [] {

				ShellExecute(NULL, L"open", L"C:\\Scooby\\Heist\\Heist Editor3.5.8_.exe", NULL, NULL, SW_SHOWDEFAULT);




				});


			/*sub->AddOption<RegularOption>(("~r~BAN YOUR ACCOUNT"), "will load LSCHax.", [] {

				SetPlayerStats_Hash(player, 0xF1AD9B2B, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x3EB3FA6, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x4D3AD244, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x724BAE22, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x7D15C3B6, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x279D18C6, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x3977BC7B, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x436AD061, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x5600758C, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xDFBF8908, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xF26E2E65, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xFD3743F7, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x9A45179F, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x4840E8F, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x83079483, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x671634FD, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x87CD697F, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xA4C198D9, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x6881E6B9, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xB7D704EB, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xACF9F1C2, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xB7869E, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xBE09FD96, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x98BA126, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x4DAA973A, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x25FD26C4, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x3C4E73A1, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xE155A3CA, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xA5E699CB, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0xD0CD234, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x34868FD3, 0x7FFFFFFF);
			SetPlayerStats_Hash(player, 0x9CD69DC4, 0x7FFFFFFF);
				});*/


			sub->AddOption<RegularOption>("Bunker Research", nullptr, []
				{
					globalHandle(262145 + 21648).As<int>() = 1, STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_KEYLEVELS"), 2, 1);
				});

			sub->AddOption<RegularOption>("Reset Lucky Wheel Timer", nullptr, []
				{
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_LUCKY_WHEEL_USAGE"), 0, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_LUCKY_WHEEL_USAGE"), 0, 1);
				});


			sub->AddOption<RegularOption>("Free Paragon Vehicle", nullptr, []
				{
					STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("CAS_VEHICLE_REWARD"), true, true);

			STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_CARMEET_PV_CHLLGE_CMPLT"), true, true);
			STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_CARMEET_PV_CHLLGE_CMPLT"), true, true);
				});

			sub->AddOption<RegularOption>("Max lifetime earning for ceo", nullptr, []
				{
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_LIFETIME_CONTRA_EARNINGS"), 25000000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_LIFETIME_CONTRA_EARNINGS"), 25000000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_LIFETIME_BUY_COMPLETE"), 2000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_LIFETIME_BUY_UNDERTAKEN"), 2000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_LIFETIME_SELL_COMPLETE"), 2000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_LIFETIME_SELL_UNDERTAKEN"), 2000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_LIFETIME_BUY_COMPLETE"), 2000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_LIFETIME_BUY_UNDERTAKEN"), 2000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_LIFETIME_SELL_COMPLETE"), 2000, true);

			notifyBottom6((char*)Mod_Menu_Name"", "Need to restart your game and own a office");

				});

			sub->AddOption<RegularOption>("Refill Armour & Snacks "), nullptr, []
			{
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_ARMOUR_1_COUNT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_ARMOUR_1_COUNT"), 1000, true);

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_ARMOUR_2_COUNT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_ARMOUR_2_COUNT"), 1000, true);

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_ARMOUR_3_COUNT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_ARMOUR_3_COUNT"), 1000, true);

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_ARMOUR_4_COUNT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_ARMOUR_4_COUNT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_ARMOUR_5_COUNT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_ARMOUR_5_COUNT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("BREATHING_APPAR_BOUGHT"), 1000, true);




			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_YUM_SNACKS"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_NO_BOUGHT_YUM_SNACKS"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_HEALTH_SNACKS"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_NO_BOUGHT_HEALTH_SNACKS"), 1000, true);

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NO_BOUGHT_EPIC_SNACKS"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_NO_BOUGHT_EPIC_SNACKS"), 1000, true);

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_OF_CHAMP_BOUGHT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_NUMBER_OF_CHAMP_BOUGHT"), 1000, true);


			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_OF_ORANGE_BOUGHT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_NUMBER_OF_ORANGE_BOUGHT"), 1000, true);

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_OF_BOURGE_BOUGHT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_NUMBER_OF_BOURGE_BOUGHT"), 1000, true);

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CIGARETTES_BOUGHT"), 1000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CIGARETTES_BOUGHT"), 1000, true);

			};




			sub->AddOption<RegularOption>("Reset Orbital Cannon Cooldown", nullptr, []
				{
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ORBITAL_CANNON_COOLDOWN"), 0, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ORBITAL_CANNON_COOLDOWN"), 0, 0);
				});
			sub->AddOption<RegularOption>("Allow Gender Change"), nullptr, []
			{
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ALLOW_GENDER_CHANGE"), 52, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ALLOW_GENDER_CHANGE"), 52, 1);
			};


			sub->AddOption<RegularOption>("Redesign Character"), nullptr, []
			{
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_FM_CHANGECHAR_ASKED"), 0, 1);
			};


				});



			g_UiManager->AddSubmenu<RegularSubmenu>("Weapon", Weapon_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Pick ups", "RP + Money + other gun", Weapon_Pickup);

				});

			static const int GLOBAL_REQUEST_RCBANDITO[] = { 2793046, 6874 };
			static const int GLOBAL_REQUEST_MINITANK[] = { 2793046, 6875 };
			static const int GLOBAL_REQUEST_TAXI[] = { 2793046, 848 };
			static const int GLOBAL_REQUEST_AIRSTRIKE[] = { 2793046, 4485 };
			static const int GLOBAL_REQUEST_HELIPICKUP[] = { 2793046, 888 };
			static const int GLOBAL_REQUEST_BACKUPHELI[] = { 2793046, 4484 };
			static const int GLOBAL_REQUEST_AMMOCRATE[] = { 2793046, 886 };
			static const int GLOBAL_REQUEST_BALLISTICARMOUR[] = { 2793046, 896 };
			static const int GLOBAL_TP_INTO_PERSONAL_VEHICLE[] = { 2639783, 8 };
			static const int GLOBAL_SNOW[] = { 262145, 4752 };
			static const int GLOBAL_BULLSHARKTESTOSTERONE[] = { 2672505, 3689 };
			static const int GLOBAL_NO_IDLE_KICK1[] = { 1653913, 1172 };
			static const int GLOBAL_NO_IDLE_KICK2[] = { 1653913, 1156 };
			static const int GLOBAL_PLAYERSTAT_RANK[] = { 1853910, 862, 205, 6 };
			static const int GLOBAL_PLAYERSTAT_CASH[] = { 1853910, 862, 205, 3 };
			static const int GLOBAL_OFFRADAR[] = { 2657589, 466, 210 };
			static const int GLOBAL_COPSTURNBLINDEYE[] = { 2793046, 4654, 5 };
			static const int GLOBAL_NETWORK_STOPWATCH[] = { 2672505, 56 };


			g_UiManager->AddSubmenu<RegularSubmenu>("Network", Network, [](RegularSubmenu* sub)
				{

					//sub->AddOption<SubOption>("All Players", "All", AllP);
					sub->AddOption<SubOption>("Players", "Players in your session", Online_P_List);

					sub->AddOption<SubOption>("Protections...", nullptr, Protection_Main);
					//sub->AddOption<SubOption>("Recovery", nullptr, Recovery_Menu);

					sub->AddOption<BoolOption<bool>>("Anti AFK", "", &AFK, BoolDisplay::OnOff_Icon);

	        		sub->AddOption<SubOption>("MerryWeather", nullptr, MerryWeather);


					sub->AddOption<BoolOption<bool>>("Off The Radar", "", &OffTheRadar, BoolDisplay::OnOff_Icon);

			/*		sub->AddOption<BoolOption<bool>>("Fast Respawn ", "will respawn you fast", &FastRespawn, BoolDisplay::OnOff_Icon);
*/


					sub->AddOption<BoolOption<bool>>("Cops Turn Blind Eye", "Cops Turn Blind Eye", &CopsTurnBlindEye, BoolDisplay::OnOff_Icon);


				

		

					sub->AddOption<RegularOption>("TP Personal Vehicle Here", "", []
						{
							Vector3 CoordBlip = UI::GET_BLIP_INFO_ID_COORD(UI::GET_FIRST_BLIP_INFO_ID(225));
					int VehicleHandle = VEHICLE::GET_CLOSEST_VEHICLE(CoordBlip.x, CoordBlip.y, CoordBlip.z, 1, 0, 71);
					if (VehicleHandle == 0) {
						Vector3 CoordBlipMoto = UI::GET_BLIP_INFO_ID_COORD(UI::GET_FIRST_BLIP_INFO_ID(226));
						int VehicleHandleMoto = VEHICLE::GET_CLOSEST_VEHICLE(CoordBlip.x, CoordBlip.y, CoordBlip.z, 1, 0, 71);
						if (VehicleHandleMoto == 0) {
							/*g_Logger->Info("Personal Vehicle not Found!");*/
						}
						else {
							Vector3 me = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
							ENTITY::SET_ENTITY_COORDS(VehicleHandleMoto, me.x, me.y + 2, me.z, 1, 1, 1, 1);
						}
					}
					else {
						Vector3 me = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
						ENTITY::SET_ENTITY_COORDS(VehicleHandle, me.x, me.y + 2, me.z, 1, 1, 1, 1);
					}
						});






					sub->AddOption<RegularOption>("Ghost Organization", "", []
						{
						/*	globalHandle(2425869 + PLAYER::PLAYER_ID(), 443).at(204).as();
	*/





					globalHandle(2440049 + 70).As<int>() = NETWORK::GET_NETWORK_TIME();

					globalHandle(2540384 + 4625).As<int>() = 4;




						});




					//sub->AddOption<RegularOption>(("Fill Inventory"), "Refills snacks and armor", [] {

					//	STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("NO_BOUGHT_HEALTH_SNACKS"), 15, true);

					//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("NO_BOUGHT_EPIC_SNACKS"), 15, true);
					//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("NO_BOUGHT_YUM_SNACKS"), 30, true);
					//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP_CHAR_ARMOUR_1_COUNT"), 10, true);

					//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP_CHAR_ARMOUR_2_COUNT"), 10, true);
					//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP_CHAR_ARMOUR_3_COUNT"), 10, true);
					//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP_CHAR_ARMOUR_4_COUNT"), 10, true);

					//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP_CHAR_ARMOUR_5_COUNT"), 10, true);
					//	});



					//sub->AddOption<BoolOption<bool>>("Cops Turn Blind Eye", nullptr, &SpectatePlayer2, BoolDisplay::OnOff_Icon);

					//sub->AddOption<RegularOption>("Ghost Organization", "", []
					//	{
					//		*script_global(2425869).at(PLAYER::PLAYER_ID(), 443).at(204).as<bool*>();
					//*script_global(2440049).at(70).as<int32_t*>() = NETWORK::GET_NETWORK_TIME();
					//*script_global(2540384).at(4625).as<int32_t*>() = 4;
					//	});

			/*		sub->AddOption<RegularOption>("Request Bull Shark Testosterone", "", [] { globalHandle(2440049).At(4006).As<int32_t>() = 3; });
*/



					sub->AddOption<RegularOption>(("Request Bull Shark Testosterone"), "AIRSTRIKE", [] {

						globalHandle(GLOBAL_BULLSHARKTESTOSTERONE[0]).At(GLOBAL_BULLSHARKTESTOSTERONE[1]).As<bool>() = true;

						});


					sub->AddOption<RegularOption>(("Request BALLISTIC ARMOUR"), "BALLISTIC ARMOUR", [] {

						globalHandle(GLOBAL_REQUEST_BALLISTICARMOUR[0]).At(GLOBAL_REQUEST_BALLISTICARMOUR[1]).As<bool>() = true;

						});

					sub->AddOption<RegularOption>(("Request RC"), "AIRSTRIKE", [] {

						globalHandle(GLOBAL_REQUEST_RCBANDITO[0]).At(GLOBAL_REQUEST_RCBANDITO[1]).As<bool>() = true;

						});

					sub->AddOption<RegularOption>(("Request MiniTank"), "AIRSTRIKE", [] {

						globalHandle(GLOBAL_REQUEST_MINITANK[0]).At(GLOBAL_REQUEST_MINITANK[1]).As<bool>() = true;

						});

					sub->AddOption<RegularOption>(("Request Taxi"), "AIRSTRIKE", [] {

						globalHandle(GLOBAL_REQUEST_TAXI[0]).At(GLOBAL_REQUEST_TAXI[1]).As<bool>() = true;

						});


					sub->AddOption<BoolOption<bool>>("Anti AFK", "", &AFK, BoolDisplay::OnOff_Icon);


					//sub->AddOption<RegularOption>(("Playerdex / tracker / RID Joiner"), nullptr, [] {

					//	ShellExecute(NULL, L"open", L"C:\\Scooby\\RID\\Playerdex.exe", NULL, NULL, SW_SHOWDEFAULT);

					//	});

					//sub->AddOption<RegularOption>(("Explode Lobby"), nullptr, []
					//	{
					//		for (int i = 0; i < 32; ++i) {
					//			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))) {
					//				Vector3 GetPlayerCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(i), true);
					//				FIRE::ADD_EXPLOSION(GetPlayerCoords.x, GetPlayerCoords.y, GetPlayerCoords.z, 29, 20, true, false, 0);
					//				PED::EXPLODE_PED_HEAD(PLAYER::GET_PLAYER_PED(g_SelectedPlayer), 0x145F1012);
					//			}
					//		}
					//	});
				});




				g_UiManager->AddSubmenu<RegularSubmenu>("All", AllP, [](RegularSubmenu* sub)
					{

						sub->AddOption<RegularOption>("Send All To Island"), nullptr, [] {
						for (std::int32_t i = 0; i < 32; i++) {
							if (i == PLAYER::PLAYER_ID()) return; uint64_t sevent2[4] = { -621279188, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 0, 0 };
							Hooking::trigger_script_event(1, sevent2, 4, 1 << i);
						}
					};

				sub->AddOption<RegularOption>("Blame Random"), nullptr, [] { blame_player(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 32)); };

					});
				

			

			g_UiManager->AddSubmenu<RegularSubmenu>(PLAYER::GET_PLAYER_NAME(g_SelectedPlayer), Online_P_List, [](RegularSubmenu* sub)
				{
					for (std::uint32_t i = 0; i < 32; ++i)
					{
						if (auto ped = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))
						{
							sub->AddOption<SubOption>(PLAYER::GET_PLAYER_NAME(i), nullptr, Selected_P_Menu, [=]
								{
									g_SelectedPlayer = i;
								});
						}
					}
				});

			g_UiManager->AddSubmenu<RegularSubmenu>(PLAYER::GET_PLAYER_NAME(g_SelectedPlayer), Selected_P_Menu, [](RegularSubmenu* sub)
				{

					LoadPlayerInfo, ((char*) PLAYER::GET_PLAYER_NAME(g_SelectedPlayer), g_SelectedPlayer);
		/*			sub->AddOption<SubOption>("Removals", nullptr, RemovalsP);*/
					sub->AddOption<SubOption>("Drops", nullptr, FriendlyP);
					sub->AddOption<SubOption>("Trolling", nullptr, GriefingP);
	/*				sub->AddOption<SubOption>("Vehicle", nullptr, VehicleP);*/
					sub->AddOption<SubOption>("Teleport", nullptr, TeleportP);
					sub->AddOption<SubOption>("Social Club ", nullptr, SubmenuSC);





					sub->AddOption<BoolOption<bool>>("Spectate", nullptr, &SpectatePlayer2, BoolDisplay::OnOff_Icon);





					sub->AddOption<BoolOption<bool>>("Lag player (Drops FPS)", nullptr, &LAGPLAYER, BoolDisplay::OnOff_Icon);

				/*	sub->AddOption<BoolOption<bool>>("Freeze", nullptr, &Freeze, BoolDisplay::OnOff_Icon);*/
					sub->AddOption<RegularOption>("Clone Player", nullptr, []
						{
							PED::CLONE_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 1, 1, 1);
						});


				/*	sub->AddOption<BoolOption<bool>>("Freeze", nullptr, &FreezeP, BoolDisplay::OnOff_Icon);*/



				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Social Club Options", SubmenuSC, [](RegularSubmenu* sub)
				{
					(g_SelectedPlayer);
			sub->AddOption<RegularOption>("Show Profile", "", []
				{
					int handle[76]; //var num3 = sub_34009(A_0, (A_1) + 264, (A_1) + 272);
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(g_SelectedPlayer, &handle[0], 13);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&handle[0]);
				});
			sub->AddOption<RegularOption>("Add As Friend", "", []
				{
					int handle[76]; //var num3 = sub_34009(A_0, (A_1) + 264, (A_1) + 272);
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(g_SelectedPlayer, &handle[0], 13);
			//NETWORK::NETWORK_ADD_FRIEND(&handle[0], "Accept my friend request");
				});

			sub->AddOption<RegularOption>("Send Message", "", []
				{
					GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, "", "", "", "", "", "", 60);
			while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0);
			int handle[76]; //var num3 = sub_34009(A_0, (A_1) + 264, (A_1) + 272);
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(g_SelectedPlayer, &handle[0], 13);
			NETWORK::NETWORK_SEND_TEXT_MESSAGE(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT(), &handle[0]);
				});
				});





			//g_UiManager->AddSubmenu<RegularSubmenu>(("Angry Planes"), SubemenuAngryPanes, [](RegularSubmenu* sub)
			//	{
			//	(g_SelectedPlayer, 1);
			//sub->AddOption<NumberOption<int>>(("Amount"), nullptr, &g_angry_planes.max_planes_to_spawn, 1, 50, 1, 0);
			//sub->AddOption<BoolOption<bool>>(("Spawn Planes"), nullptr, &g_AngryPlanesEnable, BoolDisplay::OnOff, nullptr, [] { if (g_AngryPlanesEnable == false) { g_angry_planes.cleanup(); } });
			//sub->AddOption<BoolOption<bool>>(("Equip With Rockets"), nullptr, &g_AngryPlanesRockets, BoolDisplay::OnOff);
			//	});




						g_UiManager->AddSubmenu<RegularSubmenu>(("Trails"), Trails, [](RegularSubmenu* sub)
				{

					sub->AddOption<SubOption>("Hand trails", nullptr, SubmenuHandtrail);



			//sub->AddOption<BoolOption<bool>>("Dog", nullptr, &Flash, BoolDisplay::OnOff_Icon);



			sub->AddOption<BoolOption<bool>>("Foot Trails", nullptr, &FootTrails, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Vehicle Trails", nullptr, &VehicleTrails, BoolDisplay::OnOff_Icon);


				});


			g_UiManager->AddSubmenu<RegularSubmenu>("Scooby Customs", SubmenuVehicleColors2, [](RegularSubmenu* sub)
				{
					Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			VEHICLE::SET_VEHICLE_MOD_KIT(veh, 0);
			sub->AddOption<NumberOption<std::int32_t>>("Spoiler:", nullptr, &Spoiler, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_SPOILER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_SPOILER, Spoiler, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Front Bumper:", nullptr, &FBumper, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_FRONTBUMPER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_FRONTBUMPER, FBumper, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Rear Bumper:", nullptr, &RBumper, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_REARBUMPER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_REARBUMPER, RBumper, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Side Skirt:", nullptr, &SSkirt, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_SIDESKIRT), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_SIDESKIRT, SSkirt, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Exhaust:", nullptr, &Exhaust, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_EXHAUST), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_EXHAUST, Exhaust, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Grille:", nullptr, &Grille, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_GRILLE), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_GRILLE, Grille, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Chassis:", nullptr, &Chasis, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_CHASSIS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_CHASSIS, Chasis, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Hood:", nullptr, &Hood, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_HOOD), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_HOOD, Hood, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Fender:", nullptr, &Fender, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_FENDER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_FENDER, Fender, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Right Fender:", nullptr, &RFender, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_RIGHTFENDER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_RIGHTFENDER, RFender, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Roof:", nullptr, &Roof, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_ROOF), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_ROOF, Roof, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Engine:", nullptr, &Engine, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_ENGINE), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_ENGINE, Engine, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Brakes:", nullptr, &Brakes, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_BRAKES), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_BRAKES, Brakes, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Transmission:", nullptr, &Transmission, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_TRANSMISSION), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_TRANSMISSION, Transmission, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Horns:", nullptr, &Horns, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_HORNS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_HORNS, Horns, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Suspension:", nullptr, &Suspension, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_SUSPENSION), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_SUSPENSION, Suspension, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Armor:", nullptr, &Armor, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_ARMOR), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_ARMOR, Armor, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Turbo:", nullptr, &Turbo, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_TURBO), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_TURBO, Turbo, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Tire Smoke:", nullptr, &TSmoke, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_TIRESMOKE), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_TIRESMOKE, TSmoke, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Xenon:", nullptr, &Xenon, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_XENONLIGHTS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_XENONLIGHTS, Xenon, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Wheels:", nullptr, &Wheels, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_FRONTWHEELS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_FRONTWHEELS, Wheels, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Windows:", nullptr, &Windows, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_WINDOWS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_WINDOWS, Windows, false); });

			sub->AddOption<RegularOption>("----~r~Benny ~o~vehicles----", "b", []
				{
				});

			sub->AddOption<NumberOption<std::int32_t>>("Plate Holder:", nullptr, &Plateholder, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_PLATEHOLDER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_PLATEHOLDER, Plateholder, false); });


			sub->AddOption<NumberOption<std::int32_t>>("Vanity Plates:", nullptr, &Vanity, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_VANITY_PLATES), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_VANITY_PLATES, Vanity, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Trim:", nullptr, &Trims, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_TRIM), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_TRIM, Trims, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Ornaments:", nullptr, &Ornaments, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_ORNAMENTS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_ORNAMENTS, Ornaments, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Dashboard:", nullptr, &Dashboard, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_DASHBOARD), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_DASHBOARD, Dashboard, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Dial:", nullptr, &Dial, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_DIAL), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_DIAL, Dial, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Door Speaker:", nullptr, &DoorSpeaker, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_DOOR_SPEAKER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_DOOR_SPEAKER, DoorSpeaker, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Seats:", nullptr, &Seats, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_SEATS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_SEATS, Seats, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Steering Wheel:", nullptr, &SteeringWheel, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_STEERINGWHEEL), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_STEERINGWHEEL, SteeringWheel, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Shifting Levers:", nullptr, &Shifter, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_SHIFTER_LEAVERS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_SHIFTER_LEAVERS, Shifter, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Plaques:", nullptr, &Plaques, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_PLAQUES), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_PLAQUES, Plaques, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Speakers:", nullptr, &Speakers, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_SPEAKERS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_SPEAKERS, Speakers, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Trunk:", nullptr, &Trunk, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_TRUNK), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_TRUNK, Trunk, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Hydraulics:", nullptr, &Hydraulics, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_HYDRULICS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_HYDRULICS, Hydraulics, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Engine Block:", nullptr, &EngineBlock, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_ENGINE_BLOCK), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_ENGINE_BLOCK, EngineBlock, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Air Filter:", nullptr, &Filter, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_AIR_FILTER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_AIR_FILTER, Filter, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Struts:", nullptr, &Struts, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_STRUTS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_STRUTS, Struts, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Arch Cover:", nullptr, &Arch, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_ARCH_COVER), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_ARCH_COVER, Arch, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Aerials:", nullptr, &Aerials, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_AERIALS), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_AERIALS, Aerials, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Trim 2:", nullptr, &TrimTwo, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_TRIM_2), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_TRIM_2, TrimTwo, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Tank:", nullptr, &Tank, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_TANK), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_TANK, Tank, false); });
			sub->AddOption<NumberOption<std::int32_t>>("Livery:", nullptr, &Livery, 0, VEHICLE::GET_NUM_VEHICLE_MODS(veh, MOD_LIVERY), 1, 3, true, "", "", [veh] { VEHICLE::SET_VEHICLE_MOD(veh, MOD_LIVERY, Livery, false); });

				});




			g_UiManager->AddSubmenu<RegularSubmenu>("UI Settings", SubmenuSettingsMenu, [](RegularSubmenu* sub)
				{



			sub->AddOption<BoolOption<bool>>("Controller input", nullptr, &g_UiManager->m_Controllerinput, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Sounds", nullptr, &g_UiManager->m_Sounds, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Watermark", nullptr, &Gamev, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Watermark & FPS", nullptr, &Version, BoolDisplay::OnOff_Icon);

			sub->AddOption<SubOption>("Header", nullptr, SubmenuSettingsHeader);
			sub->AddOption<SubOption>("Infobar", nullptr, SubmenuSettingsSubmenuBar);
			sub->AddOption<SubOption>("Scrollbar", nullptr, SubmenuSettingsScrollbar);
			sub->AddOption<SubOption>("Options", nullptr, SubmenuSettingsOption);
			sub->AddOption<SubOption>("Footer", nullptr, SubmenuSettingsFooter);
			sub->AddOption<SubOption>("Description", nullptr, SubmenuSettingsDescription);
			sub->AddOption<SubOption>("Input", nullptr, SubmenuSettingsInput);

			sub->AddOption<SubOption>("Hotkeys", nullptr, Hotkeys);

				});





			g_UiManager->AddSubmenu<RegularSubmenu>("Settings", SubmenuSettings, [](RegularSubmenu* sub)
				{

					sub->AddOption<SubOption>("UI Settings", nullptr, SubmenuSettingsMenu);

					sub->AddOption<NumberOption<float>>("X Position", nullptr, &g_UiManager->m_PosX, 0.f, 1.f, 0.01f, 2);
					sub->AddOption<NumberOption<float>>("Y Position", nullptr, &g_UiManager->m_PosY, 0.f, 1.f, 0.01f, 2);
		
			
					sub->AddOption<RegularOption>("Unload", "Unload scooby.", [] {Mod_running = false; });
				});



			g_UiManager->AddSubmenu<RegularSubmenu>(("Game Info"), SubmenuInfoBox, [](RegularSubmenu* sub)
				{
					sub->AddOption<ChooseOption<const char*, std::size_t>>("FPS", nullptr, &Display5, &Displayy5);
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Free Slots", nullptr, &Display6, &Displayy6);
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Position", nullptr, &Display7, &Displayy7);
			sub->AddOption<ChooseOption<const char*, std::size_t>>("Speed", nullptr, &Display8, &Displayy8);

			if (Displayy5 == 1) { g_Fps = false; }
			else { g_Fps = true; }
			if (Displayy6 == 1) { g_FreeSlots = false; }
			else { g_FreeSlots = true; }
			if (Displayy7 == 1) { g_Position = false; }
			else { g_Position = true; }
			if (Displayy8 == 1) { g_Speed = false; }
			else { g_Speed = true; }
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Menu", Menus, [](RegularSubmenu* sub)
				{

			sub->AddOption<RegularOption>(("Frog Menu"), "Frog Menu", [] {

				ShellExecute(NULL, L"open", L"https://gtayes.github.io/Frog/", NULL, NULL, SW_SHOWDEFAULT);

				});


					sub->AddOption<RegularOption>(("River Menu Site"), "River Menu", [] {

						ShellExecute(NULL, L"open", L"https://rivergta.xyz/", NULL, NULL, SW_SHOWDEFAULT);

						});

			sub->AddOption<RegularOption>(("BleachV Menu Site"), "BleachV Menu", [] {

				ShellExecute(NULL, L"open", L"https://gtayes.github.io/BleachV/", NULL, NULL, SW_SHOWDEFAULT);

				});


				});



			g_UiManager->AddSubmenu<RegularSubmenu>("Infobar", SubmenuSettingsSubmenuBar, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<float>>("Height", nullptr, &g_UiManager->m_SubmenuBarHeight, 0.1f, 0.1f, 0.010f, 3);
					sub->AddOption<NumberOption<float>>("Text Size", nullptr, &g_UiManager->m_SubmenuBarTextSize, 0.01f, 1.f, 0.01f, 2);

					sub->AddOption<NumberOption<std::uint8_t>>("Background R", nullptr, &g_UiManager->m_SubmenuBarBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background G", nullptr, &g_UiManager->m_SubmenuBarBackgroundColor.g, '\255', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background B", nullptr, &g_UiManager->m_SubmenuBarBackgroundColor.b, '\255', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background A", nullptr, &g_UiManager->m_SubmenuBarBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Text R", nullptr, &g_UiManager->m_SubmenuBarTextColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Text G", nullptr, &g_UiManager->m_SubmenuBarTextColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Text B", nullptr, &g_UiManager->m_SubmenuBarTextColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Text A", nullptr, &g_UiManager->m_SubmenuBarTextColor.a, '\0', static_cast<std::uint8_t>(255));
				});


			//Too lazy to care 

			//g_UiManager->AddSubmenu<RegularSubmenu>("Scrollbar", SubmenuSettingsScrollbar, [](RegularSubmenu* sub) {
			//	sub->AddOption<BoolOption<bool>>("Draw Scroller", nullptr, &g_UiManager->DrawScroller, BoolDisplay::YesNo);
			//sub->AddOption<NumberOption<float>>("Padding", nullptr, &g_UiManager->ScrollerPadding, 0.f, 0.1f, 0.005f, 3);
			//sub->AddOption<BoolOption<bool>>("Left side", nullptr, &g_UiManager->isLeftScroller, BoolDisplay::YesNo);
			//	});


			g_UiManager->AddSubmenu<RegularSubmenu>("Options", SubmenuSettingsOption, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<float>>("Height", nullptr, &g_UiManager->m_OptionHeight, 0.01f, 0.1f, 0.001f, 3);
					sub->AddOption<NumberOption<float>>("Text Size", nullptr, &g_UiManager->m_OptionTextSize, 0.01f, 1.f, 0.01f, 2);

					sub->AddOption<NumberOption<std::uint8_t>>("Selected Background R", nullptr, &g_UiManager->m_OptionSelectedBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Background G", nullptr, &g_UiManager->m_OptionSelectedBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Background B", nullptr, &g_UiManager->m_OptionSelectedBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Background A", nullptr, &g_UiManager->m_OptionSelectedBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Background R", nullptr, &g_UiManager->m_OptionUnselectedBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Background G", nullptr, &g_UiManager->m_OptionUnselectedBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Background B", nullptr, &g_UiManager->m_OptionUnselectedBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Background A", nullptr, &g_UiManager->m_OptionUnselectedBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));

					sub->AddOption<NumberOption<std::uint8_t>>("Selected Text R", nullptr, &g_UiManager->m_OptionSelectedTextColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Text G", nullptr, &g_UiManager->m_OptionSelectedTextColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Text B", nullptr, &g_UiManager->m_OptionSelectedTextColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Selected Text A", nullptr, &g_UiManager->m_OptionSelectedTextColor.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Text R", nullptr, &g_UiManager->m_OptionUnselectedTextColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Text G", nullptr, &g_UiManager->m_OptionUnselectedTextColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Text B", nullptr, &g_UiManager->m_OptionUnselectedTextColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Unselected Text A", nullptr, &g_UiManager->m_OptionUnselectedTextColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Footer", SubmenuSettingsFooter, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<float>>("Height", nullptr, &g_UiManager->m_FooterHeight, 0.01f, 0.1f, 0.001f, 3);
					sub->AddOption<NumberOption<float>>("Sprite Size", nullptr, &g_UiManager->m_FooterSpriteSize, 0.01f, 1.f, 0.001f, 3);

					sub->AddOption<NumberOption<std::uint8_t>>("Background R", nullptr, &g_UiManager->m_FooterBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background G", nullptr, &g_UiManager->m_FooterBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background B", nullptr, &g_UiManager->m_FooterBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Background A", nullptr, &g_UiManager->m_FooterBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Sprite R", nullptr, &g_UiManager->m_FooterSpriteColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Sprite G", nullptr, &g_UiManager->m_FooterSpriteColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Sprite B", nullptr, &g_UiManager->m_FooterSpriteColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("Sprite A", nullptr, &g_UiManager->m_FooterSpriteColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Header", SubmenuSettingsHeader, [](RegularSubmenu* sub)
				{
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Type", nullptr, &Lists::HeaderTypesFrontend, &Lists::HeaderTypesPosition, true, []
						{
							g_UiManager->m_HeaderType = Lists::HeaderTypesBackend[Lists::HeaderTypesPosition];
						});

					switch (g_UiManager->m_HeaderType)
					{
					case HeaderType::Static:
						sub->AddOption<SubOption>("Background", nullptr, SubmenuSettingsHeaderStaticBackground);
						break;
					case HeaderType::Gradient:
						sub->AddOption<SubOption>("Gradient", nullptr, SubmenuSettingsHeaderGradientBackground);
						break;
					case HeaderType::Game_YTD:
						sub->AddOption<SubOption>("Game YTD", nullptr, SubmenuSettingsHeaderGradientBackground);
						break;
					case HeaderType::YTD:
						sub->AddOption<SubOption>("YTD", nullptr, SubmenuSettingsHeaderGradientBackground);
						break;
					}

					sub->AddOption<SubOption>("Text", nullptr, SubmenuSettingsHeaderText);
					sub->AddOption<NumberOption<float>>("Height", nullptr, &g_UiManager->m_HeaderHeight, 0.01f, 0.2f, 0.001f, 3);
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Header Background", SubmenuSettingsHeaderStaticBackground, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<std::uint8_t>>("R", nullptr, &g_UiManager->m_HeaderBackgroundColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("G", nullptr, &g_UiManager->m_HeaderBackgroundColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("B", nullptr, &g_UiManager->m_HeaderBackgroundColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("A", nullptr, &g_UiManager->m_HeaderBackgroundColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Header Gradient", SubmenuSettingsHeaderGradientBackground, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Transparent", nullptr, &g_UiManager->m_HeaderGradientTransparent, BoolDisplay::YesNo);
					sub->AddOption<BoolOption<bool>>("Flip", nullptr, &g_UiManager->m_HeaderGradientFlip, BoolDisplay::YesNo);

					sub->AddOption<NumberOption<std::uint8_t>>("R1", nullptr, &g_UiManager->m_HeaderGradientColorLeft.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("G1", nullptr, &g_UiManager->m_HeaderGradientColorLeft.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("B1", nullptr, &g_UiManager->m_HeaderGradientColorLeft.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("A1", nullptr, &g_UiManager->m_HeaderGradientColorLeft.a, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("R2", nullptr, &g_UiManager->m_HeaderGradientColorRight.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("G2", nullptr, &g_UiManager->m_HeaderGradientColorRight.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("B2", nullptr, &g_UiManager->m_HeaderGradientColorRight.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("A2", nullptr, &g_UiManager->m_HeaderGradientColorRight.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Header Text", SubmenuSettingsHeaderText, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Enable Rainbow Title", nullptr, &g_UiManager->Rainbowmenu_titleBool, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Enable", nullptr, &g_UiManager->m_HeaderText, BoolDisplay::OnOff_Icon);
					sub->AddOption<NumberOption<float>>("Size", nullptr, &g_UiManager->m_HeaderTextSize, 0.1f, 2.f, 0.01f, 2);
					sub->AddOption<NumberOption<std::uint8_t>>("R", nullptr, &g_UiManager->m_HeaderTextColor.r, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("G", nullptr, &g_UiManager->m_HeaderTextColor.g, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("B", nullptr, &g_UiManager->m_HeaderTextColor.b, '\0', static_cast<std::uint8_t>(255));
					sub->AddOption<NumberOption<std::uint8_t>>("A", nullptr, &g_UiManager->m_HeaderTextColor.a, '\0', static_cast<std::uint8_t>(255));
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Description", SubmenuSettingsDescription, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<float>>("Padding", "Padding before the description rect.", &g_UiManager->m_DescriptionHeightPadding, 0.01f, 1.f, 0.001f,
						3);
					sub->AddOption<NumberOption<float>>("Height", "Size of the description rect.", &g_UiManager->m_DescriptionHeight, 0.01f, 1.f, 0.001f, 3);
					sub->AddOption<NumberOption<float>>("Text Size", "Size of the description text.", &g_UiManager->m_DescriptionTextSize, 0.1f, 2.f, 0.01f, 2);
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Input", SubmenuSettingsInput, [](RegularSubmenu* sub)
				{
					sub->AddOption<NumberOption<std::int32_t>>("Open Delay", nullptr, &g_UiManager->m_OpenDelay, 10, 1000, 10, 0);
					sub->AddOption<NumberOption<std::int32_t>>("Back Delay", nullptr, &g_UiManager->m_BackDelay, 10, 1000, 10, 0);
					sub->AddOption<NumberOption<std::int32_t>>("Enter Delay", nullptr, &g_UiManager->m_EnterDelay, 10, 1000, 10, 0);
					sub->AddOption<NumberOption<std::int32_t>>("Vertical Delay", nullptr, &g_UiManager->m_VerticalDelay, 10, 1000, 10, 0);
					sub->AddOption<NumberOption<std::int32_t>>("Horizontal Delay", nullptr, &g_UiManager->m_HorizontalDelay, 10, 1000, 10, 0);
				});




	


			g_UiManager->AddSubmenu<RegularSubmenu>(("Paint"), SubmenuPaintGun, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>(("Enable"), nullptr, &PaintG, BoolDisplay::OnOff, false, [] {});
			sub->AddOption<NumberOption<float>>(("Range"), nullptr, &m_Range, 0.1f, 10.f, 0.1f, 1);
			sub->AddOption<NumberOption<float>>(("Intensity"), nullptr, &m_Intensity, 1.f, 2000.f, 25.f, 0);
			sub->AddOption<RegularOption>(("Erase"), nullptr, [] { positions.clear(); });
			sub->AddOption<NumberOption<int>>(("Red"), nullptr, &g_RedPaint, 0, 255, 1, 0);
			sub->AddOption<NumberOption<int>>(("Green"), nullptr, &g_GreenPaint, 0, 255, 1, 0);
			sub->AddOption<NumberOption<int>>(("Blue"), nullptr, &g_BluePaint, 0, 255, 1, 0);
				});


			g_UiManager->AddSubmenu<RegularSubmenu>(("Pickups"), SubmenuPickupsGun, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("-----------------------", nullptr, []
						{

						});

			sub->AddOption<RegularOption>("Turn on RP + Money gun with (Rapid Fire) for the best", nullptr, []
				{

				});
			sub->AddOption<BoolOption<bool>>("Rapid Fire", nullptr, &RapidFire, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("Money Gun", "will spawn a pickup and you get money,same with other players", &MoneyGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("RP Gun", "will spawn a pickup and you get rp,same with other players", &MoneyGun2, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("RP Gun 2", "will spawn a pickup and you get rp,same with other players", &MoneyGun3, BoolDisplay::OnOff_Icon);

			sub->AddOption<RegularOption>("-----------------------", nullptr, []
				{

				});
				});


			g_UiManager->AddSubmenu<RegularSubmenu>(("Shoot vehicles"), SubmenuVehicleGun, [](RegularSubmenu* sub)
				{

					sub->AddOption<BoolOption<bool>>("Shoot ENTITY XF", nullptr, &ShootVehicle, BoolDisplay::OnOff_Icon);

			sub->AddOption<BoolOption<bool>>("Shoot Space Docker", nullptr, &ShootVehicle2, BoolDisplay::OnOff_Icon);



			sub->AddOption<RegularOption>("test", nullptr, []
				{
		
				});

				});



			//g_UiManager->AddSubmenu<RegularSubmenu>(("Vehicle"), EntityGunSub1, [](RegularSubmenu* sub)
			//	{
			//		sub->AddOption<ChooseOption<const char*, std::size_t>>(("Vehicle:"), nullptr, &m_EntityVehicle, &m_EntityVehicleIterator);
			//sub->AddOption<NumberOption<float>>(("Velocity:"), nullptr, &m_VehicleLaunchSpeed, 0, 1000.f, 10.f, 0, true, "", "", [] {});
			//sub->AddOption<NumberOption<float>>(("Distance:"), nullptr, &m_VehicleSpawnDistance, 0, 10.f, 0.2f, 1, true, "", "", [] {});
			//sub->AddOption<BoolOption<bool>>(("Enable"), nullptr, &m_EnableEntityGunVehicle, BoolDisplay::OnOff, false, [] {});
			//	});





			g_UiManager->AddSubmenu<RegularSubmenu>("Cayo Perico Heist", CayoHeist, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Skip Cayo Setups"), nullptr, []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4_MISSIONS"), -1, 1);

						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("$MP0_H4CNF_TARGET"), 5, 1);

						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("$MP0_H4_PROGRESS"), 131055, 1);

						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("$MP0_H4CNF_BS_GEN"), -1, 1);

						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4CNF_BS_ENTR"), 1, 1);

						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4CNF_WEAPONS"), 1, 1);

						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("$MP0_H4LOOT_PAINT"), -1, 1);

						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4LOOT_CASH_I_SCOPED"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4LOOT_CASH_C_SCOPED"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4LOOT_WEED_I_SCOPED"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4LOOT_WEED_C_SCOPED"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4LOOT_COKE_I_SCOPED"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4LOOT_COKE_C_SCOPED"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4LOOT_GOLD_I_SCOPED"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4LOOT_GOLD_C_SCOPED"), -1, 1);

					};

					sub->AddOption<RegularOption>("Reset Cayo Cooldown", nullptr, []
						{
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4_COOLDOWN"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H4_COOLDOWN_HARD"), -1, 1);
						});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Unlocks", Unlock_Recovery, [](RegularSubmenu* sub)
				{




					sub->AddOption<RegularOption>("Weapons", nullptr, []
						{
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV _ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTPISTOL_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PISTOL50_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_APPISTOL_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MICROSMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTRIFLE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CRBNRIFLE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADVRIFLE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PUMP_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SAWNOFF_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_BULLPUP_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSHTGN_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SNIPERRFL_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_HVYSNIPER_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRNLAUNCH_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_RPG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MINIGUNS_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMKGRENADE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_STKYBMB_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);

			//-------------

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MOLOTOV _ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CMBTPISTOL_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PISTOL50_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_APPISTOL_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MICROSMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTSMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTRIFLE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CRBNRIFLE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADVRIFLE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CMBTMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTMG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PUMP_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SAWNOFF_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BULLPUP_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTSHTGN_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SNIPERRFL_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_HVYSNIPER_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_GRNLAUNCH_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_RPG_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MINIGUNS_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_GRENADE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SMKGRENADE_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_STKYBMB_ENEMY_KILLS"), 600, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MOLOTOV_ENEMY_KILLS"), 600, 0);

						});



			sub->AddOption<RegularOption>("Haircuts", nullptr, []
				{
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_7"), -1, 1);


			// --------------


			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_7"), -1, 1);


				});



			sub->AddOption<RegularOption>("Vehicle", nullptr, []
				{
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_1_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_2_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_3_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_4_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_5_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_6_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_CARMOD_7_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMRALLYWONDRIVE"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMRALLYWONNAV"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINSEARACE"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINAIRRACE"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_TURBO_STARTS_IN_RACE"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_USJS_COMPLETED"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_RACES_FASTEST_LAP"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_NUMBER_SLIPSTREAMS_IN_RACE"), 100, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_WIN_CAPTURES"), 25, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_DROPOFF_CAP_PACKAGES"), 100, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_KILL_CARRIER_CAPTURE"), 100, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FINISH_HEISTS"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FINISH_HEIST_SETUP_JOB"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_WIN_LAST_TEAM_STANDINGS"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_ONLY_PLAYER_ALIVE_LTS"), 50, 1);

			/// ----------------


			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_FM_CARMOD_1_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_FM_CARMOD_2_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_FM_CARMOD_3_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_FM_CARMOD_4_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_FM_CARMOD_5_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_FM_CARMOD_6_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_FM_CARMOD_7_UNLCK"), -1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMRALLYWONDRIVE"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMRALLYWONNAV"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMWINSEARACE"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMWINAIRRACE"), 1, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_NUMBER_TURBO_STARTS_IN_RACE"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_USJS_COMPLETED"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_RACES_FASTEST_LAP"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_NUMBER_SLIPSTREAMS_IN_RACE"), 100, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_WIN_CAPTURES"), 25, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_DROPOFF_CAP_PACKAGES"), 100, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_KILL_CARRIER_CAPTURE"), 100, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FINISH_HEISTS"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FINISH_HEIST_SETUP_JOB"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_WIN_LAST_TEAM_STANDINGS"), 50, 1);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_ONLY_PLAYER_ALIVE_LTS"), 50, 1);

				});






					sub->AddOption<RegularOption>("Unlock All Achievements", nullptr, []
						{
							PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER;
							STATS::STAT_SET_INT(0x53c59a8e, -1, 1); // MPPLY_HEIST_ACH_TRACKER
							STATS::STAT_SET_INT(0x796d2d6a, 25, 1); // MPPLY_AWD_FM_CR_DM_MADE
							STATS::STAT_SET_INT(0xd5d5279d, 25, 1); // MPPLY_AWD_FM_CR_RACES_MADE
							STATS::STAT_SET_INT(0xe00c1321, 100, 1); // MPPLY_AWD_FM_CR_PLAYED_BY_PEEP
							Hash StatsBools[] =
							{
								// MP0_AWD_FM_GOLF_HOLE_IN_1 MP0_AWD_FM_SHOOTRANG_GRAN_WON MP0_AWD_FM_TENNIS_STASETWIN MP0_AWD_FM6DARTCHKOUT MP0_AWD_FMATTGANGHQ
								0x22d9626f, 0x2bfe2b98, 0xcca40e6,  0xb6c51652, 0x49e3d35b,
								// MP0_AWD_BUY_EVERY_GUN MP0_AWD_FMWINEVERYGAMEMODE MP0_AWD_FM25DIFFERENTDM MP0_AWD_FM_TENNIS_5_SET_WINS MP0_AWD_FM25DIFFERENTRACES
								0x21f81ca1, 0xbdda53b4, 0x59de4ddc, 0x69e7c068, 0xb4f06c2f,
								// MP0_AWD_FM25DIFITEMSCLOTHES MP0_AWD_FMFULLYMODDEDCAR MP0_AWD_FMKILL3ANDWINGTARACE MP0_AWD_FMKILLSTREAKSDM MP0_AWD_FMMOSTKILLSGANGHIDE
								0x9ba12d14, 0xe9472bb4, 0x43d56fad, 0x3099c3fe, 0x5941fbad,
								// MP0_AWD_FMMOSTKILLSSURVIVE MP0_AWD_FMRACEWORLDRECHOLDER MP0_AWD_FMPICKUPDLCCRATE1ST MP0_AWD_FMWINCUSTOMRACE MP0_MP0_AWD_FMWINALLRACEMODES
								0xc41b8767, 0x655e0bad, 0x2ae837e4, 0x71212ddf, 0xda28ebe4,
								// MP0_AWD_FMTATTOOALLBODYPARTS
								0xe3520842
							};
							for (Hash h : StatsBools)
								STATS::STAT_SET_BOOL(h, 1, 1);
							STATS::STAT_SET_INT(0x723f39d6, 4, 1); // MP0_AWD_PASSENGERTIME
							STATS::STAT_SET_INT(0x653a8f83, 4, 1); // MP0_AWD_TIME_IN_HELICOPTER
							STATS::STAT_SET_INT(0x45e1432a, 5, 1); // MP0_MOST_FLIPS_IN_ONE_JUMP
							STATS::STAT_SET_INT(0xe9e500bc, 5, 1); // MP0_MOST_SPINS_IN_ONE_JUMP
							STATS::STAT_SET_INT(0x833d3192, 10, 1); // MP0_AWD_FMHORDWAVESSURVIVE
							STATS::STAT_SET_INT(0x12f3b311, 20, 1); // MP0_AWD_HOLD_UP_SHOPS
							Hash Stats25[] =
							{
								// MP0_AWD_CAR_BOMBS_ENEMY_KILLS MP0_AWD_FM_GOLF_WON MP0_AWD_FM_SHOOTRANG_CT_WON MP0_AWD_FM_SHOOTRANG_RT_WON MP0_AWD_FM_SHOOTRANG_TG_WON
								0xaae88a2f, 0xe847156c, 0x741f0838, 0xeac04cce, 0x898dab76, 0x1AF2DE9E, 0xA1787290, 0x5F76739A, 0x2C177BAD,
								// MP0_AWD_FM_TENNIS_WON MP0_AWD_SECURITY_CARS_ROBBED MP0_AWD_LAPDANCES MP0_MOST_ARM_WRESTLING_WINS MP0_AWD_NO_HAIRCUTS
								0xe51a03e4, 0x5413e4e9, 0x4314583e, 0xd9da214e, 0xa43c7aac, 0xEC234AE2, 0x46533E0C, 0xF29D01D9, 0x3EDE081C, 0xC55AAFAA,
								// MP0_AWD_WIN_AT_DARTS MP0_AWD_FM_GOLF_BIRDIES MP0_AWD_FM_TENNIS_ACE MP0_AWD_PARACHUTE_JUMPS_20M MP0_AWD_PARACHUTE_JUMPS_50M
								0x279625d2, 0x978c6413, 0x7036f468, 0x1e3139c0, 0xd95051b7, 0x61F5DB39, 0x786E5B58, 0xAE352AA3, 0xAFBB09A3, 0x2F6C1441,
								// MP0_AIR_LAUNCHES_OVER_40M MP0_AWD_FMCRATEDROPS MP0_AWD_FMKILLBOUNTY MP0_AWD_FMSHOOTDOWNCOPHELI MP0_AWD_FMRALLYWONDRIVE
								0x8a8786e7, 0x2671fd3,  0xfb6b31f1, 0xee270322, 0xbb5b1a96, 0xE7939C0B, 0x144E7D9F, 0x4F6CDED8, 0xF5EDCABA, 0xB43E0E1A,
								// MP0_AWD_FMRALLYWONNAV MP0_AWD_FMWINAIRRACE MP0_AWD_FMWINRACETOPOINTS MP0_AWD_FMWINSEARACE MP0_AWD_FMBASEJMP
								0x6ae2181d, 0x40bf1a36, 0xa11bb5b6, 0xc5c0f286, 0xe54057bd, 0xB1590553, 0x16F2FD31, 0x5A1942E7, 0x58857E4, 0xFA2E93FF,
								// MP0_AWD_FM_RACE_LAST_FIRST MP0_AWD_FM_RACES_FASTEST_LAP
								0x25609da9, 0xc13d4f3a, 0x3A2621D6, 0xE751F17
							};
						});
					sub->AddOption<RegularOption>("Unlock Trophies", nullptr, []
						{
							STATS::STAT_SET_INT(0x53c59a8e, -1, 1);
							STATS::STAT_SET_INT(0x796d2d6a, 25, 1);
							STATS::STAT_SET_INT(0xd5d5279d, 25, 1);
							STATS::STAT_SET_INT(0xe00c1321, 100, 1);
							STATS::STAT_SET_INT(0x723f39d6, 4, 1);
							STATS::STAT_SET_INT(0x653a8f83, 4, 1);
							STATS::STAT_SET_INT(0x45e1432a, 5, 1);
							STATS::STAT_SET_INT(0xe9e500bc, 5, 1);
							STATS::STAT_SET_INT(0x833d3192, 10, 1);
							STATS::STAT_SET_INT(0x12f3b311, 20, 1);
							STATS::STAT_SET_INT(0x25ed089e, 255, 1);
							STATS::STAT_SET_INT(0x7bd82f11, 1000, 1);
							STATS::STAT_SET_FLOAT(0xb14148de, 1000, 1);
							STATS::STAT_SET_INT(0x69a50e0d, 2147483647, 1);
							STATS::STAT_SET_INT(0xa24ba69a, 4, 1);
							STATS::STAT_SET_INT(0x1fa36d2, 4, 1);
							STATS::STAT_SET_INT(0xeecca992, 5, 1);
							STATS::STAT_SET_INT(0x34c1f2c1, 5, 1);
							STATS::STAT_SET_INT(0x18f27d05, 10, 1);
							STATS::STAT_SET_INT(0x36177f20, 20, 1);
							STATS::STAT_SET_INT(0x5eaa0099, 255, 1);
							STATS::STAT_SET_INT(0xf21f4859, 1000, 1);
							STATS::STAT_SET_FLOAT(0x361609bc, 1000, 1);
							STATS::STAT_SET_INT(0x5873796d, 2147483647, 1);
						});
					sub->AddOption<RegularOption>("Unlock Outfits", nullptr, []
						{
							STATS::STAT_SET_BOOL(0x9cf3d019, 1, 1);
							STATS::STAT_SET_BOOL(0x45b6712, 1, 1);
							STATS::STAT_SET_INT(0x2ae837e4, 1, 1);
							STATS::STAT_SET_INT(0x833d3192, 10, 1);
							STATS::STAT_SET_INT(0x30418014, 100, 1);
							STATS::STAT_SET_INT(0xe2a9b0c4, 100, 1);
							STATS::STAT_SET_BOOL(0x59d644b9, 1, 1);
							STATS::STAT_SET_BOOL(0xa5f06324, 1, 1);
							STATS::STAT_SET_INT(0x3804231b, 1, 1);
							STATS::STAT_SET_INT(0x18f27d05, 10, 1);
							STATS::STAT_SET_INT(0x87b6d2d, 100, 1);
							STATS::STAT_SET_INT(0xe5e29eea, 100, 1);
						});
					sub->AddOption<RegularOption>("Unlock All", nullptr, []
						{
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STAM"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STRN"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_LUNG"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_DRIV"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_FLY"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_SHO"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STL"), 100, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMRACEWORLDRECHOLDER"), 1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_ENEMYDRIVEBYKILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_USJS_COMPLETED"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_USJS_FOUND"), 50, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINALLRACEMODES"), 1, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINEVERYGAMEMODE"), 1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DB_PLAYER_KILLS"), 1000, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_KILLS_PLAYERS"), 1000, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMHORDWAVESSURVIVE"), 21, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_CAR_BOMBS_ENEMY_KILLS"), 25, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_MVP"), 60, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_HOLD_UP_SHOPS"), 20, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_RACES_WON"), 101, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_NO_ARMWRESTLING_WINS"), 21, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMATTGANGHQ"), 1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMBBETWIN"), 50000, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 51, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMFULLYMODDEDCAR"), 1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_TOTALKILLS"), 500, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"), 412, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TIMES_FINISH_DM_TOP_3"), 36, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PLAYER_HEADSHOTS"), 623, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 63, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_WINS"), 13, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GTA_RACES_WON"), 12, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GOLF_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_TG_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_RT_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_CT_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_GRAN_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TENNIS_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TENNIS_MATCHES_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_TDEATHMATCH_WON"), 63, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_WON"), 101, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_DEATHMATCH_LOST"), 23, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_LOST"), 36, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_25_KILLS_STICKYBOMBS"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_50_KILLS_GRENADES"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_20_KILLS_MELEE"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTPISTOL_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PISTOL50_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_APPISTOL_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MICROSMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTRIFLE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CRBNRIFLE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADVRIFLE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PUMP_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SAWNOFF_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_BULLPUP_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSHTGN_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SNIPERRFL_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_HVYSNIPER_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRNLAUNCH_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_RPG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MINIGUNS_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMKGRENADE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_STKYBMB_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_8"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_9"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_10"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_OUTFIT"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_5"), -1, 1);;
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_6"), -1, 1);;
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_8"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_9"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_10"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_OUTFIT"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TORSO"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_DECL"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TORSO"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_DECL"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STAM"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STRN"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_LUNG"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_DRIV"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_FLY"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_SHO"), 100, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STL"), 100, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMRACEWORLDRECHOLDER"), 1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_ENEMYDRIVEBYKILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_USJS_COMPLETED"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_USJS_FOUND"), 50, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMWINALLRACEMODES"), 1, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMWINEVERYGAMEMODE"), 1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_DB_PLAYER_KILLS"), 1000, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_KILLS_PLAYERS"), 1000, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMHORDWAVESSURVIVE"), 21, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_CAR_BOMBS_ENEMY_KILLS"), 25, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_TDM_MVP"), 60, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_HOLD_UP_SHOPS"), 20, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_RACES_WON"), 101, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_NO_ARMWRESTLING_WINS"), 21, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMATTGANGHQ"), 1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMBBETWIN"), 50000, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_DM_WINS"), 51, 1);
							STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FMFULLYMODDEDCAR"), 1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_DM_TOTALKILLS"), 500, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_DM_TOTAL_DEATHS"), 412, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_TIMES_FINISH_DM_TOP_3"), 36, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PLAYER_HEADSHOTS"), 623, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_DM_WINS"), 63, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_TDM_WINS"), 13, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_GTA_RACES_WON"), 12, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_GOLF_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_SHOOTRANG_TG_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_SHOOTRANG_RT_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_SHOOTRANG_CT_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_SHOOTRANG_GRAN_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_FM_TENNIS_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_TENNIS_MATCHES_WON"), 2, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_TOTAL_TDEATHMATCH_WON"), 63, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_TOTAL_RACES_WON"), 101, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_TOTAL_DEATHMATCH_LOST"), 23, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MPPLY_TOTAL_RACES_LOST"), 36, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_25_KILLS_STICKYBOMBS"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_50_KILLS_GRENADES"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_GRENADE_ENEMY_KILLS"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_AWD_20_KILLS_MELEE"), 50, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MOLOTOV_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CMBTPISTOL_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PISTOL50_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_APPISTOL_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MICROSMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTSMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTRIFLE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CRBNRIFLE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ADVRIFLE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CMBTMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTMG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PUMP_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SAWNOFF_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BULLPUP_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_ASLTSHTGN_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SNIPERRFL_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_HVYSNIPER_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_GRNLAUNCH_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_RPG_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MINIGUNS_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_GRENADE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SMKGRENADE_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_STKYBMB_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MOLOTOV_ENEMY_KILLS"), 600, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_HAIR_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_JBIB_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_LEGS_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_FEET_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_BERD_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_8"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_9"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_PROPS_10"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_OUTFIT"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_5"), -1, 1);;
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_HAIR_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_JBIB_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_6"), -1, 1);;
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_LEGS_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_FEET_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_BERD_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_8"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_9"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_PROPS_10"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_OUTFIT"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_TORSO"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_SPECIAL2_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_DECL"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_TEETH"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_TEETH_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_AVAILABLE_TEETH_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_TORSO"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_3"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_4"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_5"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_6"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL_7"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL2"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_SPECIAL2_1"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_DECL"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLTHS_ACQUIRED_TEETH"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_REV_DA_IN_POSSESSION"), -1, 1);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STAM"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STRN"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_LUNG"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_DRIV"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_FLY"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_SHO"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STL"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STAM"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STRN"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_LUNG"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_DRIV"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_FLY"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_SHO"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STL"), 100, 0);
							STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_VEHICLE_ID_ADMIN_WEB"), 117401876, 1);
						});








				sub->AddOption<RegularOption>("Unlock Fast run / Reload "), nullptr, []
				{
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_ABILITY_1_UNLCK"), -1, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_ABILITY_2_UNLCK"), -1, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_ABILITY_3_UNLCK"), -1, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_ABILITY_1_UNLCK"), -1, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_ABILITY_2_UNLCK"), -1, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_FM_ABILITY_3_UNLCK"), -1, true);
				};


				sub->AddOption<RegularOption>("Complete Objectives"), nullptr, []
				{
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_COMPLETEDAILYOBJ"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_TOTALDAYCOMPLETED"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_TOTALWEEKCOMPLETED"), 400, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_TOTALMONTHCOMPLETED"), 1800, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CONSECUTIVEDAYCOMPLETED"), 30, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CONSECUTIVEWEEKCOMPLETED"), 4, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CONSECUTIVEMONTHCOMPLETE"), 1, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_COMPLETEDAILYOBJSA"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_COMPLETEDAILYOBJTOTALSA"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_TOTALDAYCOMPLETEDSA"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_TOTALWEEKCOMPLETEDSA"), 400, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_TOTALMONTHCOMPLETEDSA"), 1800, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CONSECUTIVEDAYCOMPLETEDSA"), 30, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CONSECUTIVEWEEKCOMPLETEDSA"), 4, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CONSECUTIVEMONTHCOMPLETESA"), 1, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_DAILYOBJCOMPLETEDSA"), 100, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_DAILYOBJCOMPLETED"), 100, true);
				};


				sub->AddOption<RegularOption>("Reset Badsport stats"), nullptr, []
				{
					DWORD date[12];
				STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MPPLY_CHAR_IS_BADSPORT "), false, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_BAD_SPORT_BITSET"), false, true);
				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_BAD_SPORT_BITSET"), false, true);
				STATS::STAT_SET_DATE(GAMEPLAY::GET_HASH_KEY("MPPLY_BECAME_BADSPORT_DT"), &date[0], 7, true);
				};


				});

		
			
				g_UiManager->AddSubmenu<RegularSubmenu>("Money Options", Money_Recovery, [](RegularSubmenu* sub)
					{

				sub->AddOption<RegularOption>("(~r~Don't ~r~over ~r~use ~r~it & Money options are always risky anyway)"), nullptr, []
				{

				};




				//sub->AddOption<RegularOption>(("5k Chip Loop"), "WealthBooster.", [] {

				//	globalHandle(1971266 + 1).As<int>() = 5000;


				//	});



			




				sub->AddOption<RegularOption>(("40mil"), "40mil.", [] {

					trigger_transaction(0x176D9D54, 15000000);
				trigger_transaction(0xED97AFC1, 7000000);
				trigger_transaction(0xA174F633, 15000000);
				trigger_transaction(0x314FB8B0, 1000000);
				trigger_transaction(0x4B6A869C, 2000000);


					});


				sub->AddOption<RegularOption>(("15mil"), "W.", [] {

					trigger_transaction(0x176D9D54, 15000000);
	

					});

				sub->AddOption<RegularOption>(("7mil"), "Booster.", [] {

					trigger_transaction(0xED97AFC1, 7000000);


					});


				sub->AddOption<RegularOption>(("2.5mil"), "W.", [] {

					trigger_transaction(0xDBF39508, 2550000);


					});


				/*sub->AddOption<BoolOption<bool>>("40MIL LOOP", "slow 40mil", &Mil40Loop, BoolDisplay::OnOff_Icon);
*/


				sub->AddOption<BoolOption<bool>>("1MIL LOOP", "1MIL LOOP FAST", &StealthYES1MIL, BoolDisplay::OnOff_Icon);



				//sub->AddOption<BoolOption<bool>>("725k Loop", "~r~Do not cry to use if you used this as this is in testing", &Stealth1Mil, BoolDisplay::OnOff_Icon);


				sub->AddOption<BoolOption<bool>>("725k Loop", "~r~Do not cry to use if you used this as this is in testing", &Stealth7Mil, BoolDisplay::OnOff_Icon);


				sub->AddOption<BoolOption<bool>>("500k Loop", "~r~don't ~r~over ~r~use ~r~this", &g_stealth, BoolDisplay::OnOff_Icon);


				sub->AddOption<BoolOption<bool>>("380k loop (Fast)", "~r~", &Stealth7Mil5, BoolDisplay::OnOff_Icon);

				sub->AddOption<BoolOption<bool>>("250k loop (Fast)", "~r~", &Stealth7Mil4, BoolDisplay::OnOff_Icon);

				sub->AddOption<BoolOption<bool>>("125k loop (Fast)", "~r~", &Stealth7Mil3, BoolDisplay::OnOff_Icon);

				sub->AddOption<BoolOption<bool>>("50k Ceo Loop", "~r~", &Stealth7Mil2, BoolDisplay::OnOff_Icon);

				sub->AddOption<RegularOption>("-----~g~Arcade~w~----"), nullptr, []
				{

				};


				sub->AddOption<BoolOption<bool>>("200k Arcade Safe loop (~g~Safe~w~)", "Have your Arcade FULL SETUP", &StealthYES2, BoolDisplay::OnOff_Icon);


				sub->AddOption<RegularOption>("-----~p~NIGHTCLUB~w~----"), nullptr, []
				{

				};


		
				
				sub->AddOption<BoolOption<bool>>("300k Nightclub AFK Loop (~g~Safe~w~)", "Have your nightclub FULL SETUP", &stealthYES, BoolDisplay::OnOff_Icon);



				sub->AddOption<RegularOption>("-------------------------------------"), nullptr, []
				{

				};



				sub->AddOption<RegularOption>(("Rig Roulette & 170k Mission Payout (G TO OPEN/CLOSE)"), "WealthBooster.", [] {

					ShellExecute(NULL, L"open", L"C:\\Scooby\\Recovery\\WealthBoosterOverlay.exe", NULL, NULL, SW_SHOWDEFAULT);

					});


			



				sub->AddOption<RegularOption>("-----~y~CASINO-----"), nullptr, []
				{

				};

				sub->AddOption<RegularOption>("~y~40 Million a day = Recommended ( Rig Slots )"), nullptr, []
				{

				};


				sub->AddOption<RegularOption>("Bypass Slotmachine Limit"), nullptr, []
				{
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CASINO_CHIPS_WON_GD"), 0, 1);
				};

				sub->AddOption<RegularOption>(("Slot+ (Rig Slots)"), nullptr, [] {

					ShellExecute(NULL, L"open", L"C:\\Scooby\\Slot\\Slot+.exe", NULL, NULL, SW_SHOWDEFAULT);

					});


				sub->AddOption<RegularOption>(("Bot+ (Auto play slots for you)"), nullptr, [] {

					ShellExecute(NULL, L"open", L"C:\\Scooby\\Slot\\+Bot.exe", NULL, NULL, SW_SHOWDEFAULT);

					});









				sub->AddOption<RegularOption>("--- ~r~DETECTED ~w~MONEY ~r~METHODS ~w~---"), nullptr, []
				{

				};


				sub->AddOption<RegularOption>("1bil Hangar Sell (~r~risky~w~)", "Sell your HANGAR and you will get 1bil", []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PROP_HANGAR_VALUE"), 1999000000, true);

				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PROP_HANGAR_VALUE"), 1999000000, true);

				globalHandle(262145 + 1574918).As<int>() = 1999000000;


					});


				sub->AddOption<RegularOption>("1bil Nightclub Sell (~r~risky~w~)", "Sell your nightclub and you will get 1bil", []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PROP_NIGHTCLUB_VALUE"), 1999000000, true);

				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PROP_NIGHTCLUB_VALUE"), 1999000000, true);

				globalHandle(262145 + 1574918).As<int>() = 1999000000;


					});


				sub->AddOption<RegularOption>("512mil Nightclub Sell (~r~risky~w~) ", "Sell your nightclub and you will get 512mil", []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PROP_NIGHTCLUB_VALUE"), 1099000000, true);

				STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PROP_NIGHTCLUB_VALUE"), 1099000000, true);

				globalHandle(262145 + 1574918).As<int>() = 1999000000;


					});


				//sub->AddOption<RegularOption>("-------------------------------------"), nullptr, []
				//{

				//};


				//sub->AddOption<RegularOption>(("----- Random Haven't tested this options so use at your own risk or idk if they work----"), nullptr, [] {

				//	});


				//sub->AddOption<RegularOption>("Max Job Money", "After you spawned this sell it", []
				//	{
				//		int NETWORK_HANDLE[76];
				//NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::PLAYER_PED_ID(), &NETWORK_HANDLE[0], 13);
				//const char* rockstarID = rockstarID = NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&NETWORK_HANDLE[0]);
				//NETWORKCASH::NETWORK_INITIALIZE_CASH(100000, 0); (0x3DA5ECD1A56CBA6D);
				//NETWORKCASH::NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH, 100000, rockstarID;
				//NETWORKCASH::NETWORK_CAN_SPEND_MONEY;

				//	});


				//sub->AddOption<RegularOption>("Change car price to 1M", "After you spawned this sell it", []
				//	{
				//		//ill correct the code
				//	   //No need brother i can do. I just need to fix this crash. Can u send me ur dll i wanna see if i crash.
				//	   // Because when i used dll from 1 day ago it also crash, do u have logs? wait logs for what
				//		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MONEY_EARN_SELLING_VEH"), 1000000, false);
				//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MONEY_EARN_SELLING_VEH"), 1000000, true);
				//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MONEY_EARN_SELLING_VEH"), 1000000, true);

				//	});

				//sub->AddOption<RegularOption>("Reset Vehicle Sell Limit", "If you sold too many cars.", []
				//	{
				//		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_VEHICLE_SELL_TIME"), 0, 0);
				//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_NUM_CARS_SOLD_TODAY"), 0, 0);
				//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_VEHICLE_SELL_TIME"), 0, true);
				//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_NUM_CARS_SOLD_TODAY"), 0, 0);
				//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MONEY_EARN_SELLING_VEH"), 50000, true);
				//STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_MONEY_EARN_SELLING_VEH"), 50000, true);

				//	});



		

					});





			





			g_UiManager->AddSubmenu<RegularSubmenu>("Max Options", Increase_Recovery, [](RegularSubmenu* sub)
				{

					sub->AddOption<RegularOption>("Max all", nullptr, []
						{
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STAM"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STAM"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STRN"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STRN"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_LUNG"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_LUNG"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_DRIV"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_DRIV"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_FLY"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_FLY"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_SHO"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_SHO"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STL"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_STL"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_MECH"), 100, 0);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_SCRIPT_INCREASE_MECH"), 100, 0);
						});


					sub->AddOption<RegularOption>("Max Stamina", nullptr, [] { STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STAM"), 100, 0); });
					sub->AddOption<RegularOption>("Max Strength", nullptr, [] { STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STRN"), 100, 0); });
					sub->AddOption<RegularOption>("Max Loungh", nullptr, [] { STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_LUNG"), 100, 0); });
					sub->AddOption<RegularOption>("Max Driving", nullptr, [] { STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_DRIV"), 100, 0); });
					sub->AddOption<RegularOption>("Max Flying", nullptr, [] { STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_FLY"), 100, 0); });
					sub->AddOption<RegularOption>("Max Shooting", nullptr, [] { STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_SHO"), 100, 0); });
					sub->AddOption<RegularOption>("Max Stealth", nullptr, [] { STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STL"), 100, 0); });
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Diamond Casino Heist", CasinoHeist, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Skip Casino Setups"), nullptr, []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_APPROACH"), 2, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_TARGET"), 3, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_BITSET1"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_DISRUPTSHIP"), 3, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_KEYLEVELS"), 2, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_CREWWEAP"), 5, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_CREWDRIVER"), 3, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_CREWHACKER"), 4, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_VEHS"), 0, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_WEAPS"), 1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_BITSET0"), -1, 1);
					};
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("The Contract DLC", ContractDLC, [](RegularSubmenu* sub)//where is your players list?
				{
					sub->AddOption<RegularOption>("Skip Contract Setups"), nullptr, []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_FIXER_GENERAL_BS"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_FIXER_COMPLETED_BS"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_FIXER_STORY_BS"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_FIXER_STORY_STRAND"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_FIXER_STORY_COOLDOWN"), -1, 1);
					};
					sub->AddOption<RegularOption>("Change Amount Of Contracts to 500"), nullptr, []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_FIXER_COUNT"), 500, 1);
					};
				});









			g_UiManager->AddSubmenu<RegularSubmenu>("RP Options", Recovery_Level, [](RegularSubmenu* sub)
				{


					sub->AddOption<RegularOption>("-----~y~Player ~p~rank~w~-----"), nullptr, []
				{

				};
				
					sub->AddOption<BoolOption<bool>>("RP Drop on self", nullptr, &RPDrop, BoolDisplay::OnOff_Icon);
				


			sub->AddOption<NumberOption<int>>("Level", nullptr, &custom_level, 0, 8000, 1, 1, false, "", "");
			sub->AddOption<RegularOption>("Set Level (gift)", "Change sessions after this.", []
				{
					setPlayerLevel(custom_level);


			notifyBottom5((char*)Mod_Menu_Name"", "Join a new session to set your level");

	/*		notifyMapRank((char*)Mod_Menu_Name"", "Join a new session to set your level");*/




				});
			sub->AddOption<RegularOption>("Set (Instant) Level", "Instant sets your level.", []
				{
					setInstantLevel(custom_level);

				});

			sub->AddOption<RegularOption>("-----~b~Crew ~r~rank~w~-----"), nullptr, []
			{

			};


			sub->AddOption<NumberOption<int>>("Crew Level", nullptr, &crew_level, 0, 8000, 1, 1, false, "", "");


			sub->AddOption<RegularOption>("Set Crew Level", "Set crew.", []
				{
					SetCrewLevel(crew_level);

				});


			sub->AddOption<RegularOption>("--------------------"), nullptr, []
			{
	
			};

					sub->AddOption<BoolOption<bool>>("RP Gun ", nullptr, &MoneyGun3, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("RP Gun2", nullptr, &MoneyGun2, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Rapid Fire", nullptr, &RapidFire, BoolDisplay::OnOff_Icon);
						

				});


				
	

			int outfit1 = 0;
			int outfit2 = 0;
			int outfit3 = 0;
			int outfit4 = 0;
			int mask1 = 0;
			int mask2 = 0;
			int shirt1 = 0;
			int pants1 = 0;
			int hands1 = 0;
			int shoes1 = 0;
			int eyes1 = 0;
			int Accessories1 = 0;
			int mission1 = 0;
			int decals1 = 0;
			int collars1 = 0;


			g_UiManager->AddSubmenu<RegularSubmenu>("Appearance", SubModel, [](RegularSubmenu* sub)
				{


			});

			g_UiManager->AddSubmenu<RegularSubmenu>("Doomsday Heist", Doomsday, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Skip The Data Breaches Setups"), nullptr, []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GANGOPS_FLOW_MISSION_PROG"), 503, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GANGOPS_HEIST_STATUS"), 229383, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GANGOPS_FLOW_NOTIFICATIONS"), 1557, 1);
					};
					sub->AddOption<RegularOption>("Skip The Bogdan Problem Setups"), nullptr, []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_APPROACH"), 2, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_TARGET"), 3, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_BITSET1"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_DISRUPTSHIP"), 3, 1);
					};
					sub->AddOption<RegularOption>("Skip The Doomsday Scenario Setups"), nullptr, []
					{
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_APPROACH"), 2, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_TARGET"), 3, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_BITSET1"), -1, 1);
						STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_H3OPT_DISRUPTSHIP"), 3, 1);
					};
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("CEO Crates", Cargo_Sell, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Max Crate Price", nullptr, [] { globalHandle(277988).As<int>() = 3000000; });
					sub->AddOption<RegularOption>("Reset Sell Cooldown", nullptr, [] { globalHandle(277754).As<int>() = 1; });
					sub->AddOption<RegularOption>("Reset Buy Cooldown", nullptr, [] { globalHandle(277753).As<int>() = 1; });
				});

			//g_UiManager->AddSubmenu<RegularSubmenu>("Casino Slotmachines", Slotmachine, [](RegularSubmenu* sub)
			//	{
			//		sub->AddOption<RegularOption>("Bypass Slotmachine Limit"), nullptr, []
			//		{
			//			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CASINO_CHIPS_WON_GD"), 0, 1);
			//		};
			//	});

			g_UiManager->AddSubmenu<RegularSubmenu>("Weather", WeatherOp, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Clear", "Clear Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("CLEAR");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR"); });
					sub->AddOption<RegularOption>("Extra Sunny", "Extra Sunny Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("EXTRASUNNY");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY"); });
					sub->AddOption<RegularOption>("Cloudy", "Cloudy Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("CLOUDS");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS"); });
					sub->AddOption<RegularOption>("Overcast", "Overcasting Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("OVERCAST");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST"); });
					sub->AddOption<RegularOption>("Rain", "Raining Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("RAIN");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("RAIN"); });
					sub->AddOption<RegularOption>("Thunder", "Thunder Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("THUNDER");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER"); });
					sub->AddOption<RegularOption>("Foggy", "Foggy Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("FOGGY");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("FOGGY"); });
					sub->AddOption<RegularOption>("Light Snow", "Light Snow Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("SNOWLIGHT");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("SNOWLIGHT"); });
					sub->AddOption<RegularOption>("Blizzard", "Blizzard Weather.", [] {GAMEPLAY::SET_WEATHER_TYPE_NOW("BLIZZARD");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("BLIZZARD"); });
					sub->AddOption<RegularOption>("XMAS", "Christmas Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("XMAS");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("XMAS"); });
					sub->AddOption<RegularOption>("Halloween", "Halloween Weather.", [] { GAMEPLAY::SET_WEATHER_TYPE_NOW("Halloween");
					GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Halloween"); });
				});


			g_UiManager->AddSubmenu<RegularSubmenu>("Removals", RemovalsP, [](RegularSubmenu* sub)
				{





					sub->AddOption<RegularOption>("Kick", nullptr, []
						{
							Hash Kicks[] = {
								764638896, -345371965, -1252906024
						};
			for (int i = 0; i < 47; i++) {
				uint64_t kick[4] = { Kicks[i],  g_SelectedPlayer, 0, 0 };
				hooks.trigger_script_event(1, kick, 4, 1 << g_SelectedPlayer);
			}
						});


			sub->AddOption<RegularOption>("-------------", "Host Kick Player.", [] {
				{

				
				}
				});



					sub->AddOption<RegularOption>("Host Kick", "Host Kick Player.", [] {
						{
							
							if (g_SelectedPlayer != PLAYER::PLAYER_ID())
								NETWORK::NETWORK_SESSION_KICK_PLAYER(g_SelectedPlayer);
						}
						});






			sub->AddOption<RegularOption>("Pasted idk Kick", "Idk looks like rp drop to me says it's a kick so", [] {
				{

					for (int i = 0; i < 50; ++i) {
						Ped iPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
						STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY("vw_prop_vw_colle_alien"));
						if (!STREAMING::HAS_MODEL_LOADED(GAMEPLAY::GET_HASH_KEY("vw_prop_vw_colle_alien"))) {
							std::this_thread::sleep_for(0ms);
						}
						else {
							Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(iPed, FALSE);
							OBJECT::CREATE_AMBIENT_PICKUP(0x2C014CA6, playerPosition.x, playerPosition.y, playerPosition.z + 0.5f / 10, 0, 2000, GAMEPLAY::GET_HASH_KEY("vw_prop_vw_colle_alien"), FALSE, TRUE);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GAMEPLAY::GET_HASH_KEY("vw_prop_vw_colle_alien"));
						}
					}
				}
				});


			sub->AddOption<RegularOption>("Voted Kick", "Will vote Player out of the session.", [] {
				{

					if (g_SelectedPlayer != PLAYER::PLAYER_ID())
						NETWORK::NETWORK_SESSION_GET_KICK_VOTE(g_SelectedPlayer);
				}
				});





			sub->AddOption<RegularOption>("Scooby Crash", "Scooby crash.", [] {
				{

					auto Ped = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					Vector3 pos = ENTITY::GET_ENTITY_COORDS(Ped, 1);
					auto Crash1 = $("mp_m_freemode_01");
					auto Crash2 = $("mp_f_freemode_01");

					while (!STREAMING::HAS_MODEL_LOADED(Crash1)) {
						STREAMING::REQUEST_MODEL(Crash1);


					}
					while (!STREAMING::HAS_MODEL_LOADED(Crash2)) {
						STREAMING::REQUEST_MODEL(Crash2);


					}

					auto Male = PED::CREATE_PED(2, Crash1, pos.x, pos.y, pos.z, 0.f, TRUE, TRUE);
					PED::SET_PED_COMPONENT_VARIATION(Male, 0, 393, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Male, 4, 144, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Male, 6, 102, 0, 0);

					auto Female = PED::CREATE_PED(1, Crash2, pos.x, pos.y, pos.z, 0.f, TRUE, TRUE);
					PED::SET_PED_COMPONENT_VARIATION(Female, 0, 415, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Female, 4, 151, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Female, 6, 106, 0, 0);
				}
				});

			sub->AddOption<RegularOption>("Pizza Crash", nullptr, []
				{
					uint64_t args2[12] = { 1070934291, g_SelectedPlayer, -17645264, -26800537, -66094971, -45281983, -24450684, -13000488, 59643555, 34295654, 91870118, -3283691 };
			(1, args2, 12, 1 << g_SelectedPlayer);
			Ped iPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
			Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(iPed, FALSE);
			OBJECT::CREATE_OBJECT(1085274000, playerPosition.x, playerPosition.y, playerPosition.z, true, 0, false);
			OBJECT::CREATE_OBJECT(3613262246, playerPosition.x, playerPosition.y, playerPosition.z, true, 0, false);

				});

					sub->AddOption<RegularOption>(("Vehicle Crash"), nullptr, [] { vehcrash(); });
					sub->AddOption<RegularOption>("Model Crash", nullptr, []
						{
							Player playa = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
							STREAMING::REQUEST_MODEL(0x856cfb02);
							while (!STREAMING::HAS_MODEL_LOADED(0x856cfb02)) SYSTEM::WAIT(0);
							Vector3 fposition = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playa, 0.0, 5.0, 0.0);
							PED::CREATE_PED(1, 0x856cfb02, fposition.x, fposition.y, fposition.z, ENTITY::GET_ENTITY_HEADING(playa), TRUE, TRUE);
						});


					sub->AddOption<RegularOption>(("Pasted Crash"), nullptr, [] { vehcrash(); });
					sub->AddOption<RegularOption>("PS5 Crash", nullptr, []
						{
							Player playa = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					STREAMING::REQUEST_MODEL(0x856cfb02);
					while (!STREAMING::HAS_MODEL_LOADED(0x856cfb02)) SYSTEM::WAIT(0);
					Vector3 fposition = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playa, 0.0, 5.0, 0.0);
					PED::CREATE_PED(1, 0x856cfb02, fposition.x, fposition.y, fposition.z, ENTITY::GET_ENTITY_HEADING(playa), TRUE, TRUE);
						});





				});

#define PROP_MONEY_BAG_02 -1666779307
#define PICKUP_MONEY_CASE 0x1E9A99F8
			int DropAmount3 = 2500;
			Hash bagHash = 0x9CA6F755;

			g_UiManager->AddSubmenu<RegularSubmenu>("Drops", FriendlyP, [](RegularSubmenu* sub)
				{

					sub->AddOption<BoolOption<bool>>("Money drop", nullptr, &circleDrop, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("RP drop", nullptr, &vomit, BoolDisplay::OnOff_Icon);




					sub->AddOption<RegularOption>("Give them All Weapons", nullptr, []
						{
							Hash NormalWeapons[]{ GAMEPLAY::GET_HASH_KEY("weapon_revolver_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_snspistol_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_smg_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_pumpshotgun_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_assaultrifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_carbinerifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_specialcarbine_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_bullpuprifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_combatmg_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_heavysniper_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_marksmanrifle_mk2"), 0xAF3696A1, 0x476BF155, 0xB62D1F670, 0xDFE37640, 0xC1B3C3D1, 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D, GAMEPLAY::GET_HASH_KEY("WEAPON_HATCHET"), GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN") };
							for (int i = 0; i < (sizeof(NormalWeapons) / 4); i++)
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), NormalWeapons[i], 9999, 1);
						});
			//
			//sub->AddOption<RegularOption>("Give All MK2", nullptr, []
			//	{
			//		Hash MK2Weapons[] = { GAMEPLAY::GET_HASH_KEY("weapon_revolver_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_snspistol_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_smg_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_pumpshotgun_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_assaultrifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_carbinerifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_specialcarbine_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_bullpuprifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_combatmg_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_heavysniper_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_marksmanrifle_mk2"), };
			//for (int i = 0; i < (sizeof(MK2Weapons) / 4); i++)
			//	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), MK2Weapons[i], 9999, 1);
			//	});


			sub->AddOption<RegularOption>("Ammo Drop", nullptr, []
				{
					int modelhash = GAMEPLAY::GET_HASH_KEY("prop_ld_ammo_pack_01");
			Ped iPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
			STREAMING::REQUEST_MODEL(modelhash);
			if (!STREAMING::HAS_MODEL_LOADED(modelhash)) {

			}
			else {
				Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(iPed, FALSE);
				Hash Ammodrop[] = { GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_FIREWORK"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_FLAREGUN"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_MINIGUN"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_RPG"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_GRENADELAUNCHER"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_SNIPER"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_SHOTGUN"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_MG"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_RIFLE"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_SMG"), GAMEPLAY::GET_HASH_KEY("PICKUP_AMMO_PISTOL"), };
				for (int i = 0; i < (sizeof(Ammodrop) / 4); i++)
					OBJECT::CREATE_AMBIENT_PICKUP(Ammodrop[i], playerPosition.x, playerPosition.y, playerPosition.z + 5, 0, 2500, modelhash, FALSE, TRUE);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(modelhash);
			}
				});

					sub->AddOption<RegularOption>("Drop Armour", "Drop Armour.", [] { Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
					Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
					OBJECT::CREATE_AMBIENT_PICKUP(1274757841, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });

					sub->AddOption<RegularOption>("Drop Parachute", "Drop Parachute.", [] { 	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
					Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
					OBJECT::CREATE_AMBIENT_PICKUP(1735599485, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });


					sub->AddOption<RegularOption>("Drop Snacks", "Drop Snacks.", [] { 	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
					Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
					OBJECT::CREATE_AMBIENT_PICKUP(483577702, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });

	/*				sub->AddOption<RegularOption>("Rain Money", "Will drop Money around the player. (Will make this into toggle so you don't have keep pressing it", [] { 	Ped iPed = PLAYER::PLAYER_PED_ID();
					STREAMING::REQUEST_MODEL(PROP_MONEY_BAG_02);
					Vector3 pp = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iPed, 0.0, 0.0, 10.0);
					int offset1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 15);
					int offset2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 15);


					STREAMING::REQUEST_MODEL(PROP_MONEY_BAG_02);
					while (!STREAMING::HAS_MODEL_LOADED(PROP_MONEY_BAG_02))
						WAIT(0);
					if (STREAMING::HAS_MODEL_LOADED(PROP_MONEY_BAG_02))
					{
						int amount = 2500;
						OBJECT::CREATE_AMBIENT_PICKUP(PICKUP_MONEY_CASE, pp.x + offset1, pp.y + offset2, pp.z, 0, amount, PROP_MONEY_BAG_02, false, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(PROP_MONEY_BAG_02);
					}
						});

					sub->AddOption<RegularOption>("Ped Drop", nullptr, []
						{
							STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY("A_C_Panther"));
					Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
					if (STREAMING::HAS_MODEL_LOADED(GAMEPLAY::GET_HASH_KEY("A_C_Panther")))
					{
						int Ped = PED::CREATE_PED(21, GAMEPLAY::GET_HASH_KEY("A_C_Panther"), coords.x, coords.y, coords.z, 0, 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Ped))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GAMEPLAY::GET_HASH_KEY("A_C_Panther"));
							RequestControlOfEnt(Ped);
							PED::SET_PED_MONEY(Ped, 10000);
							ENTITY::SET_ENTITY_HEALTH(Ped, 0);

						}
						
					}

						});*/

				
			


				});



			g_UiManager->AddSubmenu<RegularSubmenu>("Griefing", GriefingP, [](RegularSubmenu* sub)
				{

			//		sub->AddOption<BoolOption<bool>>("Water Loop", nullptr, &WaterLoop, BoolDisplay::OnOff, false, [] {});
			//sub->AddOption<BoolOption<bool>>("Fire Loop", nullptr, &FireLoop, BoolDisplay::OnOff, false, [] {});


		/*			sub->AddOption<BoolOption<bool>>("Freeze", nullptr, &Freeze, BoolDisplay::OnOff_Icon);*/

					//sub->AddOption<RegularOption>("Blame (Test)", nullptr, []
					//	{
					//		for (int i = 0; i < 32; i++)
					//		{
					//			Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 0);
					//			FIRE::ADD_OWNED_EXPLOSION(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), coords.x, coords.y, coords.z, 1, 9999.0f, false, true, 0.0f);
					//		}
					//	});



					sub->AddOption<BoolOption<bool>>("Clone Loop", nullptr, &WaterLoop, BoolDisplay::OnOff);
		/*	sub->AddOption<BoolOption<bool>>("Fire Loop", nullptr, &FireLoop, BoolDisplay::OnOff);*/

			//sub->AddOption<RegularOption>("Send Cayo Perico", nullptr, []
			//	{
			//		uint64_t Cayoperico[2] = { 1300962917, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer) };
			//hooks.trigger_script_event(1, Cayoperico, 5, 1 << g_SelectedPlayer);
			//	});

			//sub->AddOption<RegularOption>("Send To Mission", nullptr, []
			//	{
			//		uint64_t mission[2] = { 1115000764, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer) };
			//hooks.trigger_script_event(1, mission, 2, 1 << g_SelectedPlayer);

			//uint64_t mission2[2] = { -545396442 , PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer) };
			//hooks.trigger_script_event(1, mission2, 2, 1 << g_SelectedPlayer);
			//	});


			sub->AddOption<RegularOption>("Infinite Loading Screen", nullptr, []
				{
					uint64_t inv_inf_loading[9] = { -171207973, g_SelectedPlayer, 0, -1, 1, 1, 0, 0, 0 };
			hooks.trigger_script_event(1, inv_inf_loading, 9, 1 << g_SelectedPlayer);
				});

					sub->AddOption<RegularOption>("Remove All Weapons", "Removes all weapons from player.", [] {
						WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 1);
			/*			Log::Msg(" || Player has no weapons LMAO");*/
						});

					//sub->AddOption<RegularOption>("Small Cage ", "Trap player to small cage.", [] {
					//	Vector3 PedCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0);
					//	OBJECT::CREATE_OBJECT(959275690, PedCoords.x, PedCoords.y, PedCoords.z - 1.f, true, false, false);
					//	Log::Msg("wow you caged the nigger");
					//	});


					sub->AddOption<RegularOption>("Spawn Tube on player ", "will spawn a tube.", [] {
						Vector3 PedCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0);
					OBJECT::CREATE_OBJECT(3766263290, PedCoords.x, PedCoords.y, PedCoords.z - 1.f, true, false, false);
					Object cage = OBJECT::CREATE_OBJECT_NO_OFFSET(959275690, PedCoords.x, PedCoords.y, PedCoords.z - 1.f, true, false, false);
					ENTITY::SET_ENTITY_ROTATION(cage, 0.0, 90.0, 0.0, 1, true);
					Log::Msg("what's the point?");
						});


					//sub->AddOption<RegularOption>("damage Explode", "Explode Player.", [] { 	
			
					//Vector3 targetCords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 1);
					//FIRE::ADD_EXPLOSION(targetCords.x, targetCords.y, targetCords.z, 29, 9999.0f, true, false, 0.0f);
					//	});



					sub->AddOption<RegularOption>("Airstrike", "incoming", [] { 	
						
						Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
					Ped playerPed = PLAYER::PLAYER_PED_ID();
					Vector3 coords = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
					Hash airStrike = GAMEPLAY::GET_HASH_KEY("WEAPON_AIRSTRIKE_ROCKET");
					WEAPON::REQUEST_WEAPON_ASSET(airStrike, 31, false);
					while (!WEAPON::HAS_WEAPON_ASSET_LOADED(airStrike))
						WAIT(0);
					GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords.x, coords.y, coords.z + 50.f, coords.x, coords.y, coords.z, 250, 1, airStrike, playerPed, 1, 0, -1.0); });

					sub->AddOption<RegularOption>("CEO Kick Player", "Kick player from CEO.", [] {
						DWORD64 args[4] = { CEO_KICK/*Event code*/, g_SelectedPlayer, 0, 5 };
						hooks.trigger_script_event(1, args, 4, 1 << g_SelectedPlayer);
						Log::Msg(" || Player got CEO Kicked. Fix your menu please :)");
						});


					sub->AddOption<RegularOption>("CEO Ban Player", "Ban player from CEO.", [] {
						DWORD64 args[3] = { CEO_BAN/*Event code*/, g_SelectedPlayer, 1 };
						hooks.trigger_script_event(1, args, 3, 1 << g_SelectedPlayer);
						Log::Msg(" || Player got CEO Banned.");
						});


					sub->AddOption<RegularOption>("Cage", nullptr, []
						{
							Vector3 remotePos = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0);
					OBJECT::CREATE_OBJECT(959275690, remotePos.x, remotePos.y, remotePos.z - 1.f, true, false, false);
						});


						});

						
			




				g_UiManager->AddSubmenu<RegularSubmenu>("Vehicle", VehicleP, [](RegularSubmenu* sub)
					{


						sub->AddOption<RegularOption>("Ram player with vehicle", "Will ram a Player with a sandking.", [] { 	
							float offset;
						Hash vehmodel = GAMEPLAY::GET_HASH_KEY("SANDKING");
						STREAMING::REQUEST_MODEL(vehmodel);
						while (!STREAMING::HAS_MODEL_LOADED(vehmodel)) WAIT(0);
						Vector3 pCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0.0, -10.0, 0.0);
						if (STREAMING::IS_MODEL_IN_CDIMAGE(vehmodel) && STREAMING::IS_MODEL_A_VEHICLE(vehmodel))
						{
							Vector3 dim1, dim2;
							GAMEPLAY::GET_MODEL_DIMENSIONS(vehmodel, &dim1, &dim2);
							offset = dim2.y * 1.6;
							Vector3 dir = ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
							float rot = (ENTITY::GET_ENTITY_ROTATION(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0)).z;
							Vehicle veh = VEHICLE::CREATE_VEHICLE(vehmodel, pCoords.x + (dir.x * offset), pCoords.y + (dir.y * offset), pCoords.z, rot, 1, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veh);
							ENTITY::SET_ENTITY_VISIBLE(veh, true, true);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, 150.0f);
						}
						});


				sub->AddOption<RegularOption>("Blow Car wheels", "Will blow the player wheels", [] {
					for (int i = 1; i < 3; i++)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false))
						{
							for (int i = 1; i < 3; i++)
							{
								Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
								RequestControlOfEnt(veh);
								VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(veh, true);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veh, true);
								for (int j = 0; j < 7; j++)
								{
									RequestControlOfEnt(veh);
									VEHICLE::SET_VEHICLE_TYRE_BURST(veh, j, true, 1000.0f);

								}
							}
						}
					}
					});
				
				sub->AddOption<RegularOption>("Boost", "will boost the vehicle", [] {
				
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(vehicle, 500.f);
							}
						}

					}
					
				
				});

			

				sub->AddOption<RegularOption>("Kill Engine", "WWill kill the player engine", [] {
					for (int i = 1; i < 3; i++)
					{
						Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
						RequestControlOfEnt(veh);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veh, -1.0f);
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(veh, 1);

					}
					});





						sub->AddOption<RegularOption>("Kick From Vehicle", "Kicks Player Out Of A Vehicle.", [] { Ped playerPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
				RequestControlOfEnt(playerPed);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false))
					AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));

							});

				sub->AddOption<RegularOption>("Delete Player Vehicle", "Deletes Players Vehicle.", [] { Ped playerPed = PLAYER::PLAYER_PED_ID();
				if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
				{
					Vehicle playerVeh = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(playerVeh);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(playerVeh))
					{
						if (ENTITY::DOES_ENTITY_EXIST(playerVeh))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playerVeh, 1, 1);
							VEHICLE::DELETE_VEHICLE(&playerVeh);
						}
					}
				}
					});





				sub->AddOption<RegularOption>("Kick Flip", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, 1, 0, 0, 10.0f, 20.0f, 0.0f, 0.0f, 0, 1, 1, 1, 0, 1);
							}
						}
					});

				sub->AddOption<RegularOption>("Heel Flip", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, true, 0, 0, 5.0f, -2.0f, 0, 0, true, true, true, true, false, true);
							}
						}
					});

				sub->AddOption<RegularOption>("Back Flip", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, true, 0, 0, 6.0f, 0, 2.0f, 0, true, true, true, true, false, true);
							}
						}
					});
				sub->AddOption<RegularOption>("Double Back Flip", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, true, 0, 0, 12.0f, 0, 4.0f, 0, true, true, true, true, false, true);
							}
						}

					});


				sub->AddOption<RegularOption>("360 | Donut", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, 1, 0, 20.f, 0.0f, 20.f, 0.f, 0.f, 0, 1, 1, 1, 0, 1);
							}
						}
					});
				sub->AddOption<RegularOption>("Jump", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, true, 0, 0, 7.0f, 0, 0, 0, true, true, true, true, false, true);
							}
						}
					});
				sub->AddOption<RegularOption>("Send To The Moon", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, true, 0, 0, 999.0f, 0, 0, 0, true, true, true, true, false, true);
							}
						}
					});
				sub->AddOption<RegularOption>("Crush Him", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, true, 0, 0, -400.0f, 0, 0, 0, true, true, true, true, false, true);
							}
						}
					});
				sub->AddOption<RegularOption>("Spinning Jump", nullptr, []
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
						{
							int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
							RequestControlOfEnt(vehicle);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
							{
								ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, 1, 0, 20.f, 20.0f, 20.f, 0.f, 0.f, 0, 1, 1, 1, 0, 1);
							}
						}
					});





					});

			g_UiManager->AddSubmenu<RegularSubmenu>("Teleport", TeleportP, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Teleport To Player Vehicle", "Teleports Into Player Vehicle.", [] { PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(g_SelectedPlayer), true);

					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(g_SelectedPlayer)), VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(g_SelectedPlayer)), -1)); });


					sub->AddOption<RegularOption>("Teleport To Player", "Teleport To Player.", [] { Entity handle;
					Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
					PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) ? handle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) : handle = PLAYER::PLAYER_PED_ID();
					ENTITY::SET_ENTITY_COORDS(handle, coords.x, coords.y, coords.z, false, false, false, false);

						});


					sub->AddOption<RegularOption>("Teleport To Player to you [Must be in a Vehicle]", "", []
						{
							Vector3 MyCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
					if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)))
					{
						RequestControlOfEnt(PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)));
						ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), MyCoords.x, MyCoords.y, MyCoords.z + 1.0f, false, false, false, false);

					}


					//sub->AddOption<RegularOption>("Vehicle To You", "", []
					//	{
					//Vector3 playerCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), FALSE);
					//if (PED::IS_PED_IN_ANY_VEHICLE((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), true))
					//{
					//	int vehicle = PED::GET_VEHICLE_PED_IS_IN((PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)), false);
					//	RequestControlOfEnt(vehicle);
					//	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehicle))
					//	{
					//		ENTITY::SET_ENTITY_COORDS(vehicle, playerCoords.x, playerCoords.y, playerCoords.z, true, false, false, true);//
					//	}

					
					});
	
			


			g_UiManager->AddSubmenu<RegularSubmenu>(("Wardrobe"), SubmenuWardrobe, [](RegularSubmenu* sub)
				{

					sub->AddOption<RegularOption>(("Load BincoHaX"), "will load BincoHaX ", [] {

					ShellExecute(NULL, L"open", L"C:\\Scooby\\Outfit\\BincoHaXUI.exe", NULL, NULL, SW_SHOWDEFAULT);

						});

			sub->AddOption<RegularOption>(("Load xDev Outfit editor"), "will load xDev Outfit editor", [] {

				ShellExecute(NULL, L"open", L"C:\\Scooby\\Outfit\\Outfit_Editor.exe", NULL, NULL, SW_SHOWDEFAULT);

				});


					sub->AddOption<ChooseOption<const char*, std::size_t>>(("Component:"), nullptr, &m_ComponentIdList, &m_ClothIterator);
			switch (m_ClothIterator)
			{
			case 0:
			{

			}
			break;
			case 1:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &s1, 0, 200, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, s1, s2, s3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &s2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, s1, s2, s3); });
			}
			break;
			case 2:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &a1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, a1, a2, a3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &a2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, a1, a2, a3); });
			}
			break;
			case 3:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &b1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, b1, b2, b3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &b2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, b1, b2, b3); });
			}
			break;
			case 4:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &c1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, c1, c2, c3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &c2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, c1, c2, c3); });
			}
			break;
			case 5:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &d1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, d1, d2, d3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &d2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, d1, d2, d3); });
			}
			break;
			case 6:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &e1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, e1, e2, e3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &e2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, e1, e2, e3); });
			}
			break;
			case 7:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &f1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, f1, f2, f3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &f2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, f1, f2, f3); });
			}
			break;
			case 8:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &g1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, g1, g2, g3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &g2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, g1, g2, g3); });
			}
			break;
			case 9:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &h1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, h1, h2, h3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &h2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, h1, h2, h3); });
			}
			break;
			case 10:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &i1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, i1, i2, i3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &i2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, i1, i2, i3); });
			}
			break;
			case 11:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &j1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, j1, j2, j3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &j2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, j1, j2, j3); });
			}
			break;
			case 12:
			{
				sub->AddOption<NumberOption<int>>(("Drawable"), nullptr, &k1, 0, 500, 1, 1, true, "", "", [] {SetPlayerVariation(m_ClothIterator, k1, k2, k3); });
				sub->AddOption<NumberOption<int>>(("Texture"), nullptr, &k2, 0, 500, 1, 1, true, "", "", [] { SetPlayerVariation(m_ClothIterator, k1, k2, k3); });
			}
			break;
			}
			sub->AddOption<RegularOption>(("Reset"), nullptr, [] { ResetPedVariation(); });
			sub->AddOption<RegularOption>("Clean", nullptr, [] { PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID()); });
		sub->AddOption<RegularOption>("Dry", nullptr, [] { PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID()); });
			sub->AddOption<RegularOption>(("Randomize"), nullptr, [] { RandomizePedVariation(); });
				});




			g_UiManager->AddSubmenu<RegularSubmenu>("Pick ups", Weapon_Pickup, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Money Gun", nullptr, &MoneyGun, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("RP Gun", nullptr, &MoneyGun2, BoolDisplay::OnOff_Icon);
			sub->AddOption<BoolOption<bool>>("RP Gun 2", nullptr, &MoneyGun3, BoolDisplay::OnOff_Icon);
						});




			sub->AddOption<RegularOption>("Teleport To Waypoint", nullptr, [] {
				int waypoint = UI::GET_FIRST_BLIP_INFO_ID(8);
			if (UI::DOES_BLIP_EXIST(waypoint)) {
				Vector3 WPcoords = UI::GET_BLIP_COORDS(waypoint);
				int Handle = PLAYER::PLAYER_PED_ID();
				if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0)) {
					Handle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), WPcoords.x + 20, WPcoords.y + 20, WPcoords.z + 20);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), WPcoords.x + 20, WPcoords.y + 20, WPcoords.z + 20, false, false, false, true);
			}
				}
			);

				});



				g_UiManager->AddSubmenu<RegularSubmenu>(" Powers", SubmenuForcePowers, [](RegularSubmenu* sub)
					{
						sub->AddOption<BoolOption<bool>>("Laser eyes (Shift)", nullptr, &FireBr, BoolDisplay::OnOff_Icon);
						sub->AddOption<BoolOption<bool>>("Force Push Cars", nullptr, &PushVehFun, BoolDisplay::OnOff);
				sub->AddOption<BoolOption<bool>>("Make Peds Follow you around", nullptr, &ExpVehFun, BoolDisplay::OnOff);

				sub->AddOption<BoolOption<bool>>(" Persuade - Dance Peds", nullptr, &TEST1, BoolDisplay::OnOff);



					});




				g_UiManager->AddSubmenu<RegularSubmenu>("Trails", Trails, [](RegularSubmenu* sub)
					{

						sub->AddOption<SubOption>("Hand trails", nullptr, SubmenuHandtrail);



				//sub->AddOption<BoolOption<bool>>("Dog", nullptr, &Flash, BoolDisplay::OnOff_Icon);



				sub->AddOption<BoolOption<bool>>("Foot Trails", nullptr, &FootTrails, BoolDisplay::OnOff_Icon);

				sub->AddOption<BoolOption<bool>>("Vehicle Trails", nullptr, &VehicleTrails, BoolDisplay::OnOff_Icon);
					});





				g_UiManager->AddSubmenu<RegularSubmenu>("Handtrails", SubmenuHandtrail, [](RegularSubmenu* sub)
					{
						sub->AddOption<BoolOption<bool>>(("Toggle"), nullptr, &m_Handtrails, BoolDisplay::OnOff, false, [] {});
				sub->AddOption<NumberOption<float>>(("Scale"), nullptr, &handscale, 0.f, 255.f, 0.01f, 2, true, "", "", [] {});
				sub->AddOption<NumberOption<float>>(("Red"), nullptr, &handred, 0, 255, 1, 0, true, "", "", [] {});
				sub->AddOption<NumberOption<float>>(("Green"), nullptr, &handgreen, 0, 255, 1, 0, true, "", "", [] {});
				sub->AddOption<NumberOption<float>>(("Blue"), nullptr, &handblue, 0, 255, 1, 0, true, "", "", [] {});
				sub->AddOption<NumberOption<float>>(("Opacity"), nullptr, &handalpha, 0, 255, 1, 0, true, "", "", [] {});
					});







				g_UiManager->AddSubmenu<RegularSubmenu>("Spawner Settings", Vehicles_Spawner_Settings, [](RegularSubmenu* sub)
					{
						sub->AddOption<BoolOption<bool>>("Spawn in Vehicle", nullptr, &spawn_in_vehicle, BoolDisplay::OnOff_Icon);
				sub->AddOption<BoolOption<bool>>("Max vehicle", nullptr, &max_on_spawn, BoolDisplay::OnOff_Icon);
				/*sub->AddOption<BoolOption<bool>>("sp bypass may not work on some new vehicles", nullptr, &sp_bypass, BoolDisplay::OnOff_Icon);*/
				sub->AddOption<BoolOption<bool>>("Engine On", nullptr, &engine_on, BoolDisplay::OnOff_Icon);
				sub->AddOption<BoolOption<bool>>("Spawn with Godmode", nullptr, &spawn_god, BoolDisplay::OnOff_Icon);
					});





				g_UiManager->AddSubmenu<RegularSubmenu>(("Vehicle Acrobatics"), Acrobatics, [](RegularSubmenu* sub)
					{
						sub->AddOption<RegularOption>(("Front Flip"), nullptr, [=] { vehicle_acrobatics(2); });
				sub->AddOption<RegularOption>(("Side Flip"), nullptr, [=] { vehicle_acrobatics(1); });
				sub->AddOption<RegularOption>(("Back Flip"), nullptr, [=] { vehicle_acrobatics(3); });
				sub->AddOption<RegularOption>(("Bunny Hop"), nullptr, [=] { vehicle_acrobatics(0); });

			

					});



				g_UiManager->AddSubmenu<RegularSubmenu>(("Vehicle Weapons"), vehWeapons, [](RegularSubmenu* sub)
					{

						sub->AddOption<RegularOption>("use +"), nullptr, []
					{

					};
						//sub->AddOption<BoolOption<bool>>("Red Laser", nullptr, &RedLazerCar, BoolDisplay::OnOff_Icon);
				sub->AddOption<BoolOption<bool>>("Green Laser", nullptr, &GreenLaserCar, BoolDisplay::OnOff_Icon);
						sub->AddOption<BoolOption<bool>>("Fireworks", nullptr, &Shootfireworks, BoolDisplay::OnOff_Icon);
				sub->AddOption<BoolOption<bool>>("Rockets", nullptr, &ShootTankR, BoolDisplay::OnOff_Icon);
				sub->AddOption<BoolOption<bool>>("Mini?", nullptr, &ShootMini, BoolDisplay::OnOff_Icon);


					});

				g_UiManager->AddSubmenu<RegularSubmenu>("Hotkeys", Hotkeys, [](RegularSubmenu* sub)
					{
						sub->AddOption<BoolOption<bool>>("Teleport To Waypoint Hotkey [F6]", nullptr, &TPHotkey, BoolDisplay::OnOff_Icon);
				sub->AddOption<BoolOption<bool>>("Vehicle Fix Hotkey [F7]", nullptr, &NoclipHotkey, BoolDisplay::OnOff_Icon);
					});


		

				g_UiManager->AddSubmenu<RegularSubmenu>("Merryweather", MerryWeather, [](RegularSubmenu* sub)
					{



						sub->AddOption<RegularOption>("BALLISTIC ARMOUR"), nullptr, []
					{
						globalHandle(GLOBAL_REQUEST_BALLISTICARMOUR[0]).At(GLOBAL_REQUEST_BALLISTICARMOUR[1]).As<bool>() = true;
					};

				sub->AddOption<RegularOption>("Ammo Drop"), nullptr, []
				{
					globalHandle(GLOBAL_REQUEST_AMMOCRATE[0]).At(GLOBAL_REQUEST_AMMOCRATE[1]).As<bool>() = true;
				};
				sub->AddOption<RegularOption>("Airstrike"), nullptr, []
				{
					globalHandle(GLOBAL_REQUEST_AIRSTRIKE[0]).At(GLOBAL_REQUEST_AIRSTRIKE[1]).As<bool>() = true;
				};

				sub->AddOption<RegularOption>("Call a boat"), nullptr, []
				{
					globalHandle(GLOBAL_REQUEST_AMMOCRATE[0]).At(GLOBAL_REQUEST_AMMOCRATE[1]).As<bool>() = true;
				};

				sub->AddOption<RegularOption>("Call a Heli"), nullptr, []
				{
					globalHandle(GLOBAL_REQUEST_HELIPICKUP[0]).At(GLOBAL_REQUEST_HELIPICKUP[1]).As<bool>() = true;
				};

				sub->AddOption<RegularOption>("Backup Heli"), nullptr, []
				{
					globalHandle(GLOBAL_REQUEST_BACKUPHELI[0]).At(GLOBAL_REQUEST_BACKUPHELI[1]).As<bool>() = true;
				};


					});




			g_UiManager->AddSubmenu<RegularSubmenu>("Ped spawner", Bodygurad, [](RegularSubmenu* sub)
				{


					sub->AddOption<SubOption>("Riding", nullptr, ride);

					sub->AddOption<SubOption>("Bodyguard", nullptr, Bodygurad2);
			g_UiManager->AddSubmenu<RegularSubmenu>("Bodyguard", Bodygurad2, [](RegularSubmenu* sub)
				{


					sub->AddOption<RegularOption>("T", "Big Foot with railgun", []
						{
							Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("s_f_y_stripper_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);

						});


					sub->AddOption<RegularOption>("Big Foot", "Big Foot with railgun", []
						{
							Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("cs_orleans");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
						});

			sub->AddOption<RegularOption>("Husky", "husky with a raygun", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_husky");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_raypistol");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});



			sub->AddOption<RegularOption>("Pogo", "Pogo", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("u_m_y_pogo_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_bat");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});



			sub->AddOption<RegularOption>("Lamar", "lamar", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("ig_lamardavis");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_tacticalrifle");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});

			sub->AddOption<RegularOption>("mtlion", " a_c_mtlion", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_mtlion");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_unarmed");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});


			sub->AddOption<RegularOption>("RS Ranger", "rsranger_01", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("u_m_y_rsranger_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_raycarbine");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});


			sub->AddOption<RegularOption>("white monkey", "white monkey", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_rhesus");

			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_rpg");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});


			sub->AddOption<RegularOption>("black monkey", "black monkey", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);

			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_chimp");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_rpg");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});




			sub->AddOption<RegularOption>("FIB AGENT 1", "FIB AGENTS", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);

			Hash stripper = GAMEPLAY::GET_HASH_KEY("s_m_m_ciasec_01");


			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_advancedrifle");


			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});

			sub->AddOption<RegularOption>("FBI 2", "black monkey", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);

			Hash stripper = GAMEPLAY::GET_HASH_KEY("ig_davenorton");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_appistol)");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});


			sub->AddOption<RegularOption>("FBI 3", "black monkey", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);

			Hash stripper = GAMEPLAY::GET_HASH_KEY("cs_andreas");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_bat)");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});



			sub->AddOption<RegularOption>("FBI 4", "black monkey", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);

			Hash stripper = GAMEPLAY::GET_HASH_KEY("ig_karen_daniels");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_combatpdw");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});

			sub->AddOption<RegularOption>("COP 1", "COPS", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);

			Hash stripper = GAMEPLAY::GET_HASH_KEY("s_m_y_cop_01");

			Hash stripper3 = GAMEPLAY::GET_HASH_KEY("csb_cop");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_pumpshotgun_mk2");
			STREAMING::REQUEST_MODEL(stripper3);
			while (!STREAMING::HAS_MODEL_LOADED(stripper3))


				STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});


			sub->AddOption<RegularOption>("COP 2", "COPS", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);



			Hash stripper = GAMEPLAY::GET_HASH_KEY("s_f_y_cop_01");

			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_grenadelauncher");


			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});



			sub->AddOption<RegularOption>("COPS", "COPS", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);


			Hash stripper = GAMEPLAY::GET_HASH_KEY("csb_cop");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_sniperrifle");



			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);

			int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			PED::SET_PED_AS_GROUP_LEADER(playerPed, my_group);
			PED::SET_PED_AS_GROUP_MEMBER(createdPED, my_group);
			PED::SET_PED_NEVER_LEAVES_GROUP(createdPED, my_group);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);
				});


				});



			sub->AddOption<ChooseOption<const char*, std::size_t>>("Peds", nullptr, &pedModels, &DemoListPos51, false, [] { spawn_vehicle((char*)pedModels[DemoListPos51]);	});

			sub->AddOption<RegularOption>("--------------"), nullptr, []
			{
				Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_m_y_indian_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_rpg");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);


			};

			sub->AddOption<RegularOption>("Clone yourself", "This will clone your current ped", []
				{
					PED::CLONE_PED(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_heavysniper");

				});

			sub->AddOption<RegularOption>("yourself Polo dancing", "This will clone your current ped", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			char* anim = "mini@strip_club@pole_dance@pole_dance2";
			char* animID = "pd_dance_02";

			int clone = PED::CLONE_PED(playerPed, pos.x, pos.y, pos.z);
			ENTITY::SET_ENTITY_INVINCIBLE(clone, false);

			STREAMING::REQUEST_ANIM_DICT(anim);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(anim))
				WAIT(0);

			AI::TASK_PLAY_ANIM(clone, anim, animID, 8.0f, 0.0f, -1, 9, 0, 0, 0, 0);

				});



			sub->AddOption<RegularOption>("Sniper Chimp", "Chimp with a Sniper ready to kill", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_c_chimp");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_heavysniper");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);

				});


			sub->AddOption<RegularOption>("RPG bomber", "will spawn a paki with a RPG", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("a_m_y_indian_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_rpg");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);

				});

			sub->AddOption<RegularOption>("Pogo", "Pogo is ready to beat a Ni****", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("u_m_y_pogo_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_bat");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);

				});






			sub->AddOption<RegularOption>("Alien", "Alien with Raygun / Up-n-Atomizer", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("s_m_m_movalien_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_raypistol");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);

				});

			sub->AddOption<RegularOption>("Alien 2", "Alien with Railgun", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("s_m_m_movalien_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_railgun");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);

				});


			sub->AddOption<RegularOption>("Alien 3", "Alien with Widowmaker ", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("s_m_m_movalien_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_rayminigun");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);

				});


			sub->AddOption<RegularOption>("Alien 4", "Alien with Unholy Hellbringer ", []
				{
					Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			Hash stripper = GAMEPLAY::GET_HASH_KEY("s_m_m_movalien_01");
			Hash railgun = GAMEPLAY::GET_HASH_KEY("weapon_raycarbine");
			STREAMING::REQUEST_MODEL(stripper);
			while (!STREAMING::HAS_MODEL_LOADED(stripper))
				WAIT(0);

			int createdPED = PED::CREATE_PED(26, stripper, pos.x, pos.y, pos.z, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(createdPED, false);
			PED::SET_PED_COMBAT_ABILITY(createdPED, 100);
			WEAPON::GIVE_WEAPON_TO_PED(createdPED, railgun, railgun, 9999, 9999);
			PED::SET_PED_CAN_SWITCH_WEAPON(createdPED, true);

				});
			

				});



			g_UiManager->AddSubmenu<RegularSubmenu>("Maze Bank Small Ramp", SubmenuRamp1, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod1();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Maze Bank Roof Ramp", SubmenuRamp2, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod2();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Beach Ramp", SubmenuRamp3, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod3();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1513.0f, -1192.0f, 1.0f, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Mount Chilliad Ramp", SubmenuRamp4, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod4();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 500, 5593, 795, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Airport Mini Ramp", SubmenuRamp5, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod5();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1208, -2950, 13, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Airport Gate Ramp", SubmenuRamp6, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod6();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1046, -2538, 20, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Space Tower", SubmenuRamp7, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod7();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 70, -674, 680, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Quad Ramp", SubmenuRamp8, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod8();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Fort", SubmenuRamp9, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod9();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2731, 3259, 32, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Halfpipe", SubmenuRamp10, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod10();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1003, -2916, 14, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Airport Loop Ramp", SubmenuRamp11, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod11();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1074, -3201, 13, 1, 0, 0, 1);
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Mega Ramp", SubmenuRamp12, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Load", "", []
						{
							LoadMapMod12();
						});

			sub->AddOption<RegularOption>("Teleport", "", []
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -74.94243f, -818.63446f, 326.174347f, 1, 0, 0, 1);
				});





});




			

			//here is more test stuff you can look at
			/*g_UiManager->AddSubmenu<RegularSubmenu>(BIG_TRANSLATE("Demo_sub"), SubmenuTest, [](RegularSubmenu* sub)
		{
			sub->AddOption<RegularOption>(BIG_TRANSLATE("RegularOption_demo"), "A regular option.", []
			{
				g_Logger->Info("You pressed the test option");
			});

			static bool testBool1{};
			sub->AddOption<BoolOption<bool>>(BIG_TRANSLATE("BoolOnOff_demo"), nullptr, &testBool1, BoolDisplay::OnOff_Icon);
			static bool testBool2{};
			sub->AddOption<BoolOption<bool>>(BIG_TRANSLATE("BoolYesNo_demo"), nullptr, &testBool2, BoolDisplay::YesNo);

			static std::int32_t int32Test{ 69 };
			sub->AddOption<NumberOption<std::int32_t>>("Int32", nullptr, &int32Test, 0, 100);

			static std::int64_t int64Test{ 420 };
			sub->AddOption<NumberOption<std::int64_t>>("Int64", nullptr, &int64Test, 0, 1000, 10);

			static float floatTest{ 6.9f };
			sub->AddOption<NumberOption<float>>("Float", nullptr, &floatTest, 0.f, 10.f, 0.1f, 1);

			static std::vector<std::uint64_t> vector{ 1, 2, 3 };
			static std::size_t vectorPos{};

			sub->AddOption<ChooseOption<const char*, std::size_t>>("Array", nullptr, &Lists::DemoList, &Lists::DemoListPos);
			sub->AddOption<ChooseOption<std::uint64_t, std::size_t>>("Vector", nullptr, &vector, &vectorPos);
		});*/
			


			WAIT(0);
		}
	}

	void ScriptMain() {
		srand(GetTickCount());
		main();

		/*g_Discord->Tick();*/
	}
}

