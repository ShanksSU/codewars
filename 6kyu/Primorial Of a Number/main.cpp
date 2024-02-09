/*
    https://www.codewars.com/kata/5a99a03e4a6b34bb3c000124/cpp
*/
unsigned long long numPrimorial(unsigned short int number) {
    int n = 1;
    for (int i = 2; i <= 1000; i++) {
        if (number == 0) break;
        for (int j = 2; j <= i; j++) {
            if (i % j == 0 && i != j) break;
            if (j == i) n *= i, number -= 1;
        }
    }
    return n;
}