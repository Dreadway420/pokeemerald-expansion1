MauvilleCity_House1_MapScripts::
	.byte 0

MauvilleCity_House1_EventScript_RockSmashDude::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_BRICK_BREAK
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_EventScript_ReceivedRockSmash::
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
	.string "Woohoo!\p"
	.string "I hear people call me the BRICK BREAK\n"
	.string "GUY, but I find that sort of degrading.\p"
	.string "I think I deserve a bit more respect,\n"
	.string "like maybe the BRICK BREAK DUDE.\p"
	.string "Woohoo!\p"
	.string "Anyways, your POKéMON look pretty\n"
	.string "strong.\p"
	.string "I like that!\n"
	.string "Here, take this TEACHABLE MACHINE!$"

MauvilleCity_House1_Text_ExplainRockSmash:
	.string "That TM contains BRICK BREAK.\p"
	.string "If you come POKéMON using\n"
	.string "REFLECT or LIGHT SCREEN…\p"
	.string "Well, use that TM and break\n"
	.string "them right out of your way!\p"
	.string "Yes, sir! Smash screens aside, I say!\n"
	.string "Woohoo!$"

MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
	.string "Oh, yes, I heard that WALLYS DAD\n"
	.string "has the HM for ROCK SMASH.\p"
	.string "Woohoo!$"

