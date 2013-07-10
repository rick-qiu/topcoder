/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9755
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

class GetToTheTop {
public:
    int collectSweets(int K, vector<int> sweets, vector<int> x, vector<int> y, vector<int> stairLength);
};

int GetToTheTop::collectSweets(int K, vector<int> sweets, vector<int> x, vector<int> y, vector<int> stairLength) {
    int ret;
    return ret;
}


int test0() {
    int K = 20;
    vector<int> sweets = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> x = {2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46, 50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 90, 94, 98, 102, 106, 110, 114, 118, 122, 126, 130, 134, 138, 142, 146, 150, 154, 158, 162, 166, 170, 174, 178, 182, 186, 190, 194, 198};
    vector<int> y = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> stairLength = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 499950;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int K = 2;
    vector<int> sweets = {1, 3, 6, 2, 8, 2};
    vector<int> x = {2, 4, 7, 8, 6, 9};
    vector<int> y = {6, 5, 6, 4, 7, 3};
    vector<int> stairLength = {1, 2, 7, 5, 6, 9};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int K = 4;
    vector<int> sweets = {1, 2, 3, 4, 5};
    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> y = {1, 2, 3, 4, 5};
    vector<int> stairLength = {1, 2, 3, 4, 5};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int K = 9;
    vector<int> sweets = {7, 8, 3};
    vector<int> x = {4, 8, 2};
    vector<int> y = {9, 2, 1};
    vector<int> stairLength = {5, 5, 5};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int K = 3;
    vector<int> sweets = {3, 3, 3, 3};
    vector<int> x = {7, 2, 9, 1};
    vector<int> y = {1, 2, 3, 5};
    vector<int> stairLength = {7, 7, 7, 7};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 2;
    vector<int> sweets = {5, 2, 4, 7, 50, 10, 12};
    vector<int> x = {4, 1, 1, 7, 5, 1, 7};
    vector<int> y = {1, 2, 4, 4, 6, 7, 8};
    vector<int> stairLength = {3, 2, 5, 3, 2, 4, 2};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 2;
    vector<int> sweets = {8, 8, 2, 3, 2, 2, 5, 1};
    vector<int> x = {1, 8, 7, 9, 1, 6, 2, 8};
    vector<int> y = {1, 1, 2, 3, 3, 4, 5, 6};
    vector<int> stairLength = {1, 1, 1, 1, 1, 2, 2, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int K = 3;
    vector<int> sweets = {10, 20, 30, 5, 2, 3, 15, 30, 25};
    vector<int> x = {2, 1, 4, 10, 9, 11, 14, 10, 15};
    vector<int> y = {2, 3, 4, 1, 3, 4, 5, 6, 7};
    vector<int> stairLength = {2, 1, 1, 1, 2, 2, 1, 2, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 3;
    vector<int> sweets = {5, 10, 15, 20, 11, 20, 15, 30};
    vector<int> x = {2, 2, 2, 5, 6, 7, 9, 10};
    vector<int> y = {1, 3, 5, 7, 4, 1, 2, 4};
    vector<int> stairLength = {1, 1, 2, 2, 1, 1, 2, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 7;
    vector<int> sweets = {10, 10, 10, 10};
    vector<int> x = {1, 2, 3, 4};
    vector<int> y = {8, 9, 10, 11};
    vector<int> stairLength = {1000, 1000, 1000, 1000};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 5;
    vector<int> sweets = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> x = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> y = {2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46, 50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 90, 94, 98, 102, 106, 110, 114, 118, 122, 126, 130, 134, 138, 142, 146, 150, 154, 158, 162, 166, 170, 174, 178, 182, 186, 190, 194, 198};
    vector<int> stairLength = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 499950;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 2;
    vector<int> sweets = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    vector<int> x = {2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6};
    vector<int> y = {2, 3, 4, 5, 6, 7, 3, 4, 5, 6, 7, 8, 2, 3, 4, 5, 6, 7};
    vector<int> stairLength = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 50;
    vector<int> sweets = {1000};
    vector<int> x = {1000};
    vector<int> y = {1000};
    vector<int> stairLength = {1000};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 10000;
    vector<int> sweets = {56, 53, 13, 546, 42, 456, 75, 9812, 67, 3, 11, 1001};
    vector<int> x = {45, 77, 567, 142, 998, 675, 446, 347, 2234, 7666, 7765, 654};
    vector<int> y = {441, 6, 768, 236, 7659, 2060, 7580, 1324, 564, 6584, 10, 765};
    vector<int> stairLength = {1000, 34, 655, 126, 238, 23, 1, 1, 1, 1, 1, 1000};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 12135;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 13;
    vector<int> sweets = {11, 22, 33, 44, 55};
    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> y = {1, 2, 3, 4, 5};
    vector<int> stairLength = {1, 2, 3, 4, 5};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 2;
    vector<int> sweets = {1, 2, 3, 4, 3, 5};
    vector<int> x = {1, 1, 1, 4, 5, 5};
    vector<int> y = {1, 3, 4, 1, 2, 3};
    vector<int> stairLength = {2, 1, 1, 2, 1, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 4;
    vector<int> sweets = {2, 8, 7, 4, 1, 4, 7, 5, 11, 4};
    vector<int> x = {2, 9, 4, 6, 10, 5, 2, 8, 1, 10};
    vector<int> y = {1, 1, 3, 3, 3, 5, 6, 6, 8, 9};
    vector<int> stairLength = {2, 2, 1, 2, 2, 2, 4, 3, 2, 2};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 3;
    vector<int> sweets = {1, 1, 1};
    vector<int> x = {1, 4, 6};
    vector<int> y = {1, 4, 1};
    vector<int> stairLength = {2, 1, 2};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int K = 1171;
    vector<int> sweets = {396, 4487, 80, 1130, 2317, 354, 3207, 7455, 64, 788, 5519, 3334, 6110, 7091, 2542, 4414, 5817, 2468, 5468, 156, 4851, 3272, 6058, 5376, 9772, 5772, 5107};
    vector<int> x = {7532, 1717, 4709, 3610, 9294, 2006, 1105, 1592, 1919, 5229, 9986, 713, 4376, 2303, 6517, 3039, 2414, 5818, 2495, 5818, 3993, 717, 6680, 1038, 5844, 4437, 8984};
    vector<int> y = {9005, 6576, 4715, 944, 8102, 7610, 5771, 8186, 3802, 3469, 1611, 3404, 4808, 2646, 1329, 8143, 9046, 9517, 1407, 4824, 442, 8022, 5485, 6098, 292, 9464, 1765};
    vector<int> stairLength = {329, 779, 457, 607, 164, 476, 58, 799, 978, 761, 925, 162, 486, 765, 189, 643, 347, 955, 382, 868, 204, 67, 303, 310, 846, 520, 201};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 12314;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 5749;
    vector<int> sweets = {8859, 210, 7892, 3501, 2132, 7961, 8476, 6416};
    vector<int> x = {9552, 854, 1607, 2474, 7360, 168, 6060, 3265};
    vector<int> y = {489, 632, 1840, 6211, 4344, 4498, 1239, 7551};
    vector<int> stairLength = {848, 243, 742, 210, 331, 678, 229, 660};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 43105;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 3435;
    vector<int> sweets = {5734, 1488, 4146, 4155, 7791, 3719, 3433, 967};
    vector<int> x = {2889, 1923, 5677, 400, 828, 4833, 7336, 2245};
    vector<int> y = {6091, 1944, 8852, 8925, 3141, 1727, 1279, 1811};
    vector<int> stairLength = {524, 477, 508, 334, 796, 966, 692, 12};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 23132;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 8857;
    vector<int> sweets = {6129, 2637, 7061, 9637};
    vector<int> x = {8899, 7139, 3194, 4548};
    vector<int> y = {1252, 4202, 9538, 8055};
    vector<int> stairLength = {572, 811, 669, 46};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 25464;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 9209;
    vector<int> sweets = {581, 9548, 6511, 978, 452, 1257, 6743, 6392, 2069, 6846, 8131, 6409, 4807, 6781, 1751, 1654, 8038, 8803, 1952, 5706, 4942};
    vector<int> x = {1365, 3495, 4017, 6296, 2816, 582, 1231, 139, 9695, 5178, 1758, 7729, 8609, 1622, 912, 4565, 8515, 3092, 6225, 4605, 4061};
    vector<int> y = {7825, 4412, 1432, 1824, 4888, 266, 7239, 488, 9518, 6190, 3093, 9792, 6890, 9577, 5378, 5030, 2514, 2928, 9334, 4105, 6383};
    vector<int> stairLength = {386, 356, 997, 959, 370, 458, 263, 891, 665, 210, 271, 217, 772, 604, 494, 517, 731, 856, 734, 486, 743};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 100351;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 14;
    vector<int> sweets = {3951, 5809, 5511, 8644, 31, 4798, 7483, 5687, 920, 2988, 8425, 1960, 4519, 8562, 3562, 7766, 456, 1813, 6916, 2563, 6014, 1705, 6951, 1440, 5963, 489, 2818, 3914, 6579, 3544, 1692, 7509, 5632};
    vector<int> x = {73, 14, 25, 53, 3406, 92, 356, 214, 25, 1487, 65, 8796, 61, 8291, 28, 96, 840, 6825, 82, 67, 82, 492, 94, 5835, 30, 99, 7102, 15, 53, 47, 242, 66, 57};
    vector<int> y = {58, 16, 84, 67, 26, 615, 65, 155, 409, 771, 2073, 27, 5412, 1287, 71, 92, 9978, 83, 7291, 91, 68, 2045, 235, 121, 33, 46, 25, 250, 232, 237, 145, 89, 87};
    vector<int> stairLength = {258, 505, 315, 165, 445, 686, 510, 619, 340, 523, 57, 789, 4, 526, 551, 210, 557, 614, 645, 472, 227, 924, 803, 610, 148, 471, 631, 368, 586, 111, 939, 564, 899};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 29;
    vector<int> sweets = {7326, 3144, 5286, 2572, 1865, 8177, 6719, 7221, 2051, 8182, 9880, 1647, 6103, 3748, 76, 4471, 3407, 5394, 3527, 9647, 1730};
    vector<int> x = {259, 6715, 2615, 9287, 2927, 131, 3968, 414, 2155, 6065, 787, 8946, 8883, 2489, 1044, 2859, 9912, 2898, 919, 1606, 2780};
    vector<int> y = {9940, 1011, 8417, 1437, 9856, 2723, 5608, 1472, 4641, 601, 2358, 7855, 8072, 3042, 2744, 6324, 3667, 9139, 326, 6183, 5064};
    vector<int> stairLength = {911, 446, 414, 923, 53, 364, 48, 922, 357, 525, 237, 491, 727, 849, 197, 940, 434, 999, 582, 61, 794};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 51;
    vector<int> sweets = {6711, 348};
    vector<int> x = {3072, 9423};
    vector<int> y = {13, 9461};
    vector<int> stairLength = {894, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6711;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 430;
    vector<int> sweets = {1354, 7479, 5421, 7413, 2672, 120, 2006, 1719, 184};
    vector<int> x = {2750, 732, 7446, 8943, 171, 547, 9937, 326, 5606};
    vector<int> y = {41, 1571, 553, 215, 673, 2541, 1319, 1755, 891};
    vector<int> stairLength = {123, 454, 230, 344, 94, 540, 297, 320, 375};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7413;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 2000;
    vector<int> sweets = {871, 7430, 1972, 2668, 1369, 774, 1571, 2538, 908, 6034};
    vector<int> x = {5258, 635, 268, 4710, 5710, 7500, 8192, 5892, 5695, 2330};
    vector<int> y = {405, 5911, 713, 4559, 1695, 8549, 516, 7447, 2368, 744};
    vector<int> stairLength = {249, 195, 508, 214, 318, 222, 250, 774, 452, 232};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 8006;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 23;
    vector<int> sweets = {393, 547, 806, 423, 569, 687, 18, 299, 729, 468, 633, 306, 942, 257, 273, 379, 576, 665, 912, 211, 653, 938, 850, 483, 628, 667, 223, 650, 685, 58, 225, 700, 71, 172, 324, 283, 58, 774, 654, 485, 551, 204, 33, 167};
    vector<int> x = {49, 90, 18, 45, 76, 11, 90, 64, 4, 5, 94, 91, 82, 48, 74, 56, 56, 95, 61, 19, 78, 36, 80, 1, 69, 75, 92, 35, 12, 95, 11, 51, 36, 71, 75, 83, 70, 73, 2, 47, 19, 63, 91, 6};
    vector<int> y = {16, 50, 48, 21, 1, 81, 82, 38, 68, 8, 97, 33, 36, 89, 12, 71, 56, 58, 79, 70, 54, 37, 45, 96, 35, 15, 11, 25, 37, 63, 80, 61, 47, 61, 22, 28, 81, 94, 71, 36, 66, 86, 78, 58};
    vector<int> stairLength = {17, 1, 13, 16, 3, 11, 13, 11, 2, 23, 10, 8, 18, 14, 7, 10, 7, 21, 2, 21, 20, 15, 6, 19, 11, 9, 4, 13, 23, 11, 6, 6, 15, 1, 18, 18, 25, 10, 4, 10, 6, 15, 21, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 13440;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 52;
    vector<int> sweets = {180, 568, 913, 796, 830, 291, 7, 282, 822, 669, 196, 756, 541, 436, 374, 646, 149, 399, 243, 642, 288};
    vector<int> x = {58, 49, 74, 94, 24, 81, 57, 11, 41, 82, 47, 80, 100, 59, 84, 87, 44, 61, 38, 50, 10};
    vector<int> y = {71, 11, 84, 77, 34, 42, 6, 17, 13, 56, 13, 13, 18, 73, 53, 51, 99, 8, 21, 61, 48};
    vector<int> stairLength = {12, 1, 11, 14, 11, 19, 23, 25, 4, 3, 13, 13, 12, 10, 18, 9, 14, 9, 23, 3, 20};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 9458;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 48;
    vector<int> sweets = {27, 818, 945, 65, 740, 971, 977};
    vector<int> x = {6, 42, 6, 21, 87, 54, 40};
    vector<int> y = {83, 71, 47, 30, 33, 72, 18};
    vector<int> stairLength = {14, 10, 13, 9, 9, 19, 14};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3803;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 37;
    vector<int> sweets = {561, 447, 381, 433, 559, 251, 6, 827, 524, 947, 995, 321, 810, 7, 472, 779, 691, 31, 454, 991, 935, 874, 645, 25, 737, 504, 670, 313, 804, 517, 810, 222, 23, 606, 47, 866, 784, 729, 709, 742, 96, 344};
    vector<int> x = {97, 13, 96, 63, 65, 74, 84, 54, 22, 1, 100, 27, 73, 20, 25, 47, 96, 90, 27, 84, 63, 1, 26, 67, 58, 88, 8, 7, 3, 35, 43, 61, 84, 70, 95, 89, 57, 16, 100, 51, 53, 96};
    vector<int> y = {16, 70, 76, 54, 94, 14, 78, 30, 39, 16, 34, 10, 25, 95, 71, 47, 8, 75, 27, 66, 29, 4, 16, 72, 8, 17, 31, 26, 46, 18, 61, 11, 79, 48, 55, 47, 75, 77, 68, 72, 25, 60};
    vector<int> stairLength = {9, 7, 18, 8, 7, 19, 15, 4, 15, 12, 15, 21, 16, 7, 21, 22, 3, 13, 9, 22, 16, 25, 10, 3, 3, 1, 22, 4, 1, 8, 9, 16, 16, 16, 24, 17, 23, 21, 11, 14, 9, 23};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 17334;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 46;
    vector<int> sweets = {569, 295, 342, 667, 269, 971, 537, 531, 902, 286, 631, 818, 840, 59, 318, 105, 479, 848, 713, 110, 698};
    vector<int> x = {46, 79, 20, 32, 99, 24, 30, 90, 52, 42, 30, 42, 81, 34, 10, 95, 40, 55, 58, 2, 50};
    vector<int> y = {45, 71, 7, 83, 86, 61, 58, 37, 2, 27, 41, 53, 68, 32, 60, 74, 68, 24, 47, 73, 7};
    vector<int> stairLength = {19, 15, 4, 20, 22, 18, 6, 13, 21, 23, 25, 19, 12, 21, 6, 7, 22, 13, 20, 18, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10609;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 13;
    vector<int> sweets = {96, 525, 409, 89, 288, 474, 527, 808, 460, 432, 941, 438, 694, 763, 336, 497, 481};
    vector<int> x = {46, 39, 5, 65, 11, 12, 24, 35, 73, 6, 43, 52, 95, 54, 16, 12, 1};
    vector<int> y = {84, 85, 56, 9, 15, 54, 60, 58, 87, 40, 29, 15, 53, 6, 82, 38, 92};
    vector<int> stairLength = {6, 23, 1, 25, 22, 16, 24, 8, 6, 6, 24, 12, 1, 19, 8, 7, 22};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1290;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 2;
    vector<int> sweets = {851, 237, 460, 617, 770, 816, 509, 131, 952, 684, 308, 623, 480, 532, 565, 505, 968};
    vector<int> x = {30, 90, 45, 91, 3, 23, 59, 26, 88, 93, 1, 63, 23, 17, 69, 29, 10};
    vector<int> y = {44, 85, 32, 58, 85, 2, 12, 7, 90, 35, 2, 9, 17, 69, 37, 6, 40};
    vector<int> stairLength = {15, 21, 20, 3, 9, 17, 16, 17, 24, 21, 12, 7, 24, 22, 15, 9, 19};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 816;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 19;
    vector<int> sweets = {54, 977, 880, 548, 464, 53, 456, 555, 720, 459, 353, 793, 965, 968, 144, 518, 70, 485, 441, 432, 609, 954, 50, 175, 164, 892, 331, 740, 642, 770, 43, 390, 304, 964, 919, 132, 824, 949, 311, 18, 742, 227, 377, 982, 377, 500, 939, 930};
    vector<int> x = {1, 95, 84, 48, 42, 61, 9, 20, 96, 43, 9, 78, 55, 82, 70, 42, 74, 22, 29, 77, 94, 86, 56, 19, 21, 72, 6, 37, 78, 28, 72, 99, 90, 26, 8, 2, 17, 2, 36, 3, 16, 70, 87, 16, 9, 90, 48, 93};
    vector<int> y = {60, 45, 72, 81, 12, 18, 16, 58, 5, 7, 57, 10, 14, 95, 59, 9, 34, 80, 86, 99, 87, 42, 65, 21, 22, 48, 99, 36, 16, 90, 70, 56, 14, 76, 2, 20, 85, 81, 21, 52, 15, 36, 46, 59, 63, 2, 37, 86};
    vector<int> stairLength = {3, 25, 2, 14, 10, 23, 23, 7, 18, 22, 17, 19, 6, 3, 22, 20, 8, 4, 19, 7, 1, 19, 14, 10, 19, 25, 4, 8, 21, 1, 5, 18, 8, 18, 12, 4, 11, 14, 22, 12, 5, 20, 21, 25, 23, 5, 6, 23};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 12187;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 1;
    vector<int> sweets = {3, 677, 804, 5, 142, 423, 578, 378, 889, 969, 12, 881, 723, 510, 458, 808, 953};
    vector<int> x = {11, 84, 83, 46, 19, 29, 33, 64, 41, 27, 67, 13, 22, 39, 98, 73, 6};
    vector<int> y = {30, 90, 43, 2, 78, 22, 41, 79, 80, 58, 87, 31, 62, 50, 8, 61, 94};
    vector<int> stairLength = {2, 5, 16, 1, 6, 1, 1, 5, 3, 1, 8, 10, 22, 20, 11, 7, 2};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 21;
    vector<int> sweets = {843, 353, 184, 692, 575, 384, 549, 154, 109, 729, 635, 26, 684, 964, 750, 515, 323, 873, 745, 285, 959, 17, 880, 763, 488, 500, 356, 683, 436, 698, 648, 372, 64, 350, 932, 679, 124, 744, 904, 801, 574, 465, 292, 448, 226, 621};
    vector<int> x = {36, 80, 70, 4, 5, 97, 70, 97, 4, 94, 24, 36, 28, 42, 40, 41, 42, 56, 97, 98, 37, 5, 23, 78, 95, 62, 87, 63, 64, 67, 66, 8, 100, 12, 31, 1, 30, 78, 95, 75, 80, 32, 11, 68, 66, 86};
    vector<int> y = {74, 72, 26, 96, 70, 11, 36, 43, 10, 50, 40, 38, 39, 28, 53, 37, 65, 35, 36, 80, 75, 81, 93, 19, 33, 9, 1, 22, 51, 24, 88, 34, 31, 53, 48, 24, 86, 9, 97, 40, 26, 67, 15, 85, 17, 96};
    vector<int> stairLength = {21, 19, 2, 22, 17, 11, 11, 7, 20, 9, 19, 10, 10, 22, 6, 16, 1, 18, 4, 12, 18, 20, 22, 9, 10, 10, 19, 6, 4, 9, 5, 25, 13, 2, 17, 12, 2, 10, 12, 11, 16, 22, 7, 21, 21, 11};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 18007;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 662;
    vector<int> sweets = {2643, 7240, 2695, 2122, 6077, 6094, 9720, 4126, 1449, 587, 2086, 2225, 5914, 8701, 5373, 6635, 1782, 6543, 9793, 706, 3235, 8907, 1955, 8861, 2118, 8720, 631, 5737, 8031, 8783, 8608, 3672, 7834, 9441, 7386, 7586, 9785, 5807, 3633, 5885, 4273, 8193, 4795, 2204, 8864, 816, 4244, 2349, 936, 4827};
    vector<int> x = {2307, 208, 1738, 8285, 408, 5797, 382, 1664, 675, 2104, 5664, 4887, 3193, 5578, 6887, 4366, 2123, 739, 8719, 4706, 5220, 3709, 6544, 3508, 4417, 3246, 8299, 124, 1777, 6085, 4651, 1692, 4862, 6376, 1450, 5206, 3946, 5565, 9553, 9839, 1918, 2071, 1492, 6757, 7583, 5234, 3005, 9566, 9842, 5202};
    vector<int> y = {8389, 8917, 6075, 898, 7254, 4470, 5395, 8742, 3334, 8453, 7306, 4221, 2278, 8203, 6679, 754, 6289, 4176, 3164, 7145, 5499, 392, 6562, 6550, 3176, 7008, 606, 1405, 399, 4442, 5416, 6379, 8159, 5030, 653, 2469, 6546, 5665, 722, 4304, 1569, 2306, 6828, 3153, 7751, 4707, 9981, 2790, 7674, 4142};
    vector<int> stairLength = {721, 399, 266, 126, 550, 13, 44, 87, 69, 697, 58, 530, 55, 892, 461, 781, 182, 449, 164, 99, 19, 114, 483, 761, 853, 867, 945, 389, 523, 445, 294, 806, 595, 910, 853, 10, 851, 879, 845, 619, 799, 687, 77, 235, 571, 158, 488, 395, 58, 412};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 15542;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 7586;
    vector<int> sweets = {2542, 534, 5232, 7938, 2877, 4687, 708, 3009, 8310, 2293, 345, 6782, 263, 2643, 7722, 1843, 5281, 4027, 1418, 1002, 6707, 7489, 3413, 692, 1123, 1362, 3994, 6487, 4640, 3351, 5193, 6258, 8530, 8092, 3851, 6778, 390, 3560, 1420, 1166, 4149, 1083, 9930, 5760, 4001, 2078, 1599, 8503, 3528, 6520};
    vector<int> x = {9975, 5348, 9173, 5912, 9823, 2981, 7943, 2720, 7265, 4229, 5986, 1152, 5934, 4371, 2593, 2349, 2843, 9909, 4573, 9010, 7315, 1671, 2727, 1020, 8844, 2672, 5189, 9059, 7240, 3655, 1914, 235, 3504, 997, 8233, 6587, 4316, 7596, 3259, 6845, 7991, 2488, 8302, 7207, 4753, 9363, 7425, 9816, 7508, 815};
    vector<int> y = {996, 2558, 2893, 8973, 3472, 3559, 595, 1969, 3913, 9442, 6176, 117, 1611, 9312, 5280, 1445, 3668, 3741, 1882, 4098, 6438, 8826, 4139, 8342, 2749, 3355, 4741, 8023, 2467, 8163, 6551, 5515, 1761, 1007, 5278, 4475, 5081, 7746, 7819, 9179, 9825, 2527, 614, 5545, 9250, 3308, 2979, 1381, 2064, 8789};
    vector<int> stairLength = {565, 80, 473, 732, 774, 115, 982, 960, 903, 926, 438, 113, 629, 992, 166, 751, 805, 486, 132, 452, 57, 777, 146, 521, 134, 214, 811, 417, 136, 241, 896, 157, 625, 145, 915, 160, 223, 706, 653, 715, 396, 334, 37, 220, 172, 694, 730, 147, 106, 305};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 193011;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 3353;
    vector<int> sweets = {8513, 5669, 6405, 3727, 721, 6585, 7481, 4568, 7838, 4796, 5735, 7509, 3405, 2409, 243, 2083, 8107, 3549, 7575, 4982, 9301, 9419, 4710, 7922, 8702, 9135, 27, 9680, 8288, 148, 2277, 8535, 2576, 7224, 4365, 1868, 2652, 4862, 5252, 3238, 8192, 3206, 1266, 8963, 3291, 5707, 3329, 7955, 6165, 8602};
    vector<int> x = {3014, 5665, 7743, 191, 8417, 2788, 6951, 1738, 6536, 1965, 6393, 8183, 2302, 6557, 8789, 5921, 6935, 3404, 2450, 1736, 7473, 584, 6071, 2563, 2756, 9377, 3355, 37, 7597, 4065, 1054, 9806, 7735, 7457, 2647, 2005, 9644, 5017, 1695, 1956, 1435, 6406, 926, 2244, 810, 531, 4661, 5850, 7375, 5377};
    vector<int> y = {3632, 6235, 8869, 8622, 5318, 7176, 8767, 3702, 9433, 709, 1187, 5076, 64, 2403, 977, 1691, 401, 6890, 2871, 693, 46, 542, 5149, 1346, 208, 8051, 1233, 2310, 7091, 3156, 9583, 738, 3377, 190, 9380, 8225, 1059, 2610, 1717, 997, 2116, 2203, 571, 8292, 9687, 8989, 4193, 9534, 6396, 2927};
    vector<int> stairLength = {181, 551, 516, 13, 724, 592, 695, 24, 362, 495, 644, 486, 843, 120, 307, 659, 636, 502, 221, 963, 583, 829, 485, 376, 656, 908, 741, 378, 590, 605, 964, 400, 558, 975, 158, 455, 923, 470, 715, 929, 106, 162, 820, 952, 677, 230, 427, 275, 317, 881};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 177481;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 3137;
    vector<int> sweets = {9197, 3222, 1040, 430, 4458, 2312, 3372, 2186, 7510, 5561, 7779, 9659, 150, 4018, 5384, 282, 2559, 5251, 670, 5430, 2958, 2271, 6247, 2560, 2275, 2589, 8508, 7852, 1200, 6653, 8744, 2510, 6211, 1124, 8896, 648, 886, 3489, 8219, 5757, 1850, 35, 5993, 481, 2267, 928, 2712, 7152, 7978, 2316};
    vector<int> x = {7587, 3324, 7054, 2094, 380, 3855, 5218, 5953, 2064, 4529, 597, 779, 4117, 6476, 4978, 2349, 1383, 838, 3971, 341, 1261, 9931, 5566, 5555, 8605, 5132, 4771, 7816, 5005, 7720, 2227, 3893, 1917, 7896, 7714, 2226, 2721, 1440, 4736, 3373, 7043, 5989, 1557, 8325, 424, 8105, 8284, 1447, 9746, 190};
    vector<int> y = {8973, 8785, 5341, 4968, 2662, 7663, 5507, 4256, 3382, 8222, 1677, 5880, 2800, 7231, 9850, 9930, 9431, 4273, 4445, 515, 7806, 1165, 5763, 8687, 2863, 9348, 3678, 1032, 2937, 4728, 3223, 9904, 6447, 4600, 5523, 1964, 990, 4897, 1635, 2084, 8446, 9777, 4722, 3897, 5245, 7806, 4874, 3271, 2631, 5031};
    vector<int> stairLength = {558, 762, 232, 497, 60, 145, 573, 564, 674, 376, 712, 4, 599, 728, 856, 277, 928, 299, 293, 233, 384, 973, 595, 684, 54, 591, 267, 90, 214, 647, 509, 790, 770, 12, 122, 237, 849, 361, 584, 330, 448, 184, 494, 99, 311, 930, 723, 972, 167, 524};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 135051;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 4909;
    vector<int> sweets = {2661, 2577, 9751, 617, 2246, 5174, 8247, 1200, 4087, 5992, 957, 7997, 4478, 1160, 5089, 9398, 9872, 5359, 3237, 522, 3236, 7890, 1989, 9777, 8049, 1411, 6051, 3763, 2964, 9873, 187, 3012, 1704, 4029, 9993, 2482, 9500, 2379, 6147, 3526, 1255, 8405, 6576, 9809, 5566, 6041, 2642, 54, 5908, 2542};
    vector<int> x = {8151, 4787, 9509, 7443, 5149, 2478, 2479, 8153, 4622, 5244, 5774, 8895, 1462, 9621, 9238, 3545, 8038, 8957, 3253, 9448, 2720, 8580, 2461, 9220, 1072, 9950, 9943, 5911, 8301, 6416, 1541, 8845, 3168, 1788, 7526, 250, 7492, 7901, 6207, 1260, 6991, 2662, 56, 8466, 5441, 7239, 38, 5132, 2811, 9265};
    vector<int> y = {1204, 3733, 5681, 545, 3935, 1290, 4309, 5746, 1372, 1245, 977, 690, 7220, 4726, 6987, 5170, 3749, 3027, 3851, 3968, 7035, 4681, 9717, 3109, 9901, 4380, 2135, 3888, 4331, 6749, 3732, 2737, 4550, 772, 5456, 665, 7199, 1087, 3787, 6656, 5780, 7658, 7202, 5654, 248, 47, 2292, 2927, 2962, 6544};
    vector<int> stairLength = {794, 725, 129, 615, 840, 931, 706, 147, 386, 504, 139, 955, 893, 472, 797, 92, 10, 298, 250, 746, 414, 891, 429, 94, 175, 835, 281, 288, 215, 999, 445, 334, 133, 159, 568, 350, 633, 576, 169, 745, 791, 541, 897, 977, 519, 193, 572, 781, 92, 969};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 184319;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 10000;
    vector<int> sweets = {1597, 6120, 6002, 8475, 6871, 4767, 2157, 4891, 7329, 2464, 2350, 3986, 6888, 781, 1097, 3703, 1264, 7526, 9868, 3664, 7817, 692, 1273, 940, 2935, 5499, 1181, 158, 9271, 4022, 4357, 1721, 1073, 7516, 2205, 9919, 3570, 513, 2260, 909, 7565, 4024, 3940, 4200, 1647, 5628, 4916, 5325, 5285, 4032};
    vector<int> x = {3535, 7468, 1854, 7214, 3296, 618, 2171, 4587, 8693, 3672, 950, 8046, 3103, 6317, 5285, 7237, 7190, 4106, 6381, 2377, 1534, 4503, 4659, 6245, 9032, 2193, 4095, 7081, 1638, 8643, 9090, 2336, 371, 1315, 9370, 717, 1442, 736, 1123, 8924, 4231, 8042, 513, 1736, 8867, 9698, 7932, 792, 6388, 1828};
    vector<int> y = {5595, 7285, 6229, 5237, 6394, 931, 3409, 7871, 5688, 3421, 8772, 7196, 2579, 4306, 9373, 5680, 1259, 3915, 2136, 6405, 1549, 4752, 4287, 4004, 8913, 9547, 6386, 3810, 2209, 4236, 242, 5021, 6444, 1085, 900, 5336, 3868, 8535, 8339, 5635, 9604, 9765, 7925, 3247, 7309, 6999, 7570, 7889, 3810, 9099};
    vector<int> stairLength = {161, 61, 660, 100, 988, 536, 67, 793, 516, 598, 117, 324, 765, 355, 953, 443, 448, 629, 686, 302, 810, 252, 972, 764, 247, 389, 110, 685, 784, 572, 890, 424, 234, 729, 635, 367, 824, 101, 974, 768, 883, 644, 740, 797, 56, 733, 495, 479, 346, 72};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 206193;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 5710;
    vector<int> sweets = {5089, 9157, 1628, 3923, 7974, 1979, 5448, 8620, 2544, 5780, 7620, 305, 1410, 120, 3409, 3474, 3840, 3216, 1874, 6239, 5359, 150, 7209, 8289, 6071, 2258, 266, 9109, 6464, 9331, 4296, 2346, 6502, 1954, 7586, 4502, 3205, 2241, 4273, 652, 5906, 9604, 8381, 264, 2451, 8785, 5508, 7926, 9613, 3370};
    vector<int> x = {9120, 2874, 8767, 933, 3117, 8359, 6344, 73, 7798, 8522, 2415, 9710, 3380, 7079, 9555, 8469, 2228, 7791, 4429, 7545, 2629, 9709, 2191, 9088, 990, 5473, 8776, 1552, 8466, 3756, 8683, 2559, 1415, 8140, 290, 6350, 6771, 6906, 141, 648, 7736, 5841, 5504, 5719, 9346, 5969, 2763, 3688, 9311, 436};
    vector<int> y = {9890, 4316, 2231, 2928, 7675, 6220, 4140, 2151, 1935, 5520, 2128, 5322, 3540, 3019, 6903, 5364, 1747, 4906, 2562, 3330, 2180, 5291, 9939, 4470, 7643, 2080, 6675, 2316, 4339, 3445, 8736, 65, 6217, 4111, 6956, 7296, 1099, 7206, 6244, 3200, 2546, 4724, 5965, 9067, 7100, 8334, 4677, 4176, 2574, 9923};
    vector<int> stairLength = {464, 947, 389, 492, 789, 157, 358, 556, 35, 68, 604, 913, 888, 821, 69, 462, 269, 117, 246, 538, 955, 595, 838, 2, 702, 565, 293, 410, 164, 987, 901, 966, 783, 914, 136, 724, 451, 426, 483, 637, 72, 921, 963, 700, 651, 993, 351, 278, 794, 80};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 199966;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 2504;
    vector<int> sweets = {3239, 3648, 9181, 584, 3669, 5660, 8697, 7958, 6301, 7888, 3375, 5440, 1823, 8146, 2940, 7585, 3068, 1419, 9194, 2733, 572, 9216, 1866, 4256, 8673, 9211, 4624, 227, 9965, 2538, 3673, 4699, 22, 2683, 1979, 9135, 2738, 2483, 2377, 9309, 7118, 4449, 684, 44, 7592, 9434, 1462, 5448, 388, 5674};
    vector<int> x = {7425, 9292, 6890, 8716, 1440, 504, 7537, 5237, 1339, 2956, 4986, 3753, 9601, 532, 4755, 1454, 3633, 3997, 3265, 666, 2869, 318, 1001, 3529, 1946, 8695, 9274, 223, 1425, 1721, 2733, 4127, 2539, 1318, 8736, 3724, 1888, 3578, 4480, 3296, 8129, 6265, 2117, 2043, 3792, 2395, 1507, 5822, 5340, 5604};
    vector<int> y = {8456, 1436, 6827, 8574, 94, 11, 1167, 2406, 5483, 8785, 7040, 8595, 366, 8374, 1040, 5057, 9083, 9317, 3810, 6209, 4713, 6840, 2618, 2731, 6682, 4161, 8038, 438, 3277, 3884, 1259, 9846, 83, 4803, 9108, 8741, 2238, 4754, 8999, 7013, 9216, 5133, 746, 8646, 6961, 8335, 2966, 8339, 7458, 5892};
    vector<int> stairLength = {368, 846, 852, 973, 706, 127, 627, 738, 303, 468, 736, 500, 628, 876, 682, 337, 306, 570, 679, 988, 73, 554, 482, 947, 788, 219, 9, 108, 421, 871, 438, 339, 233, 79, 389, 951, 302, 907, 974, 270, 12, 752, 293, 142, 561, 267, 864, 718, 504, 598};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 158477;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 1234;
    vector<int> sweets = {3511, 9507, 228, 1152, 7851, 784, 1791, 2877, 3509, 9176, 6041, 1225, 3023, 9368, 766, 9416, 8478, 3487, 811, 4335, 9404, 8754, 7942, 206, 5013, 386, 2606, 1637, 3417, 1465, 6939, 3181, 1057, 2555, 2139, 232, 1160, 5966, 7643, 3902, 9577, 3619, 4810, 226, 399, 2359, 3595, 8078, 6126, 555};
    vector<int> x = {5468, 1991, 861, 7941, 5219, 2952, 7348, 459, 9221, 5444, 5130, 6678, 7489, 1795, 6125, 2174, 4509, 5360, 5180, 9803, 7140, 2066, 557, 878, 9091, 8153, 8272, 2914, 4159, 1932, 9923, 1459, 7178, 2961, 7413, 5935, 822, 9069, 4031, 4412, 9369, 2030, 991, 7065, 8370, 9367, 7671, 25, 523, 1580};
    vector<int> y = {4118, 8186, 4484, 3932, 1639, 4160, 3903, 1896, 7223, 7932, 7287, 6259, 1146, 7555, 8270, 8516, 8574, 3830, 8076, 2501, 5152, 4288, 7355, 366, 4574, 2078, 608, 9331, 1811, 847, 909, 3099, 832, 1181, 8261, 5843, 4359, 6746, 1182, 1571, 8509, 2495, 8525, 175, 912, 737, 9582, 2353, 9462, 1476};
    vector<int> stairLength = {637, 936, 777, 327, 615, 494, 582, 281, 500, 420, 323, 537, 919, 644, 208, 880, 25, 258, 824, 886, 804, 713, 439, 63, 70, 184, 977, 496, 776, 791, 997, 667, 631, 263, 418, 880, 17, 857, 154, 900, 275, 838, 486, 998, 370, 775, 729, 840, 592, 422};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 32678;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 983;
    vector<int> sweets = {1198, 5819, 1051, 229, 8871, 8398, 6630, 7075, 4411, 483, 7658, 851, 8715, 5878, 9662, 9267, 7044, 7885, 5244, 2300, 2070, 882, 7069, 6054, 2783, 7265, 710, 630, 6469, 6031, 2347, 2233, 1160, 5277, 2184, 1448, 643, 4878, 4759, 4723, 7309, 5012, 5978, 7996, 1106, 6818, 2901, 6319, 2838, 2958};
    vector<int> x = {2268, 5358, 7288, 7099, 2806, 9245, 756, 9356, 1899, 5794, 2464, 8706, 7734, 2670, 3763, 6711, 6500, 4995, 9370, 6794, 9619, 2723, 566, 8580, 8296, 1757, 588, 8474, 9410, 6564, 5367, 1332, 3454, 594, 3585, 45, 4538, 7949, 2387, 6828, 5311, 1096, 8616, 4721, 5897, 7276, 4345, 2930, 3400, 5623};
    vector<int> y = {2214, 9708, 7692, 6808, 6024, 2381, 1899, 5835, 5686, 7640, 7479, 551, 6907, 93, 2562, 7367, 1629, 8100, 4322, 7812, 1175, 996, 5472, 4383, 806, 9734, 4278, 7277, 562, 3180, 2410, 1652, 271, 5596, 533, 2243, 8676, 66, 2585, 711, 3499, 8901, 930, 1275, 2218, 1608, 2106, 5119, 6080, 6900};
    vector<int> stairLength = {782, 32, 375, 925, 916, 930, 592, 55, 639, 256, 645, 867, 841, 772, 973, 922, 878, 110, 570, 384, 957, 844, 746, 78, 219, 649, 30, 424, 698, 915, 281, 98, 281, 928, 716, 527, 829, 1, 817, 682, 376, 594, 374, 33, 247, 321, 947, 919, 474, 822};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 41337;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 10;
    vector<int> sweets = {1, 3, 5, 7};
    vector<int> x = {1, 6, 2, 8};
    vector<int> y = {2, 4, 1, 2};
    vector<int> stairLength = {4, 1, 7, 4};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 3;
    vector<int> sweets = {80, 20, 15, 13, 10, 7, 8, 9, 1, 4, 3, 15, 14, 19, 22, 12, 6, 15, 10, 30, 1, 1};
    vector<int> x = {2, 8, 11, 17, 20, 14, 10, 16, 8, 14, 19, 6, 6, 6, 6, 15, 15, 15, 14, 20, 20, 20};
    vector<int> y = {1, 2, 3, 2, 1, 4, 6, 7, 8, 8, 8, 9, 10, 11, 12, 9, 10, 11, 12, 9, 10, 11};
    vector<int> stairLength = {2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int K = 1000;
    vector<int> sweets = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9999};
    vector<int> x = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 2020};
    vector<int> y = {2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46, 50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 90, 94, 98, 102, 106, 110, 114, 118, 122, 126, 130, 134, 138, 142, 146, 150, 154, 158, 162, 166, 170, 174, 178, 182, 186, 190, 194, 2};
    vector<int> stairLength = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 9999;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 10000;
    vector<int> sweets = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> x = {1235, 7400, 1854, 7214, 3296, 618, 2171, 4587, 8693, 362, 950, 8046, 103, 6317, 5285, 7237, 7190, 4106, 6381, 2377, 1534, 4503, 4659, 6245, 9032, 2193, 4095, 7081, 1638, 8643, 9090, 2336, 371, 1315, 9370, 717, 1442, 736, 1123, 8924, 4231, 8042, 513, 1736, 8867, 9698, 7932, 792, 6388, 1828};
    vector<int> y = {5595, 7285, 6229, 5230, 6394, 931, 3400, 7871, 688, 3421, 8772, 7196, 2579, 4006, 9373, 5680, 1259, 3915, 2136, 6405, 1549, 4752, 4287, 4004, 8913, 9547, 6386, 3810, 2209, 4236, 242, 5021, 6444, 1085, 900, 5336, 3868, 8535, 8339, 5635, 9604, 9765, 7925, 3247, 7309, 6999, 7570, 7889, 3810, 9099};
    vector<int> stairLength = {161, 61, 660, 100, 988, 536, 67, 793, 516, 598, 117, 324, 765, 355, 953, 443, 448, 629, 686, 302, 810, 252, 972, 764, 247, 389, 110, 685, 784, 572, 890, 424, 234, 729, 635, 367, 824, 101, 974, 768, 883, 644, 740, 797, 56, 733, 495, 479, 346, 72};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 10;
    vector<int> sweets = {0, 10, 11, 2, 0};
    vector<int> x = {1, 26, 29, 22, 3};
    vector<int> y = {1, 83, 88, 22, 5};
    vector<int> stairLength = {11, 1, 23, 15, 8};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 10000;
    vector<int> sweets = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> x = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> y = {10000, 9999, 9998, 9997, 9996, 9995, 9994, 9993, 9992, 9991, 9990, 9989, 9988, 9987, 9986, 9985, 9984, 9983, 9982, 9981, 9980, 9979, 9978, 9977, 9976, 9975, 9974, 9973, 9972, 9971, 9970, 9969, 9968, 9967, 9966, 9965, 9964, 9963, 9962, 9961, 9960, 9959, 9958, 9957, 9956, 9955, 9954, 9953, 9952, 9951};
    vector<int> stairLength = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 499950;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 171;
    vector<int> sweets = {9773, 137, 3453, 3391, 4276, 1747, 8237, 7035};
    vector<int> x = {1243, 832, 1967, 815, 978, 878, 1230, 2336};
    vector<int> y = {14, 15, 15, 14, 23, 27, 6, 6};
    vector<int> stairLength = {518, 158, 167, 7, 485, 41, 560, 317};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 24033;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 5;
    vector<int> sweets = {2, 0, 5};
    vector<int> x = {1, 8, 9};
    vector<int> y = {6, 6, 1};
    vector<int> stairLength = {3, 6, 3};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 2;
    vector<int> sweets = {2, 9, 9, 1, 9, 9, 8};
    vector<int> x = {10, 8, 6, 6, 8, 7, 3};
    vector<int> y = {6, 7, 5, 4, 5, 2, 5};
    vector<int> stairLength = {1, 1, 1, 1, 1, 1, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 2660;
    vector<int> sweets = {6077, 7134, 9522, 9760, 8572, 2766, 3479, 4377};
    vector<int> x = {4300, 9396, 3338, 2085, 5000, 8441, 6776, 7387};
    vector<int> y = {208, 232, 232, 208, 40, 232, 138, 208};
    vector<int> stairLength = {569, 830, 845, 305, 83, 636, 561, 734};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 42165;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 4567;
    vector<int> sweets = {220, 8766, 8483, 1012, 3292, 6337, 8187, 7389};
    vector<int> x = {6394, 3889, 7636, 7466, 9787, 8489, 1648, 1632};
    vector<int> y = {4493, 6260, 1920, 6260, 6517, 4493, 159, 6260};
    vector<int> stairLength = {226, 859, 186, 834, 495, 1, 358, 578};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 35499;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int K = 2325;
    vector<int> sweets = {8180, 6689, 2087, 7825, 8961, 7754, 2342, 6109};
    vector<int> x = {2832, 4617, 8416, 2265, 6517, 4897, 1780, 1887};
    vector<int> y = {1527, 541, 541, 2108, 2108, 1527, 812, 1527};
    vector<int> stairLength = {459, 430, 298, 506, 366, 352, 412, 559};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 37693;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int K = 1831;
    vector<int> sweets = {1869, 2006, 687, 7493, 4296, 6196, 5513};
    vector<int> x = {133, 2590, 3394, 1379, 3001, 2054, 74};
    vector<int> y = {1162, 1162, 2269, 1162, 711, 711, 711};
    vector<int> stairLength = {417, 270, 790, 515, 49, 526, 893};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 28060;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int K = 1587;
    vector<int> sweets = {6221, 2591, 1164, 1196, 2766};
    vector<int> x = {1803, 428, 1973, 1824, 96};
    vector<int> y = {267, 267, 217, 1482, 267};
    vector<int> stairLength = {63, 72, 29, 8, 75};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 13938;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int K = 181;
    vector<int> sweets = {291, 2463, 3906};
    vector<int> x = {3894, 5037, 5254};
    vector<int> y = {130, 46, 209};
    vector<int> stairLength = {20, 328, 239};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6369;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int K = 185;
    vector<int> sweets = {5601, 7125, 6440, 1238, 2758, 8503, 3152};
    vector<int> x = {1150, 543, 2034, 2260, 77, 436, 1565};
    vector<int> y = {4897, 4057, 158, 26, 4897, 4463, 4057};
    vector<int> stairLength = {384, 362, 401, 460, 65, 111, 470};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7678;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int K = 276;
    vector<int> sweets = {3682, 9620, 9172, 8444, 6603};
    vector<int> x = {575, 336, 148, 395, 43};
    vector<int> y = {310, 46, 947, 46, 46};
    vector<int> stairLength = {357, 30, 254, 348, 123};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 28349;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int K = 244;
    vector<int> sweets = {7294, 3214, 2472, 1517, 8484, 9920, 7793, 5409, 452, 9868};
    vector<int> x = {1094, 3071, 1417, 1496, 432, 313, 2908, 2962, 2600, 2750};
    vector<int> y = {444, 199, 199, 578, 871, 195, 247, 578, 195, 444};
    vector<int> stairLength = {916, 156, 679, 395, 954, 793, 967, 205, 154, 452};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 26284;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int K = 84;
    vector<int> sweets = {9024, 4313, 37, 2078, 7036, 3611, 2759, 6854, 3427};
    vector<int> x = {1492, 2850, 1950, 310, 1535, 4561, 1620, 536, 2859};
    vector<int> y = {185, 33, 33, 125, 125, 125, 107, 33, 107};
    vector<int> stairLength = {336, 46, 189, 45, 274, 466, 468, 159, 279};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 18856;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int K = 2;
    vector<int> sweets = {2, 9, 9, 1, 9, 9, 8};
    vector<int> x = {10, 8, 6, 6, 8, 7, 3};
    vector<int> y = {6, 7, 5, 4, 5, 2, 5};
    vector<int> stairLength = {1, 1, 1, 1, 1, 1, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int K = 4;
    vector<int> sweets = {1, 2, 3, 4, 3, 5};
    vector<int> x = {1, 1, 1, 4, 5, 5};
    vector<int> y = {1, 3, 4, 1, 2, 3};
    vector<int> stairLength = {2, 1, 1, 2, 1, 1};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int K = 10;
    vector<int> sweets = {0, 10, 11, 2, 0};
    vector<int> x = {1, 26, 29, 22, 3};
    vector<int> y = {1, 83, 88, 22, 5};
    vector<int> stairLength = {11, 1, 23, 15, 8};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int K = 555;
    vector<int> sweets = {1, 45, 56, 34, 567, 45, 657, 867, 686, 345, 234, 464, 674, 345, 444, 555, 666, 777, 234, 12, 345, 65};
    vector<int> x = {1, 45, 56, 34, 567, 45, 657, 8676, 6868, 345, 2345, 4645, 674, 3454, 4444, 5555, 6666, 7777, 2334, 12, 345, 65};
    vector<int> y = {1, 45, 56, 32, 45, 566, 67, 678, 5656, 56, 678, 56, 3434, 456, 4545, 565, 6767, 78, 54, 6767, 43, 54};
    vector<int> stairLength = {1, 45, 56, 34, 567, 45, 657, 867, 686, 345, 234, 464, 674, 345, 444, 555, 666, 777, 234, 12, 345, 65};
    GetToTheTop* pObj = new GetToTheTop();
    clock_t start = clock();
    int result = pObj->collectSweets(K, sweets, x, y, stairLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2115;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22706163&rd=12176&pm=9755
********************************************************************************
#include <stdio.h> 
#include <math.h> 
#include <algorithm> 
#include <vector> 
#include <map> 
#include <set> 
#include <iostream> 
#include <iomanip> 
#include <string> 
#include <queue> 
#include <stack> 
#include <memory.h> 
#include <sstream> 
using namespace std; 
 
inline long min(long a,long b){return a<b?a:b;} 
inline long max(long a,long b){return a>b?a:b;} 
inline void swap(long &a,long &b){long tmp=a;a=b,b=tmp;} 
 
struct point {long x1,x2,y,s;}; 
bool cmp(const point  &a,const point &b) 
{if(a.y==b.y)return a.x1<b.x1;return a.y<b.y;} 
class GetToTheTop{ 
public: 
    point p[100]; 
    int dp[100],w[100]; 
    long fa[100]; 
    double tk; 
    char cal(char s1,char s2) 
    { 
        long l1=s1-'0'; 
        long l2=s2-'0'; 
 
        for(int i=0;i<=9;i++) 
            if((l1+i)%10==l2)return char(i+'0'); 
    } 
 
    double dist(long x1,long y1,long x2,long y2) 
    { 
        return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)); 
    } 
    int findset(long v) 
    { 
        long u=v,t; 
        while(v!=fa[v])v=fa[v]; 
        while(u!=v){t=fa[u];fa[u]=v;u=t;} 
        return v; 
    } 
    void unionset(long a,long b) 
    { 
        long aa=findset(a); 
        long bb=findset(b); 
        fa[aa]=bb; 
    } 
 
    bool isok(long a,long b) 
    { 
        if(p[b].x1<=p[a].x2&&p[b].x1>=p[a].x1|| 
           p[b].x2<=p[a].x2&&p[b].x2>=p[a].x1|| 
           p[b].x2>=p[a].x2&&p[b].x1<=p[a].x1) 
        { 
            if(p[b].y-p[a].y<=tk)return 1; 
        } 
        if(dist(p[b].x1,p[b].y,p[a].x1,p[a].y)<=tk)return 1; 
        if(dist(p[b].x2,p[b].y,p[a].x1,p[a].y)<=tk)return 1; 
        if(dist(p[b].x1,p[b].y,p[a].x2,p[a].y)<=tk)return 1; 
        if(dist(p[b].x2,p[b].y,p[a].x2,p[a].y)<=tk)return 1; 
        return 0; 
    } 
    int collectSweets(int K, vector <int> s, vector <int> x, vector <int> y, vector <int> L) 
    { 
        int ans = 0; 
        tk=K; 
        int i,j,k,n; 
        s.push_back(0); 
        x.push_back(0); 
        y.push_back(0); 
        L.push_back(20000); 
        for(i=0;i<s.size();i++)fa[i]=i,dp[i]=-1,w[i]=0; 
        for(i=0;i<s.size();i++) 
        { 
            p[i].s=s[i]; 
            p[i].x1=x[i]; 
            p[i].x2=x[i]+L[i]; 
            p[i].y=y[i]; 
        } 
        sort(p,p+s.size(),cmp); 
        for(i=0;i<s.size();i++) 
        { 
            for(j=i+1;j<s.size();j++) 
            { 
                if(p[i].y==p[j].y) 
                { 
                    if((p[j].x1-p[i].x2)<=K)unionset(i,j); 
                } 
            } 
        } 
        for(i=0;i<s.size();i++) 
        { 
            j=findset(i); 
            w[j]+=p[i].s; 
        } 
        long aa,bb; 
        dp[findset(0)]=0; 
        for(i=0;i<s.size();i++) 
        { 
            aa=findset(i); 
            if(dp[aa]==-1)continue; 
            for(j=i+1;j<s.size();j++) 
            { 
                bb=findset(j); 
                if(aa==bb)continue; 
                if(isok(i,j)) 
                { 
                    dp[bb]=max(dp[bb],dp[aa]+w[bb]); 
                    ans = max(ans,dp[bb]); 
                } 
            } 
        } 
        return ans; 
 
    } 
 
};

********************************************************************************
*******************************************************************************/