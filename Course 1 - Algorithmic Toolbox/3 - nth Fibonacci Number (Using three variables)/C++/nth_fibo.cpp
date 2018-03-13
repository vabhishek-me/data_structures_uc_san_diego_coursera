#include <iostream>

using namespace std;

uint64_t nth_fibo(uint64_t num) {
	uint64_t m=0,
		 n=1,
		 o;

	if (num<=0)
		return m;

	for (int i=2; i<=num; i++) {
		o = m+n;
		m = n;
		n = o;
	}

	return n;
}

int main(int argc, char** argv) {
	uint64_t n;
	cin >> n;
	cout << nth_fibo(n) << endl;
	return 0;
}

