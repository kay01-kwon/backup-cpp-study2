#include "game_entries.h"
#include "scores.h"

int main()
{
    GameEntry Entry1{"Mike",1150};
    GameEntry Entry2{"Jack",510};
    GameEntry Entry3{"Paul",720};
    GameEntry Entry4{"Rob",750};
    GameEntry Entry5{"Rose",660};
    GameEntry Entry6{"Kay",710};

    Scores scores;

    scores.add(Entry1);
    scores.add(Entry2);
    scores.add(Entry3);
    scores.add(Entry4);
    scores.add(Entry5);
    scores.add(Entry6);

    scores.getList();
    

    return EXIT_SUCCESS;    
}