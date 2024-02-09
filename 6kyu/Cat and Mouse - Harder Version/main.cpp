/*
    https://www.codewars.com/kata/57ee2a1b7b45efcf700001bf/cpp
*/
#include <string>

std::string catMouse(std::string field, unsigned int jump){
    auto cat = field.find("C");
    auto dog = field.find("D");
    auto mouse = field.find("m");
    if(cat == -1 || dog == -1 || mouse == -1) {
        return "boring without all three";
    }else if(abs(cat - mouse) > jump){
        return "Escaped!";
    }else if((dog > cat && dog < mouse) || (dog < cat && dog > mouse)) {
        return "Protected!";
    }
    return "Caught!";
}