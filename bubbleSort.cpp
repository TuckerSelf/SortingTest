#include <vector>
#include "bubbleSort.h"

using namespace std;

void bubbleSortA(vector<int> &ar){
    int length = ar.size();
    for(int i = 0; i < length; i++){
        for(int j = length; j > i; j--){
            if(ar[j] < ar[j-1]){
                int temp = ar[j];
                ar[j] = ar[j-1];
                ar[j-1] = temp;
            }
        }
    }
}

void bubbleSortB(vector<int> &ar){
    bool swapped = 1;
    int length = ar.size();
    while(swapped){
        swapped = 0;
        for(int i = 0; i < length; i++){
            if(ar[i] > ar[i+1]){
                int temp = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = temp;
                swapped = 1;
            }
        }
    }
}

void bubbleSortC(vector<int> &ar){
    bool swapped = 1;
    int length = ar.size();
    while(swapped){
        swapped = 0;
        for(int i = length-1; i >= 0; i--){
            if(ar[i] > ar[i+1]){
                int temp = ar[i];
                ar[i] = ar[i-1];
                ar[i-1] = temp;
                swapped = 1;
            }
        }
    }
}