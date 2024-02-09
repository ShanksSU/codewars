/*
    https://www.codewars.com/kata/5279f6fe5ab7f447890006a7/cpp
*/
#include <vector>
using namespace std;

PeakData pick_peaks(vector<int> v) {
    PeakData result;
    int len = size(v);
    for (int i = 1; i < len -1; i++) {
        if (v[i - 1] < v[i] and v[i + 1] < v[i]) {
            result.pos.push_back(i);
            result.peaks.push_back(v[i]);
        }
        
        if (v[i] > v[i - 1] && v[i] == v[i + 1]) {
            for (int j = 1; v[i] == v[i + j] && i + j < len - 1; j++) {
                if (v[i] > v[i + j + 1]) { 
                    result.pos.push_back(i); 
                    result.peaks.push_back(v.at(i)); 
                }
            }
        }
    }
    return result;
}