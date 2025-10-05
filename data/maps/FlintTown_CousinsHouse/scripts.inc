FlintTown_CousinsHouse_MapScripts::
	.byte 0


FlintTown_CousinsHouse_EventScript_Aunt::
# 5 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	lock
# 6 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	faceplayer
# 7 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, FlintTown_CousinsHouse_EventScript_Aunt_2
# 12 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_AuntText
# 13 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	waitmessage
# 14 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_ReceivePokenavText
# 16 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	waitfanfare
# 17 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 18 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 19 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	goto_if_set FLAG_FLINT_COMMUNITY_CENTER_SPEECH_OVER, FlintTown_CousinsHouse_EventScript_Aunt_5
FlintTown_CousinsHouse_EventScript_Aunt_4:
# 22 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	release
	end

FlintTown_CousinsHouse_EventScript_Aunt_2:
# 8 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_AuntText2
# 9 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	release
	end

FlintTown_CousinsHouse_EventScript_Aunt_5:
# 20 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	setflag FLAG_ROUTE5_LOCK
	goto FlintTown_CousinsHouse_EventScript_Aunt_4


FlintTown_CousinsHouse_EventScript_Madeleine::
# 45 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	lock
# 46 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	faceplayer
# 47 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	switch VAR_MADELEINE_READY_FOR_BATTLE
# 48 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	case 0, FlintTown_CousinsHouse_EventScript_Madeleine_3
# 51 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	case 1, FlintTown_CousinsHouse_EventScript_Madeleine_4
# 63 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_MadeleineDefaultText
FlintTown_CousinsHouse_EventScript_Madeleine_1:
# 66 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	release
	end

FlintTown_CousinsHouse_EventScript_Madeleine_3:
# 49 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_MadeleineDefaultText
	goto FlintTown_CousinsHouse_EventScript_Madeleine_1

FlintTown_CousinsHouse_EventScript_Madeleine_4:
# 52 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_MadeleineText
# 53 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	waitmessage
# 54 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_MADELEINE_COUSINSHOUSE, Madeleine_OutroText
# 55 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_MadeleineAfterBattleText
# 56 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	waitmessage
# 57 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 58 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_MadeleineAfterBattleText2
# 59 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	waitmessage
# 60 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	setvar VAR_MADELEINE_READY_FOR_BATTLE, 0
	goto FlintTown_CousinsHouse_EventScript_Madeleine_1


FlintTown_CousinsHouse_EventScript_Meowth::
# 103 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	lock
# 104 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	faceplayer
# 105 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_MeowthText
# 106 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	waitmessage
# 107 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	release
	end


FlintTown_CousinsHouse_EventScript_Skitty::
# 117 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	lock
# 118 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	faceplayer
# 119 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	msgbox FlintTown_CousinsHouse_SkittyText
# 120 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	waitmessage
# 121 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	release
	end


FlintTown_CousinsHouse_AuntText::
# 25 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Aunt:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh, hi, {PLAYER}! Are you looking\n"
	.string "for your cousins? They left to look for\l"
	.string "the First Gym on their bikes\p"
	.string "Here, take this with you;\n"
	.string "it may come in handy.\n$"

FlintTown_CousinsHouse_ReceivePokenavText::
# 32 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "{PLAYER} received a POKéNAV.\n$"

FlintTown_CousinsHouse_AuntText2::
# 35 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Aunt:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Enjoy your journey! Me? I am\n"
	.string "enjoying my soap operas! AH-AH-AH!\n$"

FlintTown_CousinsHouse_MadeleineText::
# 69 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Madeleine:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What do you mean, you don’t\n"
	.string "know who I am? Very funny, {PLAYER}.\p"
	.string "You know very well I am Adrian’s\n"
	.string "girlfriend! I’m taking care of the pets\l"
	.string "while they are away.\p"
	.string "Wanna battle? It will help you train!\n$"

Madeleine_OutroText::
# 78 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "Impressive! You are as strong as your\n"
	.string "cousins!$"

FlintTown_CousinsHouse_MadeleineAfterBattleText::
# 83 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "You just started your journey, and I can\n"
	.string "tell you’ll go far!\p"
	.string "Take this, it’s a gift from me.\n$"

FlintTown_CousinsHouse_MadeleineAfterBattleText2::
# 89 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Madeleine:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Pokemon can hold items and\n"
	.string "use them in battle!\n$"

FlintTown_CousinsHouse_MadeleineDefaultText::
# 93 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Madeleine:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} The League challenge isn’t\n"
	.string "for me.\p"
	.string "I prefer painting Pokemon over battling!\n$"

FlintTown_CousinsHouse_MeowthText::
# 111 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "Meowwwww…\p"
	.string "{FONT_NARROW}Old Meowth looks grumpy, or is it just hungry?\n$"

FlintTown_CousinsHouse_SkittyText::
# 125 "data/maps/FlintTown_CousinsHouse/scripts.pory"
	.string "Nyaaaa! Nyaaaa!\p"
	.string "{FONT_NARROW}Skitty headbutts your hand as you pet it.\n$"
