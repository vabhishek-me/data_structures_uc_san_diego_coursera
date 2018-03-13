#include <iostream>
#include <vector>

using namespace std;

vector<int> pisano_period(uint64_t M) {
	vector<int> pisano;
	pisano.push_back(0);
	pisano.push_back(1);       // pisano period starts with 01 and repeats

	uint64_t m=0,
		 n=1,
		 o;

	// infinite loop to get pisano period, we can also loop till M*M
	for (uint64_t i=2; ;i++) { 
		o = (m+n)%M;
		m = n;
		n = o;
		if (m==0 && n==1) {
			pisano.pop_back();  // remove last 0
			return pisano;
		}
		pisano.push_back(n);
	}
}

int64_t last_digit_fibo_sum(int64_t N) {
	uint64_t M = 10; // use 10 to get pisano period for last digit

	vector<int> pisano = pisano_period(M);  // get pisano period

	int np2 = pisano[ (N+2) % pisano.size() ] - 1;  // sum(f(0)...f(n)) = f(n+2) - 1
	if (np2 < 0) np2 += 10;  //if np2 becomes negative
	return np2;
}


int main(int argc, char** argv) {
	int64_t n;
	cin >> n;
	cout << last_digit_fibo_sum(n) << endl;
	return 0;
}

