/*
    https://www.codewars.com/kata/585d7d5adb20cf33cb000235/cpp
*/
float find_uniq(const std::vector<float> &v) {
    for(long long i = 1, j = v.size() - 1; i <= j; i++, j--){
        if(v[0] != v[i] && v[i] != v[i + 1]) return v[i];
        if(v[0] != v[j] && v[j] != v[j - 1]) return v[j];
    }
    return v[0];
}