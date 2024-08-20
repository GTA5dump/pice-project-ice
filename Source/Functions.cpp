#include "stdafx.h"
#include "Pointers.hpp"
#include "Discord/discord_rpc.h"
#include "Discord/discord_register.h"


// WHY I AM PASTING THIS SOURCE I guess it's free money and funny to paste  from 2017/2018 sources 
// by v98



namespace Mod_Hub_Base
{


#if defined(enum)
#define enum EMIT WARNING C4005
#error The C++ Standard Library forbids macroizing the keyword "enum". \
Enable warning C4005 to find the forbidden define.
#endif // enum


	enum eFrameFlags : std::uint32_t
	{
		eFrameFlagExplosiveAmmo = 1 << 11,
		eFrameFlagFireAmmo = 1 << 12,
		eFrameFlagExplosiveMelee = 1 << 13,
		eFrameFlagSuperJump = 1 << 14,
	};


//	enum eBone
//	{
//		SKEL_ROOT = 0x0,
//		SKEL_Pelvis = 0x2e28,
//		SKEL_L_Thigh = 0xe39f,
//		SKEL_L_Calf = 0xf9bb,
//		SKEL_L_Foot = 0x3779,
//		SKEL_L_Toe0 = 0x83c,
//		IK_L_Foot = 0xfedd,
//		PH_L_Foot = 0xe175,
//		MH_L_Knee = 0xb3fe,
//		SKEL_R_Thigh = 0xca72,
//		SKEL_R_Calf = 0x9000,
//		SKEL_R_Foot = 0xCC4D,
//		SKEL_R_Toe0 = 0x512d,
//		IK_R_Foot = 0x8aae,
//		PH_R_Foot = 0x60e6,
//		MH_R_Knee = 0x3fcf,
//		RB_L_ThighRoll = 0x5c57,
//		RB_R_ThighRoll = 0x192a,
//		SKEL_Spine_Root = 0xe0fd,
//		SKEL_Spine0 = 0x5c01,
//		SKEL_Spine1 = 0x60f0,
//		SKEL_Spine2 = 0x60f1,
//		SKEL_Spine3 = 0x60f2,
//		SKEL_L_Clavicle = 0xfcd9,
//		SKEL_L_UpperArm = 0xb1c5,
//		SKEL_L_Forearm = 0xeeeb,
//		SKEL_L_Hand = 0x49d9,
//		SKEL_L_Finger00 = 0x67f2,
//		SKEL_L_Finger01 = 0xff9,
//		SKEL_L_Finger02 = 0xffa,
//		SKEL_L_Finger10 = 0x67f3,
//		SKEL_L_Finger11 = 0x1049,
//		SKEL_L_Finger12 = 0x104a,
//		SKEL_L_Finger20 = 0x67f4,
//		SKEL_L_Finger21 = 0x1059,
//		SKEL_L_Finger22 = 0x105a,
//		SKEL_L_Finger30 = 0x67f5,
//		SKEL_L_Finger31 = 0x1029,
//		SKEL_L_Finger32 = 0x102a,
//		SKEL_L_Finger40 = 0x67f6,
//		SKEL_L_Finger41 = 0x1039,
//		SKEL_L_Finger42 = 0x103a,
//		PH_L_Hand = 0xeb95,
//		IK_L_Hand = 0x8cbd,
//		RB_L_ForeArmRoll = 0xee4f,
//		RB_L_ArmRoll = 0x1470,
//		MH_L_Elbow = 0x58b7,
//		SKEL_R_Clavicle = 0x29d2,
//		SKEL_R_UpperArm = 0x9d4d,
//		SKEL_R_Forearm = 0x6e5c,
//		SKEL_R_Hand = 0xdead,
//		SKEL_R_Finger00 = 0xe5f2,
//		SKEL_R_Finger01 = 0xfa10,
//		SKEL_R_Finger02 = 0xfa11,
//		SKEL_R_Finger10 = 0xe5f3,
//		SKEL_R_Finger11 = 0xfa60,
//		SKEL_R_Finger12 = 0xfa61,
//		SKEL_R_Finger20 = 0xe5f4,
//		SKEL_R_Finger21 = 0xfa70,
//		SKEL_R_Finger22 = 0xfa71,
//		SKEL_R_Finger30 = 0xe5f5,
//		SKEL_R_Finger31 = 0xfa40,
//		SKEL_R_Finger32 = 0xfa41,
//		SKEL_R_Finger40 = 0xe5f6,
//		SKEL_R_Finger41 = 0xfa50,
//		SKEL_R_Finger42 = 0xfa51,
//		PH_R_Hand = 0x6f06,
//		IK_R_Hand = 0x188e,
//		RB_R_ForeArmRoll = 0xab22,
//		RB_R_ArmRoll = 0x90ff,
//		MH_R_Elbow = 0xbb0,
//		SKEL_Neck_1 = 0x9995,
//		SKEL_Head = 0x796e,
//		IK_Head = 0x322c,
//		FACIAL_facialRoot = 0xfe2c,
//		FB_L_Brow_Out_000 = 0xe3db,
//		FB_L_Lid_Upper_000 = 0xb2b6,
//		FB_L_Eye_000 = 0x62ac,
//		FB_L_CheekBone_000 = 0x542e,
//		FB_L_Lip_Corner_000 = 0x74ac,
//		FB_R_Lid_Upper_000 = 0xaa10,
//		FB_R_Eye_000 = 0x6b52,
//		FB_R_CheekBone_000 = 0x4b88,
//		FB_R_Brow_Out_000 = 0x54c,
//		FB_R_Lip_Corner_000 = 0x2ba6,
//		FB_Brow_Centre_000 = 0x9149,
//		FB_UpperLipRoot_000 = 0x4ed2,
//		FB_UpperLip_000 = 0xf18f,
//		FB_L_Lip_Top_000 = 0x4f37,
//		FB_R_Lip_Top_000 = 0x4537,
//		FB_Jaw_000 = 0xb4a0,
//		FB_LowerLipRoot_000 = 0x4324,
//		FB_LowerLip_000 = 0x508f,
//		FB_L_Lip_Bot_000 = 0xb93b,
//		FB_R_Lip_Bot_000 = 0xc33b,
//		FB_Tongue_000 = 0xb987,
//		RB_Neck_1 = 0x8b93,
//		IK_Root = 0xdd1c
//	};
//
//	enum class RockstarEvent : uint16_t
//	{
//		OBJECT_ID_FREED_EVENT,
//		OBJECT_ID_REQUEST_EVENT,
//		ARRAY_DATA_VERIFY_EVENT,
//		SCRIPT_ARRAY_DATA_VERIFY_EVENT,
//		REQUEST_CONTROL_EVENT,
//		GIVE_CONTROL_EVENT,
//		WEAPON_DAMAGE_EVENT,
//		REQUEST_PICKUP_EVENT,
//		REQUEST_MAP_PICKUP_EVENT,
//		GAME_CLOCK_EVENT,
//		GAME_WEATHER_EVENT,
//		RESPAWN_PLAYER_PED_EVENT,
//		GIVE_WEAPON_EVENT,
//		REMOVE_WEAPON_EVENT,
//		REMOVE_ALL_WEAPONS_EVENT,
//		VEHICLE_COMPONENT_CONTROL_EVENT,
//		FIRE_EVENT,
//		EXPLOSION_EVENT,
//		START_PROJECTILE_EVENT,
//		UPDATE_PROJECTILE_TARGET_EVENT,
//		REMOVE_PROJECTILE_ENTITY_EVENT,
//		BREAK_PROJECTILE_TARGET_LOCK_EVENT,
//		ALTER_WANTED_LEVEL_EVENT,
//		CHANGE_RADIO_STATION_EVENT,
//		RAGDOLL_REQUEST_EVENT,
//		PLAYER_TAUNT_EVENT,
//		PLAYER_CARD_STAT_EVENT,
//		DOOR_BREAK_EVENT,
//		SCRIPTED_GAME_EVENT,
//		REMOTE_SCRIPT_INFO_EVENT,
//		REMOTE_SCRIPT_LEAVE_EVENT,
//		MARK_AS_NO_LONGER_NEEDED_EVENT,
//		CONVERT_TO_SCRIPT_ENTITY_EVENT,
//		SCRIPT_WORLD_STATE_EVENT,
//		CLEAR_AREA_EVENT,
//		CLEAR_RECTANGLE_AREA_EVENT,
//		NETWORK_REQUEST_SYNCED_SCENE_EVENT,
//		NETWORK_START_SYNCED_SCENE_EVENT,
//		NETWORK_STOP_SYNCED_SCENE_EVENT,
//		NETWORK_UPDATE_SYNCED_SCENE_EVENT,
//		INCIDENT_ENTITY_EVENT,
//		GIVE_PED_SCRIPTED_TASK_EVENT,
//		GIVE_PED_SEQUENCE_TASK_EVENT,
//		NETWORK_CLEAR_PED_TASKS_EVENT,
//		NETWORK_START_PED_ARREST_EVENT,
//		NETWORK_START_PED_UNCUFF_EVENT,
//		NETWORK_SOUND_CAR_HORN_EVENT,
//		NETWORK_ENTITY_AREA_STATUS_EVENT,
//		NETWORK_GARAGE_OCCUPIED_STATUS_EVENT,
//		PED_CONVERSATION_LINE_EVENT,
//		SCRIPT_ENTITY_STATE_CHANGE_EVENT,
//		NETWORK_PLAY_SOUND_EVENT,
//		NETWORK_STOP_SOUND_EVENT,
//		NETWORK_PLAY_AIRDEFENSE_FIRE_EVENT,
//		NETWORK_BANK_REQUEST_EVENT,
//		NETWORK_AUDIO_BARK_EVENT,
//		REQUEST_DOOR_EVENT,
//		NETWORK_TRAIN_REPORT_EVENT,
//		NETWORK_TRAIN_REQUEST_EVENT,
//		NETWORK_INCREMENT_STAT_EVENT,
//		MODIFY_VEHICLE_LOCK_WORD_STATE_DATA,
//		MODIFY_PTFX_WORD_STATE_DATA_SCRIPTED_EVOLVE_EVENT,
//		REQUEST_PHONE_EXPLOSION_EVENT,
//		REQUEST_DETACHMENT_EVENT,
//		KICK_VOTES_EVENT,
//		GIVE_PICKUP_REWARDS_EVENT,
//		NETWORK_CRC_HASH_CHECK_EVENT,
//		BLOW_UP_VEHICLE_EVENT,
//		NETWORK_SPECIAL_FIRE_EQUIPPED_WEAPON,
//		NETWORK_RESPONDED_TO_THREAT_EVENT,
//		NETWORK_SHOUT_TARGET_POSITION,
//		VOICE_DRIVEN_MOUTH_MOVEMENT_FINISHED_EVENT,
//		PICKUP_DESTROYED_EVENT,
//		UPDATE_PLAYER_SCARS_EVENT,
//		NETWORK_CHECK_EXE_SIZE_EVENT,
//		NETWORK_PTFX_EVENT,
//		NETWORK_PED_SEEN_DEAD_PED_EVENT,
//		REMOVE_STICKY_BOMB_EVENT,
//		NETWORK_CHECK_CODE_CRCS_EVENT,
//		INFORM_SILENCED_GUNSHOT_EVENT,
//		PED_PLAY_PAIN_EVENT,
//		CACHE_PLAYER_HEAD_BLEND_DATA_EVENT,
//		REMOVE_PED_FROM_PEDGROUP_EVENT,
//		REPORT_MYSELF_EVENT,
//		REPORT_CASH_SPAWN_EVENT,
//		ACTIVATE_VEHICLE_SPECIAL_ABILITY_EVENT,
//		BLOCK_WEAPON_SELECTION,
//		NETWORK_CHECK_CATALOG_CRC
//	};
//
//	enum Scriptevents
//	{
//		VEHICLE_KICK = 578856274,
//		/*CEO_KICK = 248967238,
//		CLUB_KICK = -2105858993,
//		CEO_BAN = -764524031,*/
//		BLACKSCREEN1 = 603406648,
//		BLACKSCREEN2 = -1704141512,
//		MESSAGE1 = 677240627,
//		MESSAGE2 = -1113591308,
//		MESSAGE3 = 1572255940,
//		MESSAGE4 = 802133775,
//		BOUNTY = 1294995624,
//		APARTMENT = 603406648,
//		CAYO = -621279188,
//		JOB = 2020588206,
//		CUTSCENES = 1068259786,
//		WANTED_LEVEL = -91354030,
//		SOUND_SPAM = 1132878564
//	};
//
//	const static std::int32_t kicks[] = { 998716537 };
//	const static std::int32_t job_send[] = { JOB };
//	const static std::int32_t vehicle_kick[] = { VEHICLE_KICK };
///*	const static std::int32_t ceo_kick[] = { CEO_KICK, CLUB_KICK };
//	const static std::int32_t ceo_ban[] = { CEO_BAN }*/;
//	const static std::int32_t blackscreen[] = { BLACKSCREEN1, BLACKSCREEN2 };
//	const static std::int32_t message[] = { MESSAGE1, MESSAGE2,MESSAGE3,MESSAGE4 };
//	const static std::int32_t bounty[] = { BOUNTY };
//	const static std::int32_t apartment[] = { APARTMENT };
//	const static std::int32_t cayo_perico[] = { CAYO };
//	const static std::int32_t cutscene[] = { CUTSCENES };
//	const static std::int32_t police_level[] = { WANTED_LEVEL };
//	const static std::int32_t sound_spam[] = { SOUND_SPAM };
//	const static std::int32_t invites[] = { APARTMENT, CAYO };
//	//const static std::int32_t ceo_script[] = { CEO_KICK, CLUB_KICK,CEO_BAN };
//
//	enum eControl
//	{
//		ControlNextCamera = 0,
//		ControlLookLeftRight = 1,
//		ControlLookUpDown = 2,
//		ControlLookUpOnly = 3,
//		ControlLookDownOnly = 4,
//		ControlLookLeftOnly = 5,
//		ControlLookRightOnly = 6,
//		ControlCinematicSlowMo = 7,
//		ControlFlyUpDown = 8,
//		ControlFlyLeftRight = 9,
//		ControlScriptedFlyZUp = 10,
//		ControlScriptedFlyZDown = 11,
//		ControlWeaponWheelUpDown = 12,
//		ControlWeaponWheelLeftRight = 13,
//		ControlWeaponWheelNext = 14,
//		ControlWeaponWheelPrev = 15,
//		ControlSelectNextWeapon = 16,
//		ControlSelectPrevWeapon = 17,
//		ControlSkipCutscene = 18,
//		ControlCharacterWheel = 19,
//		ControlMultiplayerInfo = 20,
//		ControlSprint = 21,
//		ControlJump = 22,
//		ControlEnter = 23,
//		ControlAttack = 24,
//		ControlAim = 25,
//		ControlLookBehind = 26,
//		ControlPhone = 27,
//		ControlSpecialAbility = 28,
//		ControlSpecialAbilitySecondary = 29,
//		ControlMoveLeftRight = 30,
//		ControlMoveUpDown = 31,
//		ControlMoveUpOnly = 32,
//		ControlMoveDownOnly = 33,
//		ControlMoveLeftOnly = 34,
//		ControlMoveRightOnly = 35,
//		ControlDuck = 36,
//		ControlSelectWeapon = 37,
//		ControlPickup = 38,
//		ControlSniperZoom = 39,
//		ControlSniperZoomInOnly = 40,
//		ControlSniperZoomOutOnly = 41,
//		ControlSniperZoomInSecondary = 42,
//		ControlSniperZoomOutSecondary = 43,
//		ControlCover = 44,
//		ControlReload = 45,
//		ControlTalk = 46,
//		ControlDetonate = 47,
//		ControlHUDSpecial = 48,
//		ControlArrest = 49,
//		ControlAccurateAim = 50,
//		ControlContext = 51,
//		ControlContextSecondary = 52,
//		ControlWeaponSpecial = 53,
//		ControlWeaponSpecial2 = 54,
//		ControlDive = 55,
//		ControlDropWeapon = 56,
//		ControlDropAmmo = 57,
//		ControlThrowGrenade = 58,
//		ControlVehicleMoveLeftRight = 59,
//		ControlVehicleMoveUpDown = 60,
//		ControlVehicleMoveUpOnly = 61,
//		ControlVehicleMoveDownOnly = 62,
//		ControlVehicleMoveLeftOnly = 63,
//		ControlVehicleMoveRightOnly = 64,
//		ControlVehicleSpecial = 65,
//		ControlVehicleGunLeftRight = 66,
//		ControlVehicleGunUpDown = 67,
//		ControlVehicleAim = 68,
//		ControlVehicleAttack = 69,
//		ControlVehicleAttack2 = 70,
//		ControlVehicleAccelerate = 71,
//		ControlVehicleBrake = 72,
//		ControlVehicleDuck = 73,
//		ControlVehicleHeadlight = 74,
//		ControlVehicleExit = 75,
//		ControlVehicleHandbrake = 76,
//		ControlVehicleHotwireLeft = 77,
//		ControlVehicleHotwireRight = 78,
//		ControlVehicleLookBehind = 79,
//		ControlVehicleCinCam = 80,
//		ControlVehicleNextRadio = 81,
//		ControlVehiclePrevRadio = 82,
//		ControlVehicleNextRadioTrack = 83,
//		ControlVehiclePrevRadioTrack = 84,
//		ControlVehicleRadioWheel = 85,
//		ControlVehicleHorn = 86,
//		ControlVehicleFlyThrottleUp = 87,
//		ControlVehicleFlyThrottleDown = 88,
//		ControlVehicleFlyYawLeft = 89,
//		ControlVehicleFlyYawRight = 90,
//		ControlVehiclePassengerAim = 91,
//		ControlVehiclePassengerAttack = 92,
//		ControlVehicleSpecialAbilityFranklin = 93,
//		ControlVehicleStuntUpDown = 94,
//		ControlVehicleCinematicUpDown = 95,
//		ControlVehicleCinematicUpOnly = 96,
//		ControlVehicleCinematicDownOnly = 97,
//		ControlVehicleCinematicLeftRight = 98,
//		ControlVehicleSelectNextWeapon = 99,
//		ControlVehicleSelectPrevWeapon = 100,
//		ControlVehicleRoof = 101,
//		ControlVehicleJump = 102,
//		ControlVehicleGrapplingHook = 103,
//		ControlVehicleShuffle = 104,
//		ControlVehicleDropProjectile = 105,
//		ControlVehicleMouseControlOverride = 106,
//		ControlVehicleFlyRollLeftRight = 107,
//		ControlVehicleFlyRollLeftOnly = 108,
//		ControlVehicleFlyRollRightOnly = 109,
//		ControlVehicleFlyPitchUpDown = 110,
//		ControlVehicleFlyPitchUpOnly = 111,
//		ControlVehicleFlyPitchDownOnly = 112,
//		ControlVehicleFlyUnderCarriage = 113,
//		ControlVehicleFlyAttack = 114,
//		ControlVehicleFlySelectNextWeapon = 115,
//		ControlVehicleFlySelectPrevWeapon = 116,
//		ControlVehicleFlySelectTargetLeft = 117,
//		ControlVehicleFlySelectTargetRight = 118,
//		ControlVehicleFlyVerticalFlightMode = 119,
//		ControlVehicleFlyDuck = 120,
//		ControlVehicleFlyAttackCamera = 121,
//		ControlVehicleFlyMouseControlOverride = 122,
//		ControlVehicleSubTurnLeftRight = 123,
//		ControlVehicleSubTurnLeftOnly = 124,
//		ControlVehicleSubTurnRightOnly = 125,
//		ControlVehicleSubPitchUpDown = 126,
//		ControlVehicleSubPitchUpOnly = 127,
//		ControlVehicleSubPitchDownOnly = 128,
//		ControlVehicleSubThrottleUp = 129,
//		ControlVehicleSubThrottleDown = 130,
//		ControlVehicleSubAscend = 131,
//		ControlVehicleSubDescend = 132,
//		ControlVehicleSubTurnHardLeft = 133,
//		ControlVehicleSubTurnHardRight = 134,
//		ControlVehicleSubMouseControlOverride = 135,
//		ControlVehiclePushbikePedal = 136,
//		ControlVehiclePushbikeSprint = 137,
//		ControlVehiclePushbikeFrontBrake = 138,
//		ControlVehiclePushbikeRearBrake = 139,
//		ControlMeleeAttackLight = 140,
//		ControlMeleeAttackHeavy = 141,
//		ControlMeleeAttackAlternate = 142,
//		ControlMeleeBlock = 143,
//		ControlParachuteDeploy = 144,
//		ControlParachuteDetach = 145,
//		ControlParachuteTurnLeftRight = 146,
//		ControlParachuteTurnLeftOnly = 147,
//		ControlParachuteTurnRightOnly = 148,
//		ControlParachutePitchUpDown = 149,
//		ControlParachutePitchUpOnly = 150,
//		ControlParachutePitchDownOnly = 151,
//		ControlParachuteBrakeLeft = 152,
//		ControlParachuteBrakeRight = 153,
//		ControlParachuteSmoke = 154,
//		ControlParachutePrecisionLanding = 155,
//		ControlMap = 156,
//		ControlSelectWeaponUnarmed = 157,
//		ControlSelectWeaponMelee = 158,
//		ControlSelectWeaponHandgun = 159,
//		ControlSelectWeaponShotgun = 160,
//		ControlSelectWeaponSmg = 161,
//		ControlSelectWeaponAutoRifle = 162,
//		ControlSelectWeaponSniper = 163,
//		ControlSelectWeaponHeavy = 164,
//		ControlSelectWeaponSpecial = 165,
//		ControlSelectCharacterMichael = 166,
//		ControlSelectCharacterFranklin = 167,
//		ControlSelectCharacterTrevor = 168,
//		ControlSelectCharacterMultiplayer = 169,
//		ControlSaveReplayClip = 170,
//		ControlSpecialAbilityPC = 171,
//		ControlPhoneUp = 172,
//		ControlPhoneDown = 173,
//		ControlPhoneLeft = 174,
//		ControlPhoneRight = 175,
//		ControlPhoneSelect = 176,
//		ControlPhoneCancel = 177,
//		ControlPhoneOption = 178,
//		ControlPhoneExtraOption = 179,
//		ControlPhoneScrollForward = 180,
//		ControlPhoneScrollBackward = 181,
//		ControlPhoneCameraFocusLock = 182,
//		ControlPhoneCameraGrid = 183,
//		ControlPhoneCameraSelfie = 184,
//		ControlPhoneCameraDOF = 185,
//		ControlPhoneCameraExpression = 186,
//		ControlFrontendDown = 187,
//		ControlFrontendUp = 188,
//		ControlFrontendLeft = 189,
//		ControlFrontendRight = 190,
//		ControlFrontendRdown = 191,
//		ControlFrontendRup = 192,
//		ControlFrontendRleft = 193,
//		ControlFrontendRright = 194,
//		ControlFrontendAxisX = 195,
//		ControlFrontendAxisY = 196,
//		ControlFrontendRightAxisX = 197,
//		ControlFrontendRightAxisY = 198,
//		ControlFrontendPause = 199,
//		ControlFrontendPauseAlternate = 200,
//		ControlFrontendAccept = 201,
//		ControlFrontendCancel = 202,
//		ControlFrontendX = 203,
//		ControlFrontendY = 204,
//		ControlFrontendLb = 205,
//		ControlFrontendRb = 206,
//		ControlFrontendLt = 207,
//		ControlFrontendRt = 208,
//		ControlFrontendLs = 209,
//		ControlFrontendRs = 210,
//		ControlFrontendLeaderboard = 211,
//		ControlFrontendSocialClub = 212,
//		ControlFrontendSocialClubSecondary = 213,
//		ControlFrontendDelete = 214,
//		ControlFrontendEndscreenAccept = 215,
//		ControlFrontendEndscreenExpand = 216,
//		ControlFrontendSelect = 217,
//		ControlScriptLeftAxisX = 218,
//		ControlScriptLeftAxisY = 219,
//		ControlScriptRightAxisX = 220,
//		ControlScriptRightAxisY = 221,
//		ControlScriptRUp = 222,
//		ControlScriptRDown = 223,
//		ControlScriptRLeft = 224,
//		ControlScriptRRight = 225,
//		ControlScriptLB = 226,
//		ControlScriptRB = 227,
//		ControlScriptLT = 228,
//		ControlScriptRT = 229,
//		ControlScriptLS = 230,
//		ControlScriptRS = 231,
//		ControlScriptPadUp = 232,
//		ControlScriptPadDown = 233,
//		ControlScriptPadLeft = 234,
//		ControlScriptPadRight = 235,
//		ControlScriptSelect = 236,
//		ControlCursorAccept = 237,
//		ControlCursorCancel = 238,
//		ControlCursorX = 239,
//		ControlCursorY = 240,
//		ControlCursorScrollUp = 241,
//		ControlCursorScrollDown = 242,
//		ControlEnterCheatCode = 243,
//		ControlInteractionMenu = 244,
//		ControlMpTextChatAll = 245,
//		ControlMpTextChatTeam = 246,
//		ControlMpTextChatFriends = 247,
//		ControlMpTextChatCrew = 248,
//		ControlPushToTalk = 249,
//		ControlCreatorLS = 250,
//		ControlCreatorRS = 251,
//		ControlCreatorLT = 252,
//		ControlCreatorRT = 253,
//		ControlCreatorMenuToggle = 254,
//		ControlCreatorAccept = 255,
//		ControlCreatorDelete = 256,
//		ControlAttack2 = 257,
//		ControlRappelJump = 258,
//		ControlRappelLongJump = 259,
//		ControlRappelSmashWindow = 260,
//		ControlPrevWeapon = 261,
//		ControlNextWeapon = 262,
//		ControlMeleeAttack1 = 263,
//		ControlMeleeAttack2 = 264,
//		ControlWhistle = 265,
//		ControlMoveLeft = 266,
//		ControlMoveRight = 267,
//		ControlMoveUp = 268,
//		ControlMoveDown = 269,
//		ControlLookLeft = 270,
//		ControlLookRight = 271,
//		ControlLookUp = 272,
//		ControlLookDown = 273,
//		ControlSniperZoomIn = 274,
//		ControlSniperZoomOut = 275,
//		ControlSniperZoomInAlternate = 276,
//		ControlSniperZoomOutAlternate = 277,
//		ControlVehicleMoveLeft = 278,
//		ControlVehicleMoveRight = 279,
//		ControlVehicleMoveUp = 280,
//		ControlVehicleMoveDown = 281,
//		ControlVehicleGunLeft = 282,
//		ControlVehicleGunRight = 283,
//		ControlVehicleGunUp = 284,
//		ControlVehicleGunDown = 285,
//		ControlVehicleLookLeft = 286,
//		ControlVehicleLookRight = 287,
//		ControlReplayStartStopRecording = 288,
//		ControlReplayStartStopRecordingSecondary = 289,
//		ControlScaledLookLeftRight = 290,
//		ControlScaledLookUpDown = 291,
//		ControlScaledLookUpOnly = 292,
//		ControlScaledLookDownOnly = 293,
//		ControlScaledLookLeftOnly = 294,
//		ControlScaledLookRightOnly = 295,
//		ControlReplayMarkerDelete = 296,
//		ControlReplayClipDelete = 297,
//		ControlReplayPause = 298,
//		ControlReplayRewind = 299,
//		ControlReplayFfwd = 300,
//		ControlReplayNewmarker = 301,
//		ControlReplayRecord = 302,
//		ControlReplayScreenshot = 303,
//		ControlReplayHidehud = 304,
//		ControlReplayStartpoint = 305,
//		ControlReplayEndpoint = 306,
//		ControlReplayAdvance = 307,
//		ControlReplayBack = 308,
//		ControlReplayTools = 309,
//		ControlReplayRestart = 310,
//		ControlReplayShowhotkey = 311,
//		ControlReplayCycleMarkerLeft = 312,
//		ControlReplayCycleMarkerRight = 313,
//		ControlReplayFOVIncrease = 314,
//		ControlReplayFOVDecrease = 315,
//		ControlReplayCameraUp = 316,
//		ControlReplayCameraDown = 317,
//		ControlReplaySave = 318,
//		ControlReplayToggletime = 319,
//		ControlReplayToggletips = 320,
//		ControlReplayPreview = 321,
//		ControlReplayToggleTimeline = 322,
//		ControlReplayTimelinePickupClip = 323,
//		ControlReplayTimelineDuplicateClip = 324,
//		ControlReplayTimelinePlaceClip = 325,
//		ControlReplayCtrl = 326,
//		ControlReplayTimelineSave = 327,
//		ControlReplayPreviewAudio = 328,
//		ControlVehicleDriveLook = 329,
//		ControlVehicleDriveLook2 = 330,
//		ControlVehicleFlyAttack2 = 331,
//		ControlRadioWheelUpDown = 332,
//		ControlRadioWheelLeftRight = 333,
//		ControlVehicleSlowMoUpDown = 334,
//		ControlVehicleSlowMoUpOnly = 335,
//		ControlVehicleSlowMoDownOnly = 336,
//		ControlMapPointOfInterest = 337,
//	};
//
//
//	struct playeresp
//	{
//		//Skeleton Esp
//
//		//Left Top
//		Vector3 LClavicle{};
//		Vector3 LUpperarm{};
//		Vector3 LForearm{};
//		Vector3 LHand{};
//
//		//Left Bottom	
//		Vector3 LThigh{};
//		Vector3 LCalf{};
//		Vector3 LFoot{};
//
//		//Root
//		Vector3 Head{};
//		Vector3 Neck{};
//		Vector3 Pelvis{};
//
//		//Right Top
//		Vector3 RClavicle{};
//		Vector3 RUpperarm{};
//		Vector3 RForearm{};
//		Vector3 RHand{};
//
//		//Right Bottom	
//		Vector3 RThigh{};
//		Vector3 RCalf{};
//		Vector3 RFoot{};
//
//	};
//	inline playeresp player_esp[32];
//
//	
//
//	float GetDistanceFloat(Vector3 pointA, Vector3 pointB) {
//		float a_x = pointA.x;
//		float a_y = pointA.y;
//		float a_z = pointA.z;
//		float b_x = pointB.x;
//		float b_y = pointB.y;
//		float b_z = pointB.z;
//		double x_ba = (double)(b_x - a_x);
//		double y_ba = (double)(b_y - a_y);
//		double z_ba = (double)(b_z - a_z);
//		double y_2 = y_ba * y_ba;
//		double x_2 = x_ba * x_ba;
//		double sum_2 = y_2 + x_2;
//		return(float)sqrt(sum_2 + z_ba);
//	}
//
//
//	void esp(bool name, bool box, bool skeleton)
//	{
//		for (std::int32_t i = 0; i < 32; i++)
//		{
//			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i)) && !INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i)) && !NETWORK::IS_PLAYER_IN_CUTSCENE(i) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i)) && ENTITY::IS_ENTITY_ON_SCREEN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i)) &&GetDistanceFloat(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), false)) <= 3000)
//			{
//				Vector3 players = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), false);
//				Vector3 me = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
//				if (name)
//				{
//					Vector3 pHCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 0, 0, 0);
//
//					float xPos;
//					float yPos;
//
//					BOOL screencoords = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(pHCoords.x, pHCoords.y, pHCoords.z, &xPos, &yPos);
//
//					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT((char*)"STRING");
//					ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 17) ? UI::SET_TEXT_COLOUR(237, 209, 0, 255) : UI::SET_TEXT_COLOUR(255, 255, 255, 255);
//					UI::SET_TEXT_FONT(4);
//					UI::SET_TEXT_SCALE(0.3f, 0.3f);
//					UI::SET_TEXT_CENTRE(true);
//					UI::SET_TEXT_DROP_SHADOW();
//
//					std::string name = PLAYER::GET_PLAYER_NAME(i);
//
//					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(name.c_str());
//					UI::END_TEXT_COMMAND_DISPLAY_TEXT(xPos, yPos);
//				}
//				if (box)
//				{
//					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 1))
//					{
//						Vector3 v0, v1;
//
//						Vector3 coords0from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), -(v1.x + 0.3f), v1.y - 0.3f, -0.9f);
//						Vector3 coords0to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), -(v1.x + 0.3f), v1.y + 0.3f, -0.9f);
//						Vector3 coords1from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), +(v1.x + 0.3f), v1.y - 0.3f, -0.9f);
//						Vector3 coords1to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), +(v1.x + 0.3f), v1.y + 0.3f, -0.9f);
//						Vector3 coords2from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + -0.3f, +(v1.y + 0.3f), -0.9f);
//						Vector3 coords2to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + 0.3f, +(v1.y + 0.3f), -0.9f);
//						Vector3 coords3from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + -0.3f, -(v1.y + 0.3f), -0.9f);
//						Vector3 coords3to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + 0.3f, -(v1.y + 0.3f), -0.9f);
//						Vector3 coords4from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), -(v1.x + 0.3f), v1.y - 0.3f, 0.9f);
//						Vector3 coords4to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), -(v1.x + 0.3f), v1.y + 0.3f, 0.9f);
//						Vector3 coords5from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), +(v1.x + 0.3f), v1.y - 0.3f, 0.9f);
//						Vector3 coords5to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), +(v1.x + 0.3f), v1.y + 0.3f, 0.9f);
//						Vector3 coords6from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + -0.3f, +(v1.y + 0.3f), 0.9f);
//						Vector3 coords6to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + 0.3f, +(v1.y + 0.3f), 0.9f);
//						Vector3 coords7from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + -0.3f, -(v1.y + 0.3f), 0.9f);
//						Vector3 coords7to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + 0.3f, -(v1.y + 0.3f), 0.9f);
//						Vector3 coords8from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + 0.3f, -(v1.y + 0.3f), -0.9f);
//						Vector3 coords8to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + 0.3f, -(v1.y + 0.3f), 0.9f);
//						Vector3 coords9from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + -0.3f, -(v1.y + -0.3f), -0.9f);
//						Vector3 coords9to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + -0.3f, -(v1.y + -0.3f), 0.9f);
//						Vector3 coords10from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + -0.3f, +(v1.y + -0.3f), -0.9f);
//						Vector3 coords10to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + -0.3f, +(v1.y + -0.3f), 0.9f);
//						Vector3 coords11from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + 0.3f, +(v1.y + 0.3f), -0.9f);
//						Vector3 coords11to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), v1.x + 0.3f, +(v1.y + 0.3f), 0.9f);
//
//						GRAPHICS::DRAW_LINE(coords0from.x, coords0from.y, coords0from.z, coords0to.x, coords0to.y, coords0to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords1from.x, coords1from.y, coords1from.z, coords1to.x, coords1to.y, coords1to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords2from.x, coords2from.y, coords2from.z, coords2to.x, coords2to.y, coords2to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords3from.x, coords3from.y, coords3from.z, coords3to.x, coords3to.y, coords3to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords4from.x, coords4from.y, coords4from.z, coords4to.x, coords4to.y, coords4to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords5from.x, coords5from.y, coords5from.z, coords5to.x, coords5to.y, coords5to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords6from.x, coords6from.y, coords6from.z, coords6to.x, coords6to.y, coords6to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords7from.x, coords7from.y, coords7from.z, coords7to.x, coords7to.y, coords7to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords8from.x, coords8from.y, coords8from.z, coords8to.x, coords8to.y, coords8to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords9from.x, coords9from.y, coords9from.z, coords9to.x, coords9to.y, coords9to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords10from.x, coords10from.y, coords10from.z, coords10to.x, coords10to.y, coords10to.z, 255, 255, 255, 255);
//						GRAPHICS::DRAW_LINE(coords11from.x, coords11from.y, coords11from.z, coords11to.x, coords11to.y, coords11to.z, 255, 255, 255, 255);
//					}
//				}
//				if (skeleton)
//				{
//					//Skeleton
//					player_esp[i].LClavicle = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_L_Clavicle, 0.f, 0.f, 0.f);
//					player_esp[i].LUpperarm = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_L_UpperArm, 0.f, 0.f, 0.f);
//					player_esp[i].LForearm = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_L_Forearm, 0.f, 0.f, 0.f);
//					player_esp[i].LHand = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_L_Hand, 0.f, 0.f, 0.f);
//
//					player_esp[i].RClavicle = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_R_Clavicle, 0.f, 0.f, 0.f);
//					player_esp[i].RUpperarm = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_R_UpperArm, 0.f, 0.f, 0.f);
//					player_esp[i].RForearm = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_R_Forearm, 0.f, 0.f, 0.f);
//					player_esp[i].RHand = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_R_Hand, 0.f, 0.f, 0.f);
//
//					player_esp[i].Head = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_Head, 0.f, 0.f, 0.f);
//					player_esp[i].Neck = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_Neck_1, 0.f, 0.f, 0.f);
//					player_esp[i].Pelvis = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_Pelvis, 0.f, 0.f, 0.f);
//
//					player_esp[i].LThigh = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_L_Thigh, 0.f, 0.f, 0.f);
//					player_esp[i].LCalf = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_L_Calf, 0.f, 0.f, 0.f);
//					player_esp[i].LFoot = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_L_Foot, 0.f, 0.f, 0.f);
//
//					player_esp[i].RThigh = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_R_Thigh, 0.f, 0.f, 0.f);
//					player_esp[i].RCalf = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_R_Calf, 0.f, 0.f, 0.f);
//					player_esp[i].RFoot = PED::GET_PED_BONE_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), SKEL_R_Foot, 0.f, 0.f, 0.f);
//				}
//			}
//			else
//			{
//				player_esp[i] = {};
//			}
//		}
//	}
//



	// here is some diffrent toggle bool options
	bool Godmode = true;
	void godmode()
	{//-----------------------get plyer ped id; this bool Godmode is Controling is to true and false 
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), Godmode);
	}

	bool Invisible = false;
	void invisible(bool toggle)
	{
		if (toggle/*when this toggle is getting verifiyed by a real bool its gonna work*/)
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
		}
	}

	bool SuperJump = false;
	void superjump(bool toggle)
	{
		if (SuperJump)
		{
			GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_PED_ID());
			GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		else
		{
			NULL; //0;
		}
	}


	enum class HudComponents
	{
		WANTED_STARS = 1,
		WEAPON_ICON,
		CASH,
		MP_CASH,
		MP_MESSAGE,
		VEHICLE_NAME,
		AREA_NAME,
		VEHICLE_CLASS,
		STREET_NAME,
		HELP_TEXT,
		FLOATING_HELP_TEXT_1,
		FLOATING_HELP_TEXT_2,
		CASH_CHANGE,
		RETICLE,
		SUBTITLE_TEXT,
		RADIO_STATIONS,
		SAVING_GAME,
		GAME_STREAM,
		WEAPON_WHEEL,
		WEAPON_WHEEL_STATS,
		HUD_COMPONENTS,
		HUD_WEAPONS
	};



	bool ForceCross = false;
	void forcecross(bool toggle)
	{
		if (toggle)
		{
			UI::SHOW_HUD_COMPONENT_THIS_FRAME(static_cast<int>(HudComponents::RETICLE));
		}
		else
		{
			NULL; //0;
		}
	}

	//bool CAMERAZOOMBOOL = false;
	//void camerazoombool(bool toggle)
	//{
	//	if (toggle)
	//	{
			CAM::_ANIMATE_GAMEPLAY_CAM_ZOOM(0.f, CamZoomFloat);
	//	}

	//}




	bool DisablePhone = false;
	void disablephone(bool toggle)
	{
		if (toggle)
		{
			globalHandle(20366).As<bool>() = true;
		}
		else
		{
			globalHandle(20366).As<bool>() = false;
		}
	}







	bool UFOEvent = false;
	void ufoevent(bool toggle)
	{
		if (toggle)
		{
			globalHandle(2793044 + 6813 + 3).As<int>() = true;
			globalHandle(262145 + 32832).As<int>() = 1665662400;
		}
		else
		{
			!NULL;
		}
	}




	bool DisableHud= false;
	void disablehud (bool toggle)
	{
		if (toggle)
		{
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
	}


	bool BeastJump = false;
	void beastjump(bool toggle)
	{
		if (toggle)
		{
			AI::TASK_JUMP(PLAYER::PLAYER_PED_ID(), true);
			AUDIO::PLAY_SOUND(-1, "Beast_Checkpoint", "APT_BvS_Soundset", 0, 0, 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, (char*)"Checkpoint_Beast_Hit", GAMEPLAY::PlayerPedID(), (char*)"FM_Events_Sasquatch_Sounds", false, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, (char*)"Beast_Checkpoint", (char*)"APT_BvS_Soundset", 1);
		}
		else
		{
			NULL; //0;
		}
	}

	namespace self
	{
		inline Ped ped;
		inline Player id;
		inline Vector3 pos;
		inline Vehicle veh;
	}

	bool BeastJump2 = false;
	void beastjump2(bool toggle)
	{
		if (toggle)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, (int)ControllerInputs::INPUT_JUMP) && !PED::IS_PED_IN_ANY_VEHICLE(self::ped, NULL) && !ENTITY::IS_ENTITY_IN_AIR(self::ped))
			{
				AI::TASK_JUMP(self::ped, true);
			}
		}

	}


	bool FastRespawn = false;
	void fastrespawn(bool toggle)
	{
		if (toggle)
		{
			if (PED::IS_PED_DEAD_OR_DYING(self::ped, true))
			{
				PED::RESURRECT_PED(self::ped);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(self::ped, self::pos.x, self::pos.y, self::pos.z, 0, 0, 0);
				AI::CLEAR_PED_TASKS_IMMEDIATELY(self::ped);
				GAMEPLAY::FORCE_GAME_STATE_PLAYING();
			}

		}
	}


	int rs = 255, gs = 0, bs = 0;
	void RGBFade2()
	{
		if (rs > 0 && bs == 0) {
			rs--;
			gs++;
		}
		if (gs > 0 && rs == 0) {
			gs--;
			bs++;
		}
		if (bs > 0 && gs == 0) {
			rs++;
			bs--;
		}
	}


	//Pickup SpawnPickup(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) {

	//	bool DroP = false;
	//	void drop(bool toggle)
	//	{
	//		if (toggle)
	//		{
	//			Vector3 player = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
	//			std::uint32_t moneyscript = -512375144;
	//			std::uint32_t rpscript = 0x2C014CA6;
	//			static int timer;
	//			((m_DropIterator ? 1025210927 : GAMEPLAY::GET_HASH_KEY("prop_money_bag_01")), [=] {
	//				{
	//					if (GetTickCount64() - timer > m_drop_delay)
	//					{
	//						SpawnPickup(m_DropIterator ? rpscript : moneyscript, player.x + m_drop_pos_x, player.y + m_drop_pos_y, player.z + m_drop_pos_z, 0, m_DropIterator ? 1 : m_drop_value, m_DropIterator ? 1025210927 : GAMEPLAY::GET_HASH_KEY("prop_money_bag_01"), false, true);
	//						timer = GetTickCount64();
	//					}
	//				});
	//			}
	//		}

	//	}
	//}


	bool NeverWanted = false;
	void neverwanted(bool toggle)
	{
		Player player = PLAYER::PLAYER_PED_ID();
		if (NeverWanted)
		{
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_MAX_WANTED_LEVEL(0);

			PLAYER::SET_POLICE_IGNORE_PLAYER(player, true);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(player, true);
			PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(player, false);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_POLICE_IGNORE_PLAYER(player, false);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(player, true);
			PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(player, false);
		}
	}

	bool VehInvisible = false;
	void vehinvisible(bool toggle)
	{
		if (toggle)
		{
			Vehicle Veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()));
			ENTITY::SET_ENTITY_VISIBLE(Veh, false, 0);
		}
		else
		{
			Vehicle Veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()));
			ENTITY::SET_ENTITY_VISIBLE(Veh, true, 0);
		}
	}









	//void BlackHole()
	//{
	//	

	//	static Vector3 oregano;
	//	static  r = *()((uintptr_t)GetModuleHandleA(0) + 0x28B5DA0);

	//	oregano = g_black_hole_pos; //ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
	//	GRAPHICS::DRAW_MARKER(28, oregano.x, oregano.y, oregano.z, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 1.f, 1.f, 1.f, 0, 0, 0, 255, false, false, 0, false, NULL, NULL, false);

	//	for (int i = 0; i < r->capacity; i++)
	//	{
	//		std::uint64_t vehicle_entity = r->get(i);
	//		if (vehicle_entity == NULL)
	//			continue;
	//		std::int32_t vehicle = g_GameFunctions->m_PointerToHande(vehicle_entity);
	//		if (!ENTITY::DOES_ENTITY_EXIST(vehicle))
	//			continue;
	//		RequestControlOfEnt(vehicle);
	//		Vector3 l_vHndCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(vehicle, 0.0f, 0.0f, 0.0f);

	//		auto pepperoni = ENTITY::GET_ENTITY_COORDS(vehicle, 1);
	//		auto pineapple = oregano;
	//		pineapple.z += 1.5f;
	//		Vector3 extra_cheese = { pineapple.x - pepperoni.x, pineapple.y - pepperoni.y, pineapple.z - pepperoni.z };
	//		if (distanceBetween(pineapple, pepperoni) > 3.f) {
	//			ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, 1, (extra_cheese.x / 13) * 0.1f, (extra_cheese.y / 13) * 0.1f, extra_cheese.z / 13, 0.f, 0.f, 0.f, 0, false, true, true, 0, 0);
	//		}
	//		else {
	//			ENTITY::SET_ENTITY_VELOCITY(vehicle, 0.f, 0.f, 0.f);
	//			ENTITY::APPLY_FORCE_TO_ENTITY(vehicle, 0.5f, 0.f, 0.f, extra_cheese.z / 15, 0.f, 0.f, 0.f, 0, false, true, true, 0, 0);
	//		}

	//	}
	//}

# define M_PI           3.14159265358979323846  /* pi */


	bool NoclipV2 = false;
	void noclipv2(bool enable)
	{
		if (enable)
		{
			auto ped = PLAYER::PLAYER_PED_ID();
			Vector3 xyzcoords = ENTITY::GET_ENTITY_COORDS(ped, true);
			auto heading = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING() + ENTITY::GET_ENTITY_HEADING(ped);
			auto pitch = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();

			auto speed = 1.0f;

			auto xm = -sin(heading * M_PI / 180.0);
			auto ym = cos(heading * M_PI / 180.0);
			auto zm = sin(pitch * M_PI / 180.0);

			auto len = sqrt(xm * xm + ym * ym + zm * zm);
			if (len != 0) {
				xm = xm / len;
				ym = ym / len;
				zm = zm / len;
			}

			auto x = xyzcoords.x;
			auto y = xyzcoords.y;
			auto z = xyzcoords.z;

			ENTITY::SET_ENTITY_VELOCITY(ped, 0.0001, 0.0001, 0.0001);
			if (GetAsyncKeyState(VK_SHIFT) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 21)) {
				speed = speed + 3;
			}
			if (GetAsyncKeyState(0x43) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 19)) {
				speed = speed - 0.5;
			}

			//forward
			if (GetAsyncKeyState(0x57)) {
				x = x + speed * xm;
				y = y + speed * ym;
				z = z + speed * zm;
			}
			//backward
			if (GetAsyncKeyState(0x53)) {
				x = x - speed * xm;
				y = y - speed * ym;
				z = z - speed * zm;
			}

			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(ped, x, y, z, true, true, true);


		}

	}

	void NetworkBlameLobby()
	{

		for (int i = 0; i < 32; i++)
		{
			Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 0);
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), coords.x, coords.y, coords.z, 1, 9999.0f, false, true, 0.0f);
		}

	}


	//void VehicleRamp(bool front, bool back, bool left, bool right)
	//{
	//	Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	//	Hash ramp = GAMEPLAY::GET_HASH_KEY("lts_prop_lts_ramp_01");

	//	if (ENTITY::DOES_ENTITY_EXIST(veh))
	//	{
	//		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(veh);

	//		if (front)
	//		{
	//			std::int32_t Object = OBJECT::CREATE_OBJECT(ramp, 0.f, 0.f, 0.f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1, 0);
	//			if (ENTITY::DOES_ENTITY_EXIST(Object))
	//			{
	//				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, veh, 0, 0, 5, 0.3f, 0, 0, 180, 0, 0, 0, 0, 2, 1);
	//				ENTITY::SET_ENTITY_COLLISION(Object, 1, 0);
	//			}
	//		}

	//		if (back)
	//		{
	//			std::int32_t Object = OBJECT::CREATE_OBJECT(ramp, 0.f, 0.f, 0.f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1, 0);
	//			if (ENTITY::DOES_ENTITY_EXIST(Object))
	//			{
	//				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, veh, 0, 0, -5, 0.3f, 0, 0, 360, 0, 0, 0, 0, 2, 1);
	//				ENTITY::SET_ENTITY_COLLISION(Object, 1, 0);
	//			}
	//		}

	//		if (left)
	//		{
	//			std::int32_t Object = OBJECT::CREATE_OBJECT(ramp, 0.f, 0.f, 0.f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1, 0);
	//			if (ENTITY::DOES_ENTITY_EXIST(Object))
	//			{
	//				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, veh, 0, -5, 0, 0.3f, 0, 0, -90, 0, 0, 0, 0, 2, 1);
	//				ENTITY::SET_ENTITY_COLLISION(Object, 1, 0);
	//			}
	//		}

	//		if (right)
	//		{
	//			std::int32_t Object = OBJECT::CREATE_OBJECT(ramp, 0.f, 0.f, 0.f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1, 0);
	//			if (ENTITY::DOES_ENTITY_EXIST(Object))
	//			{
	//				ENTITY::ATTACH_ENTITY_TO_ENTITY(Object, veh, 0, 5, 0, 0.3f, 0, 0, 90, 0, 0, 0, 0, 2, 1);
	//				ENTITY::SET_ENTITY_COLLISION(Object, 1, 0);
	//			}
	//		}

	//	}
	//}



	bool RPDrop = false;
	void rpdrop(bool toggle)
	{
		if (toggle)
		{
			int RP = 1025210927;
			if (!STREAMING::HAS_MODEL_LOADED(RP))
			{
				STREAMING::REQUEST_MODEL(RP);
			}
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true);
			pos.z = pos.z + 1;
			OBJECT::CREATE_AMBIENT_PICKUP(0x2C014CA6, pos.x, pos.y, pos.z, 0, 1, RP, 0, 1);
		}

	}


	bool FlyGun = false;
	void flygun(bool toggle)
	{
		if (toggle)
		{
			Vector3 impact;
			Vector3 test = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
			static Vector3 shotfly;
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY("GADGET_PARACHUTE"));
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &impact))
			{
				shotfly = impact;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				Vector3 entity_velocity;
				entity_velocity.x = (shotfly.x - test.x) * 3.0f;
				entity_velocity.y = (shotfly.y - test.y) * 3.0f;
				entity_velocity.z = (shotfly.z - test.z) * 3.0f;
				AI::TASK_SKY_DIVE(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID(), entity_velocity.x, entity_velocity.y, entity_velocity.z);

			}
			float distance = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(test.x, test.y, test.z, shotfly.x, shotfly.y, shotfly.z, 0);
			if (distance < 1.0f) {
				AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				AI::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			}
		}
	}




	bool WalkOnWater = false;
	void walkonwater(bool toggle)
	{
		if (toggle)
		{
			{
				Player player = PLAYER::PLAYER_ID();
				Ped playerPed = PLAYER::PLAYER_PED_ID();
				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(playerPed, 0);
				DWORD model = ENTITY::GET_ENTITY_MODEL(veh);
				Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, 0);
				float height = 0;
				WATER::_SET_CURRENT_INTENSITY(height);
				if ((!(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veh)))) && WATER::GET_WATER_HEIGHT_NO_WAVES(pos.x, pos.y, pos.z, &height))
				{
					Object container = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(pos.x, pos.y, pos.z, 4.0, GAMEPLAY::GET_HASH_KEY("prop_container_ld2"), 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(container) && height > -50.0f)
					{
						Vector3 pRot = ENTITY::GET_ENTITY_ROTATION(playerPed, 0);
						RequestControlOfEnt(container);
						ENTITY::SET_ENTITY_COORDS(container, pos.x, pos.y, height - 1.5f, 0, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(container, 0, 0, pRot.z, 0, 1);
						Vector3 containerCoords = ENTITY::GET_ENTITY_COORDS(container, 1);
						if (pos.z < containerCoords.z)
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
							{
								ENTITY::SET_ENTITY_COORDS(playerPed, pos.x, pos.y, containerCoords.z + 2.0f, 0, 0, 0, 1);
							}
							else
							{
								RequestControlOfEnt(veh);
								Vector3 vehc = ENTITY::GET_ENTITY_COORDS(veh, 1);
								ENTITY::SET_ENTITY_COORDS(veh, vehc.x, vehc.y, containerCoords.z + 2.0f, 0, 0, 0, 1);
							}
						}
					}
					else
					{
						Hash model = GAMEPLAY::GET_HASH_KEY("prop_container_ld2");
						STREAMING::REQUEST_MODEL(model);
						while (!STREAMING::HAS_MODEL_LOADED(model))WAIT(0);
						container = OBJECT::CREATE_OBJECT(model, pos.x, pos.y, pos.z, 1, 1, 0);
						RequestControlOfEnt(container);
						ENTITY::FREEZE_ENTITY_POSITION(container, 1);
						ENTITY::SET_ENTITY_ALPHA(container, 0, 1);
						ENTITY::SET_ENTITY_VISIBLE(container, false, 0);
					}
				}
				else
				{
					Object container = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(pos.x, pos.y, pos.z, 4.0, GAMEPLAY::GET_HASH_KEY("prop_container_ld2"), 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(container))
					{
						RequestControlOfEnt(container);
						ENTITY::SET_ENTITY_COORDS(container, 0, 0, -1000.0f, 0, 0, 0, 1);
						WAIT(10);
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&container);
						ENTITY::DELETE_ENTITY(&container);
						WATER::_RESET_CURRENT_INTENSITY();
					}
				}
			}
		}
	}

	bool FlyCar = false;
	void flycar(bool toggle)
	{
		if (toggle)
		{
			int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (veh)
			{
				if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(veh)) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(veh)))
				{
					if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, INPUT_VEH_FLY_THROTTLE_UP))
					{
						float Speed = ENTITY::GET_ENTITY_SPEED(veh) + 0.4;
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, Speed);
					}

					if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, INPUT_VEH_FLY_YAW_LEFT) && (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(veh)))
					{
						Vector3 Rot = ENTITY::GET_ENTITY_ROTATION(veh, 2);
						Rot.z = Rot.z + 1.0;
						ENTITY::SET_ENTITY_ROTATION(veh, Rot.x, Rot.y, Rot.z, 2, 1);
					}

					if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, INPUT_VEH_FLY_YAW_RIGHT) && (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(veh)))
					{
						Vector3 Rot = ENTITY::GET_ENTITY_ROTATION(veh, 2);
						Rot.z = Rot.z - 1.0;
						ENTITY::SET_ENTITY_ROTATION(veh, Rot.x, Rot.y, Rot.z, 2, 1);
					}
				}
			}
		}
	}

	bool SuperRun = false;
	void superrun(bool toggle)
	{
		if (toggle)
		{
			if (AI::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0.f, 1.5f, 0.f, 0.f, 0.f, 0.f, 1, true, true, true, false, true);
			}
		}
	}


	bool moneyToBank = true;
	int StelffAmount = 15000000;
	inline int TimePD34 = 0;

	bool StimulateCard = false;
	void stimulatecard(bool toggle)
	{
		if (toggle)
		{

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PROP_NIGHTCLUB_VALUE"), 1999000000, true);

			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_PROP_NIGHTCLUB_VALUE"), 1999000000, true);

			globalHandle(262145 + 1574918).As<int>() = 1999000000;
		}
	}


	//bool StimulateCard = false;
	//void stimulatecard(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		int jew = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1500000000, 2999999999);
	//		int ucbestsourceofcheats = 1000000000;
	//		NETSHOP::_0x86229EFB7FF6B4FC(&jew, 1474183246, 312105838, 1445302971, ucbestsourceofcheats, 4);
	//		NETSHOP::_NETWORK_SHOP_CHECKOUT_START(jew);
	//		NETSHOP::NETWORK_EARN_FROM_ROCKSTAR(ucbestsourceofcheats);

	//		int iVar0;
	//		char rockstaraward[30], totalearned[23];
	//		"MP0_MPPLY_TOTAL_EVC";
	//		sprintf(rockstaraward, "MP0_MONEY_EARN_ROCKSTAR_AWARD");
	//		sprintf(totalearned, "MP0_MPPLY_TOTAL_EARNED");
	//		STATS::STAT_GET_INT(CONSTEXPR_JOAAT("MP0_MONEY_EARN_ROCKSTAR_AWARD"), &iVar0, -1);
	//		STATS::STAT_SET_INT(CONSTEXPR_JOAAT("MP0_MONEY_EARN_ROCKSTAR_AWARD"), iVar0 + ucbestsourceofcheats, 1);
	//		STATS::STAT_GET_INT(CONSTEXPR_JOAAT("MP0_MPPLY_TOTAL_EARNED"), &iVar0, -1);
	//		STATS::STAT_SET_INT(CONSTEXPR_JOAAT("MP0_MPPLY_TOTAL_EARNED"), iVar0 + ucbestsourceofcheats, 1);
	//	}

	//}

	inline int t = 0;
	void stealthloop(bool enable)
	{
		if (enable) {
			int limith = 500000;

			if ((timeGetTime() - t) > 2000) {
				int randomidgen = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1000000000, 2999999999);
				NETSHOP::_0x86229EFB7FF6B4FC(&randomidgen, 1474183246, 215608230, 1445302971, limith, 7);
				if (NETSHOP::_NETWORK_SHOP_CHECKOUT_START(randomidgen)) {

					//set earned money
					/*g_Logger->Info("Risky");*/
					int earnedmoney;
					STATS::STAT_GET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), &earnedmoney, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PICK_UP_PARACHUTE", PLAYER::PLAYER_PED_ID(), "HUD_FRONTEND_CUSTOM_SOUNDSET", 0, 0);
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), (earnedmoney + limith), 1);
					t = timeGetTime();
				}
			}
		}
	}



	inline int t435 = 0;
	void recovery850k(bool enable)
	{
		if (enable) {
			int limith = 500000;

			if ((timeGetTime() - t435) > 7000)
			{
				int limith = 1000000;


				int randomidgen = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1000000000, 2999999999);
				NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&randomidgen, 1474183246, 215608230, 1445302971, limith, 7);
				if (NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(randomidgen)) {

					//set earned money

					int earnedmoney;
					STATS::STAT_GET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), &earnedmoney, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, (char*)"PICK_UP_PARACHUTE", PLAYER::PLAYER_PED_ID(), (char*)"HUD_FRONTEND_CUSTOM_SOUNDSET", 0, 0);
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), (earnedmoney + limith), 1);
				}


				t435 = timeGetTime();
			}
		}

	}






	bool StealthYES2 = false;
	void stealthyes2(bool toggle)
	{

			globalHandle(262145 + 29457).As<int>() = 200000;
			globalHandle(262145 + 29458).As<int>() = 200000;
			globalHandle(262145 + 29459).As<int>() = 200000;
			globalHandle(262145 + 29460).As<int>() = 200000;
		
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("ARCADE_PAY_TIME_LEFT"), -1, true);
		
			globalHandle(262145 + 29457).As<int>() = 100000;
			globalHandle(262145 + 29458).As<int>() = 5000;
			globalHandle(262145 + 29459).As<int>() = 200;
			globalHandle(262145 + 29460).As<int>() = 250;
		}
	


	bool StealthYES = false;
	void stealthyes(bool toggle)
	{
		if (toggle)
		{
			globalHandle(262145 + 24045).As<int>() = 300000;
			globalHandle(262145 + 24041).As<int>() = 300000;
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLUB_POPULARITY"), 10000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLUB_PAY_TIME_LEFT"), -1, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLUB_POPULARITY"), 100000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLUB_POPULARITY"), 10000, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLUB_PAY_TIME_LEFT"), -1, true);
			STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CLUB_POPULARITY"), 100000, true);


		}
	}


	//bool StealthYES1MIL = false;
	//void stealthyes1mil(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		globalHandle(4536533 + 1).As<int>() = 2147483646;
	//		globalHandle(4536533 + 7).As<int>() = 2147483647;
	//		globalHandle(4536533 + 6).As<int>() = 0;
	//		globalHandle(4536533 + 5).As<int>() = 0;
	//		globalHandle(4536533 + 3).As<int>() = 0x615762F1;
	//		globalHandle(4536533 + 2).As<int>() = 1000000;
	//		globalHandle(4536533).As<int>() = 2;




	//	}

	//}

	void trigger_transaction(Hash hash, int amount )
	{
		globalHandle(4536533 + 1).As<int>() = 2147483646;
		globalHandle(4536533 + 7).As<int>() = 2147483647;
		globalHandle(4536533 + 6).As<int>() = 0;
		globalHandle(4536533 + 5).As<int>() = 0;
		globalHandle(4536533 + 3).As<int>() = hash;
		globalHandle(4536533 + 2).As<int>() = amount;
		globalHandle(4536533).As<int>() = 2;



	}
	bool StealthYES1MIL = false;
	void stealthyes1mil(bool toggle)
	{
		if (toggle)
		{
			globalHandle(4536533 + 1).As<int>() = 2147483646;
			globalHandle(4536533 + 7).As<int>() = 2147483647;
			globalHandle(4536533 + 6).As<int>() = 0;
			globalHandle(4536533 + 5).As<int>() = 0;
			globalHandle(4536533 + 3).As<int>() = 0x615762F1;
			globalHandle(4536533 + 2).As<int>() = 1000000;
			globalHandle(4536533).As<int>() = 2;




		}

	}

	bool Mil40Loop = false;
	void mil40loop(bool toggle)
	{
		if (toggle)
		{
			trigger_transaction(0x176D9D54, 15000000);
				trigger_transaction(0xED97AFC1, 7000000);
				trigger_transaction(0xA174F633, 15000000);
				trigger_transaction(0x314FB8B0, 1000000);
				trigger_transaction(0x4B6A869C, 2000000);



		}

	}



	bool SuperRun2 = false;
	void superrun2(bool toggle)
	{
		if (toggle)
		{
			Ped ped = PLAYER::PLAYER_PED_ID();
			if (AI::IS_PED_RUNNING(ped) || AI::IS_PED_SPRINTING(ped)) {
				ENTITY::APPLY_FORCE_TO_ENTITY(ped, 1, 0.f, 1.5f, 0.f, 0.f, 0.f, 0.f, 1, true, true, true, false, true);


			}
		}
	}



	//bool vomit = false;
	//void vomit(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), true);
	//	}
	//}







	bool RandomOutfit = false;
	void randomoutfit(bool toggle)
	{
		if (toggle)
		{
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), true);
		}
	}

	bool NoClip = false;
	void noclip(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			if (GetAsyncKeyState(0x57) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 268)) { //w
				float fivef = 0.5f;
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				float xVec = fivef * sin((heading)) * -1.0f;
				float yVec = fivef * cos((heading));

				ENTITY::GET_ENTITY_HEADING(playerPed);
				pos.x -= xVec, pos.y -= yVec;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			}
			if (GetAsyncKeyState(0x53) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 269)) {  //s
				float fivef = 0.5f;
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				float xVec = fivef * sin(degToRad(heading)) * -1.0f;
				float yVec = fivef * cos(degToRad(heading));
				ENTITY::SET_ENTITY_HEADING(playerPed, heading);

				pos.x += xVec, pos.y += yVec;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			}
			if (GetAsyncKeyState(0x41) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 266)) {
				float fivef = 0.5f;
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);

				ENTITY::SET_ENTITY_HEADING(playerPed, heading + 1.0f);
			}
			if (GetAsyncKeyState(0x44) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 271)) {
				float fivef = 0.5f;
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);

				ENTITY::SET_ENTITY_HEADING(playerPed, heading - 1.0f);
			}
			if (GetAsyncKeyState(VK_SHIFT) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 206)) {
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				ENTITY::SET_ENTITY_HEADING(playerPed, heading);

				pos.z -= 0.1;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			}
			if (GetAsyncKeyState(VK_SPACE) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 205)) {
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				ENTITY::SET_ENTITY_HEADING(playerPed, heading);

				pos.z += 0.1;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			}
		}
	}

	bool SuperMan = false;
	void superman(bool toggle)
	{
		if (toggle)
		{
			if (GetAsyncKeyState(VK_SPACE))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0, 0, 10, 0, 0, 0, 1, true, true, true, true, true);
			}
			Hash hash = GAMEPLAY::GET_HASH_KEY("GADGET_PARACHUTE");
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), hash, 1, 1);

			if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				if (GetAsyncKeyState(0x57)) // W key
				{
					ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 3, 0, 0);
				}

				if (GetAsyncKeyState(0x53)) // S key
				{
					ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 3, 6, 0);
				}
				if (GetAsyncKeyState(VK_SHIFT))
				{
					ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
				}
			}
		}
	}




	 
	bool ExplosiveAmmo = false;
	void explosiveammo(bool toggle)
	{
		if (toggle)
		{
			Entity del_entity;
			if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &del_entity))

				if (ENTITY::DOES_ENTITY_EXIST(del_entity) && NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(del_entity))
				{
					Vector3 tmp = ENTITY::GET_ENTITY_COORDS(del_entity, 1);
					ENTITY::DETACH_ENTITY(del_entity, 1, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(del_entity, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(del_entity, 0, 1);
					ENTITY::DELETE_ENTITY(&del_entity);
				}
		}
	}

	bool MoneyGun = false;
	void moneygun(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();

			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING_IN_AREA)
			{
				Vector3 coords;
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPed, &coords))
				{
					STREAMING::REQUEST_MODEL(0x9CA6F755);
					if (!STREAMING::HAS_MODEL_LOADED(0x9CA6F755)) {
						WAIT(0);
					}
					else {

						OBJECT::CREATE_AMBIENT_PICKUP(0xDE78F17E, coords.x, coords.y, coords.z, 0, 2500, 0x9CA6F755, FALSE, TRUE);

						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(0x9CA6F755);
					}
				}

			}
		}
	}



	bool MoneyGun2 = false;
	void moneygun2(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();

			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING_IN_AREA)
			{
				Vector3 coords;
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPed, &coords))
				{
					STREAMING::REQUEST_MODEL(0x1A9736DA);
					if (!STREAMING::HAS_MODEL_LOADED(0x1A9736DA)) {
						WAIT(0);
					}

					else {

						OBJECT::CREATE_AMBIENT_PICKUP(0x2C014CA6, coords.x, coords.y, coords.z, 0, 0, 0x1A9736DA, FALSE, TRUE);

						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(0x1A9736DA);
					}
				}

			}
		}
	}





	bool MoneyGun3 = false;
	void moneygun3(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();

			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING_IN_AREA)
			{
				Vector3 coords;
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPed, &coords))
				{
					STREAMING::REQUEST_MODEL(0x1A126315);
					if (!STREAMING::HAS_MODEL_LOADED(0x1A126315)) {
						WAIT(0);
					}

					else {

						OBJECT::CREATE_AMBIENT_PICKUP(0x2C014CA6, coords.x, coords.y, coords.z, 0, 0, 0x1A126315, FALSE, TRUE);

						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(0x1A126315);
					}
				}

			}
		}
	}


	bool  PaintG = false;
	void paintg(bool toggle)
	{
		if (toggle)
		{
			Vector3 Coords;

			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &Coords))
			{
				positions.push_back(Coords);
			}

			for (auto pos : positions)
			{
				GRAPHICS::DRAW_LIGHT_WITH_RANGE(pos.x, pos.y, pos.z, g_RedPaint, g_GreenPaint, g_BluePaint, m_Range, m_Intensity);
			}
		}
	}


	int BoostAmmount = 150;
	bool HornBoost = false;
	void hornboost(bool toggle)
	{
		if (toggle)
		{
			if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
			{
				Vehicle Veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), false);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Veh);
		/*		GRAPHICS::_START_SCREEN_EFFECT("RaceTurbo", 0, 0);*/
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Veh))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Veh, BoostAmmount);
				}
			}
		}
	}


	bool StickyTires = false;
	void stickytires(bool toggle)
	{
		if (toggle)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
		}
	}

	bool BackHornBoost = false;
	void backhornboost(bool toggle)
	{
		if (toggle)
		{
			if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
			{
				int VehID = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(VehID, 1, 0, -10, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1);
			}
		}
	}

	//bool Exo= false;
	//void exo(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		float XPos = 0.02, YPos = 0.2, ZPos = 0.0, XOff = 90.0, YOff = -100.0, ZOff = 90.0;

	//		STREAMING::REQUEST_NAMED_PTFX_ASSET("core");
	//		GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL("core");
	//		
	//		{
	//			int ptfx = GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2("ent_sht_petrol", PLAYER::PLAYER_PED_ID(), XPos, YPos, ZPos,
	//				XOff, YOff, ZOff, SKEL_Head, 1, 1, 1, 1);
	//			
	//		}
	//		STREAMING::REMOVE_PTFX_ASSET();
	//		}
	//	}
	//}

		





	bool TeleportGun = false;
	void teleportgun(bool toggle)
	{
		if (toggle)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING_IN_AREA)
			{
				Vector3 mCoord;
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &mCoord))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), mCoord.x, mCoord.y, mCoord.z + 1, 0, 0, 1, 1);
				}
			}
			else
			{
				NULL;
			}
		}
	}

	bool AirstrikeGun = false;
	void airstrikegun(bool toggle)
	{
		if (toggle)
		{
			int playerPed = 0;
			Vector3 coords;
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &coords))
			{
				Hash airStrike = $("WEAPON_AIRSTRIKE_ROCKET");
				WEAPON::REQUEST_WEAPON_ASSET(airStrike, 31, false);
				while (!WEAPON::HAS_WEAPON_ASSET_LOADED(airStrike))
					WAIT(0);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords.x, coords.y, coords.z + 30.f, coords.x, coords.y, coords.z, 250, 1, airStrike, playerPed, 1, 0, 0xbf800000);
			}
		}
	}

	bool grav_target_locked = false;
	bool GravityGun = false;
	void gravitygun(bool toggle)
	{
		if (toggle)
		{
			Entity EntityTarget;
			DWORD equippedWeapon;
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &equippedWeapon, 1);
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();

			Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
			Vector3 dir = rot_to_direction(&rot);
			Vector3 camPosition = CAM::GET_GAMEPLAY_CAM_COORD();
			Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			float spawnDistance = get_distance(&camPosition, &playerPosition);
			spawnDistance += 6;
			Vector3 spawnPosition = add(&camPosition, &multiply(&dir, spawnDistance));


			Player tempPed = PLAYER::PLAYER_ID();

			if (grav_target_locked)
			{
				if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &EntityTarget) && GetAsyncKeyState(VK_RBUTTON))
				{
					Vector3 EntityTargetPos = ENTITY::GET_ENTITY_COORDS(EntityTarget, 0);
					PLAYER::DISABLE_PLAYER_FIRING(tempPed, true);
					if (ENTITY::IS_ENTITY_A_PED(EntityTarget) && PED::IS_PED_IN_ANY_VEHICLE(EntityTarget, 1))
					{
						EntityTarget = PED::GET_VEHICLE_PED_IS_IN(EntityTarget, 0);
					}

					RequestControlOfEnt(EntityTarget);

					if (ENTITY::IS_ENTITY_A_VEHICLE(EntityTarget))
						ENTITY::SET_ENTITY_HEADING(
							EntityTarget, ENTITY::GET_ENTITY_HEADING(tempPed));

					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(EntityTarget, spawnPosition.x, spawnPosition.y, spawnPosition.z, 0, 0, 0);

					if (GetAsyncKeyState(VK_LBUTTON))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Foot_Swish", EntityTarget, "docks_heist_finale_2a_sounds", 0, 0);
						ENTITY::SET_ENTITY_HEADING(EntityTarget, ENTITY::GET_ENTITY_HEADING(tempPed));
						ENTITY::APPLY_FORCE_TO_ENTITY(EntityTarget, 1, dir.x * 10000.0f, dir.y * 10000.0f, dir.z * 10000.0f, 0.0f, 0.0f,
							0.0f, 0, 0, 1, 1, 0, 1);
						grav_target_locked = false;
						PLAYER::DISABLE_PLAYER_FIRING(tempPed, false);
					}
				}
			}
			if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &EntityTarget))
			{
				grav_target_locked = true;
				PLAYER::DISABLE_PLAYER_FIRING(tempPed, false);
			}
		}
	}

	bool WaterGun = false;
	void watergun(bool toggle)
	{
		if (toggle)
		{
			Ped PedID = PLAYER::PLAYER_PED_ID();
			Vector3 pos;
			WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PedID, &pos);
			Ped player = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_PED_ID());
			FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, 13, 5.f, true, false, 0.f);

		}
	}

	bool PedGun = false;
	void pedgun(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();

			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING_IN_AREA)
			{
				Vector3 coords;
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPed, &coords))
				{
					PED::CREATE_RANDOM_PED(coords.x, coords.y, coords.z);
				}

			}
		}
	}


	Hash animals(int ID) {
		switch (ID) {
		case 0: return -832573324; ///boar
		case 1: return -1430839454; //chickienhawk
		case 2: return -1469565163; //chimp
		case 3: return 351016938; //chop
		case 4: return 1457690978; //Cormorant
		case 5: return -50684386; //cow
		case 6: return 1682622302; //coyote
		case 7: return 402729631; //crow
		case 8: return -664053099; //deer
		case 9: return 802685111; //fish
		case 10: return 1794449327; //Hen
		case 11: return 1318032802; //husky
		case 12: return 307287994; //Mountain lion
		case 13: return -1323586730; //pig
		case 14: return 111281960; //pigeon
		case 15: return 1125994524; //poodle
		case 16: return -1011537562; //rat
		case 17: return 882848737; //retriever
		case 18: return -1026527405; //Rhesus
		case 19: return -1788665315; //rottweiler
		case 20: return -745300483; //seagull
		case 21: return 1126154828; //sheppard
		}
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


	bool PedGun2 = false;
	void pedgun2 (bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();

			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING_IN_AREA)
			{
				Vector3 coords;
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(playerPed, &coords))
				{
					PED::SET_CREATE_RANDOM_COPS(coords.x);
				}

			}
		}
	}


	bool InfiniteAmmo = false;
	void infiniteammo(bool toggle)
	{
		{
			if (toggle)
			{
				WEAPON::SET_PED_INFINITE_AMMO_CLIP(PLAYER::PLAYER_PED_ID(), true);
			}
		}
	}

	bool OffRadar = false;
	void offradar(bool toggle)
	{
		if (toggle)
		{
			globalHandle(2421664).At(PLAYER::PLAYER_ID(), 358).At(203).As<int>() = 1;
			globalHandle(2433125).At(69).As<int>() = NETWORK::GET_NETWORK_TIME();
		}
	}
	

	bool CopsTurnBlindEye = false;
	void copsturnblindeye(bool toggle)
	{
		if (toggle)
		{
			globalHandle(2540384).At(4024).As<int>() = 5;
			globalHandle(2540384).At(4620).As<int>() = 1;
			globalHandle(2537071).At(4622).As<int>() = NETWORK::GET_NETWORK_TIME();
		}
	}


	bool KickProtec = false;
	void kickprotec(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
			globalHandle(1386431).At(591).As<int>() = 591; //SP kick
			globalHandle(1386431).At(708).As<int>() = 708; //Superkick XVIII
			globalHandle(1386431).At(609).As<int>() = 609; //Superkick XVII
			globalHandle(1386431).At(16).As<int>() = 16; //Superkick XVI
			globalHandle(1386431).At(24).As<int>() = 24; //Superkick XV
			globalHandle(1386431).At(23).As<int>() = 23; //Superkick XIV
			globalHandle(1386431).At(21).As<int>() = 21; //Superkick XIII
			globalHandle(1386431).At(608).As<int>() = 608; //Superkick XII
			globalHandle(1386431).At(589).As<int>() = 589; //Superkick XI
			globalHandle(1386431).At(606).As<int>() = 606; //Superkick X
			globalHandle(1386431).At(584).As<int>() = 584; //Superkick IX
			globalHandle(1386431).At(582).As<int>() = 582; //Superkick VIII
			globalHandle(1386431).At(539).As<int>() = 539; //Superkick VII
			globalHandle(1386431).At(703).As<int>() = 703; //Superkick VI
			globalHandle(1386431).At(462).As<int>() = 462; //Superkick V
			globalHandle(1386431).At(4
			
			
			
			
			
			).As<int>() = 456; //Superkick IV
			globalHandle(1386431).At(342).As<int>() = 342; //Superkick III
			globalHandle(1386431).At(300).As<int>() = 300; //Superkick II
			globalHandle(1386431).At(709).As<int>() = 709; //Superkick I
			globalHandle(1386431).At(615).As<int>() = 615; //SP kick
			globalHandle(1386431).At(616).As<int>() = 616; //kick
		}
	}

	bool UnlockAll = false;
	void unlockall(bool toggle)
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
	}


	bool Shower = false;
	void shower(bool toggle)
	{
		if (toggle)
		{
			Hash ast = GAMEPLAY::GET_HASH_KEY("prop_asteroid_01");
			GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Thunder");

			auto kek12 = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ast);
			auto kek13 = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ast);
			Vector3 kek = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true);
			{
				if (STREAMING::IS_MODEL_VALID(ast))
				{
					STREAMING::REQUEST_MODEL(ast);
					while (!STREAMING::HAS_MODEL_LOADED(ast)) WAIT(0);
					float ang = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 20.0f) * 3.14159265359f, kek12;
					float rad = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 20.0f) * 15.0f, kek13;
					float x = kek.x + rad * cos(ang);
					float y = kek.y + rad * sin(ang);
					Object Asteroid = OBJECT::CREATE_OBJECT(ast, x, y, 200.0f, 1, 1, 1);
					ENTITY::SET_ENTITY_COLLISION(Asteroid, 1, 1);
					ENTITY::APPLY_FORCE_TO_ENTITY(Asteroid, 1, 150.0f, 180.0f, 200.0f, 20.0f, 20.0f, 50.0f, 0, 0, 1, 1, 0, 1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ast);

			}
			return;
		}
	}




	int random(int min, int max)
	{
		static bool first = true;
		if (first)
		{
			srand(time(NULL));
			first = false;
		}
		return min + rand() % ((max + 1) - min);
	}


			bool CarColor = false;
			void carcolor(bool toggle)
			{
				if (toggle)
				{
					static Timer colorTimer(0ms);
					colorTimer.SetDelay(std::chrono::seconds(1));
					if (colorTimer.Update() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), FALSE))
					{
						VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), FALSE), random(0, 255), random(0, 255), random(0, 255));
						VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), FALSE), random(0, 255), random(0, 255), random(0, 255));
					}
				}
			}




		// OLD

	//bool CarColor = false;
	//void carcolor(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		int vehid = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	//		VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(vehid, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255));
	//		VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(vehid, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255));
	//	}
	//}

	static uintptr_t ModuleBaseAdress = (uintptr_t)GetModuleHandle(NULL);

	bool AimBot = false;
	void aimbot(bool toggle)
	{
		if (toggle)
		{
		}
	}

	bool NoGravity = false;
	void nogravity(bool toggle)
	{
		if (toggle)
		{
			GAMEPLAY::SET_GRAVITY_LEVEL(3);
		}
}

	bool ClownGun = false;
	void clowngun(bool toggle)
	{
		if (toggle)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING_IN_AREA)
			{
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcbarry2");
				while (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_rcbarry2")) WAIT(0);

				auto w = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID());
				Vector3 v0, v1;
				GAMEPLAY::GET_MODEL_DIMENSIONS(WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()), &v0, &v1);

			}
		}
	}



	bool Flameammo = false;
void flameammo(bool toggle)
{
	if (toggle)
	{
		{
		GAMEPLAY::SET_FIRE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
	}
	

bool ExplosiveMelee = false;
void explosivemelee(bool toggle)
{
	if (toggle)
	{
		Vector3 impact;
		Hash hash = GAMEPLAY::GET_HASH_KEY("GADGET_PARACHUTE");

		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), hash, 1, 1);
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &impact))
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 0, 0, 12);
					AI::SET_PARACHUTE_TASK_THRUST(PLAYER::PLAYER_PED_ID(), 12.f);
					AI::TASK_PARACHUTE_TO_TARGET(PLAYER::PLAYER_PED_ID(), impact.x, impact.y, impact.z);

					if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
					{
						ApplyForceToEntity(PLAYER::PLAYER_PED_ID(), 0, 12, 0);
					}
				}
			}
		}
	}
}


bool AFK = false;
void afk(bool toggle)
{
	if (toggle)
	{
		{
			globalHandle(0x40001).At(0x56).As<int>() = INT_MAX;
			globalHandle(0x40001).At(0x57).As<int>() = INT_MAX;
			globalHandle(0x40001).At(0x58).As<int>() = INT_MAX;
			globalHandle(0x40001).At(0x59).As<int>() = INT_MAX;
		}
	}
}





//bool FireworksGun = false;
//void fireworksgun(bool toggle)
//{
//	if (toggle)
//	{
//		float startDistance = distanceBetween(CAM::GET_GAMEPLAY_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
//		float endDistance = distanceBetween(CAM::GET_GAMEPLAY_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
//		startDistance += 0.25;
//		endDistance += 1000.0;
//		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
//		{
//			Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY("WEAPON_FIREWORK"); //WEAPON_FIREWORK
//			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
//			{
//				WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, false);
//			}
//
//		}
//	}
//}




Vector3 rotDirection(Vector3* rot)
{
	float radianz = rot->z * 0.0174532924f;
	float radianx = rot->x * 0.0174532924f;
	float num = std::abs((float)std::cos((double)radianx));

	Vector3 dir;

	dir.x = (float)((double)((float)(-(float)std::sin((double)radianz))) * (double)num);
	dir.y = (float)((double)((float)std::cos((double)radianz)) * (double)num);
	dir.z = (float)std::sin((double)radianx);

	return dir;
}

auto IsPedShooting2(std::int32_t p)
{
	return PED::GET_PED_CONFIG_FLAG(p, 58, TRUE);
}


	bool ExpGun = false;
	void expgun(bool toggle)
	{
		if (toggle)
		{
			if (IsPedShooting2(PLAYER::PLAYER_PED_ID()))
			{
				Vector3 Rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
				Vector3 Dir = rot_to_direction(&Rot);
				Vector3 CPosition = CAM::GET_GAMEPLAY_CAM_COORD();
				Vector3 PlayerPosition = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				float spawnDistance = get_distance(&CPosition, &PlayerPosition);
				spawnDistance += 2;
				Vector3 SPosition = add(&CPosition, &multiply(&Dir, spawnDistance));
				DWORD Model = $("prop_asteroid_01");
				Object ObJect = OBJECT::CREATE_OBJECT(Model, SPosition.x, SPosition.y, SPosition.z, 1, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Model);
				if (ENTITY::DOES_ENTITY_EXIST(ObJect))
				{
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(ObJect, true);
					for (float f = 0.0f; f < 75.0f; f++) {
						if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(ObJect))break;
						ENTITY::APPLY_FORCE_TO_ENTITY(ObJect, 1, Dir.x * 10.0f, Dir.y * 10.0f, Dir.z * 10.0f, 0.0f, 0.0f, 0.0f, 0, 0, 1, 1, 0, 1);
						WAIT(0);
					}
					Vector3 Coordinates = ENTITY::GET_ENTITY_COORDS(ObJect, 1);
					FIRE::ADD_EXPLOSION(Coordinates.x, Coordinates.y, Coordinates.z, 9, 25.0f, 1, 1, 0.5f);
				}
			}
		}
	}

	bool DriveOnWater = false;
	void driveonwater(bool toggle)
	{
		if (toggle)
		{
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			DWORD model = ENTITY::GET_ENTITY_MODEL(veh);
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, 0);
			float height = 0;
			WATER::_SET_CURRENT_INTENSITY(height);
			if ((!(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(veh)))) && WATER::GET_WATER_HEIGHT_NO_WAVES(pos.x, pos.y, pos.z, &height)) {
				Object container = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(pos.x, pos.y, pos.z, 4.0, GAMEPLAY::GET_HASH_KEY("prop_container_ld2"), 0, 0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(container) && height > -50.0f) {
					Vector3 pRot = ENTITY::GET_ENTITY_ROTATION(playerPed, 0);
					if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 1)) pRot = ENTITY::GET_ENTITY_ROTATION(veh, 0);
					RequestControlOfEnt(container);
					ENTITY::SET_ENTITY_COORDS(container, pos.x, pos.y, height - 1.5f, 0, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(container, 0, 0, pRot.z, 0, 1);
					Vector3 containerCoords = ENTITY::GET_ENTITY_COORDS(container, 1);
					if (pos.z < containerCoords.z) {
						if (!PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0)) {
							ENTITY::SET_ENTITY_COORDS(playerPed, pos.x, pos.y, containerCoords.z + 2.0f, 0, 0, 0, 1);
						}
						else {
							RequestControlOfEnt(veh);
							Vector3 vehc = ENTITY::GET_ENTITY_COORDS(veh, 1);
							ENTITY::SET_ENTITY_COORDS(veh, vehc.x, vehc.y, containerCoords.z + 2.0f, 0, 0, 0, 1);
						}
					}
				}
				else {
					Hash model = GAMEPLAY::GET_HASH_KEY("prop_container_ld2");
					STREAMING::REQUEST_MODEL(model);
					while (!STREAMING::HAS_MODEL_LOADED(model)) WAIT(0);
					container = OBJECT::CREATE_OBJECT(model, pos.x, pos.y, pos.z, 1, 1, 0);
					RequestControlOfEnt(container);
					ENTITY::FREEZE_ENTITY_POSITION(container, 1);
					ENTITY::SET_ENTITY_ALPHA(container, 0, 1);
					ENTITY::SET_ENTITY_VISIBLE(container, 0, 0);
				}
			}
			else {
				Object container = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(pos.x, pos.y, pos.z, 4.0, GAMEPLAY::GET_HASH_KEY("prop_container_ld2"), 0, 0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(container)) {
					RequestControlOfEnt(container);
					ENTITY::SET_ENTITY_COORDS(container, 0, 0, -1000.0f, 0, 0, 0, 1);
					WAIT(10);
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&container);
					ENTITY::DELETE_ENTITY(&container);
					WATER::_RESET_CURRENT_INTENSITY();
				}
			}
		}
	}










	bool VehicleJump = false;
	void vehiclejump(bool toggle)
	{
		if (toggle)
		
			{
				if (GetAsyncKeyState(VK_SPACE) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) {
					int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0 + ENTITY::GET_ENTITY_FORWARD_X(veh), 0 + ENTITY::GET_ENTITY_FORWARD_Y(veh), 7, 0, 0, 0, 1, 0, 1, 1, 1, 1);
				}
			}
		}



//	bool VehicleJump = false;
//	void vehiclejump(bool toggle)
//    {
//		if (toggle)
//		{
//			if (GetAsyncKeyState(VK_SPACE) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) {
//				Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
//				ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0 + ENTITY::GET_ENTITY_FORWARD_X(veh), 0 + ENTITY::GET_ENTITY_FORWARD_Y(veh), 7, 0, 0, 0, 1, 0, 1, 1, 1, 1);
//			}
//			else
//			{
//				NULL;
//			}
//		}
//}

	bool JumpingVehicles = false;
	void jumpingvehicles(bool toggle)
	{
		if (toggle)
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
						ENTITY::APPLY_FORCE_TO_ENTITY(vehs[OffsetID], 1, 0, 0, 20, 0, 0, 0, 1, false, true, true, true, true);
					}

				}
			}
		}
	}

	bool NoRagdoll = false;
	void noragdoll(bool toggle)
	{
		if (toggle)
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		}
	}

	bool ThermalVision = false;
	void thermalvision(bool toggle)
	{
		if (toggle)
		{
			GRAPHICS::SET_SEETHROUGH(true);
		}
		else
		{
			GRAPHICS::SET_SEETHROUGH(false);
		}
	}

	bool NightVision = false;
	void nightvision(bool toggle)
	{
		if (toggle)
		{
			GRAPHICS::SET_NIGHTVISION(true);
		}
		else
		{
			GRAPHICS::SET_NIGHTVISION(false);
		}
	}

	bool KillPeds = false;
	void killpeds(bool toggle)
	{
		if (toggle)
		{
			const int ElementAmount = 10;
			const int ArrSize = ElementAmount * 2 + 2;

			Ped* peds = new Ped[ArrSize];
			peds[0] = ElementAmount;

			int PedFound = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), peds, -1);

			for (int i = 0; i < PedFound; i++)
			{
				int OffsetID = i * 2 + 2;
				RequestControlOfEnt(peds[OffsetID]);
				if (ENTITY::DOES_ENTITY_EXIST(peds[OffsetID]) && PLAYER::PLAYER_PED_ID() != peds[OffsetID])
				{
					PED::APPLY_DAMAGE_TO_PED(peds[OffsetID], 1000, false);
				}
			}
		}
	}

	bool AutoFlip = false;
	void autoflip(bool toggle)
	{
		if (toggle)
		{
			auto veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			float roll = ENTITY::GET_ENTITY_ROLL(veh);
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(veh) && (roll > 160 || roll < -160))
			{
				Hash model = ENTITY::GET_ENTITY_MODEL(veh);
				if (!ENTITY::IS_ENTITY_IN_AIR(veh) && !ENTITY::IS_ENTITY_IN_WATER(veh) && !VEHICLE::IS_THIS_MODEL_A_PLANE(veh) && !VEHICLE::IS_THIS_MODEL_A_HELI(veh))
				{
					RequestControlOfEnt(veh);
					ENTITY::SET_ENTITY_ROTATION(veh, 0, 0, ENTITY::GET_ENTITY_ROTATION(veh, 2).z, 2, 1);

				}
			}
		}
	}

	bool AutoFix = false;
	void autofix(bool toggle)
	{
		if (toggle)
		{
			if (VEHICLE::_IS_VEHICLE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				VEHICLE::SET_VEHICLE_FIXED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
			}
		}
	}

	bool VehicleGodmode = false;
	void vehiclegodmode(bool toggle)
	{
		if (toggle)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
		}
	}

	bool DriftMode = false;
	void driftmode(bool toggle)
	{
		if (toggle)
		{
			if (GetAsyncKeyState(VK_LSHIFT))
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			else
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
		}
	}

	bool DestroyGun = false;
	void destroygun(bool toggle)
	{
		if (toggle)
		{
			Entity EntityTarget;
			if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &EntityTarget))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{

					if (ENTITY::IS_ENTITY_A_PED(EntityTarget)
						&& PED::IS_PED_IN_ANY_VEHICLE(EntityTarget, 1)) {
						EntityTarget = PED::GET_VEHICLE_PED_IS_IN(EntityTarget, 0);
					}
					VEHICLE::EXPLODE_VEHICLE(EntityTarget, true, false);
				}
			}
		}
	}

	bool PlayerFly = false;
	void playerfly(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(playerPed, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			if (GetAsyncKeyState(VK_KEY_S) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 268)) {
				float fivef = .5f;
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				float xVec = fivef * sin(degToRad(heading)) * -1.0f;
				float yVec = fivef * cos(degToRad(heading));
				ENTITY::SET_ENTITY_HEADING(playerPed, heading);

				pos.x -= xVec, pos.y -= yVec;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			}
			if (GetAsyncKeyState(VK_KEY_W) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 269)) {
				float fivef = .5f;
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				float xVec = fivef * sin(degToRad(heading)) * -1.0f;
				float yVec = fivef * cos(degToRad(heading));
				ENTITY::SET_ENTITY_HEADING(playerPed, heading);

				pos.x += xVec, pos.y += yVec;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			}
			if (GetAsyncKeyState(VK_KEY_A) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 266)) {
				float fivef = .5f;
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				ENTITY::SET_ENTITY_HEADING(playerPed, heading + 0.5f);
			}
			if (GetAsyncKeyState(VK_KEY_D) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 271)) {
				float fivef = .5f;
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				ENTITY::SET_ENTITY_HEADING(playerPed, heading - 0.5f);
			}
			if (GetAsyncKeyState(VK_SHIFT) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, ControlFrontendRb)) {
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				ENTITY::SET_ENTITY_HEADING(playerPed, heading);

				pos.z -= 0.5;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			}
			if (GetAsyncKeyState(VK_SPACE) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, ControlFrontendLb)) {
				float heading = ENTITY::GET_ENTITY_HEADING(playerPed);
				ENTITY::SET_ENTITY_HEADING(playerPed, heading);

				pos.z += 0.5;
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(playerPed, pos.x, pos.y, pos.z, false, false, false);
			}

		}
	}

	bool TinyGun = false;
	void tinygun(bool toggle)
	{
		if (toggle)
		{
			Entity EntityTarget;
			if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &EntityTarget) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) {
				if (ENTITY::IS_ENTITY_A_PED(EntityTarget) && EntityTarget != PLAYER::PLAYER_PED_ID()) {
					PED::SET_PED_CONFIG_FLAG(EntityTarget, 223, !PED::GET_PED_CONFIG_FLAG(EntityTarget, 223, true));
				}
			}
		}
	}




	//bool DiscordRPC = true;
	//void discordrpc(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		   
	//			DiscordEventHandlers handle;
	//			memset(&handle, 0, sizeof(handle));
	//			Discord_Initialize("1061458991638650920", &handle, 1, NULL);
	//			DiscordRichPresence discordPresence;
	//			memset(&discordPresence, 0, sizeof(discordPresence));
	//			char PlayerCountText[32];
	//			snprintf(PlayerCountText, sizeof(PlayerCountText), "Players: %d/32"/*, PlayerCount*/);
	//			discordPresence.state = PlayerCountText;
	//			discordPresence.details = "Scooby Best Free Menu (GTA 5 Online)";
	//			discordPresence.largeImageKey = "s";
	//			discordPresence.smallImageKey = "logo";
	//			std::time_t CurrentTime = std::time(0); discordPresence.startTimestamp = CurrentTime;
	//			Discord_UpdatePresence(&discordPresence);

	//		}

	//	}
	//

	bool ExplosiveAmmo3 = false;
	void explosiveammo3(bool toggle)
	{
		if (toggle)
		{
			{
				Memory::set_value<int>({ OFFSET_PLAYER, OFFSET_PLAYER_INFO, 0x1F8 }, 1 << 11);
			}
		}
	}
	




	//void BlamePlayer(int source)
	//{
	//	if (NETWORK::NETWORK_IS_IN_SESSION())
	//	{
	//		Hooking::owned_explossion_bypass(true);
	//		Player local = PLAYER::PLAYER_ID();
	//		Ped ped = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(source);
	//		for (int i = 0; i < 32; i++)
	//		{
	//			if (i != PLAYER::PLAYER_ID())
	//			{
	//				Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), 0);
	//				FIRE::ADD_OWNED_EXPLOSION(ped, coords, 29, 9999.0f, false, true, 0.0f);
	//			}
	//		}
	//		Hooking::owned_explossion_bypass(false);
	//	}
	//	
	//}


	bool Crash = false;
	void crash(bool toggle)
	{
		if (toggle)
		{

		}
	}

	bool InfLoad = false;
	void infload(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool BlockCayo = false;
	void blockcayo(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool Freeze = false;
	void freeze(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool ExplosionBlock = false;
	void explosionblock(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool FireBlock = false;
	void fireblock(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool WeaBlock = false;
	void weablock(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool WeaponBlock = false;
	void weaponblock(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool ReportBlock = false;
	void reportblock(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool apBlock = false;
	void apblock(bool toggle)
	{
		if (toggle)
		{
			//Hooking::defuseEvent(REMOTE_SCRIPT_LEAVE_EVENT, t);
			Hooking::defuseEvent(KICK_VOTES_EVENT, toggle);
			globalHandle(1386431).At(617).As<int>() = 617; //Non-Host kick
		}
	}

	bool GlitchVehicle = false;
	void glitchvehicle(bool toggle)
	{
		if (toggle)
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
			Vector3 Rot = ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 20);
			Rot.z = Rot.z + 20.0;
			ENTITY::SET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 0, Rot.z, 20, 10);
		}
	}

	bool DriveUnderWater = false;
	void driveunderwater(bool toggle)
	{
		if (toggle)
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), true, true, true);
		}
	}

	bool NinjaJump = false;
	void ninjajump(bool toggle)
	{
		static int flip;
		if (toggle)
		{
			GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
			if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					flip -= 10;
					ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), flip, 0, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0);
				}
			}
		}
	}

	bool FPS = false;
	void fps(bool toggle)
	{
		if (toggle)
		{
			float LastFrameTime = GAMEPLAY::GET_FRAME_TIME();
			int getFPS = (1.0f / LastFrameTime);
			char FPStext[60];
			snprintf(FPStext, sizeof(FPStext), "FPS: ~w~ %d", getFPS);
			setupdraw(true);
			UI::SET_TEXT_FONT(2);
			UI::SET_TEXT_SCALE(0.7f, 0.7f);
			UI::SET_TEXT_COLOUR(0, 255, 255, 255);
			UI::SET_TEXT_CENTRE(0);
			drawstring(FPStext, 0.010f, 0.010f);
		}
	}

	//bool Version = true;
	//const std::string szAlias = "JumpAroundMode";
	//void BgMusic(bool toggle)
	//{
	//	std::string szCommand;
	//	try
	//	{
	//		if (toggle)
	//		{
	//			szCommand = "open \"C:\\Scooby\\" + true + szAlias + ".mp3" + "\" type MPEGVideo" + " alias " + szAlias;
	//			mciSendStringA(szCommand.c_str(), NULL, 0, 0);

	//			szCommand = "play " + szAlias + " from 0 repeat";
	//			mciSendStringA(szCommand.c_str(), NULL, 0, 0);

	//			szCommand = "setaudio " + szAlias + " volume to 400";
	//			mciSendStringA(szCommand.c_str(), NULL, 0, 0);
	//		}
	//		else
	//		{
	//			szCommand = "stop " + szAlias;
	//			mciSendStringA(szCommand.c_str(), NULL, 0, 0);

	//			szCommand = "close " + szAlias;
	//			mciSendStringA(szCommand.c_str(), NULL, 0, 0);
	//		}
	//	}





	bool Version = true;
	void version(bool toggle)
	{
		if (toggle)
		{
			float LastFrameTime = GAMEPLAY::GET_FRAME_TIME();
			int getFPS = (1.0f / LastFrameTime);
			char FPStext[60];
			snprintf(FPStext, sizeof(FPStext), "~q~P-Ice ~w~| ~FPS %d", getFPS);
			setupdraw(true);
			UI::SET_TEXT_FONT(7);
			UI::SET_TEXT_SCALE(0.5f, 0.5f);
			UI::SET_TEXT_COLOUR(255, 255, 255, 255);
			UI::SET_TEXT_CENTRE(0.5);
			drawstring(FPStext, 0.020f, 0.010f);
		}
	}

	bool Gamev = false;
	void gamev(bool toggle)
	{
		if (toggle)
		{
			float LastFrameTime = GAMEPLAY::GET_FRAME_TIME();
			int getFPS = (1.0f / LastFrameTime);
			char FPStext[60];
			snprintf(FPStext, sizeof(FPStext), "~w~join ~b~discord.io~w~/~o~ScoobyMenu");
			setupdraw(true);
			UI::SET_TEXT_FONT(6);
			UI::SET_TEXT_SCALE(0.5f, 0.5f);
			UI::SET_TEXT_COLOUR(255, 255, 255, 255);
			UI::SET_TEXT_CENTRE(0);
			drawstring(FPStext, 0.020f, 0.040f);
		}
	}

	void setupdraw(bool outline)
	{
		UI::SET_TEXT_FONT(1);
		UI::SET_TEXT_SCALE(0.4f, 0.4f);
		UI::SET_TEXT_COLOUR(255, 255, 255, 255);
		UI::SET_TEXT_WRAP(0.0f, 1.0f);
		UI::SET_TEXT_CENTRE(0);
		UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
		UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
		if (outline)
		{
			UI::SET_TEXT_OUTLINE();
		}
	}

	void drawstring(char* text, float X, float Y)
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT((char*)"STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(X, Y);
	}

	bool SpectatePlayer = false;
	void spectateplayer(bool toggle)
	{
		if (toggle)
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(true, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(false, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
		}
	}

	bool Collision = false;
	void collision(bool toggle)

	{
		if (toggle)
		{
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, 0);
		}
	}

	bool DestroyPhone = false;
	void destroyphone(bool toggle)
	{
		if (toggle)
		{
			MOBILE::DESTROY_MOBILE_PHONE();
		}
	}

	bool MobileRadio = false;
	void mobileradio(bool toggle)
	{
		if (toggle)
		{
			AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
			AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(true);
		}
		else
		{
			AUDIO::SET_MOBILE_PHONE_RADIO_STATE(false);
			AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(false);
		}
	}

	bool HideHud = false;
	void hidehud(bool toggle)
	{
		if (toggle)
		{
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
	}

	bool ESPBox = false;
	void espbox(bool toggle)
	{
		if (toggle)
		{
			Player playerPed = PLAYER::PLAYER_PED_ID();
			for (int i = 0; i < 32; i++)
			{
				Player playerHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
				Vector3 handleCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerHandle, 0, 0, 0);
				char* Name = PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(i));

				if (ENTITY::DOES_ENTITY_EXIST(playerHandle))
				{
					GRAPHICS::DRAW_LINE(handleCoords.x + 0.5, handleCoords.y + 0.5, handleCoords.z + 0.75, handleCoords.x + 0.5, handleCoords.y - 0.5, handleCoords.z + 0.75, 80, 200, 80, 255); // top Box
					GRAPHICS::DRAW_LINE(handleCoords.x + 0.5, handleCoords.y - 0.5, handleCoords.z + 0.75, handleCoords.x - 0.5, handleCoords.y - 0.5, handleCoords.z + 0.75, 80, 200, 80, 255);
					GRAPHICS::DRAW_LINE(handleCoords.x - 0.5, handleCoords.y - 0.5, handleCoords.z + 0.75, handleCoords.x - 0.5, handleCoords.y + 0.5, handleCoords.z + 0.75, 80, 200, 80, 255);
					GRAPHICS::DRAW_LINE(handleCoords.x - 0.5, handleCoords.y + 0.5, handleCoords.z + 0.75, handleCoords.x + 0.5, handleCoords.y + 0.5, handleCoords.z + 0.75, 80, 200, 80, 255);

					GRAPHICS::DRAW_LINE(handleCoords.x + 0.5, handleCoords.y + 0.5, handleCoords.z - 0.75, handleCoords.x + 0.5, handleCoords.y - 0.5, handleCoords.z - 0.75, 80, 200, 80, 255); // bottom Box
					GRAPHICS::DRAW_LINE(handleCoords.x + 0.5, handleCoords.y - 0.5, handleCoords.z - 0.75, handleCoords.x - 0.5, handleCoords.y - 0.5, handleCoords.z - 0.75, 80, 200, 80, 255);
					GRAPHICS::DRAW_LINE(handleCoords.x - 0.5, handleCoords.y - 0.5, handleCoords.z - 0.75, handleCoords.x - 0.5, handleCoords.y + 0.5, handleCoords.z - 0.75, 80, 200, 80, 255);
					GRAPHICS::DRAW_LINE(handleCoords.x - 0.5, handleCoords.y + 0.5, handleCoords.z - 0.75, handleCoords.x + 0.5, handleCoords.y + 0.5, handleCoords.z - 0.75, 80, 200, 80, 255);

					GRAPHICS::DRAW_LINE(handleCoords.x + 0.5, handleCoords.y + 0.5, handleCoords.z - 0.75, handleCoords.x + 0.5, handleCoords.y + 0.5, handleCoords.z + 0.75, 80, 200, 80, 255); // bottom Box
					GRAPHICS::DRAW_LINE(handleCoords.x + 0.5, handleCoords.y - 0.5, handleCoords.z - 0.75, handleCoords.x + 0.5, handleCoords.y - 0.5, handleCoords.z + 0.75, 80, 200, 80, 255);
					GRAPHICS::DRAW_LINE(handleCoords.x - 0.5, handleCoords.y - 0.5, handleCoords.z - 0.75, handleCoords.x - 0.5, handleCoords.y - 0.5, handleCoords.z + 0.75, 80, 200, 80, 255);
					GRAPHICS::DRAW_LINE(handleCoords.x - 0.5, handleCoords.y + 0.5, handleCoords.z - 0.75, handleCoords.x - 0.5, handleCoords.y + 0.5, handleCoords.z + 0.75, 80, 200, 80, 255);
				}
			}
		}
	}

	bool ESPLine = false;
	void espline(bool toggle)
	{
		if (toggle)
		{
			Player playerPed = PLAYER::PLAYER_PED_ID();
			for (int i = 0; i < 32; i++)
			{
				Player playerHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
				Vector3 handleCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerHandle, 0, 0, 0);
				Vector3 locationOne = ENTITY::GET_ENTITY_COORDS(playerHandle, false);
				Vector3 locationTwo = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
				GRAPHICS::DRAW_LINE(locationOne.x, locationOne.y, locationOne.z, locationTwo.x, locationTwo.y, locationTwo.z, 255, 0, 0, 255);
			}
		}
	}

	bool SlowMotion = false;
	void slowmotion(bool toggle)
	{
		if (toggle)
		{
			GAMEPLAY::SET_TIME_SCALE(0.2);
		}
		else
		{
				GAMEPLAY::SET_TIME_SCALE(1);
		}
	}

	void Width()
	{
		Memory::set_value<float>({ 0x8, 0x0064 }, g_Width);
	}
	void Height()
	{
		Memory::set_value<float>({ 0x8, 0x88 }, g_Height);
	}
	void Alpha()
	{
		ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), g_Alpha, 0);
	}



	bool rotating = false;
	void Rotating(bool toggle)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			return;
		if (toggle)
		{
			float heading = ENTITY::_GET_ENTITY_PHYSICS_HEADING(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), heading + 5);
		}
	}




	void rainbowloop()
	{
		if (VEHr > 0 && VEHb == 0)
		{
			VEHr--;
			VEHg++;
		}
		if (VEHg > 0 && VEHr == 0)
		{
			VEHg--;
			VEHb++;
		}
		if (VEHb > 0 && VEHg == 0)
		{
			VEHr++;
			VEHb--;
		}
	}


	bool rainbowcar = false;
	void Rainbowcar(bool toggle)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			return;
		if (toggle)
		{
			rainbowloop();
			Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh,VEHr, VEHg, VEHb);
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veh, r1, g1, b1);

		}
	}





	void colour_spam()
	{
		r1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 250);
		g1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 250);
		b1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 250);

	}






	bool flashrainbow = false;
	void Flashrainbow(bool toggle)
	{
		if (toggle)
		{
			colour_spam();
			Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, r1, g1, b1);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veh, r1, g1, b1);
			}
		}
	}

	
	bool FootTrails = false;
	void foottrails(bool toggle)
	{
		if (toggle)
		{
			GRAPHICS::_SET_FORCE_PED_FOOTSTEPS_TRACKS(true);
		}
		else
		{
			GRAPHICS::_SET_FORCE_PED_FOOTSTEPS_TRACKS(false);
		}
	}

	bool VehicleTrails = false;
	void vehicletrails(bool toggle)
	{
		if (toggle)
		{
			GRAPHICS::_SET_FORCE_VEHICLE_TRAILS(true);
		}
		else
		{
			GRAPHICS::_SET_FORCE_VEHICLE_TRAILS(false);
		}
	}

	bool Flash = false;
	void flash(bool toggle)
	{
		if (toggle)
		{
			HandTrails = true;
			GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_PED_ID());
			GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
		//	GRAPHICS::SET_TIMECYCLE_MODIFIER("RaceTurboLight");
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49);
		}
		else
		{
			HandTrails = false;
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.00);
		}
	}


	bool HandTrails2 = false;
	void handtrails2(bool toggle)
	{
		if (toggle)
		{
			HandTrails = true;
			GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_PED_ID());
			GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
			//	GRAPHICS::SET_TIMECYCLE_MODIFIER("RaceTurboLight");
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49);
		}
		else
		{
			HandTrails = false;
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.00);
		}
	}

	bool AlwaysWanted = false;
	void alwayswanted(bool toggle)
	{
		Ped playerPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID());
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(playerPed, 5, true);
	}

	void vehicle_acrobatics(int type)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			switch (type)
			{
			case 0:
				ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, 0.f, 0.f, 7.0f, 0.f, 0.f, 0.f, 0, true, true, true, false, false); //bunny hop
				break;
			case 1:
				ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, 0.f, 0.f, 10.0f, -7.f, 0.f, 0.f, 0, true, true, true, false, false); //kickflip
				break;
			case 2:
				ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, 0.f, 0.f, 13.0f, 0.f, -6.f, 0.f, 0, true, true, true, false, false); //frontflip
				break;
			case 3:
				ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, 0.f, 0.f, 13.0f, 0.f, 6.f, 0.f, 0, true, true, true, false, false); //backflip
				break;
			}
		}
	}



	bool HandTrails = false;
	void handtrails(bool toggle)
	{
		if (toggle)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcpaparazzo1");
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_rcpaparazzo1");
			GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_mich4_firework_sparkle_spawn", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, SKEL_L_Hand, handscale, false, false, false);
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(handred / 255, handgreen / 255, handblue / 255);
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(handalpha / 255);

			STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_rcpaparazzo1");
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_rcpaparazzo1");
			GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_mich4_firework_sparkle_spawn", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, SKEL_R_Hand, handscale, false, false, false);
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(handred / 255, handgreen / 255, handblue / 255);
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(handalpha / 255);
		}
	}

	bool DesyncProtection = false;
	void desyncProtection(bool toggle)
	{
		if (toggle)
		{
			Entity me = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_PED_ID());
			int net = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(me);
			while (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(net))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(net);
			}
			NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(net, PLAYER::PLAYER_ID(), true);
		}
	}

	bool SpectatePlayer2 = false;
	void spectateplayer2(bool toggle)
	{
#define selectedPlayer g_SelectedPlayer
		Vector3 myCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
		Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer), 1);
		bool inside = INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer)));

		if (toggle)
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(true, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer));
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(false, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(selectedPlayer));
		}
	}




	//_CRTIMP2_PURE unsigned int __CLRCALL_PURE_OR_CDECL _Random_device();


	//class random_device { // class to generate random numbers (from hardware where available)
	//public:
	//	using result_type = unsigned int;

	//	random_device() {}

	//	explicit random_device(const string&) {}

	//	_NODISCARD static constexpr result_type(min)() {
	//		return 0;
	//	}

	//	_NODISCARD static constexpr result_type(max)() {
	//		return static_cast<result_type>(-1);
	//	}

	//	_NODISCARD double entropy() const noexcept {
	//		return 32.0;
	//	}

	//	_NODISCARD result_type operator()() {
	//		return _Random_device();
	//	}

	//	random_device(const random_device&) = delete;
	//	random_device& operator=(const random_device&) = delete;
	//};




	//void angry_planes::tick()
	//{
	//	initialize_variables(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0), -1275859404);
	//	spawn_planes();
	//}

	//void angry_planes::initialize_variables(Ped ped, Vector3 coords, uint32_t enemy_hash)
	//{
	//	this->player_ped = ped;
	//	this->player_coords = coords;
	//	this->enemy_hash = enemy_hash;

	//	if (this->player_ped)
	//		this->initialized = true;
	//}

	//Ped angry_planes::create_enemy(uint32_t hash, Vector3 coords)
	//{
	//	if (this->initialized)
	//	{
	//		if (STREAMING::IS_MODEL_VALID(hash) && STREAMING::IS_MODEL_IN_CDIMAGE(hash))
	//		{
	//			STREAMING::REQUEST_MODEL(hash);
	//			if (STREAMING::HAS_MODEL_LOADED(hash))
	//			{
	//				auto ped = PED::CREATE_PED(26, this->enemy_hash, coords.x, coords.y, coords.z, 0, TRUE, TRUE);
	//				PED::SET_PED_AS_ENEMY(ped, TRUE);
	//				PED::SET_PED_COMBAT_ATTRIBUTES(ped, 1, TRUE);
	//				PED::SET_PED_COMBAT_ATTRIBUTES(ped, 46, TRUE);
	//				PED::SET_PED_COMBAT_ATTRIBUTES(ped, 16, TRUE);
	//				PED::SET_PED_COMBAT_ABILITY(ped, 2);
	//				PED::SET_PED_FLEE_ATTRIBUTES(ped, 0, FALSE);

	//				return ped;
	//			}
	//			else
	//			{
	//				STREAMING::REQUEST_MODEL(hash);
	//			}
	//		}
	//	}

	//	return 0;
	//}

	//Vehicle angry_planes::spawn_plane(uint32_t hash)
	//{
	//	if (this->initialized)
	//	{
	//		if (STREAMING::IS_MODEL_VALID(hash) && STREAMING::IS_MODEL_IN_CDIMAGE(hash))
	//		{
	//			if (VEHICLE::IS_THIS_MODEL_A_PLANE(hash))
	//			{
	//				STREAMING::REQUEST_MODEL(hash);
	//				if (STREAMING::HAS_MODEL_LOADED(hash))
	//				{
	//					Vector3 coords;
	//					coords.x = this->player_coords.x + (-this->spawn_range, this->spawn_range);
	//					coords.y = this->player_coords.y + (-this->spawn_range, this->spawn_range);
	//					coords.z = this->player_coords.z + 150.f;

	//					if (auto enemy = this->create_enemy(this->enemy_hash, coords))
	//					{
	//						auto heading = ENTITY::GET_ENTITY_HEADING(this->player_ped);
	//						auto veh = VEHICLE::CREATE_VEHICLE(hash, coords.x, coords.y, coords.z, heading, TRUE, TRUE, 0);
	//						if (veh)
	//						{
	//							VEHICLE::SET_VEHICLE_ENGINE_ON(veh, TRUE, TRUE, FALSE);
	//							VEHICLE::_SET_VEHICLE_JET_ENGINE_ON(veh, TRUE);
	//							PED::SET_PED_INTO_VEHICLE(enemy, veh, -1);
	//							ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0, 10.5f, 0., 0, 0, 0, true, true, true, true, false, true);
	//							ENTITY::SET_ENTITY_HEADING(veh, 45.f);
	//							AI::TASK_PLANE_MISSION(enemy, veh,
	//								PED::IS_PED_IN_ANY_VEHICLE(this->player_ped, TRUE) ? PED::GET_VEHICLE_PED_IS_USING(this->player_ped) : 0, this->player_ped,
	//								this->player_coords.x, this->player_coords.y, this->player_coords.z,
	//								4, 20.f, -1, -1, 0, 100);

	//							if (g_AngryPlanesRockets)
	//							{
	//								AI::TASK_SHOOT_AT_ENTITY(enemy, this->player_ped, 2000, GAMEPLAY::GET_HASH_KEY("FIRING_PATTERN_FULL_AUTO"));
	//								AI::TASK_COMBAT_PED(enemy, this->player_ped, 0, 16);
	//							}

	//							plane str;
	//							str.ped = enemy;
	//							str.id = veh;
	//							this->m_spawned_planes.push_back(str);
	//						}

	//						return veh;
	//					}
	//				}
	//				else
	//				{
	//					STREAMING::REQUEST_MODEL(hash);
	//				}
	//			}
	//		}
	//	}

	//	return 0;
	//}

	//void angry_planes::check_for_alive_planes()
	//{
	//	int d = 0;

	//	for (auto i : this->m_spawned_planes)
	//	{
	//		if (!ENTITY::DOES_ENTITY_EXIST(i.ped) ||
	//			!ENTITY::DOES_ENTITY_EXIST(i.id) ||
	//			ENTITY::GET_ENTITY_HEALTH(i.ped) == 0 ||
	//			ENTITY::GET_ENTITY_HEALTH(i.id) == 0)
	//		{
	//			this->m_spawned_planes.erase(this->m_spawned_planes.begin() + d);
	//		}

	//		d++;
	//	}
	//}

	//void angry_planes::spawn_planes()
	//{
	//	this->check_for_alive_planes();

	//	if (m_spawned_planes.size() != this->max_planes_to_spawn)
	//	{
	//		auto rand = (0, (int)this->m_plane_hashes.size());
	//		this->spawn_plane(this->m_plane_hashes[rand]);
	//	}
	//}

	//void angry_planes::cleanup()
	//{
	//	for (auto& i : m_spawned_planes)
	//	{
	//		if (ENTITY::DOES_ENTITY_EXIST(i.ped))
	//		{
	//			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(i.ped);
	//			AI::CLEAR_PED_TASKS_IMMEDIATELY(i.ped);
	//			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(i.ped, 1, 1);
	//			ENTITY::DELETE_ENTITY(&i.ped);
	//		}
	//	}
	//	for (auto& i : m_spawned_planes)
	//	{
	//		if (ENTITY::DOES_ENTITY_EXIST(i.id))
	//		{
	//			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(i.id);
	//			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(i.id, 1, 1);
	//			ENTITY::DELETE_ENTITY(&i.id);
	//		}
	//	}
	//	m_spawned_planes.resize(0);
	//}










	//class angry_planes
	//{

	//public:

	//	void tick();
	//	void cleanup();

	//	float spawn_range = 400.f;
	//	Vector3 player_coords{};

	//	int max_planes_to_spawn = 15;

	//private:

	//	std::vector<uint32_t> m_plane_hashes
	//	{
	//		0x2F03547B,
	//		0x31F0B376,
	//		0x46699F47,
	//		0xAD6065C0,
	//		0x64DE07A1,
	//		0x39D6E83F,
	//		0xB39B0AE6,
	//		0x64DE07A1,
	//		0xC5DD6967
	//	};

	//	struct plane
	//	{
	//		int id;
	//		int ped;
	//	};

	//	std::vector<plane> m_spawned_planes{};
	//	Ped player_ped{};
	//	bool initialized{};
	//	uint32_t enemy_hash{};

	//	void initialize_variables(Ped ped, Vector3 coords, uint32_t enemy_hash);
	//	Ped create_enemy(uint32_t hash, Vector3 coords);
	//	
	// _plane(uint32_t hash);
	//	void check_for_alive_planes();
	//	void spawn_planes();
	//};

	//inline angry_planes g_angry_planes;




	//void pedinfo(std::int32_t player, bool show)
	//{

	//	if (!show) return;
	//	Hash Street[2]{};
	//	float RoundedDistance{};
	//	Ped PlayerPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(player);
	//	Vehicle Vehicle = PED::GET_VEHICLE_PED_IS_IN(PlayerPed, false);
	//	Vector3 PedCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
	//	Vector3 Coords = ENTITY::GET_ENTITY_COORDS(PlayerPed, false);
	//	Hash VehicleHash = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PlayerPed, 0));
	//	bool Connected = NETWORK::NETWORK_IS_SESSION_ACTIVE();
	//	bool InVehicle = PED::IS_PED_IN_ANY_VEHICLE(PlayerPed, true);
	//	PATHFIND::GET_STREET_NAME_AT_COORD(Coords.x, Coords.y, Coords.z, &Street[0], &Street[1]);
	//	const char* RID = "Nigga";
	//	int netHandle[13];
	//	NETWORK::NETWORK_HANDLE_FROM_PLAYER(player, netHandle, 13);

	//	if (yesyes2)
	//	{
	//		RID = "Private";
	//	}
	//	else
	//	{
	//		RID = NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&netHandle[0]);
	//	}

	//}





void MiscUpdateLoop()
{


	if (g_RGBLight)
	{
		if (g_LightRed > 0 && g_LightBlue == 0)
		{
			g_LightRed--;
			g_LightGreen++;
		}
		if (g_LightGreen > 0 && g_LightRed == 0)
		{
			g_LightGreen--;
			g_LightBlue++;
		}
		if (g_LightBlue > 0 && g_LightGreen == 0)
		{
			g_LightRed++;
			g_LightBlue--;
		}
	}


	if (g_EnableLight)
	{
		Vector3 me = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
		GRAPHICS::DRAW_LIGHT_WITH_RANGE(me.x, me.y, me.z - 2, g_LightRed, g_LightGreen, g_LightBlue, 999, g_LigtIntensity);
	}

}
	


//bool g_EnableLight = false;
//void g_enablelight(bool toggle)
//{
//
//	if (toggle)
//	{
//		Vector3 me = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
//		GRAPHICS::DRAW_LIGHT_WITH_RANGE(me.x, me.y, me.z - 2, g_LightRed, g_LightGreen, g_LightBlue, 999, g_LigtIntensity);
//	}
//
//}
//}





	bool FreezeP = false;
	void freezep(bool toggle)
	{
		if (toggle)
		{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer)))
		{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
			AI::CLEAR_PED_SECONDARY_TASK(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
			AI::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
		}
	}
	}





	//player (entity) offsets
#define OFFSET_PLAYER_ARMOR						0x14B8			//armour
#define OFFSET_PLAYER_INFO						0x10B8			//playerInfo struct
#define OFFSET_PLAYER_INFO_WANTED_CAN_CHANGE	0x71C			//fWantedCanChange
#define OFFSET_PLAYER_INFO_WANTED				0x7F8			//wanted level; DWORD
#define	OFFSET_PLAYER_INFO_RUN_SPD				0x14C			//run speed; def 1; float
#define OFFSET_PLAYER_INFO_SWIM_SPD				0x0148			//swim speed; def 1; float
#define OFFSET_PLAYER_INFO_FRAMEFLAGS			0x190			//frame flags; DWORD
#define OFFSET_PLAYER_INFO_STAMINA				0xC00			//fStamina, fStaminaMax
#define OFFSET_PLAYER_VEHICLE					0xD28			//ptr to last used vehicle
#define OFFSET_PLAYER_NAME						0x7C
#define OFFSET_PLAYER_RAGDOLL					0x10A8			//byte; CPed.noRagdoll: 0x20 = off; 0x00/0x01 = on
#define OFFSET_PLAYER_SEATBELT					0x13EC			//byte; CPed.seatBelt: 0xC8 = off; 0xC9 = on
#define OFFSET_PLAYER_INVEHICLE					0x146B



	//offset from WORLD
#define OFFSET_PLAYER					0x08			//playerbase


	bool Mod_Hub_Base::RPLoop = false;
	int Mod_Hub_Base::RPLoopDelay = 5;
	int Rptick2 = 0;
	int Rptick = 0;
	bool Wnoclip = false;
	void wnoclip(bool toggle)
	{
		if (toggle)
		{
			Rptick++;
			if (Rptick > Mod_Hub_Base::RPLoopDelay) {
				Memory::set_value<int>({ OFFSET_PLAYER, OFFSET_PLAYER_INFO, OFFSET_PLAYER_INFO_WANTED }, 5);
				Rptick2++;
				if (Rptick2 > Mod_Hub_Base::RPLoopDelay) {
					Memory::set_value<int>({ OFFSET_PLAYER, OFFSET_PLAYER_INFO, OFFSET_PLAYER_INFO_WANTED }, 0);
					Rptick = 0;
					Rptick2 = 0;
				}
			}
		}
		else
		{
			Memory::set_value<int>({ OFFSET_PLAYER, OFFSET_PLAYER_INFO, OFFSET_PLAYER_INFO_WANTED }, false);

			}
		}
	


	Vector3 addVector(Vector3 vector, Vector3 vector2)
	{
		vector.x += vector2.x;
		vector.y += vector2.y;
		vector.z += vector2.z;
		return vector;
	}



	Vector3 RotationToDirection(Vector3 rot)
	{
		double num = rot.z * 0.017453292519943295;
		double num2 = rot.x * 0.017453292519943295;
		double val = cos(num2);
		double num3 = abs(val);
		rot.x = (float)(-(float)sin(num) * num3);
		rot.y = (float)(cos(num) * num3);
		rot.z = (float)sin(num2);
		return rot;
	}

	bool IsPedShooting(Ped ped)
	{
		Vector3 coords = ENTITY::GET_ENTITY_COORDS(ped, true);
		return PED::IS_PED_SHOOTING_IN_AREA(ped, coords.x, coords.y, coords.z, coords.x, coords.y, coords.z, true, true);
	}

	Vector3 multiplyVector(Vector3 vector, float inc)
	{
		vector.x *= inc;
		vector.y *= inc;
		vector.z *= inc;
		return vector;
	}



















	
	bool CARGOPLANE = false;
	void cargoplane(bool toggle)
	{
		if (toggle)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::GET_PLAYER_PED(g_SelectedPlayer)))
			{
				Vector3 PlayerPos;
				WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::GET_PLAYER_PED(g_SelectedPlayer), &PlayerPos);
				int Hashs = GAMEPLAY::GET_HASH_KEY("CARGOPLANE");
				STREAMING::REQUEST_MODEL(Hashs);
				if (STREAMING::HAS_MODEL_LOADED(Hashs))
				{
					VEHICLE::CREATE_VEHICLE(Hashs, PlayerPos.x, PlayerPos.y, PlayerPos.z, 0.0f, 1, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Hashs);
				}
			}
		}

	}



	bool ShockWave = false;
	void shockwave(bool toggle)
	{
		if (toggle)
		{
			Player playerPed = PLAYER::PLAYER_PED_ID();
			if (!PED::IS_PED_IN_ANY_VEHICLE(playerPed, 1))
			{
				Vector3 gameplayCam = CAM::_GET_GAMEPLAY_CAM_COORDS();
				Vector3 gameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(0);
				Vector3 gameplayCamDirection = RotationToDirection(gameplayCamRot);
				Vector3 startCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 5.0f)));
				Vector3 endCoords = addVector(startCoords, multiplyVector(gameplayCamDirection, 1000.0f));
				Hash weaponhash = GAMEPLAY::GET_HASH_KEY("weapon_raypistol");
				if (IsPedShooting(playerPed))
				{
					WEAPON::REQUEST_WEAPON_ASSET(weaponhash, 31, 0);
					while (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponhash)) WAIT(1);
					GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(startCoords.x, startCoords.y, startCoords.z, endCoords.x, endCoords.y, endCoords.z, 250, 1, weaponhash, playerPed, 1, 0, 12500);
				}
			}
		}



	}




	bool RapidFire = false;
	void rapidfire(bool toggle)
	{
		if (toggle)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) {
				Vector3 gameplayCam = CAM::_GET_GAMEPLAY_CAM_COORDS();
				Vector3 gameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(0);
				Vector3 gameplayCamDirection = rot_to_direction(&gameplayCamRot);
				Vector3 startCoords = add(&gameplayCam, (&multiply(&gameplayCamDirection, 1.0f)));
				Vector3 endCoords = add(&startCoords, &multiply(&gameplayCamDirection, 500.0f));
				Hash weaponhash;
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponhash, 1);
				if (CONTROLS::IS_CONTROL_PRESSED(2, 208) || (GetKeyState(VK_LBUTTON) & 0x8000)) {
					GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(startCoords.x, startCoords.y, startCoords.z, endCoords.x, endCoords.y, endCoords.z, 50, 1, weaponhash, PLAYER::PLAYER_PED_ID(), 1, 1, 0xbf800000);
				}
			}
		}
	}


	void vehcrash()
	{

		Hash hash = -42959138;
		STREAMING::REQUEST_MODEL(hash);
		while (!STREAMING::HAS_MODEL_LOADED(hash))

			for (size_t i = 0; i < 3000; i++)
			{
				Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 1);
				Vehicle veh = VEHICLE::CREATE_VEHICLE(hash, coords.x, coords.y, coords.z, 0, true, false);

				//*(unsigned short*)g_pointers->m_model_spawn_bypass = 0x9090;
				//*(unsigned short*)g_pointers->m_model_spawn_bypass = 0x0574;

				//script::get_current()->yield();
				if (!ENTITY::DOES_ENTITY_EXIST(veh))
				{
					i = 3000;
					break;
				}
				VEHICLE::DELETE_VEHICLE(&veh);
			}

		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hash);

	}

	bool TPHotkey = false;
	void tphotkey(bool toggle)
	{
		if (toggle)
		{
			if (GetAsyncKeyState(VK_F6) & 1)
			{
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
		}
	}

	bool NoclipHotkey = false;
	void nocliphotkey(bool toggle)
	{
		if (toggle)
		{
			if (GetAsyncKeyState(VK_F7) & 1)
			{
				VEHICLE::SET_VEHICLE_FIXED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0.0f);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2000.0f);
				VEHICLE::SET_VEHICLE_BODY_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2000.0f);
			}
		}
	}


	int DropDelay = 500;
	int TimePD2;
	int DropAmount = 2500;
	int drop_ticker = GetTickCount();
	int DropHeight = 35;
	int Bags = 1;
	//self quick
	bool circleDrop = false;
	void circledrop(bool toggle)
	{
		if (toggle)
		{
			if ((timeGetTime() - TimePD2) > 350) // Time between drops
			{


				Ped iPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
				STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY("prop_poly_bag_money"));
				if (!STREAMING::HAS_MODEL_LOADED(GAMEPLAY::GET_HASH_KEY("prop_poly_bag_money")))
				{
					WAIT(0);
				}
				else
				{
					Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(iPed, FALSE);
					OBJECT::CREATE_AMBIENT_PICKUP(0xDE78F17E, playerPosition.x, playerPosition.y, playerPosition.z + 0.5f / 10, 0, 2500, GAMEPLAY::GET_HASH_KEY("prop_poly_bag_money"), FALSE, TRUE);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GAMEPLAY::GET_HASH_KEY("prop_poly_bag_money"));
				}

				TimePD2 = timeGetTime();

			}
		}
	}



	bool ShootVehicle = false;
	void shootveh(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			BOOL bPlayerExists = ENTITY::DOES_ENTITY_EXIST(playerPed);
			FLOAT heading = ENTITY::GET_ENTITY_HEADING(playerPed);
			DWORD model = GAMEPLAY::GET_HASH_KEY("ENTITYXF");
			Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
			Vector3 dir = RotationToDirection(rot);
			Vector3 camPosition = CAM::GET_GAMEPLAY_CAM_COORD();
			Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			float spawnDistance = get_distance(&camPosition, &playerPosition);
			spawnDistance += 5;
			Vector3 ourCoords = add(&camPosition, &multiply(&dir, spawnDistance));

			if (bPlayerExists)
			{
				if (PED::IS_PED_SHOOTING(playerPed))
				{
					Vector3 playerOffset = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerPed, 0, 5, 0);
					if (PED::IS_PED_ON_FOOT(playerPed))
					{
						Hooking::request_model(model);
						Vehicle veh = Hooking::create_vehicle(model, ourCoords, heading, true, false);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, 120.0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veh);


					}
				}
			}
		}
	}


	bool ShootVehicle2 = false;
	void shootveh2(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			BOOL bPlayerExists = ENTITY::DOES_ENTITY_EXIST(playerPed);
			FLOAT heading = ENTITY::GET_ENTITY_HEADING(playerPed);
			DWORD model = GAMEPLAY::GET_HASH_KEY("dune2");
			Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
			Vector3 dir = RotationToDirection(rot);
			Vector3 camPosition = CAM::GET_GAMEPLAY_CAM_COORD();
			Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
			float spawnDistance = get_distance(&camPosition, &playerPosition);
			spawnDistance += 5;
			Vector3 ourCoords = add(&camPosition, &multiply(&dir, spawnDistance));

			if (bPlayerExists)
			{
				if (PED::IS_PED_SHOOTING(playerPed))
				{
					Vector3 playerOffset = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerPed, 0, 5, 0);
					if (PED::IS_PED_ON_FOOT(playerPed))
					{
						Hooking::request_model(model);
						Vehicle veh = Hooking::create_vehicle(model, ourCoords, heading, true, false);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, 120.0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veh);


					}
				}
			}
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

	bool PlayerFlyingcar = false;
	void flyingcar(bool toggle)
	{
		if (toggle)
		{
			if (GetAsyncKeyState(VK_KEY_K))
			{
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 1.0f, 0, 2.0f, 0, true, true, true, true, false, true);
			}
			if (GetAsyncKeyState(VK_KEY_L))
			{
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 1.0f, -2.0f, 0, 0, true, true, true, true, false, true);
			}
			if (GetAsyncKeyState(VK_KEY_I))
			{
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 1.0f, 0, -2.0f, 0, true, true, true, true, false, true);
			}
			if (GetAsyncKeyState(VK_KEY_J))
			{
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, true, 0, 0, 1.0f, 2.0f, 0, 0, true, true, true, true, false, true);
			}
			if (GetAsyncKeyState(VK_SPACE))
			{
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0 + ENTITY::GET_ENTITY_FORWARD_X(veh), 0 + ENTITY::GET_ENTITY_FORWARD_Y(veh), 2, 0, 0, 0, 1, 0, 1, 1, 1, 1);
			}
			if (GetAsyncKeyState(VK_SHIFT))
			{
				int veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(veh, 1, 0 + ENTITY::GET_ENTITY_FORWARD_X(veh), 0 + ENTITY::GET_ENTITY_FORWARD_Y(veh), -2, 0, 0, 0, 1, 0, 1, 1, 1, 1);
			}
		}
	}

	Vector3 get_blip_marker()
	{
		static Vector3 zero;
		Vector3 coords;

		bool blipFound = false;
		// search for marker blip
		int blipIterator = UI::_GET_BLIP_INFO_ID_ITERATOR();
		for (Blip i = UI::GET_FIRST_BLIP_INFO_ID(blipIterator); UI::DOES_BLIP_EXIST(i) != 0; i = UI::GET_NEXT_BLIP_INFO_ID(blipIterator))
		{
			if (UI::GET_BLIP_INFO_ID_TYPE(i) == 4)
			{
				coords = UI::GET_BLIP_INFO_ID_COORD(i);
				blipFound = true;
				break;
			}
		}
		if (blipFound)
		{
			return coords;
		}

		return zero;
	}

	void teleport_to_marker()
	{
		Vector3 coords = get_blip_marker();

		if (coords.x == 0 && coords.y == 0)
		{
			notifyMap("No Waypoint has been set!", 0);
			return;
		}

		// get entity to teleport
		Entity e = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(e, 0))
		{
			e = PED::GET_VEHICLE_PED_IS_USING(e);
		}
	}

	bool McGun = false;
	void mgun(bool toggle)
	{
		if (toggle)
		{
			float Tmp[6];
			WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), (Vector3*)Tmp);
			if (Tmp[0] != 0 || Tmp[2] != 0 || Tmp[4] != 0) {
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::CREATE_OBJECT(4146332269, Tmp[0], Tmp[2], Tmp[4], 1, 1, 1), 1);
			}
		}
	}
	bool vomit = false;
	void vomit2(bool toggle)
	{
		if (toggle)
		{
			if ((timeGetTime() - TimePD2) > 200) // Time between drops
			{


				Ped iPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
				STREAMING::REQUEST_MODEL(GAMEPLAY::GET_HASH_KEY("vw_prop_vw_colle_prbubble"));
				if (!STREAMING::HAS_MODEL_LOADED(GAMEPLAY::GET_HASH_KEY("vw_prop_vw_colle_prbubble")))
				{
					WAIT(0);
				}
				else
				{
					Vector3 playerPosition = ENTITY::GET_ENTITY_COORDS(iPed, FALSE);
					OBJECT::CREATE_AMBIENT_PICKUP(0x2C014CA6, playerPosition.x, playerPosition.y, playerPosition.z + 10, 0, 10, $("vw_prop_vw_colle_prbubble"), FALSE, TRUE);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GAMEPLAY::GET_HASH_KEY("vw_prop_vw_colle_prbubble"));
				}

				TimePD2 = timeGetTime();

			}
		}
	}

	bool ExplosiveAmmo2 = false;
	void explosiveammo2(bool toggle)
	{
		if (toggle)
		{
			const uint32_t explosive_ammo_flag = 1 << 11;

			if (1) {
				uint32_t frame_flags = Memory::get_value<uint32_t>({ 0x08, 0x10C8, 0x218 });
				if ((frame_flags | explosive_ammo_flag) != frame_flags) {
					Memory::set_value<uint32_t>({ 0x08, 0x10C8, 0x218 }, frame_flags + explosive_ammo_flag);
				}
			}
		}

	}



	bool YoinkGun = false;
	void yoinkgun(bool toggle)
	{

		if (toggle)
		{
			Entity Target;
			Vehicle Car;
			if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &Car) && (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &Target)))
			{

				RequestControlOfEnt(Target);

				if (ENTITY::IS_ENTITY_A_PED(Target) && PED::IS_PED_IN_ANY_VEHICLE(Target, 1))
				{
					Car = PED::GET_VEHICLE_PED_IS_IN(Target, 0);
					if (PED::IS_PED_IN_VEHICLE(Target, Car, 1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Target, 1, 1);
						ENTITY::DELETE_ENTITY(&Target);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Target, -1);
					}
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Target, -1);
				}

			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Target, -1);
			}
		}

	}

	bool RainbowCamo = false;
	void rainbowcamo(bool toggle)
	{
		if (toggle)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			static LPCSTR weaponNames[] = {
				"WEAPON_KNIFE", "WEAPON_NIGHTSTICK", "WEAPON_HAMMER", "WEAPON_BAT", "WEAPON_GOLFCLUB", "WEAPON_CROWBAR",
				"WEAPON_PISTOL", "WEAPON_COMBATPISTOL", "WEAPON_APPISTOL", "WEAPON_PISTOL50", "WEAPON_MICROSMG", "WEAPON_SMG",
				"WEAPON_ASSAULTSMG", "WEAPON_ASSAULTRIFLE", "WEAPON_CARBINERIFLE", "WEAPON_ADVANCEDRIFLE", "WEAPON_MG",
				"WEAPON_COMBATMG", "WEAPON_PUMPSHOTGUN", "WEAPON_SAWNOFFSHOTGUN", "WEAPON_ASSAULTSHOTGUN", "WEAPON_BULLPUPSHOTGUN",
				"WEAPON_STUNGUN", "WEAPON_SNIPERRIFLE", "WEAPON_HEAVYSNIPER", "WEAPON_GRENADELAUNCHER", "WEAPON_GRENADELAUNCHER_SMOKE",
				"WEAPON_RPG", "WEAPON_MINIGUN", "WEAPON_GRENADE", "WEAPON_STICKYBOMB", "WEAPON_SMOKEGRENADE", "WEAPON_BZGAS",
				"WEAPON_MOLOTOV", "WEAPON_FIREEXTINGUISHER", "WEAPON_PETROLCAN", "WEAPON_SNSPISTOL", "WEAPON_SPECIALCARBINE",
				"WEAPON_HEAVYPISTOL", "WEAPON_BULLPUPRIFLE", "WEAPON_HOMINGLAUNCHER", "WEAPON_PROXMINE", "WEAPON_SNOWBALL",
				"WEAPON_VINTAGEPISTOL", "WEAPON_DAGGER", "WEAPON_FIREWORK", "WEAPON_MUSKET", "WEAPON_MARKSMANRIFLE", "WEAPON_HEAVYSHOTGUN",
				"WEAPON_GUSENBERG", "WEAPON_HATCHET", "WEAPON_RAILGUN", "WEAPON_FLAREGUN",
				"WEAPON_KNUCKLE", "GADGET_NIGHTVISION", "GADGET_PARACHUTE", "WEAPON_MARKSMANPISTOL"
			};
			for (int i = 0; i < sizeof(weaponNames) / sizeof(weaponNames[0]); i++)
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(playerPed, GAMEPLAY::GET_HASH_KEY((char*)weaponNames[i]), 0))
				{
					WEAPON::SET_PED_WEAPON_TINT_INDEX(playerPed, GAMEPLAY::GET_HASH_KEY((char*)weaponNames[i]), rand() % 8);
				}
			}
		}

	}

	bool LaserSight = false;
	void lasersight(bool toggle)
	{
		if (toggle)
		{
			auto camrot = CAM::GET_GAMEPLAY_CAM_ROT(0);
			auto camdir = rot_to_direction(&camrot);
			auto start = ENTITY::GET_ENTITY_COORDS(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID()), 1);

			auto end = add(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply(&camdir, 10.f));
			if (ENTITY::DOES_ENTITY_EXIST(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID())) && CONTROLS::IS_CONTROL_PRESSED(2, 25))
				GRAPHICS::DRAW_LINE(start.x, start.y, start.z, end.x, end.y, end.z, 255, 0, 0, 255);
		}
	}




	bool WaterLoop = false;
	void waterloop(bool toggle)
	{
		if (toggle)
		{
			Player selectedPlayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
			auto Pos = ENTITY::GET_ENTITY_COORDS(selectedPlayer, false);
			FIRE::ADD_EXPLOSION(Pos.x, Pos.y, Pos.z - 2, 13, 5, true, 0, 0);

		}
	}



	bool FireLoop = false;
	void fireloop(bool toggle)
	{
		if (toggle)
		{
			Player selectedPlayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
			auto Pos = ENTITY::GET_ENTITY_COORDS(selectedPlayer, false);
			FIRE::ADD_EXPLOSION(Pos.x, Pos.y, Pos.z - 2, 13, 5, true, 0, 0);

		}
	}




	bool DiscO = false;
	void disco (bool toggle)
	{
		if (toggle)
		{
			Vector3 cooords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
			GRAPHICS::DRAW_LIGHT_WITH_RANGE(cooords.x, cooords.y, cooords.z, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 255), 25.0f, 100.0f);
		}

	}






	bool AlwaysRagdoll = false;
	void alwaysragdoll(bool toggle)
	{
		if (toggle)
		{
			PED::SET_PED_RAGDOLL_ON_COLLISION(PLAYER::PLAYER_PED_ID(), true);
		}
		else
		{
			PED::SET_PED_RAGDOLL_ON_COLLISION(PLAYER::PLAYER_PED_ID(), false);
		}
	}

	//void Forcefield(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
	//		FIRE::ADD_EXPLOSION(pCoords.x + 1, pCoords.y + 1, pCoords.z, 7, 9.0f, false, true, 0.0f, true);
	//		FIRE::ADD_EXPLOSION(pCoords.x + 2, pCoords.y + 2, pCoords.z, 7, 9.0f, false, true, 0.0f, true);
	//		FIRE::ADD_EXPLOSION(pCoords.x + 3, pCoords.y + 3, pCoords.z, 7, 9.0f, false, true, 0.0f, true);
	//		FIRE::ADD_EXPLOSION(pCoords.x + 4, pCoords.y + 4, pCoords.z, 7, 9.0f, false, true, 0.0f, true);
	//		FIRE::ADD_EXPLOSION(pCoords.x + 5, pCoords.y + 5, pCoords.z, 7, 9.0f, false, true, 0.0f, true);
	//		FIRE::ADD_EXPLOSION(pCoords.x + 6, pCoords.y + 6, pCoords.z, 7, 9.0f, false, true, 0.0f, true);
	//		FIRE::ADD_EXPLOSION(pCoords.x + 7, pCoords.y + 7, pCoords.z, 7, 9.0f, false, true, 0.0f, true);

	//		auto ped = PLAYER::PLAYER_PED_ID();
	//		auto startDist = std::distance(&CAM::GET_GAMEPLAY_CAM_COORD(), &ENTITY::GET_ENTITY_COORDS(ped, true));
	//		auto pos = ENTITY::GET_ENTITY_COORDS(ped, false);

	//		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(ped, pos.x, pos.y, pos.z, true, true, true);

	//		if (GetAsyncKeyState(0x53) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 268)) //s
	//		{
	//			if (IsKeyPressed(VK_LSHIFT) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 21))
	//				startDist -= 3.0;
	//			if (IsKeyPressed(VK_SPACE) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 22))
	//				startDist += .5;

	//			Vector3 coords = add(ENTITY::GET_ENTITY_COORDS(ped, 1), &multiply(&rot_to_direction(CAM::GET_GAMEPLAY_CAM_ROT(0)), startDist));

	//			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(ped, coords.x, coords.y, coords.z, true, true, true);
	//		}
	//		if (GetAsyncKeyState(0x57) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 269)) //w
	//		{
	//			if (IsKeyPressed(VK_LSHIFT) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 21))
	//				startDist += 3.0;
	//			if (IsKeyPressed(VK_SPACE) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 22))
	//				startDist -= .5;

	//			startDist += 0.20;
	//			startDist += 1.f;
	//			Vector3 coords = add(ENTITY::GET_ENTITY_COORDS(ped, 1), &multiply(&rot_to_direction(CAM::GET_GAMEPLAY_CAM_ROT(0)), startDist));

	//			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(ped, coords.x, coords.y, coords.z, true, true, true);
	//		}
	//	}
	//}

	void proofs(bool bulletproof, bool fireproof, bool explosionproof, bool collisionproof, bool meleeproof, bool drownproof)
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bulletproof, fireproof, explosionproof, collisionproof, meleeproof, 0, 0, drownproof);
	}

	bool DeadEye = false;
	void deadeye(bool toggle)
	{
		if (toggle)
		{
			GAMEPLAY::SET_TIME_SCALE(0.6);
		}
		else
		{
			if (SlowMotion)
				GAMEPLAY::SET_TIME_SCALE(0.2);
			else
				GAMEPLAY::SET_TIME_SCALE(1);
		}
	}

	bool Spedometer = false;
	void spedometer(bool toggle)
	{
		if (toggle)
		{
			float speed = ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) * 3.9f;

			if (toggle)
				speed = speed * .621f;
			char msg[0xFF];
			if (toggle)
			{
				sprintf_s(msg, "%i", (int)speed);
			}
			else
			{
				sprintf_s(msg, "%i", (int)speed);
			}
			drawstring(msg, .50f, .05f);
			if (toggle)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), msg);
			}
		}
	}

	void SetPlayerVariation(int componentId, int drawableId, int textureId, int paletteId)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), componentId, drawableId, textureId, paletteId);
	}

	
	
	void ResetPedVariation()
	{
		for (int i = 0; i < 12; i++)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), i, 0, 0, 0);
		}
	}

	void RandomizePedVariation()
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 0);
	}

	void CreateOutfitFile()
	{

	}

	void LoadOutfitd(std::string name)
	{

	}

	//int TimeKeeperr;
	//int delayyy = 1000;

	//void stealth7mil (bool toggle)
	//{
	//	if (stealth7mil)
	//	{
	//		if ((timeGetTime() - TimeKeeperr) > delayyy)
	//		{
	//			Any var0 = rndInt(0, INT_MAX - 1);
	//			Any var3[2] = { 0xFFFFFFFFA174F633, 0xFFFFFFFFAEF994E9 };

	//			UNK3::_NETWORK_SHOP_BEGIN_SERVICE; var0, 1474183246, false ? var3[1] : var3[0], false ? 537254313 : 1445302971, 7000000, false ? 4 : 1;
	//			UNK3::_NETWORK_SHOP_CHECKOUT_START(var0);
	//		}
	//	}
	//}
	//




	void setPlayerLevel(int level)
	{
		//std::string com = CString::Format("%0_CHAR_SET_RP_GIFT_ADMIN", "MP0");
		//std::string notif = CString::Format(_T("Level set to: %0", level));

		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_SET_RP_GIFT_ADMIN"), Levels[level - 1], 0);
		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_SET_RP_GIFT_ADMIN"), Levels[level - 1], 0);

	}
	void setInstantLevel(int level)
	{
		//std::string com = CString::Format("%0_CHAR_SET_RP_GIFT_ADMIN", "MP0");
		//std::string notif = CString::Format(_T("Level set to: %0", level));

		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_XP_FM"), Levels[level - 1], 0);
		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP1_CHAR_XP_FM"), Levels[level - 1], 0);

	}

		void SetCrewLevel(int level)
	{
		//std::string com = CString::Format("%0_CHAR_SET_RP_GIFT_ADMIN", "MP0");
		//std::string notif = CString::Format(_T("Level set to: %0", level));

		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CURRENT_CREW_RANK"), Levels[level - 1], 0);
		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CURRENT_CREW_RANK"), Levels[level - 1], 0);

	}



	inline int ty = 0;
	void stealth7mil(bool enable)
	{
		if (enable) {
			int limith = 725000;

			if ((timeGetTime() - ty) > 1000) {
				int randomidgen = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1000000000, 2999999999);
				NETSHOP::_0x86229EFB7FF6B4FC(&randomidgen, 1474183246, 215608230, 1445302971, limith, 7);
				if (NETSHOP::_NETWORK_SHOP_CHECKOUT_START(randomidgen)) {

					int earnedmoney;
					STATS::STAT_GET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), &earnedmoney, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PICK_UP_PARACHUTE", PLAYER::PLAYER_PED_ID(), "HUD_FRONTEND_CUSTOM_SOUNDSET", 0, 0);
					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), (earnedmoney + limith), 1);
					ty = timeGetTime();
				}
			}
		}
	}




	void stealth7mil2(bool enable)
	{
		if (enable) {
			int limith = 50000;

			if ((timeGetTime() - ty) > 10) {
				int randomidgen = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1000000000, 2999999999);
				NETSHOP::_0x86229EFB7FF6B4FC(&randomidgen, 1474183246, 215608230, 1445302971, limith, 7);
				if (NETSHOP::_NETWORK_SHOP_CHECKOUT_START(randomidgen)) {

					int earnedmoney;
					STATS::STAT_GET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), &earnedmoney, true);

					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), (earnedmoney + limith), 1);
					ty = timeGetTime();
				}
			}
		}
	}



	void stealth7mil3(bool enable)
	{
		if (enable) {
			int limith = 125000;

			if ((timeGetTime() - ty) > 10) {
				int randomidgen = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1000000000, 2999999999);
				NETSHOP::_0x86229EFB7FF6B4FC(&randomidgen, 1474183246, 215608230, 1445302971, limith, 7);
				if (NETSHOP::_NETWORK_SHOP_CHECKOUT_START(randomidgen)) {

					int earnedmoney;
					STATS::STAT_GET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), &earnedmoney, true);

					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), (earnedmoney + limith), 1);
					ty = timeGetTime();
				}
			}
		}
	}



	void stealth7mil4(bool enable)
	{
		if (enable) {
			int limith = 250000;

			if ((timeGetTime() - ty) > 10) {
				int randomidgen = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1000000000, 2999999999);
				NETSHOP::_0x86229EFB7FF6B4FC(&randomidgen, 1474183246, 215608230, 1445302971, limith, 7);
				if (NETSHOP::_NETWORK_SHOP_CHECKOUT_START(randomidgen)) {

					int earnedmoney;
					STATS::STAT_GET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), &earnedmoney, true);

					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), (earnedmoney + limith), 1);
					ty = timeGetTime();
				}
			}
		}
	}


	void stealth7mil5(bool enable)
	{
		if (enable) {
			int limith = 380000;

			if ((timeGetTime() - ty) > 15) {
				int randomidgen = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1000000000, 2999999999);
				NETSHOP::_0x86229EFB7FF6B4FC(&randomidgen, 1474183246, 215608230, 1445302971, limith, 7);
				if (NETSHOP::_NETWORK_SHOP_CHECKOUT_START(randomidgen)) {

					int earnedmoney;
					STATS::STAT_GET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), &earnedmoney, true);

					STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_TOTAL_EVC"), (earnedmoney + limith), 1);
					ty = timeGetTime();
				}
			}
		}
	}
	
	//void Crosshair()
	//{
	//	auto io = ImGui::GetIO();
	//	ImGui::SetNextWindowSize(ImVec2(100, 100), ImGuiCond_Always);
	//	ImGui::SetNextWindowPos(ImVec2(io.DisplaySize.x * 0.5f, io.DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
	//	ImGui::Begin("###cross", NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoBackground);
	//	switch (_CrossStyle)
	//	{
	//	case 0:
	//		ImGui::GetCurrentWindow()->DrawList->AddLine(ImVec2(io.DisplaySize.x * 0.5f - crosssize, io.DisplaySize.y * 0.5f), ImVec2(io.DisplaySize.x * 0.5f + crosssize, io.DisplaySize.y * 0.5f), ImGui::GetColorU32(ImVec4(redcross / 255.f, greencross / 255.f, bluecross / 255.f, 1.f)));
	//		ImGui::GetCurrentWindow()->DrawList->AddLine(ImVec2(io.DisplaySize.x * 0.5f, io.DisplaySize.y * 0.5f - crosssize), ImVec2(io.DisplaySize.x * 0.5f, io.DisplaySize.y * 0.5f + crosssize), ImGui::GetColorU32(ImVec4(redcross / 255.f, greencross / 255.f, bluecross / 255.f, 1.f)));
	//		break;
	//	case 1:
	//		ImGui::GetCurrentWindow()->DrawList->AddLine(ImVec2(io.DisplaySize.x * 0.5f - crosssize, io.DisplaySize.y * 0.5f + crosssize), ImVec2(io.DisplaySize.x * 0.5f + crosssize, io.DisplaySize.y * 0.5f - crosssize), ImGui::GetColorU32(ImVec4(redcross / 255.f, greencross / 255.f, bluecross / 255.f, 1.f)));
	//		ImGui::GetCurrentWindow()->DrawList->AddLine(ImVec2(io.DisplaySize.x * 0.5f + crosssize, io.DisplaySize.y * 0.5f + crosssize), ImVec2(io.DisplaySize.x * 0.5f - crosssize, io.DisplaySize.y * 0.5f - crosssize), ImGui::GetColorU32(ImVec4(redcross / 255.f, greencross / 255.f, bluecross / 255.f, 1.f)));
	//		break;
	//	}
	//	ImGui::End();
	//}





	//--------------- need callback script

	/*void EnityGunVehicle(bool toggle, const char* SelectedVehicle, float SpawnDistance, float LaunchSpeed)
	{
		if (toggle)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				DWORD model = GAMEPLAY::GET_HASH_KEY(SelectedVehicle);
				Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
				Vector3 dir = g_Utility->RotationToDirectionV3(rot);
				Vector3 CamPosition = CAM::GET_GAMEPLAY_CAM_COORD();
				Vector3 PlayerPosition = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
				float spawnDistance = g_Utility->GetDistanceFloat(CamPosition, PlayerPosition);
				spawnDistance += SpawnDistance;
				Vector3 spawnPosition = g_Utility->AddV3(CamPosition, g_Utility->MultiplyV3(dir, spawnDistance));

				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						Vector3 playerOffset = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0, 5, 0);
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
						{
							STREAMING::REQUEST_MODEL(model);
							
								Vehicle veh = VEHICLE::CREATE_VEHICLE(model, spawnPosition.x, spawnPosition.y, spawnPosition.z, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), NETWORK::NETWORK_IS_IN_SESSION(), 1, 0);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, LaunchSpeed);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veh);
								});
						}
					}
				}
			}
		}
	}*/

	
	void AttachMents()
	{
		switch (_wepattach)
		{
		case 0:
			for (int z = 0; z < sizeof(AllWeapons) / sizeof(AllWeapons[0]); z++)
				for (int i = 0; i < sizeof(AllAttachments) / sizeof(AllAttachments[0]); i++)
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY((char*)AllWeapons[z]), GAMEPLAY::GET_HASH_KEY((char*)AllAttachments[i]));
			for (int c = 0; c < sizeof(AllWeapons) / sizeof(AllWeapons[0]); c++)
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY((char*)AllWeapons[c]), 9999);
			break;
		case 1:
			for (int z = 0; z < sizeof(AllWeapons) / sizeof(AllWeapons[0]); z++)
				for (int i = 0; i < sizeof(AllAttachments) / sizeof(AllAttachments[0]); i++)
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY((char*)AllWeapons[z]), GAMEPLAY::GET_HASH_KEY((char*)AllAttachments[i]));
			for (int c = 0; c < sizeof(AllWeapons) / sizeof(AllWeapons[0]); c++)
				WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HASH_KEY((char*)AllWeapons[c]), 9999);

		}
	}

	////void ExplosiveAmmoFunction(bool toggle)
	////{
	////	if (toggle)
	////	{
	////		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	////		{
	////			Vector3 coords;
	////			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &coords))
	////			{
	////				FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, m_Explosion_Iterator, m_Damage, m_Audiable, m_Invisible, m_CameraShake, m_DamageDisable);
	////				FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), coords.x, coords.y, coords.z, m_Explosion_Iterator, m_Damage, m_Audiable, m_Invisible, m_CameraShake);
	////			}
	////		}
	//	}
	//}

	static void ApplyForce(Entity entity, int forceType, float x, float y, float z, float xRot, float yRot, float zRot, int p8, BOOL isRel, BOOL p10, BOOL highForce, BOOL p12, BOOL p13) { invoke<Void>(0xC5F68BE9613E2D18, entity, forceType, x, y, z, xRot, yRot, zRot, p8, isRel, p10, highForce, p12, p13); } // 0xC5F68BE9613E2D18 0xC1C0855A


	const char* nameo;
	char* call1o;
	DWORD featureWeaponVehShootLastTime = 0;
	char* call2o;
	Ped PTLoopPed;
	const char* ptfxc1o;


	void PTFXCALLO2(char* call1, char* call2, char* name, Player target) {
		Ped user = PLAYER::GET_PLAYER_PED(target);
		call1o = call1; call2o = call2;
		nameo = name; PTLoopPed = user;
		GRAPHICS::REQUEST_NAMED_PTFX_ASSET(call1);
		GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL(call2);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(name, user, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 3.0, false, false, false);

	}


	void PTFXCALLO(char* call1, char* call2, char* name, Player target)
	{
		Ped user = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target);
		call1o = call1;
		call2o = call2;
		nameo = name;
		PTLoopPed = user;
		GRAPHICS::REQUEST_NAMED_PTFX_ASSET(call1);
		GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL(call2);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(name, user, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);

	}

	bool EletricRun = false;
	void eletricrun(bool toggle)
	{
		if (toggle)
		{
			Ped ped = PLAYER::PLAYER_PED_ID();
			if (AI::IS_PED_SPRINTING(ped)) {
				GAMEPLAY::_START_SCREEN_EFFECT((char*)"RaceTurbo", 0, 0);
				PTFXCALLO2((char*)"core", (char*)"core", (char*)"ent_dst_elec_fire_sp", PLAYER::PLAYER_ID());
				PTFXCALLO((char*)"core", (char*)"core", (char*)"ent_dst_elec_fire_sp", PLAYER::PLAYER_ID());
				ApplyForce(ped, 1, 0.f, 1.5f, 0.f, 0.f, 0.f, 0.f, 1, true, true, true, false, true);
			}
		}

	}

	int r = 255, g = 0, b = 0;
	void RGBFade()
	{
		if (r > 0 && b == 0) {
			r--;
			g++;
		}
		if (g > 0 && r == 0) {
			g--;
			b++;
		}
		if (b > 0 && g == 0) {
			r++;
			b--;
		}
	}


	bool RainbowNeons = false;
	void rainbowneons(bool enable)
	{
		if (enable)
		{
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			if (enable)
			{
				RGBFade();
				Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
				DWORD model = ENTITY::GET_ENTITY_MODEL(veh);

				if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
				{
					if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(veh, 0) && VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(veh, 1) && VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(veh, 2) && VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(veh, 3))
					{
						VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(veh, r, g, b);
					}
					else
					{
						VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 0, 1);
						VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 1, 1);
						VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 2, 1);
						VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(veh, 3, 1);
						VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(veh, r, g, b);
					}
				}
			}
		}
	}
	bool RainbowTireSmoke = false;
	void rainbowtiresmoke(bool enable)
	{
		if (enable)
		{
			if (enable)
			{
				RGBFade();
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
					VEHICLE::TOGGLE_VEHICLE_MOD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 20, 1);
					VEHICLE::SET_VEHICLE_MOD_KIT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
					VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), r, g, b);
				}
			}
		}
	}

	bool RainbowCar22 = false;
	void rainbowcar22(bool enable)
	{
		if (enable)
		{
			RGBFade();
			Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());

			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veh, r, g, b);
				VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veh, r, g, b);

			}
		}
	}
	bool RainbowMods = false;
	void rainbowmods(bool enable)
	{
		if (enable)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0);
			for (int i = 0; i < 50; i++)
			{
				VEHICLE::SET_VEHICLE_MOD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), i, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUM_VEHICLE_MODS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), i)), false);
			}
		}
	}


	int r2 = 255, g22 = 0, b22 = 0;
	void RGBFade22()
	{
		if (r2 > 0 && b22 == 0) {
			r2--;
			g22++;
		}
		if (g22 > 0 && r2 == 0) {
			g22--;
			b22++;
		}
		if (b22 > 0 && g22 == 0) {
			r2++;
			b22--;
		}
	}

	bool RainbowVW = false;
	void rainbowvw(bool toggle)
	{
		if (toggle)
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
					RGBFade22();
					VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(vehs[OffsetID], r2, g22, b22);
					VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(vehs[OffsetID], r2, g22, b22);
				}
			}
			delete vehs;
		}
	}
	

	//bool FireLoop = false;
	//void fireloop(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
	//		Vector3 pos = ENTITY::GET_ENTITY_COORDS((g_SelectedPlayer), true);
	//		FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, 12, 5.f, true, false, 0.f);



	//	}
	//}

	//bool WaterLoop = false;
	//void waterloop(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
	//		Vector3 pos = ENTITY::GET_ENTITY_COORDS((g_SelectedPlayer), true);
	//		FIRE::ADD_EXPLOSION(pos.x, pos.y, pos.z, 13, 5.f, true, false, 0.f);


	//	}

	//}


	bool OffTheRadar = false;
	void offtheradar(bool toggle)
	{
		if (toggle)
		{
			globalHandle(GLOBAL_OFFRADAR[0]).At(1 + PLAYER::PLAYER_ID() * GLOBAL_OFFRADAR[1]).At(GLOBAL_OFFRADAR[2]).As<bool>() = true;
			globalHandle(GLOBAL_NETWORK_STOPWATCH[0]).At(GLOBAL_NETWORK_STOPWATCH[1]).As<int>() = NETWORK::GET_NETWORK_TIME();
		}
	}

	float right = 0;


	bool SpinBot = false;
	void spinbot(bool toggle)
	{
		if (toggle)
		{
			int PlayerPedID = PLAYER::PLAYER_PED_ID();
			ENTITY::SET_ENTITY_HEADING(PlayerPedID, ++right + right++ + right++ + right++ + right++ + right++);
		}
	}



	bool PlayerNames = false;
	void playernames(bool toggle)
	{
		if (toggle)
		{
			Player playerPed = PLAYER::PLAYER_PED_ID();
			for (int i = 0; i < 32; i++)
			{
				Player playerHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
				Vector3 handleCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playerHandle, 0, 0, 0);
				Vector3 playerCoords = ENTITY::GET_ENTITY_COORDS(playerPed, 0);
				char* Name = PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(i));

				if (ENTITY::DOES_ENTITY_EXIST(playerHandle))
				{
					float x1;
					float y1;

					BOOL screenCoords = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(handleCoords.x, handleCoords.y, handleCoords.z, &x1, &y1);

					std::string playerName = PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(i));

					std::string nameSetupRed = "~HUD_COLOUR_RED~" + playerName;
					std::string nameSetupGreen = "~HUD_COLOUR_GREEN~" + playerName;

					char* playerInfoRed = new char[nameSetupRed.length() + 1];
					char* playerInfoGreen = new char[nameSetupGreen.length() + 1];

					std::strcpy(playerInfoRed, nameSetupRed.c_str());
					std::strcpy(playerInfoGreen, nameSetupGreen.c_str());

					UI::SET_TEXT_FONT(7);
					UI::SET_TEXT_SCALE(0.0, 0.40);
					UI::SET_TEXT_CENTRE(0);
					UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
					UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(playerPed, playerHandle, 17))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(playerInfoGreen);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(playerInfoRed);
					}
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(x1, y1);
					UI::SET_TEXT_OUTLINE();
					UI::SET_TEXT_DROPSHADOW(5, 0, 78, 255, 255);

				}
				else
				{
					NULL;
				}
			}
		}
	}








	char* SoundToPlay;
	char* SoundSetToPlay;
	bool PlaySounds;
	void ForceExplodeWave()
	{
		const int numElements = 10;
		const int arrSize = numElements * 2 + 2;
		Vehicle veh[arrSize];
		veh[0] = numElements;
		int count = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), veh);
		if (veh != NULL)
		{
			for (int i = 1; i <= count; i++)
			{
				int offsettedID = i;
				if (veh[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(veh[offsettedID]))
				{
					Vector3 Pos = ENTITY::GET_ENTITY_COORDS(veh[offsettedID], true);
					FIRE::ADD_EXPLOSION(Pos.x, Pos.y, Pos.z, 29, 0.5f, true, true, 1.0f);

					char* dict = (char*)"rcmcollect_paperleadinout@";
					char* anim = (char*)"meditiate_idle";
					STREAMING::REQUEST_ANIM_DICT(dict);
					AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
				}
			}
		}
	}
	void ForceWave() {

		const int numElements = 10;
		const int arrSize = numElements * 2 + 2;
		STREAMING::REQUEST_NAMED_PTFX_ASSET((char*)"scr_reconstructionaccident");
		GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL((char*)"scr_reconstructionaccident");
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY((char*)"scr_reconstruct_pipe_impact", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
		Vehicle veh[arrSize];
		veh[0] = numElements;
		int count = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), veh);
		if (veh != NULL)
		{
			for (int i = 1; i <= count; i++)
			{
				int offsettedID = i;
				if (veh[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(veh[offsettedID]))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(veh[offsettedID], 1, 9, 9, 0, 0, 0, 0, 1, true, true, true, true, true);

					char* dict = (char*)"rcmcollect_paperleadinout@";
					char* anim = (char*)"meditiate_idle";
					STREAMING::REQUEST_ANIM_DICT(dict);
					AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
				}
			}
		}
	}
	void setExplodeCars(bool enable)
	{
		if (enable)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET((char*)"scr_rcbarry1");
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL((char*)"scr_rcbarry1");
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY((char*)"scr_alien_disintegrate", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);

			ForceExplodeWave();
			char* dict = (char*)"rcmcollect_paperleadinout@";
			char* anim = (char*)"meditiate_idle";
			STREAMING::REQUEST_ANIM_DICT(dict);
			AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
			SoundToPlay = (char*)"FocusIn";
			SoundSetToPlay = (char*)"HintCamSounds";
			PlaySounds = true;
		}
	}
	void setPushCars(bool enable)
	{
		if (enable)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET((char*)"scr_rcbarry1");
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL((char*)"scr_rcbarry1");
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY((char*)"scr_alien_disintegrate", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);

			ForceWave();
			char* dict = (char*)"rcmcollect_paperleadinout@";
			char* anim = (char*)"meditiate_idle";
			STREAMING::REQUEST_ANIM_DICT(dict);
		 AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
			SoundToPlay = (char*)"FocusIn";
			SoundSetToPlay = (char*)"HintCamSounds";
			PlaySounds = true;
		}
	}

	int TimePD;
	bool ReqNet(unsigned long int vehID)
	{
		int Tries = 0;
		bool
			hasControl = false,
			giveUp = false;
		do
		{
			hasControl = NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(vehID);
			Tries++;
			if (Tries > 300)
				giveUp = true;
		} while (!hasControl && !giveUp);

		if (giveUp)
			return false;
		else return true;
	}




	void MCDance()
	{

		const int numElements = 10;
		const int arrSize = numElements * 2 + 2;
		Ped ped[arrSize];
		ped[0] = numElements;
		int count = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), ped, 1);
		if (ped != NULL)
		{
			for (int i = 1; i <= count; i++)
			{
				int offsettedID = i;
				if (ped[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(ped[offsettedID]))
				{
					int TargetHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
					ReqNet(ped[offsettedID]);
					char* dict = (char*)"mini@strip_club@private_dance@part1";
					char* anim = (char*)"priv_dance_p1";
					STREAMING::REQUEST_ANIM_DICT(dict);
					AI::TASK_PLAY_ANIM(ped[offsettedID], dict, anim, 1, 1, -1, 16, 0, false, 0, false);
				}
			}
		}
	}
	void MCBurn()
	{

		const int numElements = 10;
		const int arrSize = numElements * 2 + 2;
		Ped ped[arrSize];
		ped[0] = numElements;
		int count = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), ped, 1);
		if (ped != NULL)
		{
			for (int i = 1; i <= count; i++)
			{
				int offsettedID = i;
				if (ped[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(ped[offsettedID]))
				{
					int TargetHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
					ReqNet(ped[offsettedID]);

					Vector3 Pos = ENTITY::GET_ENTITY_COORDS(ped[offsettedID], true);
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Pos.x, Pos.y, Pos.z, 12, 5, true, true, 0);

				}
			}
		}
	}





	bool JumpAround = false;
	void jumparound(bool toggle)
	{
		if (toggle)
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
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(vehs[OffsetID]))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(vehs[OffsetID], 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0);
					}
				}
			}
		}
		else
		{
			!NULL;
		}
	}



	bool SuperBrakes = false;
	void superbrakes(bool toggle)
	{
		if (toggle)
		{
			Vehicle vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if ((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, INPUT_VEH_BRAKE) && ENTITY::GET_ENTITY_SPEED_VECTOR(vehicle, true).y > 1.f) ||
				(CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, INPUT_VEH_ACCELERATE) && ENTITY::GET_ENTITY_SPEED_VECTOR(vehicle, true).y < -1.f))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(vehicle, 0.f);
			}
		}
		else
		{
			!NULL;
		}
	}




	bool is_ped_shooting(Ped ped) {
		Vector3 coords = ENTITY::GET_ENTITY_COORDS(ped, 1);
		return PED::IS_PED_SHOOTING_IN_AREA(ped, coords.x, coords.y, coords.z, coords.x, coords.y, coords.z, true, true);
	}



	bool ExploAm = false;
	void exploam(bool toggle)
	{
		if (toggle)
		{
			if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				Vector3 coords;
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &coords))
				{
					FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 0, 10.0f, false, false, false);
				}
			}
		}
	}



	bool CopsTurn = false;
	void copsturn(bool toggle)
	{
		if (toggle)
		{
			globalHandle(2793044).At(4654).As<int>() = -5;
		}
	}

	bool Snowing = false;
	void snowing(bool toggle)
	{
		if (toggle)
		{
			globalHandle(262145).At(4752).As<int>() = true;
		}
		else
		{
			globalHandle(262145).At(4752).As<int>() = false;
		}
	}

	bool AntiAFK2 = false;
	void antiafk2(bool toggle)
	{
		if (toggle)
		{
			globalHandle(1653913).At(1172).As<int>() = -1;
			globalHandle(1653913).At(1156).As<int>() = -1;
		}
	}

	void setPersuadeDance(bool enable)
	{
		if (enable)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET((char*)"scr_rcbarry1");
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL((char*)"scr_rcbarry1");
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY((char*)"scr_alien_teleport", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
			MCDance();
			char* dict = (char*)"rcmcollect_paperleadinout@";
			char* anim = (char*)"meditiate_idle";
			STREAMING::REQUEST_ANIM_DICT(dict);
			AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
			SoundToPlay = (char*)"FocusIn";
			SoundSetToPlay = (char*)"HintCamSounds";
			PlaySounds = true;
		}
	}












	//bool RainbowTireSmoke = false;
	//void rainbowtiresmoke(bool enable)
	//{
	//	if (enable)
	//	{
	//		static Timer colorTimer(0ms);
	//		colorTimer.SetDelay(std::chrono::seconds(1));
	//		if (colorTimer.Update() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), FALSE))
	//		{
	//			auto Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), FALSE);
	//			VEHICLE::TOGGLE_VEHICLE_MOD(Vehicle, 20, TRUE);
	//			VEHICLE::SET_VEHICLE_MOD_KIT(Vehicle, 0);
	//			VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle, random(0, 255), random(0, 255), random(0, 255));
	//		}
	//	}
	//}






	bool f_Valkyire = false;
	void setValkyire(bool enable)
	{
		if (enable)
		{
			static std::int32_t rocket, cam;
			static std::uint8_t y;
			static float bar;
			static bool init;
			if (is_ped_shooting(PLAYER::PLAYER_PED_ID())) {
				if (!init) init = true;
			}
			if (init) {
				if (!ENTITY::DOES_ENTITY_EXIST(rocket)) {
					auto weapon = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID());
					auto c = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(weapon, 0.f, 1.f, 0.f);
					rocket = OBJECT::CREATE_OBJECT(GAMEPLAY::GET_HASH_KEY((char*)"w_lr_rpg_rocket"), c.x, c.y, c.z, 1, 1, 0);
					CAM::DESTROY_ALL_CAMS(true);
					cam = CAM::CREATE_CAM((char*)"DEFAULT_SCRIPTED_CAMERA", 1);
					CAM::ATTACH_CAM_TO_ENTITY(cam, rocket, 0.f, 0.f, 0.f, 1);
					CAM::RENDER_SCRIPT_CAMS(1, true, 700, 1, 1);
					CAM::SET_CAM_ACTIVE(cam, 1);
					ENTITY::SET_ENTITY_VISIBLE(rocket, 0, 0);
					bar = .5f; y = 255;
				}
				else {
					CAM::SET_CAM_ROT(cam, CAM::GET_GAMEPLAY_CAM_ROT(0).x, CAM::GET_GAMEPLAY_CAM_ROT(0).y, CAM::GET_GAMEPLAY_CAM_ROT(0).z, 0);
					ENTITY::SET_ENTITY_ROTATION(rocket, CAM::GET_GAMEPLAY_CAM_ROT(0).x, CAM::GET_GAMEPLAY_CAM_ROT(0).y, CAM::GET_GAMEPLAY_CAM_ROT(0).z, 0, 1);

					auto c = add(&ENTITY::GET_ENTITY_COORDS(rocket, 1), &multiply(&rot_to_direction(&CAM::GET_GAMEPLAY_CAM_ROT(0)), .8f));
					ENTITY::SET_ENTITY_COORDS(rocket, c.x, c.y, c.z, 0, 0, 0, 0);

					UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
					PLAYER::DISABLE_PLAYER_FIRING(PLAYER::PLAYER_PED_ID(), 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					UI::_0x0AFC4AF510774B47();

					GRAPHICS::DRAW_RECT(0.5f, 0.5f - 0.025f, 0.050f, 0.002f, 255, 255, 255, 255);
					GRAPHICS::DRAW_RECT(0.5f, 0.5f + 0.025f, 0.050f, 0.002f, 255, 255, 255, 255);
					GRAPHICS::DRAW_RECT(0.5f - 0.025f, 0.5f, 0.002f, 0.050f, 255, 255, 255, 255);
					GRAPHICS::DRAW_RECT(0.5f + 0.025f, 0.5f, 0.002f, 0.050f, 255, 255, 255, 255);
					GRAPHICS::DRAW_RECT(0.5f + 0.05f, 0.5f, 0.050f, 0.002f, 255, 255, 255, 255);
					GRAPHICS::DRAW_RECT(0.5f - 0.05f, 0.5f, 0.050f, 0.002f, 255, 255, 255, 255);
					GRAPHICS::DRAW_RECT(0.5f, 0.5f + 0.05f, 0.002f, 0.050f, 255, 255, 255, 255);
					GRAPHICS::DRAW_RECT(0.5f, 0.5f - 0.05f, 0.002f, 0.050f, 255, 255, 255, 255);
					GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"CAMERA_secuirity");

					GRAPHICS::DRAW_RECT(0.25f, 0.5f, 0.03f, 0.5f, 255, 255, 255, 255);
					static auto ticker = GetTickCount();
					if (GetTickCount() - ticker >= 100) {
						bar -= .01f; y -= 4; ticker = GetTickCount();
					}
					GRAPHICS::DRAW_RECT(0.25f, 0.75f - (bar / 2), 0.03f, bar, 255, y, 0, 255);

					float groundZ;
					GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(rocket, 1).x, ENTITY::GET_ENTITY_COORDS(rocket, 1).y, ENTITY::GET_ENTITY_COORDS(rocket, 1).z, &groundZ, 0);
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(rocket) ||
						(std::abs(ENTITY::GET_ENTITY_COORDS(rocket, 1).z - groundZ) < .5f) ||
						bar <= 0.01) {
						auto impact_coord = ENTITY::GET_ENTITY_COORDS(rocket, 1); ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						FIRE::ADD_EXPLOSION(impact_coord.x, impact_coord.y, impact_coord.z, 0, 10.f, 1, 0, .4f);
						ENTITY::DELETE_ENTITY(&rocket);
						rocket = 0;
						PLAYER::DISABLE_PLAYER_FIRING(PLAYER::PLAYER_PED_ID(), 0);
						CAM::RENDER_SCRIPT_CAMS(0, true, 700, 1, 1);
						CAM::DESTROY_CAM(cam, 1);
						GRAPHICS::SET_TIMECYCLE_MODIFIER((char*)"DEFAULT");
						init = false;
					}
				}
			}
			if (!enable) {
				CAM::DESTROY_CAM(cam, 1);
				PLAYER::DISABLE_PLAYER_FIRING(PLAYER::PLAYER_PED_ID(), 0);
				rocket = 0;
				bar = .5f;
				y = 255;
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}

	//Entity RAYCAST()
	//{
	//	auto camCoords = add(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply(&rot_to_direction(&CAM::GET_GAMEPLAY_CAM_ROT(0)), distanceBetween(CAM::GET_GAMEPLAY_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) + 1.f));
	//	auto farCoords = add(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply(&rot_to_direction(&CAM::GET_GAMEPLAY_CAM_ROT(0)), 5000.f));
	//	BOOL hit; Vector3 endCoords; Vector3 surfaceNormal; int ent = 0;
	//	int ray = WORLDPROBE::_START_SHAPE_TEST_RAY(camCoords.x, camCoords.y, camCoords.z, farCoords.x, farCoords.y, farCoords.z, -1, PLAYER::PLAYER_PED_ID(), 7);
	//	WORLDPROBE::GET_SHAPE_TEST_RESULT(ray, &hit, &endCoords, &surfaceNormal, &ent);
	//	if (ent && ENTITY::DOES_ENTITY_EXIST(ent) &&
	//		(ENTITY::IS_ENTITY_A_PED(ent) || ENTITY::IS_ENTITY_A_VEHICLE(ent) || 
	//		(ENTITY::IS_ENTITY_A_PED(ent) || ENTITY::IS_ENTITY_A_VEHICLE(ent) || ENTITY::IS_ENTITY_AN_OBJECT(ent) ||
	//		||

	//		
	//		auto test = ENTITY::GET_ENTITY_COORDS(ent, 1);
	//		return ent;
	//	}
	//	return -1;
	//
	//}

	//void setLaunchGun(bool enable)
	//{
	//	if (enable)
	//	{
	//		//int Target = RAYCAST();
	//		float Speed = 100;
	//		if (Target)
	//		{
	//			if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
	//			{
	//				if (ENTITY::IS_ENTITY_A_PED(Target))
	//				{
	//					if (PED::IS_PED_IN_ANY_VEHICLE(Target, false))
	//					{
	//						Target = PED::GET_VEHICLE_PED_IS_IN(Target, false);
	//					}
	//				}
	//				if (ENTITY::IS_ENTITY_A_VEHICLE(Target))
	//				{
	//					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Target, Speed);
	//				}
	//			}
	//		}
	//	}
	//}




	bool RPGg = false;
	void setRPGGun(bool enable)
	{
		if (enable)
		{
			Vector3 gameplayCam = CAM::_GET_GAMEPLAY_CAM_COORDS();
			Vector3 gameplayCamRot = CAM::GET_GAMEPLAY_CAM_ROT(0);
			Vector3 gameplayCamDirection = RotationToDirection(gameplayCamRot);
			Vector3 startCoords = addVector(gameplayCam, (multiplyVector(gameplayCamDirection, 1.0f)));
			Vector3 endCoords = addVector(startCoords, multiplyVector(gameplayCamDirection, 500.0f));
			Hash weaponhash;
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponhash, 1);
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && is_ped_shooting(PLAYER::PLAYER_PED_ID()))
			{
				Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY((char*)"WEAPON_VEHICLE_ROCKET");
				if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
				{
					WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, false);
				}
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(startCoords.x, startCoords.y, startCoords.z, endCoords.x, endCoords.y, endCoords.z, 50, 1, weaponAssetRocket, PLAYER::PLAYER_PED_ID(), 1, 1, weaponAssetRocket);
			}
		}
	}







	//bool RainbowNeons = false;
	//void rainbowneons(bool enable)
	//{
	//	if (enable)
	//	{
	//		static Timer colorTimer(0ms);
	//		colorTimer.SetDelay(std::chrono::seconds(1));
	//		if (colorTimer.Update() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), FALSE))
	//		{
	//			auto Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), FALSE);
	//			if (!VEHICLE::GET_VEHICLE_NEON_ENABLED(Vehicle, 0) || !VEHICLE::GET_VEHICLE_NEON_ENABLED(Vehicle, 1) || !VEHICLE::GET_VEHICLE_NEON_ENABLED(Vehicle, 2) || !VEHICLE::GET_VEHICLE_NEON_ENABLED(Vehicle, 3))
	//			{
	//				VEHICLE::SET_VEHICLE_NEON_ENABLED(Vehicle, 0, TRUE);
	//				VEHICLE::SET_VEHICLE_NEON_ENABLED(Vehicle, 1, TRUE);
	//				VEHICLE::SET_VEHICLE_NEON_ENABLED(Vehicle, 2, TRUE);
	//				VEHICLE::SET_VEHICLE_NEON_ENABLED(Vehicle, 3, TRUE);
	//			}
	//			VEHICLE::SET_VEHICLE_NEON_COLOUR(Vehicle, random(0, 255), random(0, 255), random(0, 255));
	//		}
	//	}
	//}


	inline static std::int32_t playerWantedLevel{ 0 };



	bool f_SetWanted = false;
	void setWantedLevel(bool enable)
	{
		if (enable)
		{
			Memory::set_value<int>({ 0x08, 0x10A8, 0x888 }, playerWantedLevel);
		}
	}




	bool  BypassRestrictedArea = false;
	void bypassrestrictedarea(bool enable)
	{
		if (enable)
		{
			GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("am_armybase");
			GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("restrictedareas");
			GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("re_armybase");
			GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("re_lossantosintl");
			GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("re_prison");
			GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("re_prisonvanbreak");
		}
	}


	void RGBFadeGLOW()
	{
		if (m_Red > 0 && m_Blue == 0) {
			m_Red--;
			m_Green++;
		}
		if (m_Green > 0 && m_Red == 0) {
			m_Green--;
			m_Blue++;
		}
		if (m_Blue > 0 && m_Green == 0) {
			m_Red++;
			m_Blue--;
		}
	}

	bool WorldGlow = false;
	bool WorldGlow2 = false;
	void worldglow(bool enable)
	{
		if (enable)
		{
			auto Coords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), TRUE);
			GRAPHICS::DRAW_LIGHT_WITH_RANGE(Coords.x, Coords.y, Coords.z, m_Red, m_Green, m_Blue, 450.f, 100.f);
			
		
			if (WorldGlow2)
				RGBFadeGLOW();
		}
	}



	bool InsVeh = false;
	void insveh(bool enable)
	{
		if (enable)
		{
			globalHandle(2671447).At(8).As<int>() = 1;



		}
	}

	//bool ForceField = false;
	//void forcefield (bool toggle)
	//{
	//	if (toggle)
	//	{
	//		Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
	//		TEST::ADD_EXPLOSION(pCoords.x + 2, pCoords.y + 2, pCoords.z, 7, 9.0f, false, true, 0.0f);
	//		TEST::ADD_EXPLOSION(pCoords.x + 3, pCoords.y + 3, pCoords.z, 7, 9.0f, false, true, 0.0f);
	//		TEST::ADD_EXPLOSION(pCoords.x + 4, pCoords.y + 4, pCoords.z, 7, 9.0f, false, true, 0.0f);
	//		TEST::ADD_EXPLOSION(pCoords.x + 5, pCoords.y + 5, pCoords.z, 7, 9.0f, false, true, 0.0f);
	//		TEST::ADD_EXPLOSION(pCoords.x + 6, pCoords.y + 6, pCoords.z, 7, 9.0f, false, true, 0.0f);
	//		TEST::ADD_EXPLOSION(pCoords.x + 7, pCoords.y + 7, pCoords.z, 7, 9.0f, false, true, 0.0f);
	//	}
	//}

	
	

	bool ForceField = false;
	void forcefield(bool toggle)
	{
		if (toggle)
		{
			const int numElements = 10;
			const int arrSize = numElements * 2 + 2;
			Ped ped[arrSize];
			ped[0] = numElements;
			int count = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), ped, 1);
			if (ped != NULL)
			{
				for (int i = 1; i <= count; i++)
				{
					int offsettedID = i;
					if (ped[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(ped[offsettedID]))
					{
						ReqNet(ped[offsettedID]);

						Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(ped[offsettedID], true);
						FIRE::ADD_EXPLOSION(pCoords.x, pCoords.y, pCoords.z, 7, 9.0f, false, true, 0.0f);

					}
				}
			}
		}
	}
	




	
	
	bool ClearArea = false;
	void cleararea(bool toggle)
	{
		if (toggle)
		{
			Vector3 MyPos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
			GAMEPLAY::CLEAR_AREA(MyPos.x, MyPos.y, MyPos.z, 250, true, false, false, false);
			GAMEPLAY::CLEAR_AREA_OF_COPS(MyPos.x, MyPos.y, MyPos.z, 250, 0);
			GAMEPLAY::CLEAR_AREA_OF_OBJECTS(MyPos.x, MyPos.y, MyPos.z, 250, 0);
			GAMEPLAY::CLEAR_AREA_OF_VEHICLES(MyPos.x, MyPos.y, MyPos.z, 250, false, false, false, false, false);
			GAMEPLAY::CLEAR_AREA_OF_PEDS(MyPos.x, MyPos.y, MyPos.z, 250, 0);
		GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(MyPos.x, MyPos.y, MyPos.z, 250, false);

			// Seperate Remove Nearby Vehicles: for spawned vehicles
			const int ElementAmount = 10;
			const int ArrSize = ElementAmount * 2 + 2;

			::Vehicle* vehs = new ::Vehicle[ArrSize];
			vehs[0] = ElementAmount;
			int VehFound = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), vehs);

			for (int i = 0; i < VehFound; i++)
			{
				int OffsetID = i * 2 + 2;
				if (vehs[OffsetID] != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
				{

					ENTITY::DELETE_ENTITY(&vehs[OffsetID]);
				}
			}
			delete[] vehs;
		}
	}



	Entity RAYCAST()
	{
		auto camCoords = add(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply(&rot_to_direction(&CAM::GET_GAMEPLAY_CAM_ROT(0)), distanceBetween(CAM::GET_GAMEPLAY_CAM_COORD(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) + 1.f));
		auto farCoords = add(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply(&rot_to_direction(&CAM::GET_GAMEPLAY_CAM_ROT(0)), 5000.f));
		BOOL hit; Vector3 endCoords; Vector3 surfaceNormal; int ent = 0;
		int ray = WORLDPROBE::_START_SHAPE_TEST_RAY(camCoords.x, camCoords.y, camCoords.z, farCoords.x, farCoords.y, farCoords.z, -1, PLAYER::PLAYER_PED_ID(), 7);
		WORLDPROBE::GET_SHAPE_TEST_RESULT(ray, &hit, &endCoords, &surfaceNormal, &ent);
		if (ent && ENTITY::DOES_ENTITY_EXIST(ent) &&
			(ENTITY::IS_ENTITY_A_PED(ent) || ENTITY::IS_ENTITY_A_VEHICLE(ent))) {
			auto test = ENTITY::GET_ENTITY_COORDS(ent, 1);
			return ent;
		}
		return -1;
	}

	void setupdraw()
	{
		UI::SET_TEXT_FONT(0);
		UI::SET_TEXT_SCALE(0.4f, 0.4f);
		UI::SET_TEXT_COLOUR(255, 255, 255, 255);
		UI::SET_TEXT_WRAP(0.0f, 1.0f);
		UI::SET_TEXT_CENTRE(0);
		UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
		UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
		UI::SET_TEXT_OUTLINE();
	}
	void drawstring2(char* text, float X, float Y)
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT((char*)"STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(X, Y);
	}

	//bool SteathNigger = false;
	//void dostealth(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		float LastFrameTime = GAMEPLAY::GET_FRAME_TIME();
	//		int getFPS = (1.0f / LastFrameTime);
	//		char FPStext[60];
	//		snprintf(FPStext, sizeof(FPStext), "FPS : ~p~%d", getFPS);
	//		setupdraw();
	//		UI::SET_TEXT_FONT(6);
	//		UI::SET_TEXT_SCALE(0.5f, 0.5f);
	//		UI::SET_TEXT_CENTRE(0);
	//		drawstring2(FPStext, 0.020f, 0.010f);
	//	}
	//}


	bool PushVehFun = false;
	void pushvehfun(bool enable)
	{
		if (enable)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET((char*)"scr_rcbarry1");
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL((char*)"scr_rcbarry1");
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY((char*)"scr_alien_disintegrate", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);

			ForceWave();
			char* dict = (char*)"rcmcollect_paperleadinout@";
			char* anim = (char*)"meditiate_idle";
			STREAMING::REQUEST_ANIM_DICT(dict);
			BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
			SoundToPlay = (char*)"FocusIn";
			SoundSetToPlay = (char*)"HintCamSounds";
			PlaySounds = true;
		}
	}


	bool 	ExpVehFun = false;
	void expvehfun(bool enable)
	{
		if (enable)
		{
			const int numElements = 10;
			const int arrSize = numElements * 2 + 2;
			Ped ped[arrSize];
			ped[0] = numElements;
			int count = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), ped, 1);
			if (ped != NULL)
			{
				for (int i = 1; i <= count; i++)
				{
					int offsettedID = i;
					if (ped[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(ped[offsettedID]))
					{
						int TargetHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
						ReqNet(ped[offsettedID]);

						int my_group = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
						PED::SET_PED_AS_GROUP_LEADER(PLAYER::PLAYER_PED_ID(), my_group);
						PED::SET_PED_AS_GROUP_MEMBER(ped[offsettedID], my_group);
					}
				}
			}
		}
	}
		



	Vector3 RotationToDirectionV3(Vector3 rot) {
		Vector3 dir;
		float radiansZ = rot.z * 0.0174532924f;
		float radiansX = rot.x * 0.0174532924f;
		float num = abs((float)cos((double)radiansX));
		dir.x = (float)((double)((float)(-(float)sin((double)radiansZ))) * (double)num);
		dir.y = (float)((double)((float)cos((double)radiansZ)) * (double)num);
		dir.z = (float)sin((double)radiansX);
		return dir;
	}

	Vector3 AddV3(Vector3 vectorA, Vector3 vectorB) {
		Vector3 result;
		result.x = vectorA.x;
		result.y = vectorA.y;
		result.z = vectorA.z;
		result.x += vectorB.x;
		result.y += vectorB.y;
		result.z += vectorB.z;
		return result;
	}

	Vector3 MultiplyV3(Vector3 vector, float x) {
		Vector3 result;
		result.x = vector.x;
		result.y = vector.y;
		result.z = vector.z;
		result.x *= x;
		result.y *= x;
		result.z *= x;
		return result;
	}

	int TimePD777;
	bool FireBr = false;
	void firebr(bool enable)
	{
		if (enable)
		{
			Vector3 rotation = CAM::GET_GAMEPLAY_CAM_ROT(0);
			Vector3 direction = RotationToDirectionV3(rotation);
			Vector3 source = PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), SKEL_Head, 0.f, 0.f, 0.f);
			Vector3 destination = AddV3(CAM::GET_GAMEPLAY_CAM_COORD(), MultiplyV3(direction, 9999.f));
			std::uint32_t weapon = 0x476BF155;

			if (IsKeyPressed(VK_SHIFT))
			{
				GRAPHICS::DRAW_LINE(source.x, source.y, source.z, destination.x, destination.y, destination.z, 255, 0, 255, 255);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(source.x, source.y, source.z, destination.x, destination.y, destination.z, 100.f, 0, weapon, PLAYER::PLAYER_PED_ID(), true, true, 100.f);
			}
		}
	}


	void speedmodifier(bool run, bool swim)
	{
		if (run)
		{
			Memory::set_value<float>({ 0x8, 0x10C8, 0xCF0 }, 2.f);
		}

		if (swim)
		{
			Memory::set_value<float>({ 0x8, 0x10C8, 0x170 }, 2.f);
		}
	}

	bool TEST1 = false;
	void test1(bool enable)
	{
		if (enable)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET((char*)"scr_rcbarry1");
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL((char*)"scr_rcbarry1");
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY((char*)"scr_alien_teleport", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
			MCDance();
			char* dict = (char*)"rcmcollect_paperleadinout@";
			char* anim = (char*)"meditiate_idle";
			STREAMING::REQUEST_ANIM_DICT(dict);
			BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
			SoundToPlay = (char*)"FocusIn";
			SoundSetToPlay = (char*)"HintCamSounds";
			PlaySounds = true;
		}
	}


	void MCWater()
	{

		const int numElements = 10;
		const int arrSize = numElements * 2 + 2;
		Ped ped[arrSize];
		ped[0] = numElements;
		int count = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), ped, 1);
		if (ped != NULL)
		{
			for (int i = 1; i <= count; i++)
			{
				int offsettedID = i;
				if (ped[offsettedID] != NULL && ENTITY::DOES_ENTITY_EXIST(ped[offsettedID]))
				{
					int TargetHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer));
					ReqNet(ped[offsettedID]);

					Vector3 Pos = ENTITY::GET_ENTITY_COORDS(ped[offsettedID], true);
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Pos.x, Pos.y, Pos.z, 13, 5, false, true, 0);

				}
			}
		}
	}


	//void callptfx(const char* asset, const char* asset2, const char* name, int bone)
	//{
	//	STREAMING::REQUEST_NAMED_PTFX_ASSET(asset);
	//	GRAPHICS::USE_PARTICLE_FX_ASSET(asset2);
	//	GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(name, PLAYER::PLAYER_PED_ID(), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, bone, m_ptfxpedscale, true, true, true);
	//}

	//inline std::array<const char*, 7> m_Particle = { "Alien", "Alien2", "Clown", "Lightning", "Ghost", "Dust","Sparks" };
	//inline std::array<const char*, 7> m_ParticleCalls0 = { "scr_rcbarry1", "scr_rcbarry1", "scr_rcbarry2", "scr_rcbarry2", "scr_agencyheist", "scr_agencyheistb","core" };
	//inline std::array<const char*, 7> m_ParticleCalls1 = { "scr_alien_disintegrate", "scr_alien_teleport", "scr_clown_appears", "scr_clown_death", "scr_fbi_dd_breach_smoke", "scr_agency3b_elec_box","ent_brk_sparking_wires_sp" };
	//inline std::size_t m_ParticleIterator;

	//void glowmanager(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		if (m_ghead) { callptfx(m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls1[m_ParticleIterator], SKEL_Head); }
	//		if (m_grighthand) { callptfx(m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls1[m_ParticleIterator], SKEL_R_Hand); }
	//		if (m_glefthand) { callptfx(m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls1[m_ParticleIterator], SKEL_L_Hand); }
	//		if (m_grightfoot) { callptfx(m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls1[m_ParticleIterator], SKEL_R_Foot); }
	//		if (m_gleftfoot) { callptfx(m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls0[m_ParticleIterator], m_ParticleCalls1[m_ParticleIterator], SKEL_L_Foot); }
	//	}
	//}

	bool TEST2 = false;
	void test2(bool enable)
	{
		if (enable)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET((char*)"scr_rcbarry1");
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL((char*)"scr_rcbarry1");
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY((char*)"scr_alien_disintegrate", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);

			MCWater();
			char* dict = (char*)"rcmcollect_paperleadinout@";//////////////////////////////////////////////////////	 trailer splash
			char* anim = (char*)"meditiate_idle";
			STREAMING::REQUEST_ANIM_DICT(dict);
			BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
			SoundToPlay = (char*)"FocusIn";
			SoundSetToPlay = (char*)"HintCamSounds";
			PlaySounds = true;
		}
	}


	bool Dominos = false;
	void dominos(bool toggle)
	{
		if (toggle)
		{
			Vector3 me = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
			Hash board = GAMEPLAY::GET_HASH_KEY("prop_boogieboard_05");

				static int timer = 0; 
			if (GetTickCount() - timer >= 100)
			{
				Object domino = OBJECT::CREATE_OBJECT(board, me.x, me.y - 1, me.z - 1, 1, 1, 1);
				ENTITY::SET_ENTITY_HEADING(domino, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
				timer = GetTickCount();
			}
			
		}
	}

	
	bool MoonGravity = false;
	void moongravity (bool toggle)
	{
		if (toggle)
		{
			GAMEPLAY::SET_GRAVITY_LEVEL(toggle ? 2 : 0);
		}
		}


	//bool 1MilTest= false;
	//void 1miltest(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		GAMEPLAY::SET_GRAVITY_LEVEL(toggle ? 2 : 0);
	//	}
	//}

	char* call1o66;
	char* call2o77;
	char* nameo88;
	Ped PTLoopPed99;
	void TRIGGERLAG(char* call1, char* call2, char* name, Player target)
	{
		Ped user = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(target);

		call1o66 = call1;
		call2o77 = call2;
		nameo88 = name;
		PTLoopPed99 = user;

		STREAMING::REQUEST_NAMED_PTFX_ASSET(call1);
		GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL(call2);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(name, user, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 15.0, false, false, false);

	}

	bool LAGPLAYER = false;
	void lagplayer(bool enable)
	{
		if (enable)
		{
			TRIGGERLAG((char*)"scr_agencyheist", (char*)"scr_agencyheist", (char*)"scr_fbi_dd_breach_smoke", g_SelectedPlayer);
		}
	}

			bool TEST3 = false;
			void test3(bool enable)
			{
				if (enable)
				{
					GRAPHICS::SET_ARTIFICIAL_LIGHTS_STATE(1);
				}
				else
				{
					GRAPHICS::SET_ARTIFICIAL_LIGHTS_STATE(0);
				}
			}

				

	bool TEST4 = false;
	void test4(bool enable)
	{
		if (enable)
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET((char*)"scr_rcbarry1");
			GRAPHICS::_USE_PARTICLE_FX_ASSET_NEXT_CALL((char*)"scr_rcbarry1");
			GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY((char*)"scr_alien_disintegrate", PLAYER::PLAYER_PED_ID(), 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);

			ForceExplodeWave();
			char* dict = (char*)"rcmcollect_paperleadinout@";
			char* anim = (char*)"meditiate_idle";
			STREAMING::REQUEST_ANIM_DICT(dict);
			BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), dict, anim, 1, 1, -1, 16, 0, false, 0, false);
			SoundToPlay = (char*)"FocusIn";
			SoundSetToPlay = (char*)"HintCamSounds";
			PlaySounds = true;
		}
	}


	bool TinyPlayer = false;
	void tinyplayer(bool toggle)
	{
		if (toggle)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 223, toggle);
		}
	}


	bool SwimAnywhere = false;
	void swimanywhere(bool toggle)
	{
		if (toggle)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 65, TRUE);
		}
	}




//
//	GameVariables::GameVariables() :
//		m_WorldPtr(Signature(("48 8B C3 48 83 C4 20 5B C3 0F B7 05 ? ? ? ?")).Scan().Sub(11).Add(3).Rip().As<decltype(m_WorldPtr)>()),
//		m_Model_Spawn_Bypass(Signature("48 8B C8 FF 52 30 84 C0 74 05 48").Scan().Add(8).As<decltype(m_Model_Spawn_Bypass)>()),
//		m_GameState(Signature("48 85 C9 74 4B 83 3D").Scan().Add(7).Rip().As<decltype(m_GameState)>()),
//		m_FrameCount(Signature("8B 15 ? ? ? ? 41 FF CF").Scan().Add(2).Rip().As<decltype(m_GameState)>()),
//		m_GameWindow(FindWindowA("grcWindow", "Grand Theft Auto V")),
//		m_NativeRegistrations(Signature("76 32 48 8B 53 40 48 8D 0D").Scan().Add(9).Rip().As<decltype(m_NativeRegistrations)>()),
//		m_GlobalBase(Signature("48 85 FF 48 89 1D").Scan().Sub(12).Rip().As<decltype(m_GlobalBase)>()),
//		m_is_session_started(Signature(("40 38 35 ? ? ? ? 75 0E 4C 8B C3 49 8B D7 49 8B CE")).Scan().Add(3).Rip().As<decltype(m_is_session_started)>())
//	{
//		m_GameBuild = Signature("48 83 EC 60 48 8D 0D ? ? ? ? E8").Scan().Sub(17).Add(268).Rip().As<decltype(m_GameBuild)>();
//	}
//
//	void GameVariables::PostInit()
//	{
//	}
//
//	GameFunctions::GameFunctions() :
//		m_IsDlcPresent(Signature("84 C0 74 0D 8D 53 0C").Scan().Sub(63).As<decltype(m_IsDlcPresent)>()),
//		m_GetEventData(Signature("48 85 C0 74 14 4C 8B 10").Scan().Sub(28).As<decltype(m_GetEventData)>()),
//		m_GetLabelText(Signature("48 89 5C 24 ? 57 48 83 EC 20 48 8B DA 48 8B F9 48 85 D2 75 44 E8").Scan().As<decltype(m_GetLabelText)>()),
//		m_Fix_Vectors(Signature("83 79 18 ? 48 8B D1 74 4A FF 4A 18").Scan().As<decltype(m_Fix_Vectors)>()),
//		m_Session_Weather(Signature("48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC 30 40 8A E9").Scan().As<decltype(m_Session_Weather)>()),
//		m_TriggerScriptEvent(Signature("45 8B F0 41 8B F9 48 8B EA").Scan().Sub(0x1C).As<decltype(m_TriggerScriptEvent)>())
//		m_SessionTime(Signature("48 89 5C 24 08 57 48 83 EC 20 8B F9 48 8B 0D ? ? ? ? 48 8B DA 33 D2 E9 ? ? ? ?").Scan().As<decltype(m_SessionTime)>())
//	{
//	}
//}


	//std::vector<DWORD64> get_string_addresses(std::string str);

	//template <typename T>
	//T get_value(std::vector<DWORD> offsets) {

	//	uintptr_t Addr = get_multilayer_pointer(m_WorldPtr, offsets);
	//	if (Addr == NULL) {
	//		return NULL;
	//	}

	//	return *((T*)Addr);
	//}

	//template <typename T>
	//void set_value(std::vector<DWORD> offsets, T value) {
	//	uintptr_t Addr = get_multilayer_pointer(m_WorldPtr, offsets);
	//	if (Addr == NULL) {
	//		return;
	//	}

	//	*reinterpret_cast<T*>(Addr) = value;
	//}


	//bool FastRun = false;
	//void fastrun (bool toggle)
	//{
	//	if (toggle)
	//	{
	//		
	//			set_value<float>({ 0x08 , 0x10A8 , 0xCF0 }, 2.5);
	//		}
	//	else
	//	{
	//		set_value<float>({ 0x08 , 0x10A8 , 0xCF0 }, 1);
	//	}
	//	}



	//bool FastSwin = false;
	//void fastswim(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		set_value<float>({ 0x08 , 0x10A8 , 0x170 }, 2.5);
	//	}
	//	else
	//	{
	//		set_value<float>({ 0x08 , 0x10A8 , 0x170 }, 1);
	//	}
	//}




	int Weapons[] = { 0xF7F1E25E, 0xFEA23564, 0x1BC4FDB9, 0x6589186A, 1649403952, 125959754, 101631238, 94989220, 317205821, 2937143193, 137902532, 0x57A4368C,  0x97EA20B8, 0x917F6C8C, 0x2B5EF5EC, 0x45CD9CF3, 0x3AABBBAA, 0xEF951FBB, 0xD1D5F52B, 0x6E7DDDEC, 0xDB26713A, 0x497FACC3, 0x23C9F95C, 0x787F0BB, 0xC78D71B4, 2636060646, 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D, 0x3813FC08,
		0xA2719263, 0x8BB05FD7, 0xF9DCBF2D, 0xD8DF3C3C, 0xDD5DF8D9, 0xDFE37640, 0x19044EE0, 0xCD274149, 0x94117305, 0x3813FC08, 0xBFE256D4, 0x88374054, 0x83839C4, 0xDC4DB296, 0xC1B3C3D1, 0xCB96392F, 0x97EA20B8, 0x2BE6766B, 0x0A3D4D34, 0xDB1AA450, 0xBD248B55, 0x555AF99A, 0xEF951FBB, 0x12E82D3D, 0x394F415C, 0xFAD1F1C9, 0x969C3D67, 0x84D6FAFD, 0x624FE830, 0xDBBD7280, 0xA914799, 0x6A6C02E0, 0x6D544C99, 0x63AB0442, 0x0781FE4A, 0xA0973D5E, 0xAB564B93, 0xBA45E8B8, 0xFBAB5776, 0x060EC506, 0xAF3696A1, 0xD7DBF707, 0x476BF155, 0xB62D1F67,0xF38A0747, 0x167C5572, 0x2C9CA024, 0xA991DAE8, 0xD6678401, 0x6AA85572
	};

	bool* m_is_session_started{};

	bool isPlayerFriend(Player player, bool& result)
	{
		int NETWORK_HANDLE[76];
		NETWORK::NETWORK_HANDLE_FROM_PLAYER(player, &NETWORK_HANDLE[0], 13);
		if (NETWORK::NETWORK_IS_HANDLE_VALID(&NETWORK_HANDLE[0], 13))
		{
			result = NETWORK::NETWORK_IS_FRIEND(&NETWORK_HANDLE[0]);
			return true;
		}
		return false;
	}

#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void *)0)
#endif
#endif

	void Text(const char* text, RGBAF rgbaf, VECTOR2 position, VECTOR2_2 size, bool center)
	{
		UI::SET_TEXT_CENTRE(center);
		UI::SET_TEXT_COLOUR(rgbaf.r, rgbaf.g, rgbaf.b, rgbaf.a);
		UI::SET_TEXT_FONT(rgbaf.f);
		UI::SET_TEXT_SCALE(size.w, size.h);
		UI::SET_TEXT_DROPSHADOW(1, 0, 0, 0, 0);
		UI::SET_TEXT_EDGE(1, 0, 0, 0, 0);
		UI::SET_TEXT_OUTLINE();
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT((char*)"STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((char*)text);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(position.x, position.y);
	}

	void AddSmallInfo(char* text, short line)
	{
		if (line == 1) {
			GRAPHICS::DRAW_RECT(g_UiManager->m_PosX - 0.180f, ((13 * 0.035f) / 2.0f) + 0.159f - 0.135f, 0.115f, 13 * 0.035f + -0.193f, g_UiManager->m_OptionUnselectedBackgroundColor.r, g_UiManager->m_OptionUnselectedBackgroundColor.g, g_UiManager->m_OptionUnselectedBackgroundColor.b, g_UiManager->m_OptionUnselectedBackgroundColor.a);
		}
		Text(text, { 255, 255, 255, 255, 6 }, { g_UiManager->m_PosX - 0.180f, (line * 0.020f) + 0.123f }, { 0.375f, 0.375f }, true);
	}


	float Get3DDistance(Vector3 a, Vector3 b) {
		float x = pow((a.x - b.x), 2);
		float y = pow((a.y - b.y), 2);
		float z = pow((a.z - b.z), 2);
		return sqrt(x + y + z);
	}

	void Rect(RGBA rgba, VECTOR2 position, VECTOR2_2 size)
	{
		GRAPHICS::DRAW_RECT(position.x, position.y, size.w, size.h, rgba.r, rgba.g, rgba.b, rgba.a);
	}
	void Sprite(std::string Streamedtexture, std::string textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a)
	{
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED((char*)Streamedtexture.c_str()))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT((char*)Streamedtexture.c_str(), false);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE((char*)Streamedtexture.c_str(), (char*)textureName.c_str(), x, y, width, height, rotation, r, g, b, a);
		}
	}
	int r4 = 255, g4 = 0, b4 = 0;
	void RGBFade222()
	{
		if (r4 > 0 && b4 == 0) {
			r4--;
			g4++;
		}
		if (g4 > 0 && r4 == 0) {
			g4--;
			b4++;
		}
		if (b4 > 0 && g4 == 0) {
			r4++;
			b4--;
		}
	}


	

	void LoadPlayerInfo(char* playerName, Player p)
	{
		Ped ped = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(p);
		RequestControlOfEnt(ped);
		float health = ENTITY::GET_ENTITY_HEALTH(ped);
		float maxHealth = ENTITY::GET_ENTITY_MAX_HEALTH(ped);
		float healthPercent = health * 100 / maxHealth;
		std::ostringstream Health; Health << "Health:~s~ " << healthPercent;
		bool is_friend = false;
		bool handle_valid = isPlayerFriend(p, is_friend);
		std::ostringstream Friend;
		if (!m_is_session_started || p == PLAYER::PLAYER_ID()) {
			Friend << "~b~Friend:~s~ N/A";
		}
		else if (handle_valid && is_friend) {
			Friend << "~b~Friend:~s~ " << "Yes";
		}
		else {
			Friend << "~b~Friend:~s~ " << "No";
		}
		float armor = PED::GET_PED_ARMOUR(ped);
		float maxArmor = PLAYER::GET_PLAYER_MAX_ARMOUR(p);
		float armorPercent = armor * 100 / maxArmor;
		std::ostringstream Armor; Armor << "Armor:~s~ " << armorPercent;
		bool alive = !PED::IS_PED_DEAD_OR_DYING(ped, 1);
		const char* aliveStatus;
		if (alive) aliveStatus = "Yes"; else aliveStatus = "No";
		std::ostringstream Alive; Alive << "Alive:~s~ " << aliveStatus;
		bool inVehicle = PED::IS_PED_IN_ANY_VEHICLE(ped, 0);
		std::ostringstream VehicleModel; VehicleModel << "Vehicle:~s~ ";
		std::ostringstream Speed; Speed << "Speed:~s~ ";
		std::ostringstream IsInAVehicle; IsInAVehicle << "In Vehicle:~s~ ";
		if (inVehicle) {
			IsInAVehicle << "Yes";
			Hash vehHash = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(ped, 0));
			VehicleModel << UI::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(vehHash));
			float vehSpeed = ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(ped, 0));
			float vehSpeedConverted;
			vehSpeedConverted = round(vehSpeed * 1.6);
			Speed << vehSpeedConverted << " KM/H";
		}
		else {
			IsInAVehicle << "No";
			float speed = round(ENTITY::GET_ENTITY_SPEED(ped) * 100) / 100;
			Speed << speed << " M/S";
			VehicleModel << "--------";
		}
		std::ostringstream WantedLevel; WantedLevel << "Wanted Level:~s~ " << PLAYER::GET_PLAYER_WANTED_LEVEL(p);
		std::ostringstream Weapon; Weapon << "Weapon: ~s~";
		Hash weaponHash;
		if (WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash, 1)) {
			const char* weaponName;
			if (weaponHash == 2725352035) {
				weaponName = "Unarmed";
			}
			else if (weaponHash == 2578778090) {
				weaponName = "Knife";
			}
			else if (weaponHash == 0x678B81B1) {
				weaponName = "Nightstick";
			}
			else if (weaponHash == 0x4E875F73) {
				weaponName = "Hammer";
			}
			else if (weaponHash == 0x958A4A8F) {
				weaponName = "Bat";
			}
			else if (weaponHash == 0x440E4788) {
				weaponName = "GolfClub";
			}
			else if (weaponHash == 0x84BD7BFD) {
				weaponName = "Crowbar";
			}
			else if (weaponHash == 0x1B06D571) {
				weaponName = "Pistol";
			}
			else if (weaponHash == 0x5EF9FEC4) {
				weaponName = "Combat Pistol";
			}
			else if (weaponHash == 0x22D8FE39) {
				weaponName = "AP Pistol";
			}
			else if (weaponHash == 0x99AEEB3B) {
				weaponName = "Pistol 50";
			}
			else if (weaponHash == 0x13532244) {
				weaponName = "Micro SMG";
			}
			else if (weaponHash == 0x2BE6766B) {
				weaponName = "SMG";
			}
			else if (weaponHash == 0xEFE7E2DF) {
				weaponName = "Assault SMG";
			}
			else if (weaponHash == 0xBFEFFF6D) {
				weaponName = "Assault Riffle";
			}
			else if (weaponHash == 0x83BF0278) {
				weaponName = "Carbine Riffle";
			}
			else if (weaponHash == 0xAF113F99) {
				weaponName = "Advanced Riffle";
			}
			else if (weaponHash == 0x9D07F764) {
				weaponName = "MG";
			}
			else if (weaponHash == 0x7FD62962) {
				weaponName = "Combat MG";
			}
			else if (weaponHash == 0x1D073A89) {
				weaponName = "Pump Shotgun";
			}
			else if (weaponHash == 0x7846A318) {
				weaponName = "Sawed-Off Shotgun";
			}
			else if (weaponHash == 0xE284C527) {
				weaponName = "Assault Shotgun";
			}
			else if (weaponHash == 0x9D61E50F) {
				weaponName = "Bullpup Shotgun";
			}
			else if (weaponHash == 0x3656C8C1) {
				weaponName = "Stun Gun";
			}
			else if (weaponHash == 0x05FC3C11) {
				weaponName = "Sniper Rifle";
			}
			else if (weaponHash == 0x0C472FE2) {
				weaponName = "Heavy Sniper";
			}
			else if (weaponHash == 0xA284510B) {
				weaponName = "Grenade Launcher";
			}
			else if (weaponHash == 0x4DD2DC56) {
				weaponName = "Smoke Grenade Launcher";
			}
			else if (weaponHash == 0xB1CA77B1) {
				weaponName = "RPG";
			}
			else if (weaponHash == 0x42BF8A85) {
				weaponName = "Minigun";
			}
			else if (weaponHash == 0x93E220BD) {
				weaponName = "Grenade";
			}
			else if (weaponHash == 0x2C3731D9) {
				weaponName = "Sticky Bomb";
			}
			else if (weaponHash == 0xFDBC8A50) {
				weaponName = "Smoke Grenade";
			}
			else if (weaponHash == 0xA0973D5E) {
				weaponName = "BZGas";
			}
			else if (weaponHash == 0x24B17070) {
				weaponName = "Molotov";
			}
			else if (weaponHash == 0x060EC506) {
				weaponName = "Fire Extinguisher";
			}
			else if (weaponHash == 0x34A67B97) {
				weaponName = "Petrol Can";
			}
			else if (weaponHash == 0xFDBADCED) {
				weaponName = "Digital scanner";
			}
			else if (weaponHash == 0x88C78EB7) {
				weaponName = "Briefcase";
			}
			else if (weaponHash == 0x23C9F95C) {
				weaponName = "Ball";
			}
			else if (weaponHash == 0x497FACC3) {
				weaponName = "Flare";
			}
			else if (weaponHash == 0xF9E6AA4B) {
				weaponName = "Bottle";
			}
			else if (weaponHash == 0x61012683) {
				weaponName = "Gusenberg";
			}
			else if (weaponHash == 0xC0A3098D) {
				weaponName = "Special Carabine";
			}
			else if (weaponHash == 0xD205520E) {
				weaponName = "Heavy Pistol";
			}
			else if (weaponHash == 0xBFD21232) {
				weaponName = "SNS Pistol";
			}
			else if (weaponHash == 0x7F229F94) {
				weaponName = "Bullpup Rifle";
			}
			else if (weaponHash == 0x92A27487) {
				weaponName = "Dagger";
			}
			else if (weaponHash == 0x083839C4) {
				weaponName = "Vintage Pistol";
			}
			else if (weaponHash == 0x7F7497E5) {
				weaponName = "Firework";
			}
			else if (weaponHash == 0xA89CB99E) {
				weaponName = "Musket";
			}
			else if (weaponHash == 0x3AABBBAA) {
				weaponName = "Heavy Shotgun";
			}
			else if (weaponHash == 0xC734385A) {
				weaponName = "Marksman Rifle";
			}
			else if (weaponHash == 0x63AB0442) {
				weaponName = "Homing Launcher";
			}
			else if (weaponHash == 0xAB564B93) {
				weaponName = "Proximity Mine";
			}
			else if (weaponHash == 0x787F0BB) {
				weaponName = "Snowball";
			}
			else if (weaponHash == 0x47757124) {
				weaponName = "Flare Gun";
			}
			else if (weaponHash == 0xE232C28C) {
				weaponName = "Garbage Bag";
			}
			else if (weaponHash == 0xD04C944D) {
				weaponName = "Handcuffs";
			}
			else if (weaponHash == 0x0A3D4D34) {
				weaponName = "Combat PDW";
			}
			else if (weaponHash == 0xDC4DB296) {
				weaponName = "Marksman Pistol";
			}
			else if (weaponHash == 0xD8DF3C3C) {
				weaponName = "Brass Knuckles";
			}
			else if (weaponHash == 0x6D544C99) {
				weaponName = "Railgun";
			}
			else {
				weaponName = "Unarmed";
			}
			Weapon << weaponName;
		}
		else Weapon << "Unarmed";
		Vector3 myCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1);
		Vector3 coords = ENTITY::GET_ENTITY_COORDS(ped, 1);
		std::ostringstream Zone; Zone << "Zone: ~s~" << UI::_GET_LABEL_TEXT(ZONE::GET_NAME_OF_ZONE(coords.x, coords.y, coords.z));
		Hash streetName, crossingRoad;
		PATHFIND::GET_STREET_NAME_AT_COORD(coords.x, coords.y, coords.z, &streetName, &crossingRoad);
		std::ostringstream Street; Street << "Street: ~s~" << UI::GET_STREET_NAME_FROM_HASH_KEY(streetName);
		float distance = Get3DDistance(coords, myCoords);
		std::ostringstream Distance; Distance << "Distance: ~s~";

		if (distance > 1000) {
			distance = round((distance / 1000) * 100) / 100;
			Distance << distance << " Kilometers";
		}
		else {
			distance = round(distance * 1000) / 100;
			Distance << distance << " Meters";
		}

		//AddSmallTitle(playerName);
		AddSmallInfo((char*)Health.str().c_str(), 0);
		AddSmallInfo((char*)Friend.str().c_str(), 1);
		AddSmallInfo((char*)Armor.str().c_str(), 2);
        AddSmallInfo((char*)Alive.str().c_str(), 3);
		AddSmallInfo((char*)IsInAVehicle.str().c_str(), 4);
		AddSmallInfo((char*)VehicleModel.str().c_str(), 5);
		AddSmallInfo((char*)Speed.str().c_str(), 6);
		AddSmallInfo((char*)WantedLevel.str().c_str(), 7);
		AddSmallInfo((char*)Weapon.str().c_str(), 8);
		AddSmallInfo((char*)Zone.str().c_str(), 9);
		AddSmallInfo((char*)Street.str().c_str(), 10);
		AddSmallInfo((char*)Distance.str().c_str(), 11);
	}

	class network_player_vars {
	public:

		// mailcious
		Vector3 m_looped_explosion_offset;
		std::int32_t m_looped_explosion_selected_arr_index{ 0 };
		bool m_looped_explosion_invisible{ false };
		bool m_looped_explosion_audible{ true };
		bool m_looped_explosion_active{ false };

		bool m_take_weapons{ false };
		bool m_freeze_loop{ false };

		// vehicle
		bool m_horn_boost_active{ false };

		// spoofing
		std::string m_spoofing_name{ "" };
		bool m_spoofing_name_active{ false };

		// misc
		bool m_spectate_player{ false };

		// esp
		bool m_esp_line{ false };
		bool m_esp_box{ false };
		bool m_esp_name{ false };

		// 

		std::int32_t m_spam_crash_entity{ 0 };
		bool m_do_spam_crash{ false };

		std::uint64_t m_clone_crash_entity_target{ 0 };
		bool m_do_clone_crash{ false };

		void reset_vars() {

			// mailcious
			m_looped_explosion_offset.x = 0.0f;
			m_looped_explosion_offset.y = 0.0f;
			m_looped_explosion_offset.z = 0.0f;
			m_looped_explosion_selected_arr_index = 0;
			m_looped_explosion_invisible = false;
			m_looped_explosion_audible = true;
			m_looped_explosion_active = false;

			m_take_weapons = false;
			m_freeze_loop = false;

			// vehicle
			m_horn_boost_active = false;

			// spoofing
			m_spoofing_name = "";
			m_spoofing_name_active = false;

			// misc
			m_spectate_player = false;

			// esp
			m_esp_line = false;
			m_esp_box = false;
			m_esp_name = false;

			// crash
			m_spam_crash_entity = 0;
			m_do_spam_crash = false;
		}
	};


	void map_notification(std::string image, std::string title, std::string subtitle) {
		UI::BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE;
		if (!image.empty() && !title.empty() && !subtitle.empty())
			UI::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(image.c_str(), image.c_str(), FALSE, NULL, title.c_str(), subtitle.c_str());
		UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(FALSE, FALSE);
	}

	network_player_vars g_network_player_vars[32];
	template<int i>
	class chat_command_client {
	public:
		bool m_has_access;
		bool m_mod_active[i];
		void revoke_access() {
			for (std::int32_t i = 0; i < ARRAYSIZE(m_mod_active); i++)
				m_mod_active[i] = false;
			m_has_access = false;
		}
	};
	
	bool g_misc_player_join_leave_notify = false;
	static void* (*assign_physical_index_t)(void*, std::uint8_t*, std::uint8_t) = NULL;
	void* assign_physical_index_hook(void* network_player_mgr, uint8_t* net_game_player, uint8_t new_index) {
		if (new_index == 255) {
			if (g_misc_player_join_leave_notify) {
				std::uint64_t player_info = *(std::uint64_t*)(net_game_player + 0xA0);
				if (player_info != NULL) {
					std::stringstream ss;
					ss << "Slot: " << (std::int32_t)(net_game_player[0x21]) << std::endl << "Name: " << (char*)(player_info + 0x84);
					map_notification("CHAR_DEFAULT", "<C>Notice</C>", "~r~Player Leaving");
				}
			}
			if (net_game_player[0x21] >= 0 && net_game_player[0x21] < 32) {
				g_network_player_vars[net_game_player[0x21]].reset_vars();
	
			}
		}
		else if (g_misc_player_join_leave_notify) {
			std::uint64_t player_info = *(std::uint64_t*)(net_game_player + 0xA0);
			if (player_info != NULL) {
				std::stringstream ss;
				ss << "Slot: " << (std::int32_t)(new_index) << std::endl << "Name: " << (char*)(player_info + 0x84);
				map_notification("CHAR_DEFAULT", "<C>Notice</C>", "~g~Player Joining");
			}
		}

	}






	enum CHANGES {
		OFFRADAR1 = 2426097,//154
		OFFRADAR2 = 2440277, //154
		REMOVEWANTED = 1630317,//154
		VEHBYPASS = 4269479, //154
		TUNABLE = 262145, //
		PLAYERSTATS = 1590682, //
		STEALTH = 4265412, //
		REMOTEOTR = 1630317, //
		BLINDEYE = 2540612, //
		DISPLAYHIDDEN1 = 2426097,//
		DISPLAYHIDDEN2 = 2440277,//
		CONTACTREQUESTS = 2540612,//
		BULLSHARK = 2440277,//
		REMOVEWANTEDEVENT = 393068387, //
		INVITEEVENT = 1097312011,//
		REMOTEOTREVENT = 575518757,//
		BLINDEYEEVENT = -392501634,//
		CAMERAEVENT = 1120313136, //
		SENDTOJOBEVENT = -545396442, //
		KICKEVENT = -1252906024, //
		CEOKICKEVENT = -1648921703, //
		CEOBANEVENT = -738295409, //
		TELEPORTEVENT = -171207973, //
		GENTLEKICKEVENT = -1333236192//
	};



	//bool FastSlotMachines = false;
	//void fastslotmachines(bool toggle)
	//{
	//	int value = 0;
	//	STATS::STAT_GET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CASINO_CHIPS_WON_GD"), &value, TRUE); //Casino posix time the player was banned from gambling
	//	if (value > 3000000)
	//	{
	//		globalHandle(TUNABLE).At(26469).As<int>() = INT_MAX; // Max Sell Chips
	//		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CASINO_BAN_TIME"), 0, TRUE); //Casino posix time the player was banned from gambling
	//		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CASINO_CHIPS_WON_GD"), 0, TRUE); //Casino chips the player has won by betting this past gameday
	//		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CHIPS_COL_TIME"), 0, TRUE); //Casino chips the player collected for free - Time this was last collected
	//		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CASINO_CHIPS_PURTIM"), 0, TRUE); //Time of purchase for casino chips from the house
	//		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CASINO_CHIPS_PUR_GD"), 0, TRUE); //Casino chips the player has purchased from the house shop this past gameday
	//		STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_CASINO_CHIPS_PUR_GD"), 0, TRUE); //Casino chips the player has purchased from the house shop this past gameday
	//	}
	//}
	//



	bool CayoIPL = false;
	void cayoipl(bool toggle)
	{
		std::vector<char*> CayoIPL = { "h4_islandx_terrain_01_lod",  "h4_islandx_terrain_01_slod",  "h4_islandx_terrain_02",  "h4_islandx_terrain_02_lod",  "h4_islandx_terrain_02_slod",  "h4_islandx_terrain_03",  "h4_islandx_terrain_03_lod",  "h4_islandx_terrain_04",  "h4_islandx_terrain_04_lod",  "h4_islandx_terrain_04_slod",  "h4_islandx_terrain_05",  "h4_islandx_terrain_05_lod",  "h4_islandx_terrain_05_slod",  "h4_islandx_terrain_06",  "h4_mph4_terrain_01_grass_0",  "h4_mph4_terrain_01_grass_1",  "h4_mph4_terrain_02_grass_0",  "h4_mph4_terrain_02_grass_1",  "h4_mph4_terrain_02_grass_2",  "h4_mph4_terrain_02_grass_3",  "h4_mph4_terrain_04_grass_0",  "h4_mph4_terrain_04_grass_1",  "h4_mph4_terrain_05_grass_0",  "h4_mph4_terrain_06_grass_0",  "h4_islandx_terrain_06_lod",  "h4_islandx_terrain_06_slod",  "h4_islandx_terrain_props_05_a",  "h4_islandx_terrain_props_05_a_lod",  "h4_islandx_terrain_props_05_b",  "h4_islandx_terrain_props_05_b_lod",  "h4_islandx_terrain_props_05_c",  "h4_islandx_terrain_props_05_c_lod",  "h4_islandx_terrain_props_05_d",  "h4_islandx_terrain_props_05_d_lod",  "h4_islandx_terrain_props_05_d_slod",  "h4_islandx_terrain_props_05_e",  "h4_islandx_terrain_props_05_e_lod",  "h4_islandx_terrain_props_05_e_slod",  "h4_islandx_terrain_props_05_f",  "h4_islandx_terrain_props_05_f_lod",  "h4_islandx_terrain_props_05_f_slod",  "h4_islandx_terrain_props_06_a",  "h4_islandx_terrain_props_06_a_lod",  "h4_islandx_terrain_props_06_a_slod",  "h4_islandx_terrain_props_06_b",  "h4_islandx_terrain_props_06_b_lod",  "h4_islandx_terrain_props_06_b_slod",  "h4_islandx_terrain_props_06_c",  "h4_islandx_terrain_props_06_c_lod",  "h4_islandx_terrain_props_06_c_slod",  "h4_mph4_terrain_01",  "h4_mph4_terrain_01_long_0",  "h4_mph4_terrain_02",  "h4_mph4_terrain_03",  "h4_mph4_terrain_04",  "h4_mph4_terrain_05",  "h4_mph4_terrain_06",  "h4_mph4_terrain_06_strm_0",  "h4_mph4_terrain_lod",  "h4_mph4_terrain_occ_00",  "h4_mph4_terrain_occ_01",  "h4_mph4_terrain_occ_02",  "h4_mph4_terrain_occ_03",  "h4_mph4_terrain_occ_04",  "h4_mph4_terrain_occ_05",  "h4_mph4_terrain_occ_06",  "h4_mph4_terrain_occ_07",  "h4_mph4_terrain_occ_08",  "h4_mph4_terrain_occ_09",  "h4_boatblockers",  "h4_islandx",  "h4_islandx_disc_strandedshark",  "h4_islandx_disc_strandedshark_lod",  "h4_islandx_disc_strandedwhale",  "h4_islandx_disc_strandedwhale_lod",  "h4_islandx_props",  "h4_islandx_props_lod",  "h4_islandx_sea_mines",  "h4_mph4_island",  "h4_mph4_island_long_0",  "h4_mph4_island_strm_0",  "h4_aa_guns",  "h4_aa_guns_lod",  "h4_beach",  "h4_beach_bar_props",  "h4_beach_lod",  "h4_beach_party",  "h4_beach_party_lod",  "h4_beach_props",  "h4_beach_props_lod",  "h4_beach_props_party",  "h4_beach_props_slod",  "h4_beach_slod",  "h4_islandairstrip",  "h4_islandairstrip_doorsclosed",  "h4_islandairstrip_doorsclosed_lod",  "h4_islandairstrip_doorsopen",  "h4_islandairstrip_doorsopen_lod",  "h4_islandairstrip_hangar_props",  "h4_islandairstrip_hangar_props_lod",  "h4_islandairstrip_hangar_props_slod",  "h4_islandairstrip_lod",  "h4_islandairstrip_props",  "h4_islandairstrip_propsb",  "h4_islandairstrip_propsb_lod",  "h4_islandairstrip_propsb_slod",  "h4_islandairstrip_props_lod",  "h4_islandairstrip_props_slod",  "h4_islandairstrip_slod",  "h4_islandxcanal_props",  "h4_islandxcanal_props_lod",  "h4_islandxcanal_props_slod",  "h4_islandxdock",  "h4_islandxdock_lod",  "h4_islandxdock_props",  "h4_islandxdock_props_2",  "h4_islandxdock_props_2_lod",  "h4_islandxdock_props_2_slod",  "h4_islandxdock_props_lod",  "h4_islandxdock_props_slod",  "h4_islandxdock_slod",  "h4_islandxdock_water_hatch",  "h4_islandxtower",  "h4_islandxtower_lod",  "h4_islandxtower_slod",  "h4_islandxtower_veg",  "h4_islandxtower_veg_lod",  "h4_islandxtower_veg_slod",  "h4_islandx_barrack_hatch",  "h4_islandx_barrack_props",  "h4_islandx_barrack_props_lod",  "h4_islandx_barrack_props_slod",  "h4_islandx_checkpoint",  "h4_islandx_checkpoint_lod",  "h4_islandx_checkpoint_props",  "h4_islandx_checkpoint_props_lod",  "h4_islandx_checkpoint_props_slod",  "h4_islandx_maindock",  "h4_islandx_maindock_lod",  "h4_islandx_maindock_props",  "h4_islandx_maindock_props_2",  "h4_islandx_maindock_props_2_lod",  "h4_islandx_maindock_props_2_slod",  "h4_islandx_maindock_props_lod",  "h4_islandx_maindock_props_slod",  "h4_islandx_maindock_slod",  "h4_islandx_mansion",  "h4_islandx_mansion_b",  "h4_islandx_mansion_b_lod",  "h4_islandx_mansion_b_side_fence",  "h4_islandx_mansion_b_slod",  "h4_islandx_mansion_entrance_fence",  "h4_islandx_mansion_guardfence",  "h4_islandx_mansion_lights",  "h4_islandx_mansion_lockup_01",  "h4_islandx_mansion_lockup_01_lod",  "h4_islandx_mansion_lockup_02",  "h4_islandx_mansion_lockup_02_lod",  "h4_islandx_mansion_lockup_03",  "h4_islandx_mansion_lockup_03_lod",  "h4_islandx_mansion_lod",  "h4_islandx_mansion_office",  "h4_islandx_mansion_office_lod",  "h4_islandx_mansion_props",  "h4_islandx_mansion_props_lod",  "h4_islandx_mansion_props_slod",  "h4_islandx_mansion_slod",  "h4_islandx_mansion_vault",  "h4_islandx_mansion_vault_lod",  "h4_island_padlock_props",  "h4_mansion_gate_broken",  "h4_mansion_gate_closed",  "h4_mansion_remains_cage",  "h4_mph4_airstrip",  "h4_mph4_airstrip_interior_0_airstrip_hanger",  "h4_mph4_beach",  "h4_mph4_dock",  "h4_mph4_island_lod",  "h4_mph4_island_ne_placement",  "h4_mph4_island_nw_placement",  "h4_mph4_island_se_placement",  "h4_mph4_island_sw_placement",  "h4_mph4_mansion",  "h4_mph4_mansion_b",  "h4_mph4_mansion_b_strm_0",  "h4_mph4_mansion_strm_0",  "h4_mph4_wtowers",  "h4_ne_ipl_00",  "h4_ne_ipl_00_lod",  "h4_ne_ipl_00_slod",  "h4_ne_ipl_01",  "h4_ne_ipl_01_lod",  "h4_ne_ipl_01_slod",  "h4_ne_ipl_02",  "h4_ne_ipl_02_lod",  "h4_ne_ipl_02_slod",  "h4_ne_ipl_03",  "h4_ne_ipl_03_lod",  "h4_ne_ipl_03_slod",  "h4_ne_ipl_04",  "h4_ne_ipl_04_lod",  "h4_ne_ipl_04_slod",  "h4_ne_ipl_05",  "h4_ne_ipl_05_lod",  "h4_ne_ipl_05_slod",  "h4_ne_ipl_06",  "h4_ne_ipl_06_lod",  "h4_ne_ipl_06_slod",  "h4_ne_ipl_07",  "h4_ne_ipl_07_lod",  "h4_ne_ipl_07_slod",  "h4_ne_ipl_08",  "h4_ne_ipl_08_lod",  "h4_ne_ipl_08_slod",  "h4_ne_ipl_09",  "h4_ne_ipl_09_lod",  "h4_ne_ipl_09_slod",  "h4_nw_ipl_00",  "h4_nw_ipl_00_lod",  "h4_nw_ipl_00_slod",  "h4_nw_ipl_01",  "h4_nw_ipl_01_lod",  "h4_nw_ipl_01_slod",  "h4_nw_ipl_02",  "h4_nw_ipl_02_lod",  "h4_nw_ipl_02_slod",  "h4_nw_ipl_03",  "h4_nw_ipl_03_lod",  "h4_nw_ipl_03_slod",  "h4_nw_ipl_04",  "h4_nw_ipl_04_lod",  "h4_nw_ipl_04_slod",  "h4_nw_ipl_05",  "h4_nw_ipl_05_lod",  "h4_nw_ipl_05_slod",  "h4_nw_ipl_06",  "h4_nw_ipl_06_lod",  "h4_nw_ipl_06_slod",  "h4_nw_ipl_07",  "h4_nw_ipl_07_lod",  "h4_nw_ipl_07_slod",  "h4_nw_ipl_08",  "h4_nw_ipl_08_lod",  "h4_nw_ipl_08_slod",  "h4_nw_ipl_09",  "h4_nw_ipl_09_lod",  "h4_nw_ipl_09_slod",  "h4_se_ipl_00",  "h4_se_ipl_00_lod",  "h4_se_ipl_00_slod",  "h4_se_ipl_01",  "h4_se_ipl_01_lod",  "h4_se_ipl_01_slod",  "h4_se_ipl_02",  "h4_se_ipl_02_lod",  "h4_se_ipl_02_slod",  "h4_se_ipl_03",  "h4_se_ipl_03_lod",  "h4_se_ipl_03_slod",  "h4_se_ipl_04",  "h4_se_ipl_04_lod",  "h4_se_ipl_04_slod",  "h4_se_ipl_05",  "h4_se_ipl_05_lod",  "h4_se_ipl_05_slod",  "h4_se_ipl_06",  "h4_se_ipl_06_lod",  "h4_se_ipl_06_slod",  "h4_se_ipl_07",  "h4_se_ipl_07_lod",  "h4_se_ipl_07_slod",  "h4_se_ipl_08",  "h4_se_ipl_08_lod",  "h4_se_ipl_08_slod",  "h4_se_ipl_09",  "h4_se_ipl_09_lod",  "h4_se_ipl_09_slod",  "h4_sw_ipl_00",  "h4_sw_ipl_00_lod",  "h4_sw_ipl_00_slod",  "h4_sw_ipl_01",  "h4_sw_ipl_01_lod",  "h4_sw_ipl_01_slod",  "h4_sw_ipl_02",  "h4_sw_ipl_02_lod",  "h4_sw_ipl_02_slod",  "h4_sw_ipl_03",  "h4_sw_ipl_03_lod",  "h4_sw_ipl_03_slod",  "h4_sw_ipl_04",  "h4_sw_ipl_04_lod",  "h4_sw_ipl_04_slod",  "h4_sw_ipl_05",  "h4_sw_ipl_05_lod",  "h4_sw_ipl_05_slod",  "h4_sw_ipl_06",  "h4_sw_ipl_06_lod",  "h4_sw_ipl_06_slod",  "h4_sw_ipl_07",  "h4_sw_ipl_07_lod",  "h4_sw_ipl_07_slod",  "h4_sw_ipl_08",  "h4_sw_ipl_08_lod",  "h4_sw_ipl_08_slod",  "h4_sw_ipl_09",  "h4_sw_ipl_09_lod",  "h4_sw_ipl_09_slod",  "h4_underwater_gate_closed",  "h4_islandx_placement_01",  "h4_islandx_placement_02",  "h4_islandx_placement_03",  "h4_islandx_placement_04",  "h4_islandx_placement_05",  "h4_islandx_placement_06",  "h4_islandx_placement_07",  "h4_islandx_placement_08",  "h4_islandx_placement_09",  "h4_islandx_placement_10",  "h4_mph4_island_placement" };
		for (int i = 0; i < CayoIPL.size(); i++)
		{
			STREAMING::REQUEST_IPL(CayoIPL[i]);
		}
	}



	bool NorthY = false;
	void northy(bool toggle)
	{
		STREAMING::REQUEST_IPL("prologue01");
		STREAMING::REQUEST_IPL("Prologue01c");
		STREAMING::REQUEST_IPL("Prologue01d");
		STREAMING::REQUEST_IPL("Prologue01e");
		STREAMING::REQUEST_IPL("Prologue01f");
		STREAMING::REQUEST_IPL("Prologue01g");
		STREAMING::REQUEST_IPL("prologue01h");
		STREAMING::REQUEST_IPL("prologue01i");
		STREAMING::REQUEST_IPL("prologue01j");
		STREAMING::REQUEST_IPL("prologue01k");
		STREAMING::REQUEST_IPL("prologue01z");
		STREAMING::REQUEST_IPL("prologue02");
		STREAMING::REQUEST_IPL("prologue03");
		STREAMING::REQUEST_IPL("prologue03b");
		STREAMING::REQUEST_IPL("prologue03_grv_cov");
		STREAMING::REQUEST_IPL("prologue03_grv_dug");
		STREAMING::REQUEST_IPL("prologue03_grv_fun");
		STREAMING::REQUEST_IPL("prologue04");
		STREAMING::REQUEST_IPL("prologue04b");
		STREAMING::REQUEST_IPL("prologue04_cover");
		STREAMING::REQUEST_IPL("prologue05");
		STREAMING::REQUEST_IPL("prologue05b");
		STREAMING::REQUEST_IPL("prologue06");
		STREAMING::REQUEST_IPL("prologue06b");
		STREAMING::REQUEST_IPL("prologue06_int");
		STREAMING::REQUEST_IPL("prologuerd");
		STREAMING::REQUEST_IPL("prologuerdb");
		STREAMING::REQUEST_IPL("prologue_DistantLights");
		STREAMING::REQUEST_IPL("prologue_grv_torch");
		STREAMING::REQUEST_IPL("prologue_m2_door");
		STREAMING::REQUEST_IPL("prologue_LODLights");
		STREAMING::REQUEST_IPL("DES_ProTree_start");
		Vector3 Coords;
			//g_Logger->Info("Set Peds At Coords.");

	}



	inline float GravityGunGoto(float aimX, float entityX)
	{
		static float GravityGunVeloPos;
		if (aimX > 0 && entityX > 0)
		{
			GravityGunVeloPos = aimX - (entityX);
		}

		if (aimX < 0 && entityX < 0)
		{
			GravityGunVeloPos = aimX - (entityX);
		}

		if (aimX > 0 && entityX < 0)
		{
			GravityGunVeloPos = aimX + (entityX);
		}

		if (aimX < 0 && entityX > 0)
		{
			GravityGunVeloPos = aimX + (entityX);
		}

		return GravityGunVeloPos;
	}


	bool Magnet = false;
	void magnet(bool toggle)
	{
		if (toggle)
		{
			static float zoom{ 10.f };

			if (GetAsyncKeyState(VK_RBUTTON))
			{
				if (zoom < 40.f)
				{
					if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 261))
					{
						zoom += 2.f;
					}
				}
				if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 262))
				{
					zoom -= 2.f;

				}
				const int pedElements = 10;
				const int pedArrSize = pedElements * 2 + 2;
				int ped[pedArrSize];
				ped[0] = pedElements;
				int pedcount = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), ped, -1);

				const int numElements = 10;
				const int arrSize = numElements * 2 + 2;
				int veh[arrSize];
				veh[0] = numElements;
				int count = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), veh);



				if (veh != 0 | ped != 0)
				{
					for (int i = 0; i < count; i++)
					{
						int ofsettedID = i * 2 + 2;
						if (ENTITY::IS_ENTITY_A_PED(veh[ofsettedID]) && PED::IS_PED_IN_ANY_VEHICLE(veh[ofsettedID], false))
						{
							veh[ofsettedID] = PED::GET_VEHICLE_PED_IS_IN(veh[ofsettedID], false);
						}

						Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
						Vector3 dir = RotationToDirectionV3(rot);
					     Vector3 pos = AddV3(CAM::GET_GAMEPLAY_CAM_COORD(), MultiplyV3(dir, zoom));
						Vector3 coords = ENTITY::GET_ENTITY_COORDS(veh[ofsettedID], 0);

						GRAPHICS::_DRAW_SPHERE(pos.x, pos.y, pos.z, 4.f, g_UiManager->m_OptionSelectedBackgroundColor.r, g_UiManager->m_OptionSelectedBackgroundColor.g, g_UiManager->m_OptionSelectedBackgroundColor.b, 0.5f);

						RequestControlOfEnt(veh[ofsettedID]);
						RequestControlOfEnt(ped[ofsettedID]);

						float getaimcoorsX = GravityGunGoto(pos.x, coords.x);
						float getaimcoorsY = GravityGunGoto(pos.y, coords.y);
						float getaimcoorsZ = GravityGunGoto(pos.z, coords.z);

						ENTITY::SET_ENTITY_VELOCITY(ped[ofsettedID], getaimcoorsX * 2.f, getaimcoorsY * 2.f, getaimcoorsZ * 2.f);
						ENTITY::SET_ENTITY_VELOCITY(veh[ofsettedID], getaimcoorsX * 2.f, getaimcoorsY * 2.f, getaimcoorsZ * 2.f);
					}
				}
			}
		}
	}


	bool CMagnet = false;
	void cmagnet(bool toggle)
	{
		if (toggle)
		{
			static int zoom = 20;
			static int rotate{};
			if (GetAsyncKeyState(VK_RBUTTON) || CONTROLS::IS_CONTROL_PRESSED(2, 25))
			{
				//STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@lazlow@hi_podium@");
				//BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "anim@amb@nightclub@lazlow@hi_podium@", "danceidle_mi_13_turnaround_laz", 8.f, 8.f, -1, 1, 1, 0, 0, 0);

				rotate += 10;
				UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
				const int numElements = 10;
				const int arrSize = numElements * 2 + 2;
				int veh[arrSize];
				veh[0] = numElements;
				int count = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), veh);
				if (veh != NULL)
				{
					for (int i = 0; i < count; i++)
					{
						int ID = i * 2 + 2;

						RequestControlOfEnt(veh[ID]);
						if (veh[ID] != NULL && ENTITY::DOES_ENTITY_EXIST(veh[ID]))
						{
				

							Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
							Vector3 dir = RotationToDirectionV3(rot);
							Vector3 spawnPosition = AddV3(CAM::GET_GAMEPLAY_CAM_COORD(), MultiplyV3(dir, zoom));

							if (ENTITY::IS_ENTITY_A_PED(veh[ID]) && PED::IS_PED_IN_ANY_VEHICLE(veh[ID], 0))
							{
								veh[ID] = PED::GET_VEHICLE_PED_IS_IN(veh[ID], 0);
							}

				

							Vector3 getcoors1 = ENTITY::GET_ENTITY_COORDS(veh[0], 0);
							Vector3 getcoors2 = ENTITY::GET_ENTITY_COORDS(veh[1], 0);
							Vector3 getcoors3 = ENTITY::GET_ENTITY_COORDS(veh[2], 0);
							Vector3 getcoors4 = ENTITY::GET_ENTITY_COORDS(veh[3], 0);
							Vector3 getcoors5 = ENTITY::GET_ENTITY_COORDS(veh[4], 0);
							Vector3 getcoors6 = ENTITY::GET_ENTITY_COORDS(veh[5], 0);
							Vector3 getcoors7 = ENTITY::GET_ENTITY_COORDS(veh[6], 0);
							Vector3 getcoors8 = ENTITY::GET_ENTITY_COORDS(veh[7], 0);
							Vector3 getcoors9 = ENTITY::GET_ENTITY_COORDS(veh[8], 0);
							Vector3 getcoors10 = ENTITY::GET_ENTITY_COORDS(veh[9], 0);

							float getaimcoorsX1 = GravityGunGoto(spawnPosition.x, getcoors1.x);
							float getaimcoorsY1 = GravityGunGoto(spawnPosition.y, getcoors1.y);
							float getaimcoorsZ1 = GravityGunGoto(spawnPosition.z, getcoors1.z);
							float getaimcoorsX2 = GravityGunGoto(spawnPosition.x, getcoors2.x);
							float getaimcoorsY2 = GravityGunGoto(spawnPosition.y, getcoors2.y);
							float getaimcoorsZ2 = GravityGunGoto(spawnPosition.z, getcoors2.z - 1);
							float getaimcoorsX3 = GravityGunGoto(spawnPosition.x, getcoors3.x);
							float getaimcoorsY3 = GravityGunGoto(spawnPosition.y, getcoors3.y);
							float getaimcoorsZ3 = GravityGunGoto(spawnPosition.z, getcoors3.z - 2);
							float getaimcoorsX4 = GravityGunGoto(spawnPosition.x, getcoors4.x);
							float getaimcoorsY4 = GravityGunGoto(spawnPosition.y, getcoors4.y);
							float getaimcoorsZ4 = GravityGunGoto(spawnPosition.z, getcoors4.z - 3);
							float getaimcoorsX5 = GravityGunGoto(spawnPosition.x, getcoors5.x);
							float getaimcoorsY5 = GravityGunGoto(spawnPosition.y, getcoors5.y);
							float getaimcoorsZ5 = GravityGunGoto(spawnPosition.z, getcoors5.z - 4);
							float getaimcoorsX6 = GravityGunGoto(spawnPosition.x, getcoors6.x);
							float getaimcoorsY6 = GravityGunGoto(spawnPosition.y, getcoors6.y);
							float getaimcoorsZ6 = GravityGunGoto(spawnPosition.z, getcoors6.z - 5);
							float getaimcoorsX7 = GravityGunGoto(spawnPosition.x, getcoors7.x);
							float getaimcoorsY7 = GravityGunGoto(spawnPosition.y, getcoors7.y);
							float getaimcoorsZ7 = GravityGunGoto(spawnPosition.z, getcoors7.z - 6);
							float getaimcoorsX8 = GravityGunGoto(spawnPosition.x, getcoors8.x);
							float getaimcoorsY8 = GravityGunGoto(spawnPosition.y, getcoors8.y);
							float getaimcoorsZ8 = GravityGunGoto(spawnPosition.z, getcoors8.z - 7);
							float getaimcoorsX9 = GravityGunGoto(spawnPosition.x, getcoors9.x);
							float getaimcoorsY9 = GravityGunGoto(spawnPosition.y, getcoors9.y);
							float getaimcoorsZ9 = GravityGunGoto(spawnPosition.z, getcoors9.z - 8);
							float getaimcoorsX10 = GravityGunGoto(spawnPosition.x, getcoors10.x);
							float getaimcoorsY10 = GravityGunGoto(spawnPosition.y, getcoors10.y);
							float getaimcoorsZ10 = GravityGunGoto(spawnPosition.z, getcoors10.z - 9);

							ENTITY::SET_ENTITY_ROTATION(veh[0], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[1], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[2], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[3], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[4], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[5], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[6], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[7], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[8], 0, 0, rotate, 0, 0);
							ENTITY::SET_ENTITY_ROTATION(veh[9], 0, 0, rotate, 0, 0);

							ENTITY::SET_ENTITY_VELOCITY(veh[0], getaimcoorsX1 * 0.5, getaimcoorsY1 * 0.5, getaimcoorsZ1 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[1], getaimcoorsY2 * 0.5, getaimcoorsY2 * 0.5, getaimcoorsZ2 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[2], getaimcoorsX3 * 0.5, getaimcoorsY3 * 0.5, getaimcoorsZ3 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[3], getaimcoorsX4 * 0.5, getaimcoorsY4 * 0.5, getaimcoorsZ4 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[4], getaimcoorsX5 * 0.5, getaimcoorsY5 * 0.5, getaimcoorsZ5 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[5], getaimcoorsX6 * 0.5, getaimcoorsY6 * 0.5, getaimcoorsZ6 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[6], getaimcoorsX7 * 0.5, getaimcoorsY7 * 0.5, getaimcoorsZ7 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[7], getaimcoorsX8 * 0.5, getaimcoorsY8 * 0.5, getaimcoorsZ8 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[8], getaimcoorsX9 * 0.5, getaimcoorsY9 * 0.5, getaimcoorsZ9 * 0.5);
							ENTITY::SET_ENTITY_VELOCITY(veh[9], getaimcoorsX10 * 0.5, getaimcoorsY10 * 0.5, getaimcoorsZ10 * 0.5);

							if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 261) && zoom <= 20)
							{
								zoom += 1;
							}
							if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 262) && zoom >= 5)
							{
								zoom -= 1;
							}
						}
					}
				}
			}
		}
	}


	bool ForceGun = false;
	void forcegun(bool toggle)
	{
		if (toggle)
		{
			Entity EntityTarget;
			Vector3 rot = CAM::GET_GAMEPLAY_CAM_ROT(0);
			Vector3 dir = RotationToDirectionV3(rot);
			if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &EntityTarget))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_A_PED(EntityTarget)
						&& PED::IS_PED_IN_ANY_VEHICLE(EntityTarget, 1)) {
						EntityTarget = PED::GET_VEHICLE_PED_IS_IN(EntityTarget, 0);
					}
					ENTITY::APPLY_FORCE_TO_ENTITY(EntityTarget, 1, dir.x * 100000.0f, dir.y * 100000.0f, dir.z * 100000.0f, 0.0f, 0.0f, 0.0f, 0, 0, 1, 1, 0, 1);
				}
			}
		}
	}

	std::string VehicleMatrixSymbols[35] = {
	"a", "b", "c", "d", "e", "f",
	"g", "h", "i", "j", "k", "l",
	"m", "n", "o", "p", "q", "r",
	"s", "t", "u", "v",	"w", "x",
	"y", "z", "1", "2", "3", "4",
	"5", "6", "7", "8", "9",
	};
	bool VehicleMatrixPlate = false;
	void vehiclematrix(bool toggle)
	{
		if (toggle)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				std::string Input = VehicleMatrixSymbols[rand() % 35] + VehicleMatrixSymbols[rand() % 35] + VehicleMatrixSymbols[rand() % 35] + VehicleMatrixSymbols[rand() % 35] + VehicleMatrixSymbols[rand() % 35] + VehicleMatrixSymbols[rand() % 35] + VehicleMatrixSymbols[rand() % 35] + VehicleMatrixSymbols[rand() % 35] + VehicleMatrixSymbols[rand() % 35];
				char* Text = (strcpy((char*)malloc(Input.length() + 1), Input.c_str()));
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Text);
			}
		}
	}
	std::string VehicleMatrixSymbols2[35] = {
"N", "i", "g", "g", "e", "r",

	};
	bool VehicleMatrixPlate2 = false;
	void vehiclematrix2(bool toggle)
	{
		if (toggle)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				std::string Input = VehicleMatrixSymbols2[rand() % 80] + VehicleMatrixSymbols2[rand() % 80] + VehicleMatrixSymbols2[rand() % 80] + VehicleMatrixSymbols2[rand() % 80] + VehicleMatrixSymbols2[rand() % 80] + VehicleMatrixSymbols2[rand() % 80];
				char* Text = (strcpy((char*)malloc(Input.length() + 1), Input.c_str()));
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Text);
			}
		}

	}

	

	bool Shootrockets = false;
	void shootrocket(bool toggle)
	{
		if (toggle)
		{
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			bool bSelect = GetAsyncKeyState(0x6B); // num plus
			if (bSelect && featureWeaponVehShootLastTime + 150 < GetTickCount() &&
				PLAYER::IS_PLAYER_CONTROL_ON(player) && PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
			{
				Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
				Vector3 v0, v1;
				GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veh), &v0, &v1);
				Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY("WEAPON_RPG");
				if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
				{
					WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, 0);
					while (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
						WAIT(0);
				}
				Vector3 coords0from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -(v1.x + 0.25f), v1.y + 1.25f, 0.1);
				Vector3 coords1from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, (v1.x + 0.25f), v1.y + 1.25f, 0.1);
				Vector3 coords0to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -v1.x, v1.y + 100.0f, 0.1f);
				Vector3 coords1to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, v1.x, v1.y + 100.0f, 0.1f);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords0from.x, coords0from.y, coords0from.z,
					coords0to.x, coords0to.y, coords0to.z,
					250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords1from.x, coords1from.y, coords1from.z,
					coords1to.x, coords1to.y, coords1to.z,
					250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
				featureWeaponVehShootLastTime = GetTickCount();
			}
		}
	}

	bool ShootMini = false;
	void shootminigun(bool toggle)
	{
		if (toggle)
		{
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			bool bSelect = GetAsyncKeyState(0x6B); // num plus
			if (bSelect && featureWeaponVehShootLastTime + 150 < GetTickCount() &&
				PLAYER::IS_PLAYER_CONTROL_ON(player) && PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
			{
				Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
				Vector3 v0, v1;
				GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veh), &v0, &v1);
				Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY("VEHICLE_WEAPON_PLAYER_BULLET");
				if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
				{
					WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, 0);
					while (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
						WAIT(0);
				}
				Vector3 coords0from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -(v1.x + 0.25f), v1.y + 1.25f, 0.1);
				Vector3 coords1from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, (v1.x + 0.25f), v1.y + 1.25f, 0.1);
				Vector3 coords0to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -v1.x, v1.y + 100.0f, 0.1f);
				Vector3 coords1to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, v1.x, v1.y + 100.0f, 0.1f);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords0from.x, coords0from.y, coords0from.z,
					coords0to.x, coords0to.y, coords0to.z,
					250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords1from.x, coords1from.y, coords1from.z,
					coords1to.x, coords1to.y, coords1to.z,
					250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
				featureWeaponVehShootLastTime = GetTickCount();
			}
		}
	}


	bool Shootfireworks = false;
	void shootfirework(bool toggle)
	{
		if (toggle)
		{
			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			bool bSelect = GetAsyncKeyState(0x6B); // num plus
			if (bSelect && featureWeaponVehShootLastTime + 150 < GetTickCount() &&
				PLAYER::IS_PLAYER_CONTROL_ON(player) && PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
			{
				Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
				Vector3 v0, v1;
				GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veh), &v0, &v1);
				Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY("WEAPON_FIREWORK");
				if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
				{
					WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, 0);
					while (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
						WAIT(0);
				}
				Vector3 coords0from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -(v1.x + 0.25f), v1.y + 1.25f, 0.1);
				Vector3 coords1from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, (v1.x + 0.25f), v1.y + 1.25f, 0.1);
				Vector3 coords0to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -v1.x, v1.y + 100.0f, 0.1f);
				Vector3 coords1to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, v1.x, v1.y + 100.0f, 0.1f);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords0from.x, coords0from.y, coords0from.z,
					coords0to.x, coords0to.y, coords0to.z,
					250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords1from.x, coords1from.y, coords1from.z,
					coords1to.x, coords1to.y, coords1to.z,
					250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
				featureWeaponVehShootLastTime = GetTickCount();
			}
		}
	}

	bool ShootTankR = false;
	void shoottankrounds(bool toggle)
	{
		if (toggle)
		{

			Player player = PLAYER::PLAYER_ID();
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			bool bSelect = GetAsyncKeyState(0x6B); // num plus
			if (bSelect && featureWeaponVehShootLastTime + 150 < GetTickCount() &&
				PLAYER::IS_PLAYER_CONTROL_ON(player) && PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
			{
				Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
				Vector3 v0, v1;
				GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veh), &v0, &v1);
				Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY("VEHICLE_WEAPON_TANK");
				if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
				{
					WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, 0);
					while (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
						WAIT(0);
				}
				Vector3 coords0from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -(v1.x + 0.25f), v1.y + 1.25f, 0.1);
				Vector3 coords1from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, (v1.x + 0.25f), v1.y + 1.25f, 0.1);
				Vector3 coords0to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -v1.x, v1.y + 100.0f, 0.1f);
				Vector3 coords1to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, v1.x, v1.y + 100.0f, 0.1f);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords0from.x, coords0from.y, coords0from.z,
					coords0to.x, coords0to.y, coords0to.z,
					250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
				GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords1from.x, coords1from.y, coords1from.z,
					coords1to.x, coords1to.y, coords1to.z,
					250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
				featureWeaponVehShootLastTime = GetTickCount();
			}
		}
	}
	void shootVehBullet(char* bullet) {
		Player player = PLAYER::PLAYER_ID();
		Ped playerPed = PLAYER::PLAYER_PED_ID();
		if (!ENTITY::DOES_ENTITY_EXIST(playerPed)) return;
		bool bSelect = IsKeyPressed(0x6B); // num plus
		if (bSelect && featureWeaponVehShootLastTime + 150 < GetTickCount() &&
			PLAYER::IS_PLAYER_CONTROL_ON(player) && PED::IS_PED_IN_ANY_VEHICLE(playerPed, 0))
		{
			Vehicle veh = PED::GET_VEHICLE_PED_IS_USING(playerPed);
			Vector3 v0, v1;
			GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veh), &v0, &v1);
			Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY(bullet);
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
			{
				WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, 0);
				while (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
					WAIT(0);
			}
			Vector3 coords0from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -(v1.x + 0.25f), v1.y + 1.25f, 0.1);
			Vector3 coords1from = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, (v1.x + 0.25f), v1.y + 1.25f, 0.1);
			Vector3 coords0to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, -v1.x, v1.y + 100.0f, 0.1f);
			Vector3 coords1to = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veh, v1.x, v1.y + 100.0f, 0.1f);
			GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords0from.x, coords0from.y, coords0from.z,
				coords0to.x, coords0to.y, coords0to.z,
				250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
			GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords1from.x, coords1from.y, coords1from.z,
				coords1to.x, coords1to.y, coords1to.z,
				250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
			featureWeaponVehShootLastTime = GetTickCount();
		}
	}
	//bool RedLaserCar = false;
	//void redlasers(bool toggle)
	//{
	//	if (toggle)
	//	{
	//		shootVehBullet("VEHICLE_WEAPON_ENEMY_LASER");
	//	}
	//}
	bool GreenLaserCar = false;
	void greenlasers(bool toggle)
	{
		if (toggle)
		{
			shootVehBullet("VEHICLE_WEAPON_PLAYER_LASER");
		}
	}
	//bool ShootBullet1 = false;
	//void shootbullet(char* bullet) {
	//	Ped playerPed = PLAYER::PLAYER_PED_ID();
	//	float startDistance = distance(&CAM::GET_GAMEPLAY_CAM_COORD(), &ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	//	float endDistance = distance(&CAM::GET_GAMEPLAY_CAM_COORD(), &ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	//	startDistance += 6.25;
	//	endDistance += 1000.0;
	//	if (PED::IS_PED_ON_FOOT(playerPed) && PED::IS_PED_SHOOTING(playerPed))
	//	{
	//		Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY(bullet);
	//		if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
	//		{
	//			WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, false);
	//			while (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
	//				WAIT(0);
	//		}

	//	}
	//}

	Vector3 add3(Vector3* vectorA, Vector3* vectorB)
	{
		Vector3 result;
		result.x = vectorA->x;
		result.y = vectorA->y;
		result.z = vectorA->z;
		result.x += vectorB->x;
		result.y += vectorB->y;
		result.z += vectorB->z;
		return result;
	}

	Vector3 multiply3(Vector3* vector, float x)
	{
		Vector3 result;
		result.x = vector->x;
		result.y = vector->y;
		result.z = vector->z;
		result.x *= x;
		result.y *= x;
		result.z *= x;
		return result;
	}

	void shootBullet(char* bullet) {
		Ped playerPed = PLAYER::PLAYER_PED_ID();
		float startDistance = distance(&CAM::GET_GAMEPLAY_CAM_COORD(), &ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		float endDistance = distance(&CAM::GET_GAMEPLAY_CAM_COORD(), &ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		startDistance += 6.25;
		endDistance += 1000.0;
		if (PED::IS_PED_ON_FOOT(playerPed) && PED::IS_PED_SHOOTING(playerPed))
		{
			Hash weaponAssetRocket = GAMEPLAY::GET_HASH_KEY(bullet);
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
			{
				WEAPON::REQUEST_WEAPON_ASSET(weaponAssetRocket, 31, false);
				while (!WEAPON::HAS_WEAPON_ASSET_LOADED(weaponAssetRocket))
					WAIT(0);
			}
			GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(add3(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply3(&rotDirection(&CAM::GET_GAMEPLAY_CAM_ROT(0)), startDistance)).x, add3(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply3(&rotDirection(&CAM::GET_GAMEPLAY_CAM_ROT(0)), startDistance)).y, add3(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply3(&rotDirection(&CAM::GET_GAMEPLAY_CAM_ROT(0)), startDistance)).z, add3(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply3(&rotDirection(&CAM::GET_GAMEPLAY_CAM_ROT(0)), endDistance)).x, add3(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply3(&rotDirection(&CAM::GET_GAMEPLAY_CAM_ROT(0)), endDistance)).y, add3(&CAM::GET_GAMEPLAY_CAM_COORD(), &multiply3(&rotDirection(&CAM::GET_GAMEPLAY_CAM_ROT(0)), endDistance)).z, 250, 1, weaponAssetRocket, playerPed, 1, 0, -1.0);
		}
	}

	bool FrWrkT = false;
	void frwrk(bool toggle)
	{
		if (toggle)
		{
			shootBullet("WEAPON_FIREWORK");
		}
	}


	//bool MolotovGun = false;
	//void molotovgun(bool toggle)
	//{
	//	if (toggle)
	//	{
	//	shootBullet("WEAPON_MOLOTOV");
	//}
	//}
	bool FlareGun = false;
	void flaregun(bool toggle) 
		{
			if (toggle)
			{

				shootBullet("WEAPON_FLARE");
			}
		}

	bool C4 = false;
	void c4(bool toggle)
	{
		if (toggle)
		{

			shootBullet("WEAPON_STICKYBOMB");
		}
	}


	bool LOL = false;
	void lol(bool toggle)
	{
		if (toggle)
		{

			shootBullet("WEAPON_RAILGUN");
		}
	}

	bool LOL2 = false;
	void lol2(bool toggle)
	{
		if (toggle)
		{

			shootBullet("WEAPON_STUNGUN");
		}
	}
	bool LOL3 = false;
	void lol3(bool toggle)
	{
		if (toggle)
		{

			shootBullet("WEAPON_ASSAULTSHOTGUN");
		}
	}




		void Function_update_Loop()
	    {
		godmode();
		invisible(/*now is that bool toggle verified bt bool Invisible so this bool have now controll over invisible(bool toggle)*/Invisible);
		superjump(SuperJump);

		beastjump(BeastJump);
		lol2(LOL2);
		lol(LOL);
		c4(C4);
		flaregun(FlareGun);
		//molotovgun(MolotovGun);
		frwrk(FrWrkT);
		shootrocket(Shootrockets);
		greenlasers(GreenLaserCar);
	/*	redlasers(RedLaserCar);*/
		shootminigun(ShootMini);
		shootfirework(Shootfireworks);
		shoottankrounds(ShootTankR);
	/*	shootbullet(ShootBullet1);*/


		vehiclematrix(VehicleMatrixPlate);
		vehiclematrix2(VehicleMatrixPlate2);

		worldglow(WorldGlow);

		swimanywhere(SwimAnywhere);

	/*	shotgun2(ShotGun2);*/

		test1(TEST1);

		test2(TEST2);
		test3(TEST3);
		test4(TEST4);
		pushvehfun(PushVehFun);

		expvehfun(ExpVehFun);
		forcegun(ForceGun);
		cayoipl(CayoIPL);

		northy(NorthY);

		cmagnet(CMagnet);
		magnet(Magnet);

		dominos(Dominos);
		firebr(FireBr);

		//speedmodifier(m_fastrun, m_fastswim);

		lagplayer(LAGPLAYER);

		//fastslotmachines(FastSlotMachines);

		//camerazoombool(CAMERAZOOMBOOL);


		//accelerationgun(AccelerationGun);
		//autoteleporttowaypoint(AutoTeleportToWaypoint);

		forcefield(ForceField);

		insveh(InsVeh);

		cleararea(ClearArea);

		exploam(ExploAm);

		bypassrestrictedarea(BypassRestrictedArea);

	
		//autogiveweap(AutoGiveWeap);

		setRPGGun(RPGg);


		antiafk2(AntiAFK2);

		copsturn(CopsTurn);
		snowing(Snowing);



		setValkyire(f_Valkyire);


		setWantedLevel(f_SetWanted);


		rainbowtiresmoke(RainbowTireSmoke);



		rainbowneons(RainbowNeons);




		disablehud(DisableHud);

		//WorldGlow(m_WorldGlow);

		

		disablephone(DisablePhone);

		forcecross(ForceCross);


		superbrakes(SuperBrakes);

		jumparound(JumpAround);
		ufoevent(UFOEvent);

		eletricrun(EletricRun);

		rainbowvw(RainbowVW);

		setExplodeCars(f_ExplodeCars);
		setPushCars(f_PushCars);
		setPersuadeDance(f_PersueadeDance);
		//setPersuadeRiot(f_PersueadeRiot);
		//setPersuadeFollowMe(f_PersueadeFollowme);
		//setPersuadePushUps(f_PersueadePushUps);
		//setBurnPeds(f_BurnPeds);
		//setThrowPeds(f_ThrowPeds);
		//setPushPeds(f_PushPeds);
		//setLaunchCars(f_ForceLaunch);


		//drop(DroP);
		
		neverwanted(NeverWanted);
		vehinvisible(VehInvisible);
		walkonwater(WalkOnWater);
		flycar(FlyCar);
		superrun(SuperRun);
		noclip(NoClip);

		noclipv2(NoclipV2);



		backhornboost(BackHornBoost);

		//setRandomAnimalGun(f_RandomAnimalGun);


		fireloop(FireLoop);

		waterloop(WaterLoop);


		disco(DiscO);


		stickytires(StickyTires);

		superman(SuperMan);
		explosiveammo(ExplosiveAmmo);

		explosiveammo2(ExplosiveAmmo2);

		//discordrpc(DiscordRPC);


		//vehparachute(VehParachute);

		flygun(FlyGun);

		rpdrop(RPDrop);

		stealthyes1mil(StealthYES1MIL);

		stimulatecard(StimulateCard);
	
		stealth7mil(Stealth7Mil);
		stealth7mil2(Stealth7Mil2);
		stealth7mil3(Stealth7Mil3);
		stealth7mil4(Stealth7Mil4);
		stealth7mil5(Stealth7Mil5);


		stealthloop(g_stealth);

		recovery850k(Recovery850K);

		stealthyes(stealthYES);

		offtheradar(OffTheRadar);

		moneygun(MoneyGun);
		moneygun2(MoneyGun2);
		moneygun3(MoneyGun3);
		hornboost(HornBoost);
		teleportgun(TeleportGun);
		airstrikegun(AirstrikeGun);
		gravitygun(GravityGun);
		watergun(WaterGun);
		pedgun(PedGun);
		pedgun2(PedGun2);
		infiniteammo(InfiniteAmmo);
		nogravity(NoGravity);
		offradar(OffRadar);
		kickprotec(KickProtec);
		carcolor(CarColor);
		shower(Shower);
		aimbot(AimBot);
		clowngun(ClownGun);
		expgun(ExpGun);
		driveonwater(DriveOnWater);
		vehiclejump(VehicleJump);
		jumpingvehicles(JumpingVehicles);
		noragdoll(NoRagdoll);
		thermalvision(ThermalVision);
		nightvision(NightVision);
		killpeds(KillPeds);
		autoflip(AutoFlip);
		autofix(AutoFix);
		vehiclegodmode(VehicleGodmode);
		driftmode(DriftMode);
		destroygun(DestroyGun);
		playerfly(PlayerFly);

		handtrails(m_Handtrails);

		spinbot(SpinBot);



		beastjump2(BeastJump2);

		fastrespawn(FastRespawn);


		mil40loop(Mil40Loop);


		paintg(PaintG);
	
		shockwave(ShockWave);
		cargoplane(CARGOPLANE);
		tinygun(TinyGun);
		flameammo(Flameammo);

		//Carnado(g_Carnado);



		//fireloop(FireLoop);
		//waterloop(WaterLoop);

		afk(AFK);
		//fireworksgun(FireworksGun);
		explosivemelee(ExplosiveMelee);
		
		crash(Crash);
		glitchvehicle(GlitchVehicle);
		driveunderwater(DriveUnderWater);
		ninjajump(NinjaJump);
		fps(FPS);
		version(Version);
		gamev(Gamev);
		destroyphone(DestroyPhone);
		mobileradio(MobileRadio);
		hidehud(HideHud);
		espbox(ESPBox);
		espline(ESPLine);
		slowmotion(SlowMotion);
		Width;
		Height;
		Alpha;
		foottrails(FootTrails);
		
		mgun(McGun);

		flyingcar(PlayerFlyingcar);


		vehicletrails(VehicleTrails);
		flash(Flash);
		alwayswanted(AlwaysWanted);
		handtrails(HandTrails);
	
		spectateplayer(SpectatePlayer);
		spectateplayer2(SpectatePlayer2);

	
		freezep(FreezeP);
		tphotkey(TPHotkey);
		nocliphotkey(NoclipHotkey);
		circledrop(circleDrop);
		yoinkgun(YoinkGun);

		shootveh(ShootVehicle);

		shootveh2(ShootVehicle2);


	

		vomit2(vomit);
		rainbowcamo(RainbowCamo);
		lasersight(LaserSight);
		rapidfire(RapidFire);
		alwaysragdoll(AlwaysRagdoll);
		proofs;
		deadeye(DeadEye);
		spedometer(Spedometer);
		playernames(PlayerNames);
	}



	std::set<Ped> lastSeenPeds;

	//=================
	// PED FUNCTIONS
	//=================

	Ped ClonePed(Ped ped)
	{
		if (ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::IS_ENTITY_DEAD(ped))
		{
			return PED::CLONE_PED(ped, ENTITY::GET_ENTITY_HEADING(ped), 1, 1);
		}

		return 0;
	}

	Ped CreatePed(char* PedName, Vector3 SpawnCoordinates, int ped_type, bool network_handle)
	{
		Ped NewPed;
		int PedHash = GAMEPLAY::GET_HASH_KEY(PedName);
		if (STREAMING::IS_MODEL_IN_CDIMAGE(PedHash))
		{
			if (STREAMING::IS_MODEL_VALID(PedHash))
			{
				STREAMING::REQUEST_MODEL(PedHash);
				while (!STREAMING::HAS_MODEL_LOADED(PedHash)) WAIT(0);

				NewPed = PED::CREATE_PED(ped_type, PedHash, SpawnCoordinates.x, SpawnCoordinates.y, SpawnCoordinates.z, 0, network_handle, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(PedHash);
				return NewPed;
			}
		}

		return -1;
	}

	//Animations
	void LoadAnim(char* dict)
	{
		STREAMING::REQUEST_ANIM_DICT(dict);
		while (!STREAMING::HAS_ANIM_DICT_LOADED(dict))
			WAIT(0);
	}

	void playAnimation(Ped ped, bool loop, char* dict, char* anim)
	{
		LoadAnim(dict);
		int a = -1;
		int b = 1;

		/*if (!loop)
		{
			a = 1;
			b = 0;
		}*/

		AI::TASK_PLAY_ANIM(ped, dict, anim, 8.0, 0.0, -1, 0, 0, 0, 0, 0);

	}

	//Skins
	bool applyChosenSkin(DWORD model)
	{
		if (STREAMING::IS_MODEL_IN_CDIMAGE(model) && STREAMING::IS_MODEL_VALID(model))
		{
			STREAMING::REQUEST_MODEL(model);
			while (!STREAMING::HAS_MODEL_LOADED(model))
			{
				WAIT(0);
			}

			Vehicle veh = NULL;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				veh = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}

			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			//PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), FALSE);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(0);

			if (veh != NULL)
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veh, -1);
			}

			WAIT(100);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);

			return true;
		}
		return false;
	}

	bool applyChosenSkin(std::string skinName)
	{
		DWORD model = GAMEPLAY::GET_HASH_KEY((char*)skinName.c_str());
		return applyChosenSkin(model);
	}

	//CONTROL
	void RequestControlOfid(Entity netid)
	{
		int tick = 0;

		while (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(netid) && tick <= 25)
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(netid);
			tick++;
		}
	}

	void RequestControlOfEnt(Entity entity)
	{
		int tick = 0;
		while (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entity) && tick <= 25)
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(entity);
			tick++;
		}
		if (NETWORK::NETWORK_IS_SESSION_STARTED())
		{
			int netID = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(entity);
			RequestControlOfid(netID);
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(netID, 1);
		}
	}




































	//FORCE
	void ApplyForceToEntity(Entity e, float x, float y, float z)
	{
		if (e != PLAYER::PLAYER_PED_ID() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(e) == FALSE)
		{
			RequestControlOfEnt(e);
		}

		ENTITY::APPLY_FORCE_TO_ENTITY(e, 1, x, y, z, 0, 0, 0, 0, 1, 1, 1, 0, 1);

	}

	//NEARBY PEDS
	std::set<Ped> getNearbyPeds()
	{
		return lastSeenPeds;
	}

	void update_nearby_peds(Ped playerPed, int count)
	{
		const int numElements = count;
		const int arrSize = numElements * 2 + 2;

		Ped* peds = new Ped[arrSize];
		peds[0] = numElements;
		int found = PED::GET_PED_NEARBY_PEDS(playerPed, peds, -1);

		for (int i = 0; i < found; i++)
		{
			int offsettedID = i * 2 + 2;

			if (!ENTITY::DOES_ENTITY_EXIST(peds[offsettedID]))
			{
				continue;
			}

			Ped xped = peds[offsettedID];

			bool inSet = lastSeenPeds.find(xped) != lastSeenPeds.end();
			if (!inSet)
			{
				lastSeenPeds.insert(xped);
			}
		}

		std::set<Ped>::iterator it;
		for (it = lastSeenPeds.begin(); it != lastSeenPeds.end();)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*it))
			{
				lastSeenPeds.erase(it++);
			}
			else
			{
				++it;
			}
		}

		delete peds;
	}

	//CALM PEDS
	void set_all_nearby_peds_to_calm()
	{
		for each (Ped xped in lastSeenPeds)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(xped, true);
			PED::SET_PED_FLEE_ATTRIBUTES(xped, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(xped, 17, 1);
		}
	}

	//Converts Radians to Degrees
	float degToRad(float degs)
	{
		return degs * 3.141592653589793f / 180.f;
	}

	//little one-line function called '$' to convert $TRING into a hash-key:
	Hash $(std::string str) {
		return GAMEPLAY::GET_HASH_KEY(&str[0u]);
	}

	// quick function to get - coords - of - entity:
	Vector3 coordsOf(Entity entity) {
		return ENTITY::GET_ENTITY_COORDS(entity, 1);
	}

	//quick function to get distance between 2 points: eg - if (distanceBetween(coordsOf(player), targetCoords) < 50)
	float distanceBetween(Vector3 A, Vector3 B) {
		return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(A.x, A.y, A.z, B.x, B.y, B.z, 1);
	}

	//quick "get random int in range 0-x" function:
	int rndInt(int start, int end) {
		return GAMEPLAY::GET_RANDOM_INT_IN_RANGE(start, end);
	}

	//In Game KEYBOARD
	std::string show_keyboard(char* title_id, char* prepopulated_text)
	{
		DWORD time = GetTickCount() + 400;
		while (GetTickCount() < time)
		{
			WAIT(0);
		}

		GAMEPLAY::DISPLAY_ONSCREEN_KEYBOARD(true, (title_id == NULL ? "HUD_TITLE" : title_id), "", (prepopulated_text == NULL ? "" : prepopulated_text), "", "", "", 64);

		while (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0)
		{
			WAIT(0);
		}

		std::stringstream ss;
		if (!GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT())
		{
			return std::string("");
		}
		else
		{
			return std::string(GAMEPLAY::GET_ONSCREEN_KEYBOARD_RESULT());
		}
	}

	//VEHICLE
	static std::string lastvehmodel("");
	bool get_vehicle_keyboard_result(uint* outModel)
	{
		std::string result = show_keyboard("FMMC_KEY_TIP", &lastvehmodel[0]);
		if (!result.empty())
		{
			uint model = $(result);
			if (!STREAMING::IS_MODEL_IN_CDIMAGE(model) || !STREAMING::IS_MODEL_A_VEHICLE(model))
			{
				lastvehmodel = "";
				//notifyBottom("~HUD_COLOUR_RED~Not A Valid Model!");
				return false;
			}

			else
			{
				STREAMING::REQUEST_MODEL(model);
				DWORD now = GetTickCount();
				while (!STREAMING::HAS_MODEL_LOADED(model) && GetTickCount() < now + 5000)
				{
					WAIT(0);
				}

				if (!STREAMING::HAS_MODEL_LOADED(model))
				{
					lastvehmodel = "";
					std::ostringstream ss2;
					ss2 << "~HUD_COLOUR_RED~ Timed out requesting  " << result << " : 0x" << model;
					//				notifyBottom(ss2.str());
					return false;
				}

				lastvehmodel = result;
				*outModel = model;
				return true;
			}

		}

		return false;
	}

	//VECTOR AND FLOAT FUNCTIONS
	Vector3 rot_to_direction(Vector3* rot) {
		float radiansZ = rot->z * 0.0174532924f;
		float radiansX = rot->x * 0.0174532924f;
		float num = abs((float)cos((double)radiansX));
		Vector3 dir;
		dir.x = (float)((double)((float)(-(float)sin((double)radiansZ))) * (double)num);
		dir.y = (float)((double)((float)cos((double)radiansZ)) * (double)num);
		dir.z = (float)sin((double)radiansX);
		return dir;
	}

	Vector3 add(Vector3* vectorA, Vector3* vectorB) {
		Vector3 result;
		result.x = vectorA->x;
		result.y = vectorA->y;
		result.z = vectorA->z;
		result.x += vectorB->x;
		result.y += vectorB->y;
		result.z += vectorB->z;
		return result;
	}

	Vector3 multiply(Vector3* vector, float x) {
		Vector3 result;
		result.x = vector->x;
		result.y = vector->y;
		result.z = vector->z;
		result.x *= x;
		result.y *= x;
		result.z *= x;
		return result;
	}

	float get_distance(Vector3* pointA, Vector3* pointB) {
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
		return(float)sqrt(sum_2 + z_ba);
	}

	float get_vector_length(Vector3* vector) {
		double x = (double)vector->x;
		double y = (double)vector->y;
		double z = (double)vector->z;
		return(float)sqrt(x * x + y * y + z * z);
	}

	//NOTIFICATIONS
	/*
	Colours:
	~r~ = Red
	~b~ = Blue
	~g~ = Green
	~y~ = Yellow
	~p~ = Purple
	~o~ = Orange
	~c~ = Grey
	~m~ = Dark Grey
	~u~ = Black
	~n~ = Skip Line
	~s~ = White
	~d~ = dark blue
	~f~ = light blue
	~l~ = black
	~t~ = gray
	~v~ = black

	Fonts:
	~italic~ = italic font
	~bold~ = bold font
	*/


	// 1 WHITE
	// 2 Unknown
	// 5 Grey
	// 6 Red
	// 7 weak red
	// 8 dark red

	void notify_Custom(char* Head_txt, char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);
		//
		char buff2[2048] = { 0 };
		sprintf_s(buff2, "%s", buf);

		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(/*ytd file name "DO NOT USE .ytd"*/"scooby", false);
		while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(/*ytd file name "DO NOT USE .ytd"*/"scooby")) WAIT(0);

		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(fmt);
		UI::_SET_NOTIFICATION_MESSAGE_CLAN_TAG_2(/*ytd file name "DO NOT USE .ytd"*/"scooby", /*Texture name inside ytd file*/"", false, 1, "scooby", Head_txt, 1, "", 9, 0); //  can create a custom ytd icon
		UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(8000, 0);


		UI::_SET_NOTIFICATION_MESSAGE("icon", "icon", 1, 9, 1, Head_txt, fmt);
	//	UI::_SET_NOTIFICATION_MESSAGE_CLAN_TAG_2("icon", "icon", 1, 8, ELB, Head_txt, 1, "Best Menu", 9, 0);
		//UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(FALSE, FALSE);

	} void notify_Custom(std::string str1, std::string str) { notify_Custom(&str1[0], &str[0]); }

	void notify_Original(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);
		//
		char buff2[2048] = { 0 };
		sprintf_s(buff2, "~b~Scooby injected! Open with F4.", buf);

		UI::_SET_NOTIFICATION_BACKGROUND_COLOR(5);
		UI::BEGIN_TEXT_COMMAND_THEFEED_POST((char*)"STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
	} void notify_Original(std::string str) { notify_Original(&str[0]); }

	void notify_Red(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);
		//
		char buff2[2048] = { 0 };
		sprintf_s(buff2, "%s injected! Open with F4.", buf);

		UI::_SET_NOTIFICATION_BACKGROUND_COLOR(2);
		UI::_SET_NOTIFICATION_FLASH_COLOR(0, 0, 255, 255);
		UI::BEGIN_TEXT_COMMAND_THEFEED_POST((char*)"STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
	} void notify_Red(std::string str) { notify_Red(&str[0]); }

	void notify_Green(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);
		//
		char buff2[2048] = { 0 };
		sprintf_s(buff2, "%s unloaded!", buf);

		UI::_SET_NOTIFICATION_BACKGROUND_COLOR(11);
		UI::_SET_NOTIFICATION_FLASH_COLOR(0, 0, 255, 255);
		UI::BEGIN_TEXT_COMMAND_THEFEED_POST((char*)"STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
	} void notify_Green(std::string str) { notify_Green(&str[0]); }

	char status_text[2048] = { 0 };
	void update_status_text()
	{
		if (GetTickCount() < 2500)
		{
			UI::SET_TEXT_FONT(0);
			UI::SET_TEXT_SCALE(0.55f, 0.55f);
			UI::SET_TEXT_COLOUR(255, 255, 255, 255);
			UI::SET_TEXT_WRAP(0.0f, 1.0f);
			UI::SET_TEXT_CENTRE(1);
			UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
			UI::SET_TEXT_EDGE(1, 0, 0, 0, 205);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(status_text);
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(0.5, 0.5);
		}
	}

	void notifyleft(char* msg)
	{
		UI::BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(msg);
		UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(2000, 1);
	}

	void teleport_to_coords(Entity e, Vector3 coords)
	{
	}

	void notifyBottom(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);

		char buff2[2048] = { 0 };
		sprintf_s(buff2, "~b~scooby has been injected. Open with F5.", buf);

		UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_PRINT(9000, 1);
	}	void notifyBottom(std::string str) { notifyBottom(&str[0]); }



	void notifyBottom3(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);

		char buff2[2048] = { 0 };
		sprintf_s(buff2, "~b~scooby has been injected. Open with F5.", buf);

		UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_PRINT(9000, 1);
	}	void notifyBottom3(std::string str) { notifyBottom3(&str[0]); }



	void notifyBottom5(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);

		char buff2[2048] = { 0 };
		sprintf_s(buff2, "~g~Join a new ~p~session to set your ~y~level.", buf);

		UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_PRINT(9000, 1);
	}	void notifyBottom5(std::string str) { notifyBottom5(&str[0]); }

	void notifyBottom6(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);

		char buff2[2048] = { 0 };
		sprintf_s(buff2, "Need to restart your game", buf);

		UI::BEGIN_TEXT_COMMAND_PRINT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_PRINT(9000, 1);
	}	void notifyBottom6(std::string str) { notifyBottom6(&str[0]); }



	void notifyMap(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);

		char buff2[2048] = { 0 };
		sprintf_s(buff2, "~b~Project ~y~Ice ~w~has loaded open with F5", buf);

		UI::SET_TEXT_OUTLINE();
		UI::_SET_NOTIFICATION_FLASH_COLOR(0, 0, 255, 255);
		UI::BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(FALSE, FALSE);
	}	void notifyMap(std::string str) { notifyMap(&str[0]); }




	void notifyMapRank(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);

		char buff2[2048] = { 0 };
		sprintf_s(buff2, "Join a new session to set your level", buf);

		UI::SET_TEXT_OUTLINE();
		UI::_SET_NOTIFICATION_FLASH_COLOR(0, 0, 255, 255);
		UI::BEGIN_TEXT_COMMAND_THEFEED_POST("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(buff2);
		UI::END_TEXT_COMMAND_THEFEED_POST_TICKER(FALSE, FALSE);
	}	void notifyRank(std::string str) { notifyMapRank(&str[0]); }






	void notifyCenter(char* fmt, ...)
	{
		char buf[2048] = { 0 };
		va_list va_alist;

		va_start(va_alist, fmt);
		vsprintf_s(buf, fmt, va_alist);
		va_end(va_alist);

		sprintf_s(status_text, "%s", buf);
	}	void notifyCenter(std::string str) { notifyCenter(&str[0]); }

	//DRAWING FUNCTIONS
	void draw_rect(float A_0, float A_1, float A_2, float A_3, int A_4, int A_5, int A_6, int A_7)
	{
		GRAPHICS::DRAW_RECT((A_0 + (A_2 * 0.5f)), (A_1 + (A_3 * 0.5f)), A_2, A_3, A_4, A_5, A_6, A_7);
	}

	void draw_menu_line(std::string caption, float lineWidth, float lineHeight, float lineTop, float lineLeft, float textLeft, bool active, bool title, bool rescaleText)
	{
		// default values
		int text_col[4] = { 255, 255, 255, 255 },
			rect_col[4] = { 0, 0, 0, 80 };
		float text_scale = 0.30f;
		int font = 0;
		bool outline = true;
		bool dropshadow = true;

		// correcting values for active line
		if (active)
		{

			outline = false;
			dropshadow = true;
			text_col[0] = 0;
			text_col[1] = 0;
			text_col[2] = 0;
			text_col[3] = 255;

			rect_col[0] = 255;
			rect_col[1] = 255;
			rect_col[2] = 255;
			rect_col[3] = 80;

			if (rescaleText)text_scale = 0.30f;
		}

		if (title)
		{
			outline = true;
			dropshadow = true;
			text_col[0] = 255;
			text_col[1] = 255;
			text_col[2] = 255;
			text_col[3] = 255;

			rect_col[0] = 93;
			rect_col[1] = 182;
			rect_col[2] = 229;
			rect_col[2] = 255;

			if (rescaleText)text_scale = 0.36f;
			font = 0;
		}

		int screen_w, screen_h;
		GRAPHICS::GET_SCREEN_RESOLUTION(&screen_w, &screen_h);

		textLeft += lineLeft;

		float lineWidthScaled = lineWidth / (float)screen_w; // line width
		float lineTopScaled = lineTop / (float)screen_h; // line top offset
		float textLeftScaled = textLeft / (float)screen_w; // text left offset
		float lineHeightScaled = lineHeight / (float)screen_h; // line height

		float lineLeftScaled = lineLeft / (float)screen_w;

		// this is how it's done in original scripts

		// text upper part
		UI::SET_TEXT_FONT(font);
		UI::SET_TEXT_SCALE(0.0, text_scale);
		UI::SET_TEXT_COLOUR(text_col[0], text_col[1], text_col[2], text_col[3]);
		UI::SET_TEXT_CENTRE(0);
		if (outline)
		{
			UI::SET_TEXT_EDGE(1, 255, 215, 0, 255); //UI::SET_TEXT_OUTLINE();
		}

		if (dropshadow)
		{
			UI::SET_TEXT_DROPSHADOW(5, 0, 78, 255, 255);
		}
		UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((LPSTR)caption.c_str());
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(textLeftScaled, (((lineTopScaled + 0.00278f) + lineHeightScaled) - 0.005f));

		// text lower part
		UI::SET_TEXT_FONT(font);
		UI::SET_TEXT_SCALE(0.0, text_scale);
		UI::SET_TEXT_COLOUR(text_col[0], text_col[1], text_col[2], text_col[3]);
		UI::SET_TEXT_CENTRE(0);
		if (outline)
		{
			UI::SET_TEXT_EDGE(1, 255, 215, 0, 255); //UI::SET_TEXT_OUTLINE();
		}

		if (dropshadow)
		{
			UI::SET_TEXT_DROPSHADOW(5, 0, 78, 255, 255);
		}
		UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME((LPSTR)caption.c_str());
		int num25 = UI::_GET_TEXT_SCREEN_LINE_COUNT(textLeftScaled, (((lineTopScaled + 0.00278f) + lineHeightScaled) - 0.005f));

		// rect
		draw_rect(lineLeftScaled, lineTopScaled + (0.00278f),
			lineWidthScaled, ((((float)(num25)*UI::_GET_TEXT_SCALE_HEIGHT(text_scale, 0)) + (lineHeightScaled * 1.0f)) + 0.005f),
			rect_col[0], rect_col[1], rect_col[2], rect_col[3]);
	}

	// Good Header Options

	bool HeaderImage = 1;

	char str[69];
	char* Add_Strings(char* string1, char* string2)
	{
		memset(str, 0, sizeof(str));
		strcpy_s(str, "");
		strcpy_s(str, string1);
		strcat_s(str, string2);
		return str;
	}
	std::string Documents_Patha()
	{
		wchar_t Folder[1024];
		HRESULT hr = SHGetFolderPathW(nullptr, CSIDL_APPDATA, nullptr, 0, Folder);
		if (SUCCEEDED(hr))
		{
			char str[1024];
			wcstombs(str, Folder, 1023);
			return Add_Strings(str, (char*)_strdup(Menu_Path.c_str())); // this is your Folder where its going to fint your ytd file
		}
		return "";
	}


	void AddTimeNetwork(int a, int b, int c)
	{
		NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(a, b, c);
	}
}




//Vector3 RotationToDirectionV3(Vector3 rot) {
//	Vector3 dir;
//	float radiansZ = rot.z * 0.0174532924f;
//	float radiansX = rot.x * 0.0174532924f;
//	float num = abs((float)cos((double)radiansX));
//	dir.x = (float)((double)((float)(-(float)sin((double)radiansZ))) * (double)num);
//	dir.y = (float)((double)((float)cos((double)radiansZ)) * (double)num);
//	dir.z = (float)sin((double)radiansX);
//	return dir;
//}
//Vector3 AddV3(Vector3 vectorA, Vector3 vectorB) {
//	Vector3 result;
//	result.x = vectorA.x;
//	result.y = vectorA.y;
//	result.z = vectorA.z;
//	result.x += vectorB.x;
//	result.y += vectorB.y;
//	result.z += vectorB.z;
//	return result;
//}
//
//Vector3 MultiplyV3(Vector3 vector, float x) {
//	Vector3 result;
//	result.x = vector.x;
//	result.y = vector.y;
//	result.z = vector.z;
//	result.x *= x;
//	result.y *= x;
//	result.z *= x;
//	return result;
//}