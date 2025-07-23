#include <vector>
using namespace std;

class PrimeFactors {
public:
	vector<int> of(int num) {
		vector<int> result = {};
		if (num > 1) result.push_back(num);
		return result;
	}
};