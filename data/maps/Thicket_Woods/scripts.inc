Thicket_Woods_MapScripts::
# 2 "data/maps/Thicket_Woods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThicketWoods_OnTransition
	.byte 0


ThicketWoods_OnTransition::
# 6 "data/maps/Thicket_Woods/scripts.pory"
	setflag FLAG_LEENA_THICKETWOODS
	end


ThicketWoods_EventScript_TulipaBattle::
# 11 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_TULIPA, ThicketWoods_Tulipa_Intro, ThicketWoods_Tulipa_Outro
# 12 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Tulipa_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_AntonioBattle::
# 31 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_ANTONIO, ThicketWoods_Antonio_Intro, ThicketWoods_Antonio_Outro
# 32 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Antonio_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_AlbertoBattle::
# 49 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, ThicketWoods_Alberto_Intro, ThicketWoods_Alberto_Outro
# 50 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Alberto_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_JessicaBattle::
# 70 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_JESSICA, ThicketWoods_Jessica_Intro, ThicketWoods_Jessica_Outro
# 71 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Jessica_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_MauroBattle::
# 90 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_MAURO, ThicketWoods_Mauro_Intro, ThicketWoods_Mauro_Outro
# 91 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Mauro_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_RoBattle::
# 110 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_RO, ThicketWoods_Ro_Intro, ThicketWoods_Ro_Outro
# 111 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Ro_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_MildaBattle::
# 129 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_MILDA, ThicketWoods_Milda_Intro, ThicketWoods_Milda_Outro
# 130 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Milda_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_BlazeTrigger1::
# 148 "data/maps/Thicket_Woods/scripts.pory"
	lockall
# 149 "data/maps/Thicket_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 150 "data/maps/Thicket_Woods/scripts.pory"
	call ThicketWoods_EventScript_BlazeScene
	return


ThicketWoods_EventScript_BlazeTrigger2::
# 153 "data/maps/Thicket_Woods/scripts.pory"
	lockall
# 154 "data/maps/Thicket_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 155 "data/maps/Thicket_Woods/scripts.pory"
	call ThicketWoods_EventScript_BlazeScene
	return


ThicketWoods_EventScript_BlazeScene::
# 158 "data/maps/Thicket_Woods/scripts.pory"
	applyMovement 5, Common_Movement_WalkInPlaceFasterLeft
# 159 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 160 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_BlazeSceneText
# 161 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 162 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 163 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 164 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 165 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 166 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_BlazeSceneText2
# 167 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 168 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 169 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 170 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_BlazeSceneText3
# 171 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 172 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_two_trainers TRAINER_TICKETWOODS_TEAMBLAZE_GRUNT_F, ThicketWoods_BlazeGruntF_Outro, TRAINER_TICKETWOODS_TEAMBLAZE_GRUNT_M, ThicketWoods_BlazeGruntM_Outro
# 173 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_BlazeSceneTextAfterBattle1
# 174 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 175 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 176 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 177 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 178 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 179 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_BlazeSceneTextAfterBattle2
# 180 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 181 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 182 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 183 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 5, Common_Movement_FaceRight
# 184 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 185 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_BlazeSceneTextAfterBattle3
# 186 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 187 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 4, ThicketWoods_BlazeMLeaves
# 188 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 5, ThicketWoods_BlazeFLeaves
# 189 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 190 "data/maps/Thicket_Woods/scripts.pory"
	delay 30
# 191 "data/maps/Thicket_Woods/scripts.pory"
	addobject 18
# 192 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 18, ThicketWoods_LeenaMove
# 193 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 194 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_LeenaText
# 195 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 196 "data/maps/Thicket_Woods/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 197 "data/maps/Thicket_Woods/scripts.pory"
	applymovement 18, Thicket_Woods_LeenaMovePets
# 198 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 199 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_LeenaText2
# 200 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 201 "data/maps/Thicket_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/Thicket_Woods/scripts.pory"
	setvar VAR_THICKETWOODS_BLAZE_FIGHT, 1
# 203 "data/maps/Thicket_Woods/scripts.pory"
	clearflag FLAG_THICKET_FOREST_BLAISE_FIGHT
# 204 "data/maps/Thicket_Woods/scripts.pory"
	setflag FLAG_ROUTE4_LEENA
# 205 "data/maps/Thicket_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 206 "data/maps/Thicket_Woods/scripts.pory"
	releaseall
	end


# 215 "data/maps/Thicket_Woods/scripts.pory"
Thicket_Woods_LeenaMovePets:
# 216 "data/maps/Thicket_Woods/scripts.pory"
	walk_down
# 217 "data/maps/Thicket_Woods/scripts.pory"
	walk_left
	step_end

# 229 "data/maps/Thicket_Woods/scripts.pory"
ThicketWoods_LeenaMove:
# 230 "data/maps/Thicket_Woods/scripts.pory"
	walk_down
# 230 "data/maps/Thicket_Woods/scripts.pory"
	walk_down
# 231 "data/maps/Thicket_Woods/scripts.pory"
	walk_left
# 231 "data/maps/Thicket_Woods/scripts.pory"
	walk_left
# 232 "data/maps/Thicket_Woods/scripts.pory"
	walk_down
# 232 "data/maps/Thicket_Woods/scripts.pory"
	walk_down
# 232 "data/maps/Thicket_Woods/scripts.pory"
	walk_down
# 233 "data/maps/Thicket_Woods/scripts.pory"
	walk_left
# 233 "data/maps/Thicket_Woods/scripts.pory"
	walk_left
# 234 "data/maps/Thicket_Woods/scripts.pory"
	walk_down
# 235 "data/maps/Thicket_Woods/scripts.pory"
	face_right
	step_end

# 238 "data/maps/Thicket_Woods/scripts.pory"
ThicketWoods_BlazeMLeaves:
# 239 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 239 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 240 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 240 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 240 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 241 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 241 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 241 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 242 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 242 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 243 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 243 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
	step_end

# 245 "data/maps/Thicket_Woods/scripts.pory"
ThicketWoods_BlazeFLeaves:
# 246 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 246 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 246 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 247 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 247 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 247 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 248 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 248 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 248 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 249 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 249 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_right
# 250 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
# 250 "data/maps/Thicket_Woods/scripts.pory"
	walk_faster_up
	step_end

Thicket_Woods_EventScript_PoliceGuard::
# 334 "data/maps/Thicket_Woods/scripts.pory"
	lock
# 335 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_PoliceGuardText
# 336 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 337 "data/maps/Thicket_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 338 "data/maps/Thicket_Woods/scripts.pory"
	waitmovement 0
# 339 "data/maps/Thicket_Woods/scripts.pory"
	release
	end


Thicket_Woods_EventScript_PoliceGuardTalk::
# 350 "data/maps/Thicket_Woods/scripts.pory"
	lock
# 351 "data/maps/Thicket_Woods/scripts.pory"
	faceplayer
# 352 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_PoliceGuardText
# 353 "data/maps/Thicket_Woods/scripts.pory"
	waitmessage
# 354 "data/maps/Thicket_Woods/scripts.pory"
	release
	end


ThicketWoods_Tulipa_Intro::
# 16 "data/maps/Thicket_Woods/scripts.pory"
	.string "I dated a guy who said he liked\n"
	.string "Grass-types, like me.\p"
	.string "Turns out he meant smoking Oddish leaves.\n"
	.string "Why do I always fall for losers?\n$"

ThicketWoods_Tulipa_Outro::
# 22 "data/maps/Thicket_Woods/scripts.pory"
	.string "You smell like a try-hard.\n$"

ThicketWoods_Tulipa_PostBattle::
# 25 "data/maps/Thicket_Woods/scripts.pory"
	.string "Grass-type Pokemon smell the nicest!\n"
	.string "I like Fairy-types too.\n$"

ThicketWoods_Antonio_Intro::
# 36 "data/maps/Thicket_Woods/scripts.pory"
	.string "My brother and I are rivals!\n"
	.string "Bugs vs Birds, the ultimate debate!\n$"

ThicketWoods_Antonio_Outro::
# 40 "data/maps/Thicket_Woods/scripts.pory"
	.string " Bug types still rule!\n$"

ThicketWoods_Antonio_PostBattle::
# 43 "data/maps/Thicket_Woods/scripts.pory"
	.string "I must train to surpass my brother.\n"
	.string "Bug types are SUPREME!\n$"

ThicketWoods_Alberto_Intro::
# 54 "data/maps/Thicket_Woods/scripts.pory"
	.string "My brother insists we’re rivals,\n"
	.string "but I’m playing along because the dude\l"
	.string "has no friends.\n$"

ThicketWoods_Alberto_Outro::
# 59 "data/maps/Thicket_Woods/scripts.pory"
	.string "I’m having a good time. NOT!\n$"

ThicketWoods_Alberto_PostBattle::
# 62 "data/maps/Thicket_Woods/scripts.pory"
	.string "I asked my mom if I could go on a\n"
	.string "journey, and she said:\p"
	.string "{FONT_SHORT_NARROW}yeah sure but take your brother with you.\n"
	.string "{FONT_NORMAL}Sigh…\n$"

ThicketWoods_Jessica_Intro::
# 75 "data/maps/Thicket_Woods/scripts.pory"
	.string "This forest is shaped like that cat\n"
	.string "Pokemon! I don’t know the name.\l"
	.string "It’s the green one, I think?\n$"

ThicketWoods_Jessica_Outro::
# 80 "data/maps/Thicket_Woods/scripts.pory"
	.string "I just wanted to share a fact,\n"
	.string "not fight!\n$"

ThicketWoods_Jessica_PostBattle::
# 84 "data/maps/Thicket_Woods/scripts.pory"
	.string "You like picking on girls? I was just\n"
	.string "being nice and making conversation!\n$"

ThicketWoods_Mauro_Intro::
# 95 "data/maps/Thicket_Woods/scripts.pory"
	.string "I hear voices! No, I’m not schizophrenic\n"
	.string "I mean ACTUAL real voices.\p"
	.string "Are there people hiding somewhere in the\n"
	.string "forest?\n$"

ThicketWoods_Mauro_Outro::
# 101 "data/maps/Thicket_Woods/scripts.pory"
	.string "At least you don’t seem suspicious.\n$"

ThicketWoods_Mauro_PostBattle::
# 104 "data/maps/Thicket_Woods/scripts.pory"
	.string "Are these woods haunted like\n"
	.string "Almond Forest is?\n$"

ThicketWoods_Ro_Intro::
# 115 "data/maps/Thicket_Woods/scripts.pory"
	.string "We are the Psychic sisters!\n"
	.string "Want a tarot reading?\n$"

ThicketWoods_Ro_Outro::
# 119 "data/maps/Thicket_Woods/scripts.pory"
	.string "We predicted this loss.\n$"

ThicketWoods_Ro_PostBattle::
# 122 "data/maps/Thicket_Woods/scripts.pory"
	.string "Want another reading? The Fool will meet\n"
	.string "the Devil, and through Judgement reveal\l"
	.string "its true light to the World.\n$"

ThicketWoods_Milda_Intro::
# 134 "data/maps/Thicket_Woods/scripts.pory"
	.string "The Fool Arcana card is revealed. A hero\n"
	.string "has a long mission ahead of them!\n$"

ThicketWoods_Milda_Outro::
# 138 "data/maps/Thicket_Woods/scripts.pory"
	.string "But it still tastes bitter.\n$"

ThicketWoods_Milda_PostBattle::
# 141 "data/maps/Thicket_Woods/scripts.pory"
	.string "We predict the exit of this forest is\n"
	.string "nearby. You may only exit if the two\l"
	.string "evildoers were brought to justice.\n$"

ThicketWoods_LeenaText2::
# 210 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Leena:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} My poor babies, here, Leena will\n"
	.string "take you back home.\n$"

ThicketWoods_LeenaText::
# 220 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Leena:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, you did it!\n"
	.string "My darlings are safe! I can’t thank you\l"
	.string "enough.\p"
	.string "Tell you what, feel free to use my\n"
	.string "vacation house next summer. My treat!\p"
	.string "But for now, take this!\n$"

ThicketWoods_BlazeSceneTextAfterBattle3::
# 252 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You there! You’ll\n"
	.string "curse the day you pissed off Team Blaze.\p"
	.string "We are the huh. Children of fire,\n"
	.string "followers of the Magma Guy!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It’s O’Magma One,\n"
	.string "dude. You really need to read the script.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Whatever!\n$"

ThicketWoods_BlazeSceneTextAfterBattle2::
# 262 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} There goes our\n"
	.string "yearly bonus. What now?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Do you really want\n"
	.string "to tell Solana we lost to a teenage\l"
	.string "punk?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} No, I would rather\n"
	.string "have a Taurus stomp on my balls.\n$"

ThicketWoods_BlazeSceneTextAfterBattle1::
# 272 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What, you don’t have\n"
	.string "a girlfriend or boyfriend to keep you\l"
	.string "busy?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah lol, must be a\n"
	.string "social justice warrior or something.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Have at it! Take the\n"
	.string "stolen Pokemon.\p"
	.string "They’re weak as a Magikarp anyway.\n$"

ThicketWoods_BlazeSceneText::
# 282 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} These Pokemon we\n"
	.string "stole aren’t good for battle.\p"
	.string "They’re just pets! Solana will blow a\n"
	.string "fuse. Literally!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} …Damn, I need to put\n"
	.string "out my cigarette.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So what? Throw it on\n"
	.string "the ground.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What if it starts a\n"
	.string "fire?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Who cares? Isn’t Team\n"
	.string "Blaze supposed to worship fire, or\l"
	.string "whatever?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} The dispatch team\n"
	.string "is taking forever!\p"
	.string "We have to ship back to HQ and start\n"
	.string "distributing the stolen cargo. Team\l"
	.string "Blaze needs Pokemon.\n$"

ThicketWoods_BlazeSceneText2::
# 304 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Crap! There’s a\n"
	.string "rando watching us!\n$"

ThicketWoods_BlazeSceneText3::
# 308 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Don’t freak out, man.\n"
	.string "Follow the script!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} We are the children\n"
	.string "of flames… Huh, we’re here to.. Huh?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Follow the word of\n"
	.string "our God, O’Magma One! We gathered\n"
	.string "sacrifices to offer to the flames.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 1:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Huh… Yeah, what he\n"
	.string "said!\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Team Blaze Grunt 2:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} But alas, a witness\n"
	.string "to our Crimson Mission! He Who Shall\l"
	.string "Be Silenced!\n$"

ThicketWoods_BlazeGruntF_Outro::
# 324 "data/maps/Thicket_Woods/scripts.pory"
	.string "We are so screwed…$"

ThicketWoods_BlazeGruntM_Outro::
# 327 "data/maps/Thicket_Woods/scripts.pory"
	.string "This is humiliating.$"

ThicketWoods_PoliceGuardText::
# 343 "data/maps/Thicket_Woods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Policeman:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} We closed off the forest\n"
	.string "while we look for two suspicious\l"
	.string "individuals. Please wait.\n$"
