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


Route04_EventScript_LeenaScene1::
# 137 "data/maps/Route04/scripts.pory"
	lock
# 138 "data/maps/Route04/scripts.pory"
	applymovement 11, LeenaMoveNearPlayer1
# 139 "data/maps/Route04/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route04/scripts.pory"
	msgbox Leena_Text
# 141 "data/maps/Route04/scripts.pory"
	waitmessage
# 142 "data/maps/Route04/scripts.pory"
	setvar VAR_ROUTE4_LEENA, 1
# 143 "data/maps/Route04/scripts.pory"
	setflag FLAG_THICKET_FOREST_BLAISE_FIGHT
# 144 "data/maps/Route04/scripts.pory"
	release
	end


# 147 "data/maps/Route04/scripts.pory"
LeenaMoveNearPlayer1:
# 148 "data/maps/Route04/scripts.pory"
	walk_down
# 149 "data/maps/Route04/scripts.pory"
	walk_left
	step_end

Route04_EventScript_LeenaScene2::
# 153 "data/maps/Route04/scripts.pory"
	lock
# 154 "data/maps/Route04/scripts.pory"
	applymovement 11, LeenaMoveNearPlayer2
# 155 "data/maps/Route04/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route04/scripts.pory"
	msgbox Leena_Text
# 157 "data/maps/Route04/scripts.pory"
	waitmessage
# 158 "data/maps/Route04/scripts.pory"
	setvar VAR_ROUTE4_LEENA, 1
# 159 "data/maps/Route04/scripts.pory"
	setflag FLAG_THICKET_FOREST_BLAISE_FIGHT
# 160 "data/maps/Route04/scripts.pory"
	release
	end


# 163 "data/maps/Route04/scripts.pory"
LeenaMoveNearPlayer2:
# 164 "data/maps/Route04/scripts.pory"
	walk_down
# 164 "data/maps/Route04/scripts.pory"
	walk_down
# 165 "data/maps/Route04/scripts.pory"
	walk_left
	step_end

Route04_EventScript_LeenaScene3::
# 168 "data/maps/Route04/scripts.pory"
	lock
# 169 "data/maps/Route04/scripts.pory"
	applymovement 11, LeenaMoveNearPlayer3
# 170 "data/maps/Route04/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route04/scripts.pory"
	msgbox Leena_Text
# 172 "data/maps/Route04/scripts.pory"
	waitmessage
# 173 "data/maps/Route04/scripts.pory"
	setvar VAR_ROUTE4_LEENA, 1
# 174 "data/maps/Route04/scripts.pory"
	setflag FLAG_THICKET_FOREST_BLAISE_FIGHT
# 175 "data/maps/Route04/scripts.pory"
	release
	end


# 178 "data/maps/Route04/scripts.pory"
LeenaMoveNearPlayer3:
# 179 "data/maps/Route04/scripts.pory"
	walk_down
# 179 "data/maps/Route04/scripts.pory"
	walk_down
# 179 "data/maps/Route04/scripts.pory"
	walk_down
# 180 "data/maps/Route04/scripts.pory"
	walk_left
	step_end

Route04_EventScript_LeenaAfterScene::
# 192 "data/maps/Route04/scripts.pory"
	lock
# 193 "data/maps/Route04/scripts.pory"
	msgbox LeenaAfterScene_Text
# 194 "data/maps/Route04/scripts.pory"
	waitmessage
# 195 "data/maps/Route04/scripts.pory"
	release
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

Leena_Text::
# 182 "data/maps/Route04/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Leena: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Oh, {PLAYER}!\n"
	.string "Thank goodness you came! Some Team Blaze\l"
	.string "bozos stole my little darlings!\p"
	.string "Can you please help?\n"
	.string "They ran into the woods {FONT_SMALL_NARROWER}sniff sniff\n$"

LeenaAfterScene_Text::
# 199 "data/maps/Route04/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Leena: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}I saw them heading for the\n"
	.string "Thicket Woods! Those dirty criminals!\l"
	.string "{FONT_SMALL_NARROWER}sniff sniff\n$"
