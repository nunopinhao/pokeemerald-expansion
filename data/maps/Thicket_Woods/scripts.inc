Thicket_Woods_MapScripts::
	.byte 0


ThicketWoods_EventScript_TulipaBattle::
# 4 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_TULIPA, ThicketWoods_Tulipa_Intro, ThicketWoods_Tulipa_Outro
# 5 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Tulipa_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_AntonioBattle::
# 24 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_ANTONIO, ThicketWoods_Antonio_Intro, ThicketWoods_Antonio_Outro
# 25 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Antonio_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_AlbertoBattle::
# 42 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, ThicketWoods_Alberto_Intro, ThicketWoods_Alberto_Outro
# 43 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Alberto_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_JessicaBattle::
# 63 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_JESSICA, ThicketWoods_Jessica_Intro, ThicketWoods_Jessica_Outro
# 64 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Jessica_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_MauroBattle::
# 83 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_MAURO, ThicketWoods_Mauro_Intro, ThicketWoods_Mauro_Outro
# 84 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Mauro_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_RoBattle::
# 103 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_RO, ThicketWoods_Ro_Intro, ThicketWoods_Ro_Outro
# 104 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Ro_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_EventScript_MildaBattle::
# 122 "data/maps/Thicket_Woods/scripts.pory"
	trainerbattle_single TRAINER_MILDA, ThicketWoods_Milda_Intro, ThicketWoods_Milda_Outro
# 123 "data/maps/Thicket_Woods/scripts.pory"
	msgbox ThicketWoods_Milda_PostBattle, MSGBOX_AUTOCLOSE
	end


ThicketWoods_Tulipa_Intro::
# 9 "data/maps/Thicket_Woods/scripts.pory"
	.string "I dated a guy who said he liked\n"
	.string "Grass-types, like me.\p"
	.string "Turns out he meant smoking Oddish leaves.\n"
	.string "Why do I always fall for losers?\n$"

ThicketWoods_Tulipa_Outro::
# 15 "data/maps/Thicket_Woods/scripts.pory"
	.string "You smell like a try-hard.\n$"

ThicketWoods_Tulipa_PostBattle::
# 18 "data/maps/Thicket_Woods/scripts.pory"
	.string "Grass-type Pokemon smell the nicest!\n"
	.string "I like Fairy-types too.\n$"

ThicketWoods_Antonio_Intro::
# 29 "data/maps/Thicket_Woods/scripts.pory"
	.string "My brother and I are rivals!\n"
	.string "Bugs vs Birds, the ultimate debate!\n$"

ThicketWoods_Antonio_Outro::
# 33 "data/maps/Thicket_Woods/scripts.pory"
	.string " Bug types still rule!\n$"

ThicketWoods_Antonio_PostBattle::
# 36 "data/maps/Thicket_Woods/scripts.pory"
	.string "I must train to surpass my brother.\n"
	.string "Bug types are SUPREME!\n$"

ThicketWoods_Alberto_Intro::
# 47 "data/maps/Thicket_Woods/scripts.pory"
	.string "My brother insists we’re rivals,\n"
	.string "but I’m playing along because the dude\l"
	.string "has no friends.\n$"

ThicketWoods_Alberto_Outro::
# 52 "data/maps/Thicket_Woods/scripts.pory"
	.string "I’m having a good time. NOT!\n$"

ThicketWoods_Alberto_PostBattle::
# 55 "data/maps/Thicket_Woods/scripts.pory"
	.string "I asked my mom if I could go on a\n"
	.string "journey, and she said:\p"
	.string "{FONT_SHORT_NARROW}yeah sure but take your brother with you.\n"
	.string "Sigh…\n$"

ThicketWoods_Jessica_Intro::
# 68 "data/maps/Thicket_Woods/scripts.pory"
	.string "This forest is shaped like that cat\n"
	.string "Pokemon! I don’t know the name.\l"
	.string "It’s the green one, I think?\n$"

ThicketWoods_Jessica_Outro::
# 73 "data/maps/Thicket_Woods/scripts.pory"
	.string "I just wanted to share a fact,\n"
	.string "not fight!\n$"

ThicketWoods_Jessica_PostBattle::
# 77 "data/maps/Thicket_Woods/scripts.pory"
	.string "You like picking on girls? I was just\n"
	.string "being nice and making conversation!\n$"

ThicketWoods_Mauro_Intro::
# 88 "data/maps/Thicket_Woods/scripts.pory"
	.string "I hear voices! No, I’m not schizophrenic\n"
	.string "I mean ACTUAL real voices.\p"
	.string "Are there people hiding somewhere in the\n"
	.string "forest?\n$"

ThicketWoods_Mauro_Outro::
# 94 "data/maps/Thicket_Woods/scripts.pory"
	.string "At least you don’t seem suspicious.\n$"

ThicketWoods_Mauro_PostBattle::
# 97 "data/maps/Thicket_Woods/scripts.pory"
	.string "Are these woods haunted like\n"
	.string "Almond Forest is?\n$"

ThicketWoods_Ro_Intro::
# 108 "data/maps/Thicket_Woods/scripts.pory"
	.string "We are the Psychic sisters!\n"
	.string "Want a tarot reading?\n$"

ThicketWoods_Ro_Outro::
# 112 "data/maps/Thicket_Woods/scripts.pory"
	.string "We predicted this loss.\n$"

ThicketWoods_Ro_PostBattle::
# 115 "data/maps/Thicket_Woods/scripts.pory"
	.string "Want another reading? The Fool will meet\n"
	.string "the Devil, and throughJudgement reveal\l"
	.string "its true light to the World.\n$"

ThicketWoods_Milda_Intro::
# 127 "data/maps/Thicket_Woods/scripts.pory"
	.string "The Fool Arcana card is revealed. A hero\n"
	.string "has a long mission ahead of them!\n$"

ThicketWoods_Milda_Outro::
# 131 "data/maps/Thicket_Woods/scripts.pory"
	.string "But it still tastes bitter.\n$"

ThicketWoods_Milda_PostBattle::
# 134 "data/maps/Thicket_Woods/scripts.pory"
	.string "We predict the exit of this forest is\n"
	.string "nearby. You may only exit if the two\l"
	.string "evildoers were brought to justice.\n$"
