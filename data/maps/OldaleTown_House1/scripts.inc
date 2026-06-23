OldaleTown_House1_MapScripts:: @ 8152EEB
	.byte 0

OldaleTown_House1_EventScript_Woman:: @ 8152EEC
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
	end

OldaleTown_House1_EventScript_Zigzagoon:: @ 8152EED
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, 0
	msgbox OldaleTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end
