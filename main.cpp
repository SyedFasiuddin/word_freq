#include "include/Map.h"
#include <fstream>

int optParser(std::string);

int main(int argc, char *argv[]){

    MapFreq newMap;
    
    if(argc == 1){
        std::string inputString = "";
        std::cout << "Enter a string: ";
        getline(std::cin, inputString);
        newMap.setString(inputString);
    } else if (argc == 2)
        newMap.setString(argv[1]);
    else if(argc == 3){

        // std::ifstream ifs(argv[2]);
        // string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));

        if(optParser(argv[1]) == -1){
            std::cout << "Cannot understand argument \"" << argv[1] << "\"\n";
            exit(EXIT_FAILURE);
        }

        std::string fileContent, word;

        std::fstream file; 
        file.open(argv[2]);

        if(!file){
            std::cout << "File does not exist!\n";
            exit(EXIT_FAILURE);
        }

        while(file >> word){
            fileContent += word;
            fileContent += ' ';
        }

        newMap.setString(fileContent);
    } else {
        std::cout << "Too many arguments passed, use the program properly!\n";
        exit(EXIT_FAILURE);
    }

    newMap.createFrequencyMap();
    newMap.displayFrequency();

    return 0;
}

int optParser(std::string opt){
    if(opt.length() > 2) return -1;
    if(opt[0] == '-' && (opt[1] == 'f' || opt[1] == 'F')) return 0;
    return -1;
}
