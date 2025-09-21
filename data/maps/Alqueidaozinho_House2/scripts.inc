Alqueidaozinho_House2_MapScripts::
	.byte 0


Alqueidaozinho_House2_NpcOldLady::
# 4 "data/maps/Alqueidaozinho_House2/scripts.pory"
	lock
# 5 "data/maps/Alqueidaozinho_House2/scripts.pory"
	faceplayer
# 6 "data/maps/Alqueidaozinho_House2/scripts.pory"
	msgbox Alqueidaozinho_House2_NpcOldLadyText1
# 7 "data/maps/Alqueidaozinho_House2/scripts.pory"
	waitmessage
# 8 "data/maps/Alqueidaozinho_House2/scripts.pory"
	giveitem ITEM_POKE_BALL, 1
# 9 "data/maps/Alqueidaozinho_House2/scripts.pory"
	msgbox Alqueidaozinho_House2_NpcOldLadyText2
# 10 "data/maps/Alqueidaozinho_House2/scripts.pory"
	waitmessage
# 11 "data/maps/Alqueidaozinho_House2/scripts.pory"
	release
	end


Alqueidaozinho_House2_NpcLittleGirl::
# 16 "data/maps/Alqueidaozinho_House2/scripts.pory"
	lock
# 17 "data/maps/Alqueidaozinho_House2/scripts.pory"
	faceplayer
# 18 "data/maps/Alqueidaozinho_House2/scripts.pory"
	msgbox Alqueidaozinho_House2_NpcLittleGirlText
# 19 "data/maps/Alqueidaozinho_House2/scripts.pory"
	waitmessage
# 20 "data/maps/Alqueidaozinho_House2/scripts.pory"
	release
	end


Alqueidaozinho_House2_NpcOldLadyText1::
# 24 "data/maps/Alqueidaozinho_House2/scripts.pory"
	.string "I am friends with your Grandma. We\n"
	.string "once went on an epic journey when\l"
	.string "we were your age!\p"
	.string "Did she never tell you the story?\n"
	.string "Here take this gift.\n$"

Alqueidaozinho_House2_NpcOldLadyText2::
# 32 "data/maps/Alqueidaozinho_House2/scripts.pory"
	.string "You can catch Pokemon with that. Or use\n"
	.string "it as a jewelry box like I do! Ha-ha!\n$"

Alqueidaozinho_House2_NpcLittleGirlText::
# 37 "data/maps/Alqueidaozinho_House2/scripts.pory"
	.string "Granny keeps telling the same stories\n"
	.string "over and over.\p"
	.string "Maybe she got sick in the head.\n$"
