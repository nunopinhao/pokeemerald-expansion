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
	applymovement 1, GrandmaMoveHeal
# 44 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 45 "data/maps/Amoreira_Floor1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/Amoreira_Floor1/scripts.pory"
	waitfanfare
# 47 "data/maps/Amoreira_Floor1/scripts.pory"
	giveitem ITEM_OLD_GATEAU
# 48 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Grandma_GiveGateau
# 49 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
	return


Amoreira_Floor1_EventScript_SetUpAndrewBattle::
# 53 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 54 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 55 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 56 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_SetUpAndrewBattle_3
# 58 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_SetUpAndrewBattle_4
# 60 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_SetUpAndrewBattle_5
Amoreira_Floor1_EventScript_SetUpAndrewBattle_1:
# 63 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 64 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 65 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 66 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox RivalBattleSpeechText
# 67 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 68 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 69 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 4, AndrewMoveBattle
# 70 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 71 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 72 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 73 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Andrew_Intro
# 74 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
	return

Amoreira_Floor1_EventScript_SetUpAndrewBattle_3:
# 57 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechRowlet
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1

Amoreira_Floor1_EventScript_SetUpAndrewBattle_4:
# 59 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechTorchic
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1

Amoreira_Floor1_EventScript_SetUpAndrewBattle_5:
# 61 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechFroakie
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1


Amoreira_Floor1_EventScript_AndrewBattle::
# 78 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 79 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_AndrewBattle_2
# 81 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_AndrewBattle_3
# 83 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_AndrewBattle_4
	return

Amoreira_Floor1_EventScript_AndrewBattle_2:
# 80 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_FROAKIE, Andrew_Outro
	return

Amoreira_Floor1_EventScript_AndrewBattle_3:
# 82 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_ROWLET, Andrew_Outro
	return

Amoreira_Floor1_EventScript_AndrewBattle_4:
# 84 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_TORCHIC, Andrew_Outro
	return


EventScript_FirstBattleOver::
# 89 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox FirstBattleOver
# 90 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 4, AndrewLeave
# 91 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox SecondBattleSetUp
# 92 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 1, GrandmaMoveHeal
# 93 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 94 "data/maps/Amoreira_Floor1/scripts.pory"
	playfanfare MUS_HEAL
# 95 "data/maps/Amoreira_Floor1/scripts.pory"
	waitfanfare
# 96 "data/maps/Amoreira_Floor1/scripts.pory"
	special HealPlayerParty
# 97 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 98 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 1, GrandmaReturnAfterHeal
# 99 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 100 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 5, AdrianMoveBattle
# 101 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 102 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Adrian_Intro
# 103 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
	return


Amoreira_Floor1_EventScript_AdrianBattle::
# 107 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 108 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_AdrianBattle_2
# 110 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_AdrianBattle_3
# 112 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_AdrianBattle_4
	return

Amoreira_Floor1_EventScript_AdrianBattle_2:
# 109 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_TORCHIC, Adrian_Outro
	return

Amoreira_Floor1_EventScript_AdrianBattle_3:
# 111 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_FROAKIE, Adrian_Outro
	return

Amoreira_Floor1_EventScript_AdrianBattle_4:
# 113 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_ROWLET, Adrian_Outro
	return


Amoreira_Floor1_EventScript_CantLeave1::
# 118 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 119 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox CantLeaveText
# 120 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 121 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 122 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_GrandmaSpeech::
# 127 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 128 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 129 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaSpeechText
# 130 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 131 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AndrewSpeech::
# 136 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 137 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 138 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AndrewSpeechText
# 139 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 140 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AdrianSpeech::
# 145 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 146 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 147 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AdrianSpeechText
# 148 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 149 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_StartScene1::
# 154 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 155 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma1
# 156 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 157 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 158 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene2::
# 163 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 164 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma2
# 165 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 166 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 167 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene3::
# 172 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 173 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma3
# 174 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 175 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 176 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartSpeech::
# 181 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 182 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 183 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText1
# 184 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 185 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 186 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 187 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText2
# 188 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 189 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 190 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 191 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText3
# 192 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 193 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_START, 1
# 194 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


# 197 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma1:
# 198 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 198 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 198 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 201 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma2:
# 202 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 203 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 203 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 206 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma3:
# 207 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 207 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 208 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 208 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 209 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 212 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle1:
# 213 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 213 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 213 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 214 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 214 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 216 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle2:
# 217 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 217 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 217 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 217 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 218 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 220 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle3:
# 221 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 221 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 221 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 221 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 221 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 222 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 222 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 224 "data/maps/Amoreira_Floor1/scripts.pory"
AndrewMoveBattle:
# 225 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 226 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 226 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 226 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 226 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
	step_end

# 228 "data/maps/Amoreira_Floor1/scripts.pory"
AdrianMoveBattle:
# 229 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 230 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 230 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 231 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 231 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 231 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 231 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 231 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
	step_end

# 234 "data/maps/Amoreira_Floor1/scripts.pory"
AndrewLeave:
# 235 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 235 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 235 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 235 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 236 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 237 "data/maps/Amoreira_Floor1/scripts.pory"
	face_right
	step_end

# 240 "data/maps/Amoreira_Floor1/scripts.pory"
GrandmaMoveHeal:
# 241 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 241 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 242 "data/maps/Amoreira_Floor1/scripts.pory"
	face_up
	step_end

# 245 "data/maps/Amoreira_Floor1/scripts.pory"
GrandmaReturnAfterHeal:
# 246 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 246 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 247 "data/maps/Amoreira_Floor1/scripts.pory"
	face_right
	step_end

FirstBattleOver::
# 250 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 262 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You are too nonchalant\n"
	.string "sometimes Andrew. Where is your fiery\l"
	.string "spirit?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here {PLAYER}, let me heal your\n"
	.string "pokemon.\n$"

StartSceneText1::
# 270 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 297 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 315 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, I want you to\n"
	.string "investigate and chase off any egg-eating\l"
	.string "Pokemon off my darling eggs.\p"
	.string "Go to the backyard and take a look.\n"
	.string "You might find something there to help\l"
	.string "you out.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good luck playing detective,\n"
	.string "{PLAYER}. The stakes are very high.\n$"

GrandmaSpeechText::
# 326 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} The backyard is through the door\n"
	.string "on the right, but it’s not like you need\l"
	.string "directions in your own home, right?\n$"

AndrewSpeechText::
# 332 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Our Mom sent us on a weird\n"
	.string "errand this morning as well.\p"
	.string "I wonder if it’s related to your own\n"
	.string "errand? Those two ladies are both acting\l"
	.string "suspiciously.\n$"

AdrianSpeechText::
# 340 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Andrew and I got our own POKEMON\n"
	.string "this morning.\n$"

CantLeaveText::
# 345 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, are you still asleep,\n"
	.string "dummy? The backyard door is on the\l"
	.string "right.\n$"

GrandmaStarterSpeechFroakie::
# 351 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Froakie?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\p$"

GrandmaStarterSpeechRowlet::
# 357 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Rowlet?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\p$"

GrandmaStarterSpeechTorchic::
# 363 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Torchic?\n"
	.string "Of course you did! A grandson of mine\l"
	.string "could only have good taste.\n$"

RivalBattleSpeechText::
# 369 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 383 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well, you heard the old lady.\n"
	.string "I’m first!\n$"

Andrew_Outro::
# 388 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "Like they say, hard situations aren’t\n"
	.string "easy.\n$"

Adrian_Intro::
# 393 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Speaking of cake, battling\n"
	.string "against a type you are strong against is\l"
	.string "a cakewalk.\p"
	.string "I’m next little cousin, and you can bet\n"
	.string "I won’t hold back.\n$"

Adrian_Outro::
# 401 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "Doesn't count$"

RivalBattlesOver::
# 405 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Power to the new gen of POKEMON\n"
	.string "TRAINERS!\p"
	.string "Seems like your little cousin has won by\n"
	.string "a landslide.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER} is not younger by that\n"
	.string "much.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here is your reward, hon.\n"
	.string "To the first champion of Mulbery Town!\n$"

Grandma_GiveGateau::
# 416 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What is that look? I didn’t lie,\n"
	.string "it IS carrot cake. It’s just a bit old,\l"
	.string "is all. Don’t be petty.\n$"
