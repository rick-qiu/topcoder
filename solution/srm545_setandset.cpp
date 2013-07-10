/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12004
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

class SetAndSet {
public:
    long countandset(vector<int> A);
};

long SetAndSet::countandset(vector<int> A) {
    long ret;
    return ret;
}


int test0() {
    vector<int> A = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1048534;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {1, 2};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
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
    vector<int> A = {1, 2, 3, 4};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {1, 2, 3, 4, 5};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
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
    vector<int> A = {6, 6, 6};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {13, 10, 4, 15, 4, 8, 4, 2, 4, 14, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1728;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {32768, 128, 528384, 25600, 2112, 0, 320, 139264, 16, 131072, 1025, 131072, 0, 32};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 16344;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {2048, 33024, 0, 34816, 65536, 16384, 4, 2048, 128, 0, 8448, 0, 2312, 0, 0, 0, 8192, 0, 64, 1056, 0, 0, 5, 256, 0, 0, 136, 40960, 2, 0, 2116, 0, 67651, 0, 4224, 8192, 40960, 0, 1, 0, 2, 0, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8796093021906;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 2, 0, 4, 0, 0, 1, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842586;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {1, 1, 1, 4, 0, 0, 0, 8, 8, 0, 2, 0, 0, 16, 3, 0, 24, 0, 16, 0, 2, 0, 0, 0, 0, 2, 2, 4};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 268435332;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {2, 0, 0, 0, 16, 0, 0, 0, 5, 2, 8, 0, 8, 0, 0, 0, 2, 4, 0, 4, 0, 8, 12, 0, 4, 0, 2, 0, 1, 4, 0, 0, 8, 0, 4, 8, 0, 16, 0, 4, 0, 2, 0, 0, 2, 3, 0, 4, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953419894;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 1, 2, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 35184372088794;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {67616, 32779, 131329, 144, 40, 8192, 2600, 168000, 131152, 136, 786432, 524416, 14, 512, 0, 133120, 526337, 0, 0, 128, 0, 16, 98368, 16645, 1, 0, 262658, 2048, 24640, 65536, 12, 65536, 2224, 2048, 1024, 4096, 129, 8224, 0, 262148, 788481, 16928, 1553, 32, 4096, 8192, 65536};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488353494;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {1, 0, 0, 12, 4, 0, 9, 0, 16};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 494;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {20, 0, 256, 104, 512, 34, 576};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 108;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {8208, 66, 16384, 2816, 392, 0, 4612, 272, 27792, 3073};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 974;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {16496, 28688, 0, 655360, 0, 524288, 260, 2626, 64, 128};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 994;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {8, 4, 0, 10, 1, 0, 0, 0, 1, 2, 0, 0, 0, 0, 0, 1, 0, 16, 1, 1, 4, 2, 2, 4, 8, 2, 24, 6, 0, 8, 3, 0, 0, 2, 4, 11, 0, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 274877905488;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {264, 8, 548, 256, 546, 4, 20, 16, 105, 577, 0, 80, 36, 81, 4, 64, 2, 1, 16, 136, 0, 2, 33, 8};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 16776856;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {5664, 512, 13824, 1040, 130, 388, 8736, 273, 4160, 644, 8, 0, 128, 6146, 4096, 8224, 5185, 0, 16, 0, 3072, 10, 17, 128, 16, 0, 5634, 5132};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 268434460;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {514, 4096, 65800, 529936, 81920, 263442, 524320, 769, 557064, 884736, 8193, 205072, 512, 524320, 53248, 2184, 65540, 640, 133145, 327680, 2120, 1088, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8388208;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {6, 0, 4, 1, 2, 3};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {10, 4, 36, 32, 32};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {100, 904, 324, 68, 787, 256, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 84;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {261, 16912, 8458, 8290, 1152, 519, 16393, 4096};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 214;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {183042, 536, 49536, 80, 314, 71704, 270856};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {4, 0, 0, 8, 0, 0, 0, 1, 4, 0, 1, 0, 0, 0, 4, 2, 0, 4, 0, 1};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1048526;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {128, 96, 48, 72, 6, 2, 180, 8, 18, 196, 2, 128, 10, 112, 128, 9, 128, 96, 200, 68};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1047878;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {16520, 1096, 1024, 4252, 16480, 64, 6146, 17984, 0, 1032, 18688, 2185, 1673, 260, 4, 27, 17424, 2052, 4, 2433, 0, 4, 5, 10400, 18440, 25200, 10, 32, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 536868816;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {192, 168964, 6228, 67584, 35464, 131904, 18, 397348, 1152, 525440, 262361, 33026};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 3948;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {4, 16, 0, 0, 0, 0, 8, 8, 0, 3, 8, 2, 0, 2, 2, 0, 27, 0, 20, 9, 2, 0, 0, 0, 0, 8, 28, 0, 0, 0, 0, 0, 16, 0, 14, 22, 28, 1, 8, 4, 3};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 2199023251994;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {4, 0, 0, 128, 32, 0, 64, 8, 128, 2, 0, 0, 32, 394, 48, 64, 237, 128, 384, 264, 49, 45, 36, 76, 40, 20, 64, 257, 0, 25, 34, 64, 100, 2, 72, 3, 263, 35, 84, 0, 1, 274, 64};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8796093012318;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {10243, 688, 10500, 16, 656, 10752, 8992, 4, 16386, 1104, 17416, 76, 264, 3112, 76, 134, 32, 19008, 2, 17920, 14402, 6160, 10, 2304, 2, 4203, 12296, 84, 8208, 192, 20611, 4, 5637, 129, 24650, 1536, 274, 4616, 6944, 48, 12288, 0, 8, 24710, 16896, 64};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 70368744152190;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {46, 66561, 305216, 81920, 269633, 57632, 62208, 393604, 163992, 200704, 278786, 549512, 526368, 65601, 557344, 458789, 671888, 296192, 140328, 589952, 524928, 263168, 3097, 99360, 532547, 131586, 569443, 533506, 34192, 131330, 524320, 70146, 262148, 0, 196946, 32992, 789505, 262144, 4352, 540696, 99072, 278528, 327682};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8796092980268;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {8224, 3080, 69696, 459648, 2568, 4128, 34835, 8264, 262401, 163840, 150080, 885761, 296960, 134162, 540694, 532544, 33415, 0, 721668, 528386, 98884, 123476, 28160, 528660, 69650, 2208, 559110, 76290, 593984, 53256, 70784, 10308, 659462, 854784, 131594, 4289, 2560, 593920, 0, 361002, 16800, 44049, 327852, 131088, 433, 541700, 920065, 34816, 86272, 181376};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906556840;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {2, 4, 9, 8, 2};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {64, 41, 428, 2, 896, 134, 32};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 94;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {14596, 4440, 2082, 16515, 516, 8640, 2560, 13380, 16724, 2608};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 904;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {82984, 92736, 8480, 16436, 155952, 74896, 132226, 52304, 2577, 528448};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 844;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {10, 12, 0, 8, 0, 6, 2, 0, 0, 24, 10, 5, 1, 14, 10, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 65160;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {66, 80, 48, 2, 2, 130, 0, 210, 136, 0, 48, 33, 41, 68, 0, 66, 80, 48, 144, 12, 178, 130, 128, 32, 0, 0, 3};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 134215642;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {4613, 49, 23776, 10240, 32, 8352, 5200, 1304, 17940, 10257, 4874, 10788, 16418, 4247, 4144, 284, 4164, 16901, 7191, 722, 13126, 12352, 2050, 320, 12316, 3073};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 67097248;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {3080, 139460, 131585, 926865, 264480, 819456, 535371, 65, 278688, 397452, 65554, 33030, 9538, 868881, 132109, 296000, 131080, 656417, 274516};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 522866;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {13, 2, 8, 0, 4, 2, 16, 24, 8, 1, 1, 28, 0, 2, 16, 4, 6, 4, 16, 0, 4, 5, 1, 0, 1, 0, 0, 18, 6, 0, 4};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 2147481186;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {6, 0, 2, 1, 2, 8, 2, 1, 0, 0, 0, 0, 6, 0, 8, 4, 0, 9, 12, 0, 2, 2, 0, 0, 12, 8, 6, 0, 0, 1, 1, 1, 9, 0, 8, 1, 0, 0, 0, 1, 2, 12, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8796093018920;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {35, 514, 640, 116, 66, 576, 297, 0, 6, 3, 257, 2, 64, 192, 0, 460, 81, 12, 285, 512, 816, 16, 24, 96, 448, 4, 6, 0, 240, 921, 208, 4, 46, 33};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 17179860946;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {0, 1, 262, 284, 649, 709, 12, 904, 28, 36, 1, 2, 273, 272, 384, 392, 514, 48, 320, 514, 258, 901, 4, 52, 660, 105, 271, 49, 386, 193, 1, 5, 260, 128, 160, 73, 288, 704, 834, 336, 263, 512, 77, 27, 72, 130, 48, 9, 193, 563};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899905393052;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {4112, 8268, 18176, 1536, 4736, 2884, 4520, 8256, 160, 20642, 3073, 2880, 3328, 3077, 17, 2056, 20560, 8704, 8208, 1088, 20482, 8721, 10272, 20512, 32, 16384, 10496, 9472, 16641, 1065, 17944, 1054, 8289, 36, 30852, 1554, 9732, 1024, 16900, 2593, 3728, 2248, 16432, 3080, 5409, 1701, 16640, 18992, 0, 8808};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906314978;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {13503, 5139, 18049, 706, 8311, 11, 17058, 24714, 20522};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {1296, 1636, 1216, 5170, 4198, 4324, 14396};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 34;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {7, 9, 0, 10, 3, 9, 2, 13, 9};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 330;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {1, 1, 12, 4, 5, 0, 4, 4, 8, 0, 9, 1, 11, 8, 6, 5, 5, 2, 10};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 523140;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {1, 0, 1, 1, 2, 1, 2, 2, 2, 0, 0, 2, 0, 2, 2, 0, 0, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 261858;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {4, 996, 258, 48, 168, 418, 0, 576, 350, 146, 656, 0, 96, 105, 551, 355, 489};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 129536;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {11992, 16896, 19684, 3358, 4753, 5191, 2180, 13595, 367, 24625, 8605, 6695, 8011};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 7022;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {6, 3, 4, 2, 3, 2, 0, 1, 0, 0, 0, 0, 6, 6, 3, 1, 7, 0, 0, 0, 1, 2, 1, 0, 6, 1, 1, 1, 2, 1, 7, 0, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8589901760;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {16, 10, 4, 16, 1, 18, 13, 46, 40, 6, 32, 5, 27, 32, 16, 48, 48, 5, 11, 20, 1, 6, 28, 4, 12, 22, 16, 33, 59, 42, 12};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 2147451242;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {40, 26, 624, 64, 82, 411, 385, 50, 557, 913, 995, 189, 704, 34, 76, 128, 512, 4, 72, 541, 482, 123, 736, 553, 592, 160, 234, 28, 515, 1, 143, 603, 66};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8589797874;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {10768, 18896, 36, 17202, 392, 645, 23156, 21134, 25163, 10655, 12726, 2282, 5124, 8410, 4992, 22593, 8252, 528, 17144, 24832, 10241, 26632, 18560, 3074, 9485, 19462, 10543, 12570};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 268388704;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {4, 2, 2, 13, 13, 4, 8, 3, 10};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 422;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {6, 7, 12, 15, 4, 10, 1, 14};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 80;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {1, 12, 5, 9, 11, 8, 0, 6, 11, 10};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 824;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {4, 1, 7, 6, 11, 2, 15, 6, 10, 3, 5, 13, 10, 11};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 13640;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {4, 10, 7, 3, 6, 2, 5, 8, 1, 6, 3, 8, 14};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 7516;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {8, 1, 5, 15, 5, 6, 1, 6, 2, 15, 2, 3, 15, 1, 4, 10, 9, 2, 7, 0, 9, 8, 3, 8, 1, 12};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 67064256;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {2, 15, 9, 11, 5, 10, 10, 8, 12, 11, 5, 10, 4, 5, 2, 2, 3, 7, 11, 8, 0, 5, 8, 10, 1};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 33513764;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {555, 566, 806, 683, 898, 401, 608, 831, 33, 878, 382, 44, 909, 458, 101, 978, 872, 978, 680, 280, 717, 742, 56, 202, 728, 12, 65, 560, 85, 48};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1073016410;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {438, 769, 969, 948, 789, 129, 654, 662, 887, 1022, 599, 286, 556, 638, 75, 357, 153, 294, 74, 29, 992, 809, 483, 186, 271, 641, 192, 434};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 268101726;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {256, 784, 377, 665, 963, 293, 740, 733, 660, 289, 624, 125, 948, 152, 574, 164, 706, 733, 392, 50, 149, 125, 559, 565, 196, 159, 677};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 133800322;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {25294, 3089, 11075, 20130, 23744, 9672, 19673, 5979, 9762, 4379, 14395, 16394, 25714, 6667, 20540, 21155, 17396, 25960, 29762, 21188, 4245, 9546, 15288, 23868, 5405, 23447, 29942, 4863, 18981};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 536224092;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {5650, 11131, 27992, 9291, 7732, 4642, 769, 25382, 31389, 5433};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 500;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {642381, 887429, 257366, 15394, 619131, 752437, 959814, 31991, 255234, 535730, 141450, 930439, 925382, 938775, 111784, 622757, 983719, 269535, 393751, 565192, 102359, 558591, 102384, 117402, 1027216, 851098, 714776, 529696};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 266646746;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {401394, 386387, 843783, 863641, 591488, 495849, 532538, 754792, 873664, 953665};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 314;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {9, 15, 2, 1, 14, 3, 15, 12, 11};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 208;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {2, 6, 14, 13, 12, 15, 4, 13, 14, 9};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 352;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {41, 937, 877, 860, 607, 222, 813, 467, 664, 891};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
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
    vector<int> A = {458, 737, 373, 405, 508, 699, 34, 505};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {29629, 23914, 29464, 10679, 28409, 19901, 15471};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
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
    vector<int> A = {870666, 357325, 884713, 432879, 970069, 537563, 280787, 1005935, 863965, 831597};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
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
    vector<int> A = {130141, 897128, 900727, 197027, 937454, 920287, 830870, 649079};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {3, 3, 2, 1, 3, 3, 3, 1, 1, 3, 2, 1, 2, 3, 1, 2, 3, 3, 2, 3, 3, 1, 1, 2, 3, 1, 3, 3, 3};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 516030464;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {12, 25, 26, 10, 23, 10, 23, 11, 7, 11, 3};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 764;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {52, 171, 129, 236, 72, 217, 215, 114, 248, 187, 238, 124, 255, 128, 26, 212, 143, 237, 122, 108, 79, 51, 154, 220, 120, 213};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 66042172;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> A = {397, 818, 534, 569, 732, 827, 1002, 1014, 231, 935, 940, 957, 1015, 764, 1019, 1018, 1021, 695, 755, 266, 131, 527, 22, 877, 683, 651, 1023, 637};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 247562816;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {30591, 16377, 13431, 7627, 23623, 7035, 30540, 24541, 3374, 7018, 16870, 26514, 28300, 15063, 22126, 32207, 14456, 24571, 11387, 15979, 15687, 16383, 32222, 3242, 16361, 32747, 29670, 8022, 4585, 32619};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 893170194;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {505575, 302969, 577371, 969969, 224545, 87531, 473058, 771561, 851340, 1025239, 977965, 291119, 167567, 1006373};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 2556;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> A = {4, 4, 6, 3, 4, 6, 7, 6, 5, 6, 7, 4, 6, 7, 6, 4, 1, 7, 0, 1, 5, 0, 4, 2, 4, 7, 5, 6, 1, 3, 6};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 2130576064;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {697, 895, 885, 435, 664, 599, 808, 510, 693, 919, 159, 833, 319, 947, 825, 703, 1007, 380, 632, 151, 224, 494, 951, 747, 191, 711, 291, 954, 277, 443, 264, 251, 177, 934, 740, 735, 951, 686, 462, 848, 539, 859, 977, 576, 625, 505};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 70351236216272;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> A = {380139, 714575, 367499, 654636, 363727, 497972, 504550, 183353, 366799, 354267, 398774, 1027367, 604013, 384941, 316814, 1039935, 647031, 472542, 736724, 746090, 86462, 1017683, 323042, 110399, 685015, 744292, 119423, 1030646, 358488, 257892, 515031, 885495, 982039, 511753, 43225, 876020, 569678, 414576, 625640, 323311, 783807, 655230, 971631, 962606, 1039955, 778127, 1015622, 813025};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 281318014541344;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> A = {7, 15, 15, 12, 14, 15, 15, 5, 14};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 96;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> A = {15, 14, 8, 15, 13, 13, 10, 14, 14};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 192;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> A = {83, 170, 158, 158, 254, 247, 86, 255, 243, 152};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> A = {1963, 1693, 1407, 1271};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> A = {32427, 15277, 21439, 31545, 31162};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> A = {1043196, 914906, 589286, 319355};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
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
    vector<int> A = {14, 14, 15, 15, 7, 12, 14, 10, 15, 11, 13, 15, 14, 8, 14, 15};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> A = {223, 235, 163, 255, 107, 251, 91, 119, 247, 207, 203, 63, 222, 245, 253, 62, 186};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 32432;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> A = {1735, 2014, 1903, 2041, 1391, 2045, 1403, 957, 972, 1775, 1383, 1982, 1887, 1756, 1919, 1870, 1695, 1687};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 28688;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> A = {24319, 23775, 25599, 5215, 4800, 24573, 27055, 10557, 27135, 32237, 5934, 16191, 11867, 18407, 30459, 32431, 32447, 32161, 20989};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 133024;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> A = {784507, 212799, 925436, 229221, 1031166, 933815, 876239, 326834, 475112, 807422, 179967, 210143, 672607, 1006577, 781771, 638039, 1025775, 1023770, 234918, 731131};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 512096;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> A = {13, 13, 13, 15, 9, 15, 13, 11};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 120;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> A = {11, 15, 7, 3, 15, 13, 15, 13, 7, 11};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 288;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> A = {3, 3, 3, 3, 3, 3, 1, 3, 3};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> A = {7, 7, 7, 6, 6, 7, 7};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> A = {7, 7, 7, 7, 3, 5, 5, 7};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> A = {29, 31, 15, 31, 31, 15, 29, 28};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> A = {127, 91, 103, 127, 93, 111, 127};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> A = {494, 511, 437, 255, 511};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> A = {2045, 1883, 2046, 2047, 1403, 2023, 986, 997, 2045, 1790};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> A = {3486, 2030, 7865, 8189, 7019, 7166, 8158, 7163};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> A = {30462, 11519, 31743, 30302, 32701, 24382, 15594, 24527, 32511, 31998};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> A = {107263, 114679, 114359, 96251, 130045, 118258, 79871, 96059, 98299};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> A = {1048571, 894700, 655231, 196567};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> A = {1040359, 653311, 622331, 255483, 1015293, 253951};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> A = {15, 7, 15, 9, 7, 15, 15, 15, 15, 15, 13};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> A = {15, 14, 15, 10, 9, 14, 10, 7, 15, 13, 15, 8, 15, 13, 11, 7};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 25728;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> A = {49, 30, 49, 63, 31, 30, 51, 47, 63, 62, 47, 23, 47};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 2112;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> A = {239, 254, 94, 219, 127, 191, 175, 247, 246, 249, 250, 254, 187, 191};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> A = {683, 1917, 2046, 1787, 1967, 2034, 1018, 991, 2043, 1499, 1003, 2047, 1019, 1531, 2039};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> A = {12253, 9727, 8951, 13311, 11261, 2047, 14024, 9723, 15859, 15855, 14327, 16055, 16254, 10131, 16371};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> A = {38891, 39897, 51959, 65021, 65439, 64502, 56567, 20475, 65503, 57343, 57334, 56191, 44463, 16383, 57214, 61439, 65519, 32765, 32767, 65531};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> A = {255475, 130551, 227071, 259319, 114621, 260095, 194557, 175615, 262139, 219132, 122435, 259643, 253439, 196607, 229375, 233181, 261331, 261621, 188287};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> A = {946158, 1044479, 1044350, 982895, 1048327, 1047527, 966589, 980988, 1015806, 978943, 1048031, 1015603, 966303, 786431, 1048511, 1043435, 1026879, 516046, 1044467, 491507};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> A = {7, 7, 7, 7, 7, 4, 7, 7, 7, 5, 7, 7, 7, 7, 7, 7, 3, 3, 7, 5, 5, 5, 1, 7, 7, 7, 3, 7, 7, 1, 7, 6, 7, 5, 7, 5, 6, 6};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 224663699456;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> A = {31, 15, 26, 31, 31, 31, 15, 31, 31, 31, 25, 31, 31, 15, 23, 15, 15, 29, 23, 31, 25, 23, 31};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> A = {123, 223, 190, 47, 191, 255, 246, 249, 247, 255, 239, 190, 218, 183, 255, 255, 183, 255, 242, 237, 123, 183, 248};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1625408;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> A = {990, 1022, 986, 191, 767, 215, 767, 1023, 892, 859, 1018, 427, 1015, 507, 503, 957, 1021, 1023, 559, 990, 1007, 851, 975, 1007, 767, 991, 478, 999, 1023, 891, 732, 669, 862, 1015};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 13100809120;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> A = {14255, 16287, 12671, 4094, 14731, 16317, 10234, 11766, 15295, 15325, 12287, 16255, 2814, 14075, 13311, 16383, 16367, 16083, 15598};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 14288;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> A = {12159, 57343, 40665, 24317, 57303, 65535, 27935, 61404, 32247, 61423, 64925, 61435, 61247, 61437, 65499, 61302, 65398, 65469, 64447, 64991, 47582, 64511, 62974, 65407, 65535, 36815, 61037, 57335, 65533, 54271, 62911, 56847, 65402, 64476, 42845, 34815, 45015, 57342, 62937, 65520, 65527, 57087};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 2663914399328;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> A = {245759, 260074, 93181, 262015, 260079, 261023, 242905, 258030, 219134, 227039, 195019, 192507, 176095, 261118, 262143, 262139, 192003, 194046, 262012, 196063, 262103, 245719, 262078, 252413};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> A = {491326, 917247, 130991, 966607, 1044477, 1048063, 765885, 1048063, 1048191, 1031541, 784382, 524271, 1032095, 1036287, 769917, 458495, 917437, 749054, 1046509, 716799, 758527, 786303, 507901, 1040379, 819183, 647163, 850407, 1044426, 909247, 1044351, 1036149, 720889, 764893, 773838, 376667, 1018727, 393211, 253175, 908661, 1048383, 982639, 916479, 916991, 917497, 655351, 850395, 765822, 1031663, 982006, 850174};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 583546263171662;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> A = {7, 7, 7, 7, 7, 7, 2, 7, 7};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> A = {7, 7, 7, 7, 3, 7, 7, 3};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> A = {7, 7, 6, 7, 3, 7, 7, 5, 7};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> A = {30, 63, 55, 31, 55, 54, 63, 63, 47};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> A = {255, 254, 127, 127, 255, 125, 255, 187, 244, 253};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> A = {4095, 4093, 4094, 3959, 4030, 4027, 3319};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> A = {30655, 30079, 16143, 9150, 14831, 7935};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> A = {720893, 653311, 655295, 1046527, 1048575};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> A = {224767, 253943, 1048382, 520059, 1048575};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> A = {917247, 1048571, 1044469, 675327, 1022951, 1048281};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> A = {1015800, 892927, 983033, 819103, 524271, 777687};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> A = {1048575, 916991, 1048543, 913407, 1047487, 1048063, 720863};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> A = {3, 2, 3, 1, 3, 3, 3, 3, 3, 2, 3};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> A = {15, 30, 31, 29, 11, 15, 30, 27, 19, 31, 15, 30, 31, 29, 14, 30};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> A = {15, 13, 31, 31, 31, 31, 12, 29, 31, 31, 31, 27, 27, 31, 26, 31, 25, 31};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 77824;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> A = {255, 255, 111, 191, 255, 255, 255, 123, 107, 255, 127, 255, 255, 123, 253, 254, 255, 250};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> A = {1003, 1013, 1018, 1019, 1007, 511, 511, 767, 1023, 223, 1019, 1007};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> A = {6074, 8062, 7159, 8123, 8062, 3039, 6655, 6143, 6839, 6111, 8127};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> A = {129519, 130557, 122877, 122311, 122623, 129791, 131059, 131037, 131071, 122879, 61439, 122870};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> A = {1015807, 966655, 945007, 966655, 1015775, 1044343, 913403, 1032031, 786167, 523263, 786422, 884383, 458751, 883947, 999423, 1048574};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> A = {15, 1, 15, 10, 15, 7, 11, 15, 7, 14, 13, 15, 14, 7, 13, 13, 14, 7, 15, 15, 15, 14, 7, 15, 15, 15, 11, 13, 13, 13, 15, 7, 15, 15, 10, 14, 15, 15, 15, 15, 15, 11, 15, 15, 15, 15, 7, 7, 12};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 534906383892480;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> A = {31, 31, 15, 23, 31, 27, 30, 27, 23, 23, 31, 31, 7, 15, 23, 23, 31, 29, 15, 31, 29, 30, 30, 31, 31, 7, 31, 30, 15, 27, 31, 23, 31, 31, 13, 22, 23, 31, 22, 31, 26};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1397041594368;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> A = {59, 35, 59, 55, 63, 63, 57, 47, 55, 31, 61, 31, 59, 45, 61, 62, 63, 63, 45, 63, 63, 57, 63, 45, 57, 63, 47, 63, 31};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> A = {95, 127, 127, 127, 110, 123, 79, 127, 127, 127, 127, 126, 127, 61};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> A = {1021, 1013, 767, 895, 959, 1005, 255, 1021, 894, 726, 979, 1018, 895, 1023, 1015, 895, 991, 767, 767, 999, 1019, 1021, 1007, 942, 973, 1014, 991, 888, 1006, 893, 479, 471, 511, 1023, 511, 939, 1006};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 78266510384;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> A = {13503, 16255, 15871, 12183, 5119, 15359, 15871, 16381, 8191, 14267, 16383, 13815, 15871, 16351, 16063, 16383, 16382, 16367, 14295, 15261, 14183, 16382};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> A = {65023, 65463, 56185, 65533, 64495, 56831, 56830, 65135, 57343, 61431, 49119, 61407, 48615, 65462, 64431, 59871, 49151, 63231, 63287, 57339, 32671, 65499, 64511, 27854, 65523, 64511, 24575, 65535, 64479, 28159, 57151, 65535, 65023, 56313, 15359, 30463, 65407, 53242, 44991, 65271, 57342, 65535, 65023, 61439, 65511, 65259, 63483, 65535};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 133664609132800;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> A = {131003, 131070, 131035, 125951, 130035, 130671, 131071, 131010, 122735, 65533, 130751, 102142, 122847, 81915, 131071, 125887, 127483, 131007, 122831, 131039, 131071, 129014, 130814, 131038, 59391, 110591, 122879, 126975, 130046, 131070, 65471, 65023, 130943};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> A = {229247, 255903, 261823, 226287, 112543, 244733, 261599, 261119, 221118, 262143, 245759, 182983, 131071, 161707, 251903, 63868, 127453, 242429};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> A = {1048063, 973756, 1048575, 1031935, 1013627, 1038071, 913405, 1040383, 901115, 843775, 1039351, 458751, 1048446, 1039167, 1045999, 589823, 1046444, 1046395, 1032173, 1046015, 917373, 917437, 784383, 1048575, 1044478, 1047479, 1048429, 1048503, 786431, 982511, 1048317, 1011707, 786412, 1048575, 1048447, 1047551, 1047935, 523261, 1048575, 1015807, 959967};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> A = {254, 254, 223, 254, 253, 255};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> A = {2993, 4095, 2015, 4095, 4095, 3583, 4095, 4095};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> A = {32767, 24575, 32703, 24511, 32767, 24575, 20479, 32767, 32763, 32767};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> A = {114687, 49151, 120559, 131071};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> A = {1048543, 1013503, 1021695, 978933, 1048575, 784895, 1046526, 983039, 1048271};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> A = {23, 23, 30, 30, 31, 31, 31, 31, 23, 31, 31, 31, 31, 31, 31, 31, 31, 7, 31, 31};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> A = {703, 1023, 1023, 255, 511, 895, 443, 1007, 895, 1007};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> A = {16383, 15479, 16383, 16383, 15071, 12286, 16383, 16383, 16334, 11759, 16383, 16383, 16367, 8191, 16383, 16383, 16335};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> A = {262143, 229375, 253919, 262143, 261119, 261727, 260095, 261119, 157439, 262015, 258047, 262079, 261567, 262143, 260095, 257919, 249855, 262142};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> A = {523247, 524287, 523211, 393215, 458751, 524287, 524223, 523774, 524287, 524287, 524287, 491518, 524280, 518141, 524031, 507902, 524286, 524267, 524031};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> A = {1048511, 974845, 1038327, 1048191, 1048567, 1043454, 1048063, 1007103, 1013759, 1032188, 1048558, 1048575, 786367, 917375, 1048575, 1048447, 1048575, 1032178, 1048063};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> A = {1015, 1019, 989, 1019, 987, 1023, 1020, 887, 1022, 1023, 1023, 1023, 959, 765, 1019, 511, 893, 735, 1023, 1023, 383, 959, 975, 507, 1007, 733, 1023, 863};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 7258112;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> A = {8175, 15870, 16383, 12285, 15285, 16375, 15229, 8162, 16383, 14331, 16319, 16383, 16255, 11775, 15341, 12025, 16367, 16375, 16319, 12287, 16319, 16091, 16375, 14831, 14333, 16255, 16375, 16127};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> A = {262141, 126975, 262143, 261949, 258035, 229375, 131071, 131070, 262142, 195838, 262077, 196607, 261119, 241663, 262143, 261982, 131071, 262143, 262131, 259967, 262133, 196543, 261823, 262073, 253951, 262079, 195071, 262127, 229375, 196574, 262139, 262014, 260079, 262143, 262134, 262143, 229375, 262143, 229375, 131005, 262137, 195325, 262141, 253823, 245247, 262143, 130555};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1050545563648;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> A = {953287, 1048559, 753535, 1015767, 1048571, 1048567, 895967, 917503, 980991, 1048575, 1048319, 1048575, 1048575, 901118, 1048575, 1044223, 1048575, 1046527, 1042415, 1047551, 1048191, 524223, 1048551, 655359, 1048575, 1048191, 1015677, 1048303, 520191, 1048575, 1048571, 1048047, 909311, 1048575, 982527, 1032191, 1048127, 917503, 1048575, 1048571, 507903, 1043967, 1048575, 1048063, 1048574, 1048383, 982559};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> A = {32767, 30175, 32695, 32703, 30719, 24574, 15995, 32765, 32719, 16383, 32767, 32637, 32767, 32383, 30719, 32255, 32255, 32639, 32767, 16367, 12159, 32239, 32767, 32639, 24567, 32767, 29695, 32767, 32703, 32767, 24319, 32767, 31739, 32765, 30719, 32479, 32158, 28607, 32255, 32767, 28607, 32767, 30719, 30719, 32767, 28671, 32251, 32735, 32767, 32767};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 26110373265408;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> A = {65471, 65407, 57215, 65535, 65531, 32765, 63487, 65535, 64927, 65503, 24447, 44511, 48122, 65471, 65530, 22527, 64127, 65471, 65535, 65531, 65527, 64511, 65535, 64510, 64511, 60415, 64510, 45055, 65527, 32767, 65007, 65011, 61439, 65535, 65527, 64511, 65523, 64439, 64511, 32763, 47103, 28605, 65535, 23551, 61437, 57343, 65519, 61438, 55291, 65510};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> A = {131071, 131069, 131007, 128767, 129023, 130559, 97599, 130559, 65535, 126975, 65407, 114671, 53247, 129023, 131071, 131063, 91615, 130803, 130551, 131053, 130975, 81390, 130303, 130939, 129918, 98271, 131063, 131071, 130047, 98302, 130815, 122879, 122879, 131071, 130807, 130811, 118781, 122863, 131071, 114687, 130751, 113631, 131063, 130815, 131071, 124667, 121839, 130735, 131055, 124862};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 223942922573952;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> A = {245759, 262079, 262127, 261115, 262143, 253695, 229375, 212991, 125951, 122869, 257919, 245687, 196095, 253943, 262143, 187366, 257911, 262135, 262141, 258023, 262143, 229374, 262079, 262015, 258047, 245759, 196606, 257919, 163835, 260095, 258046, 261103, 259838, 262119, 262015, 262039, 260095, 261054, 128895, 262143, 261631, 262143, 262143, 245631, 221183, 262135, 262143, 262013, 245742, 253439};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> A = {522237, 524279, 524031, 389117, 454655, 262139, 515067, 390655, 507767, 393215, 260063, 490619, 360447, 524287, 522203, 520191, 506623, 515962, 491519, 253944, 523199, 516093, 393213, 524143, 523259, 524031, 458735, 524221, 524287, 524287, 524287, 483317, 523645, 524287, 392189, 450431, 523899, 487423, 505855, 523519, 507135, 524287, 524287, 507519, 262139, 522215, 524223, 524023, 523983, 491519};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 111163771668992;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> A = {786427, 949239, 1048575, 1015551, 1048574, 1040383, 1047549, 1048062, 1048575, 1047551, 786303, 1032189, 1048447, 1007613, 523519, 1048575, 1048511, 1037790, 1048543, 655103, 1048575, 983039, 917375, 979967, 523261, 491263, 783867, 1015775, 1048575, 911359, 1036287, 376830, 1037823, 1048543, 1046518, 524287, 1048573, 917501, 972798, 983037, 1048573, 1048575, 1048447, 983039, 982719, 778239, 1045951, 1048575, 1048511, 905151};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 52434607009792;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> A = {1047487, 1031935, 1048573, 1048575, 974335, 524283, 1048060, 1046527, 1040383, 1048575, 1048575, 1015807, 1048567, 1048575, 1048575, 1048575, 1048575, 1048573, 1043967, 1044475, 1048575, 524159, 1048575, 1011711, 1048575, 1048574, 1040383, 1046511, 1048511, 1048559, 1048571, 1048575, 1048575, 1048575, 522751, 524287, 1040383, 1048575, 917503, 1048575, 524287, 1044479, 1048575, 1044479, 1048511, 1048575, 1048559, 1048559, 1048571, 1048569};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> A = {524287, 491519, 524287, 507902, 262127, 524287, 520191, 519167, 515967, 523775, 524287, 524287, 516095, 524283, 458751, 524287, 514047, 360447, 524159, 524287, 524287, 523239, 524287, 442363, 522239, 393215, 458751, 524286, 524287, 262143, 524287, 524287, 524279, 523775, 523263, 524287, 262143, 524159, 511999, 524283, 393215, 524031, 507903, 524287, 524287, 520191, 392191, 523775, 523770, 389119};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> A = {114687, 131039, 120575, 131071, 113662, 131071, 111915, 131071, 131071, 126687, 129023, 131071, 131071, 98271, 126974, 65535, 131071, 131071, 130559, 126975, 130559, 131071, 131063, 130043, 129023, 97759, 96255, 131039, 131071, 131071, 129023, 126967, 117759, 131071, 94207, 114687, 65535, 131071, 126975, 114679, 131071, 131071, 65279, 131071, 131071, 131071, 131071, 110591, 122879, 129023};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> A = {16383, 16367, 16375, 16383, 16255, 16383, 15871, 16367, 14335, 15359, 16383, 14335, 16383, 16383, 15357, 16255, 16331, 16383, 16383, 7679, 16367, 16319, 16365, 16383, 16383, 16383, 15999, 16383, 16367, 16383, 15871, 16383, 15871, 16383, 16383, 16383, 16383, 16383, 16383, 16383, 16127, 16383, 16383, 15863, 16383, 8191, 16311, 16383, 16383, 16375};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> A = {16383, 16383, 16383, 16239, 16367, 16383, 16383, 16375, 16383, 16383, 16367, 16367, 15871, 16383, 16359, 15871, 16383, 12223, 16383, 16383, 16383, 16383};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> A = {130, 10240, 520, 12288, 258};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> A = {130, 2560, 2049, 8196, 2056, 136, 1088, 544, 256, 528, 2050, 8193, 66, 5, 130, 3072, 2056, 136, 1536, 8193, 8194, 8208, 1025, 17, 8224, 4352, 4128, 520, 768, 5, 1026, 1152, 4098};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8589933452;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> A = {16448, 66560, 16400, 3072, 66048, 65568, 24, 520, 2064, 514, 16400, 528384, 12, 32832, 1040, 131328, 131074, 18, 520, 1280, 66560, 67584, 262400, 32784, 192, 8704, 65, 2080, 1056, 8194, 12, 557056, 136, 65600, 1040, 144, 72, 262176, 1025, 320, 262148, 262176, 393216, 130, 262400};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 35184372086258;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> A = {81920, 262272, 33280, 2052, 514, 524304, 2080, 8208, 6144, 8200, 131076, 524544, 33792, 33280, 32896, 528, 262656, 2052, 131584, 262400, 16448, 16386, 16416, 130, 1028, 36, 1028, 262160, 525312, 4160, 524296, 67584, 80, 33, 1536, 526336, 2056, 33280, 4, 1056, 524292, 40, 192};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 8796093020330;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> A = {8320, 18, 262176, 1280, 32784, 64, 6, 532480, 2080, 131328, 40960, 33, 524352, 64, 34816, 98304, 524304, 192, 262400, 32832, 65664, 4224, 33792, 16385, 66048, 4096, 8224, 65540, 69632, 263168, 8194, 33, 32800, 34, 524296, 576, 2112, 4352, 524544, 4224, 544, 524289, 20, 73728, 257, 12288, 5120, 257, 4160, 40};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906839322;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> A = {128, 2048, 8192, 1, 16, 16384, 65536, 512, 4, 131072, 1024, 131072, 8, 524288, 262144, 524288, 2, 32768, 16, 128, 16, 262144, 32, 64, 8192, 16, 262144, 32, 16384, 16384, 8, 262144, 32, 128, 128, 4096, 2048, 2, 256, 16, 64, 64, 65536, 128, 512, 4096, 131072, 4, 1024, 4};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842338;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> A = {1092, 1033, 516, 526340, 9280, 5120, 65796, 8258, 8194, 155648, 262657, 6208, 65792, 1184, 133124, 794624, 1057, 769, 393728, 49, 139265, 786944, 80, 525344, 786944, 148, 65541, 295936, 393728, 262148, 16912, 131336, 392, 131104, 196608, 688128, 8210, 2064, 524552, 65576, 65539, 524832, 524336, 262184, 12544, 262149, 524418, 1090, 196616, 49};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906827544;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> A = {524293, 32772, 2192, 65553, 69640, 393280, 266244, 131200, 279552, 278528, 147460, 131105, 16520, 592, 33282, 65793, 2208, 66624, 131075, 265216, 11264, 526848, 1664, 524368, 2084, 540704, 70656, 132097, 34816, 131081, 14336, 540704, 270338, 132224, 32780, 65824, 264196, 81928, 163904, 16912, 73792, 164352, 6146, 526344, 4106, 12544, 32786, 65538, 262156, 65553};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906829948;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> A = {147970, 294980, 720898, 147616, 34, 131210, 10504, 32790, 66570, 81954, 71680, 65561, 561152, 6176, 270496, 643, 532744, 68612, 10304, 2880, 335873, 35200, 534530, 918016, 540720, 2322, 327760, 33920, 131106, 592, 38928, 18500, 92160, 786436, 139408, 69650};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 68719455342;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> A = {33830, 134408, 33060, 2564, 165120, 282, 852033, 16899, 526410, 538632, 4141, 229377, 295952, 131090, 98309, 19204};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 64996;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> A = {13, 10, 4, 15, 4, 8, 4, 2, 4, 14, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1728;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> A = {41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125897730209368;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> A = {1032060, 1048047, 1048555, 1046399, 950139, 1038315, 978937, 753471, 779775, 475007, 1038323, 1038317, 1039983, 524283, 785909, 949243, 1048250, 1048207, 1047039, 1040061, 1031655, 1048510, 521967, 655287, 785913, 221183, 916399, 1040285, 1042927, 1036287, 981949, 1032063, 1042431, 1047469, 915455, 909175, 786399, 1048249, 1039039, 1013754, 392175, 1015541, 979963, 966652, 524271, 499709, 1048318, 1040127, 1048181, 891903};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 651703714456398;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> A = {13, 10, 4, 15, 4, 8, 4, 2, 4, 14, 0, 13, 10, 4, 15, 4, 8, 4, 2, 4, 14, 0, 13, 10, 4, 15, 4, 8, 4, 2, 4, 14, 0, 13, 10, 4, 15, 4, 8, 4, 2, 4, 14, 0};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 17591646961664;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> A = {38, 7719, 21238, 2437, 8855, 11797, 8365, 32285, 10450, 30612, 5853, 28100, 1142, 281, 20537, 15921, 8945, 26285, 2997, 14680, 20976, 31891, 21655, 25906, 18457, 1323, 28881, 2240, 9725, 32278, 2446, 590, 840, 18587, 16907, 21237, 23611, 12617, 12456, 867, 29533, 6878, 28223, 17887, 31597, 20584, 12212, 31111, 7578, 17066};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125892664804268;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> A = {818966, 41682, 170652, 16784, 1019161, 844952, 859453, 930157, 402103, 884678, 717243, 566150, 461997, 849112, 581329, 978154, 709046, 835218, 693328, 374396, 479179, 410848, 451178, 444233, 490990, 459335, 948297, 198320, 218341, 71506, 286291, 708855, 686561, 567224, 984977, 152302, 419964, 926309, 500432, 728729, 575116, 432304, 649253, 258641, 186702, 90332, 481445, 607052, 704330, 911509};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1125887677352484;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> A = {1048574, 1048573, 1048571, 1048567, 1048559, 1048543, 1048511, 1048447, 1048319, 1048063, 1047551, 1046527, 1044479, 1040383, 1032191, 1015807, 983039, 917503, 786431, 524287, 1048574, 1048573, 1048571, 1048567, 1048559, 1048543, 1048511, 1048447, 1048319, 1048063, 1047551, 1046527, 1044479, 1040383, 1032191, 1015807, 983039, 917503, 786431, 524287};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> A = {1048574, 1048573, 1048571, 1048567, 1048559, 1048543, 1048511, 1048447, 1048319, 1048063, 1047551, 1046527, 1044479, 1040383, 1032191, 1015807, 983039, 917503, 786431, 524287, 183332, 778854, 391406, 376137, 1015356, 948831, 579227, 308629, 38745, 717419, 85074, 144305, 368045, 250077, 227287, 415554, 518460, 666758, 78156, 559336, 364978, 764441, 46253, 624649, 291765, 640763, 919737, 684183, 836563, 385353};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1123633681157506;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> A = {1048574, 1048574, 1048573, 1048573, 1048571, 1048571, 1048567, 1048567, 1048559, 1048559, 1048543, 1048543, 1048511, 1048511, 1048447, 1048447, 1048319, 1048319, 1048063, 1048063, 1047551, 1047551, 1046527, 1046527, 1044479, 1044479, 1040383, 1040383, 1032191, 1032191, 1015807, 1015807, 983039, 983039, 917503, 917503, 786431, 786431, 524287, 524287};
    SetAndSet* pObj = new SetAndSet();
    clock_t start = clock();
    long result = pObj->countandset(A);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14737&pm=12004
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define SIZE(X) ((int)(X.size())) 
typedef long long int64; 
#define two(X) (1<<(X)) 
#define contain(S,X) (((S)&two(X))!=0) 
 
class SetAndSet 
{ 
public: 
  int n,c[20],g[20][100]; 
  int64 R; 
  int get_father(int f[],int p) 
  { 
    int r=p; 
    for (;f[r]>=0;r=f[r]); 
    for (int t=f[p];t>=0;p=t,t=f[p]) f[p]=r; 
    return r; 
  } 
  void DFS(int d,int op,int father[60]) 
  { 
    if (d==20) 
    { 
      int s=0; 
      for (int i=0;i<n;i++) if (father[i]<0) s++; 
      int64 cnt=(1LL<<s)-2; 
      if (op==1) 
        R+=cnt; 
      else 
        R-=cnt; 
      return; 
    } 
    DFS(d+1,op,father); 
    if (c[d]<n) 
    { 
      int new_father[60]; 
      for (int i=0;i<n;i++) new_father[i]=father[i]; 
      int key=get_father(new_father,g[d][0]); 
      for (int i=1;i<c[d];i++) 
      { 
        int tmp=get_father(new_father,g[d][i]); 
        if (tmp!=key) new_father[tmp]=key; 
      } 
      DFS(d+1,-op,new_father); 
    } 
  } 
  int64 countandset(vector <int> a) 
  { 
    n=SIZE(a); 
    int mask=a[0]; 
    for (int i=0;i<n;i++) mask&=a[i]; 
    for (int i=0;i<n;i++) a[i]-=a[i]&mask; 
    for (int k=0;k<20;k++) 
    { 
      c[k]=0; 
      for (int i=0;i<n;i++) if (!contain(a[i],k)) g[k][c[k]++]=i; 
      if (c[k]<n && c[k]<2) return 0; 
    } 
    int father[60]; 
    memset(father,255,sizeof(father)); 
    R=0; 
    DFS(0,1,father); 
    return R; 
  } 
};

********************************************************************************
*******************************************************************************/