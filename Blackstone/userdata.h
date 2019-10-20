#ifndef USERDATA_H
#define USERDATA_H

#include <vector>
#include <string>

class UserData
{
public:
    UserData();
    UserData(std::string, std::string);
    std::string myName;
    std::string myPassword;
    std::string kind;
    int temperature;
    int color;
    std::string flavor;
    std::string sweet;
    int points;


    std::string getName();
    std::string getPword();
};

#endif // USERDATA_H
