/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6714
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

class ConstructBST {
public:
    long numInputs(vector<int> tree);
};

long ConstructBST::numInputs(vector<int> tree) {
    long ret;
    return ret;
}


int test0() {
    vector<int> tree = {1, 2};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> tree = {1, 2, 3};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> tree = {1, 3, 6};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
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
    vector<int> tree = {1, 2, 5, 3, 4};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> tree = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 319258368000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> tree = {1, 2, 3, 4, 8, 9, 6, 7, 12, 24, 25, 14, 15, 50, 51, 31, 62, 124, 125, 250};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 3910915008;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> tree = {1, 2, 3, 4, 8, 9, 6, 7, 12, 24, 25, 14, 15, 50, 51, 31, 62, 124, 125, 250, 501};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 12415603200;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> tree = {1, 2, 3, 4, 6, 7, 12, 25, 14, 15, 50, 51, 31, 62, 124, 125, 250};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 6486480;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> tree = {2, 4, 3, 63, 7, 15, 1, 31, 5};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 112;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> tree = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 513};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> tree = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> tree = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 3, 7, 15, 31, 63, 127, 255, 511};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 203490;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> tree = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 3, 7, 15, 31, 63, 127, 255, 511, 5, 16384, 32768, 32769};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 34610400;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 241240136417280000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 31};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 217116122775552000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 31, 62, 63, 126};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 46524883451904000;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> tree = {1, 20, 21, 22, 23, 24, 25, 26, 27, 10, 11, 12, 13, 5, 6, 2, 3};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 82368000;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> tree = {1, 10, 11, 12, 13, 5, 6, 2, 3};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 280;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> tree = {1, 20, 21, 22, 23, 24, 25, 26, 27, 10, 11, 12, 13, 5, 6, 2, 3, 4, 8, 9, 7, 14, 15};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 260050452480000;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> tree = {1, 2, 4, 9, 18, 37, 74, 148, 296, 592, 3, 7, 14, 29, 58, 117, 235, 471, 943, 1887};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 92378;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> tree = {1, 2, 4, 9, 18, 37, 74, 148, 296, 592, 3, 7, 14, 29, 58, 117, 235, 471, 943, 1887, 3774, 7548, 15096, 30192, 60384, 120769};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 2042975;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> tree = {1, 2, 4, 9, 18, 37, 74, 148, 296, 592, 3, 6, 12, 7, 14, 29, 58, 117, 235, 471, 943, 1887, 3774, 7548, 15096, 30192};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 214512375;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> tree = {1, 2, 4, 9, 18, 37, 74, 148, 296, 592, 3, 6, 5, 7, 14, 29, 58, 117, 235, 471, 943, 1887, 3774, 7548, 15096, 30192};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 411863760;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> tree = {1};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> tree = {1, 2, 3, 4, 6, 13, 27, 54, 55, 8, 17, 16, 34, 35, 68, 69, 70, 71};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 15841280;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> tree = {1, 2, 3, 4, 6, 13, 27, 54, 55, 8, 17, 16, 34, 35, 68, 69, 70, 71, 136, 137, 274, 275, 548, 549, 550, 551};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 26404618240000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> tree = {1, 2, 3, 4, 6, 13, 27, 54, 55, 8, 17, 16, 34, 35, 68, 69, 70, 71, 12, 24, 25, 50, 51};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 910176583680;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> tree = {1, 2, 3, 4, 6, 13, 27, 54, 55, 8, 17, 16, 34, 35, 68, 69, 70, 71, 12, 24, 25, 50, 51, 5, 10, 11};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 3289638223872000;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> tree = {1, 2, 3, 4, 6, 13, 27, 54, 55, 8, 17, 16, 34, 35, 68, 69, 70, 71, 12, 24, 25, 50, 51, 111, 223, 447};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 90374676480000;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 32, 33, 64, 65, 128, 129, 256, 257, 512, 513, 1024, 1025, 2048, 2049, 4096, 4097};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 81749606400;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 32, 33, 64, 65, 128, 129, 256, 257, 512, 513, 1024, 1025, 2048, 2049, 4096, 4097, 8193};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 316234143225;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> tree = {1, 2, 3, 4, 5, 8, 9, 16, 17, 32, 33, 64, 65, 128, 129, 256, 257, 512, 513, 1024, 1025, 2048, 2049, 4096, 4097};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1961990553600;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 32, 33, 64, 65, 128, 129, 3, 6, 7, 14, 15, 30, 31, 62, 63, 126, 127};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 441685691596800;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 32, 33, 64, 65, 128, 129, 3, 6, 7, 14, 15, 30, 31, 62, 63, 126, 127, 10};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 5126708920320000;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 32, 33, 64, 65, 128, 129, 3, 6, 7, 14, 15, 30, 31, 62, 63, 126, 127, 11};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 5126708920320000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 32, 33, 64, 65, 128, 129, 3, 6, 7, 14, 15, 30, 31, 62, 63, 126, 127, 12};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 5060981882880000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> tree = {1, 2, 3, 4, 6, 7, 8};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> tree = {1, 2, 3, 4, 6, 7, 8, 12, 14, 16, 24, 28, 32, 48, 56, 64, 96, 112, 128, 192, 224, 256};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 188024760;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> tree = {1, 2, 4, 9, 18, 37, 74, 148, 296, 592, 3, 7, 14, 29, 58, 117, 235, 471, 943, 1887, 1886};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 335920;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> tree = {1, 2, 4, 9, 18, 37, 74, 148, 3, 7, 14, 29, 58, 117, 235, 471, 943, 1886};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 19448;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> tree = {1, 2, 4, 5, 9, 18, 37, 74, 148, 3, 7, 14, 29, 58, 117, 235, 471, 943, 1886};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 306306;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> tree = {1, 2, 4, 9, 18, 37, 74, 148, 3, 7, 14, 29, 58, 117, 235, 471, 943, 1886, 75};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 131274;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> tree = {1, 2, 4, 9, 18, 37, 74, 148, 3, 7, 14, 29, 58, 117, 235, 471, 943, 1886, 75, 151, 302};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1847560;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 32, 33, 64, 65, 3, 6, 7, 14, 15, 30, 31, 62, 63, 10};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 2383795814400;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 32, 33, 3, 6, 7, 14, 15, 30, 31, 10};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1613094912;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> tree = {1, 2, 4, 5, 8, 9, 16, 17, 3, 6, 7, 14, 15, 30, 31, 62, 63, 10};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1568286720;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 131070};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 33554431, 67108863};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 33554431, 33554430};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 33554431, 2};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 2, 4};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 300;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 2, 6};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 575;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 13, 2, 6};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 6325;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 14, 2, 6};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 12075;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> tree = {100, 50, 25, 12, 6, 3, 1};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> tree = {100, 50, 25, 12, 6, 3, 1, 2, 4, 8, 16, 32, 33};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1848;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> tree = {100, 50, 25, 12, 6, 3, 1, 2, 4, 8, 16, 5};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1848;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> tree = {100, 50, 25, 12, 6, 3, 1, 2, 4, 8, 16, 5, 200, 400, 800, 1600, 3200, 6400, 12800, 12801};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 93024;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> tree = {125115, 62557, 31278, 15639, 7819, 3909, 1954, 977, 488, 244, 122, 61, 30, 15, 7, 3, 1, 2, 4};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 153;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> tree = {125115, 62557, 31278, 15639, 7819, 3909, 1954, 977, 488, 244, 122, 61, 30, 15, 7, 3, 1, 2, 5, 11, 23};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 4845;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> tree = {125115, 62557, 31278, 15639, 7819, 3909, 1954, 977, 488, 244, 122, 61, 30, 15, 7, 3, 1, 2};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> tree = {283561, 141780, 70890, 35445, 17722, 8861, 4430, 2215, 1107, 553, 276, 138, 277, 69, 34, 17, 8, 4, 2, 1, 9};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 216;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> tree = {283561, 141780, 70890, 35445, 17722, 8861, 4430, 2215, 1107, 553, 276, 138, 69, 34, 17, 8, 4, 2, 1, 3, 7};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 190;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> tree = {283561, 141780, 70890, 35445, 17722, 8861, 4430, 2215, 1107, 1106, 553, 276, 138, 69, 34, 17, 8, 4, 2, 1, 3};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 200;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> tree = {1, 2, 4, 6, 3};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> tree = {2, 4, 3, 62, 7, 15, 1, 31, 5, 14, 28, 57, 56, 114};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 96096;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 45, 90};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 706758212160000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> tree = {2, 4, 3, 62, 7, 15, 1, 31, 5, 14, 28, 57, 56, 114};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 96096;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> tree = {1, 3, 2, 6, 5, 10, 11, 12, 13, 20, 21, 40, 41, 80, 81, 82, 83, 160, 320, 640, 1280, 2560, 5120};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 11535462400;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> tree = {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 241240136417280000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 241240136417280000;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 6, 12, 24, 48, 49, 97};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 24024;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 20, 21, 22, 24, 25, 26, 28, 29};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 142076522649600000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> tree = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 3};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 40, 41};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 186251575910400000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 33554431, 67108863};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> tree = {25, 2, 14, 3, 11, 4, 5, 6, 13, 1, 8, 10, 22, 12, 16, 9, 17, 18, 15, 20, 7, 21, 19, 23, 24, 26};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 241240136417280000;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> tree = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 16777217};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> tree = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> tree = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 513};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> tree = {1, 3, 2, 4, 5, 8, 9, 10, 11, 16, 17, 18, 19, 20, 21, 22, 23, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    ConstructBST* pObj = new ConstructBST();
    clock_t start = clock();
    long result = pObj->numInputs(tree);
    clock_t end = clock();
    delete pObj;
    long expected = 56540656972800000;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=9999&pm=6714
********************************************************************************
// my submission accuracy is quite low recently, don't be afraid to challenge me 
 
#include <algorithm> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "ConstructBST.cc" 
 
ll bin[30][30]; 
 
int childtype(int ch, int pa) { 
  while(ch > pa) { 
    if(ch == 2*pa) return 1; 
    if(ch == 2*pa+1) return 2; 
    ch /= 2; 
    } 
  return 0; 
  } 
 
class ConstructBST { 
  public: 
  long long numInputs(vector <int> tree) { 
    FOR(k,0,30) bin[0][k] = 0; bin[0][0] = 1; 
    FOR(n,1,30) {  
      bin[n][0] = 1; 
      FOR(k,1,30) bin[n][k] = bin[n-1][k-1] + bin[n-1][k]; 
      } 
   
    // !FDI 
    ll ret = 1; 
    int N = Size(tree); 
    FOR(t,0,N) { 
      int va[3]; 
      va[1] = 0; 
      va[2] = 0; 
      FOR(u,0,N) va[childtype(tree[u], tree[t])]++; 
      ret *= bin[va[1]+va[2]][va[1]]; 
      } 
    return ret; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/