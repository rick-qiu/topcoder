/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6779
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

class ExtendedDominoes {
public:
    long countCycles(vector<string> pieces);
};

long ExtendedDominoes::countCycles(vector<string> pieces) {
    long ret;
    return ret;
}


int test0() {
    vector<string> pieces = {"12", "25", "45", "24", "28", "18"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> pieces = {"01", "12", "23", "34", "45"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> pieces = {"09", "12", "24", "14", "57", "79", "05"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> pieces = {"34", "35", "36", "37", "45", "46", "47", "56", "57", "67"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 243;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> pieces = {"09"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> pieces = {"36", "18"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> pieces = {"16", "12", "26"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> pieces = {"57", "69", "12", "08", "39", "35", "07", "46", "18", "24"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> pieces = {"12", "23", "13", "14", "24", "34"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> pieces = {"12", "23", "13", "14", "24", "34", "45", "15"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> pieces = {"24", "26", "48", "17", "58", "05", "16", "45", "13", "89", "59", "79", "18", "38", "47", "67", "46", "36", "03", "02", "28", "01", "09", "57", "56", "06", "78", "29", "15", "12", "39", "34", "14", "07", "49", "19", "04", "08", "23", "25", "37", "68", "27", "35", "69"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> pieces = {"69", "48", "17", "79", "13", "19", "49", "37", "39"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> pieces = {"58", "28", "45", "18", "48", "37", "39", "05", "23", "01", "35", "03", "02", "19", "13", "07", "89", "38", "47", "17", "08", "12", "68", "57", "24", "56", "34", "14", "49", "16", "59", "25", "78", "04"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> pieces = {"34", "67", "07", "89", "16", "58", "26", "25", "35", "23", "49", "15", "13", "01", "12", "45", "24", "78", "19", "02", "69", "29", "79", "68", "57", "14", "38", "56", "39", "36", "59", "06", "37", "46", "03", "27", "05", "17", "09"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> pieces = {"28", "19", "79", "69", "89", "37", "04", "58", "49", "27", "46", "24", "13", "68", "78", "57", "23", "03", "06", "01", "39", "08", "29", "25"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> pieces = {"25", "16", "36", "24", "13", "27", "17", "09", "04", "29", "14", "48", "58", "05", "79", "18", "68", "38", "03", "59", "02", "07", "57", "08", "06", "15", "49", "37", "26", "19", "28", "46", "47", "39", "69", "35"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> pieces = {"08", "29", "35", "09", "06", "47", "04", "79", "68", "26", "36", "48", "69", "39", "18", "28", "03", "13", "57", "07", "15", "25", "58", "19", "24", "38", "16", "49", "27", "02", "37", "14", "05", "59", "46", "17"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> pieces = {"05", "68", "24", "57", "69", "49", "26", "56", "34", "36", "23", "78", "46", "18", "37", "13", "12", "08", "47", "14", "35", "06", "27", "79", "07", "16", "17", "59", "45", "19", "25", "38", "15", "09", "04", "28", "29", "39"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3324274748525390625;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> pieces = {"58", "05", "68", "24", "57", "69", "49", "26", "56", "34", "36", "23", "78", "46", "18", "37", "13", "12", "47", "14", "35", "06", "27", "79", "07", "16", "17", "59", "48", "19", "25", "38", "15", "89", "04", "28", "29", "39"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 4653984647935546875;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> pieces = {"58", "18", "39", "36", "25", "13", "19", "14", "26", "06", "57", "78", "59", "29", "47", "56", "16", "12", "04", "79", "46", "49", "34", "35", "02", "15", "03", "68", "69", "17", "24", "28", "27", "89", "48", "05", "07", "38"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> pieces = {"19", "25", "24", "29", "02", "59", "08", "46", "03", "06", "49", "38", "16", "05", "28", "36", "26", "04", "56", "17", "69", "35", "09", "37", "14", "48", "13", "57", "47", "27", "15", "58", "45", "07", "34", "18", "68", "78", "39", "12", "79"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> pieces = {"19", "49", "03", "39", "59", "17", "45", "04", "06", "07", "16", "58", "09", "47", "46", "48", "36", "68", "13", "57", "38", "08", "01", "78", "25", "23", "05", "69", "14", "89", "12", "34", "28", "67", "37", "15", "79", "56"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 4653984647935546875;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> pieces = {"18", "47", "59", "58", "39", "13", "16", "89", "46", "45", "26", "12", "07", "05", "23", "49", "48", "37", "36", "17", "29", "34", "78", "14", "79", "69", "35", "56", "08", "27", "25", "24", "28", "15", "68", "03", "19", "67"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 4653984647935546875;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> pieces = {"27", "04", "15", "16", "25", "08", "13", "45", "48", "14", "36", "26", "46", "18", "34", "37", "68", "89", "17", "24", "01", "29", "38", "56", "23", "03", "57", "05", "78", "67", "58", "59", "12", "07", "39", "06", "47", "02"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 4653984647935546875;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> pieces = {"27", "06", "57", "49", "78", "05", "03", "34", "38", "09", "28", "36", "35", "46", "69", "25", "45", "59", "58", "48", "08", "89"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> pieces = {"12", "19", "38", "48", "23", "46", "01", "04", "03", "28", "27", "45", "13", "47", "89", "17", "67", "78", "35", "68", "49", "79", "36", "14", "59", "37", "16", "08", "39", "26", "24", "02", "15", "07", "29", "56", "58", "69"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3324274748525390625;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> pieces = {"48", "56", "25", "78", "06", "17", "19", "68", "14", "49", "07", "79", "18", "03", "37", "12", "27", "29", "05", "39", "38", "47", "58", "04", "15", "02", "28", "08", "35", "23", "69", "16", "57", "36", "13", "59", "09", "24"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3324274748525390625;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> pieces = {"03", "07", "34", "06", "17", "29", "49", "69", "13", "59", "57", "25", "15", "67", "26", "28", "16", "68", "48", "39", "23", "08", "19", "12", "79", "37", "36", "05", "45", "18", "27", "58", "89", "02", "78", "35", "14", "46"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3324274748525390625;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> pieces = {"28", "68", "58", "69", "17", "34", "49", "09", "56", "46", "24", "48", "23", "89", "27", "57", "06", "39", "19", "12", "67", "29", "38", "15", "01", "37", "07", "13", "26", "25", "14", "18", "08", "45", "35", "59", "36", "04"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3324274748525390625;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> pieces = {"45", "05", "67", "49", "47", "12", "03", "57", "26", "48", "37", "68", "29", "36", "56", "46", "69", "04", "13", "58", "01", "78", "16", "38", "09", "79", "59", "08", "27", "14", "24", "17", "15", "25", "89", "23", "28", "19"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3324274748525390625;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> pieces = {"09", "28", "05", "18", "04", "27", "23", "24", "39", "67", "16", "48", "46", "36", "07", "25", "45", "47", "38", "58", "08", "35", "49", "89", "06", "17", "29", "14", "59", "37", "01", "57", "02", "12", "68", "19", "15", "79"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3324274748525390625;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> pieces = {"23", "78", "25", "03", "01", "58", "17"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> pieces = {"46", "56", "17", "37", "12", "07", "05", "26", "15", "34", "68", "48", "08", "49", "57", "01", "89"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 2187;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> pieces = {"25", "06", "67", "14", "24", "09", "08", "05", "16", "59", "13", "03", "58", "49", "79", "04", "69", "48", "19", "38", "46", "36"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 4100625;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> pieces = {"67", "07", "18", "46", "69", "68", "01", "09", "35", "78", "14", "05", "58", "34", "49", "59", "38", "79", "37", "89", "17"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 2460375;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> pieces = {"24", "79", "25", "16", "39", "12", "34", "28", "67", "17", "27", "15", "18", "13", "23"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 2025;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> pieces = {"23", "48", "68", "37", "47", "58", "27", "57", "26", "38", "39", "34", "35", "59", "45", "25"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 18225;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> pieces = {"37", "78", "34", "14", "27", "28", "38", "17", "68", "56", "03", "79", "09", "57"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 135;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> pieces = {"58", "16", "29", "23", "12", "56", "19", "13", "08", "05", "47", "27", "45"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> pieces = {"24", "37", "04", "58", "69", "15", "25", "35", "01", "79", "08", "06"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> pieces = {"08", "47", "15", "37", "19", "57", "02", "78", "49", "18", "58", "35", "12"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 81;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> pieces = {"13", "15", "05", "35", "39", "79", "78", "36", "56", "08"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> pieces = {"19", "02", "23", "57", "09", "69", "25", "06", "59", "04", "05", "36", "16", "03", "12", "37", "14"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 10935;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> pieces = {"47", "67", "17", "19", "48", "39", "45", "04", "37", "06", "14", "05", "18", "12", "57", "01", "07", "59", "02", "49"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 455625;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> pieces = {"89", "16", "05", "13", "08", "38", "47", "26", "36", "19", "12", "17", "48", "37", "34", "28", "14", "49", "02", "39", "68", "57", "06", "46"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 61509375;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> pieces = {"49", "69", "57", "24", "07", "79", "27", "68", "35", "38", "09"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> pieces = {"02", "18", "25", "08", "14", "48", "49", "38", "47", "34", "45", "01", "23", "28", "13", "36", "68", "03", "79"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 91125;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> pieces = {"01", "24", "39", "79", "08", "17", "78", "04", "13", "68", "19", "06", "67", "48", "14", "69", "12"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 10935;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> pieces = {"49", "48", "47", "16", "67", "69", "57", "46", "34", "08", "35", "37", "04", "03", "89", "59", "58", "01"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 32805;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> pieces = {"89", "56", "34", "26", "37", "13", "08", "25", "59", "14", "15", "09", "01", "48", "29", "69", "18", "78", "07", "47", "35", "28", "17", "06", "58", "38", "39", "05", "57"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 226046953125;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> pieces = {"45", "23", "69", "39", "67", "27", "36", "34", "25", "18", "38", "68", "78", "89", "46", "26", "37", "49", "48", "14"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1366875;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> pieces = {"18", "58", "29", "37", "17", "39", "46", "36", "09", "14", "68", "78", "25", "79", "24", "04", "89", "59", "12", "02", "56", "48", "35", "49", "27", "45", "07", "69", "47", "67"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1582328671875;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> pieces = {"13", "57", "25", "27", "28", "34", "59", "18", "45", "02", "08", "47", "01", "89", "17", "58", "35", "05", "04", "14", "12", "78", "19", "48", "38", "15", "07", "29"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 527442890625;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> pieces = {"12", "29", "05", "03", "37", "49", "67", "56", "26", "18", "07", "06", "14", "24", "47", "27", "39", "23", "69", "19", "79", "68"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 4100625;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> pieces = {"18", "38", "15", "58", "39", "67", "35", "23", "04", "19", "89", "01", "49", "05", "24", "29", "03", "78", "45", "69", "59", "37", "09", "27", "48", "47", "06", "07", "26", "02"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1130234765625;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> pieces = {"47", "08", "05", "39", "34", "07", "56", "01", "36", "27", "35", "58", "59", "57", "12"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 405;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> pieces = {"49", "47", "67", "79", "18", "69", "58", "17", "89", "46", "48", "59", "15", "19", "56"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 10935;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> pieces = {"79", "38", "48", "06", "25", "46", "14", "17", "89", "01", "67", "05", "47", "28", "16", "03"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 729;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> pieces = {"45", "07", "47", "14", "25", "69", "09", "78", "23", "05", "19", "06", "89", "58", "57", "67", "37", "08", "49", "17", "68", "18", "15", "01", "79"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 717609375;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> pieces = {"38", "79", "35", "06", "04", "68", "36", "57", "15", "34", "59", "39", "37", "16", "67", "09", "13", "47", "03", "46", "17"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 5740875;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> pieces = {"35", "46", "26", "24", "34", "27", "59", "23", "48", "25", "08", "69", "45", "47", "49", "02", "05", "07", "14", "15", "67", "56", "16", "03", "06", "38", "57", "37", "18", "36", "39"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 11076300703125;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> pieces = {"29", "56", "06", "37", "17", "14", "57", "04", "03", "79", "12", "27", "34", "05", "78", "35", "23", "18", "01", "59", "67", "49", "07", "58", "25", "16", "19", "24", "89", "45", "13"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 7911643359375;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> pieces = {"16", "38", "39", "34", "28", "08", "89", "12", "46", "24", "23", "78", "68", "69", "49", "67", "03", "27", "02", "48", "36", "17", "18", "56", "04", "25", "26"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 21097715625;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> pieces = {"09", "14", "58", "07", "35", "34", "01", "59", "45", "18", "13", "38", "29", "02", "03", "25", "47", "78", "89", "79", "05", "57", "28", "23", "15", "12", "19", "17"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 376744921875;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> pieces = {"49", "27", "39", "15", "16", "14", "13", "58", "25", "23", "26", "19", "45", "09", "78", "29", "05", "28", "34", "46", "01", "89", "56", "04"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 61509375;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> pieces = {"08", "68", "35", "69", "07", "79", "16", "26", "49", "57", "46", "56", "59", "67", "13", "39", "36", "02", "37", "17", "09", "05", "03", "15"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 239203125;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> pieces = {"27", "78", "28", "17", "18", "48", "47"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> pieces = {"24", "58", "12", "67", "37", "15", "48", "13", "03", "57", "16", "36", "38", "34", "07", "49", "35", "23", "14", "26", "02", "27", "06", "68", "47", "19"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 2152828125;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> pieces = {"35", "39", "29", "56", "36", "89", "16", "27", "15", "69", "46", "28", "05", "01", "03", "02", "06"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> pieces = {"24", "69", "67", "14", "49", "25", "18", "28", "46", "47", "13", "15", "58", "07", "19", "06", "17", "12", "16", "02", "27", "34", "08", "26", "57", "23", "78"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> pieces = {"38", "14", "18", "08", "67", "26", "23", "48", "36", "02", "37", "49", "04", "46", "12", "47", "16", "45", "58", "79", "24", "28", "29", "39", "78", "89", "34", "27", "25", "35", "57", "15", "13", "69", "19", "17"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> pieces = {"29", "12", "35", "08", "58", "37", "78", "03", "47", "67", "38", "36", "59", "56", "57", "48", "04", "05"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> pieces = {"19", "34", "02", "12", "56", "26", "17", "45", "07", "04", "57", "46", "16", "03", "79", "05", "78", "18", "29", "09"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> pieces = {"45", "06", "16", "69", "04", "36", "27", "24", "56", "67", "09", "46", "03"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> pieces = {"19", "38", "37", "39", "46", "13", "78", "68", "67", "79", "25", "18", "48", "69", "36", "03", "06", "89", "49", "14"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> pieces = {"35", "26", "08", "13", "15", "38", "39", "56", "09", "19", "02", "48", "03", "49", "07", "23", "37", "24", "04", "46", "06", "05", "34", "57", "01", "59", "89"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> pieces = {"06", "17", "05", "89", "03", "47", "59", "27", "35", "01", "48", "78", "49", "67", "58", "45", "39", "09", "07", "68", "56", "28"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> pieces = {"69", "15", "29", "45", "18", "28", "37", "07", "14", "05", "57", "24", "19", "17", "09", "08", "68", "12", "26", "89", "03", "34", "78", "39", "16", "04", "58", "27", "79", "67", "02", "36", "59", "23", "48", "01", "06"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> pieces = {"58", "23", "01", "57", "45", "68", "46", "28", "04", "69", "16", "13", "79", "03", "26", "59", "78", "39", "25", "38", "07", "36", "48", "18", "08", "17", "35", "09", "06", "15", "56", "89", "37", "05"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> pieces = {"26", "17", "03", "06", "58", "02", "08", "67", "28", "68", "25", "07", "05", "01", "13", "79", "09", "46", "27", "16", "15", "23", "34", "78", "18"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 717609375;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> pieces = {"37", "19", "24", "38", "35", "39", "15", "45", "27", "47", "29", "56", "68", "08", "89", "14", "13", "28", "01", "36", "09", "49", "17", "18", "12", "34", "26", "03"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 45209390625;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> pieces = {"08", "29", "06", "23", "16", "34", "17", "46", "03", "89", "15", "68", "56", "25", "67", "47", "69", "26", "12", "14", "78", "49", "58", "04", "01", "38", "57", "05", "19", "48", "09", "02", "24", "18", "27"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 13568468361328125;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> pieces = {"01", "02", "12", "03", "13", "23", "04", "14", "24", "34", "05", "15", "25", "35", "45", "06", "16", "26", "36", "46", "56", "07", "17", "27", "37", "47", "57", "67", "08", "18", "28", "38", "48", "58", "68", "78"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1551328215978515625;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> pieces = {"12", "13", "14", "15", "16", "17", "18", "19", "23", "24", "25", "26", "27", "28", "29", "34", "35", "36", "37", "38", "39", "45", "46", "47", "48", "49", "56", "57", "58", "59", "67", "68", "69", "78", "79", "89"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1551328215978515625;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> pieces = {"12", "13", "14", "15", "16", "17", "23", "24", "25", "26", "27", "34", "35", "36", "37", "45", "46", "47", "56", "57", "67", "09", "89", "08"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 170859375;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> pieces = {"01", "12", "02", "03", "04", "34", "05", "06", "56"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> pieces = {"01", "02", "03", "04", "05", "06", "12", "34", "56"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> pieces = {"01", "02", "03", "04", "05", "06", "07", "08", "12", "13", "14", "15", "16", "17", "18", "23", "24", "25", "26", "27", "28", "34", "35", "36", "37", "38", "45", "46", "47", "48", "56", "57", "58", "67", "68", "78"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1551328215978515625;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> pieces = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "12", "13", "14", "15", "16", "17", "18", "19", "23", "24", "25", "26", "27", "28", "29", "34", "35", "36", "37", "38", "39", "45", "46", "47", "48", "49", "56", "57", "58", "59", "67", "68", "69", "78", "79", "89"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> pieces = {"34", "35", "36", "37", "45", "46", "47", "56", "57", "67", "16", "17", "26", "27"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 6075;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> pieces = {"01", "02", "03", "04", "05", "06", "07", "08", "12", "34", "56", "78"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 105;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> pieces = {"01", "18", "08", "12", "23", "13", "14", "45", "15"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> pieces = {"01", "02", "03", "04", "12", "34", "05", "06", "56"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> pieces = {"01", "12", "02", "13", "34", "04", "05", "15", "18", "89", "19"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> pieces = {"01", "02", "03", "12", "13", "23"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> pieces = {"34", "35", "36", "37", "45", "46", "47", "56", "57", "67"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 243;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> pieces = {"01", "02", "03", "04", "05", "06", "12", "13", "14", "15", "16", "23", "24", "25", "26", "34", "35", "36", "45", "46", "56"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 170859375;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> pieces = {"01", "02", "03", "04", "05", "06", "07", "08", "12", "13", "14", "15", "16", "17", "18", "24", "25", "26", "27", "28", "34", "35", "36", "37", "38", "45", "46", "47", "48", "56", "57", "58", "67", "68", "79", "89", "29", "39"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 4653984647935546875;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> pieces = {"12", "13", "14", "15", "16", "17", "01", "19", "02", "03", "04", "05", "06", "07", "09", "23", "24", "25", "26", "27", "29", "34", "35", "36", "37", "39", "45", "46", "47", "49", "56", "57", "59", "67", "69", "79"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 1551328215978515625;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> pieces = {"01", "02", "03", "04", "05", "06", "12", "13", "14", "15", "16", "17", "18", "23", "24", "25", "26", "27", "28", "34", "35", "36", "37", "38", "45", "46", "47", "48", "56", "57", "58", "67", "68"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 4522822787109375;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> pieces = {"12", "23", "13", "34", "24"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> pieces = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "12", "13", "14", "15", "16", "17", "18", "19", "23", "24", "25", "26", "27", "28", "29", "34", "35", "36", "37", "38", "39", "45", "46", "47", "48", "49", "56", "57", "58", "59", "67", "68", "69", "78"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> pieces = {"19", "29", "13", "39", "24", "49"};
    ExtendedDominoes* pObj = new ExtendedDominoes();
    clock_t start = clock();
    long result = pObj->countCycles(pieces);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test48() == 0 ? ++passed : ++failed;
    test49() == 0 ? ++passed : ++failed;
    test50() == 0 ? ++passed : ++failed;
    test51() == 0 ? ++passed : ++failed;
    test52() == 0 ? ++passed : ++failed;
    test53() == 0 ? ++passed : ++failed;
    test54() == 0 ? ++passed : ++failed;
    test55() == 0 ? ++passed : ++failed;
    test56() == 0 ? ++passed : ++failed;
    test57() == 0 ? ++passed : ++failed;
    test58() == 0 ? ++passed : ++failed;
    test59() == 0 ? ++passed : ++failed;
    test60() == 0 ? ++passed : ++failed;
    test61() == 0 ? ++passed : ++failed;
    test62() == 0 ? ++passed : ++failed;
    test63() == 0 ? ++passed : ++failed;
    test64() == 0 ? ++passed : ++failed;
    test65() == 0 ? ++passed : ++failed;
    test66() == 0 ? ++passed : ++failed;
    test67() == 0 ? ++passed : ++failed;
    test68() == 0 ? ++passed : ++failed;
    test69() == 0 ? ++passed : ++failed;
    test70() == 0 ? ++passed : ++failed;
    test71() == 0 ? ++passed : ++failed;
    test72() == 0 ? ++passed : ++failed;
    test73() == 0 ? ++passed : ++failed;
    test74() == 0 ? ++passed : ++failed;
    test75() == 0 ? ++passed : ++failed;
    test76() == 0 ? ++passed : ++failed;
    test77() == 0 ? ++passed : ++failed;
    test78() == 0 ? ++passed : ++failed;
    test79() == 0 ? ++passed : ++failed;
    test80() == 0 ? ++passed : ++failed;
    test81() == 0 ? ++passed : ++failed;
    test82() == 0 ? ++passed : ++failed;
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=10002&pm=6779
********************************************************************************
// my submission accuracy is quite low recently, don't be afraid to challenge me 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
 
#define LS < 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
// execute "act", and return "val" as an expression result 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// Standard mathematical quantifiers, plus tools to implement them 
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); ++k) {act;}, R##k) 
#define PRODTO(k,a,b,init,x) FOLD0(k,a,b,init,R##k *= (x)) 
#define PROD(k,a,b,x) PRODTO(k,a,b,(typeof(x)) (1), x) 
 
#line 3 "ExtendedDominoes.cc" 
 
class ExtendedDominoes { 
  public: 
  long long countCycles(vector <string> pieces) { 
    // !FDI 
    int cnt[10]; 
    FOR(k,0,10) cnt[k] = 0; 
    FOR(t,0,Size(pieces)) FOR(u,0,2) cnt[pieces[t][u]-'0']++; 
    ll vals[20]; 
    vals[0] = 1; vals[1] = 0; 
    FOR(k,2,20) vals[k] = (k-1) * vals[k-2]; 
    return PROD(k,0,10, vals[cnt[k]]); 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/