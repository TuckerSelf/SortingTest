#include <vector>
#include "countingSort.h"

using namespace std;

void countingSort(vector<int> &ar){
    int length = ar.size();
    int k = 10000;
    vector<int> b;
    vector<int> c;

    for(int i = 0; i <= k; i++){
        c.push_back(0);
    }
    for(int j = 1; j < length; j++){
        c[ar[j]] = c[ar[j]]+1;
    }
    for(int i = 1; i <= k; i++){
        c[i] = c[i] + c[i-1];
    }
    for(int i = 1; i < length; i++){
        b.push_back(0);
    }
    for(int j = length-1; j >= 0; j--){
        b[c[ar[j]]] = ar[j];
        c[ar[j]] = c[ar[j]]-1;
    }
    for(int j = length; j > 0; j--){
        ar[j] = b[j];
    }
}