/*
    https://www.codewars.com/kata/5679aa472b8f57fb8c000047/cpp
*/
int find_even_index(const std::vector<int> numbers) {
    for (int i = 0; i < numbers.size(); i++) {
        int num1 = 0, num2 = 0;
        for (int j = 0; j < i; j++)
            num1 += numbers[j];
        for (int k = numbers.size() - 1; k > i; --k)
            num2 += numbers[k];
        if (num1 == num2) return i;
    }
    return -1;
}