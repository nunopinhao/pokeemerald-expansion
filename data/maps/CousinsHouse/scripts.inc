CousinsHouse_MapScripts::
	.byte 0


CousinsHouse_EventScript_Uncle::
# 5 "data/maps/CousinsHouse/scripts.pory"
	lock
# 6 "data/maps/CousinsHouse/scripts.pory"
	faceplayer
# 7 "data/maps/CousinsHouse/scripts.pory"
	msgbox CousinsHouse_UncleText
# 8 "data/maps/CousinsHouse/scripts.pory"
	waitmessage
# 9 "data/maps/CousinsHouse/scripts.pory"
	release
	end


CousinsHouse_UncleText::
# 12 "data/maps/CousinsHouse/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Uncle:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hi, {PLAYER}, I’m fixing the\n"
	.string "fence. Your aunt is inside. Be careful\l"
	.string "out there!\n$"
