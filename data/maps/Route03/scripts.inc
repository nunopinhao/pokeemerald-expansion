Route03_MapScripts::
	.byte 0


Route03_EventScript_RuyBattle::
# 4 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_RUY, Ruy_Intro, Ruy_Outro
# 5 "data/maps/Route03/scripts.pory"
	msgbox Ruy_PostBattle, MSGBOX_AUTOCLOSE
	end


Ruy_Intro::
# 10 "data/maps/Route03/scripts.pory"
	.string "I like to stand here all day and wait\n"
	.string "for people to walk by me. Now fight!\n$"

Ruy_Outro::
# 15 "data/maps/Route03/scripts.pory"
	.string "My mom says I should get a new hobby.$"

Ruy_PostBattle::
# 19 "data/maps/Route03/scripts.pory"
	.string "Time to go back to waiting! I sure love\n"
	.string "how normal I am.\n$"
