#include "Map.h"

void MapFreq::setString(std::string text){
    str = text;
}

void MapFreq::createFrequencyMap(void){
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            if (M.find(word) == M.end()) {
                M.insert(make_pair(word, 1));
                word = "";
            }
            else {
                M[word]++;
                word = "";
            }
        } else {
/*            if( str[i] != 32 && (str[i] <= 64 || str[i] >= 123 || ((str[i] >= 91) && (str[i] <= 96)))){
                cout << "The string you have entered contains numbers or other symbols\n";
                exit(1);
            } */
            word += str[i];
        }
    }

    if (M.find(word) == M.end())
        M.insert(make_pair(word, 1));
    else
        M[word]++;
}

void MapFreq::displayFrequency(void){
    for (auto& itObj : M) {
        if(itObj.first == "") continue;
        std::cout << std::setw(15) << itObj.first << " - "
             << std::setw(2) << itObj.second
             << "\n";
    }
}
