#include "gmock/gmock.h"
#include "prime_factors.cpp"

using namespace testing;

class PrimeFixture :public Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected = {};
};

TEST_F(PrimeFixture, of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, of3) {
	expected = {3};
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, of4) {
	expected = {2, 2};
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, of6) {
	expected = {2, 3};
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFixture, of9) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFixture, of12) {
	expected = { 2, 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}