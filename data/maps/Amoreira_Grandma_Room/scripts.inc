Amoreira_Grandma_Room_MapScripts::
	.byte 0


Amoreira_Grandma_Room_MasterBall::
# 5 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	lockall
# 6 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	msgbox masterBallText
# 7 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	waitmessage
# 8 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	releaseall
	end


Amoreira_Grandma_Room_Notebook1::
# 13 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	lockall
# 14 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	msgbox grandmaNotebookText1
# 15 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	waitmessage
# 16 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	releaseall
	end


Amoreira_Grandma_Room_Notebook2::
# 21 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	lockall
# 22 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	msgbox grandmaNotebookText2
# 23 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	waitmessage
# 24 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	releaseall
	end


masterBallText::
# 28 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	.string "It's Grandma's Pokemon. Better not mess\n"
	.string "with it.\n$"

grandmaNotebookText1::
# 33 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	.string "{FONT_NARROW}My friends and I made a terrible{FONT_NARROW}\n"
	.string "{FONT_NARROW}discovery.{FONT_NARROW}\p"
	.string "{FONT_NARROW}Shadowy forces in RAMTO threaten to{FONT_NARROW}\n"
	.string "{FONT_NARROW}destroy us all.{FONT_NARROW}\n$"

grandmaNotebookText2::
# 40 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	.string "{FONT_NARROW}But we must plan and wait. In 50 years,{FONT_NARROW}\n"
	.string "{FONT_NARROW}everything will be set in motion.{FONT_NARROW}\p"
	.string "{FONT_NARROW}We won’t be the ones to save everyone,{FONT_NARROW}\n"
	.string "{FONT_NARROW}but the ones reading this will.{FONT_NARROW}\n$"
