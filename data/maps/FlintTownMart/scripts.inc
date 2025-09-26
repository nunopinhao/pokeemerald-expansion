# 1 "data/maps/FlintTownMart/scripts.pory"

# 2 "data/maps/FlintTownMart/scripts.pory"
FlintTownMart_MapScripts::
# 3 "data/maps/FlintTownMart/scripts.pory"
	.byte 0
# 4 "data/maps/FlintTownMart/scripts.pory"

# 5 "data/maps/FlintTownMart/scripts.pory"
FlintTown_Mart_EventScript_Clerk::
# 6 "data/maps/FlintTownMart/scripts.pory"
	lock
# 7 "data/maps/FlintTownMart/scripts.pory"
	faceplayer
# 8 "data/maps/FlintTownMart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FlintTownMart/scripts.pory"
	waitmessage
# 10 "data/maps/FlintTownMart/scripts.pory"
	pokemart Alqueidaozinho_Mart_Pokemart_Basic
# 11 "data/maps/FlintTownMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FlintTownMart/scripts.pory"
	release
# 13 "data/maps/FlintTownMart/scripts.pory"
	end
# 14 "data/maps/FlintTownMart/scripts.pory"

# 15 "data/maps/FlintTownMart/scripts.pory"
	.align 2
# 16 "data/maps/FlintTownMart/scripts.pory"
FlintTown_Mart_Pokemart_Basic:
# 17 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 23 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_REPEL
# 24 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_X_SPEED
# 25 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 26 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 27 "data/maps/FlintTownMart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 28 "data/maps/FlintTownMart/scripts.pory"
	pokemartlistend

FlintTown_Mart_EventScript_Boy::
# 32 "data/maps/FlintTownMart/scripts.pory"
	lock
# 33 "data/maps/FlintTownMart/scripts.pory"
	faceplayer
# 34 "data/maps/FlintTownMart/scripts.pory"
	msgbox FlintTown_Mart_Text_Boy
# 35 "data/maps/FlintTownMart/scripts.pory"
	waitmessage
# 36 "data/maps/FlintTownMart/scripts.pory"
	release
	end


FlintTown_Mart_EventScript_Woman::
# 41 "data/maps/FlintTownMart/scripts.pory"
	lock
# 42 "data/maps/FlintTownMart/scripts.pory"
	faceplayer
# 43 "data/maps/FlintTownMart/scripts.pory"
	msgbox FlintTown_Mart_Text_Woman
# 44 "data/maps/FlintTownMart/scripts.pory"
	waitmessage
# 45 "data/maps/FlintTownMart/scripts.pory"
	release
	end


FlintTown_Mart_Text_Boy::
# 49 "data/maps/FlintTownMart/scripts.pory"
	.string "I spent all my allowance on Poke Balls.\n"
	.string "My mom is gonna kill me!\n$"

FlintTown_Mart_Text_Woman::
# 54 "data/maps/FlintTownMart/scripts.pory"
	.string "The more badges you win, the more items\n"
	.string "become available.\n$"
