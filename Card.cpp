/*Jill Mercer ~ CPSC 246 ~ Spring Semester 2014
**Create a card class which represents one card in a deck*/


#include "Card.h"
#include <iostream>
#include <string>
using namespace std;

Card::Card()
{//Makes a default card that doesnt exist

	faceValue=14;
	suitNum=0;
}//Default Constructor

Card::Card(int value, int suitNum)
{//Makes a specified card at value and suit

	setValue(value);
	setSuitNum(suitNum);
}//Arguemented Constructor

std::string Card::toString()
{//returns the string of the faceValue and suitNum
	
	string value;//So switch statement only has one way in and out
	string suit;//The switch statement will have one way in and out
	switch (faceValue){
			case 1: value= "Ace of ";		break;
			case 2: value= "Two of ";		break;
			case 3: value= "Three of ";		break;
			case 4: value= "Four of ";		break;
			case 5: value= "Five of ";		break;
			case 6: value=  "Six of ";		break;
			case 7: value= "Seven of ";		break;
			case 8: value= "Eight of ";		break;
			case 9: value= "Nine of ";		break;
			case 10:value= "Ten of ";		break;
			case 11:value= "Jack of ";		break;
			case 12:value= "Queen of ";		break;
			case 13:value= "King of ";		break;
			default: cerr<<"\nError in Card ~ faceValue is: "<<faceValue<<endl;
	}//Switch statement for face value

	switch (suitNum){
			case 1: suit= "Hearts ";		break;
			case 2: suit= "Diamonds ";		break;
			case 3: suit= "Spades ";		break;
			case 4: suit= "Clubs ";			break;
			default: cerr<<"\nError in Card ~ suitNum is: "<<suitNum<<endl;
	}//Switch Statement for suit

return value.append(suit);// returns the combination of the two switch statements
	
}//Output faceValue

int Card::getValue() {return faceValue;}//Gets card face value

int Card::setValue(int value)
{//Makes sure face value fits guidelines and sets face value equal to value

	faceValue=value;

	if(faceValue>13 || faceValue<0)
	{
		cerr<<"Invalid face value, must be 1-13"<<endl;
		exit(0);
	}

	
	return faceValue;
}//sets face value

int Card::getSuitNum() {return suitNum;}//Gets card suit value

int Card::setSuitNum(int numSuit)
{//Makes sure suit number fits guidelines and sets suit equal to suitNum

	suitNum=numSuit;

	if(numSuit<0||numSuit>4)
	{
		cerr<<"Invalid suit range must be 1-4"<<endl;
		exit(3);
	}
	
	
	return suitNum;
}//Sets suit value
