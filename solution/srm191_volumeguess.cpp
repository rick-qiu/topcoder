/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2330
*******************************************************************************/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class VolumeGuess {
public:
    int correctVolume(vector<string> queries, int numberOfBoxes, int ithBox);
};

int VolumeGuess::correctVolume(vector<string> queries, int numberOfBoxes, int ithBox) {
    int ret;
    return ret;
}


int test0() {
    vector<string> queries = {"1,2,10", "1,3,10", "2,3,20"};
    int numberOfBoxes = 3;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> queries = {"1,02,10", "2,3,010", "1,3,20"};
    int numberOfBoxes = 3;
    int ithBox = 2;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> queries = {"1,2,31", "1,3,9", "1,4,31", "2,4,32", "3,4,9", "3,2,9"};
    int numberOfBoxes = 4;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> queries = {"1,2,31", "1,3,9", "1,4,31", "2,4,32", "3,4,9", "3,2,9"};
    int numberOfBoxes = 4;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> queries = {"3,2,80", "5,2,15", "1,2,193", "3,1,80", "5,1,15", "5,3,15", "3,4,3", "4,5,3", "2,4,3", "4,1,3"};
    int numberOfBoxes = 5;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> queries = {"3,2,80", "5,2,15", "1,2,193", "3,1,80", "5,1,15", "5,3,15", "3,4,3", "4,5,3", "2,4,3", "4,1,3"};
    int numberOfBoxes = 5;
    int ithBox = 4;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> queries = {"3,2,80", "5,2,15", "1,2,193", "3,1,80", "5,1,15", "5,3,15", "3,4,3", "4,5,3", "2,4,3", "4,1,3"};
    int numberOfBoxes = 5;
    int ithBox = 5;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> queries = {"1,7,12", "2,1,12", "5,9,123", "7,6,100", "8,6,100", "6,9,100", "7,8,200", "1,5,12", "1,6,12", "1,8,12", "1,9,12", "2,3,34", "2,4,42", "3,7,34", "8,3,34", "9,3,34", "4,5,42", "4,6,42", "1,3,12", "1,4,12", "5,7,200", "5,8,300", "9,4,42", "5,6,100", "7,9,123", "8,9,123", "2,5,234", "2,6,100", "4,7,42", "4,8,42", "2,7,200", "8,2,234", "2,9,123", "3,4,34", "3,5,34", "3,6,34"};
    int numberOfBoxes = 9;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> queries = {"1,7,12", "2,1,12", "5,9,123", "7,6,100", "8,6,100", "6,9,100", "7,8,200", "1,5,12", "1,6,12", "1,8,12", "1,9,12", "2,3,34", "2,4,42", "3,7,34", "8,3,34", "9,3,34", "4,5,42", "4,6,42", "1,3,12", "1,4,12", "5,7,200", "5,8,300", "9,4,42", "5,6,100", "7,9,123", "8,9,123", "2,5,234", "2,6,100", "4,7,42", "4,8,42", "2,7,200", "8,2,234", "2,9,123", "3,4,34", "3,5,34", "3,6,34"};
    int numberOfBoxes = 9;
    int ithBox = 2;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> queries = {"1,7,12", "2,1,12", "5,9,123", "7,6,100", "8,6,100", "6,9,100", "7,8,200", "1,5,12", "1,6,12", "1,8,12", "1,9,12", "2,3,34", "2,4,42", "3,7,34", "8,3,34", "9,3,34", "4,5,42", "4,6,42", "1,3,12", "1,4,12", "5,7,200", "5,8,300", "9,4,42", "5,6,100", "7,9,123", "8,9,123", "2,5,234", "2,6,100", "4,7,42", "4,8,42", "2,7,200", "8,2,234", "2,9,123", "3,4,34", "3,5,34", "3,6,34"};
    int numberOfBoxes = 9;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> queries = {"1,7,12", "2,1,12", "5,9,123", "7,6,100", "8,6,100", "6,9,100", "7,8,200", "1,5,12", "1,6,12", "1,8,12", "1,9,12", "2,3,34", "2,4,42", "3,7,34", "8,3,34", "9,3,34", "4,5,42", "4,6,42", "1,3,12", "1,4,12", "5,7,200", "5,8,300", "9,4,42", "5,6,100", "7,9,123", "8,9,123", "2,5,234", "2,6,100", "4,7,42", "4,8,42", "2,7,200", "8,2,234", "2,9,123", "3,4,34", "3,5,34", "3,6,34"};
    int numberOfBoxes = 9;
    int ithBox = 4;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> queries = {"1,7,12", "2,1,12", "5,9,123", "7,6,100", "8,6,100", "6,9,100", "7,8,200", "1,5,12", "1,6,12", "1,8,12", "1,9,12", "2,3,34", "2,4,42", "3,7,34", "8,3,34", "9,3,34", "4,5,42", "4,6,42", "1,3,12", "1,4,12", "5,7,200", "5,8,300", "9,4,42", "5,6,100", "7,9,123", "8,9,123", "2,5,234", "2,6,100", "4,7,42", "4,8,42", "2,7,200", "8,2,234", "2,9,123", "3,4,34", "3,5,34", "3,6,34"};
    int numberOfBoxes = 9;
    int ithBox = 6;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> queries = {"1,7,12", "2,1,12", "5,9,123", "7,6,100", "8,6,100", "6,9,100", "7,8,200", "1,5,12", "1,6,12", "1,8,12", "1,9,12", "2,3,34", "2,4,42", "3,7,34", "8,3,34", "9,3,34", "4,5,42", "4,6,42", "1,3,12", "1,4,12", "5,7,200", "5,8,300", "9,4,42", "5,6,100", "7,9,123", "8,9,123", "2,5,234", "2,6,100", "4,7,42", "4,8,42", "2,7,200", "8,2,234", "2,9,123", "3,4,34", "3,5,34", "3,6,34"};
    int numberOfBoxes = 9;
    int ithBox = 7;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> queries = {"1,7,12", "2,1,12", "5,9,123", "7,6,100", "8,6,100", "6,9,100", "7,8,200", "1,5,12", "1,6,12", "1,8,12", "1,9,12", "2,3,34", "2,4,42", "3,7,34", "8,3,34", "9,3,34", "4,5,42", "4,6,42", "1,3,12", "1,4,12", "5,7,200", "5,8,300", "9,4,42", "5,6,100", "7,9,123", "8,9,123", "2,5,234", "2,6,100", "4,7,42", "4,8,42", "2,7,200", "8,2,234", "2,9,123", "3,4,34", "3,5,34", "3,6,34"};
    int numberOfBoxes = 9;
    int ithBox = 9;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> queries = {"2,8,232", "4,8,234", "3,4,233", "3,5,233", "3,6,233", "3,7,233", "4,7,234", "1,2,231", "1,3,231", "5,6,235", "5,7,235", "5,8,235", "5,9,235", "6,7,236", "1,4,231", "1,5,231", "7,8,237", "4,9,234", "3,8,233", "3,9,233", "4,5,234", "4,6,234", "2,9,232", "7,9,237", "8,9,238", "1,8,231", "1,9,231", "2,3,232", "2,4,232", "2,5,232", "1,6,231", "1,7,231", "6,8,236", "6,9,236", "2,6,232", "2,7,232"};
    int numberOfBoxes = 9;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> queries = {"2,8,232", "4,8,234", "3,4,233", "3,5,233", "3,6,233", "3,7,233", "4,7,234", "1,2,231", "1,3,231", "5,6,235", "5,7,235", "5,8,235", "5,9,235", "6,7,236", "1,4,231", "1,5,231", "7,8,237", "4,9,234", "3,8,233", "3,9,233", "4,5,234", "4,6,234", "2,9,232", "7,9,237", "8,9,238", "1,8,231", "1,9,231", "2,3,232", "2,4,232", "2,5,232", "1,6,231", "1,7,231", "6,8,236", "6,9,236", "2,6,232", "2,7,232"};
    int numberOfBoxes = 9;
    int ithBox = 2;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> queries = {"2,8,232", "4,8,234", "3,4,233", "3,5,233", "3,6,233", "3,7,233", "4,7,234", "1,2,231", "1,3,231", "5,6,235", "5,7,235", "5,8,235", "5,9,235", "6,7,236", "1,4,231", "1,5,231", "7,8,237", "4,9,234", "3,8,233", "3,9,233", "4,5,234", "4,6,234", "2,9,232", "7,9,237", "8,9,238", "1,8,231", "1,9,231", "2,3,232", "2,4,232", "2,5,232", "1,6,231", "1,7,231", "6,8,236", "6,9,236", "2,6,232", "2,7,232"};
    int numberOfBoxes = 9;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> queries = {"2,8,232", "4,8,234", "3,4,233", "3,5,233", "3,6,233", "3,7,233", "4,7,234", "1,2,231", "1,3,231", "5,6,235", "5,7,235", "5,8,235", "5,9,235", "6,7,236", "1,4,231", "1,5,231", "7,8,237", "4,9,234", "3,8,233", "3,9,233", "4,5,234", "4,6,234", "2,9,232", "7,9,237", "8,9,238", "1,8,231", "1,9,231", "2,3,232", "2,4,232", "2,5,232", "1,6,231", "1,7,231", "6,8,236", "6,9,236", "2,6,232", "2,7,232"};
    int numberOfBoxes = 9;
    int ithBox = 4;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> queries = {"2,8,232", "4,8,234", "3,4,233", "3,5,233", "3,6,233", "3,7,233", "4,7,234", "1,2,231", "1,3,231", "5,6,235", "5,7,235", "5,8,235", "5,9,235", "6,7,236", "1,4,231", "1,5,231", "7,8,237", "4,9,234", "3,8,233", "3,9,233", "4,5,234", "4,6,234", "2,9,232", "7,9,237", "8,9,238", "1,8,231", "1,9,231", "2,3,232", "2,4,232", "2,5,232", "1,6,231", "1,7,231", "6,8,236", "6,9,236", "2,6,232", "2,7,232"};
    int numberOfBoxes = 9;
    int ithBox = 5;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> queries = {"2,8,232", "4,8,234", "3,4,233", "3,5,233", "3,6,233", "3,7,233", "4,7,234", "1,2,231", "1,3,231", "5,6,235", "5,7,235", "5,8,235", "5,9,235", "6,7,236", "1,4,231", "1,5,231", "7,8,237", "4,9,234", "3,8,233", "3,9,233", "4,5,234", "4,6,234", "2,9,232", "7,9,237", "8,9,238", "1,8,231", "1,9,231", "2,3,232", "2,4,232", "2,5,232", "1,6,231", "1,7,231", "6,8,236", "6,9,236", "2,6,232", "2,7,232"};
    int numberOfBoxes = 9;
    int ithBox = 6;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 236;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> queries = {"2,8,232", "4,8,234", "3,4,233", "3,5,233", "3,6,233", "3,7,233", "4,7,234", "1,2,231", "1,3,231", "5,6,235", "5,7,235", "5,8,235", "5,9,235", "6,7,236", "1,4,231", "1,5,231", "7,8,237", "4,9,234", "3,8,233", "3,9,233", "4,5,234", "4,6,234", "2,9,232", "7,9,237", "8,9,238", "1,8,231", "1,9,231", "2,3,232", "2,4,232", "2,5,232", "1,6,231", "1,7,231", "6,8,236", "6,9,236", "2,6,232", "2,7,232"};
    int numberOfBoxes = 9;
    int ithBox = 7;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> queries = {"1,2,6", "1,3,45", "1,4,34", "1,5,23", "1,6,12", "1,7,7", "1,8,67", "1,9,67", "2,3,6", "2,4,6", "2,5,6", "2,6,6", "2,7,6", "2,8,6", "2,9,6", "3,4,34", "3,5,23", "3,6,12", "3,7,7", "3,8,45", "3,9,45", "4,5,23", "4,6,12", "4,7,7", "4,8,34", "4,9,34", "5,6,12", "5,7,7", "5,8,23", "5,9,23", "6,7,7", "6,8,12", "6,9,12", "7,8,7", "7,9,7", "8,9,85"};
    int numberOfBoxes = 9;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> queries = {"1,2,6", "1,3,45", "1,4,34", "1,5,23", "1,6,12", "1,7,7", "1,8,67", "1,9,67", "2,3,6", "2,4,6", "2,5,6", "2,6,6", "2,7,6", "2,8,6", "2,9,6", "3,4,34", "3,5,23", "3,6,12", "3,7,7", "3,8,45", "3,9,45", "4,5,23", "4,6,12", "4,7,7", "4,8,34", "4,9,34", "5,6,12", "5,7,7", "5,8,23", "5,9,23", "6,7,7", "6,8,12", "6,9,12", "7,8,7", "7,9,7", "8,9,85"};
    int numberOfBoxes = 9;
    int ithBox = 2;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> queries = {"1,2,6", "1,3,45", "1,4,34", "1,5,23", "1,6,12", "1,7,7", "1,8,67", "1,9,67", "2,3,6", "2,4,6", "2,5,6", "2,6,6", "2,7,6", "2,8,6", "2,9,6", "3,4,34", "3,5,23", "3,6,12", "3,7,7", "3,8,45", "3,9,45", "4,5,23", "4,6,12", "4,7,7", "4,8,34", "4,9,34", "5,6,12", "5,7,7", "5,8,23", "5,9,23", "6,7,7", "6,8,12", "6,9,12", "7,8,7", "7,9,7", "8,9,85"};
    int numberOfBoxes = 9;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> queries = {"1,2,6", "1,3,45", "1,4,34", "1,5,23", "1,6,12", "1,7,7", "1,8,67", "1,9,67", "2,3,6", "2,4,6", "2,5,6", "2,6,6", "2,7,6", "2,8,6", "2,9,6", "3,4,34", "3,5,23", "3,6,12", "3,7,7", "3,8,45", "3,9,45", "4,5,23", "4,6,12", "4,7,7", "4,8,34", "4,9,34", "5,6,12", "5,7,7", "5,8,23", "5,9,23", "6,7,7", "6,8,12", "6,9,12", "7,8,7", "7,9,7", "8,9,85"};
    int numberOfBoxes = 9;
    int ithBox = 4;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> queries = {"1,2,6", "1,3,45", "1,4,34", "1,5,23", "1,6,12", "1,7,7", "1,8,67", "1,9,67", "2,3,6", "2,4,6", "2,5,6", "2,6,6", "2,7,6", "2,8,6", "2,9,6", "3,4,34", "3,5,23", "3,6,12", "3,7,7", "3,8,45", "3,9,45", "4,5,23", "4,6,12", "4,7,7", "4,8,34", "4,9,34", "5,6,12", "5,7,7", "5,8,23", "5,9,23", "6,7,7", "6,8,12", "6,9,12", "7,8,7", "7,9,7", "8,9,85"};
    int numberOfBoxes = 9;
    int ithBox = 5;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> queries = {"1,2,6", "1,3,45", "1,4,34", "1,5,23", "1,6,12", "1,7,7", "1,8,67", "1,9,67", "2,3,6", "2,4,6", "2,5,6", "2,6,6", "2,7,6", "2,8,6", "2,9,6", "3,4,34", "3,5,23", "3,6,12", "3,7,7", "3,8,45", "3,9,45", "4,5,23", "4,6,12", "4,7,7", "4,8,34", "4,9,34", "5,6,12", "5,7,7", "5,8,23", "5,9,23", "6,7,7", "6,8,12", "6,9,12", "7,8,7", "7,9,7", "8,9,85"};
    int numberOfBoxes = 9;
    int ithBox = 6;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> queries = {"1,2,6", "1,3,45", "1,4,34", "1,5,23", "1,6,12", "1,7,7", "1,8,67", "1,9,67", "2,3,6", "2,4,6", "2,5,6", "2,6,6", "2,7,6", "2,8,6", "2,9,6", "3,4,34", "3,5,23", "3,6,12", "3,7,7", "3,8,45", "3,9,45", "4,5,23", "4,6,12", "4,7,7", "4,8,34", "4,9,34", "5,6,12", "5,7,7", "5,8,23", "5,9,23", "6,7,7", "6,8,12", "6,9,12", "7,8,7", "7,9,7", "8,9,85"};
    int numberOfBoxes = 9;
    int ithBox = 7;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> queries = {"1,2,123", "1,3,123", "1,4,12", "1,5,123", "1,6,11", "1,7,13", "1,8,123", "1,9,1", "2,3,124", "2,4,12", "2,5,124", "2,6,11", "2,7,13", "2,8,124", "2,9,1", "3,4,12", "3,5,125", "3,6,11", "3,7,13", "3,8,125", "3,9,1", "4,5,12", "4,6,11", "4,7,12", "4,8,12", "4,9,1", "5,6,11", "5,7,13", "5,8,181", "5,9,1", "6,7,11", "6,8,11", "6,9,1", "7,8,13", "7,9,1", "8,9,1"};
    int numberOfBoxes = 9;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> queries = {"1,2,123", "1,3,123", "1,4,12", "1,5,123", "1,6,11", "1,7,13", "1,8,123", "1,9,1", "2,3,124", "2,4,12", "2,5,124", "2,6,11", "2,7,13", "2,8,124", "2,9,1", "3,4,12", "3,5,125", "3,6,11", "3,7,13", "3,8,125", "3,9,1", "4,5,12", "4,6,11", "4,7,12", "4,8,12", "4,9,1", "5,6,11", "5,7,13", "5,8,181", "5,9,1", "6,7,11", "6,8,11", "6,9,1", "7,8,13", "7,9,1", "8,9,1"};
    int numberOfBoxes = 9;
    int ithBox = 2;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> queries = {"1,2,123", "1,3,123", "1,4,12", "1,5,123", "1,6,11", "1,7,13", "1,8,123", "1,9,1", "2,3,124", "2,4,12", "2,5,124", "2,6,11", "2,7,13", "2,8,124", "2,9,1", "3,4,12", "3,5,125", "3,6,11", "3,7,13", "3,8,125", "3,9,1", "4,5,12", "4,6,11", "4,7,12", "4,8,12", "4,9,1", "5,6,11", "5,7,13", "5,8,181", "5,9,1", "6,7,11", "6,8,11", "6,9,1", "7,8,13", "7,9,1", "8,9,1"};
    int numberOfBoxes = 9;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> queries = {"1,2,123", "1,3,123", "1,4,12", "1,5,123", "1,6,11", "1,7,13", "1,8,123", "1,9,1", "2,3,124", "2,4,12", "2,5,124", "2,6,11", "2,7,13", "2,8,124", "2,9,1", "3,4,12", "3,5,125", "3,6,11", "3,7,13", "3,8,125", "3,9,1", "4,5,12", "4,6,11", "4,7,12", "4,8,12", "4,9,1", "5,6,11", "5,7,13", "5,8,181", "5,9,1", "6,7,11", "6,8,11", "6,9,1", "7,8,13", "7,9,1", "8,9,1"};
    int numberOfBoxes = 9;
    int ithBox = 4;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> queries = {"1,2,123", "1,3,123", "1,4,12", "1,5,123", "1,6,11", "1,7,13", "1,8,123", "1,9,1", "2,3,124", "2,4,12", "2,5,124", "2,6,11", "2,7,13", "2,8,124", "2,9,1", "3,4,12", "3,5,125", "3,6,11", "3,7,13", "3,8,125", "3,9,1", "4,5,12", "4,6,11", "4,7,12", "4,8,12", "4,9,1", "5,6,11", "5,7,13", "5,8,181", "5,9,1", "6,7,11", "6,8,11", "6,9,1", "7,8,13", "7,9,1", "8,9,1"};
    int numberOfBoxes = 9;
    int ithBox = 6;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> queries = {"1,2,123", "1,3,123", "1,4,12", "1,5,123", "1,6,11", "1,7,13", "1,8,123", "1,9,1", "2,3,124", "2,4,12", "2,5,124", "2,6,11", "2,7,13", "2,8,124", "2,9,1", "3,4,12", "3,5,125", "3,6,11", "3,7,13", "3,8,125", "3,9,1", "4,5,12", "4,6,11", "4,7,12", "4,8,12", "4,9,1", "5,6,11", "5,7,13", "5,8,181", "5,9,1", "6,7,11", "6,8,11", "6,9,1", "7,8,13", "7,9,1", "8,9,1"};
    int numberOfBoxes = 9;
    int ithBox = 7;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> queries = {"1,2,123", "1,3,123", "1,4,12", "1,5,123", "1,6,11", "1,7,13", "1,8,123", "1,9,1", "2,3,124", "2,4,12", "2,5,124", "2,6,11", "2,7,13", "2,8,124", "2,9,1", "3,4,12", "3,5,125", "3,6,11", "3,7,13", "3,8,125", "3,9,1", "4,5,12", "4,6,11", "4,7,12", "4,8,12", "4,9,1", "5,6,11", "5,7,13", "5,8,181", "5,9,1", "6,7,11", "6,8,11", "6,9,1", "7,8,13", "7,9,1", "8,9,1"};
    int numberOfBoxes = 9;
    int ithBox = 9;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> queries = {"1,2,8", "1,3,7", "1,4,6", "1,5,5", "1,6,4", "1,7,3", "1,8,2", "1,9,1", "2,3,7", "2,4,6", "2,5,5", "2,6,4", "2,7,3", "2,8,2", "2,9,1", "3,4,6", "3,5,5", "3,6,4", "3,7,3", "3,8,2", "3,9,1", "4,5,5", "4,6,4", "4,7,3", "4,8,2", "4,9,1", "5,6,4", "5,7,3", "5,8,2", "5,9,1", "6,7,3", "6,8,2", "6,9,1", "7,8,2", "7,9,1", "8,9,1"};
    int numberOfBoxes = 9;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> queries = {"1,3,9", "1,2,31", "1,4,31", "2,4,32", "3,4,9", "3,2,9"};
    int numberOfBoxes = 4;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> queries = {"2,3,20", "2,1,10", "3,1,10"};
    int numberOfBoxes = 3;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> queries = {"1,2,20", "1,3,10", "2,3,10"};
    int numberOfBoxes = 3;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> queries = {"1,2,5", "1,3,10", "1,4,10", "2,3,5", "2,4,5", "3,4,20"};
    int numberOfBoxes = 4;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> queries = {"1,02,10", "2,3,010", "1,3,20"};
    int numberOfBoxes = 3;
    int ithBox = 2;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> queries = {"1,4,380", "2,4,250", "3,4,140", "1,2,250", "1,3,140", "3,2,140"};
    int numberOfBoxes = 4;
    int ithBox = 2;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> queries = {"1,2,31", "1,4,31", "1,3,9", "2,4,32", "3,4,9", "3,2,9"};
    int numberOfBoxes = 4;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> queries = {"2,1,10", "3,1,10", "2,3,20"};
    int numberOfBoxes = 3;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> queries = {"1,2,266", "1,3,95", "1,4,30", "1,5,191", "2,3,95", "2,4,30", "2,5,191", "3,4,30", "3,5,95", "4,5,30"};
    int numberOfBoxes = 5;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> queries = {"4,1,10", "4,2,10", "4,3,10", "3,1,20", "3,2,20", "2,1,30"};
    int numberOfBoxes = 4;
    int ithBox = 3;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> queries = {"1,4,15", "3,4,20", "1,3,15", "3,2,10", "2,4,10", "1,2,10"};
    int numberOfBoxes = 4;
    int ithBox = 1;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> queries = {"1,2,10", "1,3,10", "1,4,10", "2,3,20", "2,4,20", "3,4,30"};
    int numberOfBoxes = 4;
    int ithBox = 2;
    VolumeGuess* pObj = new VolumeGuess();
    clock_t start = clock();
    int result = pObj->correctVolume(queries, numberOfBoxes, ithBox);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}



int main(int argc, char* argv[]) {
    int passed = 0;
    int failed = 0;
    test0() == 0 ? ++passed : ++failed;
    test1() == 0 ? ++passed : ++failed;
    test2() == 0 ? ++passed : ++failed;
    test3() == 0 ? ++passed : ++failed;
    test4() == 0 ? ++passed : ++failed;
    test5() == 0 ? ++passed : ++failed;
    test6() == 0 ? ++passed : ++failed;
    test7() == 0 ? ++passed : ++failed;
    test8() == 0 ? ++passed : ++failed;
    test9() == 0 ? ++passed : ++failed;
    test10() == 0 ? ++passed : ++failed;
    test11() == 0 ? ++passed : ++failed;
    test12() == 0 ? ++passed : ++failed;
    test13() == 0 ? ++passed : ++failed;
    test14() == 0 ? ++passed : ++failed;
    test15() == 0 ? ++passed : ++failed;
    test16() == 0 ? ++passed : ++failed;
    test17() == 0 ? ++passed : ++failed;
    test18() == 0 ? ++passed : ++failed;
    test19() == 0 ? ++passed : ++failed;
    test20() == 0 ? ++passed : ++failed;
    test21() == 0 ? ++passed : ++failed;
    test22() == 0 ? ++passed : ++failed;
    test23() == 0 ? ++passed : ++failed;
    test24() == 0 ? ++passed : ++failed;
    test25() == 0 ? ++passed : ++failed;
    test26() == 0 ? ++passed : ++failed;
    test27() == 0 ? ++passed : ++failed;
    test28() == 0 ? ++passed : ++failed;
    test29() == 0 ? ++passed : ++failed;
    test30() == 0 ? ++passed : ++failed;
    test31() == 0 ? ++passed : ++failed;
    test32() == 0 ? ++passed : ++failed;
    test33() == 0 ? ++passed : ++failed;
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    test36() == 0 ? ++passed : ++failed;
    test37() == 0 ? ++passed : ++failed;
    test38() == 0 ? ++passed : ++failed;
    test39() == 0 ? ++passed : ++failed;
    test40() == 0 ? ++passed : ++failed;
    test41() == 0 ? ++passed : ++failed;
    test42() == 0 ? ++passed : ++failed;
    test43() == 0 ? ++passed : ++failed;
    test44() == 0 ? ++passed : ++failed;
    test45() == 0 ? ++passed : ++failed;
    test46() == 0 ? ++passed : ++failed;
    test47() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4775&pm=2330
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
vector<int> tokint(string s, string ch) { 
  vector<int> ret; 
  vector<string> p = tokenize(s, ch); 
  for( int i = 0; i < p.size(); i++ ) 
    ret.push_back( atoi(p[i].c_str()) ); 
  return ret; 
} 
 
class VolumeGuess { 
public: 
int correctVolume(vector <string> a, int b, int c) { 
  int i, j, k, x, y, z, n; 
  int ret; 
 
  VI s; 
  VVI t; 
  for( i = 0; i < a.size(); i++ ) { 
    t.push_back(tokint(a[i], ",")); 
    s.push_back(t.back()[2]); 
  } 
  sort(s.begin(), s.end()); 
  s.erase(unique(s.begin(), s.end()), s.end()); 
  while( s.size() < b ) s.push_back(1000); 
  do { 
    for( i = 0; i < t.size(); i++ ) { 
      x = t[i][0]-1; y = t[i][1]-1; 
      if( s[x] == t[i][2] && s[y] > t[i][2] ) continue; 
      if( s[y] == t[i][2] && s[x] > t[i][2] ) continue; 
      break; 
    } 
    if( i == t.size() ) break; 
  } while( next_permutation(s.begin(), s.end()) ); 
  return s[c-1]; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/