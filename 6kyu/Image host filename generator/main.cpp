/*
    https://www.codewars.com/kata/586a933fc66d187b6e00031a/cpp
*/
#include <string>
#include <random>
std::string generateName() {
	std::mt19937 gen(std::random_device{}());
	std::uniform_int_distribution<> dis('A', 'Z');
	std::string strResult = "";
	for (int i = 0; i < 6; i++) 
		strResult.push_back(static_cast<char>(dis(gen)));
	return strResult.c_str();
}