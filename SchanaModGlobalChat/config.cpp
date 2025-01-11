class CfgPatches
{
	class SchanaModGlobalChat
	{
		requiredAddons[] = { "SchanaModGlobalChatDefine" };
	};
};

class CfgMods
{
	class SchanaModGlobalChat
	{
		name = "SchanaModGlobalChat";
		action = "https://github.com/schana/dayz-mod-global-chat";
		author = "schana";
		type = "mod";
		inputs = "SchanaModGlobalChat/Data/Inputs.xml";
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
					"SchanaModGlobalChat/3_Game"
				};
			};
			class worldScriptModule
			{
				files[] =
				{
					"SchanaModGlobalChat/4_World"
				};
			};			
			class missionScriptModule
			{
				files[] =
				{
					"SchanaModGlobalChat/5_Mission"
				};
			};

		};
	};
};
