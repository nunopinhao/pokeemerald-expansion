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
	call Amoreira_Floor1_EventScript_SetUpAndrewBattle
# 33 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_AndrewBattle
# 34 "data/maps/Amoreira_Floor1/scripts.pory"
	call EventScript_FirstBattleOver
# 35 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_AdrianBattle
# 36 "data/maps/Amoreira_Floor1/scripts.pory"
	call EventScript_AfterRivalBattles
# 37 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	return


EventScript_AfterRivalBattles::
# 41 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox RivalBattlesOver
# 42 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 43 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 6, GrandmaMoveHeal
# 44 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 45 "data/maps/Amoreira_Floor1/scripts.pory"
	giveitem ITEM_OLD_GATEAU
# 46 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Grandma_GiveGateau
# 47 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 48 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_READY_FOR_RIVAL_BATTLE, 0
	return


Amoreira_Floor1_EventScript_SetUpAndrewBattle::
# 52 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 53 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 54 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 55 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_SetUpAndrewBattle_3
# 57 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_SetUpAndrewBattle_4
# 59 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_SetUpAndrewBattle_5
Amoreira_Floor1_EventScript_SetUpAndrewBattle_1:
# 62 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 63 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 64 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 65 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox RivalBattleSpeechText
# 66 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 67 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 68 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 4, AndrewMoveBattle
# 69 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 70 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 71 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 72 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Andrew_Intro
# 73 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
	return

Amoreira_Floor1_EventScript_SetUpAndrewBattle_3:
# 56 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechRowlet
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1

Amoreira_Floor1_EventScript_SetUpAndrewBattle_4:
# 58 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechTorchic
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1

Amoreira_Floor1_EventScript_SetUpAndrewBattle_5:
# 60 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechFroakie
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1


Amoreira_Floor1_EventScript_AndrewBattle::
# 77 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 78 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_AndrewBattle_2
# 80 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_AndrewBattle_3
# 82 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_AndrewBattle_4
	return

Amoreira_Floor1_EventScript_AndrewBattle_2:
# 79 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_FROAKIE, Andrew_Outro
	return

Amoreira_Floor1_EventScript_AndrewBattle_3:
# 81 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_ROWLET, Andrew_Outro
	return

Amoreira_Floor1_EventScript_AndrewBattle_4:
# 83 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_TORCHIC, Andrew_Outro
	return


EventScript_FirstBattleOver::
# 88 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox FirstBattleOver
# 89 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 4, AndrewLeave
# 90 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox SecondBattleSetUp
# 91 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 6, GrandmaMoveHeal
# 92 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 93 "data/maps/Amoreira_Floor1/scripts.pory"
	playfanfare MUS_HEAL
# 94 "data/maps/Amoreira_Floor1/scripts.pory"
	waitfanfare
# 95 "data/maps/Amoreira_Floor1/scripts.pory"
	special HealPlayerParty
# 96 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 97 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 6, GrandmaReturnAfterHeal
# 98 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 99 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 5, AdrianMoveBattle
# 100 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 101 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Adrian_Intro
# 102 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
	return


Amoreira_Floor1_EventScript_AdrianBattle::
# 106 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 107 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_AdrianBattle_2
# 109 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_AdrianBattle_3
# 111 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_AdrianBattle_4
	return

Amoreira_Floor1_EventScript_AdrianBattle_2:
# 108 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_TORCHIC, Adrian_Outro
	return

Amoreira_Floor1_EventScript_AdrianBattle_3:
# 110 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_FROAKIE, Adrian_Outro
	return

Amoreira_Floor1_EventScript_AdrianBattle_4:
# 112 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_ROWLET, Adrian_Outro
	return


Amoreira_Floor1_EventScript_CantLeave1::
# 117 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 118 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox CantLeaveText
# 119 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 120 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 121 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_GrandmaSpeech::
# 126 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 127 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 128 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaSpeechText
# 129 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 130 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AndrewSpeech::
# 135 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 136 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 137 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AndrewSpeechText
# 138 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 139 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AdrianSpeech::
# 144 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 145 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 146 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AdrianSpeechText
# 147 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 148 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_StartScene1::
# 153 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 154 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma1
# 155 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 156 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 157 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene2::
# 162 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 163 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma2
# 164 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 165 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 166 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene3::
# 171 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 172 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma3
# 173 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 174 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 175 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartSpeech::
# 180 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 181 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 182 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText1
# 183 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 184 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 185 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 186 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText2
# 187 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 188 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 189 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 190 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText3
# 191 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 192 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_START, 1
# 193 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


Amoreira_Floor1_Grandma_HealSpot::
# 197 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 198 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 199 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaHealSpotText
# 200 "data/maps/Amoreira_Floor1/scripts.pory"
	playfanfare MUS_HEAL
# 201 "data/maps/Amoreira_Floor1/scripts.pory"
	waitfanfare
# 202 "data/maps/Amoreira_Floor1/scripts.pory"
	special HealPlayerParty
# 203 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 204 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


# 210 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma1:
# 211 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 211 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 211 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 214 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma2:
# 215 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 216 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 216 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma3:
# 220 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 220 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 221 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 221 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 222 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 225 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle1:
# 226 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 226 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 226 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 227 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 227 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle2:
# 230 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 230 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 230 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 230 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 231 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 233 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle3:
# 234 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 234 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 234 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 234 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 234 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 235 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 235 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 237 "data/maps/Amoreira_Floor1/scripts.pory"
AndrewMoveBattle:
# 238 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 239 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 239 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 239 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 239 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
	step_end

# 241 "data/maps/Amoreira_Floor1/scripts.pory"
AdrianMoveBattle:
# 242 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 243 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 243 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 244 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 244 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 244 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 244 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 244 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
	step_end

# 247 "data/maps/Amoreira_Floor1/scripts.pory"
AndrewLeave:
# 248 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 248 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 248 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 248 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 249 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 250 "data/maps/Amoreira_Floor1/scripts.pory"
	face_right
	step_end

# 253 "data/maps/Amoreira_Floor1/scripts.pory"
GrandmaMoveHeal:
# 254 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 254 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 255 "data/maps/Amoreira_Floor1/scripts.pory"
	face_up
	step_end

# 258 "data/maps/Amoreira_Floor1/scripts.pory"
GrandmaReturnAfterHeal:
# 259 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 259 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 260 "data/maps/Amoreira_Floor1/scripts.pory"
	face_right
	step_end

FirstBattleOver::
# 267 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 279 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You are too nonchalant\n"
	.string "sometimes Andrew. Where is your fiery\l"
	.string "spirit?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here {PLAYER}, let me heal your\n"
	.string "pokemon.\n$"

StartSceneText1::
# 287 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 314 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 332 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, I want you to\n"
	.string "investigate and chase off any egg-eating\l"
	.string "Pokemon off my darling eggs.\p"
	.string "Go to the backyard and take a look.\n"
	.string "You might find something there to help\l"
	.string "you out.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good luck playing detective,\n"
	.string "{PLAYER}. The stakes are very high.\n$"

GrandmaSpeechText::
# 343 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} The backyard is through the door\n"
	.string "on the right, but it’s not like you need\l"
	.string "directions in your own home, right?\n$"

AndrewSpeechText::
# 349 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Our Mom sent us on a weird\n"
	.string "errand this morning as well.\p"
	.string "I wonder if it’s related to your own\n"
	.string "errand? Those two ladies are both acting\l"
	.string "suspiciously.\n$"

AdrianSpeechText::
# 357 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Andrew and I got our own POKEMON\n"
	.string "this morning.\n$"

CantLeaveText::
# 362 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, are you still asleep,\n"
	.string "dummy? The backyard door is on the\l"
	.string "right.\n$"

GrandmaStarterSpeechFroakie::
# 368 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Froakie?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\p$"

GrandmaStarterSpeechRowlet::
# 374 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Rowlet?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\p$"

GrandmaStarterSpeechTorchic::
# 380 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Torchic?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\n$"

RivalBattleSpeechText::
# 386 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 400 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well, you heard the old lady.\n"
	.string "I’m first!\n$"

Andrew_Outro::
# 405 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "Like they say, hard situations aren’t\n"
	.string "easy.\n$"

Adrian_Intro::
# 410 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Speaking of cake, battling\n"
	.string "against a type you are strong against is\l"
	.string "a cakewalk.\p"
	.string "I’m next little cousin, and you can bet\n"
	.string "I won’t hold back.\n$"

Adrian_Outro::
# 418 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "Doesn't count$"

RivalBattlesOver::
# 422 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Power to the new gen of POKEMON\n"
	.string "TRAINERS!\p"
	.string "Seems like your little cousin has won by\n"
	.string "a landslide.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER} is not younger by that\n"
	.string "much.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here is your reward, hon.\n"
	.string "To the first champion of Mulbery Town!\n$"

Grandma_GiveGateau::
# 433 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What is that look? I didn’t lie,\n"
	.string "it IS carrot cake. It’s just a bit old,\l"
	.string "is all. Don’t be petty.\n$"

GrandmaHealSpotText::
# 439 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here {PLAYER}, let me heal your\n"
	.string "pokemon.\n$"
