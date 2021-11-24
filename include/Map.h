#include <iostream>

#ifndef _MAP_H_
#define _MAP_H_

using namespace std;

class Map{
    private:
        static const int ARR_SIZE = 100;
        string mapArr[ARR_SIZE][2];
        int mapIdx = -1;
        string str;
        string word;

    public:
        void setInput(string inStr);
        void setWord(string inWord);
        void createStrMap();
        void display();
        string getStr();
        string getWord();
};

#endif
