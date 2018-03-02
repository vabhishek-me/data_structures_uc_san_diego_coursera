#include <iostream>
#include <cstdlib>
#include <vector>

#define MAX 1000

using namespace std;

uint64_t getRandom(uint64_t n=0) {
    if(n > 0)
        return rand()%n;
    else
        return rand();
}

int main() {
    srand( (unsigned) time(0) );

    uint64_t N, M;
    N = 1000;
    M = 100000;

    cout << N << endl;
    
    vector<uint64_t> vec(N);
    for(auto& v : vec)
        v = getRandom(M);
    
    for(auto v : vec)
        cout << v << " ";

    return 0;
}

