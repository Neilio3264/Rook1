#ifndef FLAVORTOWN_H
#define FLAVORTOWN_H

#include <vector>
#include <string>

class flavorTown
{
public:
    flavorTown();
    std::vector<std::string> flavorType = {"None", "Sample"};
    std::vector<std::string> sweetType = {"None", "Sample"};
    void addFlavor(std::string);
    void removeFlavor(std::string);
    void addSweet(std::string);
    void removeSweet(std::string);
    bool findWord(std::vector<std::string>, std::string);

    int findIndex(std::vector<std::string>, std::string);
};

#endif // FLAVORTOWN_H
