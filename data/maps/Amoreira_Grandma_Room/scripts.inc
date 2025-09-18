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


masterBallText::
# 12 "data/maps/Amoreira_Grandma_Room/scripts.pory"
	.string "It's Grandma's Pokemon. Better not mess\n"
	.string "with it.\n$"
