Route02_MapScripts::
	.byte 0


Route02_EventScript_Zorua::
# 4 "data/maps/Route02/scripts.pory"
	lockall
# 5 "data/maps/Route02/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_ENCOUNTER
# 6 "data/maps/Route02/scripts.pory"
	delay 40
# 7 "data/maps/Route02/scripts.pory"
	waitmoncry
# 8 "data/maps/Route02/scripts.pory"
	setwildbattle SPECIES_ZORUA, 5, ITEM_LUCKY_EGG
# 9 "data/maps/Route02/scripts.pory"
	dowildbattle
# 10 "data/maps/Route02/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 11 "data/maps/Route02/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route02_EventScript_Zorua_2
# 11 "data/maps/Route02/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route02_EventScript_Zorua_2
Route02_EventScript_Zorua_1:
# 14 "data/maps/Route02/scripts.pory"
	releaseall
	return

Route02_EventScript_Zorua_2:
# 12 "data/maps/Route02/scripts.pory"
	call Won_or_Caught
	goto Route02_EventScript_Zorua_1


Won_or_Caught::
# 18 "data/maps/Route02/scripts.pory"
	setflag FLAG_ZORUA
# 19 "data/maps/Route02/scripts.pory"
	setflag FLAG_DEFEATED_ZORUA
# 20 "data/maps/Route02/scripts.pory"
	setflag FLAG_ANDREW_BATTLE
# 21 "data/maps/Route02/scripts.pory"
	setflag FLAG_ADRIAN_BATTLE
# 22 "data/maps/Route02/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/Route02/scripts.pory"
	removeobject 1
# 24 "data/maps/Route02/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 25 "data/maps/Route02/scripts.pory"
	msgbox Won_or_Caught_Text_0
# 26 "data/maps/Route02/scripts.pory"
	waitmessage
	return


Won_or_Caught_Text_0:
# 25 "data/maps/Route02/scripts.pory"
	.string "Better return to Grandma now.$"
