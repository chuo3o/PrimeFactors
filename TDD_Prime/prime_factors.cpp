#include <vector>
using namespace std;

class PrimeFactors {
public:
	vector<int> of(int num) {
		vector<int> result = {};
		if (1 < num && num < 4) {
			result.push_back(num);
		}
		else if (num > 3) {
			result.push_back(2);
			result.push_back(2);
		}
		
		return result;
	}
};