#include "include/Map.h"

using std::cin;

int main(int argc, char *argv[]){
    if(argc == 2){
        MapFreq newMap;
        newMap.setString(argv[1]);
        newMap.createFrequencyMap();
        newMap.displayFrequency();
        return 0;
    }

    string inputString = "";
    cout << "Enter a string: ";
    getline(cin, inputString);

    MapFreq newMap;
    newMap.setString(inputString);
    newMap.createFrequencyMap();
    newMap.displayFrequency();

    return 0;
}
