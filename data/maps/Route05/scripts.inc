Route05_MapScripts::
# 2 "data/maps/Route05/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route05_OnTransition
	.byte 0


Route05_OnTransition::
# 6 "data/maps/Route05/scripts.pory"
	setflag FLAG_HIDE_ADRIAN_2ND_RIVAL_BATTLE
	end


Route05_EventScript_Adrian_Rival_BattleEnd::
# 10 "data/maps/Route05/scripts.pory"
	msgbox Adrian_Text
# 11 "data/maps/Route05/scripts.pory"
	waitmessage
# 12 "data/maps/Route05/scripts.pory"
	switch VAR_STARTER_MON
# 13 "data/maps/Route05/scripts.pory"
	case 0, Route05_EventScript_Adrian_Rival_BattleEnd_3
# 15 "data/maps/Route05/scripts.pory"
	case 1, Route05_EventScript_Adrian_Rival_BattleEnd_4
# 17 "data/maps/Route05/scripts.pory"
	case 2, Route05_EventScript_Adrian_Rival_BattleEnd_5
Route05_EventScript_Adrian_Rival_BattleEnd_1:
# 20 "data/maps/Route05/scripts.pory"
	msgbox Adrian_Route5_AfterBattle
# 21 "data/maps/Route05/scripts.pory"
	waitmessage
# 22 "data/maps/Route05/scripts.pory"
	setvar VAR_ADRIAN_2ND_RIVAL_BATTLE, 1
# 23 "data/maps/Route05/scripts.pory"
	applymovement 2, Route5_AdrianLeave
# 24 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route05/scripts.pory"
	removeobject 2
# 26 "data/maps/Route05/scripts.pory"
	releaseall
	end

Route05_EventScript_Adrian_Rival_BattleEnd_3:
# 14 "data/maps/Route05/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_ROUTE5_TORCHIC, Adrian_Route5_Outro
	goto Route05_EventScript_Adrian_Rival_BattleEnd_1

Route05_EventScript_Adrian_Rival_BattleEnd_4:
# 16 "data/maps/Route05/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_ROUTE5_FROAKIE, Adrian_Route5_Outro
	goto Route05_EventScript_Adrian_Rival_BattleEnd_1

Route05_EventScript_Adrian_Rival_BattleEnd_5:
# 18 "data/maps/Route05/scripts.pory"
	trainerbattle_no_intro TRAINER_ADRIAN_ROUTE5_ROWLET, Adrian_Route5_Outro
	goto Route05_EventScript_Adrian_Rival_BattleEnd_1


Route05_EventScript_Adrian_Rival_Battle1::
# 45 "data/maps/Route05/scripts.pory"
	lockall
# 46 "data/maps/Route05/scripts.pory"
	addobject 2
# 47 "data/maps/Route05/scripts.pory"
	applymovement 2, Route05_AdrianMove1
# 48 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route05/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 50 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route05/scripts.pory"
	call Route05_EventScript_Adrian_Rival_BattleEnd
	return


Route05_EventScript_Adrian_Rival_Battle2::
# 55 "data/maps/Route05/scripts.pory"
	lockall
# 56 "data/maps/Route05/scripts.pory"
	addobject 2
# 57 "data/maps/Route05/scripts.pory"
	applymovement 2, Route05_AdrianMove2
# 58 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route05/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 60 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route05/scripts.pory"
	call Route05_EventScript_Adrian_Rival_BattleEnd
	return


Route05_EventScript_Adrian_Rival_Battle3::
# 65 "data/maps/Route05/scripts.pory"
	lockall
# 66 "data/maps/Route05/scripts.pory"
	addobject 2
# 67 "data/maps/Route05/scripts.pory"
	applymovement 2, Route05_AdrianMove3
# 68 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route05/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 70 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route05/scripts.pory"
	call Route05_EventScript_Adrian_Rival_BattleEnd
	return


Route05_EventScript_Adrian_Rival_Battle4::
# 76 "data/maps/Route05/scripts.pory"
	lockall
# 77 "data/maps/Route05/scripts.pory"
	addobject 2
# 78 "data/maps/Route05/scripts.pory"
	applymovement 2, Route05_AdrianMove4
# 79 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route05/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 81 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route05/scripts.pory"
	call Route05_EventScript_Adrian_Rival_BattleEnd
	return


Route05_EventScript_Adrian_Rival_Battle5::
# 86 "data/maps/Route05/scripts.pory"
	lockall
# 87 "data/maps/Route05/scripts.pory"
	addobject 2
# 88 "data/maps/Route05/scripts.pory"
	applymovement 2, Route05_AdrianMove5
# 89 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route05/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 91 "data/maps/Route05/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route05/scripts.pory"
	call Route05_EventScript_Adrian_Rival_BattleEnd
	return


# 95 "data/maps/Route05/scripts.pory"
Route5_AdrianLeave:
# 96 "data/maps/Route05/scripts.pory"
	walk_up
# 96 "data/maps/Route05/scripts.pory"
	walk_up
# 96 "data/maps/Route05/scripts.pory"
	walk_up
# 96 "data/maps/Route05/scripts.pory"
	walk_up
# 96 "data/maps/Route05/scripts.pory"
	walk_up
# 96 "data/maps/Route05/scripts.pory"
	walk_up
# 96 "data/maps/Route05/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/Route05/scripts.pory"
Route05_AdrianMove1:
# 100 "data/maps/Route05/scripts.pory"
	walk_up
# 100 "data/maps/Route05/scripts.pory"
	walk_up
# 100 "data/maps/Route05/scripts.pory"
	walk_up
# 100 "data/maps/Route05/scripts.pory"
	walk_up
# 101 "data/maps/Route05/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/Route05/scripts.pory"
Route05_AdrianMove2:
# 104 "data/maps/Route05/scripts.pory"
	walk_up
# 104 "data/maps/Route05/scripts.pory"
	walk_up
# 104 "data/maps/Route05/scripts.pory"
	walk_up
# 104 "data/maps/Route05/scripts.pory"
	walk_up
# 104 "data/maps/Route05/scripts.pory"
	walk_up
# 105 "data/maps/Route05/scripts.pory"
	face_left
	step_end

# 107 "data/maps/Route05/scripts.pory"
Route05_AdrianMove3:
# 108 "data/maps/Route05/scripts.pory"
	walk_up
# 108 "data/maps/Route05/scripts.pory"
	walk_up
# 108 "data/maps/Route05/scripts.pory"
	walk_up
# 108 "data/maps/Route05/scripts.pory"
	walk_up
	step_end

# 110 "data/maps/Route05/scripts.pory"
Route05_AdrianMove4:
# 111 "data/maps/Route05/scripts.pory"
	walk_up
# 111 "data/maps/Route05/scripts.pory"
	walk_up
# 111 "data/maps/Route05/scripts.pory"
	walk_up
# 111 "data/maps/Route05/scripts.pory"
	walk_up
# 111 "data/maps/Route05/scripts.pory"
	walk_up
# 112 "data/maps/Route05/scripts.pory"
	face_right
	step_end

# 114 "data/maps/Route05/scripts.pory"
Route05_AdrianMove5:
# 115 "data/maps/Route05/scripts.pory"
	walk_up
# 115 "data/maps/Route05/scripts.pory"
	walk_up
# 115 "data/maps/Route05/scripts.pory"
	walk_up
# 115 "data/maps/Route05/scripts.pory"
	walk_up
# 116 "data/maps/Route05/scripts.pory"
	walk_right
	step_end

Adrian_Route5_Outro::
# 30 "data/maps/Route05/scripts.pory"
	.string "Impossible!$"

Adrian_Route5_AfterBattle::
# 33 "data/maps/Route05/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}You won, but don’t get all smug.\n"
	.string "I wasn’t the one wetting the bed until\l"
	.string "I was nine.\p"
	.string "Look, Team Blaze might be minor thugs,\n"
	.string "but organized crime is still crime.\p"
	.string "Don’t come crying to me if they steal\n"
	.string "your life savings or worse, your Pokemon.\p"
	.string "I’m off now, get stronger!\n"
	.string "Keep an eye out for Andrew.\n$"

Adrian_Text::
# 119 "data/maps/Route05/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Adrian: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Hey, {PLAYER}!\n"
	.string "We biked all the way to Newvilla’s Gym.\p"
	.string "I lost sight of Andrew, though.\n"
	.string "He’s probably goofing off somewhere,\l"
	.string "the idiot.\p"
	.string "..What? Cousin Leena’s Pokemon got stolen\n"
	.string "by Team Blaze?\p"
	.string "I heard of them. They claim to be a\n"
	.string "non-profit religious organization.\p"
	.string "Hard quotations on the non-profit thing.\n"
	.string "They’re scammers making an “honest”\l"
	.string "living, they might say.\p"
	.string "Bet they have that written on their\n"
	.string "business cards.\p"
	.string "Are you going after them? I’ll test you\n"
	.string "before you try to play hero!\n$"
