/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1888
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

class Swimmers {
public:
    vector<int> getSwimTimes(vector<int> distances, vector<int> speeds, int current);
};

vector<int> Swimmers::getSwimTimes(vector<int> distances, vector<int> speeds, int current) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> distances = {300, 300, 300};
    vector<int> speeds = {1, 2, 3};
    int current = 2;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, 360};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> distances = {500, 500};
    vector<int> speeds = {4, 5};
    int current = 2;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {333, 238};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> distances = {0, 0};
    vector<int> speeds = {1, 2};
    int current = 1;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> distances = {0, 1};
    vector<int> speeds = {0, 0};
    int current = 0;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, -1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> distances = {7507, 7517, 7523, 7529, 7537, 7541, 7547, 7549, 7559, 7561, 7573, 7577, 7583, 7589, 7591, 7603, 7607, 7621, 7639, 7643, 7649, 7669, 7673, 7681, 7687, 7691, 7699, 7703, 7717, 7723, 7727, 7741, 7753, 7757, 7759, 7789, 7793, 7817, 7823, 7829, 7841, 7853, 7867, 7873, 7877, 7879, 7883, 7901, 7907, 7919};
    vector<int> speeds = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 99, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 51};
    int current = 6;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, 8108, 1950, 1474, 1014, 882, 705, 544, 507, 420, 377, 359, 328, 290, 260, 252, 229, 216, 210, 195, 185, 173, 159, 155, -1, -1, 4409, 2413, 1717, 1354, 1127, 969, 852, 764, 692, 635, 585, 543, 507, 476, 449, 424, 402, 383, 365, 349, 334, 314};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> distances = {10000, 10000, 10000};
    vector<int> speeds = {17, 19, 24};
    int current = 11;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2023, 1583, 1054};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> distances = {9999, 9999, 9999, 1234};
    vector<int> speeds = {50, 100, 85, 12};
    int current = 4;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {402, 200, 235, 231};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> distances = {10000, 9000, 8000, 7000, 6000, 5000, 4000, 3000, 2000, 1000, 500};
    vector<int> speeds = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90};
    int current = 10;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {202, 183, 164, 145, 126, 106, 86, 65, 43, 22, 11};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> distances = {10000, 9000, 8000, 7000, 6000, 5000, 4000, 3000, 2000, 1000, 500};
    vector<int> speeds = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90};
    int current = 8;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {201, 183, 164, 145, 125, 106, 85, 64, 43, 22, 11};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> distances = {1234, 2468, 3691, 4816, 5101, 6122, 7142, 8163, 9183};
    vector<int> speeds = {12, 24, 36, 48, 51, 61, 71, 81, 91};
    int current = 1;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {207, 206, 205, 200, 200, 200, 201, 201, 201};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> distances = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192};
    vector<int> speeds = {2, 4, 8, 16, 32, 64, 100, 63, 31, 15, 7, 3, 1};
    int current = 1;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 2, 2, 2, 8, 33, 137, 597, 3072, -1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> distances = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192};
    vector<int> speeds = {2, 4, 8, 16, 32, 64, 100, 63, 31, 15, 7, 3, 1};
    int current = 1;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 2, 2, 2, 8, 33, 137, 597, 3072, -1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> distances = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> speeds = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int current = 14;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 15};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> distances = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> speeds = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int current = 6;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, 7, 4, 3, 3, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> distances = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> speeds = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int current = 2;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> distances = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> speeds = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int current = 1;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> distances = {500, 500};
    vector<int> speeds = {4, 5};
    int current = 2;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {333, 238};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> distances = {7507, 7517, 7523, 7529, 7537, 7541, 7547, 7549, 7559, 7561, 7573, 7577, 7583, 7589, 7591, 7603, 7607, 7621, 7639, 7643, 7649, 7669, 7673, 7681, 7687, 7691, 7699, 7703, 7717, 7723, 7727, 7741, 7753, 7757, 7759, 7789, 7793, 7817, 7823, 7829, 7841, 7853, 7867, 7873, 7877, 7879, 7883, 7901, 7907, 7919};
    vector<int> speeds = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 99, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 51};
    int current = 6;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, 8108, 1950, 1474, 1014, 882, 705, 544, 507, 420, 377, 359, 328, 290, 260, 252, 229, 216, 210, 195, 185, 173, 159, 155, -1, -1, 4409, 2413, 1717, 1354, 1127, 969, 852, 764, 692, 635, 585, 543, 507, 476, 449, 424, 402, 383, 365, 349, 334, 314};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> distances = {20};
    vector<int> speeds = {3};
    int current = 0;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> distances = {0, 0};
    vector<int> speeds = {1, 2};
    int current = 1;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> distances = {0, 0, 0};
    vector<int> speeds = {3, 2, 1};
    int current = 2;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> distances = {0, 1};
    vector<int> speeds = {0, 0};
    int current = 0;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, -1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> distances = {300, 300, 300};
    vector<int> speeds = {1, 2, 3};
    int current = 2;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, 360};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> distances = {0};
    vector<int> speeds = {1};
    int current = 10;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> distances = {};
    vector<int> speeds = {};
    int current = 5;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> distances = {0};
    vector<int> speeds = {1};
    int current = 4;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> distances = {0, 0, 0};
    vector<int> speeds = {0, 1, 2};
    int current = 1;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> distances = {500, 500};
    vector<int> speeds = {4, 5};
    int current = 6;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> distances = {0};
    vector<int> speeds = {0};
    int current = 0;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> distances = {1, 1};
    vector<int> speeds = {3, 3};
    int current = 0;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> distances = {5};
    vector<int> speeds = {3};
    int current = 1;
    Swimmers* pObj = new Swimmers();
    clock_t start = clock();
    vector<int> result = pObj->getSwimTimes(distances, speeds, current);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7402452&rd=4650&pm=1888
********************************************************************************
#include <iostream>
#include <vector>
 
using namespace std;
 
class Swimmers
{
public:
  vector <int> getSwimTimes(vector <int> distances, vector <int> speeds, int current)
  {
    vector <int> returnVec;
    for(int i = 0; i < distances.size(); i++)
    {
      if(distances[i] == 0)
        returnVec.push_back(0);
      else if(speeds[i] <= current)
        returnVec.push_back(-1);
      else
        returnVec.push_back((int) ((double)distances[i]/((double)speeds[i]+(double)current) + (double)distances[i]/((double)speeds[i]-(double)current)));
    }
    return returnVec;
  }
};

********************************************************************************
*******************************************************************************/