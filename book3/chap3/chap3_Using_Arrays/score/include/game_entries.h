#ifndef GAME_ENTRIES_H
#define GAME_ENTRIES_H
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class GameEntry{

    public:

        // constructor
        GameEntry(const string& n="", int s = 0);
        
        // Accessors
        string getName() const;
        int getScore() const;

    private:

        string name;
        int score;

};


#endif