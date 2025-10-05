//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .trainerBackPic = TRAINER_BACK_PIC_BRENDAN,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 10
        .trainerName = _("STEVEN"),
#line 11
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 14
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 16
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 15
        .trainerBackPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_MELMETAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 18
            .heldItem = ITEM_ASSAULT_VEST,
#line 21
            .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
#line 23
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 19
            .ability = ABILITY_IRON_FIST,
#line 20
            .lvl = 76,
#line 22
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 23
                MOVE_DOUBLE_IRON_BASH,
            },
            },
            {
#line 25
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 25
            .heldItem = ITEM_STEELIXITE,
#line 29
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 26
            .ability = ABILITY_ROCK_HEAD,
#line 27
            .lvl = 76,
#line 28
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 29
                MOVE_IRON_HEAD,
                MOVE_HEAVY_SLAM,
                MOVE_DRILL_RUN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 34
            .species = SPECIES_GOODRA_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 34
            .heldItem = ITEM_LEFTOVERS,
#line 37
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
#line 39
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 35
            .ability = ABILITY_GOOEY,
#line 36
            .lvl = 76,
#line 38
            .nature = NATURE_SASSY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 40
                MOVE_MUDDY_WATER,
                MOVE_FLASH_CANNON,
                MOVE_SHELTER,
                MOVE_BODY_PRESS,
            },
            },
        },
    },
