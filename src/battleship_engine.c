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

struct Battle_Board {
    bitboard p1_ships;
    bitboard p2_ships;
    bitboard p1_hits;
    bitboard p2_hits;
};

typedef struct Battle_Board Board;

Board* create_board() {
	Board* board = malloc(sizeof(board));
	board->p1_ships = 0;
	board->p2_ships = 0;
	board->p1_hits = 0;
	board->p2_hits = 0;
	return board;
}

int place_ship(int board_type, short rot, short player, short x, short y) {
	if (players == 1) {


	
