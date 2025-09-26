FlintTown_House1_MapScripts::
	.byte 0


FlintTown_House1_EventScript_Woman::
# 4 "data/maps/FlintTown_House1/scripts.pory"
	lock
# 5 "data/maps/FlintTown_House1/scripts.pory"
	faceplayer
# 6 "data/maps/FlintTown_House1/scripts.pory"
	msgbox FlintTown_House1_WomanText
# 7 "data/maps/FlintTown_House1/scripts.pory"
	waitmessage
# 8 "data/maps/FlintTown_House1/scripts.pory"
	release
	end


FlintTown_House1_EventScript_Man::
# 17 "data/maps/FlintTown_House1/scripts.pory"
	lock
# 18 "data/maps/FlintTown_House1/scripts.pory"
	faceplayer
# 19 "data/maps/FlintTown_House1/scripts.pory"
	msgbox FlintTown_House1_ManText
# 20 "data/maps/FlintTown_House1/scripts.pory"
	waitmessage
# 21 "data/maps/FlintTown_House1/scripts.pory"
	release
	end


FlintTown_House1_EventScript_LittleGirl::
# 32 "data/maps/FlintTown_House1/scripts.pory"
	lock
# 33 "data/maps/FlintTown_House1/scripts.pory"
	faceplayer
# 34 "data/maps/FlintTown_House1/scripts.pory"
	msgbox FlintTown_House1_LittleGirlText
# 35 "data/maps/FlintTown_House1/scripts.pory"
	waitmessage
# 36 "data/maps/FlintTown_House1/scripts.pory"
	release
	end


FlintTown_House1_WomanText::
# 12 "data/maps/FlintTown_House1/scripts.pory"
	.string "Songs can be both beautiful and tragic.\n$"

FlintTown_House1_ManText::
# 25 "data/maps/FlintTown_House1/scripts.pory"
	.string "You must respect your elders. Bringing\n"
	.string "back the League goes against every\l"
	.string "lesson they passed on to us.\n$"

FlintTown_House1_LittleGirlText::
# 40 "data/maps/FlintTown_House1/scripts.pory"
	.string "I learned a new song at school.\n"
	.string "Wanna hear?\p"
	.string "{FONT_NARROW}Heatran’s flames made the sky turn grey,{FONT_NARROW}\n"
	.string "{FONT_NARROW}and the Shaymin flew away, away{FONT_NARROW}\n$"
