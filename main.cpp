#include <iostream>
#include <cstring>
#include "include/Map.h"

using namespace std;

int main(){
    Map map; 
    
    string inputStr;
    string findWord;
    
    cout << "Enter a string: ";
    getline(cin, inputStr);

    map.setInput(inputStr);

    cout << "Enter a word to find: ";
    cin >> findWord;

    map.setWord(findWord);

    map.createStrMap();

    map.display();

   /*  for(int i = 0; i < str.length() - 1; i++){ */
        /* cout << str.find(word, i) << endl; */
    /* } */

    return 0;
}
