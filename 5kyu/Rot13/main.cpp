/*
    https://www.codewars.com/kata/530e15517bc88ac656000716/cpp
*/
#include <string>

std::string rot13(std::string msg) {
    for (char& c : msg) {
        switch (c) {
            //here ellipsis in cases is non-standard, but clang and gcc supports them
            case 'A'...'M': case 'a'...'m': c += 13; break;
            case 'N'...'Z': case 'n'...'z': c -= 13; break;
        }
    }
    return msg;
}
