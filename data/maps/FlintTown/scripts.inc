FlintTown_MapScripts::
	.byte 0


FlintTown_EventScript_GymGuard::
# 4 "data/maps/FlintTown/scripts.pory"
	lock
# 5 "data/maps/FlintTown/scripts.pory"
	faceplayer
# 6 "data/maps/FlintTown/scripts.pory"
	msgbox FlintTown_GymGuardText
# 7 "data/maps/FlintTown/scripts.pory"
	waitmessage
# 8 "data/maps/FlintTown/scripts.pory"
	release
	end


FlintTown_EventScript_Boy::
# 20 "data/maps/FlintTown/scripts.pory"
	lock
# 21 "data/maps/FlintTown/scripts.pory"
	faceplayer
# 22 "data/maps/FlintTown/scripts.pory"
	msgbox FlintTown_BoyText
# 23 "data/maps/FlintTown/scripts.pory"
	waitmessage
# 24 "data/maps/FlintTown/scripts.pory"
	release
	end


FlintTown_EventScript_Boy2::
# 34 "data/maps/FlintTown/scripts.pory"
	lock
# 35 "data/maps/FlintTown/scripts.pory"
	faceplayer
# 36 "data/maps/FlintTown/scripts.pory"
	msgbox FlintTown_Boy2Text
# 37 "data/maps/FlintTown/scripts.pory"
	waitmessage
# 38 "data/maps/FlintTown/scripts.pory"
	release
	end


FlintTown_EventScript_Woman::
# 50 "data/maps/FlintTown/scripts.pory"
	lock
# 51 "data/maps/FlintTown/scripts.pory"
	faceplayer
# 52 "data/maps/FlintTown/scripts.pory"
	msgbox FlintTown_WomanText
# 53 "data/maps/FlintTown/scripts.pory"
	waitmessage
# 54 "data/maps/FlintTown/scripts.pory"
	release
	end


FlintTown_EventScript_Lass::
# 65 "data/maps/FlintTown/scripts.pory"
	lock
# 66 "data/maps/FlintTown/scripts.pory"
	faceplayer
# 67 "data/maps/FlintTown/scripts.pory"
	msgbox FlintTown_LassText
# 68 "data/maps/FlintTown/scripts.pory"
	waitmessage
# 69 "data/maps/FlintTown/scripts.pory"
	release
	end


FlintTown_EventScript_BlackBelt::
# 80 "data/maps/FlintTown/scripts.pory"
	lock
# 81 "data/maps/FlintTown/scripts.pory"
	faceplayer
# 82 "data/maps/FlintTown/scripts.pory"
	msgbox FlintTown_BlackBeltText
# 83 "data/maps/FlintTown/scripts.pory"
	waitmessage
# 84 "data/maps/FlintTown/scripts.pory"
	release
	end


FlintTown_GymGuardText::
# 12 "data/maps/FlintTown/scripts.pory"
	.string "Sorry, the Gym is closed for an auction\n"
	.string "to fund the new League.\p"
	.string "You look too broke to be able to\n"
	.string "participate, anyway.\n$"

FlintTown_BoyText::
# 28 "data/maps/FlintTown/scripts.pory"
	.string "I travelled all the way here and the\n"
	.string "darn Gym is closed for an auction!\n$"

FlintTown_Boy2Text::
# 42 "data/maps/FlintTown/scripts.pory"
	.string "Heatran is a Legendary Pokemon that\n"
	.string "controls fire and lava. People are very\l"
	.string "afraid of it.\p"
	.string "I think it’s just a myth to scare kids.\n$"

FlintTown_WomanText::
# 58 "data/maps/FlintTown/scripts.pory"
	.string "All surrounding villages meet up in\n"
	.string "Flint Town’s Community Centre for events.\p"
	.string "It makes us feel quite important!\n$"

FlintTown_LassText::
# 73 "data/maps/FlintTown/scripts.pory"
	.string "I would love to challenge the Gyms.\n"
	.string "But I gotta convince my folks to let me.\p"
	.string "Oh, what to do…\n$"

FlintTown_BlackBeltText::
# 88 "data/maps/FlintTown/scripts.pory"
	.string "We're taking these supplies to the new\n"
	.string "Gym. Come back later.\n$"
