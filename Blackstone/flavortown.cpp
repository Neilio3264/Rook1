#include "flavortown.h"

flavorTown::flavorTown()
{

}

void flavorTown::addSweet(std::string c){
    sweetType.push_back(c);
}

void flavorTown::addFlavor(std::string c){
    flavorType.push_back(c);
}

void flavorTown::removeSweet(std::string c){
    if (findWord(sweetType, c)){
        int num = findIndex(sweetType, c);
        for (int i = num; i < sweetType.size() - 1; i++){
            sweetType.at(i) = sweetType.at(i+1);
        }sweetType.pop_back();
    }
}

void flavorTown::removeFlavor(std::string c){
    if (findWord(flavorType, c)){
        int num = findIndex(flavorType, c);
        for (int i = num; i < flavorType.size() - 1; i++){
            flavorType.at(i) = flavorType.at(i+1);
        }flavorType.pop_back();
    }
}

bool flavorTown::findWord(std::vector<std::string> v, std::string c){
    for (std::string s: v){
        if (s == c){
            return true;
        }
    }return false;
}

int flavorTown::findIndex(std::vector<std::string> v, std::string c){
    if (findWord(v,c)){
        for (int i = 0; i < v.size(); i++){
            if (v.at(i) == c){
                return i;
            }
        }
    }
}
