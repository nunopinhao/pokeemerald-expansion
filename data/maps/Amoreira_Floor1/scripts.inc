Amoreira_Floor1_MapScripts::
	.byte 0


Amoreira_Floor1_EventScript_StartScene1::
# 4 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 5 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma1
# 6 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 7 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 8 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 9 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText1
# 10 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 11 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 12 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 13 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText2
# 14 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 15 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 16 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 17 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText3
# 18 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 19 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_START, 1
# 20 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 21 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	return


Amoreira_Floor1_EventScript_StartScene2::
# 25 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 26 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma2
# 27 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 28 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 29 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 30 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText1
# 31 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 32 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 33 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 34 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText2
# 35 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 36 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 37 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 38 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText3
# 39 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 40 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_START, 1
# 41 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 42 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	return


Amoreira_Floor1_EventScript_StartScene3::
# 46 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 47 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma3
# 48 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 49 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 50 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 51 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText1
# 52 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 53 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 54 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 55 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText2
# 56 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 57 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 58 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 59 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText3
# 60 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 61 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_START, 1
# 62 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 63 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	return


# 66 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma1:
# 67 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 67 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 67 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 70 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma2:
# 71 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 72 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 72 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma3:
# 76 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 76 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 77 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 77 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 78 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

StartSceneText1::
# 81 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 108 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 126 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, I want you to\n"
	.string "investigate and chase off any egg-eating\l"
	.string "Pokemon off my darling eggs.\p"
	.string "Go to the backyard and take a look.\n"
	.string "You might find something there to help\l"
	.string "you out.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good luck playing detective,\n"
	.string "{PLAYER}. The stakes are very high.\n$"
