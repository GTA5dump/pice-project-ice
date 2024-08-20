//#include "DiscordHandler.hpp"
//#include "Discord_Register.h"
//#include "Discord_RPC.h"
//#include "stdafx.h"
//
//
//#include <chrono>
//
//#pragma comment(lib, "discord-rpc.lib")
//
//using namespace Mod_Hub_Base;
//
//void discordhandler::Init() {
//    DiscordEventHandlers handlers;
//    std::memset(&handlers, 0, sizeof(handlers));
//    Discord_Initialize("1061458991638650920", &handlers, 1, "0");
//}
//
//void discordhandler::Tick() {
//    static int64_t StartTime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
//
//    DiscordRichPresence discordPresence;
//    std::memset(&discordPresence, 0, sizeof(discordPresence));
// /*   if (NETWORK::NETWORK_IS_SESSION_STARTED()) {*/
//        discordPresence.state = "gtayes.github.io/Scooby";
//        //discordPresence.partySize = NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS();
//        //discordPresence.partyMax = 32;
//    discordPresence.details = "Scooby Menu [Best Free Menu]";
//    discordPresence.startTimestamp = StartTime;
//    discordPresence.largeImageKey = "s";
//   // discordPresence.smallImageKey = "gta";
//    //discordPresence.smallImageText = "V1.2.2";
//    discordPresence.largeImageText = "Discord.io/ScoobyMenu";
//    discordPresence.instance = 1;
//
//    Discord_UpdatePresence(&discordPresence);
//}
//
//void discordhandler::Shutdown() {
//    Discord_ClearPresence();
//    Discord_Shutdown();
//