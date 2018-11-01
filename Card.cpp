#include "card.h"

const char card:: csuits[4]={'c','d','h','s'};
const string card :: ssuits[4] ={"clubs", "diamonds", "hearts", "spades"};
const string card :: sRanks[14]={"\0","Ace","Two","three","four","five","six","seven","eight","nine","ten","jack","queen","king"};
const string card:: cRanks[14]={"\0","A","2","3","4","5","6","7","8","9","10","J","Q","K"};


card::card(int Rank, int suit){
        rRank = Rank;
        sSuit = suit;
    }

card::card(){}

string card::toString()
{
    for ( int i = 0; i < 4 ; i++ )
      {
         for ( int j = 1; j < 14; j++ ){
            cout<< cRanks[j]<< csuits[i]<<" ";

}
cout<<endl;
      }
}

//the getter for rank
    card::getRank()
{
    return

    rRank;
}
//getter for suit

    card::getsuit()
{
    return sSuit;
}

void card::printI (){
   for (int i=0; i<=sSuit; i++){
        for (int j=1 ; j <= rRank; j++ ){
                cout<< cRanks[j]<< csuits[i]<<" ";
    }
          cout<<endl;
}
}

void card::printC(){
    cout<<"Ac";
}
