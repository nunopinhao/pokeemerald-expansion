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
# 41 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 42 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseFroakie_1:
# 44 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 45 "data/maps/Amoreira_Backyard/scripts.pory"
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
# 28 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseFroakie_6
# 36 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 37 "data/maps/Amoreira_Backyard/scripts.pory"
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
	setflag VAR_AMOREIRA_CANT_LEAVE
# 19 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 20 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 21 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 22 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 23 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 24 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 25 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 26 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseFroakie_1

Amoreira_EventScript_ChooseFroakie_6:
# 29 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_1
# 31 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 32 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 33 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseFroakie_1


Amoreira_EventScript_ChooseRowlet::
# 50 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 51 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 52 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 53 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_0, MSGBOX_YESNO
# 54 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseRowlet_2
# 87 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 88 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseRowlet_1:
# 90 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 91 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseRowlet_2:
# 55 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_MIRACLE_SEED
# 56 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 57 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseRowlet_5
# 74 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseRowlet_6
# 82 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 83 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_5:
# 58 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 60 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 61 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 62 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 63 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 64 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag VAR_AMOREIRA_CANT_LEAVE
# 65 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 67 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 68 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 69 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 70 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 71 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 72 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_6:
# 75 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 76 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 77 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 78 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 79 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseRowlet_1


Amoreira_EventScript_ChooseTorchic::
# 96 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 97 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 98 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 99 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_0, MSGBOX_YESNO
# 100 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseTorchic_2
# 133 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 134 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseTorchic_1:
# 136 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 137 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseTorchic_2:
# 101 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_CHARCOAL
# 102 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 103 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseTorchic_5
# 120 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseTorchic_6
# 128 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 129 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_5:
# 104 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 105 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 106 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 107 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 108 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 109 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 110 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag VAR_AMOREIRA_CANT_LEAVE
# 111 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 112 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 113 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 114 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 115 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 116 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 117 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 118 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_6:
# 121 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 123 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 124 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 125 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseTorchic_1


NicknamePartyMon::
# 142 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 143 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 144 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 145 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 146 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 151 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 152 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 153 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 156 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 154 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CheckStarterObtained::
# 160 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set FROAKIE_STARTER_FLAG, CheckStarterObtained_1
# 160 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set ROWLET_STARTER_FLAG, CheckStarterObtained_1
# 160 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set TORCHIC_STARTER_FLAG, CheckStarterObtained_1
	return

CheckStarterObtained_1:
# 161 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox CheckStarterObtained_Text_0
# 162 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 163 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end


Amoreira_EventScript_ChooseFroakie_Text_0:
# 7 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Froakie?$"

Amoreira_EventScript_ChooseFroakie_Text_1:
# 13 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Froakie$"

Amoreira_EventScript_ChooseFroakie_Text_2:
# 26 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "The other Pokemon have left.$"

Amoreira_EventScript_ChooseFroakie_Text_3:
# 37 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "No More Room$"

Amoreira_EventScript_ChooseRowlet_Text_0:
# 53 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Rowlet?$"

Amoreira_EventScript_ChooseRowlet_Text_1:
# 59 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Rowlet$"

Amoreira_EventScript_ChooseTorchic_Text_0:
# 99 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Torchic?$"

Amoreira_EventScript_ChooseTorchic_Text_1:
# 105 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Torchic$"

NicknamePartyMon_Text_0:
# 142 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Give it a nickname?$"

CheckStarterObtained_Text_0:
# 161 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You already have a starter Pokemon$"

Amoreira_NotChosen::
# 168 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You did not choose the Pokemon$"
