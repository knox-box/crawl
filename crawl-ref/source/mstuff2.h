/*
 *  File:       mstuff2.h
 *  Summary:    Misc monster related functions.
 *  Written by: Linley Henzell
 *
 *  Modified for Crawl Reference by $Author$ on $Date$
 */


#ifndef MSTUFF2_H
#define MSTUFF2_H


#include <string>
#include "externs.h"

struct bolt;

bolt mons_spells(monsters *mons, spell_type spell_cast, int power);
void setup_dragon(monsters *monster, bolt &pbolt);
void mons_cast(monsters *monster, bolt &pbolt, spell_type spell_cast);
void setup_mons_cast(monsters *monster, bolt &pbolt, spell_type spell_cast);
bool mons_throw(monsters *monster, bolt &pbolt, int hand_used);
bool mons_thrown_object_destroyed( item_def *item, const coord_def& where,
                                   bool returning, int midx );
void setup_generic_throw(monsters *monster, bolt &pbolt);
void mons_trap(monsters *monster);
void monster_random_space(const monsters *monster, coord_def& target);
void monster_teleport(monsters *monster, bool instan, bool silent = false);
void spore_goes_pop(monsters *monster);
bool orc_battle_cry(monsters *chief);
bool orange_statue_effects(monsters *mons);
bool silver_statue_effects(monsters *mons);
bool moth_incite_monsters(const monsters *mon);
void mons_clear_trapping_net(monsters *mon);

#endif
