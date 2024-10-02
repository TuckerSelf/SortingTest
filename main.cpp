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
}