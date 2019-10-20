#include "userdata.h"

UserData::UserData()
{

}

UserData::UserData(std::string name, std::string pword){
    this->myName = name;
    this->myPassword = pword;
    this->temperature = 201;
    this->color = 50;
    this->kind = "Whole Fat";
    this->flavor = "None";
    this->sweet = "None";
    this->points = 0;
}

std::string UserData::getName(){
    return myName;
}

std::string UserData::getPword(){
    return myPassword;
}
