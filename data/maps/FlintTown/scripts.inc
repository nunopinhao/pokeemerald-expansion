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
