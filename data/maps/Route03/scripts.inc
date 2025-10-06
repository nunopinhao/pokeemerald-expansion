Route03_MapScripts::
	.byte 0


Route03_EventScript_RuyBattle::
# 4 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_RUY, Ruy_Intro, Ruy_Outro
# 5 "data/maps/Route03/scripts.pory"
	msgbox Ruy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route03_EventScript_MartinBattle::
# 25 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_MARTIN, Martin_Intro, Martin_Outro
# 26 "data/maps/Route03/scripts.pory"
	msgbox Martin_PostBattle, MSGBOX_AUTOCLOSE
	end


Route03_EventScript_Gonzalo::
# 42 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_GONZALO, Gonzalo_Intro, Gonzalo_Outro
# 43 "data/maps/Route03/scripts.pory"
	msgbox Gonzalo_PostBattle, MSGBOX_AUTOCLOSE
	end


Route03_EventScript_Philippa::
# 60 "data/maps/Route03/scripts.pory"
	trainerbattle_single TRAINER_PHILIPPA, Philippa_Intro, Philippa_Outro
# 61 "data/maps/Route03/scripts.pory"
	msgbox Philippa_PostBattle, MSGBOX_AUTOCLOSE
	end


Route03_EventScript_Boy::
# 76 "data/maps/Route03/scripts.pory"
	lock
# 77 "data/maps/Route03/scripts.pory"
	faceplayer
# 78 "data/maps/Route03/scripts.pory"
	msgbox Boy_Text, MSGBOX_NPC
# 79 "data/maps/Route03/scripts.pory"
	release
	end


Route03_EventScript_Sign1::
# 90 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_Sign1, MSGBOX_SIGN
	end


Route03_EventScript_Sign2::
# 100 "data/maps/Route03/scripts.pory"
	msgbox Route03_Text_Sign2, MSGBOX_SIGN
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

Martin_Intro::
# 30 "data/maps/Route03/scripts.pory"
	.string "Did you fight that other weirdo? Dude\n"
	.string "really needs a new hobby.\n$"

Martin_Outro::
# 34 "data/maps/Route03/scripts.pory"
	.string "Am I the same as that weird guy?$"

Martin_PostBattle::
# 37 "data/maps/Route03/scripts.pory"
	.string "I'll stay here and train more.\n$"

Gonzalo_Intro::
# 46 "data/maps/Route03/scripts.pory"
	.string "The League system is back, baby. You’re\n"
	.string "going down, loser!\n$"

Gonzalo_Outro::
# 50 "data/maps/Route03/scripts.pory"
	.string "My therapist will hear about this\n"
	.string "humiliating defeat…$"

Gonzalo_PostBattle::
# 54 "data/maps/Route03/scripts.pory"
	.string "Thank you for the fight, I needed to be\n"
	.string "humbled a bit.\n$"

Philippa_Intro::
# 64 "data/maps/Route03/scripts.pory"
	.string "One day, I’ll be strong enough to be a\n"
	.string "Gym Leader!\n$"

Philippa_Outro::
# 68 "data/maps/Route03/scripts.pory"
	.string "I did say one day, not now.$"

Philippa_PostBattle::
# 71 "data/maps/Route03/scripts.pory"
	.string "I want to be a Fairy-type Gym Leader!\n$"

Boy_Text::
# 82 "data/maps/Route03/scripts.pory"
	.string "No, please don’t take my money!\p"
	.string "Oh sorry, I mistook you for one of those\n"
	.string "Team Blaze bozos.\n$"

Route03_Text_Sign1::
# 94 "data/maps/Route03/scripts.pory"
	.string "ROUTE 03\n"
	.string "{UP_ARROW} FLINT TOWN\n$"

Route03_Text_Sign2::
# 104 "data/maps/Route03/scripts.pory"
	.string "ROUTE 03\n"
	.string "{DOWN_ARROW} MULBERY VILLAGE\n$"
