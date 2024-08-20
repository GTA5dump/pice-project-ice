#include "Discord.hpp"

void Discord::Init() {
	DiscordEventHandlers handle;
	memset(&handle, 0, sizeof(handle));
	Discord_Initialize("932595979365023745", &handle, 1, NULL);
}

void Discord::Update() {
	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.state = "Redline Menu";
	discordPresence.details = "Alpha v0.0.1";
	discordPresence.startTimestamp = 1507665886;
	discordPresence.largeImageKey = "redline_red";
	discordPresence.largeImageText = "Redline v0.0.1";
	discordPresence.smallImageKey = "gta";
	Discord_UpdatePresence(&discordPresence);
}