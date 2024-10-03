#include <vector>
#include <bitset>
#include "radixSort.h"

using namespace std;

void radixSort(vector<int> &ar){
    int length = ar.size();
    int k = ar[0];
    for(int i = 1; i < length; 1++){
        if(ar[i] > k){
            k = ar[i];
        }
    }

    for(int i = 1; k/i > 0; i *= 10){
        countingCopy(ar, length, i);
    }
}

void countingCopy(vector<int> &ar, int length, int digit){
    vector<int> b;
    vector<int> c;

    for(int i = 0; i < length; i++){
        b.push_back(0);
    }
    for(int i = 0; i <= 10; i++){
        c.push_back(0);
    }
    for(int i = 0; i < length; i++){
        c[(ar[i]/digit)%10]++;
    }
    for(int i = 1; i < 10; i++){
        c[i] += c[i-1];
    }
    for(int i = length-1; i >= 0; i--){
        b[c[(ar[i]/digit)%10]] = ar[i];
        c[(ar[i]/digit)%10]--;
    }
    for(int i = length; i > 0; i--){
        ar[i] = b[i];
    }
}