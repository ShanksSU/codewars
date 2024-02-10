#include <string>
#include <math.h>
long eliminate_unset_bits(std::string number) {
  return powl(2, std::count(number.begin(), number.end(), '1')) - 1;
}