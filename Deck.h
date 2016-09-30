/*Jill Mercer ~ CPSC 246 ~ Spring Semester 2014
Create a deck with 52 cards that can shuffle, deal and receive a card*/

#include "Card.h"

#ifndef DECK_H
#define DECK_H

class Deck
{
public: 
	 Deck();										// Default constructor
	 void shuffle();								// Shuffles the objects in arrayOfCards
	 int getNumOfCards();							// Returns NumOfCards
	 Card deal();									// Deals one card 
	 void receive(Card card);						// Receive card from deal
	 bool isEmpty();								// Returns true or false if array is empty or not
	 bool isFull();									// Returns true or false if array is full or not
	 void makeDefaultDeck();						// Makes a deck with 52 Cards
	  
private:
	 static const int MAX_NUM_OF_CARDS=52;			// Creates a constant number of 52 cards
	 int numOfCards;               					// Number of cards in the deck
	 Card arrayOfCards[MAX_NUM_OF_CARDS];			// Array of card objects that represents a deck
};

#endif