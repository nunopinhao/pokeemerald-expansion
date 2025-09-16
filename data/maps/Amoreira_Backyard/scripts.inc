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
# 40 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 41 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseFroakie_1:
# 43 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 44 "data/maps/Amoreira_Backyard/scripts.pory"
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
# 27 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseFroakie_6
# 35 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 36 "data/maps/Amoreira_Backyard/scripts.pory"
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
	call NicknamePartyMon
# 17 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 18 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 19 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 20 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 21 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 22 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 23 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 24 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 25 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseFroakie_1

Amoreira_EventScript_ChooseFroakie_6:
# 28 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_1
# 30 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 31 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 32 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseFroakie_1


Amoreira_EventScript_ChooseRowlet::
# 49 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 50 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 51 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 52 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_0, MSGBOX_YESNO
# 53 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseRowlet_2
# 85 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 86 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseRowlet_1:
# 88 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 89 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseRowlet_2:
# 54 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_MIRACLE_SEED
# 55 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseRowlet_5
# 72 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseRowlet_6
# 80 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 81 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_5:
# 57 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 59 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 60 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 61 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 62 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 63 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 65 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 66 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 67 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 68 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 69 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_6:
# 73 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 75 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 76 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 77 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseRowlet_1


Amoreira_EventScript_ChooseTorchic::
# 94 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 95 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 96 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 97 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_0, MSGBOX_YESNO
# 98 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseTorchic_2
# 130 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 131 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseTorchic_1:
# 133 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 134 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseTorchic_2:
# 99 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_CHARCOAL
# 100 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 101 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseTorchic_5
# 117 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseTorchic_6
# 125 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 126 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_5:
# 102 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 103 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 104 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 105 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 106 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 107 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 108 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 110 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 111 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 112 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 113 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 114 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 115 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_6:
# 118 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 120 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 121 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 122 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseTorchic_1


NicknamePartyMon::
# 140 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 141 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 142 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 143 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 144 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 152 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 153 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 154 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 157 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 155 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CheckStarterObtained::
# 161 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set FROAKIE_STARTER_FLAG, CheckStarterObtained_1
# 161 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set ROWLET_STARTER_FLAG, CheckStarterObtained_1
# 161 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set TORCHIC_STARTER_FLAG, CheckStarterObtained_1
	return

CheckStarterObtained_1:
# 162 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox CheckStarterObtained_Text_0
# 163 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 164 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end


Amoreira_EventScript_ChooseFroakie_Text_0:
# 7 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Froakie?$"

Amoreira_EventScript_ChooseFroakie_Text_1:
# 13 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Froakie$"

Amoreira_EventScript_ChooseFroakie_Text_2:
# 25 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "The other Pokemon have left.$"

Amoreira_EventScript_ChooseFroakie_Text_3:
# 36 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "No More Room$"

Amoreira_EventScript_ChooseRowlet_Text_0:
# 52 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Rowlet?$"

Amoreira_EventScript_ChooseRowlet_Text_1:
# 58 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Rowlet$"

Amoreira_EventScript_ChooseTorchic_Text_0:
# 97 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Torchic?$"

Amoreira_EventScript_ChooseTorchic_Text_1:
# 103 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Torchic$"

NicknamePartyMon_Text_0:
# 140 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Give it a nickname?$"

CheckStarterObtained_Text_0:
# 162 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You already have a starter Pokemon$"

Amoreira_NotChosen::
# 169 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You did not choose the Pokemon$"
