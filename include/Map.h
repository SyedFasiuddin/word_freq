#ifndef _MAP_H_
#define _MAP_H_

#include <iostream>
#include <map>
#include <algorithm>

using std::string;
using std::map;
using std::cout;
using std::endl;

class MapFreq{
    private:
        map<string, int> M;
        string word = "";
        string str = "";
    public:
        void setString(string text);
        void createFrequencyMap(void);
        void displayFrequency(void);
};

#endif
