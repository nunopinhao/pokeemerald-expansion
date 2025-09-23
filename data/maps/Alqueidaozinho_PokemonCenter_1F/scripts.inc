# 1 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
Alqueidaozinho_PokemonCenter_1F_MapScripts::
# 3 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Alqueidaozinho_PokemonCenter_1F_OnTransition
# 4 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
Alqueidaozinho_PokemonCenter_1F_OnTransition:
# 8 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SMALTENT
# 9 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
Alqueidaozinho_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_SMALTENT_NURSE
# 13 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	end

Alqueidaozinho_PokemonCenter_1F_EventScript_Girl::
# 23 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	lock
# 24 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	faceplayer
# 25 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	msgbox Alqueidaozinho_PokemonCenter_1F_GirlText
# 26 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	waitmessage
# 27 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	release
	end


Alqueidaozinho_PokemonCenter_1F_EventScript_Man::
# 32 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	lock
# 33 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	faceplayer
# 34 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	msgbox Alqueidaozinho_PokemonCenter_1F_ManText
# 35 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	waitmessage
# 36 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	release
	end


Alqueidaozinho_PokemonCenter_1F_GirlText::
# 40 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	.string "RAMTO isn’t a very famous region. But\n"
	.string "everyone who comes here wants to stay.\n$"

Alqueidaozinho_PokemonCenter_1F_ManText::
# 45 "data/maps/Alqueidaozinho_PokemonCenter_1F/scripts.pory"
	.string "Why do Pokemon get to have free\n"
	.string "health care and I can’t?! So unfair!\n$"
