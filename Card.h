#ifndef CARD_H
#define CARD_H

#include <iostream>

using namespace std;

class card{
//the rank and suits are put in the private to be later returned by gets

private:
    int rRank;
    int sSuit;

public:
    static const string cRanks[14];//string array for the rank assigned by 14
    static const char csuits [4];//char array for csuits assigned by 4
    static const string sRanks[14];//string array for the rank assigned by 14
    static const string ssuits [4];//string array for the suit assigned by 4
    enum Rank {Ace=1, Ten=10, Jack, Queen, King}; // enum for the rank putting ace as 1 and jack as 11 and queen 12 and king 13
    enum suit {clubs, diamonds, hearts, spades}; // enum for suit putting the club first then diamond then heart then the spades

    card(int Rank, int suit);//constructor for suit and rank

    card();// empty constructor

string toString(); // string function returns a string i.e JS

//the getter for rank
    getRank();
//getter for suit

    getsuit();

void printI (); // void function for printing

void printC();// void function for printing

};


#endif // CARD_H
