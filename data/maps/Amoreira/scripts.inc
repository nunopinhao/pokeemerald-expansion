Amoreira_MapScripts::
	.byte 0


Amoreira_EventScript_MrFallsmellSpeech::
# 4 "data/maps/Amoreira/scripts.pory"
	lock
# 5 "data/maps/Amoreira/scripts.pory"
	faceplayer
# 6 "data/maps/Amoreira/scripts.pory"
	msgbox MrFallsmellSpeechText
# 7 "data/maps/Amoreira/scripts.pory"
	waitmessage
# 8 "data/maps/Amoreira/scripts.pory"
	release
	end


Amoreira_EventScript_FlowerLadySpeech::
# 13 "data/maps/Amoreira/scripts.pory"
	lock
# 14 "data/maps/Amoreira/scripts.pory"
	faceplayer
# 15 "data/maps/Amoreira/scripts.pory"
	msgbox Amoreira_FlowerLady_SpeechText
# 16 "data/maps/Amoreira/scripts.pory"
	waitmessage
# 17 "data/maps/Amoreira/scripts.pory"
	release
	end


Amoreira_EventScript_Sign::
# 22 "data/maps/Amoreira/scripts.pory"
	lock
# 23 "data/maps/Amoreira/scripts.pory"
	faceplayer
# 24 "data/maps/Amoreira/scripts.pory"
	msgbox Amoreira_SignText
# 25 "data/maps/Amoreira/scripts.pory"
	waitmessage
# 26 "data/maps/Amoreira/scripts.pory"
	release
	end


MrFallsmellSpeechText::
# 30 "data/maps/Amoreira/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mr. Fallsmell:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Let's drink a fine?\n$"

Amoreira_FlowerLady_SpeechText::
# 34 "data/maps/Amoreira/scripts.pory"
	.string "Wild Pokémon attack our crops sometimes.\n"
	.string "I think I saw one fleeing your Granny’s\l"
	.string "garden.\n$"

Amoreira_SignText::
# 40 "data/maps/Amoreira/scripts.pory"
	.string "Community Garden.\n$"
