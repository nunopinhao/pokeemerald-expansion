FlintTown_CommunityCenter_MapScripts::
	.byte 0


FlintTown_CommunityCenter_EventScript_StartScene1::
# 4 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 5 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearAuction1
# 6 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmovement 0
# 7 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	call FlintTown_CommunityCenter_EventScript_Speech
# 8 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_EventScript_StartScene2::
# 13 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 14 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearAuction2
# 15 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmovement 0
# 16 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	call FlintTown_CommunityCenter_EventScript_Speech
# 17 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_EventScript_StartScene3::
# 23 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 24 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearAuction3
# 25 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmovement 0
# 26 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	call FlintTown_CommunityCenter_EventScript_Speech
# 27 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_EventScript_StartScene4::
# 31 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 32 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveNearAuction4
# 33 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmovement 0
# 34 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	call FlintTown_CommunityCenter_EventScript_Speech
# 35 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_EventScript_Speech::
# 40 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_SpeechText1
# 41 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 42 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	playbgm MUS_ABANDONED_SHIP, FALSE
# 43 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkLeftSlow
# 44 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_SpeechText2
# 45 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 46 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkRightSlow
# 47 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_SpeechText3
# 48 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 49 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 50 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_SpeechText4
# 51 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 52 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 53 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 54 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmovement 0
# 55 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applyMovement 5, Common_Movement_FaceRight
# 56 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applyMovement 3, Common_Movement_FaceLeft
# 57 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applyMovement 2, Common_Movement_FaceDown
# 58 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applyMovement 12, Common_Movement_FaceDown
# 59 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmovement 0
# 60 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	delay 30
# 61 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applyMovement 5, Common_Movement_FaceUp
# 62 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applyMovement 3, Common_Movement_FaceUp
# 63 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applyMovement 2, Common_Movement_FaceLeft
# 64 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applyMovement 12, Common_Movement_FaceLeft
# 65 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_SpeechText5
# 66 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 67 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 68 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmovement 0
# 69 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_SpeechText6
# 70 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 71 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	fadedefaultbgm
# 73 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	setvar VAR_FLINT_COMMUNITY_CENTER_SCENE, 1
# 74 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	setflag FLAG_FLINT_COMMUNITY_CENTER_SPEECH_OVER
# 75 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 1
# 76 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 2
# 77 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 3
# 78 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 4
# 79 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 6
# 80 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 7
# 81 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 8
# 82 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 10
# 83 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 12
# 84 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	removeobject 13
# 85 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 89 "data/maps/FlintTown_CommunityCenter/scripts.pory"
PlayerMoveNearAuction1:
# 90 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 90 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 90 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 90 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 90 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 90 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 90 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 91 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 91 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 91 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 91 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 91 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/FlintTown_CommunityCenter/scripts.pory"
PlayerMoveNearAuction2:
# 95 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 95 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 95 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 95 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 95 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 95 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 95 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 95 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 96 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 96 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 96 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 96 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 96 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
	step_end

# 99 "data/maps/FlintTown_CommunityCenter/scripts.pory"
PlayerMoveNearAuction3:
# 100 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 100 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 100 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 100 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 100 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 100 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 101 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 101 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 101 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 101 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 101 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 101 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/FlintTown_CommunityCenter/scripts.pory"
PlayerMoveNearAuction4:
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 105 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_left
# 106 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 106 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 106 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 106 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 106 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
# 106 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	walk_up
	step_end

FlintTown_CommunityCenter_EventScript_Boy::
# 156 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 157 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	faceplayer
# 158 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_BoyText
# 159 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 160 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_EventScript_OldMan::
# 172 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 173 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	faceplayer
# 174 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_OldManText
# 175 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 176 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_EventScript_Woman::
# 188 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 189 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	faceplayer
# 190 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_WomanText
# 191 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 192 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_EventScript_Man::
# 202 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 203 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	faceplayer
# 204 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_ManText
# 205 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 206 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_EventScript_Girl::
# 216 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	lock
# 217 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	faceplayer
# 218 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	goto_if_set FLAG_FLINT_COMMUNITY_CENTER_QUICK_CLAW_GIVEN, FlintTown_CommunityCenter_EventScript_Girl_2
# 224 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_GirlText1
# 225 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 226 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 227 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	setflag FLAG_FLINT_COMMUNITY_CENTER_QUICK_CLAW_GIVEN
# 228 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end

FlintTown_CommunityCenter_EventScript_Girl_2:
# 219 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	msgbox FlintTown_CommunityCenter_GirlText2
# 220 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	waitmessage
# 221 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	release
	end


FlintTown_CommunityCenter_SpeechText1::
# 109 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Old Yeller:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Attention, people!\n$"

FlintTown_CommunityCenter_SpeechText2::
# 113 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "As you know, a Gym was built next to the\n"
	.string "Community Centre.\n$"

FlintTown_CommunityCenter_SpeechText3::
# 118 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "It’s true that centuries ago, after the\n"
	.string "first League was established, Heatran\l"
	.string "went berserk and set fire to the region.\n$"

FlintTown_CommunityCenter_SpeechText4::
# 124 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "But there was never proof these events\n"
	.string "were connected. We need the League back\l"
	.string "for protection.\n$"

FlintTown_CommunityCenter_SpeechText5::
# 130 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Random Woman:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Oh dear, this is a\n"
	.string "terrible idea.\p"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Old lady:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} There was a reason the League\n"
	.string "was abolished in the first place!\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Random Man:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} That lava monster almost\n"
	.string "brought the end of RAMTO.\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Crazy Old Man:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} You are mocking the evil\n"
	.string "force that will doom us all!\n$"

FlintTown_CommunityCenter_SpeechText6::
# 140 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Old Yeller:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Good grief, you people are\n"
	.string "too superstitious. Do ya also think salt\l"
	.string "scares Ghost-type Pokemon?\p"
	.string "The new age is here, and we can’t let\n"
	.string "RAMTO fall behind every other region.\p"
	.string "Zamazenta and Zacian will always keep us\n"
	.string "safe. But we also need to learn to\l"
	.string "protect ourselves without their help.\p"
	.string "We will hold an auction now in the new\n"
	.string "Gym to help fund the new League.\p"
	.string "I, and the other chosen Gym Leaders,\n"
	.string "hope to count on your support.\n$"

FlintTown_CommunityCenter_BoyText::
# 164 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "RAMTO is full of backwards geezers.\n"
	.string "All the other regions have Gyms!\l"
	.string "Why should we be the exception?\n$"

FlintTown_CommunityCenter_OldManText::
# 180 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "Heatran grew jealous of the League’s\n"
	.string "reverence for Zacian and Zamazenta\l"
	.string "and engulfed our region in flames.\p"
	.string "This cannot happen again!\n$"

FlintTown_CommunityCenter_WomanText::
# 196 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "Maybe this is a good thing? RAMTO has\n"
	.string "been stuck in the past for too long.\n$"

FlintTown_CommunityCenter_ManText::
# 210 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "No child of mine is participating in\n"
	.string "this Gym Leader challenge nonsense!\n$"

FlintTown_CommunityCenter_GirlText1::
# 232 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "You agree this is good news, right?\p"
	.string "Cool! Take this as a gesture of goodwill\n"
	.string "from me.\n$"

FlintTown_CommunityCenter_GirlText2::
# 238 "data/maps/FlintTown_CommunityCenter/scripts.pory"
	.string "When activated, Quick Claw makes your\n"
	.string "Pokemon go first, but only sometimes.\n$"
