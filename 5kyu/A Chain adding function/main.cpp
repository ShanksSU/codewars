/*
    https://www.codewars.com/kata/539a0e4d85e3425cb0000a88/cpp
*/
class Adder {
public:
    Adder(int initial) : _sum(initial) {}
    Adder operator()(int n) { return Adder(_sum + n); }
    operator int() { return _sum; } 
    friend bool operator==(const int& a, const Adder& b) { return a == b._sum; }
private:    
    int _sum;
};

auto add(int n) {
    return Adder(n);
}