#include <iostream>

using namespace std;

int64_t eGCD(int64_t n1, int64_t n2) {
	if (n2 == 0)
		return n1;
	else
		return eGCD(n2, n1%n2);
}

int64_t LCM(int64_t n1, int64_t n2) {
	if( n1==0 || n2==0) return 0;

	int64_t gcd = eGCD(n1, n2);
	return (n1/gcd) * n2;
}

int main(int argc, char** argv) {
	uint64_t n=0, m=0;
	cin >> n >> m;
	cout << LCM(n,m) << endl;
	return 0;
}

