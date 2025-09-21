Route101_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
	.byte 0


Route101_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0

Route101_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE101_STATE, 1
	end

Route101_EventScript_Youngster::
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

Route101_Text_TakeTiredPokemonToPokeCenter:
	.string "When trainers cross paths they must.\n"
	.string "fight\p"
	.string "It's stated in law, I heard.$"

Route101_Text_WildPokemonInTallGrass:
	.string "I don't have a Pokemon so I can't walk\n"
	.string "in the tall grass.\p"
	.string "Wild Pokemon can beat you up real bad.\n"
	.string "Just like my dad does.$"

Route101_Text_RouteSign:
	.string "ROUTE 101\n"
	.string "{DOWN_ARROW} SMALTENT VILLAGE$"
