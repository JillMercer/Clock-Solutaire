/*Jill Mercer ~ CPSC 246 ~ Spring Semester 2014
**Header file for Card class which makes one card from a deck of cards*/

#include <iostream>
#include <string>

#ifndef CARD_H
#define CARD_H

class Card
{
public:
	Card();													// Default constructor 
	Card(int value,int numSuit);							// Sets card to specific values
	std::string toString();									// String value the card value 
	int getValue();										    // Get value of card
	int setValue(int value);								// Set value from 1-13
	int getSuitNum();										// Get suit number
	int setSuitNum(int numSuit);						    // Set suit number from 1-4

private:
	int faceValue;											// must be between 1-13
	int suitNum;											// must be between 1-4
};
#endif 