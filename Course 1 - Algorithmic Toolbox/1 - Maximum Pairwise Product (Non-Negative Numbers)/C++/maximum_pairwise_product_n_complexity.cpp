#include <iostream>
#include <vector>

using namespace std;


vector<uint64_t> Largest2Numbers(const vector<uint64_t>& vec) {
    uint64_t max1=0, max2=0;

    for(auto n:vec) {
        if(n > max1) {
            max2 = max1;
            max1 = n;
        } else if (n > max2) {
            max2 = n;
        }
    }
    vector<uint64_t> lar2 = {max1, max2};
    return lar2;
}


int main() {
    uint64_t N;
    cin >> N;
    vector<uint64_t> vec(N);
    for(auto& n: vec)
        cin >> n;

    vector<uint64_t> lar2 = Largest2Numbers(vec);

    cout << lar2[0] * lar2[1];    
    
    return 0;
}

