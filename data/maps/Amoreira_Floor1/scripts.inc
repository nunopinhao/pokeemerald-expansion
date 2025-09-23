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


Amoreira_Floor1_EventScript_RivalBattle4::
# 31 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 32 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveRivalBattle4
# 33 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 34 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_RivalBattleSpeech
# 35 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_RivalBattle5::
# 40 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 41 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveRivalBattle5
# 42 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 43 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_RivalBattleSpeech
# 44 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_RivalBattle6::
# 49 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 50 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveRivalBattle6
# 51 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 52 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_RivalBattleSpeech
# 53 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_RivalBattleSpeech::
# 59 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 60 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_SetUpAndrewBattle
# 61 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_AndrewBattle
# 62 "data/maps/Amoreira_Floor1/scripts.pory"
	call EventScript_FirstBattleOver
# 63 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_AdrianBattle
# 64 "data/maps/Amoreira_Floor1/scripts.pory"
	call EventScript_AfterRivalBattles
# 65 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	return


EventScript_AfterRivalBattles::
# 69 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox RivalBattlesOver
# 70 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 71 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 6, GrandmaMoveHeal
# 72 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 73 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 74 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 75 "data/maps/Amoreira_Floor1/scripts.pory"
	giveitem ITEM_OLD_GATEAU
# 76 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Grandma_GiveGateau
# 77 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 78 "data/maps/Amoreira_Floor1/scripts.pory"
	special HealPlayerParty
# 79 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Grandma_GivePokeBalls
# 80 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 81 "data/maps/Amoreira_Floor1/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 82 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Grandma_ExplainPokeBalls
# 83 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 84 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_READY_FOR_RIVAL_BATTLE, 0
	return


Amoreira_Floor1_EventScript_SetUpAndrewBattle::
# 88 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 89 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 90 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 91 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_SetUpAndrewBattle_3
# 93 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_SetUpAndrewBattle_4
# 95 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_SetUpAndrewBattle_5
Amoreira_Floor1_EventScript_SetUpAndrewBattle_1:
# 98 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 99 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 100 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 101 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox RivalBattleSpeechText
# 102 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 103 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 104 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 4, AndrewMoveBattle
# 105 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 106 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 107 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 108 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Andrew_Intro
# 109 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
	return

Amoreira_Floor1_EventScript_SetUpAndrewBattle_3:
# 92 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechRowlet
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1

Amoreira_Floor1_EventScript_SetUpAndrewBattle_4:
# 94 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechTorchic
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1

Amoreira_Floor1_EventScript_SetUpAndrewBattle_5:
# 96 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaStarterSpeechFroakie
	goto Amoreira_Floor1_EventScript_SetUpAndrewBattle_1


Amoreira_Floor1_EventScript_AndrewBattle::
# 113 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 114 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_AndrewBattle_2
# 116 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_AndrewBattle_3
# 118 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_AndrewBattle_4
	return

Amoreira_Floor1_EventScript_AndrewBattle_2:
# 115 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_FROAKIE, Andrew_Outro
	return

Amoreira_Floor1_EventScript_AndrewBattle_3:
# 117 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_ROWLET, Andrew_Outro
	return

Amoreira_Floor1_EventScript_AndrewBattle_4:
# 119 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDREW_AMOREIRA_FLOOR1_TORCHIC, Andrew_Outro
	return


EventScript_FirstBattleOver::
# 124 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox FirstBattleOver
# 125 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 4, AndrewLeave
# 126 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox SecondBattleSetUp
# 127 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 6, GrandmaMoveHeal
# 128 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 129 "data/maps/Amoreira_Floor1/scripts.pory"
	playfanfare MUS_HEAL
# 130 "data/maps/Amoreira_Floor1/scripts.pory"
	waitfanfare
# 131 "data/maps/Amoreira_Floor1/scripts.pory"
	special HealPlayerParty
# 132 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 133 "data/maps/Amoreira_Floor1/scripts.pory"
	applyMovement 6, GrandmaReturnAfterHeal
# 134 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 135 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 5, AdrianMoveBattle
# 136 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 137 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox Adrian_Intro
# 138 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
	return


Amoreira_Floor1_EventScript_AdrianBattle::
# 142 "data/maps/Amoreira_Floor1/scripts.pory"
	switch VAR_STARTER_MON
# 143 "data/maps/Amoreira_Floor1/scripts.pory"
	case 0, Amoreira_Floor1_EventScript_AdrianBattle_2
# 145 "data/maps/Amoreira_Floor1/scripts.pory"
	case 1, Amoreira_Floor1_EventScript_AdrianBattle_3
# 147 "data/maps/Amoreira_Floor1/scripts.pory"
	case 2, Amoreira_Floor1_EventScript_AdrianBattle_4
	return

Amoreira_Floor1_EventScript_AdrianBattle_2:
# 144 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_TORCHIC, Adrian_Outro
	return

Amoreira_Floor1_EventScript_AdrianBattle_3:
# 146 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_FROAKIE, Adrian_Outro
	return

Amoreira_Floor1_EventScript_AdrianBattle_4:
# 148 "data/maps/Amoreira_Floor1/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_AMOREIRA_FLOOR1_ROWLET, Adrian_Outro
	return


Amoreira_Floor1_EventScript_CantLeave1::
# 153 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 154 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox CantLeaveText
# 155 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 156 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 157 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_GrandmaSpeech::
# 162 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 163 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 164 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaSpeechText
# 165 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 166 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AndrewSpeech::
# 171 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 172 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 173 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AndrewSpeechText
# 174 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 175 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AdrianSpeech::
# 180 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 181 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 182 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AdrianSpeechText
# 183 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 184 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AndrewSpeech_AfterBattle::
# 189 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 190 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 191 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AndrewSpeechAfterBattleText
# 192 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 193 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_AdrianSpeech_AfterBattle::
# 198 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 199 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 200 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox AdrianSpeechAfterBattleText
# 201 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 202 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


Amoreira_Floor1_EventScript_StartScene1::
# 208 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 209 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma1
# 210 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 211 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 212 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene2::
# 217 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 218 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma2
# 219 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 220 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 221 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartScene3::
# 226 "data/maps/Amoreira_Floor1/scripts.pory"
	lockall
# 227 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearGrandma3
# 228 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 229 "data/maps/Amoreira_Floor1/scripts.pory"
	call Amoreira_Floor1_EventScript_StartSpeech
# 230 "data/maps/Amoreira_Floor1/scripts.pory"
	releaseall
	end


Amoreira_Floor1_EventScript_StartSpeech::
# 235 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 236 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 237 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText1
# 238 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 239 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 240 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 241 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText2
# 242 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 243 "data/maps/Amoreira_Floor1/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 244 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmovement 0
# 245 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox StartSceneText3
# 246 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 247 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_AMOREIRA_START, 1
# 248 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


Amoreira_Floor1_Grandma_HealSpot::
# 252 "data/maps/Amoreira_Floor1/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, Amoreira_Floor1_Grandma_HealSpot_1
# 260 "data/maps/Amoreira_Floor1/scripts.pory"
	goto_if_set FLAG_DEFEATED_ZORUA, Amoreira_Floor1_Grandma_HealSpot_2
# 282 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 283 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 284 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaHealSpotText
# 285 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 286 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end

Amoreira_Floor1_Grandma_HealSpot_1:
# 253 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 254 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 255 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaDefeatedZoruaText2
# 256 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 257 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end

Amoreira_Floor1_Grandma_HealSpot_2:
# 261 "data/maps/Amoreira_Floor1/scripts.pory"
	lock
# 262 "data/maps/Amoreira_Floor1/scripts.pory"
	faceplayer
# 263 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaDefeatedZoruaText
# 264 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 265 "data/maps/Amoreira_Floor1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 266 "data/maps/Amoreira_Floor1/scripts.pory"
	message Amoreira_Floor1_Grandma_HealSpot_Text_0
# 267 "data/maps/Amoreira_Floor1/scripts.pory"
	waitfanfare
# 268 "data/maps/Amoreira_Floor1/scripts.pory"
	closemessage
# 269 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 270 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 271 "data/maps/Amoreira_Floor1/scripts.pory"
	special SetUnlockedPokedexFlags
# 272 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 273 "data/maps/Amoreira_Floor1/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 274 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_TRUCK_AMOREIRA
# 275 "data/maps/Amoreira_Floor1/scripts.pory"
	setflag FLAG_MR_FALLSMELL
# 276 "data/maps/Amoreira_Floor1/scripts.pory"
	msgbox GrandmaDefeatedZoruaText2
# 277 "data/maps/Amoreira_Floor1/scripts.pory"
	waitmessage
# 278 "data/maps/Amoreira_Floor1/scripts.pory"
	release
	end


# 293 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma1:
# 294 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 294 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 294 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 297 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma2:
# 298 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 299 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 299 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 302 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveNearGrandma3:
# 303 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 303 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 304 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 304 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 305 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 308 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle1:
# 309 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 309 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 309 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 310 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 310 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 312 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle2:
# 313 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 313 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 313 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 313 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 314 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 316 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle3:
# 317 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 317 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 317 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 317 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 317 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 318 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 318 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 320 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle4:
# 321 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 321 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 321 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 323 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle5:
# 324 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 325 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 325 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 325 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 327 "data/maps/Amoreira_Floor1/scripts.pory"
PlayerMoveRivalBattle6:
# 328 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 328 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 329 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 329 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 329 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/Amoreira_Floor1/scripts.pory"
AndrewMoveBattle:
# 333 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 334 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 334 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 334 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 334 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
	step_end

# 336 "data/maps/Amoreira_Floor1/scripts.pory"
AdrianMoveBattle:
# 337 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 338 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 338 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_up
# 339 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 339 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 339 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 339 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 339 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
	step_end

# 342 "data/maps/Amoreira_Floor1/scripts.pory"
AndrewLeave:
# 343 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 343 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 343 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 343 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 344 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_down
# 345 "data/maps/Amoreira_Floor1/scripts.pory"
	face_right
	step_end

# 348 "data/maps/Amoreira_Floor1/scripts.pory"
GrandmaMoveHeal:
# 349 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 349 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_right
# 350 "data/maps/Amoreira_Floor1/scripts.pory"
	face_up
	step_end

# 353 "data/maps/Amoreira_Floor1/scripts.pory"
GrandmaReturnAfterHeal:
# 354 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 354 "data/maps/Amoreira_Floor1/scripts.pory"
	walk_left
# 355 "data/maps/Amoreira_Floor1/scripts.pory"
	face_right
	step_end

Amoreira_Floor1_Grandma_HealSpot_Text_0:
# 266 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

FirstBattleOver::
# 362 "data/maps/Amoreira_Floor1/scripts.pory"
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
# 374 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You are too nonchalant\n"
	.string "sometimes Andrew. Where is your fiery\l"
	.string "spirit?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here {PLAYER}, let me heal your\n"
	.string "pokemon.\n$"

StartSceneText1::
# 382 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Ah, there you are {PLAYER}!\p"
	.string "About time you crawl out of bed,\n"
	.string "you lazy bum.\p"
	.string "I have been up since the crack of dawn\n"
	.string "doing chores.\p"
	.string "Your cousins are already here having\n"
	.string "lunch!\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Come on Grandma, {PLAYER} has\n"
	.string "just got out of bed and you are already\l"
	.string "nagging them.\p"
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
# 409 "data/maps/Amoreira_Floor1/scripts.pory"
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
	.string "messing with my Torchic, attacking them\l"
	.string "and eating all my eggs!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} That explains why there is so\n"
	.string "little omelet for lunch today.\n$"

StartSceneText3::
# 427 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, I want you to\n"
	.string "investigate and chase off any egg-eating\l"
	.string "Pokemon off my darling eggs.\p"
	.string "Go to the backyard and take a look.\n"
	.string "You might find something there to help\l"
	.string "you out.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good luck playing detective,\n"
	.string "{PLAYER}. The stakes are very high.\n$"

GrandmaSpeechText::
# 438 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} The backyard is through the door\n"
	.string "on the right, but it’s not like you need\l"
	.string "directions in your own home, right?\n$"

AndrewSpeechText::
# 444 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Our Mom sent us on a weird\n"
	.string "errand this morning as well.\p"
	.string "I wonder if it’s related to your own\n"
	.string "errand? Those two ladies are both acting\l"
	.string "suspiciously.\n$"

AdrianSpeechText::
# 452 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Andrew and I got our own POKEMON\n"
	.string "this morning.\n$"

CantLeaveText::
# 457 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER}, are you still asleep,\n"
	.string "dummy? The backyard door is on the\l"
	.string "right.\n$"

GrandmaStarterSpeechFroakie::
# 463 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Froakie?\n"
	.string "Of course you did! A grandchild of mine\l"
	.string "could only have good taste.\n$"

GrandmaStarterSpeechRowlet::
# 469 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Rowlet?\n"
	.string "Of course you did! A grandchild of mine\l"
	.string "could only have good taste.\n$"

GrandmaStarterSpeechTorchic::
# 475 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} So you chose Torchic?\n"
	.string "Of course you did! A grandchild of mine\l"
	.string "could only have good taste.\n$"

RivalBattleSpeechText::
# 481 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Except you don’t have good taste.\n"
	.string "You go shopping at the junkyard.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Zip it now, other grandchild!\n"
	.string "Don’t bite the hand that feeds you\l"
	.string "schmucks every day.\p"
	.string "Now, the second part of the errand is\n"
	.string "here. A very exciting one!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Which is?\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Duke it out, fellas. Granny\n"
	.string "wants to see some action! Winner gets a\l"
	.string "slice of carrot cake.\n$"

Andrew_Intro::
# 495 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Well, you heard the old lady.\n"
	.string "I’m first!\n$"

Andrew_Outro::
# 500 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "Like they say, hard situations aren’t\n"
	.string "easy.\n$"

Adrian_Intro::
# 505 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Speaking of cake, battling\n"
	.string "against a type you are strong against is\l"
	.string "a cakewalk.\p"
	.string "I’m next little cousin, and you can bet\n"
	.string "I won’t hold back.\n$"

Adrian_Outro::
# 513 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "Didn't see this coming...$"

RivalBattlesOver::
# 517 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Power to the new gen of Pokemon\n"
	.string "trainers!\p"
	.string "Seems like your little cousin has won by\n"
	.string "a landslide.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} {PLAYER} is not younger by that\n"
	.string "much.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here is your reward, hon.\n"
	.string "To the first champion of Mulbery Town!\n$"

Grandma_GiveGateau::
# 528 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} What is that look? I didn’t lie,\n"
	.string "it IS carrot cake. It’s just a bit old,\l"
	.string "is all. Don’t be petty.\n$"

GrandmaHealSpotText::
# 534 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Grandma is rooting for you!\n$"

Grandma_GivePokeBalls::
# 538 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} And here is the rest of your\n"
	.string "prize.\n$"

Grandma_ExplainPokeBalls::
# 543 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Anyhow, your new partner can\n"
	.string "help you find who has been intruding in\l"
	.string "my garden.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} It's your turn to go on a weird\n"
	.string "errand, it seems.\p"
	.string "We can play Crash Royale later when\n"
	.string "you're done!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Don’t encourage {PLAYER} to waste\n"
	.string "away on mobile games. Besides, we all\l"
	.string "know who is the real pro at that game.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} And this is my legacy, three\n"
	.string "little gamers. I’m writing you all out\l"
	.string "of my will.\n$"

AndrewSpeechAfterBattleText::
# 559 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Andrew:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Grandma is being unfair.\n"
	.string "We don’t JUST play mobile games.\l"
	.string "We also play on PC!\n$"

AdrianSpeechAfterBattleText::
# 565 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Why do I get the sneaking\n"
	.string "suspicion there’s more to these errands\l"
	.string "than meets the eye.\n$"

GrandmaDefeatedZoruaText::
# 571 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Grandma:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Here is my little hero!\n"
	.string "Your cousins already left.\p"
	.string "My Torchic and eggs thank you, hon.\n"
	.string "Well you’re no turnip, so you must know\l"
	.string "there is something else going on.\p"
	.string "My old friends and I decided to revive\n"
	.string "the League System!\p"
	.string "It was once abolished after a terrible\n"
	.string "catastrophe. But we need it back pronto.\p"
	.string "RAMTO’s first Gym Leaders in centuries\n"
	.string "have been chosen already.\p"
	.string "{PLAYER}, go out there and challenge\n"
	.string "them! There is so much I need to tell\l"
	.string "you, but it will come in due time.\p"
	.string "Take this with you.\n$"

GrandmaDefeatedZoruaText2::
# 589 "data/maps/Amoreira_Floor1/scripts.pory"
	.string "RAMTO needs you youngsters. Make this\n"
	.string "old lady proud!\n$"
