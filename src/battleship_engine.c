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

/// create_board - initializes a blank board
///
/// return - returns the pointer to the new board
Board* create_board() {
	Board* board = malloc(sizeof(board));
	board->p1_ships = 0;
	board->p2_ships = 0;
	board->p1_hits = 0;
	board->p2_hits = 0;
	return board;
}

/// place_ship - places the ship
/// arguments
/// board_type: short - how many spaces the battleship takes up
/// rot: short - what rotation | 1-90* | 2-180*
/// player: short - player number
/// x: short - x-coordinate to start placing the ship
/// y: short - y-coordinate to start placing the ship
/// return - returns whether you can place or not
int place_ship(short board_type, short rot, short player, short x, short y) {
        return 1;   
}


int place_ship_validation(short board_type, short rot, 
        short player, short x, short y) {
        return 1;
}

int fire_cannon(short target, short x, short y) {
        return 1;
}
