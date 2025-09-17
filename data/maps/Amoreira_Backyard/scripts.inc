Amoreira_Backyard_MapScripts::
	.byte 0


Amoreira_EventScript_ChooseFroakie::
# 4 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 5 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 6 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 7 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_0, MSGBOX_YESNO
# 8 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseFroakie_2
# 47 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 48 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseFroakie_1:
# 50 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 51 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseFroakie_2:
# 9 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_FROAKIE, 5, ITEM_MYSTIC_WATER
# 10 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 11 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseFroakie_5
# 34 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseFroakie_6
# 42 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 43 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseFroakie_1

Amoreira_EventScript_ChooseFroakie_5:
# 12 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 13 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_1
# 14 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 15 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 16 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 17 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ANDREW_SPEAK
# 18 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ADRIAN_SPEAK
# 19 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ANDREW_BATTLE
# 20 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ADRIAN_BATTLE
# 21 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_READY_FOR_RIVAL_BATTLE, 1
# 22 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 23 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 24 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_CANT_LEAVE, 1
# 25 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 27 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 28 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 29 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 30 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 31 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 32 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseFroakie_1

Amoreira_EventScript_ChooseFroakie_6:
# 35 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 36 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_1
# 37 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 38 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 39 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseFroakie_1


Amoreira_EventScript_ChooseRowlet::
# 56 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 57 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 58 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 59 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_0, MSGBOX_YESNO
# 60 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseRowlet_2
# 99 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 100 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseRowlet_1:
# 102 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 103 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseRowlet_2:
# 61 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_MIRACLE_SEED
# 62 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 63 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseRowlet_5
# 86 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseRowlet_6
# 94 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 95 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_5:
# 64 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 66 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 67 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 68 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 69 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ANDREW_SPEAK
# 70 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ADRIAN_SPEAK
# 71 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ANDREW_BATTLE
# 72 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ADRIAN_BATTLE
# 73 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_READY_FOR_RIVAL_BATTLE, 1
# 74 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 75 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 76 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_CANT_LEAVE, 1
# 77 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 79 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 80 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 81 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 82 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 83 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_6:
# 87 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 89 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 90 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 91 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseRowlet_1


Amoreira_EventScript_ChooseTorchic::
# 108 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 109 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 110 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 111 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_0, MSGBOX_YESNO
# 112 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseTorchic_2
# 151 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 152 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseTorchic_1:
# 154 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 155 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseTorchic_2:
# 113 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_CHARCOAL
# 114 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 115 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseTorchic_5
# 138 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseTorchic_6
# 146 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 147 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_5:
# 116 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 118 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 119 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 120 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 121 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ANDREW_SPEAK
# 122 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ADRIAN_SPEAK
# 123 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ANDREW_BATTLE
# 124 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ADRIAN_BATTLE
# 125 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_READY_FOR_RIVAL_BATTLE, 1
# 126 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 127 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 128 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_CANT_LEAVE, 1
# 129 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 130 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 131 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 132 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 133 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 134 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 135 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 136 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_6:
# 139 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 140 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 141 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 142 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 143 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseTorchic_1


NicknamePartyMon::
# 160 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 161 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 162 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 163 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 164 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 169 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 170 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 171 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 174 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 172 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CheckStarterObtained::
# 178 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set FROAKIE_STARTER_FLAG, CheckStarterObtained_1
# 178 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set ROWLET_STARTER_FLAG, CheckStarterObtained_1
# 178 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set TORCHIC_STARTER_FLAG, CheckStarterObtained_1
	return

CheckStarterObtained_1:
# 179 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox CheckStarterObtained_Text_0
# 180 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 181 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end


Amoreira_EventScript_ChooseFroakie_Text_0:
# 7 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Froakie?$"

Amoreira_EventScript_ChooseFroakie_Text_1:
# 13 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Froakie$"

Amoreira_EventScript_ChooseFroakie_Text_2:
# 32 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "The other Pokemon have left.$"

Amoreira_EventScript_ChooseFroakie_Text_3:
# 43 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "No More Room$"

Amoreira_EventScript_ChooseRowlet_Text_0:
# 59 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Rowlet?$"

Amoreira_EventScript_ChooseRowlet_Text_1:
# 65 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Rowlet$"

Amoreira_EventScript_ChooseTorchic_Text_0:
# 111 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Torchic?$"

Amoreira_EventScript_ChooseTorchic_Text_1:
# 117 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Torchic$"

NicknamePartyMon_Text_0:
# 160 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Give it a nickname?$"

CheckStarterObtained_Text_0:
# 179 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You already have a starter Pokemon$"

Amoreira_NotChosen::
# 186 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You did not choose the Pokemon$"
