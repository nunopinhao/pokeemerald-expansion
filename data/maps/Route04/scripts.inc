Route04_MapScripts::
	.byte 0


Route04_EventScript_CarrieAndAnnabelle::
# 5 "data/maps/Route04/scripts.pory"
	trainerbattle_double TRAINER_CARI_AND_BEL, CarrieAndAnnabelleIntro, CarrieAndAnnabelleOutro, CarrieAndAnnabelleNotEnoughMons
# 6 "data/maps/Route04/scripts.pory"
	msgbox CarrieAndAnnabellePostBattle, MSGBOX_DEFAULT
# 7 "data/maps/Route04/scripts.pory"
	release
	end


Route04_EventScript_MargaritaBattle::
# 33 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_MARGARITA, Margarita_Intro, Margarita_Outro
# 34 "data/maps/Route04/scripts.pory"
	msgbox Margarita_PostBattle, MSGBOX_AUTOCLOSE
	end


Route04_EventScript_PedroBattle::
# 59 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_PEDRO, Pedro_Intro, Pedro_Outro
# 60 "data/maps/Route04/scripts.pory"
	msgbox Pedro_PostBattle, MSGBOX_AUTOCLOSE
	end


Route04_EventScript_TeresaBattle::
# 82 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_TERESA, Teresa_Intro, Teresa_Outro
# 83 "data/maps/Route04/scripts.pory"
	msgbox Teresa_PostBattle, MSGBOX_AUTOCLOSE
	end


Route04_EventScript_FrancisBattle::
# 103 "data/maps/Route04/scripts.pory"
	trainerbattle_single TRAINER_FRANCIS, Francis_Intro, Francis_Outro
# 104 "data/maps/Route04/scripts.pory"
	msgbox Francis_PostBattle, MSGBOX_AUTOCLOSE
	end


Route04_EventScript_Sign::
# 126 "data/maps/Route04/scripts.pory"
	msgbox Route04_Text_Sign, MSGBOX_SIGN
	end


CarrieAndAnnabelleIntro::
# 11 "data/maps/Route04/scripts.pory"
	.string "We were supposed to be triplets, but we\n"
	.string "ate our sibling in the womb…\p"
	.string "Wanna be our friend? {FONT_SMALL_NARROW}evil giggle\n$"

CarrieAndAnnabelleOutro::
# 17 "data/maps/Route04/scripts.pory"
	.string "We will find you one day, and kill you…\n$"

CarrieAndAnnabellePostBattle::
# 21 "data/maps/Route04/scripts.pory"
	.string "Our parents were scared of us, so we set\n"
	.string "the house on fire. Now they smell like\l"
	.string "burned popcorn! {FONT_SMALL_NARROW}evil giggle\n$"

CarrieAndAnnabelleNotEnoughMons::
# 27 "data/maps/Route04/scripts.pory"
	.string "Aww, you only have one Pokemon?\n"
	.string "We can’t play together then…\n$"

Margarita_Intro::
# 39 "data/maps/Route04/scripts.pory"
	.string "Those two little girls are messed up.\n"
	.string "They even speak at the same time!\p"
	.string "I bet it’s from all the brain-rot\n"
	.string "kids watch these days!\n$"

Margarita_Outro::
# 47 "data/maps/Route04/scripts.pory"
	.string "You’re a scary one, too.\n$"

Margarita_PostBattle::
# 51 "data/maps/Route04/scripts.pory"
	.string "I want to call the police on those two\n"
	.string "evil spawns, but what if they come\l"
	.string "after me?!\p"
	.string "… No, I’m not scared of them! SHUT UP!\n$"

Pedro_Intro::
# 65 "data/maps/Route04/scripts.pory"
	.string "I sold all my Pokemon cards to afford\n"
	.string "Poke Balls. I got a perfect team.\l"
	.string "Behold!\n$"

Pedro_Outro::
# 72 "data/maps/Route04/scripts.pory"
	.string "So that was a bad investment.$"

Pedro_PostBattle::
# 76 "data/maps/Route04/scripts.pory"
	.string "I’m going to stick to collecting Pokemon\n"
	.string "cards. Screw battling!\n$"

Teresa_Intro::
# 88 "data/maps/Route04/scripts.pory"
	.string "Team Blaze stole one of my Pokemon,\n"
	.string "spat on my face, and took my money.\n$"

Teresa_Outro::
# 94 "data/maps/Route04/scripts.pory"
	.string "And now you’ll take my money too…$"

Teresa_PostBattle::
# 98 "data/maps/Route04/scripts.pory"
	.string "I’m one bad day away from alcoholism.\n$"

Francis_Intro::
# 109 "data/maps/Route04/scripts.pory"
	.string "There hasn’t been a new Champion in\n"
	.string "centuries because it was prohibited.\p"
	.string "I will be the new first Champion!\n$"

Francis_Outro::
# 116 "data/maps/Route04/scripts.pory"
	.string "Arceus damn it!\n$"

Francis_PostBattle::
# 120 "data/maps/Route04/scripts.pory"
	.string "This is not the end for me.\n"
	.string "Back to training!\n$"

Route04_Text_Sign::
# 130 "data/maps/Route04/scripts.pory"
	.string "{UP_ARROW} BIGTHORN VILLAGE\n"
	.string "{RIGHT_ARROW} NEWVILLA TOWN\p"
	.string "{LEFT_ARROW} FLINT TOWN\n$"
