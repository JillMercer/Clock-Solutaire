/*Jill Mercer ~ CPSC 246 ~ Spring Semester 2014
Play a game of Clock Solutaire and return win or lose*/


#include "Deck.h"
#include "Card.h"
#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

Game::Game ()
{/*Creates a game with a full deck of 52 cards*/
	fullDeck.makeDefaultDeck();
}

bool Game::startGame()
{/* Receives a deck, deals out the cards into 13 decks,
then plays the game of clock solutaire*/
	//Var dictionary 
	Deck deck[13];  //13 small decks with 4 cards
	int flipPos=12; //First cards flip position
	bool lost=false;//initializes lost to false
	for( int i = 0; i < 100; i++)	
	fullDeck.shuffle();//Shuffle the deck of Cards
	
	for(int i=0; i<4; i++)	{	//Deals the full deck into the 13 small decks {
		for(int j=0; j<NUM_OF_DECKS; j++)
		{
			deck[j].receive(fullDeck.deal());
		}
	}	
	while(!lost && !isWin(deck)) // Plays a game until the user has lost or won 
	{
		Card temp;
		lost=true;
		if(deck[flipPos].isEmpty()) {
			lost=false;//if the array of flipPos is empty game is lost
		}
		else {
			temp = deck[flipPos].deal();// else continue to play the game
			flipPos = temp.getValue()-1;
			fullDeck.receive(temp);//Returns dealt card back to deck of 52 cards
		}
		
	}
	for(int i=0; i<13; i++)//Reforms deck after each game
			while(!deck[i].isEmpty())
			{
				fullDeck.receive(deck[i].deal());
			}
	

	return !lost;	//returns the result of the game
}


bool Game::isWin(Deck deck[])
{/*Receives the array of decks
 Returns whether or not the game has been won or not*/

	int i=0;//Initialize i to zero
	while(deck[i].isEmpty() && i<NUM_OF_DECKS)//Checks to see if all decks are empty
	{
		i++;
	}
	return deck[i].isEmpty();//returns true or false depending on whether all decks are empty or if they still have cards
}