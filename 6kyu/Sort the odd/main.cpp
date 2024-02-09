/*
    https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/cpp
*/
#include <math.h>
#include <algorithm>

class Kata {
public:
    std::vector<int> sortArray(std::vector<int> array) {
        int n = array.size();
        for (int i = 0; i < n; i++) {
            if (array[i] % 2 == 1) {
                int minIdx = i;
                for (int j = i + 1; j < n; j++) {
                    if (array[j] % 2 == 1 && array[j] < array[minIdx]) {
                        minIdx = j;
                    }
                }
                std::swap(array[i], array[minIdx]);
            }
        }
        return array;
    }
};