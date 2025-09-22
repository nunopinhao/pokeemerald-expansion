Alqueidaozinho_House2_MapScripts::
	.byte 0


Alqueidaozinho_House2_NpcOldLady::
# 4 "data/maps/Alqueidaozinho_House2/scripts.pory"
	lock
# 5 "data/maps/Alqueidaozinho_House2/scripts.pory"
	faceplayer
# 6 "data/maps/Alqueidaozinho_House2/scripts.pory"
	goto_if_set FLAG_ALQUEIDAOZINHO_HOUSE2_POKEBALL, Alqueidaozinho_House2_NpcOldLady_2
# 10 "data/maps/Alqueidaozinho_House2/scripts.pory"
	msgbox Alqueidaozinho_House2_NpcOldLadyText1
# 11 "data/maps/Alqueidaozinho_House2/scripts.pory"
	waitmessage
# 12 "data/maps/Alqueidaozinho_House2/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 13 "data/maps/Alqueidaozinho_House2/scripts.pory"
	setflag FLAG_ALQUEIDAOZINHO_HOUSE2_POKEBALL
# 14 "data/maps/Alqueidaozinho_House2/scripts.pory"
	msgbox Alqueidaozinho_House2_NpcOldLadyText2
Alqueidaozinho_House2_NpcOldLady_1:
# 16 "data/maps/Alqueidaozinho_House2/scripts.pory"
	waitmessage
# 17 "data/maps/Alqueidaozinho_House2/scripts.pory"
	release
	end

Alqueidaozinho_House2_NpcOldLady_2:
# 7 "data/maps/Alqueidaozinho_House2/scripts.pory"
	msgbox Alqueidaozinho_House2_NpcOldLadyText2
	goto Alqueidaozinho_House2_NpcOldLady_1


Alqueidaozinho_House2_NpcLittleGirl::
# 22 "data/maps/Alqueidaozinho_House2/scripts.pory"
	lock
# 23 "data/maps/Alqueidaozinho_House2/scripts.pory"
	faceplayer
# 24 "data/maps/Alqueidaozinho_House2/scripts.pory"
	msgbox Alqueidaozinho_House2_NpcLittleGirlText
# 25 "data/maps/Alqueidaozinho_House2/scripts.pory"
	waitmessage
# 26 "data/maps/Alqueidaozinho_House2/scripts.pory"
	release
	end


Alqueidaozinho_House2_NpcOldLadyText1::
# 30 "data/maps/Alqueidaozinho_House2/scripts.pory"
	.string "I am friends with your Grandma. We\n"
	.string "once went on an epic journey when\l"
	.string "we were your age!\p"
	.string "Did she never tell you the story?\n"
	.string "Here take this gift.\n$"

Alqueidaozinho_House2_NpcOldLadyText2::
# 38 "data/maps/Alqueidaozinho_House2/scripts.pory"
	.string "You can catch Pokemon with that. Or use\n"
	.string "it as a jewelry box like I do! Ha-ha!\n$"

Alqueidaozinho_House2_NpcLittleGirlText::
# 43 "data/maps/Alqueidaozinho_House2/scripts.pory"
	.string "Granny keeps telling the same stories\n"
	.string "over and over.\p"
	.string "Maybe she got sick in the head.\n$"
