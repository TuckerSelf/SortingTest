#include <vector>
#include "insertionSort.h"

using namespace std;

void insertionSort(vector<int> &ar){
    int length = ar.size();
    for(int i = 2; i < length; i++){
        int key = ar[i];
        int j = i-1;
        while(j > 0 && ar[j] > key){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}