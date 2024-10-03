/**
 * @file main.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief Test the sort algorithms using the number of elements specified on the command line.
 * @version 0.1
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include "sort_test.h"
#include "builtin.h"
#include "selectionSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "insertionSort.h"
#include "bubbleSort.h"
#include "countingSort.h"
#include "radixSort.h"

using namespace std;

int main(int argc, char **argv)
{
    // get the number to run.
    unsigned int n = 100;
    if(argc == 2) {
        n = stoi(argv[1]);
    }
    SortTest t{n};

    // Run the tests
    cout << "Array Size: " << n << endl;
    t.run("Built-In STL Sort", builtinSort);
    t.run("Selection Sort A", selectionSortA);
    t.run("Selection Sort B", selectionSortB);
    t.run("Merge Sort", mergeSort);
    t.run("Quick Sort", quickSort);
    t.run("Insertion Sort", insertionSort);
    t.run("Bubble Sort A", bubbleSortA);
    t.run("Bubble Sort B", bubbleSortB);
    t.run("Bubble Sort C", bubbleSortC);
    t.run("Counting Sort", countingSort);
    t.run("Radix Sort", radixSort);
}