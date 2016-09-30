/*Jill Mercer ~ CPSC 246 ~ Spring Semester 2014
Play a game of Clock Solutaire and return win or lose*/

#ifndef GAME_H
#define GAME_H
#include "Deck.h"

class Game
{
public:
	Game( );												// Makes a default game
	bool startGame();										// Receives an array of decks and flips first cards
									

private:
	static const int NUM_OF_DECKS=13;						// Number of decks in the game
	Deck fullDeck;											// A full deck object that has 52 cards
	bool isWin(Deck deck[]);								// Returns true or false if the game was won
};


#endif


