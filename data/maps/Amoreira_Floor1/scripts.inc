Amoreira_Floor1_MapScripts::
	.byte 0


Amoreira_Floor1_EventScript_CantLeave1::
# 4 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 5 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox CantLeaveText
# 6 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 7 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 8 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_GrandmaSpeech::
# 13 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 14 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 15 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaSpeechText
# 16 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 17 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AndrewSpeech::
# 22 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 23 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 24 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AndrewSpeechText
# 25 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 26 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AdrianSpeech::
# 31 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 32 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 33 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AdrianSpeechText
# 34 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 35 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_StartScene1::
# 40 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 41 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma1
# 42 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 43 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 44 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene2::
# 49 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 50 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma2
# 51 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 52 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 53 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene3::
# 58 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 59 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma3
# 60 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 61 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 62 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartSpeech::
# 67 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 68 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 69 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText1
# 70 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 71 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 72 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 73 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText2
# 74 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 75 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 76 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 77 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText3
# 78 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 79 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_START, 1
# 80 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


# 83 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma1:
# 84 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 84 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 84 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma2:
# 88 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 89 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 89 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 92 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma3:
# 93 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 93 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 94 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 94 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 95 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

StartSceneText1::
# 98 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ah, there you are {PLAYER}!\p"
	.string "About time you crawl out of bed,\n"
	.string "you lazy bum.\p"
	.string "I have been up since the crack of dawn\n"
	.string "doing chores.\p"
	.string "Your cousins are already here having\n"
	.string "lunch!\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Come on Grandma, {PLAYER} has\n"
	.string "just got out of bed and you are already\l"
	.string "nagging him.\p"
	.string "Can you pass me the fries, Adrian?\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER} was probably up all\n"
	.string "night playing Crash Royale.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} That was you, idiot.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good thing I have a mission for\n"
	.string "{PLAYER} today, that oughta teach you\l"
	.string "some responsibility!\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It better not be moving new\n"
	.string "stuff into the house. Speaking of which,\l"
	.string "you know what this house really needs?\p"
	.string "More furniture!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yeah, I was thinking it’s still\n"
	.string "too easy to move around. It could really\l"
	.string "get more claustrophobic in here.\n$"

StartSceneText2::
# 125 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Yes boys, make fun of your\n"
	.string "hoarding Grandma.\p"
	.string "If there ever is a fire in your house,\n"
	.string "don’t come crawling to me about\l"
	.string "extra furniture.\p"
	.string "Look at my new armoire, isn’t it a\n"
	.string "beauty? Got it on the side of the road.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Getting a little off topic here.\n"
	.string "So what do you need {PLAYER} to do\l"
	.string "Grandma?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} A naughty pokemon has been\n"
	.string "messing with my torchic, attacking them\l"
	.string "and eating all my eggs!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} That explains why there is so\n"
	.string "little omelet for lunch today.\n$"

StartSceneText3::
# 143 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, I want you to\n"
	.string "investigate and chase off any egg-eating\l"
	.string "Pokemon off my darling eggs.\p"
	.string "Go to the backyard and take a look.\n"
	.string "You might find something there to help\l"
	.string "you out.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good luck playing detective,\n"
	.string "{PLAYER}. The stakes are very high.\n$"

GrandmaSpeechText::
# 154 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} The backyard is through the door\n"
	.string "on the right, but it’s not like you need\l"
	.string "directions in your own home, right?\n$"

AndrewSpeechText::
# 160 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Our Mom sent us on a weird\n"
	.string "errand this morning as well.\p"
	.string "I wonder if it’s related to your own\n"
	.string "errand? Those two ladies are both acting\l"
	.string "suspiciously.\n$"

AdrianSpeechText::
# 168 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Andrew and I got our own POKEMON\n"
	.string "this morning.\n$"

CantLeaveText::
# 173 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, are you still asleep,\n"
	.string "dummy? The backyard door is on the\l"
	.string "right.\n$"
