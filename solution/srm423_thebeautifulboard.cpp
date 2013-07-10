/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9975
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

class TheBeautifulBoard {
public:
    int count(int n, vector<int> checkers);
};

int TheBeautifulBoard::count(int n, vector<int> checkers) {
    int ret;
    return ret;
}


int test0() {
    int n = 1;
    vector<int> checkers = {1};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    vector<int> checkers = {1, 2};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 3;
    vector<int> checkers = {1, 1};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 3;
    vector<int> checkers = {4, 2, 1, 3};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 3;
    vector<int> checkers = {8};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 8;
    vector<int> checkers = {7, 1, 7, 9, 7};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 273516664;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 7;
    vector<int> checkers = {7, 10, 6, 3, 1, 3, 9, 6, 9};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 3;
    vector<int> checkers = {2};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 7;
    vector<int> checkers = {6};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 3496460;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 3;
    vector<int> checkers = {1};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 1317;
    vector<int> checkers = {6357, 4125, 7369, 8226, 6388, 3852, 7291, 8573, 7165, 6007, 8545, 4437, 2611, 6523, 4799, 8529, 1434, 1291, 8134, 3227, 3873, 1252, 2605};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1053771190;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 1294;
    vector<int> checkers = {8784, 3744, 2563, 4061, 2981, 7529, 4681, 4073, 1031, 4811, 8501, 6607, 3365, 1868};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 891735101;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 1191;
    vector<int> checkers = {6217, 1749, 7417, 1199, 8907, 6677, 5590, 3796, 8463, 3721, 7963, 8779, 1646, 7529, 4831, 7222, 2665, 6941, 5397};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 127671729;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 1936;
    vector<int> checkers = {6613, 5501, 3285, 8381, 8438, 2360, 1160, 8400, 2006, 8423, 4949, 4213, 4181, 7385};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 526406884;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 1090;
    vector<int> checkers = {7191, 3089, 8685, 8396, 5701, 6277, 6481, 1517, 7253, 8313, 3255, 2948, 3085};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 240405338;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 1853;
    vector<int> checkers = {2105, 1985, 7748, 2271, 3883, 2345, 3686, 2401, 2565, 8795, 2793, 7997, 3279, 2576, 3900, 1002, 3943, 2601, 2045, 2681, 1239, 5023};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 592636366;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 1478;
    vector<int> checkers = {6097, 1803, 5831, 4979, 6721, 1717, 5069, 7961, 4889, 5733, 1876};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 246200081;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 1375;
    vector<int> checkers = {5239, 4623, 6680, 2133, 2989, 4401, 7001, 2608, 7369, 7390};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 575458404;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 1277;
    vector<int> checkers = {8871, 4489, 7070, 4425, 5027, 7270, 5105, 7657, 5876, 6267, 3793, 3701, 4655, 7798, 5885, 8424, 3914, 5835, 5636};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 518694500;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 1940;
    vector<int> checkers = {2617, 5971, 8915, 6037, 2719, 4116, 1806, 1897, 4241, 8629};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 242504785;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 100000;
    vector<int> checkers = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 209300721;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 2000;
    vector<int> checkers = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 708076215;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 2000;
    vector<int> checkers = {1, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 51001;
    vector<int> checkers = {13357, 71125, 98369, 67226, 49388, 90852, 66291, 39573, 38165, 97007, 15545, 51437, 89611, 41523, 27799, 15529, 16434, 44291, 47134, 90227, 26873, 52252, 41605, 21269, 9135, 55784, 70744, 17563, 79061, 73981, 70529, 35681, 91073, 52031, 23811, 79501, 1607, 46365, 76868, 72137, 71041, 29217, 96749, 46417, 40199, 55907, 57677, 68590, 78796, 83463};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1146701227;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 30963;
    vector<int> checkers = {31779, 28646, 94529, 47831, 98222, 61665, 73941, 24397, 66286, 2971, 81613, 52501, 26285, 3381, 51438, 45360, 20160, 59400, 45006, 95423, 19949, 3213, 3181, 34385, 31901, 51111, 10191, 14089, 95685, 11396, 8701, 33277, 1481, 517, 46253, 51313, 2255, 5948, 66085, 37201, 65310, 21105, 60985, 10748, 89271, 42883, 77345};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 658047887;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 29401;
    vector<int> checkers = {73565, 47795, 13793, 66997, 70279, 49576, 62900, 40002, 70943, 89601, 65045, 1681, 28239, 12023, 40414, 89585, 69097, 92803, 60831, 67979, 25721, 4717, 76069, 74961, 47889, 4733, 72876, 21399, 63105, 48239, 15623, 9680, 89133, 57989, 63401, 26001, 29608, 42369, 82390, 32866, 46171, 11871, 67489, 54070, 23425, 80027, 18270, 28105};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1046824990;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 40876;
    vector<int> checkers = {29267, 78793, 18701, 7655, 94798, 88885, 71424, 86914, 44835, 76636, 11553, 46031, 13617, 16971, 51915, 33037, 53719, 43116, 52806, 56897, 71241, 11629, 2119, 62373, 93265, 69513, 5770, 90751, 36619, 60997, 34189, 74073, 4541, 79506, 15219, 70429, 91025, 85236, 27579, 82251, 69479, 24737, 87917, 15149, 52311, 59640, 74687};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 864703256;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 20;
    vector<int> checkers = {7, 7, 7, 8, 10, 10, 9, 7, 7, 9, 7, 7, 9, 9, 9, 7, 8, 9, 8, 9, 7, 10, 7, 7, 9, 10, 10, 9, 7, 7, 7, 7, 7, 9, 9, 7, 9, 7, 10, 7, 7, 7, 7, 7, 9, 9, 7, 8, 10, 9};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 22;
    vector<int> checkers = {9, 8, 7, 9, 8, 7, 7, 7, 8, 9, 7, 7, 7, 7, 8, 10, 10, 10, 8, 9, 7, 7, 7, 7, 7, 9, 9, 7, 7, 10, 7, 7, 7, 7, 7, 7, 9, 10, 7, 7, 8, 7, 7, 10, 9, 9, 7};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1209050429;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 20;
    vector<int> checkers = {7, 9, 7, 7, 9, 10, 10, 8, 9, 7, 7, 7, 9, 9, 8, 7, 7, 9, 9, 9, 7, 7, 7, 7, 7, 7, 10, 9, 7, 9, 9, 10, 7, 7, 7, 7, 10, 7, 8, 8, 9, 9, 7, 8, 7, 9, 8, 7};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 278802183;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 35;
    vector<int> checkers = {9, 7, 7, 9, 8, 7, 10, 8, 9, 10, 7, 9, 7, 9, 9, 7, 9, 10, 8, 7, 7, 7, 9, 7, 7, 7, 8, 9, 9, 7, 7, 7, 7, 8, 9, 7, 7, 10, 9, 9, 9, 7, 7, 7, 9, 10, 9};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 153676531;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 24;
    vector<int> checkers = {7, 7, 10, 9, 10, 7, 7, 8, 7, 8, 10, 7, 7, 7, 7, 9, 7, 10, 7, 7, 9, 7, 7, 10, 7, 7, 9, 9, 7, 7, 7, 7, 7, 9, 9, 7, 9, 7, 7, 10, 9, 10, 7, 7, 7, 7, 8, 10, 7};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 512201466;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 91000;
    vector<int> checkers = {43500, 4828, 64332, 83280, 88564, 91336, 69864, 42196, 85468, 97060, 15908, 84040, 28844, 53356, 44844, 19252, 83940, 61144, 15488, 85240, 35116, 63928, 61008, 91892, 16140, 81548, 79240, 19708, 82796, 78064, 71392, 43764, 34708, 17376, 34504, 16916, 48280, 55020, 1652, 20200, 93244, 32880, 33404, 1392, 68084, 67832};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 839556922;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 98588;
    vector<int> checkers = {93832, 97216, 73264, 34188, 2692, 43080, 45884, 51484, 39928, 70080, 5824, 41472, 21660, 39816, 86468, 55644, 63088, 8176, 45364, 65776, 39156, 88216, 58320, 26856, 64972, 19236, 39024, 82260, 34836, 54216, 21264, 70824, 9660, 22552, 17476, 65012, 11816, 11560, 9708, 99468, 6180, 5964, 39900, 39816, 66156};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 35860777;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 90984;
    vector<int> checkers = {15064, 98736, 64588, 88240, 67732, 40216, 25700, 16888, 20648, 86052, 19304, 56120, 67336, 44848, 98796, 8376, 73948, 42424, 50852, 52768, 16488, 37948, 91880, 7408, 14784, 72904, 71076, 26772, 80332, 23644, 93924, 17616, 26552, 81564, 66480, 18264, 34876, 15396, 99256, 26024, 68836, 26656};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 596303589;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 91000;
    vector<int> checkers = {43500, 4828, 64332, 83280, 88564, 91336, 69864, 42196, 85468, 97060, 15908, 84040, 28844, 53356, 44844, 19252, 83940, 61144, 15488, 85240, 35116, 63928, 61011, 91892, 16140, 81548, 79240, 19708, 82796, 78064, 71392, 43764, 34708, 17376, 34504, 16916, 48280, 55020, 1652, 20200, 93244, 32880, 33404, 1392};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 670136573;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 89484;
    vector<int> checkers = {42952, 50648, 56920, 22576, 5496, 45244, 11352, 7784, 93396, 98740, 83516, 96436, 61864, 49444, 21980, 85068, 55164, 84096, 27728, 7684, 3712, 53536, 35219, 89452, 78676, 72152, 84072, 33300, 82776, 53824, 33496, 16436, 78580, 75532, 16280, 57136, 10916, 85568, 52984, 92004, 23568, 72280, 50928, 14868};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1145294208;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 85308;
    vector<int> checkers = {26660, 16408, 15064, 98736, 64588, 88240, 67732, 40216, 25700, 16888, 20648, 86052, 19304, 56120, 67336, 44848, 98796, 8376, 73948, 42424, 50853, 52768, 16488, 37948, 91880, 7408, 14784, 72904, 71076, 26772, 80332, 23644, 93924, 17616, 26552, 81564, 66480, 18264, 34876, 15396, 99256};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 697220511;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 91200;
    vector<int> checkers = {22804, 55204, 53572, 46132, 56060, 92064, 27944, 7788, 2188, 68404, 8580, 1808, 94488, 87576, 49496, 53424, 67916, 66304, 75724, 54244, 38636, 44676, 38092, 99404, 81560, 44732, 18684, 12596, 92292, 65160, 14372, 95604, 86632, 90160, 2240, 44820, 56292, 14724, 60688, 33840, 77052, 62332, 10704, 65108};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 411164091;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 91001;
    vector<int> checkers = {73636, 38524, 30308, 99328, 27748, 91812, 73432, 44812, 32784, 97108, 16264, 16656, 68072, 65184, 61880, 22968, 51456, 77992, 83836, 80268, 43352, 75592, 80404, 62528, 23156, 7324, 87724, 21844, 86520, 82140, 72248, 51840, 78332, 82712, 45192, 54320, 94948, 63664, 26428, 68256, 15460, 36536, 70048, 56356, 95960, 79748, 64376, 44452, 8876};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 136393700;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 90721;
    vector<int> checkers = {37404, 73600, 57508, 97228, 55132, 81624, 78484, 37700, 58536, 77028, 76652, 91312, 58780, 99884, 12960, 39300, 86180, 58140, 17040, 71628, 58284, 10008, 35252, 74860, 30144, 37760, 57312, 32332, 27568, 23624, 33696, 26240, 96736, 22140, 22596, 73152, 47632, 10096, 5968, 13724, 42420, 66992, 32204, 71824, 19368, 8212, 86284, 99124};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 373880237;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 89401;
    vector<int> checkers = {77824, 85976, 27492, 5116, 68320, 62656, 71760, 49684, 26664, 27140, 82844, 83160, 73460, 93504, 92556, 86304, 14676, 22004, 68732, 77820, 16440, 48816, 84588, 72320, 39968, 30492, 80216, 41740, 69844, 88280, 54124, 21100, 9392, 94048, 74260, 27300, 42488, 94828, 8632, 82968, 56752, 61612, 37768, 90052, 84244, 81808, 6712};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 504675823;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 71001;
    vector<int> checkers = {3808, 72224, 96280, 15408, 66928, 92292, 77000, 47432, 80096, 97156, 16624, 49268, 7332, 77012, 78920, 26688, 18996, 94840, 52216, 75316, 51592, 87264, 99804, 33190, 30196, 33096, 96216, 23984, 90252, 86220, 73108, 59920, 21992, 48080, 55880, 91732, 41648, 72316, 51208, 16348, 37672, 40196, 6728, 11356, 23868, 91668, 67728};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1079259021;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 82485;
    vector<int> checkers = {57284, 33252, 59840, 33828, 62612, 17320, 29964, 99372, 75664, 86200, 32792, 39188, 97604, 21112, 87972, 88404, 29020, 12480, 88572, 3444, 20496, 36084, 19440, 7958, 70568, 25560, 59060, 55824, 22192, 13728, 64056, 52056, 60032, 61032, 43396, 63100, 23440, 14852, 12844, 50964, 25424, 30040, 85656, 41488, 92796, 74904};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1223460328;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 92883;
    vector<int> checkers = {10044, 33836, 61832, 29984, 55096, 34344, 24176, 17368, 69196, 76192, 54524, 54524, 45912, 91744, 23932, 96068, 34272, 68656, 34696, 37468, 36604, 22712, 82740, 61802, 70868, 88848, 21032, 86008, 43372, 33916, 1940, 73216, 58328, 73372, 26812, 19524, 62108, 79692, 27952, 98928, 21088, 21752, 8048, 62040, 86480, 22940};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 266529197;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 85509;
    vector<int> checkers = {19656, 70484, 9332, 10572, 56732, 78040, 25280, 44772, 87820, 94680, 25424, 1204, 7392, 99880, 96836, 60256, 97560, 53152, 85536, 38468, 38288, 6192, 38588, 93797, 6196, 62876, 13568, 7248, 63364, 53056, 5900, 64708, 56400, 90304, 29308, 88928, 64836, 66952, 59404, 3524, 69908, 35188, 27360, 25604, 7928, 24328};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 52635200;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 75149;
    vector<int> checkers = {51972, 23212, 93108, 6820, 5096, 2272, 12852, 74392, 89280, 57408, 69604, 80476, 73604, 29508, 60396, 18336, 6224, 69164, 36560, 51440, 28584, 80792, 47916, 7734, 14092, 54172, 17732, 94140, 58228, 12756, 29548, 73976, 21764, 1284, 85024, 93788, 58780, 39500, 73412, 29660, 40604, 56824, 11856, 12264, 24088, 25960};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 817510691;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 95545;
    vector<int> checkers = {4112, 40868, 42824, 36456, 23932, 43880, 35720, 54528, 32072, 57844, 73160, 60892, 41472, 38124, 44320, 3824, 84072, 26132, 78960, 33460, 69420, 57048, 77544, 65929, 10152, 94424, 45972, 26992, 26392, 24584, 20832, 43000, 60528, 1724, 71880, 22180, 53068, 88284, 32884, 58140, 29536, 96952, 50808, 7632, 50288, 10048, 9408};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 539343932;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 82317;
    vector<int> checkers = {75104, 2668, 79816, 3300, 36428, 8704, 37348, 21456, 76520, 40256, 5536, 66800, 7352, 12252, 49180, 76408, 52560, 57196, 65712, 18704, 44108, 78784, 688, 15752, 21830, 2820, 30572, 68252, 21320, 90376, 56772, 24612, 78792, 60960, 92856, 36660, 95984, 77380, 45812, 35136, 40692, 33124, 70720, 2232, 16836, 33884, 60328, 98948};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 489259012;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 93575;
    vector<int> checkers = {83396, 34872, 55320, 57892, 89132, 19828, 58632, 32788, 33492, 40900, 77344, 53868, 96992, 41500, 37932, 62880, 98196, 71864, 26072, 32496, 66440, 53656, 25088, 60362, 40652, 82456, 31924, 51284, 55980, 40376, 93240, 91600, 52296, 60152, 1248, 63124, 50660, 10524, 50580, 25472, 83936, 55852, 14284, 46816, 67496, 51768};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 522763988;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 52679;
    vector<int> checkers = {16368, 74492, 4964, 68828, 53304, 90900, 66648, 39832, 42892, 97012, 15580, 54696, 93532, 42704, 29500, 15900, 23184, 45976, 53968, 99724, 27696, 53416, 43544, 28328, 19832, 58360, 71592, 17776, 79432, 74388, 70612, 36488, 95432, 58564, 24880, 83240, 6272, 47228, 79344, 76940, 73260, 29580, 412, 51912, 42984, 57096, 58012, 72380, 80296};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 296639480;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 52975;
    vector<int> checkers = {31284, 38868, 30088, 99660, 48196, 2392, 62504, 77128, 26104, 71820, 6652, 82096, 52812, 29964, 3860, 60828, 47400, 22056, 62280, 46336, 98564, 24448, 4812, 6764, 39172, 32192, 51420, 11296, 19760, 97080, 12508, 9576, 36448, 2512, 1620, 52596, 56128, 2644, 5948, 73464, 37460, 65392, 21660, 66524, 11176, 90216, 45052, 78432, 37988};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 807204918;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 78777;
    vector<int> checkers = {54700, 14476, 68900, 75180, 50228, 63340, 40484, 73728, 91476, 65932, 5752, 30500, 16096, 48020, 94420, 71372, 94260, 66224, 68468, 30256, 6920, 76492, 79828, 52492, 6020, 78240, 27412, 63440, 55240, 17548, 10248, 90144, 64788, 63944, 26064, 35248, 44992, 83700, 35368, 46700, 14356, 76000, 60868, 26464, 80116, 22688, 34360, 43336, 43136};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 132394342;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 52679;
    vector<int> checkers = {16370, 74494, 4964, 68830, 53304, 90900, 66648, 39834, 42894, 97012, 15580, 54696, 93532, 42706, 29502, 15900, 23184, 45976, 53968, 99726, 27696, 53418, 43544, 28330, 19834, 58360, 71592, 17776, 79434, 74388, 70614, 36488, 95434, 58564, 24880, 83240, 6274, 47230, 79344, 76942, 73260, 29582, 414, 51912, 42986, 57098, 58012, 72382, 80298};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 199105732;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 52975;
    vector<int> checkers = {31284, 38868, 30088, 99662, 48196, 2392, 62506, 77128, 26104, 71822, 6654, 82098, 52814, 29964, 3860, 60828, 47400, 22058, 62280, 46336, 98564, 24450, 4814, 6764, 39172, 32194, 51420, 11298, 19762, 97080, 12510, 9578, 36450, 2514, 1620, 52596, 56128, 2646, 5948, 73464, 37462, 65394, 21660, 66526, 11178, 90216, 45052, 78434, 37990};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1159827003;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 99999;
    vector<int> checkers = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 929675945;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 99999;
    vector<int> checkers = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 99999, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 593377908;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 100000;
    vector<int> checkers = {13357, 71125, 98369, 67226, 49388, 90852, 66291, 39573, 38165, 97007, 15545, 51437, 89611, 41523, 27799, 15529, 16434, 44291, 47134, 90227, 26873, 52252, 41605, 21269, 9135, 55784, 70744, 17563, 79061, 73981, 70529, 35681, 91073, 52031, 23811, 79501, 1607, 46365, 76868, 72137, 71041, 29217, 96749, 46417, 40199, 55907, 57677, 68590, 78796, 83463};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 993097534;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 100000;
    vector<int> checkers = {16372, 74494, 4966, 68832, 53306, 90900, 66648, 39836, 42896, 97012, 15582, 54698, 93534, 42706, 29504, 15902, 23184, 45976, 53968, 99728, 27698, 53420, 43546, 28332, 19834, 58360, 71594, 17778, 79434, 74390, 70616, 36490, 95436, 58564, 24880, 83242, 6274, 47230, 79346, 76942, 73262, 29584, 414, 51914, 42988, 57100, 58012, 72382, 80300, 84838};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 680544741;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 100000;
    vector<int> checkers = {22400, 81232, 18160, 72044, 61140, 90996, 67364, 40360, 52356, 97024, 15656, 61220, 1380, 45072, 32912, 16648, 36684, 49348, 67636, 18732, 29348, 55756, 47428, 42456, 41232, 63512, 73292, 18208, 80180, 75208, 70788, 38108, 4164, 71632, 27020, 90724, 15608, 48960, 84300, 86552, 77704, 30316, 7744, 62908, 48564, 59484, 58684, 79968, 83308, 87588};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 302445597;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 2173;
    vector<int> checkers = {93218, 97431, 92415, 91170, 90216, 90362, 92714, 96949, 90865, 96947, 95183, 98835, 90385, 99690, 90757, 91807, 98939, 97438, 98796, 95227, 98631, 90577, 92202, 90653, 92154, 90020, 92247, 95421, 95323, 99894, 99662, 97598, 97448, 96702, 93119, 92096, 94941, 97711, 92092, 94084, 98836, 95554, 90102, 91457, 92317, 93982, 94321, 90666, 93759, 99706};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 2179;
    vector<int> checkers = {90882, 94214, 93184, 94176, 96526, 93249, 92066, 97326, 90924, 96134, 96755, 99356, 99486, 98591, 97532, 94947, 91169, 90586, 91692, 93996, 94931, 97194, 97344, 96516, 98968, 98006, 99121, 97363, 91716, 90245, 99931, 91546, 91151, 99478, 92814, 93162, 98335, 95937, 92285, 94587, 94463, 95553, 95574, 96437, 99803, 91180, 96448, 91645, 98589, 91442};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 2177;
    vector<int> checkers = {97942, 91266, 93031, 98464, 95158, 93088, 90833, 96139, 90944, 95628, 91285, 94357, 91230, 96312, 98205, 96890, 93052, 90372, 92668, 91801, 96288, 91858, 91853, 99214, 91242, 99729, 98231, 96373, 93969, 99005, 99970, 97965, 95348, 93180, 96137, 99273, 97815, 90876, 97002, 92370, 96091, 93015, 99129, 94062, 95528, 95863, 98264, 93584, 91715, 94264};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 99999;
    vector<int> checkers = {93357, 91125, 98369, 97225, 99387, 90851, 96291, 99573, 98165, 97007, 95545, 91437, 99611, 91523, 97799, 95529, 96433, 94291, 97133, 90227, 96873, 92251, 91605, 91269, 99135, 95783, 90743, 97563, 99061, 93981, 90529, 95681, 91073, 92031, 93811, 99501, 91607, 96365, 96867, 92137, 91041, 99217, 96749, 96417, 90199, 95907, 97677, 98589, 98795, 93463};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 217172854;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 99999;
    vector<int> checkers = {91779, 98645, 94529, 97831, 98221, 91665, 93941, 94397, 96285, 92971, 91613, 92501, 96285, 93381, 91437, 95359, 90159, 99399, 95005, 95423, 99949, 93213, 93181, 94385, 91901, 91111, 90191, 94089, 95685, 91395, 98701, 93277, 91481, 90517, 96253, 91313, 92255, 95947, 96085, 97201, 95309, 91105, 90985, 90747, 99271, 92883, 97345, 94685, 99401, 93565};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 62948420;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 100000;
    vector<int> checkers = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 209300721;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 99999;
    vector<int> checkers = {77921, 29509, 78687, 21676, 68237, 44166, 79756, 78355, 64993, 18755, 30753, 95019, 83673, 67379, 90530, 6087, 37293, 61525, 80741, 27263, 2239, 73863, 12645, 29400, 23766, 97340, 8353, 94820, 45472, 28189, 98941, 20130, 85549, 76403, 13239, 55810, 24150, 29502, 6081, 95518, 14894, 65452, 49951, 6758, 21798, 63454, 33956, 89675, 73077, 34177};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 846934783;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 99999;
    vector<int> checkers = {89384, 30887, 92778, 36916, 47794, 38336, 85387, 60493, 16650, 41422, 2363, 90028, 68691, 20060, 97764, 13927, 80541, 83427, 89173, 55737, 5212, 95369, 2568, 56430, 65783, 21531, 22863, 65124, 74068, 3136, 13930, 79803, 34023, 23059, 33070, 98168, 61394, 18457, 75012, 78043, 76230, 77374, 84422, 44920, 13785, 98538, 75199, 94325, 98316, 64371};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 507323938;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 100000;
    vector<int> checkers = {42, 18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28251, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 456485951;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 100000;
    vector<int> checkers = {40512, 42073, 99804, 11373, 63781, 40301, 40003, 34613, 18129, 41618, 53133, 13077, 52563, 22082, 37246, 44416, 90666, 43470, 71818, 79299, 18784, 16709, 42854, 60683, 35580, 22974, 30825, 34424, 80337, 71482, 19762, 77466, 11657, 38760, 64752, 36654, 77119, 88897, 51078, 93836, 23194, 15771, 5993, 34455, 32079, 83167, 52037, 98424, 61411};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 165160647;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 99995;
    vector<int> checkers = {14296, 2002, 26714, 42250, 96738, 34452, 98776, 81704, 32582, 79146, 76330, 94014, 31090, 2874, 79222, 83046, 55598, 31058, 32868, 88582, 94268, 80454, 53746, 4504, 83210, 42538, 18270, 11568, 41488, 35126, 58122, 47962, 41058, 71362, 82146, 4062, 47622, 59002, 3214, 92730, 53736, 44274, 42082, 58434, 93498, 92834, 80398, 11814, 15354, 37180};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 1150586108;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 100000;
    vector<int> checkers = {123, 123, 546};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 928446113;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 99945;
    vector<int> checkers = {99940, 99944, 99948, 99952, 99956, 99960, 99964, 99968, 99972, 99976, 99980, 99984, 99988, 99992, 99996, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 194469694;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 99999;
    vector<int> checkers = {99997};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 441095607;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 99999;
    vector<int> checkers = {5435, 5345, 5555, 4453, 54545, 35543, 5435, 345, 345, 525, 45346, 2452, 52, 5, 6, 435, 46, 45, 354, 64, 5, 45, 643, 34, 3, 5, 6, 7, 7, 474, 6, 35, 54, 47, 1, 33, 5, 5, 5};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 98526687;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 99999;
    vector<int> checkers = {41, 67, 334, 100, 369, 124, 278, 158, 162, 64, 105, 145, 81, 27, 361, 91, 195, 342, 27, 236, 391, 204, 302, 153, 292, 382, 221, 316, 118, 295, 247, 126, 371, 338, 269, 312, 67, 299, 235, 294, 303, 211, 122, 333, 73, 264, 341, 111, 253};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 696347227;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 100000;
    vector<int> checkers = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 209300721;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 100000;
    vector<int> checkers = {12, 11};
    TheBeautifulBoard* pObj = new TheBeautifulBoard();
    clock_t start = clock();
    int result = pObj->count(n, checkers);
    clock_t end = clock();
    delete pObj;
    int expected = 512256697;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22723672&rd=13514&pm=9975
********************************************************************************
#line 5 "TheBeautifulBoard.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef pair<int,int> PII; 
 
const int module = 1234567891; 
class TheBeautifulBoard 
{ 
  public: 
 
  long long N; 
  long long fac[100005],n4; 
  vector<int> ct; 
  void Ex( long long a,long long b,long long &x,long long &y ) 
  { 
    if(b==0) 
    { 
      x=1;y=0; 
    }else 
    { 
      Ex( b,a%b,y,x ); 
      x%=b;if(x<0) x+=b; 
      y = (1-a*x)/b; 
    } 
  } 
  void prepare() 
  { 
    fac[0] = 1; 
    fac[1] = 1; 
    long long y; 
    for(int i=2;i<=100000;i++) Ex( i,module,fac[i],y ); 
    n4 = fac[4]; 
    for(int i=2;i<=100000;i++) fac[i]=(fac[i]*fac[i-1])%module; 
  } 
  long long calc( int p ) 
  { 
    long long C = N; 
    vector<int> now(ct); 
    if(C%p!=0 ) 
    { 
      for(int i=0;i<now.size();i++) if(now[i]%p!=0) 
      { 
        now[i]--; 
        break; 
      } 
      C--; 
    } 
    for(int i=0;i<now.size();i++) 
    { 
      if(now[i]%p!=0) return 0; 
      now[i]/=p; 
    } 
    C/=p; 
    long long res=1; 
    for(int i=0;i<now.size();i++) 
    { 
      res = (res*fac[now[i]])%module; 
      for(int j=1;j<=now[i];j++) 
      { 
        res= (res*(C%module))%module; 
        C--; 
      } 
    } 
    return res; 
  } 
  int count(int n, vector <int> checkers) 
  { 
    N = n; 
    N=N*N; 
    int sum=0; 
    for(int i=0;i<checkers.size();i++) sum+=checkers[i]; 
    if(sum>N) return 0; 
    prepare(); 
    ct.clear(); 
    ct=checkers; 
    long long res = n4*( (calc(1)+2*calc(4)+calc(2))%module )%module; 
    return res; 
  } 
   
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/