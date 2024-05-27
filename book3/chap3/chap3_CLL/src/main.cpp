#include "clinked_list.cpp"

int main()
{
    CList<string> playList;
    playList.add("Stayin Alive");
    playList.add("Le Freak");
    playList.add("Jive Talkin");
    playList.add("Sam Smith");
    playList.add("Alec Benjamin");
    playList.add("Disco Inferno");

    cout<<playList.front()<<"\n";

    playList.display();
    cout<<"\n";

    playList.advance();
    cout<<playList.front()<<"\n";
    playList.display();
    cout<<"\n";
    


    return EXIT_SUCCESS;
    
}