//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender = 
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_MELMETAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 15
            .heldItem = ITEM_ASSAULT_VEST,
#line 18
            .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
#line 20
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 16
            .ability = ABILITY_IRON_FIST,
#line 17
            .lvl = 76,
#line 19
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 20
                MOVE_DOUBLE_IRON_BASH,
            },
            },
            {
#line 22
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 22
            .heldItem = ITEM_STEELIXITE,
#line 26
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 23
            .ability = ABILITY_ROCK_HEAD,
#line 24
            .lvl = 76,
#line 25
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 26
                MOVE_IRON_HEAD,
                MOVE_HEAVY_SLAM,
                MOVE_DRILL_RUN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 31
            .species = SPECIES_GOODRA_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 31
            .heldItem = ITEM_LEFTOVERS,
#line 34
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
#line 36
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 32
            .ability = ABILITY_GOOEY,
#line 33
            .lvl = 76,
#line 35
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 37
                MOVE_MUDDY_WATER,
                MOVE_FLASH_CANNON,
                MOVE_SHELTER,
                MOVE_BODY_PRESS,
            },
            },
        },
    },
