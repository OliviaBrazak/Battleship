///
/// FILE : battle_engine.c
/// DESCRIPTION : battleship mechanics
/// AUTHOR: OLIVIA BRAZAK
/// CONTRIBUTOR: JUSTIN SOSTRE
///

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

typedef int64_t bitboard;

struct battle_board {
    bitboard p1_ships;
    bitboard p2_ships;
    bitboard p1_hits;
    bitboard p2_hits;
};

typedef struct battle_board board;
