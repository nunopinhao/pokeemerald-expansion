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
# 49 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 50 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseFroakie_1:
# 52 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 53 "data/maps/Amoreira_Backyard/scripts.pory"
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
# 36 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseFroakie_6
# 44 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 45 "data/maps/Amoreira_Backyard/scripts.pory"
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
	setflag FLAG_GRANDMA_SPEAKER
# 20 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ANDREW_BATTLE
# 21 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ADRIAN_BATTLE
# 22 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_GRANDMA_HEALER
# 23 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_READY_FOR_RIVAL_BATTLE, 1
# 24 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 25 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 26 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_CANT_LEAVE, 1
# 27 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 29 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 30 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 31 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 32 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 33 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseFroakie_1

Amoreira_EventScript_ChooseFroakie_6:
# 37 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_1
# 39 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 40 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 41 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseFroakie_1


Amoreira_EventScript_ChooseRowlet::
# 58 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 59 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 60 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 61 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_0, MSGBOX_YESNO
# 62 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseRowlet_2
# 103 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 104 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseRowlet_1:
# 106 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 107 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseRowlet_2:
# 63 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_MIRACLE_SEED
# 64 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 65 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseRowlet_5
# 90 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseRowlet_6
# 98 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 99 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_5:
# 66 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 68 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 69 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 70 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 71 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ANDREW_SPEAK
# 72 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ADRIAN_SPEAK
# 73 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_GRANDMA_SPEAKER
# 74 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ANDREW_BATTLE
# 75 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ADRIAN_BATTLE
# 76 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_GRANDMA_HEALER
# 77 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_READY_FOR_RIVAL_BATTLE, 1
# 78 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 79 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 80 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_CANT_LEAVE, 1
# 81 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 83 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 84 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 85 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 86 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 87 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 88 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseRowlet_1

Amoreira_EventScript_ChooseRowlet_6:
# 91 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 92 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseRowlet_Text_1
# 93 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 94 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 95 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseRowlet_1


Amoreira_EventScript_ChooseTorchic::
# 112 "data/maps/Amoreira_Backyard/scripts.pory"
	lockall
# 113 "data/maps/Amoreira_Backyard/scripts.pory"
	call CheckStarterObtained
# 114 "data/maps/Amoreira_Backyard/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 115 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_0, MSGBOX_YESNO
# 116 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Amoreira_EventScript_ChooseTorchic_2
# 157 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 158 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_NotChosen
Amoreira_EventScript_ChooseTorchic_1:
# 160 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 161 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end

Amoreira_EventScript_ChooseTorchic_2:
# 117 "data/maps/Amoreira_Backyard/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_CHARCOAL
# 118 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 119 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Amoreira_EventScript_ChooseTorchic_5
# 144 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Amoreira_EventScript_ChooseTorchic_6
# 152 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 153 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_3
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_5:
# 120 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 121 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 122 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 123 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 124 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 125 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ANDREW_SPEAK
# 126 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_ADRIAN_SPEAK
# 127 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FLAG_GRANDMA_SPEAKER
# 128 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ANDREW_BATTLE
# 129 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_ADRIAN_BATTLE
# 130 "data/maps/Amoreira_Backyard/scripts.pory"
	clearflag FLAG_GRANDMA_HEALER
# 131 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_READY_FOR_RIVAL_BATTLE, 1
# 132 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknamePartyMon
# 133 "data/maps/Amoreira_Backyard/scripts.pory"
	callnative UpdateFollowingPokemon
# 134 "data/maps/Amoreira_Backyard/scripts.pory"
	setvar VAR_AMOREIRA_CANT_LEAVE, 1
# 135 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 1
# 137 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag FROAKIE_STARTER_FLAG
# 138 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 2
# 139 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag ROWLET_STARTER_FLAG
# 140 "data/maps/Amoreira_Backyard/scripts.pory"
	delay 20
# 141 "data/maps/Amoreira_Backyard/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 142 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseFroakie_Text_2
	goto Amoreira_EventScript_ChooseTorchic_1

Amoreira_EventScript_ChooseTorchic_6:
# 145 "data/maps/Amoreira_Backyard/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 146 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox Amoreira_EventScript_ChooseTorchic_Text_1
# 147 "data/maps/Amoreira_Backyard/scripts.pory"
	removeobject 3
# 148 "data/maps/Amoreira_Backyard/scripts.pory"
	setflag TORCHIC_STARTER_FLAG
# 149 "data/maps/Amoreira_Backyard/scripts.pory"
	call NicknameBoxMon
	goto Amoreira_EventScript_ChooseTorchic_1


NicknamePartyMon::
# 166 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 167 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 168 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 169 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 170 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 175 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 176 "data/maps/Amoreira_Backyard/scripts.pory"
	hidemonpic
# 177 "data/maps/Amoreira_Backyard/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 180 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 178 "data/maps/Amoreira_Backyard/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


CheckStarterObtained::
# 184 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set FROAKIE_STARTER_FLAG, CheckStarterObtained_1
# 184 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set ROWLET_STARTER_FLAG, CheckStarterObtained_1
# 184 "data/maps/Amoreira_Backyard/scripts.pory"
	goto_if_set TORCHIC_STARTER_FLAG, CheckStarterObtained_1
	return

CheckStarterObtained_1:
# 185 "data/maps/Amoreira_Backyard/scripts.pory"
	msgbox CheckStarterObtained_Text_0
# 186 "data/maps/Amoreira_Backyard/scripts.pory"
	waitmessage
# 187 "data/maps/Amoreira_Backyard/scripts.pory"
	releaseall
	end


Amoreira_EventScript_ChooseFroakie_Text_0:
# 7 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Froakie?$"

Amoreira_EventScript_ChooseFroakie_Text_1:
# 13 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Froakie$"

Amoreira_EventScript_ChooseFroakie_Text_2:
# 34 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "The other Pokemon have left.$"

Amoreira_EventScript_ChooseFroakie_Text_3:
# 45 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "No More Room$"

Amoreira_EventScript_ChooseRowlet_Text_0:
# 61 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Rowlet?$"

Amoreira_EventScript_ChooseRowlet_Text_1:
# 67 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Rowlet$"

Amoreira_EventScript_ChooseTorchic_Text_0:
# 115 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Do you want to choose Torchic?$"

Amoreira_EventScript_ChooseTorchic_Text_1:
# 121 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Recieved Torchic$"

NicknamePartyMon_Text_0:
# 166 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "Give it a nickname?$"

CheckStarterObtained_Text_0:
# 185 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You already have a starter Pokemon$"

Amoreira_NotChosen::
# 192 "data/maps/Amoreira_Backyard/scripts.pory"
	.string "You did not choose the Pokemon$"
