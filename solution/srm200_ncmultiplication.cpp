/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2416
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

class NCMultiplication {
public:
    long findFactors(vector<int> digits);
};

long NCMultiplication::findFactors(vector<int> digits) {
    long ret;
    return ret;
}


int test0() {
    vector<int> digits = {3, 21, 30};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> digits = {15, 3, 6};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 512;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> digits = {4, 20, 25};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> digits = {6, 61, 124, 129, 90, 27};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 6773;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> digits = {8, 14, 22, 95, 125, 120, 73, 9, 9};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> digits = {6, 8, 32, 90, 164, 178, 156, 114, 66, 18};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 104993;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> digits = {1, 10, 43, 104, 165, 202, 217, 212, 199, 126, 93, 36, 36};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 1597736;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> digits = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 10000001;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> digits = {4, 8, 4, 8, 4, 8, 4, 8, 4, 8, 4, 8, 4, 8};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 1010101010101;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 12345678912345;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> digits = {1, 4, 7, 10, 13, 16, 13, 4, 7, 10, 13, 16, 12};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 12000012;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> digits = {9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000001;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> digits = {2, 0, 0, 0, 4, 0, 0, 0, 8, 0, 0, 0, 16};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 100000004;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> digits = {1, 2, 11, 20, 46, 71, 92, 170, 116, 99, 72};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 116938;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> digits = {10, 58, 113, 124, 130, 202, 184, 76, 96, 72, 15};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 598095;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> digits = {16, 24, 62, 99, 137, 145, 142, 124, 68, 20};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 236884;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> digits = {27, 12, 109, 45, 105, 53, 50, 57, 16, 8, 4};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 919044;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> digits = {6, 46, 85, 87, 127, 143, 122, 126, 70, 49, 49};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 643607;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> digits = {63, 108, 138, 210, 247, 224, 170, 156, 109, 49, 6};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 993676;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> digits = {24, 20, 38, 57, 54, 77, 48, 43, 21, 12, 6};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 655603;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> digits = {5, 20, 59, 74, 110, 157, 118, 118, 81, 40, 24};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 554723;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> digits = {1, 7, 3, 20, 54, 40, 54, 26, 43, 11, 5};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 172615;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> digits = {8, 16, 28, 54, 74, 94, 84, 87, 70, 34, 12};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 446586;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> digits = {1, 4, 7, 10, 13, 16, 19, 20, 17, 14, 11, 8, 5, 2};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 13333332;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> digits = {1, 5, 7, 10, 13, 16, 19, 20, 17, 14, 11, 8, 5, 2};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> digits = {72, 128, 159, 182, 204, 210, 156, 109, 74, 44, 19, 3};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 8875651;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> digits = {18, 45, 61, 86, 125, 157, 181, 188, 148, 131, 128, 77, 49};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 6751967;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> digits = {18, 34, 92, 109, 58, 159, 154, 102, 111, 48, 60, 45, 9};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 9827263;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> digits = {10, 29, 80, 131, 156, 146, 144, 152, 113, 90, 40, 25};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 5771655;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> digits = {5, 29, 35, 59, 92, 78, 125, 83, 65, 81, 12, 32};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 1524714;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> digits = {72, 53, 107, 53, 107, 57, 146, 37, 74, 18, 59, 3, 24};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 9161703;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> digits = {28, 43, 73, 101, 122, 134, 191, 147, 162, 123, 78, 58, 72};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 7277428;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> digits = {16, 56, 84, 112, 146, 154, 184, 177, 111, 90, 48, 33, 36};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 4864214;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> digits = {63, 64, 118, 129, 147, 125, 215, 161, 189, 133, 94, 65, 72};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 9430379;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> digits = {9, 24, 30, 41, 30, 42, 58, 38, 24, 13, 10, 6};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 3612553;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> digits = {4, 9, 43, 88, 86, 137, 145, 232, 131, 123, 82, 91, 18};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 4977392;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> digits = {42, 104, 124, 156, 164, 227, 258, 165, 141, 101, 86, 52, 8};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 7837784;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> digits = {27, 69, 51, 52, 127, 63, 69, 130, 28, 34, 65, 2, 18};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 9519119;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> digits = {15, 45, 57, 102, 123, 156, 172, 150, 128, 83, 36, 25, 10};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 5047355;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> digits = {2, 8, 19, 45, 60, 66, 83, 69, 55, 32, 23, 6};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 1145052;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> digits = {45, 27, 72, 83, 68, 78, 65, 44, 36, 24, 10, 4, 4};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 9094402;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> digits = {42, 59, 118, 105, 176, 225, 235, 203, 144, 150, 117, 54};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 6582896;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> digits = {10, 57, 103, 87, 79, 102, 114, 91, 71, 45, 37, 14, 6};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 5620443;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> digits = {18, 9, 42, 48, 75, 75, 46, 32, 21, 19, 11, 3};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 6360121;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> digits = {9, 14, 59, 49, 97, 125, 161, 151, 132, 97, 84, 60, 18};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 9596573;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> digits = {54, 99, 105, 122, 183, 285, 293, 255, 204, 200, 193, 128, 72};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 9919779;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> digits = {1, 14, 58, 114, 140, 130, 137, 129, 110, 65, 30, 24, 6};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> digits = {12, 16, 23, 23, 32, 64, 61, 61, 41, 40, 30, 34, 20};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> digits = {36, 45, 20, 80, 140, 115, 161, 119, 133, 145, 81, 59, 7};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> digits = {15, 20, 65, 81, 119, 130, 133, 125, 93, 93, 49, 14, 14};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> digits = {21, 11, 54, 71, 77, 84, 104, 75, 62, 42, 12};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> digits = {56, 22, 66, 59, 50, 118, 154, 102, 67, 55, 50, 69, 42};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 8205596;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> digits = {63, 126, 198, 236, 236, 316, 247, 209, 117, 63, 81};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 999809;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> digits = {81, 162, 243, 324, 405, 486, 567, 486, 405, 324, 243, 162, 81};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> digits = {72, 103, 116, 70, 76, 157, 149, 108, 62, 52, 33, 14, 8};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 95026732;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> digits = {7, 2, 38, 80, 53, 114, 139, 126, 120, 86, 78, 28, 12, 8};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 72376602;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> digits = {4, 37, 68, 61, 95, 87, 65, 80, 45, 31, 38, 16, 2};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 187551451;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> digits = {6, 12, 42, 97, 119, 138, 164, 168, 132, 111, 84, 42, 24, 9};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 11699663;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> digits = {2, 14, 15, 61, 37, 69, 49, 46, 32, 33, 21, 11, 12, 4};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 174632132;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> digits = {4, 3, 12, 31, 35, 42, 64, 77, 69, 63, 60, 44, 20, 4};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 102521562;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> digits = {8, 7, 3, 38, 70, 64, 95, 95, 55, 53, 34, 13, 12, 4};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 10045252;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> digits = {4, 27, 45, 50, 82, 113, 123, 115, 107, 92, 68, 42, 24, 8};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 152657532;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> digits = {48, 32, 68, 102, 91, 110, 110, 82, 60, 42, 22, 7, 1};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 61563541;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> digits = {2, 23, 78, 96, 70, 33, 51, 46, 34, 22, 14, 4, 4, 4};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 299614222;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> digits = {6, 5, 32, 68, 113, 143, 143, 124, 100, 75, 48, 23, 7, 1};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 65864431;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> digits = {54, 105, 142, 165, 186, 144, 121, 99, 76, 55, 49, 24, 4};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 97533052;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> digits = {18, 27, 36, 45, 54, 63, 72, 45, 36, 27, 18, 9};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 234567854321;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> digits = {1};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> digits = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 10000001;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> digits = {8};
    NCMultiplication* pObj = new NCMultiplication();
    clock_t start = clock();
    long result = pObj->findFactors(digits);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5075&pm=2416
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
 
class NCMultiplication { 
public: 
long long findFactors(vector <int> a) { 
  long long x = 0, y, z, v, p1, p2; 
  int i, j, k; 
  long long A = -1; 
  for( i = 0; i < a.size(); i++ ) x = (x*10) + a[i]; 
  for( y = 1; y*y <= x; y++ ) if( x%y == 0 ) { 
    z = x/y; 
    for( i = 0; i < a.size(); i++ ) { 
      for( p1 = 1, j = 0; j < i; j++, p1 *= 10 ); 
      v = 0; 
      for( p2 = 1; p1; p2 *= 10, p1 /= 10 ) 
        v += ((y/p1)%10) * ((z/p2)%10); 
      if( v != a[a.size()-1-i] ) break; 
    } 
    if( i == a.size() ) A = z; 
  } 
  return A; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/