#include <vector>
#include "bubbleSort.h"

using namespace std;

void bubbleSortA(vector<int> &ar){
    int length = ar.size();
    for(int i = 1; i < length-1; i++){
        for(int j = length; j > i+1; j++){
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
        for(int i = 1; i < length-1; i++){
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
    int length = ar.size();
    for(int i = length; i > 1; i--){
        for(int j = length; j > i+1; j++){
            if(ar[j] < ar[j-1]){
                int temp = ar[j];
                ar[j] = ar[j-1];
                ar[j-1] = temp;
            }
        }
    }
}