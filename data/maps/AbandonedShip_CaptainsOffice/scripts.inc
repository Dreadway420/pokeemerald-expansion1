AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_CLAMPERL, AbandonedShip_CaptainsOffice_EventScript_Clamperl
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	checkitem ITEM_SCANNER
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AideScannerComment
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_Clamperl::
	msgbox AbandonedShip_CaptainsOffice_Text_ThankYou, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CLAMPERL
	givemon SPECIES_CLAMPERL, 35, ITEM_TM_ICY_WIND
	setflag FLAG_RECEIVED_CLAMPERL
	setflag FLAG_ITEM_ROUTE_108_STAR_PIECE
	setflag FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY
	setflag FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE
	setflag FLAG_ITEM_ROUTE_105_IRON
	setflag FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveClamperlParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveClamperlPC
	goto Common_EventScript_NoMoreRoomForPokemon
	release
	end

SlateportCity_Harbor_EventScript_AideScannerComment::
	checkitem ITEM_SCANNER
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
	release
	end

AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveClamperlParty::
	call Route119_WeatherInstitute_2F_EventScript_ReceivedClamperlFanfare
	goto Route119_WeatherInstitute_2F_EventScript_ExplainClamperl
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveClamperlPC::
	call Route119_WeatherInstitute_2F_EventScript_ReceivedClamperlFanfare
	goto Route119_WeatherInstitute_2F_EventScript_SendClamperlToPC
	end

Route119_WeatherInstitute_2F_EventScript_SendClamperlToPC::
	call Common_EventScript_TransferredToPC
	goto Route119_WeatherInstitute_2F_EventScript_ExplainClamperl
	end

Route119_WeatherInstitute_2F_EventScript_ReceivedClamperlFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedClamperl
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_CLAMPERL
	return

Route119_WeatherInstitute_2F_EventScript_ExplainClamperl::
	msgbox Route119_WeatherInstitute_2F_Text_ClamperlExplain, MSGBOX_DEFAULT
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, SlateportCity_Harbor_EventScript_AideScannerComment
	release
	end

AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
	.string "CAPT. STERN asked me to find a SCANNER,\n"
	.string "but I haven't had any success…$"

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
	.string "Oh! That's a SCANNER!\p"
	.string "Listen, can I get you to deliver that\n"
	.string "to CAPT. STERN?\p"
	.string "I want to investigate this ship a\n"
	.string "little more.$"

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
	.string "This ship is called S.S. CACTUS.\n"
	.string "It seems to be from an earlier era.$"

AbandonedShip_CaptainsOffice_Text_ThankYou:
	.string "I'm investigating this ship on behalf\n"
	.string "of CAPT. STERN.\p"
	.string "Hey, I remember you! You delivered the\n"
	.string "DEVON GOODS and stopped TEAM AQUA.\p"
	.string "CAPT. STERN asked me to give this to you.$"

Route119_WeatherInstitute_2F_Text_PlayerReceivedClamperl:
	.string "{PLAYER} received CLAMPERL!$"

Route119_WeatherInstitute_2F_Text_ClamperlExplain:
	.string "That POKéMON evolves differntly\n"
	.string "depending on two different items.\p"
	.string "If you can find the SCANNER here on the\n"
	.string "ship, I will give you one of those items.$"
