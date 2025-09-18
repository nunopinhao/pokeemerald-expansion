Amoreira_Room_MapScripts::
# 2 "data/maps/Amoreira_Room/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amoreira_HealLocation_OnTransition
# 3 "data/maps/Amoreira_Room/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Amoreira_HealLocation_OnTransition::
# 7 "data/maps/Amoreira_Room/scripts.pory"
	setrespawn HEAL_LOCATION_AMOREIRA_ROOM
	end

