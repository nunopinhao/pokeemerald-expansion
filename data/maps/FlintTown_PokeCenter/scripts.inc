# 1 "data/maps/FlintTown_PokeCenter/scripts.pory"

# 2 "data/maps/FlintTown_PokeCenter/scripts.pory"
FlintTown_PokeCenter_MapScripts::
# 3 "data/maps/FlintTown_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Flint_PokeCenter_1F_OnTransition
# 4 "data/maps/FlintTown_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/FlintTown_PokeCenter/scripts.pory"
	.byte 0
# 6 "data/maps/FlintTown_PokeCenter/scripts.pory"

# 7 "data/maps/FlintTown_PokeCenter/scripts.pory"
Flint_PokeCenter_1F_OnTransition:
# 8 "data/maps/FlintTown_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_FLINT
# 9 "data/maps/FlintTown_PokeCenter/scripts.pory"
	end
# 10 "data/maps/FlintTown_PokeCenter/scripts.pory"

# 11 "data/maps/FlintTown_PokeCenter/scripts.pory"
Flint_PokeCenter_EventScript_Nurse::
# 12 "data/maps/FlintTown_PokeCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_FLINT_NURSE
# 13 "data/maps/FlintTown_PokeCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/FlintTown_PokeCenter/scripts.pory"
	waitmessage
# 15 "data/maps/FlintTown_PokeCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/FlintTown_PokeCenter/scripts.pory"
	release
# 17 "data/maps/FlintTown_PokeCenter/scripts.pory"
	end

Flint_PokeCenter_EventScript_Man::
# 23 "data/maps/FlintTown_PokeCenter/scripts.pory"
	lock
# 24 "data/maps/FlintTown_PokeCenter/scripts.pory"
	faceplayer
# 25 "data/maps/FlintTown_PokeCenter/scripts.pory"
	msgbox Flint_PokeCenter_ManText
# 26 "data/maps/FlintTown_PokeCenter/scripts.pory"
	waitmessage
# 27 "data/maps/FlintTown_PokeCenter/scripts.pory"
	release
	end


Flint_PokeCenter_EventScript_Boy::
# 39 "data/maps/FlintTown_PokeCenter/scripts.pory"
	lock
# 40 "data/maps/FlintTown_PokeCenter/scripts.pory"
	faceplayer
# 41 "data/maps/FlintTown_PokeCenter/scripts.pory"
	msgbox Flint_PokeCenter_BoyText
# 42 "data/maps/FlintTown_PokeCenter/scripts.pory"
	waitmessage
# 43 "data/maps/FlintTown_PokeCenter/scripts.pory"
	release
	end


Flint_PokeCenter_ManText::
# 31 "data/maps/FlintTown_PokeCenter/scripts.pory"
	.string "I scraped my knee, and Nurse Joy won’t\n"
	.string "take care of me!\p"
	.string "…What? N-No, I didn’t get hurt on\n"
	.string "purpose!\n$"

Flint_PokeCenter_BoyText::
# 48 "data/maps/FlintTown_PokeCenter/scripts.pory"
	.string "I wonder how there are so many Nurse Joy\n"
	.string "across the world.\p"
	.string "Like, are they a Pokemon species?\n"
	.string "Clones? Or do they just wear wigs?\n$"
