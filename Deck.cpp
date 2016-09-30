/*Jill Mercer ~ CPSC 246 ~ Spring Semester 2014
Create a deck with 52 cards*/

#include "Card.h"
#include "Deck.h"
#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

Deck::Deck()
{/* Makes an empty deck of cards*/
	numOfCards=0;
}// Default constructor

Card Deck::deal()
{/*Deals a deck of cards by taking a full array of cards 
 it then decrements the number of cards as they are dealt*/
	Card temp; // creates a temporary card so there is only one exit
	if(!isEmpty())
	{	
		temp=arrayOfCards[numOfCards-1];
		numOfCards--;
	}
	else
	{
		cerr<<"Deck is empty"<<endl;
		exit(1);
	}
	return temp;
	
}// Deals a card object

void Deck::receive(Card card)
{/*Receives array of Cards and number of cards and puts the card from deal into small deck*/
		if(!isFull()){
			arrayOfCards[numOfCards]=card;
			numOfCards++;}
		else{
			cerr<<"Deck is full"<<endl;
			exit(2);
		}
}// Receives a card object

bool Deck::isEmpty()
{/*Tests to see if the deck is empty or not*/
	return (numOfCards==0);
}//Tests to see if the deck is empty or not

bool Deck::isFull()
{/*Tests to see if the the deck is full or not*/
	return (numOfCards==MAX_NUM_OF_CARDS);
}//Tests to see if the deck is full or not

void Deck::shuffle()
{/*Takes a deck finds a split point between 1/4 and 3/4 of 52 cards
 combines the two decks and card by card and hads rest of cards on top*/


	Deck a,b;//Temporary decks a and b to shuffle
	int splitPoint=(rand() % 27)+13 ;//Random point halfway through deck then shifted 13

	for(int i=splitPoint; i < MAX_NUM_OF_CARDS; i++)//deals deck a from split point
		a.receive(deal());
	for(int i=0; i<splitPoint; i++)//deals deck b from split point
		b.receive(deal()); 
	for(int i=0; i<MAX_NUM_OF_CARDS;i++)//Combines two decks
	{
		if(!a.isEmpty())
			receive(a.deal());
		if(!b.isEmpty())
			receive(b.deal());
	}
}// Shuffles the objects in arrayOfCards

void Deck::makeDefaultDeck()
{/*Makes a deck of 52 Cards*/
	numOfCards=0; // initialize number of cards to 0
	for(int suit=1; suit<5; suit++)
		for(int face=1; face<14; face++)
		{
			arrayOfCards[numOfCards].setValue(face);
			arrayOfCards[numOfCards].setSuitNum(suit);
			numOfCards++;// adds to nummber of cards
		}
}// Make a deck full of 52 cards

int Deck::getNumOfCards() {return numOfCards;}// returns NumOfCards


