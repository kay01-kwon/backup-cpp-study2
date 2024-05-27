#include "scores.h"

Scores::Scores(int maxEnt)
{
    maxEntries = maxEnt;
    entries = new GameEntry[maxEntries];
    numEntries = 0;
}

Scores::~Scores()
{
    delete[] entries;
}

void Scores::push_back(const GameEntry& e)
{
    if(numEntries == maxEntries)
        return;

    entries[numEntries] = e;
    numEntries++;
}

void Scores::getList()
{
    for(int i = 0 ; i < maxEntries; i++)
    {
        cout<<"Name: "<<entries[i].getName();
        cout<<"\t";
        cout<<"Score: "<<entries[i].getScore();
        cout<<"\n";
    }
    cout<<"\n";
}

void Scores::add(const GameEntry& e)
{
    int newScore = e.getScore();
    
    if(numEntries == maxEntries)
    {
        if(newScore <= entries[maxEntries-1].getScore())
            return;
    }
    else numEntries++; 

    int i = numEntries - 1;
    while (i >=0 && newScore > entries[i].getScore())
    {
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
    
}