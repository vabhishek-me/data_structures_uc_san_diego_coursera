#include <iostream>
#include <vector>

using namespace std;

int64_t MaximumPairProduct(const vector<int64_t>& vec) {
    int64_t 
        max_pos_1=0, 
        max_pos_2=0,
        max_neg_1=0,
        max_neg_2=0;

    for(auto n:vec) {
        if(n > max_pos_1) {
            max_pos_2 = max_pos_1;
            max_pos_1 = n;
        } else if (n > max_pos_2) {
            max_pos_2 = n;
        }

        if(n<0) {    
            if( abs(n) > abs(max_neg_1) ) {
                max_neg_2 = max_neg_1;
                max_neg_1 = n;
            } else if ( abs(n) > abs(max_neg_2) ) {
                max_neg_2 = n;
            }
        }    
    }

    return max(max_pos_1*max_pos_2, max_neg_1*max_neg_2);
}


int main() {
    uint64_t N;
    cin >> N;
    vector<int64_t> vec(N);
    for(auto& n: vec)
        cin >> n;
    
    cout << MaximumPairProduct(vec);
    
    return 0;
}

