/*
    https://www.codewars.com/kata/54a91a4883a7de5d7800009c/cpp
*/
#include <string>
using namespace std;

std::string incrementString(const std::string &str){
    int len = str.length();
    string n_str = str;
    if((str[len-1])-'0' >= 0 && (str[len-1])-'0' <= 9){
        string num_str = "";
        for(char c : str){
            if(!isalpha(c)){
                num_str+=c;
            }else{
                num_str="";
            }
        }

        int num_str_siez = num_str.length();
        int num = stoi(num_str) + 1;

        string s_str = "";
        for(int j = 0; j < len - num_str_siez; j++){
            s_str+=str[j];
        }

        int z_sum = num_str_siez - to_string(num).length();
        for(int k = 0; k < z_sum; k++){
            s_str+="0";
        }

        s_str+=to_string(num);
        return s_str;
    }else{
        string n_str = str;
        return n_str+='1';
    }
    return "1";
}