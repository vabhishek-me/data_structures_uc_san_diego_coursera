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


int64_t nth_fibo_mod(int64_t N, int64_t M) {
	if(M<=0) return -1; // -ve modulus error handling
	if(M==1) return 0; // mod 1 is always 0

	vector<int> pisano = pisano_period(M); // get pisano period
	return pisano[ N % pisano.size() ]; // return arr[mod place]
}


int main(int argc, char** argv) {
	int64_t num, mod;
	cin >> num >> mod;
	cout << nth_fibo_mod(num, mod) << endl;
	return 0;
}

