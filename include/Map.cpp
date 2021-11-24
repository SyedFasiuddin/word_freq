#include <iostream>
#include "Map.h"

void Map::setInput(string inStr){
    str = inStr;
}

void Map::setWord(string inWord){
    word = inWord;
}

void Map::createStrMap(){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            for(int j = 0; j < ARR_SIZE; j++){
                if(word == mapArr[j][0]){
                    mapArr[j][1] = to_string(
                                stoi(mapArr[j][1]) + 1
                            );
                    word = "";
                    break;
                } else {
                    mapIdx++;
                    mapArr[mapIdx][0] = word;
                    mapArr[mapIdx][1] = to_string(1);
                    word = "";
                    break;
                }
            }
        } else {
            word += str[i];
        }
    }
}

void Map::display(){
    for(int i = 0; i <= mapIdx; i++){
        cout << mapArr[i][0] << ": " << mapArr[i][1] << endl;
    }
}

string Map::getStr(){
    return str;
}

string Map::getWord(){
    return word;
}

