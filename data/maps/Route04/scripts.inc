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


CarrieAndAnnabelleIntro::
# 11 "data/maps/Route04/scripts.pory"
	.string "We were supposed to be triplets, but we\n"
	.string "ate our sibling in the womb…\p"
	.string "Wanna be our friend? {FONT_SMALL_NARROW}evil giggle\n$"

CarrieAndAnnabelleOutro::
# 18 "data/maps/Route04/scripts.pory"
	.string "We will find you one day, and kill you…\n$"

CarrieAndAnnabellePostBattle::
# 22 "data/maps/Route04/scripts.pory"
	.string "Our parents were scared of us, so we set\n"
	.string "the house on fire. Now they smell like\l"
	.string "burned popcorn! {FONT_SMALL_NARROW}evil giggle\n$"

CarrieAndAnnabelleNotEnoughMons::
# 28 "data/maps/Route04/scripts.pory"
	.string "Aww, you only have one Pokemon?\n"
	.string "We can’t play together then…\n$"
