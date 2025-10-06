Route04_LeenaHouse_MapScripts::
	.byte 0


Route04_LeenaHouse_EventScript_Charles::
# 4 "data/maps/Route04_LeenaHouse/scripts.pory"
	lock
# 5 "data/maps/Route04_LeenaHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Route04_LeenaHouse/scripts.pory"
	goto_if_set FLAG_THICKET_FOREST_BLAISE_FIGHT, Route04_LeenaHouse_EventScript_Charles_2
# 10 "data/maps/Route04_LeenaHouse/scripts.pory"
	msgbox Charles_Text2, MSGBOX_NPC
Route04_LeenaHouse_EventScript_Charles_1:
# 12 "data/maps/Route04_LeenaHouse/scripts.pory"
	waitmessage
# 13 "data/maps/Route04_LeenaHouse/scripts.pory"
	release
	end

Route04_LeenaHouse_EventScript_Charles_2:
# 7 "data/maps/Route04_LeenaHouse/scripts.pory"
	msgbox Charles_Text, MSGBOX_NPC
	goto Route04_LeenaHouse_EventScript_Charles_1


Route04_LeenaHouse_EventScript_Leena::
# 33 "data/maps/Route04_LeenaHouse/scripts.pory"
	lock
# 34 "data/maps/Route04_LeenaHouse/scripts.pory"
	faceplayer
# 35 "data/maps/Route04_LeenaHouse/scripts.pory"
	msgbox LeenaHouse_Leena_Text, MSGBOX_NPC
# 36 "data/maps/Route04_LeenaHouse/scripts.pory"
	waitmessage
# 37 "data/maps/Route04_LeenaHouse/scripts.pory"
	release
	end


Route04_LeenaHouse_EventScript_Rudolph::
# 48 "data/maps/Route04_LeenaHouse/scripts.pory"
	lock
# 49 "data/maps/Route04_LeenaHouse/scripts.pory"
	faceplayer
# 50 "data/maps/Route04_LeenaHouse/scripts.pory"
	msgbox LeenaHouse_Rudolph_Text
# 51 "data/maps/Route04_LeenaHouse/scripts.pory"
	waitmessage
# 52 "data/maps/Route04_LeenaHouse/scripts.pory"
	release
	end


Route04_LeenaHouse_EventScript_Johnny::
# 63 "data/maps/Route04_LeenaHouse/scripts.pory"
	lock
# 64 "data/maps/Route04_LeenaHouse/scripts.pory"
	faceplayer
# 65 "data/maps/Route04_LeenaHouse/scripts.pory"
	msgbox LeenaHouse_Johnny_Text
# 66 "data/maps/Route04_LeenaHouse/scripts.pory"
	waitmessage
# 67 "data/maps/Route04_LeenaHouse/scripts.pory"
	release
	end


Route04_LeenaHouse_EventScript_Floki::
# 78 "data/maps/Route04_LeenaHouse/scripts.pory"
	lock
# 79 "data/maps/Route04_LeenaHouse/scripts.pory"
	faceplayer
# 80 "data/maps/Route04_LeenaHouse/scripts.pory"
	goto_if_set FLAG_LEENAHOUSE_FLOKI_FLING, Route04_LeenaHouse_EventScript_Floki_2
# 84 "data/maps/Route04_LeenaHouse/scripts.pory"
	msgbox LeenaHouse_Floki_Text1
# 85 "data/maps/Route04_LeenaHouse/scripts.pory"
	giveitem ITEM_TM43
# 86 "data/maps/Route04_LeenaHouse/scripts.pory"
	setflag FLAG_LEENAHOUSE_FLOKI_FLING
Route04_LeenaHouse_EventScript_Floki_1:
# 88 "data/maps/Route04_LeenaHouse/scripts.pory"
	waitmessage
# 89 "data/maps/Route04_LeenaHouse/scripts.pory"
	release
	end

Route04_LeenaHouse_EventScript_Floki_2:
# 81 "data/maps/Route04_LeenaHouse/scripts.pory"
	msgbox LeenaHouse_Floki_Text2
	goto Route04_LeenaHouse_EventScript_Floki_1


Charles_Text::
# 17 "data/maps/Route04_LeenaHouse/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Charles the Fifth:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} I tried to punch one\n"
	.string "of those Team Blaze bastards and cracked\l"
	.string "my hip.\p"
	.string "If you find them, beat them up for me!\n"
	.string "Leena is freaking out.\n$"

Charles_Text2::
# 25 "data/maps/Route04_LeenaHouse/scripts.pory"
	.string "Nurse Joy has a nice rack…\p"
	.string "Eh, I was daydreaming again.\n"
	.string "Don’t tell Leena I said that!\n$"

LeenaHouse_Leena_Text::
# 41 "data/maps/Route04_LeenaHouse/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Leena: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I live for my little darlings!\n"
	.string "I could never use them for battle.\n$"

LeenaHouse_Rudolph_Text::
# 56 "data/maps/Route04_LeenaHouse/scripts.pory"
	.string "…Mrrrreow.\n"
	.string "{NARROW_FONT}(Despite its name, this Rudolph’s nose\n"
	.string "{NARROW_FONT}isn’t red!)\n$"

LeenaHouse_Johnny_Text::
# 71 "data/maps/Route04_LeenaHouse/scripts.pory"
	.string "Meow? Meow, meow! Purr?\n"
	.string "{NARROW_FONT}(Johnny has a lot to say, but you don’t\n"
	.string "{NARROW_FONT}understand anything.)\n$"

LeenaHouse_Floki_Text1::
# 93 "data/maps/Route04_LeenaHouse/scripts.pory"
	.string "Woof, woof!\n$"

LeenaHouse_Floki_Text2::
# 96 "data/maps/Route04_LeenaHouse/scripts.pory"
	.string "{NARROW_FONT}(Floki wants to play fetch!)\n$"
