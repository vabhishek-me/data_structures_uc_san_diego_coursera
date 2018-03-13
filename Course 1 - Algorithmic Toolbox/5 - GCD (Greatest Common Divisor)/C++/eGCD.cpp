#include <iostream>

using namespace std;

int64_t eGCD(int64_t n1, int64_t n2) {
	if (n2 == 0) 
		return n1;        // if n1 is 0, n1%n2 will be equal to 0
	else 
		return eGCD(n2, n1%n2);
}

int main(int argc, char** argv) {
	int64_t n, m;
	cin >> n >> m;
	cout << eGCD(n, m) << endl;

	return 0;
}

