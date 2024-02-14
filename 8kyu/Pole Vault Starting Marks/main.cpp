/*
    https://www.codewars.com/kata/5786f8404c4709148f0006bf/cpp
*/
// y = mx + b
// 1.52 => 9.45
// 1.83 => 10.67
// m = (9.45 - 10.67) / (1.52 - 1.83) = 3.93548387097
// y = 3.9354838 * x    + b
//   = 3.9354838 * 1.52 + b

// 9.45 = 3.9354838 * 1.52 + b
// 9.45 = 5.9819353 + b
// b = 9.45 - 5.9819353
//   = 3.4680647
#include <cmath>
double startingMark(double bodyHeight) {
    double num = 3.4680647 + 3.9354838 * bodyHeight;
    return round(num * 100) / 100;
}