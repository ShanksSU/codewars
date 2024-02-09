/*
    https://www.codewars.com/kata/587a88a208236efe8500008b/cpp
*/
long long int sequence_sum(long long int begin_number, long long int end_number, long long step) {
    long long num = (end_number - begin_number) / step;
    if (num < 0 || (end_number - begin_number) * step < 0)
        return 0;
    return (begin_number * 2 + num * step) * (num + 1) / 2;
}
