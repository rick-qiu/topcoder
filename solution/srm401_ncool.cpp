/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8320
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

class NCool {
public:
    int nCoolPoints(vector<int> x, vector<int> y, int n);
};

int NCool::nCoolPoints(vector<int> x, vector<int> y, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 1, 2, 7, 7};
    vector<int> y = {3, 1, 6, 1, 5};
    int n = 6;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 1, 0};
    vector<int> y = {0, 0, 1};
    int n = 2;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
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
    vector<int> x = {0, 0, 1, 2, 2, 1, 0, 0, 2};
    vector<int> y = {0, 1, 2, 2, 1, 0, 0, 0, 2};
    int n = 3;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 1, 1, 2, 2, 3, 3, 4, 4, 5};
    vector<int> y = {1, 0, 2, 0, 2, 0, 2, 0, 2, 1};
    int n = 5;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 1, 1, 2, 2, 3, 3, 4, 4, 5};
    vector<int> y = {1, 0, 2, 0, 2, 0, 2, 0, 2, 1};
    int n = 4;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 0, 1, 1, 2, 2};
    vector<int> y = {0, 1, 0, 2, 1, 2};
    int n = 3;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 0, 1, 2};
    vector<int> y = {0, 1, 2, 2};
    int n = 3;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {1, 1, 500, 500};
    vector<int> y = {1, 1000, 1, 1000};
    int n = 1000;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {1, 1, 500, 500};
    vector<int> y = {1, 1000, 1, 1000};
    int n = 501;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {1, 1, 500, 500};
    vector<int> y = {1, 1000, 1, 1000};
    int n = 2;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 500000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {1753, 2893, 250, 8566, 5384, 162, 9536, 8739, 2893, 8566, 2893, 5384, 162, 250, 2893, 8566, 162, 9536, 9536, 250, 1753, 1753, 250, 8566, 1753, 1753, 162, 162, 8739, 5384, 162, 8566, 5384, 8739, 1753, 9536, 8739, 9536, 1753, 1753, 2893, 2893, 5384, 8739, 5384, 9536, 250, 2893, 5384, 1753};
    vector<int> y = {9, 0, 2, 9, 0, 7, 7, 2, 0, 9, 0, 0, 7, 2, 0, 9, 7, 7, 7, 2, 9, 9, 2, 9, 9, 9, 7, 7, 2, 0, 7, 9, 0, 2, 9, 7, 2, 7, 9, 9, 0, 0, 0, 2, 0, 7, 2, 0, 0, 9};
    int n = 566;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 76481;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {9997, 9993, 74, 100, 400, 9898, 9978, 9653, 17, 9976, 9898, 9997, 9993, 400, 9898, 9993, 9976, 100, 9993, 9898, 9993, 100, 9993, 400, 9898, 9997, 9898, 100, 9976, 9653, 9976, 9898, 9976, 9653, 100, 9978, 400, 400, 9653, 9976, 17, 400, 9993, 74, 17, 9653, 100, 9997, 74, 9653};
    vector<int> y = {2, 4, 1, 9, 0, 8, 0, 9, 6, 6, 8, 2, 4, 0, 8, 4, 6, 9, 4, 8, 4, 9, 4, 0, 8, 2, 8, 9, 6, 9, 6, 8, 6, 9, 9, 0, 0, 0, 9, 6, 6, 0, 4, 1, 6, 9, 9, 2, 1, 9};
    int n = 566;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 98515;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {9997, 2, 21, 9987, 9996, 1, 9996, 2, 1, 9996, 21, 9997, 2, 9996, 9997, 1, 21, 21, 9996, 2, 9997, 9996, 2, 2, 1, 9997, 2, 2, 2, 2, 1, 1, 9997, 9996, 9987, 9996, 9987, 2, 9997, 9997, 9996, 9997, 9996, 9987, 1, 1, 2, 1, 1, 1};
    vector<int> y = {1, 4, 0, 0, 9, 9, 9, 4, 9, 9, 0, 1, 4, 9, 1, 9, 0, 0, 9, 4, 1, 9, 4, 4, 9, 1, 4, 4, 4, 4, 9, 9, 1, 9, 0, 9, 0, 4, 1, 1, 9, 1, 9, 0, 9, 9, 4, 9, 9, 9};
    int n = 566;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99894;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {9633, 701, 9606, 5405, 270, 93, 123, 8819, 9651, 701, 5405, 8819, 9651, 270, 5405, 270, 93, 9606, 701, 5405, 93, 8819, 5405, 93, 123, 9651, 8819, 5405, 9606, 270, 9606, 5405, 9651, 5405, 5405, 701, 5405, 123, 9633, 93, 93, 5405, 270, 9606, 8819, 93, 270, 9606, 8819, 270};
    vector<int> y = {4, 9, 9, 0, 0, 8, 3, 2, 8, 9, 0, 2, 8, 0, 0, 0, 8, 9, 9, 0, 8, 2, 0, 8, 3, 8, 2, 0, 9, 0, 9, 0, 8, 0, 0, 9, 0, 3, 4, 8, 8, 0, 0, 9, 2, 8, 0, 9, 2, 0};
    int n = 610;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 86375;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {9837, 179, 4, 145, 9984, 9990, 9858, 9981, 9588, 408, 9588, 9981, 179, 9984, 408, 9981, 9858, 9837, 145, 9984, 145, 9588, 9990, 9990, 9984, 179, 179, 9981, 4, 145, 9588, 9858, 9984, 9981, 9984, 145, 179, 9837, 9858, 4, 9858, 9858, 179, 9981, 179, 9837, 9990, 408, 9837, 9837};
    vector<int> y = {8, 8, 4, 0, 7, 6, 0, 4, 9, 9, 9, 4, 8, 7, 9, 4, 0, 8, 0, 7, 0, 9, 6, 6, 7, 8, 8, 4, 4, 0, 9, 0, 7, 4, 7, 0, 8, 8, 0, 4, 0, 0, 8, 4, 8, 8, 6, 9, 8, 8};
    int n = 610;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 97753;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {19, 1, 9988, 9996, 1, 9997, 9992, 9992, 9997, 1, 1, 9992, 9988, 19, 1, 9996, 9996, 9992, 9988, 19, 9992, 1, 9996, 9996, 9996, 1, 19, 1, 1, 19, 9992, 19, 9992, 9988, 9988, 9988, 9997, 9992, 9992, 1, 9996, 1, 1, 9996, 9988, 9997, 9992, 9997, 9988, 19};
    vector<int> y = {0, 9, 9, 6, 2, 2, 0, 0, 2, 2, 2, 0, 9, 0, 2, 6, 6, 0, 9, 0, 0, 9, 6, 6, 6, 9, 0, 2, 2, 0, 0, 0, 0, 9, 9, 9, 2, 0, 0, 2, 6, 2, 9, 6, 9, 2, 0, 2, 9, 0};
    int n = 610;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 99911;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0};
    vector<int> y = {9952, 9794, 12, 209, 209, 9952, 209, 12, 209, 9952, 209, 209, 12, 9794, 209, 12, 9794, 9794, 12, 12, 209, 9794, 209, 209, 209, 9952, 9952, 12, 9794, 209, 9952, 9794, 9794, 9794, 9794, 9952, 9794, 9952, 12, 9794, 9794, 9794, 9952, 209, 209, 9952, 9794, 9952, 9794, 209};
    int n = 2;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19527;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0};
    vector<int> y = {20, 5, 9995, 9984, 20, 9984, 5, 9995, 9995, 9995, 5, 9995, 20, 20, 9984, 9984, 9984, 9995, 5, 20, 20, 5, 5, 9984, 9984, 5, 9995, 20, 9995, 20, 5, 9984, 9995, 9995, 9984, 9995, 9995, 20, 20, 20, 9984, 5, 9995, 9984, 5, 5, 9995, 20, 20, 20};
    int n = 3;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19956;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0};
    vector<int> y = {0, 2, 9999, 10000, 10000, 2, 9999, 9999, 9999, 10000, 2, 9999, 9999, 9999, 10000, 9999, 10000, 10000, 10000, 10000, 10000, 0, 0, 10000, 10000, 9999, 2, 9999, 9999, 0, 0, 10000, 9999, 10000, 2, 2, 0, 10000, 0, 9999, 9999, 2, 0, 0, 10000, 0, 9999, 10000, 10000, 2};
    int n = 10;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 19999;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {183, 905, 859, 976, 211, 694, 502, 21, 12, 985};
    vector<int> y = {93, 87, 90, 19, 1, 0, 95, 7, 79, 40};
    int n = 2;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 82544;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {999, 3, 998, 0};
    vector<int> y = {0, 1, 1, 0};
    int n = 100;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1996;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {999, 0, 999, 0};
    vector<int> y = {0, 1, 1, 0};
    int n = 10;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {566, 566, 575, 1266, 1266, 1234, 585, 567, 570, 577, 1265, 1251, 602, 1214, 1265};
    vector<int> y = {1257, 580, 1266, 621, 1251, 566, 567, 572, 1262, 568, 575, 568, 566, 1266, 1265};
    int n = 10000;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
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
    vector<int> x = {1306, 672, 850, 967, 1188, 1293, 1037, 632, 814, 678, 1293, 1037, 967, 1188, 814, 1293, 672, 672, 1188, 850, 632, 850, 678, 814, 632, 678, 850, 1293, 1306, 814, 1037, 672, 1293, 1188, 967, 1037, 850, 1306, 1037, 678, 814, 672};
    vector<int> y = {1307, 651, 1309, 633, 636, 913, 629, 730, 1301, 1095, 913, 629, 633, 636, 1301, 913, 651, 651, 636, 1309, 730, 1309, 1095, 1301, 730, 1095, 1309, 913, 1307, 1301, 629, 651, 913, 636, 633, 629, 1309, 1307, 629, 1095, 1301, 651};
    int n = 2;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 395900;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {1228, 589, 1065, 819, 752, 586, 1165, 628, 953, 1163, 576, 819, 576, 752, 752, 819, 576, 1228, 1163, 1165, 1065, 589};
    vector<int> y = {1124, 1271, 1258, 629, 1273, 665, 759, 653, 1271, 750, 825, 629, 825, 1273, 1273, 629, 825, 1124, 750, 759, 1258, 1271};
    int n = 410980;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
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
    vector<int> x = {1299, 623, 633, 1190, 611, 1308, 610, 740, 614, 620, 918, 1310, 1294, 610, 1309, 1309, 692, 974, 625, 613, 637, 692, 974, 1310, 1309, 623, 974, 1309, 974, 637, 1294, 1294, 1294, 918, 1190, 1309, 1309, 692, 623, 633};
    vector<int> y = {567, 580, 1254, 1266, 1172, 1247, 839, 568, 621, 1250, 1266, 926, 1265, 927, 613, 1186, 1264, 567, 575, 640, 569, 1264, 567, 926, 613, 580, 567, 613, 567, 569, 1265, 1265, 1265, 1266, 1266, 1186, 613, 1264, 580, 1254};
    int n = 566;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 300228;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {701, 701, 693, 1, 700, 17, 1, 700, 700, 701, 701, 701, 701, 701, 1, 700, 1, 700, 1, 1, 17, 1, 700, 700, 693, 701, 701, 700, 17, 17, 700, 1, 700, 17, 700, 17, 1, 1, 1, 693, 700, 1, 693, 701, 700, 701, 701, 693, 701, 1};
    vector<int> y = {7, 699, 1, 700, 701, 701, 1, 2, 2, 699, 7, 7, 699, 699, 1, 2, 700, 2, 700, 1, 701, 700, 2, 2, 1, 7, 7, 701, 701, 701, 2, 700, 701, 701, 2, 701, 700, 1, 1, 1, 2, 1, 1, 699, 2, 7, 7, 1, 7, 700};
    int n = 610;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 224081;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {810, 9697, 693, 3893, 7575, 8298, 1992, 599, 6405, 3077, 810, 1992, 3893, 1992, 1992, 8298, 7575, 693, 599, 810, 9697, 3893, 3893, 3077, 9697, 810, 3077, 8298, 810, 599};
    vector<int> y = {3, 43, 6, 48, 3, 6, 45, 22, 1, 48, 3, 45, 48, 45, 45, 6, 3, 6, 22, 3, 43, 48, 48, 48, 43, 3, 48, 6, 3, 22};
    int n = 5;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 347883;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {9, 9980, 9915, 8, 9991, 13, 23, 17, 9979, 8, 13, 23, 9980, 9915, 9991, 8, 23, 9980, 9980, 9979, 8, 8, 8, 8, 9991, 8, 13, 23, 9980, 9, 9980, 8, 9915, 8, 8, 9979, 9991, 9979, 13, 9980};
    vector<int> y = {28, 46, 49, 21, 32, 49, 0, 4, 0, 13, 49, 0, 46, 49, 32, 21, 0, 46, 46, 0, 13, 21, 21, 13, 32, 21, 49, 0, 46, 28, 46, 21, 49, 21, 13, 0, 32, 0, 49, 46};
    int n = 50;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 498556;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {2, 9999, 9996, 9998, 1, 0, 9999, 0, 4, 0, 4, 9996, 0, 0, 9999, 9996, 4, 9999, 0, 0, 9996, 0, 9999, 9996, 2, 9999, 9999, 4, 9998, 0, 9996, 0, 9998, 4, 0, 9998, 9999, 2, 9999, 0, 0, 9998, 0, 9998, 9999, 9996, 0, 0, 9999, 9999};
    vector<int> y = {0, 46, 0, 49, 1, 48, 2, 7, 49, 7, 49, 0, 7, 48, 2, 0, 49, 2, 7, 48, 0, 7, 2, 0, 0, 2, 2, 49, 49, 7, 0, 48, 49, 49, 7, 49, 2, 0, 2, 48, 48, 49, 48, 49, 2, 0, 48, 48, 2, 46};
    int n = 500;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 499980;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {1753, 2893, 250, 8566, 5384, 162, 9536, 8739, 2893, 8566, 2893, 5384, 162, 250, 2893, 8566, 162, 9536, 9536, 250, 1753, 1753, 250, 8566, 1753, 1753, 162, 162, 8739, 5384, 162, 8566, 5384, 8739, 1753, 9536, 8739, 9536, 1753, 1753, 2893, 2893, 5384, 8739, 5384, 9536, 250, 2893, 5384, 1753};
    vector<int> y = {9, 0, 2, 9, 0, 7, 7, 2, 0, 9, 0, 0, 7, 2, 0, 9, 7, 7, 7, 2, 9, 9, 2, 9, 9, 9, 7, 7, 2, 0, 7, 9, 0, 2, 9, 7, 2, 7, 9, 9, 0, 0, 0, 2, 0, 7, 2, 0, 0, 9};
    int n = 9145;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 568;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {9997, 9993, 74, 100, 400, 9898, 9978, 9653, 17, 9976, 9898, 9997, 9993, 400, 9898, 9993, 9976, 100, 9993, 9898, 9993, 100, 9993, 400, 9898, 9997, 9898, 100, 9976, 9653, 9976, 9898, 9976, 9653, 100, 9978, 400, 400, 9653, 9976, 17, 400, 9993, 74, 17, 9653, 100, 9997, 74, 9653};
    vector<int> y = {2, 4, 1, 9, 0, 8, 0, 9, 6, 6, 8, 2, 4, 0, 8, 4, 6, 9, 4, 8, 4, 9, 4, 0, 8, 2, 8, 9, 6, 9, 6, 8, 6, 9, 9, 0, 0, 0, 9, 6, 6, 0, 4, 1, 6, 9, 9, 2, 1, 9};
    int n = 9897;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 574;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {9997, 2, 21, 9987, 9996, 1, 9996, 2, 1, 9996, 21, 9997, 2, 9996, 9997, 1, 21, 21, 9996, 2, 9997, 9996, 2, 2, 1, 9997, 2, 2, 2, 2, 1, 1, 9997, 9996, 9987, 9996, 9987, 2, 9997, 9997, 9996, 9997, 9996, 9987, 1, 1, 2, 1, 1, 1};
    vector<int> y = {1, 4, 0, 0, 9, 9, 9, 4, 9, 9, 0, 1, 4, 9, 1, 9, 0, 0, 9, 4, 1, 9, 4, 4, 9, 1, 4, 4, 4, 4, 9, 9, 1, 9, 0, 9, 0, 4, 1, 1, 9, 1, 9, 0, 9, 9, 4, 9, 9, 9};
    int n = 9962;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 568;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {9633, 701, 9606, 5405, 270, 93, 123, 8819, 9651, 701, 5405, 8819, 9651, 270, 5405, 270, 93, 9606, 701, 5405, 93, 8819, 5405, 93, 123, 9651, 8819, 5405, 9606, 270, 9606, 5405, 9651, 5405, 5405, 701, 5405, 123, 9633, 93, 93, 5405, 270, 9606, 8819, 93, 270, 9606, 8819, 270};
    vector<int> y = {4, 9, 9, 0, 0, 8, 3, 2, 8, 9, 0, 2, 8, 0, 0, 0, 8, 9, 9, 0, 8, 2, 0, 8, 3, 8, 2, 0, 9, 0, 9, 0, 8, 0, 0, 9, 0, 3, 4, 8, 8, 0, 0, 9, 2, 8, 0, 9, 2, 0};
    int n = 9478;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 608;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {9837, 179, 4, 145, 9984, 9990, 9858, 9981, 9588, 408, 9588, 9981, 179, 9984, 408, 9981, 9858, 9837, 145, 9984, 145, 9588, 9990, 9990, 9984, 179, 179, 9981, 4, 145, 9588, 9858, 9984, 9981, 9984, 145, 179, 9837, 9858, 4, 9858, 9858, 179, 9981, 179, 9837, 9990, 408, 9837, 9837};
    vector<int> y = {8, 8, 4, 0, 7, 6, 0, 4, 9, 9, 9, 4, 8, 7, 9, 4, 0, 8, 0, 7, 0, 9, 6, 6, 7, 8, 8, 4, 4, 0, 9, 0, 7, 4, 7, 0, 8, 8, 0, 4, 0, 0, 8, 4, 8, 8, 6, 9, 8, 8};
    int n = 9857;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 604;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {19, 1, 9988, 9996, 1, 9997, 9992, 9992, 9997, 1, 1, 9992, 9988, 19, 1, 9996, 9996, 9992, 9988, 19, 9992, 1, 9996, 9996, 9996, 1, 19, 1, 1, 19, 9992, 19, 9992, 9988, 9988, 9988, 9997, 9992, 9992, 1, 9996, 1, 1, 9996, 9988, 9997, 9992, 9997, 9988, 19};
    vector<int> y = {0, 9, 9, 6, 2, 2, 0, 0, 2, 2, 2, 0, 9, 0, 2, 6, 6, 0, 9, 0, 0, 9, 6, 6, 6, 9, 0, 2, 2, 0, 0, 0, 0, 9, 9, 9, 2, 0, 0, 2, 6, 2, 9, 6, 9, 2, 0, 2, 9, 0};
    int n = 9962;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 602;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0};
    vector<int> y = {9952, 9794, 12, 209, 209, 9952, 209, 12, 209, 9952, 209, 209, 12, 9794, 209, 12, 9794, 9794, 12, 12, 209, 9794, 209, 209, 209, 9952, 9952, 12, 9794, 209, 9952, 9794, 9794, 9794, 9794, 9952, 9794, 9952, 12, 9794, 9794, 9794, 9952, 209, 209, 9952, 9794, 9952, 9794, 209};
    int n = 9941;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0};
    vector<int> y = {20, 5, 9995, 9984, 20, 9984, 5, 9995, 9995, 9995, 5, 9995, 20, 20, 9984, 9984, 9984, 9995, 5, 20, 20, 5, 5, 9984, 9984, 5, 9995, 20, 9995, 20, 5, 9984, 9995, 9995, 9984, 9995, 9995, 20, 20, 20, 9984, 5, 9995, 9984, 5, 5, 9995, 20, 20, 20};
    int n = 9991;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0};
    vector<int> y = {0, 2, 9999, 10000, 10000, 2, 9999, 9999, 9999, 10000, 2, 9999, 9999, 9999, 10000, 9999, 10000, 10000, 10000, 10000, 10000, 0, 0, 10000, 10000, 9999, 2, 9999, 9999, 0, 0, 10000, 9999, 10000, 2, 2, 0, 10000, 0, 9999, 9999, 2, 0, 0, 10000, 0, 9999, 10000, 10000, 2};
    int n = 9998;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
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
    vector<int> x = {183, 905, 859, 976, 211, 694, 502, 21, 12, 985};
    vector<int> y = {93, 87, 90, 19, 1, 0, 95, 7, 79, 40};
    int n = 970;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {999, 3, 998, 0};
    vector<int> y = {0, 1, 1, 0};
    int n = 1001;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {999, 0, 999, 0};
    vector<int> y = {0, 1, 1, 0};
    int n = 1001;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {566, 566, 575, 1266, 1266, 1234, 585, 567, 570, 577, 1265, 1251, 602, 1214, 1265};
    vector<int> y = {1257, 580, 1266, 621, 1251, 566, 567, 572, 1262, 568, 575, 568, 566, 1266, 1265};
    int n = 702;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {1306, 672, 850, 967, 1188, 1293, 1037, 632, 814, 678, 1293, 1037, 967, 1188, 814, 1293, 672, 672, 1188, 850, 632, 850, 678, 814, 632, 678, 850, 1293, 1306, 814, 1037, 672, 1293, 1188, 967, 1037, 850, 1306, 1037, 678, 814, 672};
    vector<int> y = {1307, 651, 1309, 633, 636, 913, 629, 730, 1301, 1095, 913, 629, 633, 636, 1301, 913, 651, 651, 636, 1309, 730, 1309, 1095, 1301, 730, 1095, 1309, 913, 1307, 1301, 629, 651, 913, 636, 633, 629, 1309, 1307, 629, 1095, 1301, 651};
    int n = 681;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {1228, 589, 1065, 819, 752, 586, 1165, 628, 953, 1163, 576, 819, 576, 752, 752, 819, 576, 1228, 1163, 1165, 1065, 589};
    vector<int> y = {1124, 1271, 1258, 629, 1273, 665, 759, 653, 1271, 750, 825, 629, 825, 1273, 1273, 629, 825, 1124, 750, 759, 1258, 1271};
    int n = 559;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 100916;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {1299, 623, 633, 1190, 611, 1308, 610, 740, 614, 620, 918, 1310, 1294, 610, 1309, 1309, 692, 974, 625, 613, 637, 692, 974, 1310, 1309, 623, 974, 1309, 974, 637, 1294, 1294, 1294, 918, 1190, 1309, 1309, 692, 623, 633};
    vector<int> y = {567, 580, 1254, 1266, 1172, 1247, 839, 568, 621, 1250, 1266, 926, 1265, 927, 613, 1186, 1264, 567, 575, 640, 569, 1264, 567, 926, 613, 580, 567, 613, 567, 569, 1265, 1265, 1265, 1266, 1266, 1186, 613, 1264, 580, 1254};
    int n = 497;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 400274;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {701, 701, 693, 1, 700, 17, 1, 700, 700, 701, 701, 701, 701, 701, 1, 700, 1, 700, 1, 1, 17, 1, 700, 700, 693, 701, 701, 700, 17, 17, 700, 1, 700, 17, 700, 17, 1, 1, 1, 693, 700, 1, 693, 701, 700, 701, 701, 693, 701, 1};
    vector<int> y = {7, 699, 1, 700, 701, 701, 1, 2, 2, 699, 7, 7, 699, 699, 1, 2, 700, 2, 700, 1, 701, 700, 2, 2, 1, 7, 7, 701, 701, 701, 2, 700, 701, 701, 2, 701, 700, 1, 1, 1, 2, 1, 1, 699, 2, 7, 7, 1, 7, 700};
    int n = 404;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 480345;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {810, 9697, 693, 3893, 7575, 8298, 1992, 599, 6405, 3077, 810, 1992, 3893, 1992, 1992, 8298, 7575, 693, 599, 810, 9697, 3893, 3893, 3077, 9697, 810, 3077, 8298, 810, 599};
    vector<int> y = {3, 43, 6, 48, 3, 6, 45, 22, 1, 48, 3, 45, 48, 45, 45, 6, 3, 6, 22, 3, 43, 48, 48, 48, 43, 3, 48, 6, 3, 22};
    int n = 8305;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {9, 9980, 9915, 8, 9991, 13, 23, 17, 9979, 8, 13, 23, 9980, 9915, 9991, 8, 23, 9980, 9980, 9979, 8, 8, 8, 8, 9991, 8, 13, 23, 9980, 9, 9980, 8, 9915, 8, 8, 9979, 9991, 9979, 13, 9980};
    vector<int> y = {28, 46, 49, 21, 32, 49, 0, 4, 0, 13, 49, 0, 46, 49, 32, 21, 0, 46, 46, 0, 13, 21, 21, 13, 32, 21, 49, 0, 46, 28, 46, 21, 49, 21, 13, 0, 32, 0, 49, 46};
    int n = 9979;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {2, 9999, 9996, 9998, 1, 0, 9999, 0, 4, 0, 4, 9996, 0, 0, 9999, 9996, 4, 9999, 0, 0, 9996, 0, 9999, 9996, 2, 9999, 9999, 4, 9998, 0, 9996, 0, 9998, 4, 0, 9998, 9999, 2, 9999, 0, 0, 9998, 0, 9998, 9999, 9996, 0, 0, 9999, 9999};
    vector<int> y = {0, 46, 0, 49, 1, 48, 2, 7, 49, 7, 49, 0, 7, 48, 2, 0, 49, 2, 7, 48, 0, 7, 2, 0, 0, 2, 2, 49, 49, 7, 0, 48, 49, 49, 7, 49, 2, 0, 2, 48, 48, 49, 48, 49, 2, 0, 48, 48, 2, 46};
    int n = 9995;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 560;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {0, 1, 2, 3, 2};
    vector<int> y = {5, 2, 0, 0, 2};
    int n = 2;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {0, 2, 9992, 9990};
    vector<int> y = {0, 0, 6660, 6660};
    int n = 1000;
    NCool* pObj = new NCool();
    clock_t start = clock();
    int result = pObj->nCoolPoints(x, y, n);
    clock_t end = clock();
    delete pObj;
    int expected = 16653;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=12173&pm=8320
********************************************************************************
// I think I have been challenged... 
 
#include <algorithm> 
#include <vector> 
using namespace std; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "NCool.cc" 
 
#define LIM 3600 
 
int ins[LIM][LIM]; 
 
int next[80]; 
 
int divdown(int a, int b) { 
  if(b < 0) a = -a, b = -b; 
  if(a >= 0) return a / b; 
  if(a % b == 0) return a / b; 
  return a/b-1; 
  } 
 
int divup(int a, int b) { 
  return -divdown(-a,b); 
  } 
 
class NCool { 
  public: 
  int nCoolPoints(vector <int> x, vector <int> y, int n) { 
    // !FDI 
    n--; 
     
    int N = Size(x); 
/*  N = 4; 
    x[0] = 10000; y[0] = 0; 
    x[1] = 10000; y[1] = 10; 
    x[2] = 00000; y[2] = 10; 
    x[3] = 00000; y[3] =  0; 
    n = 10000; */ 
     
    FOR(a,0,N) { 
      next[a] = (a+1) % N; 
      FOR(b,0,N) { 
        int dx1 = x[b] - x[a]; 
        int dy1 = y[b] - y[a]; 
        int dx2 = x[next[a]] - x[a]; 
        int dy2 = y[next[a]] - y[a]; 
        if(dx1*dy2 - dy1*dx2 < 0) next[a] = b; 
        } 
      } 
     
    int top[10001], bot[10001]; 
     
    FOR(xx,0,10001) { 
      top[xx] = -1; 
      bot[xx] = 10006; 
      FOR(a,0,N) { 
        if(x[a] == xx) top[xx] >?= y[a], bot[xx] <?= y[a]; 
        else if(x[a] <= xx && x[next[a]] >= xx) { 
//        printf("(%d,%d)-(%d,%d)\n", x[a],y[a], x[next[a]],y[next[a]]); 
          top[xx] >?= y[a] + divdown(((xx - x[a]) * (y[next[a]] - y[a])), (x[next[a]] - x[a])); 
          } 
        else if(x[a] >= xx && x[next[a]] <= xx) { 
//        printf("(%d,%d)-(%d,%d)\n", x[a],y[a], x[next[a]],y[next[a]]); 
          bot[xx] <?= y[a] + divup(((xx - x[a]) * (y[next[a]] - y[a])), (x[next[a]] - x[a])); 
          } 
        } 
       
//    if(top[xx] >= 0) printf("%d: %d %d\n", xx, top[xx], bot[xx]); 
      } 
 
    if(n > LIM) { 
      int ret = 0; 
      FOR(xx,0,10001) FOR(yy,bot[xx],top[xx]+1) { 
      FOR(dx,-2,3) { 
        int xx2 = xx+dx*n; 
        if(xx2 >= 0 && xx2 <= 10000) { 
          FOR(dy,-2,3) if(dx || dy) { 
            int yy2 = yy+dy*n; 
            if(yy2 >= bot[xx2] && yy2 <= top[xx2]) { 
//            printf("%d,%d - %d,%d\n", xx,yy, xx2,yy2); 
              ret++; 
              goto nxy; 
              } 
            } 
          } 
        } 
        nxy: ; 
        } 
      return ret; 
      } 
     
    FOR(a,0,n) FOR(b,0,n) ins[a][b] = 0; 
     
    int modtab[10001]; 
    FOR(u,0,10001) modtab[u] = u % n; 
 
    FOR(xx,0,10001) FOR(yy,bot[xx],top[xx]+1) ins[modtab[xx]][modtab[yy]]++; 
     
    int ret = 0; 
     
    FOR(a,0,n) FOR(b,0,n) if(ins[a][b] != 1) ret += ins[a][b]; 
 
    return ret; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/