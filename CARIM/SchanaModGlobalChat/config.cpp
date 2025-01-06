class CfgPatches
{
	class SchanaModGlobalChat
	{
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class SchanaModGlobalChat
	{
		type = "mod";
		name = "SchanaModGlobalChat";
		action = "https://github.com/schana/dayz-mod-global-chat";
		inputs = "CARIM/SchanaModGlobalChat/Data/Inputs.xml";
		author = "Schana & Wardog";
		defines[] =
		{
			"SCHANAMODCHAT",
			"SCHANAMODCHAT_V2"
		};
		dependencies[] =
		{
			"Game",
			"Mission",
			"World"
		};
		class defs
		{
			class gameScriptModule
			{
				files[] =
				{
					"CARIM/SchanaModGlobalChat/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				files[] =
				{
					"CARIM/SchanaModGlobalChat/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				files[] =
				{
					"CARIM/SchanaModGlobalChat/Scripts/5_Mission"
				};
			};
		};
	};
};
