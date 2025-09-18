# 1 "data/maps/Amoreira_Room/scripts.pory"

# 2 "data/maps/Amoreira_Room/scripts.pory"
Amoreira_Room_2F_EventScript_PC::
# 3 "data/maps/Amoreira_Room/scripts.pory"
	lockall
# 4 "data/maps/Amoreira_Room/scripts.pory"
	goto Amoreira_Room_2F_EventScript_CheckPlayersPC
# 5 "data/maps/Amoreira_Room/scripts.pory"
	end
# 6 "data/maps/Amoreira_Room/scripts.pory"

# 7 "data/maps/Amoreira_Room/scripts.pory"
Amoreira_Room_2F_EventScript_CheckPlayersPC::
# 8 "data/maps/Amoreira_Room/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 9 "data/maps/Amoreira_Room/scripts.pory"
	special DoPCTurnOnEffect
# 10 "data/maps/Amoreira_Room/scripts.pory"
	playse SE_PC_ON
# 11 "data/maps/Amoreira_Room/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 12 "data/maps/Amoreira_Room/scripts.pory"
	special BedroomPC
# 13 "data/maps/Amoreira_Room/scripts.pory"
	waitstate
# 14 "data/maps/Amoreira_Room/scripts.pory"
	releaseall
# 15 "data/maps/Amoreira_Room/scripts.pory"
	end
# 16 "data/maps/Amoreira_Room/scripts.pory"

# 17 "data/maps/Amoreira_Room/scripts.pory"
Amoreira_Room_2F_EventScript_TurnOffPlayerPC::
# 18 "data/maps/Amoreira_Room/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 19 "data/maps/Amoreira_Room/scripts.pory"
	playse SE_PC_OFF
# 20 "data/maps/Amoreira_Room/scripts.pory"
	special DoPCTurnOffEffect
# 21 "data/maps/Amoreira_Room/scripts.pory"
	releaseall
# 22 "data/maps/Amoreira_Room/scripts.pory"
	end
# 23 "data/maps/Amoreira_Room/scripts.pory"

# 24 "data/maps/Amoreira_Room/scripts.pory"
Amoreira_Room_2F_EventScript_Notebook::
# 25 "data/maps/Amoreira_Room/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 26 "data/maps/Amoreira_Room/scripts.pory"
	end
# 27 "data/maps/Amoreira_Room/scripts.pory"

# 28 "data/maps/Amoreira_Room/scripts.pory"
Amoreira_Room_2F_EventScript_GameCube::
# 29 "data/maps/Amoreira_Room/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 30 "data/maps/Amoreira_Room/scripts.pory"
	end

Amoreira_Room_MapScripts::
# 34 "data/maps/Amoreira_Room/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amoreira_HealLocation_OnTransition
# 35 "data/maps/Amoreira_Room/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Amoreira_HealLocation_OnTransition::
# 39 "data/maps/Amoreira_Room/scripts.pory"
	setrespawn HEAL_LOCATION_AMOREIRA_ROOM
	end

