Amoreira_Floor1_MapScripts::
	.byte 0


Amoreira_Floor1_EventScript_RivalBattle1::
# 4 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 5 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveRivalBattle1
# 6 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 7 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_RivalBattleSpeech
# 8 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_RivalBattle2::
# 13 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 14 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveRivalBattle2
# 15 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 16 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_RivalBattleSpeech
# 17 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_RivalBattle3::
# 22 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 23 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveRivalBattle3
# 24 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 25 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_RivalBattleSpeech
# 26 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_RivalBattleSpeech::
# 31 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 32 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 33 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 34 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 35 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_RivalBattleSpeech_3
# 37 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_RivalBattleSpeech_4
# 39 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_RivalBattleSpeech_5
Amoreira_Floor1_EventScript_RivalBattleSpeech_1:
# 42 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 43 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 44 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 45 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox RivalBattleSpeechText
# 46 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 47 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 4, AndrewMoveBattle
# 48 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 49 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 50 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 51 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Andrew_Intro
# 52 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 53 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_AndrewBattle
# 54 "data/maps/Amoreira_Floor1/scripts.pory"
	call EventScript_FirstBattleOver
# 55 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_AdrianBattle
# 56 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox RivalBattlesOver
# 57 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 58 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	return

Amoreira_Floor1_EventScript_RivalBattleSpeech_3:
# 36 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechRowlet
	goto Amoreira_Floor1_EventScript_RivalBattleSpeech_1

Amoreira_Floor1_EventScript_RivalBattleSpeech_4:
# 38 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechTorchic
	goto Amoreira_Floor1_EventScript_RivalBattleSpeech_1

Amoreira_Floor1_EventScript_RivalBattleSpeech_5:
# 40 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechFroakie
	goto Amoreira_Floor1_EventScript_RivalBattleSpeech_1


Amoreira_Floor1_EventScript_AndrewBattle::
# 62 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 63 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_AndrewBattle_2
# 65 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_AndrewBattle_3
# 67 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_AndrewBattle_4
	return

Amoreira_Floor1_EventScript_AndrewBattle_2:
# 64 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_FROAKIE, Andrew_Outro
	return

Amoreira_Floor1_EventScript_AndrewBattle_3:
# 66 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_ROWLET, Andrew_Outro
	return

Amoreira_Floor1_EventScript_AndrewBattle_4:
# 68 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_TORCHIC, Andrew_Outro
	return


EventScript_FirstBattleOver::
# 73 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox FirstBattleOver
# 74 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 4, AndrewLeave
# 75 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox SecondBattleSetUp
# 76 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 1, GrandmaMoveHeal
# 77 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 78 "data/maps/Amoreira_Floor1/scripts.pory"
	playfanfare MUS_HEAL
# 79 "data/maps/Amoreira_Floor1/scripts.pory"
	waitfanfare
# 80 "data/maps/Amoreira_Floor1/scripts.pory"
	special HealPlayerParty
# 81 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 1, GrandmaReturnAfterHeal
# 82 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 83 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 5, AdrianMoveBattle
# 84 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 85 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Adrian_Intro
# 86 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
	return


Amoreira_Floor1_EventScript_AdrianBattle::
# 90 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 91 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_AdrianBattle_2
# 93 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_AdrianBattle_3
# 95 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_AdrianBattle_4
	return

Amoreira_Floor1_EventScript_AdrianBattle_2:
# 92 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_TORCHIC, Adrian_Outro
	return

Amoreira_Floor1_EventScript_AdrianBattle_3:
# 94 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_FROAKIE, Adrian_Outro
	return

Amoreira_Floor1_EventScript_AdrianBattle_4:
# 96 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_ROWLET, Adrian_Outro
	return


Amoreira_Floor1_EventScript_CantLeave1::
# 101 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 102 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox CantLeaveText
# 103 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 104 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 105 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_GrandmaSpeech::
# 110 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 111 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 112 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaSpeechText
# 113 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 114 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AndrewSpeech::
# 119 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 120 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 121 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AndrewSpeechText
# 122 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 123 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AdrianSpeech::
# 128 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 129 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 130 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AdrianSpeechText
# 131 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 132 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_StartScene1::
# 137 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 138 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma1
# 139 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 140 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 141 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene2::
# 146 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 147 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma2
# 148 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 149 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 150 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene3::
# 155 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 156 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma3
# 157 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 158 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 159 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartSpeech::
# 164 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 165 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 166 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText1
# 167 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 168 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 169 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 170 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText2
# 171 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 172 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 173 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 174 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText3
# 175 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 176 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_START, 1
# 177 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


# 180 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma1:
# 181 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 181 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 181 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 184 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma2:
# 185 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 186 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 186 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 189 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma3:
# 190 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 190 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 191 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 191 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 192 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 195 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle1:
# 196 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 196 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 196 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 197 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 197 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 199 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle2:
# 200 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 200 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 200 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 200 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 201 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 203 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle3:
# 204 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 204 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 204 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 204 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 204 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 205 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 205 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 207 "data/maps/Amoreira_Floor1/scripts.pory"
AndrewMoveBattle:
# 208 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 209 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 209 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 209 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 209 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
	step_end

# 211 "data/maps/Amoreira_Floor1/scripts.pory"
AdrianMoveBattle:
# 212 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 213 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 213 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 214 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 214 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 214 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 214 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 214 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
	step_end

# 217 "data/maps/Amoreira_Floor1/scripts.pory"
AndrewLeave:
# 218 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 218 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 218 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 218 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 219 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 220 "data/maps/Amoreira_Floor1/scripts.pory"
	face_right
	step_end

# 223 "data/maps/Amoreira_Floor1/scripts.pory"
GrandmaMoveHeal:
# 224 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 224 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 225 "data/maps/Amoreira_Floor1/scripts.pory"
	face_up
	step_end

# 228 "data/maps/Amoreira_Floor1/scripts.pory"
GrandmaReturnAfterHeal:
# 229 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 229 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 230 "data/maps/Amoreira_Floor1/scripts.pory"
	face_right
	step_end

FirstBattleOver::
# 233 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} And the winner of the first\n"
	.string "round is {PLAYER}!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What are you, a sports\n"
	.string "announcer?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} If you don’t take this\n"
	.string "championship seriously, you won’t get\l"
	.string "the prize!\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} No carrot cake for me then. But\n"
	.string "the fight was still cool, I guess.\n$"

SecondBattleSetUp::
# 245 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You are too nonchalant\n"
	.string "sometimes Andrew. Where is your fiery\l"
	.string "spirit?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here {PLAYER}, let me heal your\n"
	.string "pokemon.\n$"

StartSceneText1::
# 253 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 280 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 298 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, I want you to\n"
	.string "investigate and chase off any egg-eating\l"
	.string "Pokemon off my darling eggs.\p"
	.string "Go to the backyard and take a look.\n"
	.string "You might find something there to help\l"
	.string "you out.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good luck playing detective,\n"
	.string "{PLAYER}. The stakes are very high.\n$"

GrandmaSpeechText::
# 309 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} The backyard is through the door\n"
	.string "on the right, but it’s not like you need\l"
	.string "directions in your own home, right?\n$"

AndrewSpeechText::
# 315 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Our Mom sent us on a weird\n"
	.string "errand this morning as well.\p"
	.string "I wonder if it’s related to your own\n"
	.string "errand? Those two ladies are both acting\l"
	.string "suspiciously.\n$"

AdrianSpeechText::
# 323 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Andrew and I got our own POKEMON\n"
	.string "this morning.\n$"

CantLeaveText::
# 328 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, are you still asleep,\n"
	.string "dummy? The backyard door is on the\l"
	.string "right.\n$"

GrandmaStarterSpeechFroakie::
# 334 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Froakie?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\p$"

GrandmaStarterSpeechRowlet::
# 340 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Rowlet?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\p$"

GrandmaStarterSpeechTorchic::
# 346 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Torchic?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\n$"

RivalBattleSpeechText::
# 352 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Except you don’t have good taste.\n"
	.string "You go shopping at the junkyard.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Zip it now, other grandson!\n"
	.string "Don’t bite the hand that feeds you\l"
	.string "schmucks every day.\p"
	.string "Now, the second part of the errand is\n"
	.string "here. A very exciting one!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Which is?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Duke it out, fellas. Granny\n"
	.string "wants to see some action! Winner gets a\l"
	.string "slice of carrot cake.\n$"

Andrew_Intro::
# 366 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well, you heard the old lady.\n"
	.string "I’m first!\n$"

Andrew_Outro::
# 371 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "Like they say, hard situations aren’t\n"
	.string "easy.\n$"

Adrian_Intro::
# 376 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Speaking of cake, battling\n"
	.string "against a type you are strong against is\l"
	.string "a cakewalk.\p"
	.string "I’m next little cousin, and you can bet\n"
	.string "I won’t hold back.\n$"

Adrian_Outro::
# 384 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "Doesn't count$"

RivalBattlesOver::
# 388 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Power to the new gen of POKEMON\n"
	.string "TRAINERS!\p"
	.string "Seems like your little cousin has won by\n"
	.string "a landslide.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER} is not younger by that\n"
	.string "much.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here is your reward, hon.\n"
	.string "To the first champion of Mulbery Town!\p$"
