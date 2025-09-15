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
# 32 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 33 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseFroakie_1:
# 35 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 36 "data/maps/Amoreira_Backyard/scripts.pory"
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
# 19 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseFroakie_6
# 27 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 28 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
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
	goto Amoreira_EventScript_ChooseFroakie_1

Amoreira_EventScript_ChooseFroakie_6:
# 20 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_1
# 22 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 23 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 24 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseFroakie_1


Amoreira_EventScript_ChooseRowlet::
# 41 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 42 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 43 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 44 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_0, MSGBOX_YESNO
# 45 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseRowlet_2
# 69 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 70 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseRowlet_1:
# 72 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 73 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseRowlet_2:
# 46 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_MIRACLE_SEED
# 47 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 48 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseRowlet_5
# 56 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseRowlet_6
# 64 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 65 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_5:
# 49 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 50 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 51 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 52 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 53 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 54 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_6:
# 57 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 59 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 60 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 61 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseRowlet_1


Amoreira_EventScript_ChooseTorchic::
# 78 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 79 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 80 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 81 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_0, MSGBOX_YESNO
# 82 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseTorchic_2
# 106 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 107 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseTorchic_1:
# 109 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 110 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseTorchic_2:
# 83 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_CHARCOAL
# 84 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 85 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseTorchic_5
# 93 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseTorchic_6
# 101 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 102 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_5:
# 86 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 88 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 89 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 90 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 91 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_6:
# 94 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 95 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 96 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 97 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 98 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseTorchic_1


NicknamePartyMon::
# 116 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 117 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 118 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 119 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 120 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 128 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 129 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 130 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 133 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 131 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CheckStarterObtained::
# 137 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set FROAKIE_STARTER_FLAG, CheckStarterObtained_1
# 137 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set ROWLET_STARTER_FLAG, CheckStarterObtained_1
# 137 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set TORCHIC_STARTER_FLAG, CheckStarterObtained_1
	return

CheckStarterObtained_1:
# 138 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox CheckStarterObtained_Text_0
# 139 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 140 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end


Amoreira_EventScript_ChooseFroakie_Text_0:
# 7 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Froakie?$"

Amoreira_EventScript_ChooseFroakie_Text_1:
# 13 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Froakie$"

Amoreira_EventScript_ChooseFroakie_Text_2:
# 28 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "No More Room$"

Amoreira_EventScript_ChooseRowlet_Text_0:
# 44 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Rowlet?$"

Amoreira_EventScript_ChooseRowlet_Text_1:
# 50 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Rowlet$"

Amoreira_EventScript_ChooseTorchic_Text_0:
# 81 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Torchic?$"

Amoreira_EventScript_ChooseTorchic_Text_1:
# 87 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Torchic$"

NicknamePartyMon_Text_0:
# 116 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Give it a nickname?$"

CheckStarterObtained_Text_0:
# 138 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You already have a starter Pokemon$"

Amoreira_NotChosen::
# 145 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You did not choose the Pokemon$"
