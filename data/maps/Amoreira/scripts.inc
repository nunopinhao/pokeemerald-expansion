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


MrFallsmellSpeechText::
# 13 "data/maps/Amoreira/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}Mr. Fallsmell:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Let's drink a fine?\n$"
