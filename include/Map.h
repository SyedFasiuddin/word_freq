#ifndef _MAP_H_
#define _MAP_H_

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>

class MapFreq{
    private:
        std::map<std::string, int> M;
        std::string word = "";
        std::string str = "";
    public:
        void setString(std::string text);
        void createFrequencyMap(void);
        void displayFrequency(void);
};

#endif
