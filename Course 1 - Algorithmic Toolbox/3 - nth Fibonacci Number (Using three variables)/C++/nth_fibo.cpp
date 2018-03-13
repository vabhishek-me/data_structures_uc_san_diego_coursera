#include <iostream>

using namespace std;

int64_t nth_fibo(int64_t num) {
	int64_t m=0,
		n=1,
		o;

	if (num < 0) return -1; // error handle for -ve numbers
	if (num == 0) return 0;

	for (int i=2; i<=num; i++) {
		o = m+n;
		m = n;
		n = o;
	}

	return n;
}

int main(int argc, char** argv) {
	int64_t n;
	cin >> n;
	cout << nth_fibo(n) << endl;
	return 0;
}

