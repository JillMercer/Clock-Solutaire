/****Jill Mercer ~ CPSC 246 ~ Section 2 ~ Spring Semester 2014
Create a program that will play the game clock solutaire 1000
times and report the percentage of wins to the user***********/


//Libraries 
#include <iostream>
#include "Card.h"
#include "Game.h"
#include "Deck.h"
#include <ctime>
using namespace std;

//Function prototypes
void printHeader();//Prints the header 

//Global Variables
const int MAX_NUM_OF_CARDS=52;//Number of cards in deck

int main()
{
	
// **********Variable dictionary********
	Game playGame;			//Game object to play the game
	Deck deck;
	int numOfGames=1000;	//How many games will be played
	int numOfWinnings=0;	//A counter to track number of games won
	double percentage;		//Total percentage of wins

//1.0 Print header
	printHeader(); //Prints the header
	srand(time(0));//Must be called outside of classes and function to seed a time at 0
	
//2.0 Play Game 1000 times
	for(int i=0; i<numOfGames; i++)//Runs the game numOfGame times
		{	
			if(playGame.startGame()==true)//If game is won winnings will increment
				
				numOfWinnings++; //for some reason the game always looses
		}

//3.0 Output results of game play
	percentage=numOfWinnings/numOfGames*100;//Calculates winning percentage
	cout <<"The percentage of winning is: " << percentage <<" \n"<< endl; 
	

//4.0  Program terminated normally
	cout<<"<<Normal Termination>>"<<endl;

return 0;
}

void printHeader()
{/*Outsputs the header for the program*/
	cout<<"\nJill Mercer ~ CpSc246 Adv Programming ~ Spring 2014\n";
	cout<<"Run the game Clock Solutaire 1000 times a print winning percentage\n\n";
}//Output header