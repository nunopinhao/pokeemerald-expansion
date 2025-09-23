# 1 "data/maps/Alqueidaozinho_Mart/scripts.pory"

# 2 "data/maps/Alqueidaozinho_Mart/scripts.pory"
Alqueidaozinho_Mart_MapScripts::
# 3 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/Alqueidaozinho_Mart/scripts.pory"

# 5 "data/maps/Alqueidaozinho_Mart/scripts.pory"
Alqueidaozinho_Mart_EventScript_Clerk::
# 6 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	lock
# 7 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	pokemart Alqueidaozinho_Mart_Pokemart_Basic
# 11 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	release
# 13 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	end
# 14 "data/maps/Alqueidaozinho_Mart/scripts.pory"

# 15 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.align 2
# 16 "data/maps/Alqueidaozinho_Mart/scripts.pory"
Alqueidaozinho_Mart_Pokemart_Basic:
# 17 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 23 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 24 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 25 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 26 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 27 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 28 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	pokemartlistend

Alqueidaozinho_Mart_EventScript_Boy::
# 32 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	lock
# 33 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	faceplayer
# 34 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	msgbox Alqueidaozinho_Mart_Text_Boy
# 35 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	waitmessage
# 36 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	release
	end


Alqueidaozinho_Mart_EventScript_Woman::
# 41 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	lock
# 42 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	faceplayer
# 43 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	msgbox Alqueidaozinho_Mart_Text_Woman
# 44 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	waitmessage
# 45 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	release
	end


Alqueidaozinho_Mart_Text_Boy::
# 49 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.string "You better stock up on Antidotes and\n"
	.string "Repels. Wild Pokémon can get really\l"
	.string "annoying when you travel long distances.\n$"

Alqueidaozinho_Mart_Text_Woman::
# 55 "data/maps/Alqueidaozinho_Mart/scripts.pory"
	.string "My son started his journey. I’ll send\n"
	.string "him some treats to help him along!\n$"
