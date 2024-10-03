#include <vector>
#include <bitset>
#include "radixSort.h"

using namespace std;

void radixSort(vector<int> &ar){
    int d = 32;
    int length = ar.size();

    for(int i = 0; i < length; i++){
        bitset<32> binary(ar[i]);
    }

    for(int j = 0; j < d; j++){

    }

    for(int i = 0; i < length; i++){
        bitset<32> decimal(ar[i]);
    }
}