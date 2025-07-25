#include <vector>
using namespace std;

class PrimeFactors {
public:
	vector<int> of(int num) {
		vector<int> result = {};
		
		for (int divisor = 2; num > 1; divisor++) {
			while (num % divisor == 0) {
				result.push_back(divisor);
				num /= divisor;
			}
		}

		return result;
	}
};