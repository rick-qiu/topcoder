/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9902
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

class DancingCouples {
public:
    int countPairs(vector<string> canDance, int K);
};

int DancingCouples::countPairs(vector<string> canDance, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<string> canDance = {"YYYY", "YYYY", "YYYY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> canDance = {"YYNN", "NYYN", "NNYY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> canDance = {"YY", "YY", "YY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> canDance = {"YYNNNN", "NYYNNN", "NNYYNN", "NNNYYN", "NNNNYY", "YNNNNY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> canDance = {"Y"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> canDance = {"Y"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> canDance = {"N"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
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
    vector<string> canDance = {"N"};
    int K = 5;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> canDance = {"YY"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> canDance = {"NY"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> canDance = {"NY"};
    int K = 2;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> canDance = {"YYNNY"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> canDance = {"YYYYYYYYYY"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> canDance = {"YNYYYNNYYY"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> canDance = {"N", "Y"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> canDance = {"N", "Y", "Y"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> canDance = {"N", "Y", "Y"};
    int K = 2;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> canDance = {"Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> canDance = {"Y", "Y", "N", "N", "Y", "Y", "Y", "N", "Y", "Y"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> canDance = {"YYNNNNNNNN", "NYYNNNNNNN", "NNYYNNNNNN", "NNNYYNNNNN", "NNNNYYNNNN", "NNNNNYYNNN", "NNNNNNYYNN", "NNNNNNNYYN", "NNNNNNNNYY", "YNNNNNNNNY"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> canDance = {"YYNNNNNNNN", "NYYNNNNNNN", "NNYYNNNNNN", "NNNYYNNNNN", "NNNNYYNNNN", "NNNNNYYNNN", "NNNNNNYYNN", "NNNNNNNYYN", "NNNNNNNNYY", "YNNNNNNNNY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 800;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> canDance = {"YYNNNNNNNN", "NYYNNNNNNN", "NNYYNNNNNN", "NNNYYNNNNN", "NNNNYYNNNN", "NNNNNYYNNN", "NNNNNNYYNN", "NNNNNNNYYN", "NNNNNNNNYY", "YNNNNNNNNY"};
    int K = 6;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4290;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> canDance = {"YYNNNNNNNN", "NYYNNNNNNN", "NNYYNNNNNN", "NNNYYNNNNN", "NNNNYYNNNN", "NNNNNYYNNN", "NNNNNNYYNN", "NNNNNNNYYN", "NNNNNNNNYY", "YNNNNNNNNY"};
    int K = 8;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 825;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> canDance = {"YYNNNNNNNN", "NYYNNNNNNN", "NNYYNNNNNN", "NNNYYNNNNN", "NNNNYYNNNN", "NNNNNYYNNN", "NNNNNNYYNN", "NNNNNNNYYN", "NNNNNNNNYY", "YNNNNNNNNY"};
    int K = 10;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> canDance = {"YYNYYNNNYN", "NYYYNNYNYN", "NNYYYNYNNY", "NYNYYNNYNY", "NNNYYYNYYN", "NYYNYYYNNN", "NNYNYNYYYN", "YNNYYNNYYN", "NYNNYNYNYY", "YYYNNNYNNY"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> canDance = {"YYNNNYYNYN", "NYYNNYYYNN", "YNYYNYNNNY", "YYNYYNYNNN", "YNYNYYNNYN", "NNYYYYYNNN", "NYNYNYYYNN", "NNNYNYNYYY", "NNNNYYNYYY", "YYYNNYNNNY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10900;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> canDance = {"YYNNNYYNNY", "YYYYNNYNNN", "NYYYNNNYNY", "NYNYYYNNYN", "NYNNYYYNYN", "YNYNYYYNNN", "YNYNNNYYYN", "NYNYNNYYYN", "NNYNNYYNYY", "YNYNNYNYNY"};
    int K = 5;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 251268;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> canDance = {"YYNYNNNNYY", "YYYYNNNYNN", "NNYYYYNYNN", "YNNYYNYNYN", "NYYNYYNNYN", "NNYNNYYYNY", "NNNNYYYYNY", "NNNYYNYYYN", "NYNYNNNYYY", "YNYNYYNNNY"};
    int K = 7;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 683782;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> canDance = {"YYNYYNNNYN", "NYYYNNNYYN", "NNYYYYNNNY", "YNYYYNNYNN", "YNNNYYYNNY", "YYNNNYYNYN", "YNNYNNYYYN", "NYNNYNYYYN", "YNYNNNNYYY", "YYNYYNNNNY"};
    int K = 10;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4410;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> canDance = {"YYYYNYYYYN", "YYYYNYYYNY", "YYNYYNYYYY", "YYYNYYYYYN", "YYNYNYYYYY", "YYYYYYYYNN", "YYNYYNYYYY", "YYYYNYYYNY", "YYYYNNYYYY", "YNYYYYYYYN"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> canDance = {"YYNYYYYNYY", "YYYYYYYNNY", "YYNYYYNYYY", "YYYYYNYYYN", "YYNYNYYYYY", "YYYYYYNYYN", "YYYYYNYNYY", "YNYYYYYYNY", "YYYYYNYYNY", "NNYYYYYYYY"};
    int K = 2;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2595;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> canDance = {"YYYNYYYNYY", "YNYYYYYNYY", "YYYYYNYYYN", "NYYYNYYYYY", "YNYYNYYYYY", "YYYYYNYYYN", "YYNYNYYYYY", "YNYNYYYYYY", "YYYYYNNYYY", "NYYYYYNYYY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 44442;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> canDance = {"YYNYYYYNYY", "YYYNYYNYYY", "YNYYYYYYNY", "NYNYYYYYYY", "YYYNYYYYYN", "YYYNNYYYYY", "YNYYYYYYNY", "YYNYYNYYYY", "YYYYYYNYYN", "NYYYYYYYNY"};
    int K = 4;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 438439;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> canDance = {"YYYYYYNYNY", "YYYYYYYYNN", "YYYYNYYYYN", "YYYYNYNYYY", "YYYNYYYYYN", "YYYNYYYYNY", "YYNYYYYYYN", "YNYYYYYYNY", "NYYYYYYYYN", "YNYYYYNYYY"};
    int K = 5;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2459880;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> canDance = {"YYYNYNYYYY", "YNNYYYYYYY", "YNNYYYYYYY", "YYYYYYNNYY", "YYYYNYYYYN", "YYNYYYNYYY", "YYYYYNNYYY", "NYNYYYYYYY", "YNNYYYYYYY", "YYYNYYNYYY"};
    int K = 6;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8174829;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> canDance = {"YYYYNYYYYN", "YNYYYYYYNY", "YYYNYYYNYY", "NYYYYYYNYY", "YYYYNNYYYY", "NYYNYYYYYY", "YYYYYNNYYY", "YYYYNNYYYY", "YNYYNYYYYY", "YNYYYYYNYY"};
    int K = 7;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15365766;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> canDance = {"NYNYYYYYYY", "YYYYNYYYNY", "YNYNYYYYYY", "YYYYYNYNYY", "YYYNYYYYYN", "NNYYYYYYYY", "YNYNYYYYYY", "YNYYYYNYYY", "YYYYYYNNYY", "NYYYNYYYYY"};
    int K = 8;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14101790;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> canDance = {"NYNYYYYYYY", "YYYYNYYYYN", "NYYYYYYNYY", "YYNYNYYYYY", "YYYYYYNYNY", "NYNYYYYYYY", "YYNYYYNYYY", "NYYYYYYNYY", "YNYYYNYYYY", "YYYNYYYYYN"};
    int K = 9;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4972428;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> canDance = {"YYYYYNNYYY", "YYYYNYYYNY", "YYYYYNYYNY", "YNYYYNYYYY", "YYYYNNYYYY", "YYYYYYYNNY", "YYYYNYYYYN", "YYYNYYYNYY", "NYYNYYYYYY", "YYYYYYYNNY"};
    int K = 10;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 385314;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 1;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 2;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4050;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 8;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 81648000;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 9;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36288000;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 10;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3628800;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> canDance = {"YNYNYYYNYY", "NNYYYNNYYY", "NYNNNYYYYY", "YYYYYNNYYN", "YYNNYYNNYY", "YNYYYYYYNY", "YYYYYYYYYY"};
    int K = 5;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 115958;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 10;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3628800;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 5;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7620480;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> canDance = {"YYNNNN", "NYYNNN", "NNYYNN", "NNNYYN", "NNNNYY", "YNNNNY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYNYYY", "YYYYYYYYNY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 8;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 69148800;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> canDance = {"YYYY", "YYYY", "YYYY"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 8;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 81648000;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> canDance = {"YYYYYYYYYY", "NYYYYYYYYY", "YNYYYYYYYY", "YYNYYYYYYY", "YYYNYYYYYY", "YYYYNYYYYY", "YYYYYNYYYY", "YYYYYYNYYY", "YYYYYYYNYY", "YYYYYYYYNY"};
    int K = 9;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16019531;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> canDance = {"YYY", "YYY", "YYY"};
    int K = 10;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
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
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 4;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1058400;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> canDance = {"Y"};
    int K = 3;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> canDance = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    int K = 9;
    DancingCouples* pObj = new DancingCouples();
    clock_t start = clock();
    int result = pObj->countPairs(canDance, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36288000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22702977&rd=13507&pm=9902
********************************************************************************
#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <set> 
#include <map> 
#include <string> 
#include <cmath> 
 
using namespace std; 
 
class DancingCouples 
{ 
  public: 
   
    vector<string> a; 
    int k,n,m; 
    int b[11][(1 << 10)+1][11]; 
 
    int rec(int i,int p,int t) 
    { 
      if (t == k) return 1; 
      if (i == n) return 0; 
      if (b[i][p][t] != -1) return b[i][p][t]; 
      int j,x; 
      x = rec(i+1,p,t); 
      for (j = 0;j<m;j++) 
        if (((p & (1 << j)) == 0)&&(a[i][j] == 'Y')) 
        { 
          x = x+rec(i+1,p | (1 << j),t+1); 
        } 
      b[i][p][t] = x; 
      return x; 
            
    } 
     
    int countPairs(vector <string> s,int k1) 
    { 
      a = s; 
      n = s.size(); 
      m = s[0].length(); 
      k = k1; 
      memset(b,-1,sizeof(b)); 
      return rec(0,0,0);     
    }   
};

********************************************************************************
*******************************************************************************/