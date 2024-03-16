/*
    https://www.codewars.com/kata/536a155256eb459b8700077e/cpp
*/
std::vector<std::vector<int>> create_spiral(int n) {
    if(n <= 0) return {};
    std::vector<std::vector<int>> spiral(n, std::vector<int>(n, 0));
    int i = 0, j = 0, k = 0, margin = 0, num = 1;
    while (k < n * n) {
        for (; j < n - margin; j++, k++) spiral[i][j] = num++;           //right
        for (i++, j--; i <= j; i++, k++) spiral[i][j] = num++;           //down
        for (i--, j--; j >= margin; j--, k++) spiral[i][j] = num++;      //left
        for (i--, j++; i > j; i--, k++) spiral[i][j] = num++;            //top
        i++, j++, margin++;
    }
    return spiral;
}