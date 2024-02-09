/*
    https://www.codewars.com/kata/57814d79a56c88e3e0000786/cpp
*/
using namespace std;
std::string encrypt(std::string text, int n) {
    string str1 = "";	//基數
    string str2 = "";	//偶數
    for (int j = 0; j < n; j++) {
        str1 = "";
        str2 = "";
        for (int i = 0; i < size(text); i++) {
            if (i % 2) {
                str1 += text[i];
            }
            else {
                str2 += text[i];
            }
        }
        text = str1 + str2;
    }
    return text;
}

std::string decrypt(std::string encryptedText, int n) {
	string temp;
        char xd = encryptedText[size(encryptedText) - 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < size(encryptedText) / 2; j++) {
                temp += encryptedText[size(encryptedText) / 2 + j];
                temp += encryptedText[j];
            }
            if (encryptedText.length() % 2) {
                temp.push_back(xd);
            }
            return decrypt(temp, n - 1);
        }
        return encryptedText;
}