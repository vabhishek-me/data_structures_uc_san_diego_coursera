#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::max;
using std::vector;

vector<uint64_t> Largest2Numbers(const vector<uint64_t>& vec) {
    int ind1, ind2;

    // get 1st index
    ind1 = 0;
    for(int i=ind1+1; i < vec.size(); i++)
        if(vec[i] > vec[ind1])
            ind1 = i;

    if(ind1 == 0)
        ind2 = 1;
    else
        ind2 = 0;

    // get 2nd index
    for(int i=ind2+1; i < vec.size(); i++)
        if( (i != ind1) && (vec[i] > vec[ind2]) )
            ind2 = i;

    vector<uint64_t> lar2 = {vec[ind1], vec[ind2]};
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
