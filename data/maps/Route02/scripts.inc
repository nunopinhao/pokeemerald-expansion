Route02_MapScripts::
	.byte 0


Route02_EventScript_Zorua::
# 4 "data/maps/Route02/scripts.pory"
	lockall
# 5 "data/maps/Route02/scripts.pory"
	msgbox Route02_EventScript_Zorua_Text_0
# 6 "data/maps/Route02/scripts.pory"
	waitmessage
# 7 "data/maps/Route02/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_ENCOUNTER
# 8 "data/maps/Route02/scripts.pory"
	delay 40
# 9 "data/maps/Route02/scripts.pory"
	waitmoncry
# 10 "data/maps/Route02/scripts.pory"
	setwildbattle SPECIES_ZORUA, 5, ITEM_LUCKY_EGG
# 11 "data/maps/Route02/scripts.pory"
	dowildbattle
# 12 "data/maps/Route02/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/Route02/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route02_EventScript_Zorua_2
# 13 "data/maps/Route02/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route02_EventScript_Zorua_2
Route02_EventScript_Zorua_1:
# 16 "data/maps/Route02/scripts.pory"
	releaseall
	return

Route02_EventScript_Zorua_2:
# 14 "data/maps/Route02/scripts.pory"
	call Won_or_Caught
	goto Route02_EventScript_Zorua_1


Won_or_Caught::
# 20 "data/maps/Route02/scripts.pory"
	setflag FLAG_ZORUA
# 21 "data/maps/Route02/scripts.pory"
	setflag FLAG_DEFEATED_ZORUA
# 22 "data/maps/Route02/scripts.pory"
	setflag FLAG_ANDREW_BATTLE
# 23 "data/maps/Route02/scripts.pory"
	setflag FLAG_ADRIAN_BATTLE
# 24 "data/maps/Route02/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/Route02/scripts.pory"
	removeobject 1
# 26 "data/maps/Route02/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 27 "data/maps/Route02/scripts.pory"
	msgbox Won_or_Caught_Text_0
# 28 "data/maps/Route02/scripts.pory"
	waitmessage
	return


Route02_EventScript_Zorua_Text_0:
# 5 "data/maps/Route02/scripts.pory"
	.string "You found the pesky Zorua!$"

Won_or_Caught_Text_0:
# 27 "data/maps/Route02/scripts.pory"
	.string "Better return to Grandma now.$"
