/*
    https://www.codewars.com/kata/550527b108b86f700000073f/cpp
*/
#include <sstream>
#define M_PI 3.14159265358979323846  /* pi */
using namespace std;

class PiApprox {
public: 
	static string iterPi(double epsilon) {
		double ref = 1., num = 3.;
		int n = 0;
		while (abs(ref * 4 - M_PI) > epsilon) {
			if (n % 2 == 1) ref += (1 / num);
			else ref -= (1 / num);
			num += 2, n++;
		}
		stringstream ss2;
		ss2.precision(11);
		ss2 << ref * 4;
		string str = "[" + to_string(n + 1) + ", " + ss2.str() + "]";
		return str;
	}
};