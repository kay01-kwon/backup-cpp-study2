#ifndef SCORES_H
#define SCORES_H
#include "game_entries.h"

class Scores
{
    public:

        // Constructor
        Scores(int maxEnt = 10);

        void getList();

        // Destructor
        ~Scores();

        void push_back(const GameEntry& e);
        void add(const GameEntry& e);
        // GameEntry remove(int i);


    private:
        int maxEntries;
        int numEntries;
        GameEntry* entries;
};


#endif