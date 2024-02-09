/*
    https://www.codewars.com/kata/54d7660d2daf68c619000d95/cpp
*/
#include <vector>
#include <string>
class Fracts {

public:
    static std::string convertFrac(std::vector<std::vector<unsigned long long>>& lst);
    static unsigned long long gcd(unsigned long long a, unsigned long long b);
    static unsigned long long lcm(unsigned long long a, unsigned long long b);
    static unsigned long long int nlcm(std::vector<unsigned long long> a, unsigned long long n);
};


unsigned long long Fracts::gcd(unsigned long long a, unsigned long long b) {
	if (b == 0)	return a;
	return gcd(b, a % b);
}

unsigned long long Fracts::lcm(unsigned long long a, unsigned long long b) {
    unsigned long long t = gcd(a, b);
	return a / t * b;
}

unsigned long long int Fracts::nlcm(std::vector<unsigned long long> a, unsigned long long n) {
    int i = 0;
    long long int temp;
    temp = lcm(a[i], a[i + 1]);
    i = i + 2;
    for (; i < n; i++) {
        temp = lcm(temp, a[i]);
    }
    return temp;
}

std::string Fracts::convertFrac(std::vector<std::vector<unsigned long long>>& lst) {
    std::vector<unsigned long long> denom_n = {};
    unsigned long long len = lst.size();
    for (auto m : lst) {
        denom_n.push_back(m.back());
    }
    unsigned long long D = Fracts::nlcm(denom_n, len);
    
    std::vector<unsigned long long> N_n = {};
    for (unsigned long long i = 0; i < len; i++) {
        N_n.push_back(lst[i].front() * (D / lst[i].back()));
    }
    
    std::string str = "";
    for (int j = 0; j < len; j++) {
        str += "(";
        str += std::to_string(N_n[j]) + "," + std::to_string(D);
        str += ")";
    }
    std::cout << str << std::endl;
    return str;
}