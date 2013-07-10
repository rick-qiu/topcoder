/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9824
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

class CorporationSalary {
public:
    long totalSalary(vector<string> relations);
};

long CorporationSalary::totalSalary(vector<string> relations) {
    long ret;
    return ret;
}


int test0() {
    vector<string> relations = {"N"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
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
    vector<string> relations = {"NNYN", "NNYN", "NNNN", "NYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> relations = {"NNNNNN", "YNYNNY", "YNNNNY", "NNNNNN", "YNYNNN", "YNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> relations = {"NYNNYN", "NNNNNN", "NNNNNN", "NNYNNN", "NNNNNN", "NNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
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
    vector<string> relations = {"NNNN", "NNNN", "NNNN", "NNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> relations = {"NN", "YN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> relations = {"NNY", "NNN", "NYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> relations = {"NYYN", "NNNY", "NNNN", "NNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> relations = {"NNYNY", "NNNNN", "NNNNN", "NNNNN", "NYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> relations = {"NYNNNY", "NNNYNN", "YNNNYN", "NNNNNN", "YNNYNN", "NYNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> relations = {"NNNNYNN", "NNYNNNN", "NNNNNNN", "YNNNYNY", "NNNNNNN", "NNYNYNN", "NNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> relations = {"NYYNNNNN", "NNNNNNNN", "NNNNNNNN", "YNYNNNYN", "YYYNNNNN", "NNYNNNNN", "YYNNNNNN", "NYNNYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> relations = {"NYYYYYNYN", "NNNNNNNNN", "NYNYNNYYN", "NYNNNNNNN", "NNNYNNYYN", "NYNYYNYYN", "NYNNNNNYN", "NNNNNNNNN", "NYNNNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> relations = {"NYYNYNYNNY", "NNYYYYYNNN", "NNNNNNNNNN", "NNYNNNNNNY", "NNYNNNNNNN", "NNYYYNNNNN", "NNYYNNNNNY", "NNNYNYNNNY", "NYNYYNNNNN", "NNYNYNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> relations = {"NYYNYNNYYYN", "NNNNNNNNNNN", "NNNNYNNNNNN", "NNNNNNNNNNN", "NYNNNNYNNNN", "YNNYYNNNNNN", "NNNNNNNNNYN", "NYNNNNNNNNN", "NNNYNNNNNNN", "NYNNNNNNNNN", "YYYNNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> relations = {"NNNNNNNYNNNN", "NNNNYNNNNNNN", "NNNNYNNYNNNN", "NYYNYNNNNNNN", "NNNNNYNYNNNN", "NNNNNNNNNNNN", "NYNNNYNYYNNN", "NNNNNNNNNNNN", "NYNYYYNYNNNN", "YNYNYNNNYNNN", "YNYNYNNYNNNN", "NNYYYNYYNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 103;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> relations = {"NNNNNNNNYYNNN", "NNNYNNNNNYNNN", "NNNYYNYNYNNYY", "NNNNNNYNYYNNY", "NNNNNNYNYNYYY", "NNNNNNYNYYNNY", "NNNNNNNNNYNNN", "NNYYYNYNYNNNY", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "YNNNNNNNYYYNN", "YNNNNNNNYYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 134;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> relations = {"NNNNNYNNYNNYNY", "NNNNNNYNYNYNNN", "NNNNYYYNYYNNNY", "NNNNYNYYNYYNYN", "YYNNNYYYNYNYNY", "NNNNNNYNYNYNNN", "NNNNNNNNNNNNNN", "YNNNNYYNYYYYYN", "NNNNNNNNNNNNNN", "YNNNNYYNYNYNYY", "NNNNNNYNNNNNNN", "NNNNNNYNYNNNNN", "NNNNNYYNNNNNNY", "NNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 397;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> relations = {"NNYYNYYYYNNNYYN", "NNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NYYNNYNYNNYNNYN", "NNNYNYNYYNYNYYN", "NNYNNNNYNNNNNNN", "NYYNYYNYYYYYYNN", "NNNNNNNNNNNNNNN", "NYNYNYNNNNYYNNY", "NYYYNNNYNNNNYYN", "NNYNNYNNNNNYNNN", "NNYNNNNYNNNNNNN", "NNYYNNNYNNNYNYN", "NYNNNNNYNNNYNNN", "NYYYNNNYNNYNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 989;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> relations = {"NNNNNNNNNYNNNNNN", "NNNNNYNYNYNYNYYY", "NNNNYNNNNNNYNNYN", "NNYNYYYNYNNNNYYN", "NNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNYN", "YNYNNNNNNNNYNNNN", "YNNNYYYNNNNNNNNN", "NNNNNYNNNNNNNYNY", "NNNNNNNNNNNNNNYN", "NNNNNNNYYNNNNYYN", "NNNNNYNNNNNNNNNN", "NYYYYNYNYNYNNYYN", "NNYNNYYNNYNNNNYN", "NNNNNNNNNNNNNNNN", "YNYNYNNNNNNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 542;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> relations = {"NNNNNYNNNNNNNYNYN", "NNYNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNYNN", "NNNNNYNYNNNNNNYNN", "NNNNNNNYNYYNYNYNN", "NNYNNNNNNYNNNNYNN", "NYNNNNNYNNNNYYNNN", "NNNNNNNNNYYNNNNNN", "YYNYNNNYNYNNYNYNN", "NNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNN", "YYNNYNNNYYYNNYYNN", "NNYNNNNNNYYNNNYNN", "NNYNNNNNNYYNNNYYN", "NNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNN", "NNNYYYYYNYYNYYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 217;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> relations = {"NNNYYYYNYYYNYNYNYY", "NNYYNYNNYYYYYYNNYN", "NNNNNNNYNNYNYNNNNN", "NNYNNNNNYNNNNNNNNN", "NNYNNYNNYYYYYYYNYN", "NNNNNNNNNNNNNNNNNN", "NNYNNYNNNYYYYNNNNY", "NNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNYNNN", "NNNNNNNNYNYNNNYNNN", "NNNNNNNNNNNNNNNNNN", "NNNNNYNYYYNNNNNNNN", "NNNNNNNYYYYNNNNNNN", "NNNNNNNNNNYYYNYNYN", "NNNNNNNNNNNNNNNNNN", "NNNNNNNYYNYYNNNNNY", "NNNNNYNNNNYNYNNNNN", "NNNYNYNYNYYYNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 445;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> relations = {"NYYNNNNNNNNYYNNNNNN", "NNYNNNNNNNNNNNNNYNY", "NNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNN", "YYYNNNNYNNNYNNNNNNN", "YYYNYNNYYNYYYNNYNNY", "NYNYNYNNNNYYNNNYYYN", "NNYNNNNNNNNNYNNNNNN", "NNNNYNNYNNNNNNNYNNY", "YNNNNYYNNNNNYYYNNYN", "YYYYNNNNNNNYNNNYNYY", "NNYNNNNNNNNNYNNNYNY", "NNYNNNNNNNNNNNNNYNN", "YYYYYNNNYNYYYNNYNYN", "YNNNNYNNNNNNNYNYYYY", "NNYNNNNYNNNYYNNNNNN", "NNYNNNNNNNNNNNNNNNN", "YNNNYNNYNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 2632;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> relations = {"NNNYNNNNYNNNNNNNYNNN", "YNNYYYYYNYNYYNNNYNYY", "NNNNNNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNN", "NNNNYNYNYNNNYYYNNNYN", "NNNNNNNNYNNNNNNNNNNN", "NNNNNYYNNNNYNYYNNNYN", "NNNYNNNNNNNNNYNNYNNN", "NNYYYYYNYNNYNYYNNNNN", "NNNYYYNNYYNYYYNNYNNN", "NNNNYNNNNNNNNNNNYNNN", "NNNYNNYNYNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNN", "YNNYNNNNNNNNYYNNNNNN", "NNYNYNYYYYNNNYNNYNNY", "NNNNNNNNNNNNNNNNNNNN", "NNNYNYYYYNYNYYNNYNNY", "NNNYNNYNNNNNNNNNYNNN", "YNYYYNYNNYYYYNNNYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1757;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> relations = {"NYNYNNYNYNNNNYNNNNNYY", "NNNNNNNNNNNYNNNNNNNYY", "YYNNNNYYYNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNN", "YNYYNYNYYYNYYYNYNYNNY", "YYNYNNNNNNNYNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNN", "YNNYNNYNNNNNNNYNNNNYY", "NNNYNNNNNNNYNYNNNNNYY", "NNNYNNYNNNNYNNNNNNNNN", "YNYYYYYYYNNNYYYYNYYYY", "NNNNNNNNNNNNNNNNNNNNY", "YNYYNNNNNYNYNNNNNNNYY", "NNNYNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNYN", "YYNYNNYNNYNYNYNNNNNYN", "NNNNYNNNYYNYNYNYNYYYN", "YNNNNNNYNNNNNNYNNNNYY", "YYYNNNNNYNNYYNYYNNNYY", "NNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1855;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> relations = {"NYYYNYYNNYNYYNYYNYNNYY", "NNNNNNNNNNYNYYNNYYNYNN", "NNNNNNNYYNYNYNNYNNNNNN", "NNYNNNNNNNYYYNNYNNNYNY", "NNNNNNYYNNYNNYNNYNYNYY", "NYYNNNNNYNYNNNNYNNNNNY", "NYNNNYNYYNNNYNNYYYNNNY", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNNNN", "NNYNNNNYYNNNYYNYYNNYYY", "NNNNNNNYNNNNYNNYNNNNNN", "NNYNNNNYYNNNNNNNNNNYNN", "NNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNYYNYNNNNYNNNNNN", "NYNNNNNYNNYNYYNYYYNNNN", "NNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNYNYYNNNNNNNY", "NNNNNNNYYNYNYNNNNNNYNY", "NNYYNNYNYNNYYYNNNYNNNY", "NNYNNNNNYNNNYNNNNNNNNN", "NYYNNYNYYNYNNNNNNNYYNN", "NNNNNNNYYNYNNNNYNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 4887;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> relations = {"NNNYNNNNNNNNYNNYNNNYNNY", "YNNNYNNNNYYYNNYNYNYYNYY", "NNNYNNYNYYNNNNNNNYNNNYY", "NNNNYNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNYNNYNN", "NNNNNNNNNNNYNNNNNNNYNNN", "YYNNNNYNNNNYNYYYNYYNNYY", "NNNNYYNNNYNNNNNNNYNNNNN", "NNNYNYYNNNNYNNNNNNNYYNN", "NNNNYYYNNNNNYNNNNNNNYNN", "NNNNYNNNNNNNNNNNNNNNNNN", "NNNYYYNNNNNNNNNNNYNNNNN", "NNNNYNNNYNNNYNNNNYNNNNN", "NNYYNYYNYNYNYNNNNNNYYYY", "NNYYNYNNYYYYNNNNNYNYNYN", "NNNNNNNNNNYNNYYYNNYYYNN", "NNNYYNNNNNNYNNNNNNNNNNN", "NNYNYYYNNYNYYNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNYNNNNNYNNNNN", "NNNYYYYNNNYYNYNNNNNYNNY", "NNNYNNNNNYYYNNNNNNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 17629;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> relations = {"NNYNNYYNYYNNNNNNNYNYYNYN", "NNNNNNNNNNYNNNNNNYNNNNYN", "NYNNNNNNNNYNYNNNNNNNNNNN", "NYYNNYNNYNYNNNNNNNNNNNNN", "YYNNNNYNNNYYYYNYYYYNYYNN", "NNYNNNNNYNYNYNNNNYNNNNYY", "NYNYNNNYNYNYYNNNYYNYYNNN", "NYNYNNNNYNYNNNNNYNNNNNYN", "NYNNNNNNNNYNNNNNNNNNNNNN", "NNYYNYNNNNNNYNNNNNNNYNNY", "NNNNNNNNNNNNNNNNNYNNNNYN", "NNYNNNNNYYYNNNNNNNNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNYYNYNNNYNYYYYYNNYYY", "NNNYNNNYYNYNYNNNYNYYYNYY", "NYNNNNNYYNNNNNNNYNYNNNYN", "NYYNNYNNNNYYNNNNNYNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNYYNNNNNNNNYNNNYNN", "NNNYNNNNNNNYYNNNNNNNYNYN", "NYYYNYNNYNNNYNNNNYNNNNNY", "NNNYNYNYNYYNNNNNNNNYNNYY", "NNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNYNNNNNNYNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 49442;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> relations = {"NYNYNNYNNYNYNNNNNNYNYNYYY", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNYYNNNNNYN", "NNYNNNYNNNNNNNNNYYNNNNNYN", "NNYYNNNNNNYYNYYYNNNNYNNNN", "NYYYNNNYYNYNYYYNNNNYNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "YYNYNNNNNNNYYNYNYYNYNNNNY", "NNYNYNNNNYNNYNYNYNYYYNNNY", "NNNNYNNNNNNYNYNYYYYNYNYYN", "NNYYNNYNNNNNNNNYYYNNYNNNN", "NNYYNNYNNNNNNYYYNYYNNNNNN", "NNYYYNYNNNNNNYNYYYYNYNNNN", "NNNNNNNNNNNNNNNNNYNNYNNYN", "NNYYNNYNNNNNNNNNYNYNNNNNN", "NYNNNNYNNNNNNNNNNYNNNNNYN", "NYNNNNNNNNNNNNNNNNNNYNNYN", "NYNNNNYNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYYNNYNNNN", "NNYNNNNNNNNNYNYNYYYNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNYYNNNNNYNNYYNNYY", "NYYNNNNNNNNNNNYNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NYYNNNNNNNNNNNNNNYYNYNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 11058;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> relations = {"NNNNNYNNNNNYYNYNYYNNYYNNNN", "NNNNYNYNNYNYNYNNYNNNNNNYYN", "YYNNYNNYNYNNNYYYYNNNYNNYNY", "NNNNNNYNNNNYNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNN", "NYNYNNYNYYNYNNYYYYNYNYNYYY", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNYNYNNNNYNYNNNYYNNNYNYY", "NYNYYNYNNNNYNYNNNNNNNYNYNN", "NNNYYNNNNNNYNNNNNNNNNNNYNY", "NNNYNYNNYNNYNNNYNYYYYNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNYYNNNNNNNNYYNYYNNNNN", "NNNYNNYNNNNYNNNNNNNNNNNNNY", "NNNYYNNNNNNNNYNNYYNNYYNYNY", "NNNNNNNYNNNYNYNNYYNNNYYYNN", "NNNNNNYNNNNNNNNNNNNNNYNYNY", "NYNYYNNNNYNYNNNNYNYNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNYYN", "NNNYYNYYNYNNNYNNYYNNNNYNYY", "NYNNYNYNYNNNNYNYYYYNNNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNYNYNNYNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNYNYNNNNYNNNNNNYNY", "NNNYYNYNNNNYNNNNNNNNNYNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 38627;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> relations = {"NNNNNNNYYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNNYYNNYYNNYNYNNNYYYNYY", "NYNNNYNYNYNNNNNYNNNYNNNNNNY", "YNYYNNNYYYNYNNYNNNNYNNYNNYY", "NNNNNNNYYYNNNNYNYYNNNNNYNYN", "NYNYNNNNYNNNYNYNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNYNNN", "YYNNNYYYNNNYYNYYNNNNNYNNYYY", "NNNNNYNYYYNNYNNNNYNYNNNYNYY", "NYNNNNNNNYNNNNNNYYNNNNNNNNN", "YNYNYYYNNNYYYNYYNNYYYYNYYYN", "YNNNNNNYYYNNYNNNNNNNNNNNNNN", "YYNNNYNNYNNYYNNNYYNNNYNNYYY", "NYNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNNNNNYNNNNNNNNNN", "YNYYNYYNNNNNYNYYYYNYYNYNNNN", "NNNNNYNNNNNNNNYNNYNNNNNYNNN", "NYNYNNNYNNNYNNNYYNNNNYNNYYY", "YYNNNYNNNYNNYNNNNYNYNNNYNYY", "YNNNNNNNYYNYNNYNNNNNNYNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNN", "NYNNNNNYNYNYNNYNNYNNNYYNNYN", "NNNNNNNYYNNNYNNNNYNNNNNNNNN", "NYNNNYNNNYNNYNNNNYNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 131226;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNYYNNNNNNN", "NNNYNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNYNNNNNNNNNNNNYNNNNNNNN", "NNNNNYYYNNYNNYNNNNNNNNNNNNNN", "YNNNNNYNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNYNNNNNNNNNNNNNN", "NNNYYYNNNYNYYNNYYNNYNNNNNNNY", "YNYNYNNYNNYNNYNNYNNNNNNNNNNN", "NNNYNYYNNNNNNNNNNNNNYNNNNNNN", "NNYYYNNNNNNNNYYNNNNYNNNYYYNN", "NNYNYYNYNYNYNYNYNNNNYNNNNYNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNYNNNYNNYNNNN", "NNNYYYNYNNYNNYNNNNNNNNNYNYYN", "NNNYNNNYNNNNNNNNNNNNNNNYNNNN", "NNYNYNNNNYNNYNNYNNNNNNNNYNYY", "YNNNYYNNNYNNNYYYNNNNYNNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "YNNYNYYYNNNNNNNNNNNYNNNNNNNN", "YYYNYYYNYNYYYYYYNYNNYNYYNYNN", "YNNYNYNYYYYNYYNNYNNNYNNYNYYY", "NNNNNNNNNNYNNYNNNNNNYNNNNNNN", "YNYNYNYYNYYNNNNNYNNYNNNYNYNN", "NNNYNYYNNNYNNNNNNNNYNNNNNNNN", "NNNYYYYNNNNYNNYNNNNYNNNNYYNN", "YNNYYNYNNYNNNNYYYNNYNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 48066;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> relations = {"NNYNNNNNYYNNNNYYNNNNNNYNNNNNN", "NNYNYNNNNYNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNYNYNNNNNN", "YNYNYYYYYNYNYNNYNNNYYYNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNYNNNNNNNYYNYNNNNYYNNYNN", "NNYNYNNNNNNNNNNYNNNNYNYNNNNNN", "NNNNNNYNNYNNYNYNNNNNNNNYYYYNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYYYNYYNYYNNYNNNNYYYNNYNNY", "YYYNNNYNNNNNYNYYNNNNNNYYYYYNN", "NNYNYNNNNYNNNNNYNNNNYNYNNNNNN", "YYNNNYYYYNYNNNNYNNYYNNNYYYYNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNYNNNNNYNNNNNNNN", "YNNNYNNNYYYNNYYYNYYYNNYNNNNNN", "NYNNNNYNNYNNYNNNNNNNYNNNNNNNN", "YYYNYNNNYYNYYNNNNYNNYNYYNYYYY", "NYNNNYYYYYYYYNYNNYNNYNNYNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYYNYYNNYYNNNNNNNYNYNNNYYN", "NNNNYNNNYNNNNNYNNNNNYNNNNNNNN", "NNYNYNNNYYNNYNNYNNNNYNNNNNNNN", "YYYNYYNNNNNNNNYNNNNNYNNYNYYNN", "YYYNYYYNYNNNYNNNNNNNNNYYNNYYN", "YYYNYNNNNNNNYNYYNNNNNNNNNNNNN", "YNNNYYNNNNNNNNNNNNNNNNNYNNNNN", "NYYNNNNNYYNNNNYYNYNNYNYYNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 133307;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNYNNNNNNYNNNNNNNNNNYNNNN", "NNNYNNYNNNNNNNNYNNNYNYNYYNNNNN", "NNNNNNNYNNNNNNYNNNNNNYNNNNNNNN", "NYNYNNYNNNNYYYNYNNYYNYNNYNNNYY", "YYNYNNYYYNYNNYYYYNYYYYNNYNNNNN", "YYNYNNNYYNNNNNYYNNYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNYNNNNNNNYNNYNYYNNNYNNNN", "YNNYNYNNYNNNNNNNNYYNYNNNYNNNYY", "YYNNNNNNNNNNNNNNNNNNYYYYNNNNYN", "NNNYNNNYNNNNNYYNYNYYNYNYNNNNNN", "YYYNNNNNNNNNNNNYNNYNNNYYYYNNYN", "YYNNNNNNYNNNNNNYNNYNYYNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNYYNNNNNNNN", "NNNYNNNNNNNNNNYNNNNNYNNNNNNNNN", "YNNNNNNNYNYNNYNNNNYNNNYYNNNNYN", "NYNYYYNYYNYYNNYYYNYYYYNYYNNNYN", "YYNYNNNYNNNNNNYYNNNNYNNNNNNNNN", "NYNNNNNNNNYNNYNNYNYNYYYYYNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNYNNNNNNNNNNYNYYNNNYNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNYNNNYNNNNNYYNNNNNNYYNNYNNYN", "NNNYNNNNNNNNNNNNNNNNYNNNNNNNNN", "NYNYNYNYNNYYYYYYYYYYYYNYNYNNYN", "YYNNYYNYNNNNYNNNYNYYYYYNNYNNYN", "YNNYNNYYNNNNNNNYNNNNNNNNNNNNNN", "YNNYNNYNYNNNNYYYNNYNYNYYYNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 197644;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> relations = {"NNNNYNNYNNNNYYNNNNNNNNNNNNNNNNN", "YNYYNNYNNNYNNNYNYYYYYNYYNNNNYNN", "NNNNYYNYNYNYNNNNYNYNYYYNNNYNNNN", "NNNNNYNYNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYYNYNYNYYYYYNYYYYNYNNYYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YYNNYNYYNYNYNNYNYYNYNYYYYNNNNYN", "YNNYNNNYNNNYNYNNYNNYNYYNYYYYNYN", "YNNNNNNNNYNNNYNYYYNYNNYNYYNNYYN", "NNNYNYNNNNNNNNNNNYYNNYNNNNNNNNN", "NNNNNNNNNNNNNYNNNYNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNNNYNNN", "YNYYYNNNNNNNNNNNNNNYYNYNYYNYNYN", "NNYNNNNYNNNYYYNNYNNNNYYNYNYNYYN", "NNNYNNNNNNNNNNNNNNNNNYYNYYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNNNNNYNNNYNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNNYNNNNYYNYNNYNYN", "YNNYNNNNNYNYNYNNNNNYNYYNYNNYNYN", "YNNNYYNYNNNNYYNNNNNNNNNNNNNNNNN", "YNNYYNNYNNNYYNNNNNYNNNNNYYNNNNN", "NNYYNNNNNYYNYNNNYNNYYNYNNNYYNNN", "NNNYYNNYNNNNYNNNNYYNNYNNNNNYNNN", "NNNYNYNNNNNNNYNNNYNNNYNNYNNYNNN", "YNNNYNNYNNNNNYNNNYNNNYNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYYYNNNNNYYYNNNYNNNNNNNYYYNNN", "YNNNNNNNNNNYYYNNYYNNNNNNNNNNNNN", "NYYNYYYYYNYYYYNYNYNNYNNNYNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 999393;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> relations = {"NNNNYNNNYNYYNNNNNYNNNYNYNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNYYNNNNNNNNN", "NYNYNNNNNNYYNYYYNYNNNYNYNNYNNNYN", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNYNNN", "YYNYYYNNYNYNYYNNYYNYNYNNYYNNNYNN", "YYYNYNNNYYYYNNNNYYNNNYYYYNYNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YYNNNYNNNNYYYYYNYNNNYNNYYYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNYNNNNYNYYNYNYYYNNNYYNYNYNYNYN", "NYYNNNNNYNYNNNNNNNNNNYYNNNNNYYNN", "NNNYNYNNYNYYNYNNNNNNNYYNYNNNYYYN", "NYYYNYNNNNYNNYYNNNNYNNNYNYNNYYNN", "YYYYNNNNYNNNNNNNNNNNYNNYYYNYNNNN", "NYYNNYNNYNNYNNNNNNNNNYNNYYNNNYNN", "NYYYNYNNNYYYYYYNNYNNNYYYYYYNNYNY", "NYYNNYNNYNYYNYNNNNNNNYNYNYNNNYNN", "NNYYNNNNYNYNNNNNNNNNNNYNNYNNYYYN", "NNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNYNNNNYYNNNNNYNNNYNNNNNNNYNN", "NYYNNNNNNNNYNNNNNNNNNYNNNNNNNYNN", "NYNYNNNNNNYYNNNNNNNNNNYNNNNNNYNN", "NNYNNYNNNNNYNNNNNYNYNNYNNNNNNYNN", "YNYYYNNNYNYYNYNYNNNNYYYNYNNNYYYN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYN", "NNNYNYNNYNYYNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NYYNNNYNYNNYNYNNYNNYNNNNYYYNYYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 275499;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> relations = {"NYNNNNYNNYNNNNNNNYNYYYYNNYNNYNYYN", "NNNYNNNNNNYNYNNNNNNNYYNNNYNNNNNNN", "YYNNYYYNNNYNYNYNNYNYNYNYYYYYYYNNY", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNNYNN", "YNNNNYNNNNYNYNNNNNNNNYNNNYNYYNNYY", "NYNNNNNNNNNNNNNNNYNYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNN", "NYNNNNYNNYNNNNYNYNNYYNNNNNNNNNNYN", "YNNYNYYYNYYNNNNNNNNYYNYNYNNNYNNNY", "NYNYNNNNNNNNNNYNYNNNNNYNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNNNNNNNNYNNNNYNN", "NNYYNNYYNNNNNNYNYNYNNYYNYYYYNNNYY", "NNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNNNNYNNNYYNYYYNNNNYNNNYYN", "NYNYNNYNNNNNNNNNNNNNYYNNNYNNNNNNN", "NNNNNYYYYNNNYNNNNYYYYYYYYYNYNNNYY", "NNNYNNNNNNYNNNNNNNNNNYNNNYNNNNYNN", "NYNYNNYNNYNNNNYNNNNYYYNNNYNNNNYNN", "NYNYYYYYYYYNNNYNNNNYYNNNYNYYNNNYN", "NNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNYNNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNYNYNNNNNNNNNNN", "NNNYYNNNNNNNYNNNNNNNNNYNYNNNYNYNN", "NYNNNYYNNYYNNNYNNYNNNNNNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNNNYNYNYNNNNYNYYNYNNNYNYNN", "YYNYNYYYNNYNNNNNNYNYYNYNNNNNYNNNN", "NYNYNNYNNNYNYNNNYNNNNNNNNYNNNNYNN", "NYNNYYYNNYYNNYYNYNNYNYNNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNYYNNNNNNNNNNNYNNYNNYNNNN", "YNNNNNYYNNYNNNNNYYNNNNYNNYNNNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 126018;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> relations = {"NNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNNNNNNYNNYYYNNYYNNYNYNNNNNYN", "NNNNNYNNNNNYNNNYNNYNYNNYYNNNNNNYNY", "YNNNNYNYNYNYNNNNNYNNNNYYNNNNNNNNNY", "NNNNNYNNNNNNYNNNYYYNYNNNNYNYNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYNNNNNYNYNYNNYNYNNNNNYNNNNNNNYY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYYNNYNYNYYNNNYYYNYYYYYYYNNNNYNN", "NNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNYNYNYNYNYYYNNYYYYNYYYNNNNNN", "NNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNYNNNNNYNNYYYNYNYNNNNYNNNNYN", "NNNYNYNNNYNNNNNYNYYNYNYNNNNNNNNNNN", "YYYYYYYNNYYYNNNNYNNNYNYNNYNYNNNNNN", "NNNNNYNYNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNYNYNNNNNYNNNYYNYNNNNNNNNNNNYN", "NNNNNYNYNYNYNNNYNNNNNNYNYNNNNNNNNN", "NNNYNYNYNNNNNNNNNNNNYNYYNNNNNNNYNN", "NYNNYNNNNNNYYNYYYYNNNYNNYNYNNYNNNN", "NNNNNNNYNYNYNNNNNNNNNNNNNNNNNNNNNY", "NNYNYNYYNNNNYNNNNYYNYNYYNYNYNNNYNY", "YNNNNYNNNYNNNNNYNNNNNNNNYNNNNNNNNY", "NNNNNNNYNNNYNNNNNNNNYNNNNNNNNNNYNN", "NNNNNYNYNNNNNNNYNNNNYNNNNNNNNNNYNY", "NNYNNNNYNNNNNNNNNNYNYNYNNNNNNNNYYY", "NNYNNYYNNYNNNNNNYYYNNNYNNNNNNNNYNN", "NNYYNYNYNYNYNYNNNYNNNNYYYNNNNNNYNY", "NYYNNNYNNYNNYYYYYYYYNYYNNYNYNNYNYN", "NNNNNYYNNNNYYNNNNNNNYYNNYNYNNNNYNY", "YYNNYNYNNNNNNNYNNNYNYNYNYYYYNNNYYN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYNNNNNNNNNYNYNYYNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1110974;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> relations = {"NNNYNYNNYNNYNNNNNNNNNNNYNNYNNNNNNNN", "YNYYNNYYNYNNYNNYYNNYYYYYNNYYYYNNYNY", "YNNYNNNNYNNNNNYNYNNYNYYNNNNNNNYNNYN", "NNNNNNNNNNNNNYYNNNNNNYNNNNNNYNYNNNN", "NNNNNYNNNNNYYYYNNYNNYYNNYNNYNYNYNNY", "NNNYNNNNNNNNNYYNNNNNNYNYNNNNNNYNNNY", "YNNYYNNYYNNNNNNNYYNYNNNYNNYNYYYNYYY", "NNNNNNNNNYNYNYYNYYYNNYNYYNNNNNNYNYY", "NNNYNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNY", "NNNYNNNNNNNNNNNYYNYNNYYNNNNNNNNYNYN", "YNYNNYNYYYNNYNNNNYYNYYYYYYNNYYYNNNN", "NNNYNNNNNNNNNNYNNNNNNYNNNNNNYNYNNNY", "NNNNNYNNNNNYNYNYYYNYNNNNNYYNYNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNN", "YNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNNYNNYNNNYNYNNNYYNNNNNNNNNNNN", "YNNNNNNNYNNNNNNYNNNNNNYYNNYNNNYNNNY", "NNNNNNNNYNNNNNNYNNNNNYNYNNNNNNNNNNY", "NNNYNYNNNNNYNNYYYNYNNYNNNNNNYNYNNNY", "NNNYNYNYNNNYNYNNNYNNNYNYNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNN", "YNNYNYNNYNNYNNNYNNNNNNNYNNYNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNYNNNNNNNYYYNNYYNNNNNNNNYNNNNNN", "YNYYNNNNNNNNNYNNYYNNYNNYYNYNNNNYYNN", "NNNNNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNN", "NNNNNNNNYYNNNYNNNYNNYYNYNYNNYNYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNYNNYYYNNYYNNNNNNNNYYNNNNYYY", "NNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNN", "YNNNNYNNNNNYNNYNYYNYNYYYNNNNYNNNNNY", "NNYYNYNYNNNYNYYNNNNNYNNYNNNNNNYYNYY", "YNNYNYNNYNNYNNNYNYNNNYNYNNYNNNYNNNY", "NNNYNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 10886387;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> relations = {"NNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNYNYNNNYNNNNNNNNNNYNYNNNNNNN", "YNNNYNNNYYYNYNNYNYYNNNNNNYYNNYNYYYYY", "NNNNNNNNYNNNNNNYYNNNNYYYYNNNYNNNYNNY", "YYNNNNNNYNYYNYNYNNNNYYYNNNNNNNNNYNYN", "YYNNNNYYYNNNNYYYYNNNYNYYNYNNNNYNNNNY", "NYNNYNNNNYYYYYNNYYYYNNNYNNNYYNYYYNNY", "YNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNYNNNNYNYNYNYNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNYNNNNNNNNNNYNNNNNYNNNNNNNNN", "YNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNYYNNNYNNNNNYNNNNNYNNN", "YYNNNNNNNYNYNNNNNNNNYNYNYNNNYNYNNNYN", "NNNYYNNNNNYNNYNYYYNYNYNYNNNNNNYNYNNN", "NNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNYNYNNNNNNNNNNNNYNNNYNNNNNNN", "NYNYNNNYYYYYYYNYYNNNYYNNYNYNNNNNNYYY", "YYNNYNNNYNYYYNNNNNNNNYYYNNYNYYNNNNYY", "NNNYYNNYYYNYNYNNYNYNNNNNNYYYNNYYYNNY", "NNNNNNNNNYNYNNNYNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNYNYNNNYNNNNYNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNYNYNYNNNNNNN", "NNNNNNNNYYYNNYNNYNNNNYYNYNYNNNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNYNYNYNYNYYYNNNYNYYNYYNYNYYNNN", "NNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNYNNNNYYYNNNYNYYNYYNNNNYNNYNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNYYYNNNYNNNNNYNNNYNNNNNNYYY", "NNNNNNNYNNNYNNNYNNNNYNNNNNYNNNNNNNYN", "NNNNYNNYNNNNNNNNYNYNYNNNYNYNYYYNNYNY", "NYNNNNNNNNNYNNNYYNNNYYNNNNNNNNNNNNNN", "YYNNYNNNNNYYYNNNYNNNNYYNNNNNNNYNNNYN", "YNNNNNNNNYYYNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNYNNYYNYNNYNNNYNYNNNYNYNYNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 571905;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNYNYNNNNNNNNNNNYNNYNNNYYNNNNNYYYYNYN", "NNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNYNNN", "YYYNNNNNYNYYNNNYNNNYNNYNYYNNYNNYYYNYY", "NNYNNNNYNNYNNNYNNNNYNNNYNNNYNNNYYNNNN", "YNNNYNNYYYNYYNNNNNNNNNNYYNNNYNYYYNNYY", "YNNNYNNYNNYNYNNNYNNYYNNYNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNYNNNYYNYNNNYYYNNNNNNNYNNNYNNNNNYNNN", "NNNNNNNNNNNYNNYYYNNYNNNYNNNNNNYNYNNYN", "NNNNNNNYNNNNNNNNNNNYNNNNNNNYNNYNNNNNN", "NNNNNNNYNNYNYNNNNNNNNNNYNNNYNNNNNNNNN", "NNNNNNNYNNYNNNNNNNNYNNNNNNNYNNYNYYNNN", "NNNNNNNNNYYYYNYNYNNNNNNYNNNNNNNYYNNNN", "NNNNNNNNNNYYNNNNNNNNNNNYNNNNNNYNNNNNN", "YNNNNNNNNNYYNNYNNNNYNNNNNNNNNNYYNYNNN", "YNYNYNNYNNNNNNNNNNNYNNNNNNNNNNYNNYNNN", "YNYNNNYNNNYYYYYYNNNYNNNYNNYYYNNNNNNNN", "NNYYNNNNNYNNNNNNYYNYYNNYNNYYNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNYNNNNNNNNNNNNNNNNNNNNYNNNNNNYYNNNYN", "NNNNYNYNNNYNNNNNYNNYYNYNYYYNNNNYYNYYY", "NYNNNNNNYYYNYYYYYNNYNNNNNNNYNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNNNNNYNYYYNNYYYNNNYNNNNNNYYNNNNNNYY", "YNYNYNNYYYYNNYNYYNNYNNNYYNNNYNNYNNNNY", "YNYNYNNNNYNNYYNNYNNYYNNYNNNYYNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYNNYNNYYYYNNYNNYYNNNNNNNNNYNYYNNY", "YNYYYNYYYNYNNYNYYNYNYNNNNYNYNNNYNNYNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNYYNNNNNNYNNNNNNNYNNYNNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNYNYYNYNYYNNNYYNNYNNYYYNNYNYNNNNNN", "YNYNYNNYNNNYYNYNNNNYNNNYNNNNNNYYYYNNN", "NNNNYNYNNNYYNYYNNNNYNNNNNNNNNNNYNNNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 800231;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> relations = {"NNNNNNNNNNNNNNNYYNYNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNYNYNYNNNNNYNYNNNYNNNYYNNNNNYYYNN", "YYNNNNNYYNYNNNNYYNNYNNNNNNNYNYNNNNNNNN", "NYNYNYNYNYYYNNNNNYYYYYNNYYNNNYNYYYYNNN", "NNNYNNNYYNYNNNNNYYYYYNYYYNNYYNYNYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNYYYNNNNYYNYYNNNNYYYNNNNNNYYYNN", "YNNNNNYNNNNNNNNYYNNNNNNNNYNNNNNNNNNNNN", "YYNNNNYNNNNNNNNYYNNNNNNNNNNYYNNNNNNNNN", "NNNNNNYNNNNNNNYYNNYNNNNNYNYYNNYNNNYYNN", "NNYNNNYYNNNNYNYYYNNYNNNNNYYNYNNYYNYNNY", "NYNNNNYYYYYNNNYYNNYYNNYNYNYNNNNNNNYYNN", "YYNNNNYYYYYNYNNNNYNNNYYYNYNYYYNYNNYNNY", "NNNNNNYNYYNNNNNNYNYNNNNNYNNYNNYNNNNNNN", "NYNNNNYNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNYNYNNYNYNNNNNNNNNYNNNYYYYNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNYNNNN", "NNYYNNYNNYYNNNNYNNYYNNYYNYYYNYNYYNYNYN", "YNNYNNYNNNYNYNNNYNYYNNNYYYNYNNNNNNNNYN", "YYNNNNNNNYYNNNNNYNYNNNNNNNNYNYYYNNYNNN", "NYNYNNNYYNYYYNYYNNYYNNYNYYNNNYYNYYYNYN", "YYNNNNNNNNNNNNNNNNNYNNNNNYNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNN", "YNNNNNNNYNNNNNNNYNNNNNNNYYNNNYNYNYNNNN", "YNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNYYNNN", "NNNNNNNNNNNNNNNNYNYYNNNNNNNYNNYNNYYYNN", "NYNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNNYYYNN", "YYNNNNYNYNNNNNNYNNYNNNNNNYNNNNYNNYYYNN", "YNNYNNNNNYYNNNYNYNYYNNYNNYNYYYNYNNNYNN", "NNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNYNNNNNYNNNYNYNNYNYNNNNNNYYNYNYNNYNNN", "YYYYNNNYYNNNYNYYYNYYNNNNYYNNNYYYNYYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1815824;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> relations = {"NNNNNNNNNNNNYNNNYNNNNNNNYNNNNNNNNNNNYYN", "NNNNNNNNNNNNYNNYYNNNNNNNNNYNYNNNNNNNNNN", "YYNNNNNNNYNYYNNNYYYNNNYNNNNYNNNNNNNNYYN", "YNNNNNNNNNNNYNNYNYYYNNYNYNYNYNYYNYNNNYN", "NYNNNNNNNYNYNNNYYNNYNNNNYNNNYNNNNNYNYYN", "NYNNNNYNYYYYNYYYNYYNNNYNNNNNYNNYNNYNNYY", "NYYYYNNNYNNYNYYNYYNYYYNNYNYYYNYNYYYNNNY", "NNNNNNNNNYNYYNNNNNNNNNYNYNNNYNYNNNNNYNN", "NNNNYNNYNNNNNNYNYNYNYNYNNNYNNNYNYYYNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNYNNNNNYYYYNNNYNNNYYNNYNNYYNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNNYYNNNNNNNYNNNYNNNNNNNNYN", "NNNNYNNNNNYNNNYNYYYYNNYNNNNNNNYNNYNNNNN", "YNNNNNNYNYYNNNNYYYYYNNYNNNYNNNYNYYNNNNN", "NNNNNNNNNYNNNNNNNNYNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNYNYNNNNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNNNYNNNNYNNYNNNNYNNNYNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNYNYYNNYNYYNNNNNNNNYNNNNYYNYNN", "NYNYYNNNNNYYYYNNYNYYNNYNYNNYYNYYNNYNYNN", "NNNNNNNNNNNYNNNNNNNNNNNNYNYNNNNNNNNNNYN", "YNYYYYNNNNNYYNNNNYNNYNYNYYNNNNYYYNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNYYYNYYYNNYYNYNYNYNNYYNNNNYNNYNNYNNYYY", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNYNNNNNYNNNNNNYNYNYNYNNNNNNNNNN", "NNNNNNNNNYNNNNNYNNYNNNYNNNYNNNNNNNYNNYN", "NYYNYNNNNYYNYNYNYYNYNYYNNNYNYNNYNNNNYNN", "YYYNNNNNNYNNNNNYNYYNNNNNYNYNNNNNNNNNYNN", "NYNNYNNNNYNNYNNYYNYYNNNNNNNNNNNNNNYNYYN", "NNYNNNNNNYNNNNNNYYYNNNYNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNYYNNNNNYNYYNNNNNNNNYYN", "NNNNNNNNNNNNNNNYYNYNNNNNNNYNNNNNNNNNNYN", "YYNYNYYNYNNNNYNNYYYNYNYNYNNNYYNYYNNNYNY", "NYNNNNNNNNNNNNNNNNYYNNYNYNNNYNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNYNNNNYNNYNNYNYNNNNNNYNNYNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 2037927;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNYNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNYNNNYNYNYYYNYYNNNNYNNNNYNNNNNNNNNYN", "YYYYNYYYNNNNYYYYYYYYNNYYNYYYNNYYYYNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNYYNYNYNNNYYNNNNYNNNNNNYNNNNNNYYY", "NNYNNNNNNYNNNNNNYNNNNNNNNYNNNNNNNNNNYYNN", "NYNNNNNNNNYYNYYNNYYNNNNNNYNNNNNYNNYYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNYNYNYNNNNNNNNNNNNNNNYNNNNYNNNNYNYNN", "YNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNYYNNYNNYYNNNNYNNNNNYYNYYYYNNNNYNNY", "NYNNNYNNNYNYNNNNNYNNNNNNNYNNNNNYNNYNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNYNYNYNYYNNNNNNNNYNYNNNNYYNNNYNNNY", "YNNNNNNNNYNNNNYNNNNNNNNNNNNNNNYNNNNNNYNN", "YNYNNYNNNYNNNNYNYNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNNYYYNNYNNNNNNNNNNYNNNNYNNNNYNNNN", "NNNNNNYYNYYYNYYNYNNNNNNYNNNNNNNYNNYYYNNN", "YNNYNNYYYNNNYYYYNNNNNNNNNYNYNNYYNYYNNNNN", "NNNYYYNNNNYNNYNYNYNYYNYNNNYNYNNNYNYYYNNN", "YYNYNNYYYYNYNYNYNNNYNNNNNYYNYNYYNNNYYYNN", "NNNNNNNNNYNNNYYNNNYNNNNNNYNNNNYYNNYYYNYN", "NNNYYNNNNYYYYNNNNYYNNNYYNNNYYYYNNYYYYYYN", "YNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNYNNNYNNYYYNNNNYNNNNNNYNNNNYNNNNNYYYNYN", "YNNYNYNNNNNNNNNNNNYYNNNNNYYNNNNYYNYYYNYN", "NNYNNNYYNYNNNYNNNYNNNNNNNYNNNNNNNNYYYNNN", "NNYNNNNYYYYYNNYYYNNNNNYNNYYYYNYNYYNNYYNY", "YNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNNNNNNYNNYNNNNNNNYNNNNNNNNYNYYYY", "NYYNNNYYNNYNNNYYYYNYNNNNNNNNYNNNNNYYNNNN", "YYNNNNNNNYNYNYYNYNYYNNNYNYYYYNNNNNNYNYYN", "YNYNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNN", "YNYNNYNNNYNNNNNNYNNNNNNNNNNNNNNNNNYNYNNN", "NNYNNYNNNYNNNNNNNNNNNNNNNNNNNNYNNNYNNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNYNYYYNNNNYNNNNNNNNYNNNNNNNNNYNNNN", "NNNNNYNNNNYNNNYNNNNNNNNNNNNNNNYNNNNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 9868965;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> relations = {"NNNNYNNNNNNYNNNNNYNYNNNNNNNNNYNNNNNNNYNNN", "YNNYNNNYYYYNNNYNYNNNNNYYYNNNYYYYNYNNNNNNN", "YNNNNNNNNYNYYNYYYYNYNNNYYYNNYYYNYYYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNYNNNYYYNNNNNNNNNNYNNNYNYNNNNNNYNN", "NNNYYNNNNYYYYNYYYYNNNNNNNYNNYNYYNNNNNNNNN", "YNNYYNNNNNNYYNYNYNNNNNNNNYNNNNYYNYYNYNYNN", "NNNNNNYNNNYNYNYYYNNNNNNNYNNYNNYYYYNNYYYNN", "NNNYYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNYNYYNNNNNNNYNNNYNNYYYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNYYYNNNNNNNNNYYNYYYNYNNNNNN", "NNNNNNYNNNNNYNNYNYNYNNNNYYNYYNNNNYYNYNNNN", "NNNYYNNNNYNNNNNNNYNYNNNNYNNNYNNNYNNNNNNNN", "NNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNYNNN", "NNNYNNNNNNNYNNNYNNNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNNNNNYNYNNNYNNNNNNNNYNNNNNNNNNNNNNYNN", "YNNYNNNNNNNYYNYNNYNYNNNNYYNNYNNYYNYNYNYNN", "NNNNNNNNNYNYNNNNNYNNNNNNNNNNNNNNNNNNNNYNN", "NNYNYNYNNYNNNNNYNYNNNNNNYYYNYYNYYNNNNYYNN", "NNYNYNNYNNYNNYNYNNYNNNNNYNYYYYNNYNNNYYNYY", "NNNYYNYNNYNNNNYNNNNNNNNNYYNNYYYNYNYNNYNNN", "YNNYNNNNNYYYYNNNYYNNNNYNYNNYNNNNYNYNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYYNNNNYNNNNNNYNNNNNNNYNNYYYNYYNYNNYYNN", "NNYNYYNYYYNNNNYNYYNNNNNYYNNNNNYNYNNNNYYNN", "YNNYYNNNNYNNNNNYNYNNNNNNNNNNNNNYYNNNNNYNN", "YNNYNNNNNNNYNNNNNYNYNNNNNNNNNNYNNYYNNNNNN", "NNNYYNNNNYNNNNNYNNNYNNNNYNNNNNNNNNNNNYNNN", "NNNNYNNNNYNYNNNNNNNNNNNNNNNNNNNNNYNNNNYNN", "NNNYYNNNNNNNNNNYNNNYNNNNYNNNNYYNYYYNNNNNN", "NNNYYNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNYYNN", "NNNNNNNNNNNYNNNYNNNYNNNNNNNNNNNNYNNNNNYNN", "YNNYYNNNNNNNNNNYNNNNNNNNYNNNNNNNYNNNNNYNN", "NNNYYYNYNYNNYNNNYNNYYYNYYNYYYYNYNNNNYYNYY", "YNNNNNYNNNYYNNYYNNNNNNNYNNNYNYYNYNYNNYNNN", "NNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYYYNYNNYNYYNNNNNYNNNYNNNNNNNNNNNYYNNY", "YYNNYYNNNNYYNYNNYNNNNNYYYNYNYYNNNYYNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 18411350;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> relations = {"NNYNYNNNYNNNNNYNNYNYNYYYNNNNNYNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYYYNNNYNNNNNNNNYNNYNNNYNNNNNNNNNYNYNNN", "YNNNYNYNNNNNNYYYNNNNNYNYNYYYNNNYYNNNYNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNN", "YNNYYYYNYYNNNNNNNNNYYNNYNNNYNNNNYYNNNNYYNY", "NYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YYNNNYNNNNNNNYNNYYYYNNNYNNNNYNYNYYNNNYNYYN", "NNNNNYYNYNNNNNNNNNYYNNNNNNNNYNNNNNNNNNNNNN", "YNYYNNYNNNNNNYYYNNYNNNNYNNYNNNYNYYNYNNNNYY", "NYNNNNYNNNYNNNYNYNYYNYYYYNNYYYNNNYYNYNNYNY", "YNNNNNNNYNNNNNYNYYNNNNYNNNNNYYNNNYNYNYNNNN", "NNYNYYYNYNNNNNNNNYYYNNNNNNYNNYNNNNNNYNNNNN", "YYNNNYNNYNYNNYYNYYYNNYYNNYNNNNYYNYNYNYYYYY", "NYNNNYNNYNNNNNNNNNYNNNYNNYYNNYYNNYNYNNNNNN", "NYNNYYYNYNYNNNNNNNYNNNYNNNYNYNNNNYNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYNYNYNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNN", "NYNYYNYNNYYNNNYYYYYNNYNYNYYNYNNYNYNYYYNNYY", "NYYNYYYNYNNNNNYNYNNYNNNNNNNNNNNNNNNYYNNYNN", "NNNNNYYNYNNNNNNNNNYNNNNNNNNNNYNNNYNNNNNNNN", "NYYNYYYNNNNNNNNNNNYYNYYNNYYNYYNNNNNNYNNYYN", "NYNYYNYNNYNNNNNNNYNNNYNYNNYNYYYNNNNYYYNNYN", "NYYNNNYNYNYNNNNNNNYYNNNNNNYNYNYNNYNYNNYYNY", "NNNNYNYNYNYNNNNNNNNYNNNNNNNNYNNNNNNNYNYNNN", "YYNNYNNNNNYNNNYNNNYNNNNYNYYNNYNNYYNYNYNNNN", "NYNNNYYNNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNYNNN", "NYNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNYYYNNNYNNNNNNNNYNNNNNNNNNYNNNYNYYNYYNY", "NNYNYYNNYNYNNNYNYNNYNYYYNYYNYYNNNYNYYNNNNY", "NYNNNNNNYNYNNYYNNYYYNYNNNNNNNYYYNYNNYNNYNN", "NYNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNN", "NYNNNNYNNNNNNNNYYNYYNYNYNNYYNNNNYNNNYNYNNY", "NYNNNNNNYNNNNNNNNNYYNNNNNNNNNYNNNNNNNNYNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNYNYNNNNNNNNYYYNNYNNYYNYNYNNYNNYNNYYN", "NYNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNYNYNNNYNNYYNNNNNNNNNYNNNNNNNYNYNNN", "NNNNNNYNYNNNNNNNYNYYNNYNNYNNNYNNNYNNYNYNNN", "NYNNYNYNNNYNNNNNNNNNNNYNNNNNNYNNNNNYYNYYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 33466297;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNYNNNNYNYNNNNNYNNNYNNNNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNYYNNYNNNNNNYNNNNNYNNNYNYYNNNYNNYNNNNNYNNN", "NNNYNNNNNYNNNYNNNNNNNNNNNNNNNNYYYNNNNYNYNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNYNNN", "NNYNYNYNYYNYNNYNNYYYYYYYYYYYNNNNNNNNNYNYNNN", "YNYYYNYNNNYYYYNNNNNNNNNNNYNNNYYNNYNNNNNYNNN", "NYNNNNNNNNNYYNNNNNNYNNNNNNYNNNNYYYNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNYNYNNNYNNNNN", "YNNYNNNNNNNYNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNN", "NYYNNYYNNNYNYYNNNNYNNNYYYNNNNNYNYYNNNYNYNNY", "YYNNYYNNYYNYNYNNNNYYNYNYNYYYNYNNYNNNYNYYYNN", "NYYYYNNYNYYNNNNNNNYNNYNNNYNNNYNNYNNYYYNYYNN", "NYNNNNYNNYNNYNYNNNYYNNNYNNNYNNYYYYNYNNNNNNY", "NNNYYNNNYNNYNNNNNNNYNNYNNNYNNNYYNNNNNNNYNNY", "YNNYNNYNNNYNYYNNNNNNNNNNNNYNNNNNYYNNNNNYNNN", "NYNNNYYNNNYNNNNNNNYNNNYYNYNYNYYYYNNYNYNNNNY", "NNYYYYNNNNNNNNNNNNNYYNYYNYNYNYNYYNNYNNNYNNY", "YNYYNYNNNNYYNNNNNNNNNNNNNYNNNNNNYNNNNYNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNYNYNNNNNYNNN", "NYYNYNNNYNYNYNNNNNNNNNYNNNNNNYYYYNNYNNNNNNY", "YYNYNNYNNYNYYYNNNNNYNNNNNNYNNYYNNYNNNYNYNNN", "NNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNN", "YNYYNYNNYYNYNNNNNNNYNNNNNYNNNYNYYYNNNNNNNNN", "YNNYYNYNNNNNYNYNNYNNNNYNNYNYNYYYYNNNNNNYNYY", "NNNYNNNNNNNYNNNNNNNYNNNNNNYNNNYYNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNYNNNYNNNNNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNNYNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNYYNNNNYYNYYYYYYNYYYNYNYYNNYNYNYNNNYYNYYY", "NYNNYYYNNYNYNYNNNNNYNNNNNYYNNNYYYYNNNYNNNNY", "YYYNNNYNYNYYYNNNNYNNYNYYNYYYNNNYNYNNNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNN", "YNYYYYNNNYYNNNNNNYYNYYYYNYNNYYYYNYNNNNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYYNNNYYYYNNNNYNYNNYYYYYYYYYYNYNYNYNYNNN", "NYYNNYNNYYNYYNNNNNNYNYNYYYNNNNYYNYNNYYNNNNY", "YNNNNYNNNYYNNNNNNNNNNNYYNYYNNYNYNYNNNYNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 11008123;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNYNNNNYNNYNNNNNYYNNYNNNYNNNNNNNNNNNNYNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YYNNNYYNNNNYNYYNNNNNNYNNNYNYYNYYNNNNYYNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNN", "NNYNNYNYNNNNYNNNNNNYNYNNNNNNNNNNNNNNNYNYNNNN", "YNYYNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNYNNNNN", "YYNYNNNYNNYNNYYNYNNYNYYNNYNYNNYNNYYNYNYNNYNY", "YYNNYYYNNNYYYYYNYYNYNYNNYYYYYNYNYYNYNYNYYYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNN", "YNYYNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNYYNNNNNNYNNNNYNNNYNNNNNYNNYNNNNNNNNNYYNNNN", "NNYYNYNYNNYYNNNYNNNYYNNYNNNNYNYNNNNNYYYYYNNN", "YNYNNNYYNNNYNNNYNNNYYYYYNNNNNNYNNNNYNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNYYNNNNYNNYNNNNNNNYNNYNNYNYNNNNYNYYYNYNN", "NNYNYYYYYNNYNNYYYNNYYYYNNNNYNNNNYNNYNNNYNNYN", "NNNNYNYYNNNYYNNNNNNYYNNNNNNNYNNNNYYYYNYNYYNY", "YNNYNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNYNYYNNNN", "YNNYNNYNNNNYYNNNNNNYNNNNNYNNYNNNNNNYYYYYYNNN", "YNYNNYNNNNYYNNNYNNNYNNNNNNNNYNNNNNNNYNYYNNNN", "YNYYNNYNNNNYNNNYNNNYYYNYNYNNYNNNNNNYNYNNYYNN", "NNYYNYNYNNYYYNNNNNNNYNNNNNNNNNYNNNNYNNNNYNNN", "NYYYNYNNNNNYNYNYNNYNNNYYNNYYYNNNYYNYYYNNNYNY", "NNYNNNNNNNNNNNNYNNNYNYNNNNNNYNYNNNNYYNYYNNNN", "NYNNNYNYYNYYNNYNYNNYYYNYNYNNYNNNYNYYNNNYNNYN", "YNYYNNYNNNYNYNYNNNNYNYNNNYNNYNNNNNNNNNYYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNYNYYYYNYYNYYNNNYNYYYYYNNNNNYYNYNNYYNYNYNY", "YNNYNYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNYNYNNNNN", "YNYYNYNNNNNNNNNNNNNYYYNNNNNNNNNNNYNYNYNNYYYN", "NNYYNYYYYNNYYNNNNNNNNNNYNNNNYNNYNYNNYYYYNNNY", "YNNNNNNNNNYYYYYNYNNNNNYYNNNYNNYNNNNNNYYYYYNN", "YNNNNYNYNNYYNYNYNNNYNYNYNYNNNNNNNYNYYNNYYYNY", "YNYYNNNNNNNNNNNNNNNNNYNNNNNNYNYNNNNNYNNYNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNYNNNNYNYNNYNNNYNNNNNYNNNNYNNNNYYNYYNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YNYNNNNYNNNNYNNYNNNNNYNNNYNNYNNNNNNYNNYNNNNN", "YNYYNNNYNNNNYNNYNNNNYYNNNYNNNNNNNNNYYYNYNNNN", "YNYNNYYYNNNYNYNYNNNYYYNNNNNYNNYNNNNNNNNYNNNN", "YNYNNYYNNNNYYNYYYNNYYYYNNNNYNNNNNNNNNNYYYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 45873065;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> relations = {"NNYNYNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNYNNNYNNYNNNNNNNNYNNNYNNNNNYNYNNNYYNNYN", "NNYNNNNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNYNNNNNNNNYNNYNNNNNNNNNNNYNNNNNNYNN", "NNNNYYNYNNNNNNYNNNNYYNNNNNNYYYNNNNNNNYNYYNYYN", "NNNNYYNNNNNNNNYNNNYNNNNNNNNYNYNNNYNYNNNNNNYYN", "YYNYYYNYNNNNNNYNNNYNYNNNNYNYNYYNNYNYYNNNNYYYN", "NYNNNNYYNNNNNNYNYYNYNNNYNNYYNNNNNYYNNNYYYNYYN", "YNYNYYYYNNNYNNYNNNNNNNYNYNNNNYNYNYNYNNNYNNYYN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNYYYNNYYNNNNYYYNYYYYNNYNNNNNYYYYYYNNNNNNNY", "NYYYNYYNNNYNNNYNNYNNNNNYYNNYYNNNYNNNNNYNNNNYN", "NNNNYNNNNNNYNNNNNNNNYNNNNNNYNNNNNYNNNNYNNNYNN", "NNYNYNNNNNNNNNYNNNNNNNNYNNNNNYNNNYNYNNNNNNNYN", "NNNYYNNYNNNNNNYYNNNYNNYNNNNYNYNNNNNYNYNNNNYNN", "NYNNNNYYNNNNNNNNNNYNYNNYNNYYNNNYNNNYNNYNNYNYN", "YYYNNYNNNNNYNNYYNNNNYNNYNNNNNYNNNNNNNNYNNNYNN", "YNNNYNNNNNNNNNNYNNYNYNNNNNNNYNNNNYNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYNYYYYYNNNNNNNNYYNNNNYNYNNNNYYNYYNYYNNNYNY", "NNYNYNNNNNNYNNYNNNNNNNNYNNNNYNNNNYNYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYN", "YNNNNYYNNNNYNNYNNNYYYNNNNNNNNNNNNNNNNYYYNNNYN", "NNYNYNYNNNNYNNYYYNNYYNYYYNYNYNYYYNNYYYNYNYYNN", "YNNYNYNYNNNYNNYNYNYYNNYNYNNNNNNYNNNYNYYNYNYNN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNYNYNNNNNNNYNNYNNNNNNNNYNNNNNYNNNNYNNNYYN", "NNYNYNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYN", "YNYYYYYNNNNNNNNYNYNNYNYNYNYNYNNNNNNNYYYYNYYNY", "NYYNNNYNNNNNNNYNNNYYYNNYNNNNYYNNNYNNNNYYNNYYN", "YNNYNYYYNNYYNNNNYYYYYNYYNNYYNNNYNNNNNYNYNYNNN", "YYNNYNNNNNNYNNNNNNNNNNNYNNNYNYNNNNNNNNYNNNNYN", "YYYNYNYNNNYNNNNYNNYNYNYYYNNYYYNYNNNNNYYYYNYYN", "NNYNNNNNNNNNNNNNNNNNNNNYNNNYNYNNNNNNNNYNNNNNN", "NNNYYNYNNNYYNNNNYNYNYNYNYNYNNYNNYNNYNNYYNNNNN", "YYYNYNNYNNNNNNYNNNYYYNNNNNNYYNNNNNNNNNNYNNYNN", "NYNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNYN", "YYNNNYNNNNNNNNYYNNYNYNYYNNNYYYNNNNNNNNYNYNYNN", "YNYNNNNNNNNNNNNYNNNNYNNYNNNYNYNNNNNNNNYNNNYYN", "YNNNYNYNNNYYNNYYNNNYNNYYYNNYYYNNNYNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNYYNNYYNNYYYNYNYNYNNNYYYYNNYYYYNYYYYNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 121013978;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> relations = {"NNYYNYYNNNNNYYNYNNYNYNYYYYYNYYNYYYYYNNNNNYYYYN", "NNNNNNNNNNNNNNNNNYYYNNYNNNNNNNNNNNYNNNNNNNYNNN", "NNNNNNNYNYNNYYNYYNNNNNNYYYYNNNYYYYYNNYNYYYNNNN", "NNNNNNNNYNNNNNYYNYYNNNYNNYNNYNYNNYNNNNNYNNNYYY", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNYNYNNNNYYNYNNNNNNN", "NNNNNNNYYNNNNNNNYYNYNNYNNYNNNNYNNNNYNNYNYNNNNN", "NYNNNNNYNNNNNNYNYYYYYNYNYNNYYNNYYYYNYNNNYYNYYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYYNYNNNNNNN", "NNNNYNNYNNNNNNNNYYNYNNNNNNNNNNNNNNNNNNYNYNNYYY", "NNNNNYYNYNNNNYNNNNYNNNYNNYNNYNYYNYNNYNYNYYNYNN", "NYNNYYYNNNNYYYYYYNYNYYNNYYYNYNYNYNNYYNYNNNNYYY", "NYNNYNYYNNNNYYYNNYNNYNNNNYNNYYNNYYNNNNNNNNNNNN", "NNNNNYYNNNNNNNYNNYYYNNNNNNYNYNYNNYYYNNNYNNNNNN", "NNNNNNYNYNNNNNNNYNYNYNYNYNNYNYYNNNNYNNNNYNNNYY", "NNNNYNNNYNNNNNNNNYYNNNNNNNNNNNYYNNYNNNYNYNNYYY", "NYNNYNYYNNNNNNYNNYYNNNYNNYYNNNNNNYYYNNYNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNYNYYNNNNNNNNYNYNNNNNNNYNNNYNNN", "NNNNYNNYNNNNNNNNYNNNNNNNNNNNYNYNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNYNNYNNNNNNNYNYYNNNNNYNNYNYNNNNNYNNNYNYNNY", "NNNNNNYNYNNNNYNNNYNNNNYNNYYYNNYNYNNNYNNYYYYYNY", "NNNNNNNNYNNNNNNNYYNNNNNNYYNNNNYNNNYNYNNNNNNYYN", "NNNYNNYNYNNNNNYNYNYNNYNNYNNYNYYNNYYYYYYNYNYYYY", "NNNNYNNYNNNNNNNNNYYYNNNNNNNNYNNYNNNYYNYNNNYNNN", "NNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNNYNNNNNNYYYN", "NNNNNNYYNNNNNNNNNYNYNNYNNNNYNNNYNNNYNNNYNNNNYN", "NYNNYYNNYNNNNNNNYNNNNNYNYYNNNNYYNNYYNNNNYNYYNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYNYNNNNNNNNYYYNNNNYNNNNYNNNYYNNYNNNNYNNYNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNYNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNYNYYNYNNNNYYNNYNYNNYYNNNNNNYYNNY", "NNNNNYNYYNNNNNYNYYNNNNYNYYNYYNYNNNYNNNNNYNNNYY", "NNNNNNNYNNNNNNNNNYYNNNNNNNNNNNNYNNNNYNYNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNYNYNNNNNNNYNNNNNNN", "NYNNNNNYYNNNNNNYYYNNNYNNNYYYYNYYNYNYYNNNYNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNYNNNYNYNNNYYNNNNYYYNNYNNYNNNNNYY", "NNNNYNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNYYNYNNNYNYN", "NNNNYNNNNNNNNNNNNYNNNNNNNNNNYNYNNNNYNNYNYNYNNN", "NNNNNNNYNNNNNNNNNNYYNNNNNNNNYNNNNNNYYNYNNNNNNN", "NNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNYYNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNYNNNNNNNNYNNYNNYYNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNYYNNNYNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 64522471;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> relations = {"NNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNNNN", "YNNYNNYYYNNNNNNYYNNYNNNNYNNYYYNNNNNNNYNYNNNNNNN", "YNNYNNNYYNNNYYNYYNNNNYYNNYNYYYNYNNNNYNNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNN", "NYYNNNYYYNNNNYNNNNYYNYNYYNNYNYNYYNNNNNNNNNYNYNN", "NYYNNNYNYNNYYNNNNYNNYYNYYNYNNNYYNNNNNYNYNYNYNNN", "YNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNYNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNNNN", "YNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNYYNNYYNNYYNNNYNYNNNYNYNNYNNYNYYNYYN", "NYNNYYNNYYNNYNNNYNNNYNYYYYYYYNNYYNNYYNYNNYYYNNN", "YNYYNNNNYNNNYNNYNYNYNYYNYNNNYYNYNNYNNYNYNYYYNNN", "YNNYNNYNYNNNNNNYYNNNNNNNNNNNNYNYNNNNNYNYNNNNNNN", "NYNNNNYYNNNNNNNNYNNNNNYNYYNYYYNNNNNNNNNNNNNNNNN", "YYNYNNNYNNNNYNNYYNNYNYYNNYNNYYNNNNNNNYNNNNNNNNN", "YNNYNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNNYNNNNYNNYNNYNNNNYYNYYNNYNNNNNNNNNNNYYNN", "YYNYNNNNYNNNYYNYNYNYNNYNNYNYNNYNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNNNNNYNYNNNYYNNNYYNNNYNNYYNNNNNNNNNNNYNN", "NYNNNNNNNNNNYNNYNNNNNNYNYNNNNNNYNNNNNNNNNNNNYNN", "YNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNYNNYNNNNNNYNYYYNNNYNNYYNYNNNYNNNNYNNNNNNNNNN", "NNNNNNNYNNNNYNNNYNNNNNNNNNNYNYNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNN", "YNYNNNNNNNNNNYYNNYYNNYNNNNNYYYNNYNYNNYNNNNNYNNN", "YNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNYNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNYNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YYNYNNNYYNNNNYNYYNNYNNYYYNNNYNNNYNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNNNNNNNYNNNNNNNNYNNNYNNYYNYNYNNNYNNNNNYYNN", "NNNNNNYNYNNNNYNNNYNYNYNNNYNYYYNNNNNNNYNNNNNNNNN", "NNYNNNYYYNNNNYYNYNNYNNNYNNNYNYNNNYNNYNNYNNNYNNN", "YYYNYNNYYYNYNNYNNYNNNYYYYYYNNNYNYYNNYNYNNYYNNNN", "NYNYNNYYYNNNYNNNNNNNNYNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNYNNNNNNYNNNNNNYNNNNNNNNNYNNNNNNN", "NYYNNNYYNNNNYYNYYYNYYNYNNYYYNNNNNNNNYNNYNNYYNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNYNNYNYNNNYYYYNNYNNYNNNYNYYYYYNNYNYYNYNNYYYNN", "NYYYNNYYNNNNYYNNYYNYYNYNNYNYYYNYNNYNNYNNNNYYNNN", "YYNNNNYYNNNNYNNYYNYNNYNYYYNYNYNNNNNNYNNNNNNNYNN", "YNNYNNNYYNNNNNNYNNNNNYNNYNNNNNNNNNNNYNNNNNNNNNN", "YNNYNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNYNNYYNNNYYNYYYYNYNNNYYNNNYNNNYYNYNNNNNYYNNN", "YNNNYNNYYYNYNNNNYNYYNNNNYYYNNNYYYYNNYYYYNNNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 11332648;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YNNYNNNYYYNNYNYNNNNYNYYYNNYYYNNNNNYYNYYNYNNNNNNN", "NNNNYYNNYNYNNYNNYNNNYYNYYNNNNYYYNNNNNNNNYYNYNNNN", "YNNNNYNNYYNNNNNNNNNYYNNNNNYNYYYYNNNNNYNNNNNYNNNN", "YYNYNNNYYYNNYYNYNNNYYNNNNYNYYNNNNNNNYYNNYNNNNNNN", "NNNNNNNNYNNNNYNYNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNN", "NYYNYYNYYNYYYYYYNNNYYYYNYYYYNNNYYYYYYNYYNNYYNYNN", "YNNYNNNNNYNNNNYYNNNYNYYYNNNNNYYYNNYNNNNNYNYNNNNN", "YNNNNNNNNNNNNYNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNY", "NYNNNYNYYYNNYYNNYNNYYYNNYNYNNYYNYNYNNNNNYNNYNNNY", "YNNNNNNYYYNNYYYNNNNNNNNYNYNYYYNYNNYYNNYNYNYYNNNN", "NNNYNNNNYYNNNYNYNNNNYYYNNNNNNYNNYNNNNYNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNY", "NNNNNNNNYNNNYYNYNNNNYYYYNNNNYYNNNNNYNNNNYYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YYNNYYNNNYNYYYYNNNNNYYNYNNYNNYYNYYYNYNNNYNNNNNNY", "NNYNYYNYYYYNYYNNNNNNNNNNNYNYYYNYNNYNNNYYYNYNNYNN", "YNNYNYYYYYNYYYNYYNNNYNNYYYNYNNYNYNYYNYYNNNNYNNNN", "NNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNYYYNNNNNNNNNNNNNNNNY", "YNNNNYNNYNNNNYNNNNNYNNYNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNYNYNNNYNNNYNYNNNYNYNNNNNNYNNNYNNNNNNNYYYYNNNN", "YYNYNYNNNYNNNYNYNNNNNNYNNYYNNYNNYNYNYYYNNNYNYNNY", "NNNYNYNYNNNNNNYNNNNYNYNNNNNYNYNNYNYYNYNNNYNYNNNN", "NNNNNYNNNNNNNNNYNNNYNYYNNNNNYYNNNNNYNNNNNNYNNNNY", "YNNNNNNNNYNNYYNNNNNNYNNYNNNNYNNNYNNNNYNNNYYYNNNN", "YNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNYYNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNYYNNNNNNNYYNNNNNNNNNNYYNNNNY", "YNNNNNNNYNNNNYNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNYNNYNYNNNNNNNNNYYYYNNYNYNNYYYNNYNYYNNYYYNNNN", "YNNNNYNNNYNNYNYNNNNNYYYNNNYNYYNNYNNNYYNNYNNYNNNN", "YNNNNYNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNYNNNYYYNNNNNNYNNNNYNYYNNNNNNNYNNYNNNNNNN", "YNNNNYNNYNNNNNNNNNNYNYNNNNNNYNYNYNNNNNNNNYNNNNNY", "NNNYNYNNYNNNYNNNNNNYYNNNNNNNNNYYYNNNNYNNNYYNNNNN", "YYNYNYNYNNYNYNYYNNNNYNNNYNNNNYNYNNYYNNYNNNYYYYNY", "NNNYNNNNYNNNNYNYNNNNYYNNNNNNYYNNNNNNNNNNNYYNNNNY", "YNNNNNNNYNNNNYNYNNNYNNNNNNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNYNNNYNNNYNNNNNNNNNNNNNNNYYNNNNNNNNNNYYNNNNY", "NYNNNYNYYYNNYNNYNNNYYNYNNNNNNYNNYNYYYNYNNNYYNNNY", "YNNNYNNNNNNYYYYYNNNNYNNYYYYNYYNYYYYYNYNNNNYNYNNY", "YYNYYYYYNNNNYNYNYYNYNYYYYYNYYNYNNYNNYNYYNYYNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 155588434;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> relations = {"NNNYNNYNYYYNYYNNNYYNNYNNNYNYNNYYYYNNYYYYNNNNNYYNY", "NNNNYNNNNNNYNNNYNYYYNNYYNNNNNYNNNNYNNNYNYNNNNYNNN", "NYNNYYNNYNYNNNNNYNNYNNYNYYYNYNNNYYNYNYNYYYNYNYNNN", "NNNNNNYYNNNYNNYNNNNYNNYNYYNNYYNNYNYNNNYNYNNNNYNYY", "NNNNNYNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNYY", "NNNNNNNNNNNNNNYNYYNNNYYNNNNNNYNNNNYNNNYNNNNYNNNNN", "NNNNNNYNNNNNNNYNNYNNNYYNNYNNNYNNYYYNNNNYNNNNNNNYN", "NNNNNNNYNNNYNNYYNYYYNYNNNNYNNYNNYYNYNNYYNYNYYNNYN", "NYYYNYNYNNNNYYNYYNNNYNNYNYYNYNYNYNNYYNNNNYNNNNYNN", "NNNYYNYYNNNNNNYYYYNNNNNNNYNNYYNNNYYNNNYNNYNNNYNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNYNNNYNNYYNNNNYYNNNYNNNYN", "NYYNYNYNNNNNNNNYNNNNNYNNNNNNNNYNNNNNNNYNYYNYNNNNY", "NYYYYYNYYNNNNNNNYNYNNNYYYNNNNYYNYYNYNYNYYYYYYNNYY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNYNNNNYNYNNNNYNNYNNNNYYNNNNYNNNYY", "NNNNNYNNNNNNNNNNNYNNNYYNYNNNNNNNNYYNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNYYNNYNNNNNNYYNNNYYYNNNNNNNYY", "NNNNYYNYNNNYNNNYYYNNNNYNYNNNNNNNYYYNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNYNNYYNNNNNNYYNNNNYNNNNNNYNNY", "NYNNYYNYNNYNNNNNNYNNNYYYNNNYYYNNNNNNYNYNNNNYNYNYY", "NNNNNNNNNNNNNNYNNNNNNNYNNYNNNYNNYYNNNYYYNNNNNNNYY", "NNNNNYNNNNNNNNYNNNNNNNNNYYNNNNNNNYNNNNYNNNNNNNNNY", "NNNNYYYYNNNYNNNNYYYYNNNNYNNNNYNNYNYNNYNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNYY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNY", "NYNNYNNNNNNNNNNNNNYNNNYNNNNNYNNNYYYYNNNYYYNYNNNYN", "NNYNYYNYYNYNNNYNYNNNNNNNYNNNYYYNYNNNYNYNYYNYNNNNY", "NNNNNNNNNNNNNNYYNYNNNYYNNNNNNNNNNYNNNYYYNYNYNNNYY", "NNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNYNNNNYNNNNNYNNNNN", "NNNYNYNNNNNYNNYNYNNNNYNYYYYNYYNNNNYNYNYNYYNYNYNYY", "NNNYYYNNYNNNYYYNNYNYNNYYYNYNNYNNNNYYYYNNNYNYNYYNY", "NNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNYN", "NNNNNYNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNYNNNNNNNNY", "NNNNYNYYNNNYNNYNNYYYNNYYYNNNYYNNNNYNNYYNNNNNNYNNN", "NNYNYYNNNNNNNNNYYYYNNNNNYYYNYYNNYYNYNYYNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNY", "NNNNYNNYNNNYNNNYYYYYNYYNYYNNNYNNNNNNNYYYNYNYNNNYY", "NNNNYYNNNNNYNNNYNYYYNNYNYYNNNYNNYNYNNNNYNNNNNNNYY", "NYNYYNYYNNNNNNNYNNNNNNNYNYNNYYNNYNYYNYNNYYNNYNNYN", "NNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNYNYNNNNNNNYN", "NYNYYNNYNNNNNNNYYNNYNNNYYYNNNYNNNYNNNYYYNNNNNNNNN", "NNNNNNNYNNNYNNYYYYYNNYNNNYNNNYNNNYNNNYYYNNNNNNNYY", "NNNNNYYNYNNYNNYYNNYYNNYYNNNYNYYNYNNNYYYNYNYNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 207516132;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNYNYNNNYYNNNNNNNNNNNNNYNNNNNYNNYNNNYNN", "NYYNNNNNNNNYYYYYNYNNYYYNNYNYYNNNNYNYNYYYNNYYNNYNYN", "YYYNNNNNNYNNNYYYNNNNNYNNNYYNNNNNNNNNNNNNYYNNNNNYNN", "NNYNNNNNYNNYNYYYYNNNNNYYYYNNYNNNNNYNNNYNYNYNNNNNNN", "YYNNYYNNYNNYNYYNYYNYYYNYYNNNYNNNYNYNNNYYNYYNNNYNYN", "YNNNYNNNYYNNNYNNNYNNYYYNYNYNNNNYYNNNNNYNYYYNNNNNNN", "YNNNYNNNNNYYNYYNNYNNNYYNNNYNNNNNNYNNNNYNYYYYNNNNNN", "NNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNYYNYNYNNNNYYNNNNNNYNNNNNNNYYNYNNNYYN", "NNYNNNNYYNNNNYNYYYNYNNNYYNYNYNYYNYYNNNNNNNNYNNNYNN", "NYNNNNNNNNYNNNNNNNNYYNNNNYNNNNNNNNNNNNNNNNNNNNNYNN", "NYNNNNNNNYNNNYNYNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYYNYNNNYNN", "YNNNYNNNNNNNNNNNNNNYNYNNNYYNNNNNYNYNNNNNNNNYNNNNNN", "YNYNYYNNYNNNNYYYNYNNYYYYNYNYNYNYYNYYNNYNYNYYNNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNYNNNNNYNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNYYNNNNYNNNNNNNNNNNNNNNNNYNNNNNN", "NYYNNNNNYNYNNNYYYNNYNYNNNYNNNNNYYNYNNNYNYYNNNNNNNN", "NYNNNNNNNNYNNNNNNNNYYYYNNYNNNNNNNNYNNNNNNNNNNNNYNN", "YNNNNNNNNYYNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYYNNNNYNYNNYYNNNNNNYNYNNNNNYNNNNNNYNN", "YYNNNYYYNYNNNNNNYNNNNNYYNYNNYNYYYYNNNYYYNNNNYNYNNN", "NYYNNNNNYYYNNNYNNYNYNYYNYNYNNNNYNYYNNNYNNNNYNNNNYN", "NYYNYYYYNNNNNNYYNNNNYYNNNYYNNNYNYNNYNNNYNNNYYYYYYN", "YYYNNYNYYNNNNNYYNNNYYYYNYNYNNNNNYYYNNNNYNYNNNNNYNN", "YNYNYNNNNNNNNYYYYYNNYNYNNNYNNNNNNNNNNNNNYNYYNNNNYN", "YNNNNNNNNYNNNNYYNNNNYNYNYYNNNNNNNNNNNNNNNNNYNNNYNN", "NNYNNNNNNNYNNYNNNNNNNYYNNNNNNNNNNNNNNNNNYNNNNNNYNN", "YNNNNNNNNNNNNNNYNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNYYNYNYNYYYNYYNNYYNYNYYYNYNNYYNNNNNYYYNYYYNNNNY", "NNNNYNYNYNYYNYYNYNYYNNYNYYYNNYYYYYNNNNNNYNNYYNNYNN", "NNYNNNYNNYYYNYNNYYNNNNYNYYYNYNNYNYNNNNNNYNYYNNYYNY", "YYYNYNNNNNYYNNYNYYNNNYYNNYNNNNNNNYNNNNNNYYNYNNNYYN", "NNYNYYNYYYYNNYYNNNNYYYYYYYYNYNNYYNYNNNNNNNNYNNYNYN", "NYNNNNNNNYNNNYNYNNNYNYYNNNNNNNNNNNNNNNNNNYNYNNNNNN", "YYNNNNNNNNYNNNNYNNNYYYNNYYNNNNNNNNYNNNNNNNNYNNNNNN", "NNYNYNNNNYYNNNNNYYNYNNNNNYYNNNNNNNYNNNNNYNNYNNNNNN", "NNNNNNNNNYYNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYYYYNNYNNYYYNNNNNNNNNNNYNNYNYNNNNYYNNNNNNYNYN", "YNYYYYYYNYNYNNNNNYNYYNNYYYNNNNYYNNYYNNYYNYNYYNYNNN", "YNYNYNNNYYNNNNYYYYNNNYNYNYNNYNNNYNYNNNYNYNYYNNNYYN", "NNNNNNNNNNYNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNYYNNNYYNYNYYYYNNNNNNNNNNNNNNNNNYYYNNNNNNN", "NNNNYNNYNNNNNYYYNYNYNYYNNNYNYNNNYNYNNNNNYNNNNNYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 398603970;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> relations = {"N"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> relations = {"NN", "NN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> relations = {"NNY", "NNN", "NNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> relations = {"NNNN", "YNNY", "NNNN", "NNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> relations = {"NYYYY", "NNNNN", "NNNNN", "NNNNN", "NNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> relations = {"NNYNYN", "YNYNNN", "NNNNNN", "NNNNNN", "NNYNNN", "NYYYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> relations = {"NNNYYNY", "NNNNYNN", "NNNNNYN", "NYNNYNN", "NNNNNNN", "NYNNNNN", "NNNYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> relations = {"NNNNNYNY", "YNNNYNNY", "NNNNNNNN", "NYYNNYNY", "YNNNNYNY", "NNNNNNNN", "YYNYYYNY", "NNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> relations = {"NYNYNNYYY", "NNYNYYNNN", "NNNNNNNNN", "NNYNNNYNN", "NNNNNNNNN", "NNNNYNYNN", "NNNNNNNNN", "NNYYNNYNN", "NNYNYYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> relations = {"NYNNNYYYNN", "NNNNNYYNYY", "NYNNYNYYNY", "NNNNYYYNYY", "NNNNNNYNNY", "NNNNNNYNYN", "NNNNNNNNYN", "NNNYNNYNNY", "NNNNNNNNNN", "NNNNNNNNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 63;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> relations = {"NNYYNYNYNYY", "NNNYNYNYNYN", "NNNNYYNNYNN", "NNNNNNNNYNN", "NNNYNNNNYNN", "NNNNNNNNNNN", "NNYNYNNNNNN", "NNYNYNYNNNN", "NNNNNNNNNNN", "NNNYNNYNYNN", "NNYYYNYNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 109;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> relations = {"NNYNNNYYYYNY", "NNNNNNNNNNNN", "NYNNYNNNYNNN", "YYYNNYYYYYYN", "NYNNNNNNNNNN", "NNNNNNNNNNNN", "NNNNNYNNYYNY", "NYNNYYNNNYNN", "NNNNNYNNNYNN", "NNNNNYNNNNNN", "NYNNNYYNNNNN", "NYNNNNNYYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 140;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> relations = {"NNNNYNNNYNNNY", "NNYNNYNYNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNYNYN", "NYNYNNYYNNYYY", "NNYNNNNNNNNNN", "NNYYNYNNNYYNN", "NNYNNYNNNYNNN", "NNYNNNNYNYNYN", "NNNNNNNNNNNNN", "NNYNNYNNNNNNN", "NNNNNYNYNYNNN", "NNNYNYNNYNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 187;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> relations = {"NYNNNNNNNNNNNN", "NNYNNNNNNNNNNN", "NNNNNNNNNNNNNN", "YNYNNNNNNNNNNN", "YNNNNYYNNYYNNY", "NYYNNNNNNNNNYY", "YYYYNNNNNYNNYY", "YYNNNNNNNNNNNN", "YYYYYYYYNNYYNN", "YNYYNNNNNNNNNN", "NNNYNYYNNNNNYY", "NNYNNNNYNNYNNN", "NNNYNNNNNNNNNY", "NYNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 266;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> relations = {"NNNNYNNYNNNYYNN", "NNNNNNNNNNNYNNN", "NNNYNNYYNNNNNNN", "NNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNN", "NNNNNNNNYYNNNYN", "NNNYNNNYNYNNNNN", "NYNYNNNNNNNNNYN", "NYNYYNNNNNNNYNN", "NNNNNNNNNNNNNNN", "YNNNNNNYYYNYNNY", "NNNYNNNNNNNNNNY", "NYNNYNNYNNNNNNY", "NYNYNNNNNYNYNNY", "NNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 204;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> relations = {"NNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NYNNNNNNNNYNNNNN", "YNNNYNNNNNNNNNNN", "NYNNNNYNNNNNNNNN", "NNNNYNYNNYNNNNNN", "NNNNNNNNNNNNNNNN", "NNYYNYYNYNNYNYNY", "NYYNNNYNNNNNNNNN", "YNYNNNNNNNYNNNNN", "YNNNNNYNNNNNNNNN", "NYYYYYNNNYNNNNNN", "YNNYNYNNYYYYNYNY", "NNYYYNYNYYNYNNNN", "NYNNYNYNYNNNYNNN", "NYYNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 403;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> relations = {"NNNNYNYYNNYNNNNNN", "NNNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNN", "NNYNYYYNNYYNYNNNY", "NNNNNNNNNNNNNNNNN", "NYYNNNNYNNYNYNNNY", "NNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNN", "NNNNYNNYNYYNNNNNN", "NNYNNNNNNNYNYNNNN", "NNNNYNYYNNNNYNNNN", "YNNNYYYNNYYNNYNNY", "NNNNYNYNNNNNNNNNN", "YYNYNYYYYNNNYNYNN", "NYNNYNYNNYNNNNNNN", "NYNNYYNNYYYNNYYNN", "NNNNYNNNNNYNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 631;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> relations = {"NNNYNNNNNNNNYNNNNY", "YNYYNYNYYNNNYNYNYN", "YNNYNYNNNYNNNYNNYY", "NNNNNNNNNNYNNNNNNY", "NNNYNYNNNNYNYNNNNN", "NNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNYYNY", "YNNNNNYNYYYYNNNYYN", "YNNNNNYNNNNNYNYNNY", "YNNYNYNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNN", "YNNNNYYNYYNNYNNNNN", "NNNYNNNNNNYNNNNNNY", "YNNNNYNNNNNNNNNYYN", "NNNNNYNNNNNNNNNNNN", "NNNNYYNNNNNNNNYNNY", "NNNYYYNNYNYNYNYNNN", "NNNNNYNNNNYNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 2159;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNY", "YNNNYNNNNYNYNYYYNYN", "YNNNNNNNNNNNNNNNNNY", "YYNYNNNNNNYYNNNNNNN", "NYNNNNNNNNNYNNNNNNY", "YYNNNNNNNNYYNNNNNNN", "NYNYYNYNYNYNNYNNNNY", "NYNYYNNNNNNYNYYYNNN", "YNNYYNNNNNYNNYNNNNN", "NNNYNNNNNNNNNNNNNNN", "YNNYNNNNNNNNNNNNNNY", "YYNNYNYYYYNNNYYYNNY", "YNNYYNYNNNNYNNNNNNY", "YNNNNNNNNNNYNYNNNNN", "NNNNYNYNNYNNNYNNNNY", "YNNYNNYNYNNYNNYYNNY", "YYNYNNYNYYYYNYYNNNN", "NNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 2208;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> relations = {"NNNNNNYYNNNYNNNYNNNN", "NNNNNYNYNNYNNNNNYNNN", "NNNYNYYNYNNNNYNNYNYY", "NNNNNNNNNYNNNNNNYNNN", "NNNNNYNYNYYNNYNYNNNN", "NNNNNNNYNNNNNNNNYNNN", "NYNYYNNNNNNNYYNYNNNY", "NNNNNNNNNNYNNNNNYNNN", "NYNNYYNYNNYNNYNNNNNN", "NYNNNYNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNYNYNNYYNNYNNNNYN", "NYNYYNNYYNNNNNNNNNNY", "NNNYNYNYNYYNNNNNNNNY", "YYYYNYNYYNYNYNNYYNNN", "NNNYNNNYNYYNNNNNYNNY", "NNNNNNNNNNNNNNNNNNNN", "YYNYNNNNYYYYNYNNNNYN", "NYNYYYNYNYYNNYNYYNNN", "NYNNNYNNNNYNNNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 9996;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> relations = {"NNNNNYYNNNNNYYNNNYYNN", "YNNNNYNNNNNYYYNNNYNNN", "YNNNNNNNNNNYNYNNNYNNN", "YYNNNYYYNYNYYNNYYYYNN", "YYNNNNYYNYNYNNNYYYYNN", "NNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNYNYNNNNNNN", "YYYNYNNNNNNNYYNYNYNNN", "NNNNNNYNNNNYYNNNYYNNN", "NYNNYYYNNYNYYYNYYNYYN", "NNNNNNNNNNNNNNNNNYYNN", "NNNNNYYNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNN", "YNNNNNYYYYYNYNNNYYYNY", "NYYNNNYYNNNYYYNNNNYNN", "YNYNNNYNNNNNNYNNNYYNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNN", "NYYNYNNYYNNNNYNNNYYNN", "YYNNNNYYNYYNNYNNNNNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 5572;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> relations = {"NYNNYYNNNNYYNNYYNYNYYN", "NNNNNNNNNNNNNNNNNNNNNN", "NYNNNYNNNYNNNNYNYNNNYY", "NNNNNYNNYYYNYNYNYNYYYY", "NNYYNNNNNYNNYNYYYNNNNY", "NNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNNNNYYYNYNYNYNNY", "NYNNNNNNNYNNNNNNYNNNNN", "NYNNNYNYNNNNNNNNNNNNYY", "NNNNNYNNNNNNNNYNNNNNNN", "NNYNNNNNNYNNNNNNYNNNYY", "NNNNNYNNNYNNNNNNYNYNYY", "NYNNNNNYNYYYNNNNNNNNNN", "NNYYNNYYNNNYYNYNNYNYYN", "NYNNNNNNNNNNNNNNNNNNNN", "NNNYNYYYYNYNNNYNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNN", "NNYNNYNNNYYNYNYNYNYNNY", "NYYNNNNYNYNNNNNNNNNNYN", "NYYNNYNNNYYYYNYNYNYNNY", "NYNNNYNNNNNNNNYNYNNNNY", "NYNNNNNNNYNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 8521;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> relations = {"NYYNNNYYYNNNNNYNNNNYNNY", "NNNNNNNYNNNNNNNNNNNYNNN", "NYNNNNYYNNNYNNNNNNNNYNN", "NNNNYNNYNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNN", "NYYNYNYYYYNNNNNNYNNYYYN", "NNNNNNNYNNNNNNNNNNNYNNN", "NNNNYNNNNYNNNNNNNNNNNNN", "NNNNYNNYNNNNNNNNNYNYNNY", "NNNNYNNNNNNNNNNNNNNNNNN", "YNYNNNYYYNNNNNYNNNNYYYY", "NNNNNNNNNYNNNNNNNNNNNNN", "NYNNNYNYNNNNNNNNYYNNYNY", "NYYNYNYYYNNYYNYNYNNYYYN", "NNNYNYYYYYNYNNNNYYNNYYN", "YYYNYNYYYNNYNNNNNNYYYNY", "NNNYNNNNNYNNNNNNNNNNYNN", "NNNYNNNYNYNNNNNNNNNNYNN", "NYNNNYYNNYNYNYYNNYNNYNN", "NNNYYNNNNNNNNNNNNNNNNNN", "NNNNYNNNNYNYNNNNNNNNNNN", "NNYYNNYYNYNYNNNNNYNYNNN", "NYNNNNNNNNNNNNNNNYNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 5153;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> relations = {"NNNYNNNYNYNYYNNNNYYNNNNN", "NNNNNNNNYYNNYNNYNNNNYNNN", "NNNYNNNYNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNYYYNNNYNNYYYYNNNYY", "NYYYNNNYYNYNNNYYYYNYYNNN", "NYYNNNNYNYNYYNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNYNNNNNNNNNNN", "NNNYNNNNYNYNNNNYNNNNYNNN", "NNNYNNNYYNNNNNNNNNNNYNNN", "NYNYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNN", "NNYYYYNYYYNNNNYNYYYYNNYN", "NNNNNNNNYNYNYNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNN", "NYNYNNYYNYNYNNYYNYNNYNNN", "NYYNNNYNYYYNYNNNNNNYYNNN", "NYNYNNYNYYYNNNNYYYNYNNNN", "NYNNNNNYNYYNYNNYNNNNNNNN", "NNNYNNNYNNNNNNNYNNNNNNNN", "NYYYYYYNNNNNNNNNNYYYYNYN", "NYNNNNNYYNYYNNYYYYNNNNNN", "NNNNNYNNNNNYNNNYYYYYYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 34788;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> relations = {"NNNNNNNNYNNYYNNNNNNNNNNNN", "NNNNNYYYYNNYYYNNNNNNYNNNN", "NYNNNNNYYYNYYNNNYNYYYYNNY", "YNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNYYYNNYNNNNYNNNNYNNY", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNYNNYNNNNNNNNNYNNN", "YNNYNYNNNNNYNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "YNNYNNYYYNNNYNNNNNNNYYYNY", "NNNNYYYNYYNYYYNNYNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNYNNN", "NNNYNYNNYNNNNNNNNNNNNYNNY", "YYYYYYNNYYYYNYNNNNYNYYYNY", "NNYNNYYNNNNNYNNNNNYYNNNNY", "YNNYNYNNNNNYYYNNNNNNNNNNY", "YNNYNNYNNYNNYYNNYNYYYNNNY", "NNNNYYYYNYNNYYNNYNNYNNNNN", "YNNNNYYYNNNYYNNNNNNNYYNNN", "YNNNNYYNYNNYYNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNYYYNNNNNNNNNNNNYYNNN", "YNYYNNNNNNYNNYYNYNNNYNYNY", "NNNYNNNYNNNNYNNNNNNNYYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 12605;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> relations = {"NNNYYNNNYYNYYNNYNNYNNYYYNN", "NNNNNNNYNNNYNNNYNNNNNNYNNN", "YYNYNYNNYNNYYNYYYNYNYNNYNN", "NYNNNNNYYNNYYNNNNNNNNYYNNN", "NYNNNNNNYNNNNNYNNNNNNNYNNN", "NNNYYNNYNYYNYYNNNNYNNYNNYN", "YNNNNNNYYNYNYYNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNYNNNNNNNYNNNN", "NNNNNNNNYNNYNNNYNNNNNNYNNN", "NNNNNNNYYNNNNYNNNNNNNNYNNN", "NNNNNNNYYNNNNYYNNNNNNYYNNN", "NNNNNNNNYNNNNNNNNNNNNYNNNN", "NYNNNNNNNNNYNNNYNNNNNYYNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNN", "YYNYYNYNYNYYNYNNNNYNYNNNYN", "YYYYYYYNYYYNNNNYNNYNNNNNYN", "NYNYNNNYNYNYYYNYNNNNNYNNNN", "NNNNYYYNNNYNYYYNNNYNNYYYYN", "NYNNYYNNNNYNNYYNNNYYNNYNNY", "NNNNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNYNNYNNYYNYNNNNYNNYNNNN", "NNNYYNNNYYYYNYNYNNYNNNYNNN", "NNNNYNNNNNNYNYYYNNNNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 27630;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> relations = {"NNNNYYNYNNNNYNYYNNNYYNNNYNN", "NNNYYYNNNYNYNNYNYNNNYYNYNYN", "YYNYNNNYNNNNNYNNYYNNNNYYYNN", "NNNNNNYNNNNNYNNNNNNNNNNNNNY", "NNNNNYNYNNNNNNNYNNNNNNNNNNY", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYYNYNNNNYNYNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNYNYNNYNNNNNYNYNYYN", "NNNNYNNNNNNYYYYYYNYYYYNNYYN", "NNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNYYYNNNNYYNYYNYNYNNYYYY", "NNNNYYNYNNNNNNNYNNNYNNNNYNY", "YNNNNYNYNNNNNNYNNNNNNNNNYNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNYNNYNYNYNNNYNNNNNYYY", "YNNNYNNNNNNNNNYNYNNYNYYNYYN", "YNNYYNYYNNYNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNY", "NNNYNNNYNNYNYNNYNNYYNNNYNYN", "YNNNNYYYNNNNNYYNNNNYNNNYYYY", "NNNNYNNYNNYNNNNYNNNYNNNNYNN", "NNNNNYNYNNYNNNNNNNNNNNNNNNY", "NNNYNYYNNNNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 15713;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> relations = {"NNYNNYNYYYYNNYYYNYNNNYYNYNNN", "NNNNYYYNNNNNNYYYNYNNNNNNNNNY", "NYNNYNYNYNNNYNYNNYNNNNYNYNNY", "NYYNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNYNNNNYYYNYNNNNYNYNNN", "NNYYNNYNNNNNYYYYNYNNNYYYYNYY", "NNNNYNNNNNNNYNYYNYNNNNYNYNNN", "NNNNYYYNNNNNNNNNNYNNNYYNNNYN", "NNYNNNNNYNNNYYYYNYNNNNNYYNNY", "NNYNNYNNYYYNNNYNNYNNNYNNNNNY", "NNNNYYNNNNNNNNYNNNNNNNNNYNNN", "NNNNNYNNNNNNYNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYNNNNNNYNNN", "NYYNNNNYYNNNNNNNNYNYNYNYNNYN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNYYYYYNYNNNYYNNNYNYYNNN", "NYNYYYNNNNNNYNNNNNNNNNYYYNNN", "YNNNNNNNNYNYYNNYYYYYNNYYNNNN", "NNYNNYYNYNYNNYYYNNNNNNYYYNNY", "NNNNYYNNNNNNNYYNNNNNNNNNNNNN", "NNNNYYNNYNNNNNNNNNNNNNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYYNYNNNNNYYYYYYNNNNNYNYY", "NNNYYNNNYNYNNYYYNNNNNNNYNNNN", "NNNNNYNNNNNNYNYNNNNNNNYNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 56978;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> relations = {"NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNNNYNYNNNNYYNNNNNNNNNN", "YNNNYYYYNNNNNYNYNYNNNNNNNYYYY", "YNNNYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNNYNYNNNNNNYYNN", "NNNNNNNYNNNNNNNYYYYYNNNYNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNYNNNNNYYNNNYNNNNNNNYNNNN", "YNNYYYNNNNNYYYNYNNNNNNNYNNYNY", "NNNNYNNYNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNYNYYYNNNNNNYNYYN", "NNNNYNNNNNNNNNNYYNNYNNNNNYYNN", "NYNYNYNNNNYNNNNNNNNNNNNYNNNYN", "YYNNNNNNNNYYYYNNNNNNNNNNYYYNN", "NNNNYNNYNNNNNNNNNNNNNNNNNNNNN", "YNNYNNNNNNYNNNNYNNNNNNNNNNNNY", "YNNYNNNYNNYNNNNYYNYNNNNNNNNNY", "NNNYYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNYNNNNNNYYNNNNNNYNYY", "YNYYYNYNNYNYYYNNYYYYNNNNNNYYY", "YNYYYNYNNNYNNNNYYNNYNNNNNNYNY", "NYYNYYNNNNYNYNNNYYNYNYNYYNYNY", "NNNYYNNYNNYNNNNNYYNNNNNNNNYNN", "NYNNYYNNNNYNNNNYYNNNNNNYNNYNN", "NNNYYNNYNNNNNNNNYNNNNNNNNNYYY", "NNNNNNNYNNNNNNNNYNNNNNNNNNNNN", "NNNYYNNNNNYNNNNNYYYNNNNNNNNNN", "NNNNNNNNNNYNNNNYNNYNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 50076;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> relations = {"NYYNNNYNYYNYNYYNNYNNNNNNNYNNNN", "NNYYNYNNNNNYNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNYYYYNNYNNNNNNNYNNYNYNN", "NNNYNNYNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNYNNNYYYNYNNNYNNNYYNNNNNNN", "NNYYNYNNNNNNNYNNNYNNNNNNNYNNNN", "NNNYNNNNNNYYNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNYNNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNYYYYNNNNYYNYNNNYYYYYNNYN", "NNNNNNYNNNNNNNNNNNNNNYYNNNNYNN", "NYYYNNNNNYYYNYNNNYNNNNYNNNNNNN", "YNYNYYNYNYNNNYNNNYNNNYNNNNYYNN", "YYNYNNYNYYNNNNNYNNYYNNYYYYNNYY", "NNNYNNNNNYYYNNNNNNNNNYNNNNNYNN", "YYYYNNNNYNNNNNYNNNNNNNYNNYNNYN", "YYNNNNNYNNNNNYNNNYYNYYNYNNYNYN", "YNYNNNNYNNNYNNNYNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNNNNYNN", "NYYYNNYYNNNNNNYNNNNNNNYNNYYNNN", "YYYNYYYYYNYYNYNNNYYNNYYYNNNYNN", "NNNYNNYNNNYYNYNNNNNNNYYNNNNNNN", "NYNYNNYNYYYYNNNNNNNNNYNNNYNNYN", "NNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNYNNYNYNNYNNNYNNNNNNNNNYNN", "NYYNNYYNNYNYNYYYNYNYYYYNNYNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 53522;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> relations = {"NNNNNNNNNYNNYYNNNNNYNNNNNNNNNNN", "NNNNNNNYNNYNYNNNNYNYNNNNNYYNNNN", "YNNNNNNNNYNNNYNNNNNNNNNNNYNNNNN", "YYNNYNNYNYYYNNNNNYYNNNNNYNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYYNNNNYNYYYNYYYNYNNNNNNNNNNN", "NNNYNYNNNNNYNYYYNYYNNNNNNYYNYNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNYNYNYYYYYNYYYYNYYYYNYYNNYN", "NNNNNNNNNNNNNYNNNYNNNNNNNNYNNNN", "YNYNYNNYNNNNNYNNNYYYNNNYNYNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNNNNNYYNYNNYNYNNNNYNYYNNNN", "YNYNNNNNNNNNYNNNYNYNNNNNNYYNNNN", "YYYNYNNNNYYYYNNNNNNYNNNYYYNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNYNYNNNNNNNYNNNYNNYNNNN", "NNNNNNNYNNNYNNNNNYNNNNNNNNNNNNN", "YNNNYNYYNYNNYNYNNNNYNYNNYNYYNNN", "NYYNYYYYNNNNYYNNNYYNNNNYNYYNNNN", "YYNYNNNYNYYYYYNNYYYYNNNNNNYNNNN", "YNNNNNNYNYNYNNNNNNNNNNNNNYNNNNN", "YYNNYNNNNYNYYNNNNNNYNNNYNYNNNNN", "YNNNYNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNYYNNNNNYNNNNNNNNNNN", "YYYYYNNYNNYNNNNYNYNNNNNNYYYNNNN", "YNYYYYNNNNNNYYNYYNNYNNYNYNYNNNN", "NYNYYYNNNYYNNNYYYYYYNNNNNYNYNNN", "YNNNYNYNNYNNNYYYYYYNYNYYYNNYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 294603;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> relations = {"NNNNNNNNNYNNYNYNNNNNNYNNNNNNNNYN", "YNYNNNNNNYNNNNYNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNYYNNNNNNNNNNNNNYNNNNN", "NYYNNYNNNNNYNNNNNNNNNNYNNNNNNNYN", "NYNYNYNNNNNYNNYNNNNYNNNNNNNNNNNN", "NYNNNNNNNYNYNNNNNNNNNYYNNNNNNNNN", "NNNNYNNYYYYYYNYNNNNNNNNNNNNYNNNY", "YYYYYNNNNYNYNNYYNYNYNYNNYNYNNNNN", "NYYYYYNYNNNNNNYNNNNNYNNNNYYNNYYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNYYNNYNNNYYNNYNNNNYNYNNYNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNYNNNNNNNNYN", "YYYNYYNNNNNNNNYYYYNYYNYNYYYNNYYY", "NNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNN", "YYNNNNNNNNNNNNYNNNNNNYYNNNNNNNYN", "YNYNNNNNNNYYYNYYNNNYYYYNYYYYNNYN", "NYNNNNNNNYNNNNNYNNNYNYNNNNYYNNYN", "YNYNYYNNYYNYNYYNNNNNNNYNNNNNNYNY", "NYYYNYNNNYNNYNYYNNNNNNNNNNYNNNNN", "NYYYYNNNNYNYYNNYNYNYNYNNNNYNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNN", "NYNYNYYYYYNNYYNNYYNYNYNNNYNNNNYY", "YYYNYYNNNNNYYNNNNNNNNNYNNNYYNYNN", "YNYYNNNNNNNNNNYNNYNYNYNNYNNYNNNY", "NNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNYYNNNNNNNNYNNNNNNNNYN", "YYNYNYYYYNYYYNYYYNNNYNYYYNNNNNYY", "NNNYNYNNNNNYYNYYNNNYNNYNNNNYNNNN", "NNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNN", "YNNNYNNNNNNNNNNNNYNYNYYNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 427338;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> relations = {"NYYNNNNNYNYYYNYNNNNYYNNNNNNNNYNNN", "NNNNYNNNYNNNNNNNNNNNNNNNNNNNYNNNN", "NYNNYNNNNNNNNNNNNNNYNYNNNYNNYNNYN", "YNYNYNNNNNYYYNNYYNNNYYNYYYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNYNNNNNNNNNNYYNNNYN", "NYYNYNNNNNNYNNNNNNNNNNNNNYNYYNNYY", "YNYNNNYNYNNNNNYYYNNYYNNNYYNNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNYNYYNNYNNNNNYYYYNNNNNNYYNYNNN", "NYYNYNYNYNNNNNYNNNNNNNNNNYNYYNNNN", "NYNNYNNNNNNNNNNNNNNYNNNNNNNYYYNYY", "NYYNNNYNNNNNNNNNNNNYNYNNNNNNNNNYN", "YYNNYNNNYNNNNNYYNNYYYYNNYNYYNYNNN", "NNNNNNNNYNNYNNNNNNNNNNNNNNNYNYNNN", "NYNNYNYNNNYYNNNNNNNNNNNNYYNNNYNYY", "YNNNYNYNYNNNYNNYNNNNYNNNYYNNNNNYY", "YYNNYNYNNNNYYNNYNNNNYYNNNNYNNNYYY", "NYYNYNYNNNNNNNYYNYNNYYNYYYNYYNYNN", "NNNNYNNNNNNNNNNNNNNNNYNNNYNNNNNNY", "NYYNYNNNNNNYNNYNNNNYNYNNNNNNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNYYNYYNNYNYNYNNYYNNYYNYNNNNN", "YNYNYNNNNNYYYNYNNNNNNYNNNNNYYYNYY", "YYYNYNYNNNNNYNYNNNNNYYNYNYNYYYNYY", "NYNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNYNYNYNYYNNNYNNNNYNNYYNNNYNYYY", "NYYNNNNNNNNNNNNNNNNYNNNNNYNNNNNYY", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNNYNNNNNNNNYNNNY", "NYYNNNYNYNYNNNYNNNNYYYNNNNNNNYNYN", "NYNNNNNNYNNNNNNNNNNYNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 709743;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNYYNYNNNYYNNNYNNNNNNNNNN", "NNNYNYYNYYYNYNNNNNYNYNNNNYNNNYNYNY", "YYNNNNNNYNYYYNNNNNNNNNYYNNYNNYNNNN", "NYNNNNNNNNNNNNYNNNYYNNNYNNNNNNNYNN", "YNNNNNYYYNNYNNNNNNNYYNNYNNYNNYYYNY", "YYNNYNNNYNYYNNYNNNNNYNYYNNNNYNNYNN", "NNNNNNNNYNNNYNNNNNYYNNNYNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNYYNYNYNNYYNNNNNNYYNYNYYYNNYYNNN", "YNNNNNNNYNNNNNNNNNYYNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNN", "YNNNNNNNYNNNNNNNNNNYNNNYNNNNNNNNNN", "YYNNYNYYYNNYYNNNNNNNNNNNNNNNNYNNNY", "YNNNNNNYNNNNYNNNNNYYNNNYNNNNNYNYNN", "YNNYYYYNNYYYNNNNYNNNYNYYYYNNYYYYNY", "YNYNYYYNYYYYNNYNNNNNYNNNYNYNYNYNNN", "YYNNYYYNYNYNNNNNYNYYYNNYYNNNYYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNYNNNYYNYNNNYYNNNYNNNNNNNNNN", "YYYNYYYYYNYYYNNYYNYNNNNYNNYYYYNNYY", "NNNNNNNYNNYNYNYNNNYYNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNNNYNYNNNNYYYNYNNYNNNNYNNN", "NNNYNNYNNNNYNNNNNNYNYNNYNNNNNYYNNY", "NNNNNNNNYNYNYNNNNNYYYNNYNNNNNYNYNN", "NYNNNNYYNYYYYYNYYNYYYNYYNYNNNYNNNN", "YYNNYNNNNNYNNNYNNNYNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNYNNYYNNNNNNYYNYYNNNNNNNYNN", "YNNNNNNNYNNYYNNNNNNNNNNNNNNNNNNNNN", "NYYNNYNYYYNYYYNNYNYNNNNYYNYNYYYYNN", "NNNNYNNNNNYNNNNNNNYYYNNNNNNNYNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 851021;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> relations = {"NNNNNYNNYNNNYNNYNNNNNNNNNYNYNYNNNYY", "NNYNNYNNYYYNYNNNNNYNNNYYNNYNNNYNNYN", "NNNNNYNNNNNYYNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYYNNNNNYNYNNYNNNNNNNYNNNYNNNYY", "NYYYNNYNYYYNNNYYNYNNNNNNNYNYNYNNNYY", "NNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNNNNNNNNYNYNNNNNYNYNYNNNNNNN", "NYNNNYYNNYYYNNYNNNYYNYNNYNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNYNNNYNNNNNNNNNYNYNYNYYNYNNNYN", "NNNNNNYNYNNYYNYNNYYNYNNYNYYNNNNNYYY", "NNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYYNNYYYNNNNNYNNYYNYYNNNNNYYNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNY", "NNYNNYNNYNNYYNNNNNNNNNNNNNYYNNNNNNY", "NYNYNYNYYNYNNYNNNYYYYYYYYYNNYYYYYNN", "NNYNNNNNNNNNYNYYNNNNNNNNNNNNNNNNNNY", "YNYYNNYNYNNNYNYNNNNNNNNNYNNNNNNNNYY", "NNNYNNYNYYYYYNNNNYYNNNNNYYNNNNNNNYY", "NNNNNYYNNNNNNNNNNNNNNYNNYNNYNYNNNYY", "YNNNNYNNYNNYYNYNNNYNNNNNYYYYNNNNNNY", "NNNNNNYNYNNYNNYYNYYNNNNNYNYNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYNYNNNNNNNNYNNYNNNNNYNYYYNYNNNNY", "NNNNNYNNYNNNNNYYNNNNNNNNNNYNNNNNNNN", "NNNNNYNNYNNNYNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNNYNNNNNNNNNNNYNNNNNNNNNNY", "NYYYYNYNYNYYYNYNNNNNYNYYYNNNNYYNYNY", "NNYNNNNNYNNNYNNYNNNNNNNYNYYNNNNNNNN", "NNNYNYNNYNYNNNYNNNNNYNNNNNYYNYNNYNY", "YYNNYYYNNNYYYNNYNNYNYYNNNYNNYNNNYYY", "NNYNNNNNYNNNYNNNNNNNNYNYNNNNNYNNNYN", "NNYNNNNNYNNYNNYYNNNNNNNYNYYNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 3873409;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> relations = {"NYNNYYYYYYNNYYNNYYYYNNNYNYYNYYYYYNYY", "NNNYYNNNNYNNNYNYNYYNYNNNYNYNNNNYNNYY", "NYNNYYNNNNYNYNNNYYNYYNYNNNNNNNYYNYYN", "NNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNYNNYNNNYYYYNYYNNNNNNNNYNNY", "NNNNNNNYNNNNNYNNYNNNYNNNNNNNNNNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNYNNNNNNYNYNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYYNYNNNNNNYYYNYYNNNNNNNNNYNN", "NNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNYYNNNNNNYYNYNYNNYYNNNNNNNNNNN", "NNNYNNYYNNNNNNNNYNNNNNNNYNNNNNNNYNNN", "NYYNNNNYNYNYYYNNYYNYNNYNYNYNYNYNNYNN", "NNNYNYYNYYNYNNNNYYNNYNNNYNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNYNNNYNNYNNNYNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYNNYNNNNNNNNYNNNNNNNNNNNYNYY", "NNNYNNYNYYNNNYNNNNNNNNNNYNNNNNNNYNYY", "YYNNYNYYYNNNNNNYNYYNYNYYYYYNYNYNNYYN", "NNNYNYNNYYNYYNNYYNYNNNNYYNNNNNNNNYNN", "NNNNNNNNNNNYNNNNYNYNNNNNYNNNNNNNNNYN", "NNNNNNYYYNNNNNNNYNNNNNNNNNNNNNNNNNYY", "NYYYYNYNYNYYNNNNYYNNNNNYNNNNYNNNYYYY", "NNNYNNNNYNNNYYNYYYYNYNYNYNNNNNNNYYYY", "NNYYYNNNNNNYYNNNNYNNYNNNYYYNYNYYYNNN", "NYYYNYYNYNYNYNNYNNYYNNNYYNYNNYNYNYYN", "NNNYNNYNNNNYNYNNYNNNYNNNNNYNNNNNNYNN", "NYNYNNNYYYYYYYNNNYNYYNNNNNNNNYNNNYYN", "NNNYYNYNNYNNYYNNYNNNYNNNYNNNNNNNYNNN", "NNNNNNNNNYNNNNNNYNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNYNNNYNNNNNNYNNNNNNNYNYY", "NNNYNNYNYNNNNNNNYNNNNNNNNNNNNNNNNNNY", "NNNYNNNNYYNNNNNNNNYNNNNNNNNNNNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 6096087;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> relations = {"NYNYNYYNYNNNNNYYNYNNNNYYNNNNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYYYNNNNNNNNNNNNNN", "YNNYYYNNYNNNNNNNYNNNNYYNNNNYNNNNYNNYN", "NYNNNNNNNYNNNNNNNNNNYYNYNNNNNNNNNNNNN", "NNNNNYNNYYNYNNYNYYNNNYNYNNNNNYYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNYNNNNNYYYYNNNYNNNNYYNNYYYYNYN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNYYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNYNYYNYYYNNNYYYNNNNNYYNYYNYYY", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNYNYNNNYNNNNNYNYNNNNNYNNNNNYN", "YNNNNNYYYNNNNNNYNYYNYNYYNNYYYNYNYYNNN", "NYNNNYYNNYNNNNNYNNNNNYYYNNNYYYYNNNNNN", "NNNYNYYNNYNNNNNNYYNNYNYYNNNYYNYNNNNYN", "NNNNNYYNNNNNNNNNNNNNYNYNNNNYNYNNNNNNN", "NYNNNNYNNYNYNNNNYNNNNYNYNNNNYNNNNNNNN", "NNNYNNYYYNNNYNYYYNNNNNNYNNNNNNNNNNNYN", "NYNYYNNYYYYYNNNYYYYNNYNYNYYNYNNNYNNYY", "NNNNNYYNYYNYNNNNNNNNNYNNNNNYNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNNYNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYYNYYYYYNNYNYYNNYYYYNNYNYNNNYYYNY", "NNNYYNNNYYNYYNYNNNYNNNNYNNNNNYNYNYYNN", "NYNNNYNNNNNYNNNNNYNNYNYYNNNYYNNYNNNYN", "NNNNNYYNYNNNNNNNNNNNNYNYNNNNNYNNNNNNN", "NYNYNYNNNNNNNNNNYNNNNYNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNYNYYNNNNYNNNNYYNNYYNYNNNYNYNNNNNYN", "NYNYNYNNYYNNNNYNYNNNYNYNNNNNNYYNNNNYN", "YNNYYYNNNNNNYNYNYYNNNNYYNNNYNNNYNNNYN", "NNNYYYNNYYNYYNNYNYNNNNNNNNYNNYNNNNNYN", "NNNNNNYYYYNYYNYYYNYNNNYNNNYYYNYYYYNYN", "NNNYNYYNYYNNNNNNNNNNYNYYNNNYNYNNNNNNN", "NYNNNYYYNYNYYYNYNNNNNNNNNNNNYNYNYYYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 2990954;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> relations = {"NNYNNYNYYNNYYYNNNNNNNNYNNNYNNYNYNYNNYN", "NNNNNYYNNYNNYNNYNNNNYNYYNNYNNYNYYNNNYN", "NNNNNNNNNYNYYNNYNNYNNYNNNNYNNYNYNYNYNN", "YNYNNNNNYNNYYYYNYNNNNYNNNNNNNNNYYYNYNN", "YNNNNYYNYYNNNYNYNNYYYNNYNNYNNYNNYYNYNN", "NNNNNNNNNYNYYNNNNNNNNNNNNNNNNYNYNNNYNN", "NNNNNNNNNYNNNNNYYNNYNNNNNNNNNYNYNYNYNN", "NNNNNNYNYNNNNNNNYNYYNYYNNNNNNYNYNYNNNN", "NNYNNNYNNNNYYYNNYNNNNNYNNNYNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNYYNNNYYYNYYYYYYNNNNYNNNNYYNYNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNNYNNNNNNNNYNNYYNNNNNNYNNNNNYNN", "YNYNNYYYYYNYYNNNNNNYYYNNNNYNNNNYNYNYNN", "NNNNNNNNNYNYYNNNYNNNNNNNNNYNNNNYNNNYNN", "NNNNNNNNNYNYNNNNNNYNNNNNNNNNNYNYNNNYNN", "YYNNNNNYNNNYYNNNNNYNNYYNNNNYNYNYNNNYNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNYNYNN", "NNYNNNNNNYNYNNNNYNNNNNNNNNYNNNNYNNNYNN", "NNYNNNNNNNNNYNNYYNNYNYNNNNNNNNNNNNNYNN", "NNNNNNNNNYNYNNNNNNYNNNNNNNYNNNNNNNNYNN", "NNNNNYNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNN", "NNYYNNYYYYNYNNNNNNYNYYYNNNYNNNNYNNNNNN", "YYNNNYYYNYYNYNYYYYNNYYYYNYNNNYNYYNNYNN", "YNNYYNNYYYYYNNNNNNNNNYYYNNYYNYNYYYNNNN", "NNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNYNNYYNNNNNYNYNNNNNNNNNNNYNNNN", "YNYYYNYYNYYYYNNYYNYYNNNNNNNNNNNNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NYYNYYNNYYYYYNYNNYYNNYNNYNYNNYNYNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNYNNYNYNNNYNNNNYYYNNNNYNYNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NNYYYNNYYYYYYNNYYNNYNNNNNYNYYNNNYYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNYYYNNYNYYNYNNNNYNNNNNNNNNNN", "NNNYNNNYYNNNNYNNYYYYYNYNYYYNYYNYYNNNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1154936;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> relations = {"NNYYNYNNNNNYNNYNYNYNNNNYNNYNNNNNYNYNNNY", "NNNNNNNNNNNYNNNNNNNNNNNYNNYNNNNNYNYNNNY", "NNNYNNNNNNNYYYNNYNNNNNNNNNNNNYNNNYYNNNY", "NYNNNNNNNNNYYNNNNNNNNYNYNNYNNYNNNYYNNNY", "NYNYNNNNYYYNNNNNNNYNNYNNNYYNNNNNNYNYNNN", "NYYNNNNNNNYYNYNNYNNNNYNNNYNNNYNNNNNYNNY", "NNYYNNNNYNNYNYYNNNYNNNNNYNYNNNNNNYYYNNN", "YYNNNYNNYYYNYNNNNNNNNYYNNYNNNYNNNNNYNNN", "NNYNNNNNNNYYYNYNYNNNNYNNNNNNNYNNNNNYNNY", "NNNYNNYNNNNNYNYNNNNNNNNNNNNNNYNNYYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNYYYNNNNNNNNNNNNNYNNYNNYNNNNNN", "NNNYNNNNNNYYYYNNYNYNNYNYNNYNNNNNYNNYNNY", "YNYNYNNNNNYYYYYNNNNYNNNNNYYNNYNNYNYYYNY", "NNNNNNNNNNYNYYNNNNYNNNNNNNNNNYNNYYNNNNY", "NNYNNNYYNYNYNYYYYNNYYYYYYYYYNYNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYYNNNY", "NNNNYNNNYNNNYNYNNNNNNNNNNNNNNNNNYYNYNNY", "YNNYYNYNNYNNNYYNYNYNNYYYYNNNNYNYYYNYNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNNNYNNNNYNNNN", "NNYYNNNNYYNYNYNNNNYNNYNYNYYNNNNNYNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNYNNYNYYNNN", "NYNYNNNNNNNNYNNNNNNNNYNYNNYNNNNNYYNYNNY", "NYNNNNNNNNYNNNYNNNYNNYNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYYYYNNNYYNNNYYYNYNYNNYNYYYYNYNN", "YYYYYNYYYYNNNYYYYYYNNYNNYNYNNNNYYYNYYYN", "NNNNNNNNNNYYYNNNNNNNNNNNNNNNNNNNNNYNNNN", "NYYYNYNYYYNYYYYYYNNNYYNNNYNNNYNYNNNYYNY", "YYYYNNYYNYNYYNYYYNYNNYNNYNYNNNNNNNYYYNN", "NNNNNNNNNNYNYNNNNNNNNNNNNNYNNNNNNNNYNNY", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNYNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNYYNNNNYYNNYNYYNNNYNNYNNYNNY", "NYNYNYYYNYNYNNNNNNNYNYNNYNYYNYNYNNYNYNY", "NNNNNNNNNNYNYNNNNNNNNNNNNNYNNNNNNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 3377902;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> relations = {"NNNNYNNYNYNYYNYNNNNNNYYNNYNNNNNNNNNNYNNN", "NNNNNNYNNNNNNYNYNNYNNNNYNYNYNNNNNNNNYNNN", "NYNYYNYYYNNNNYYYNNYNNNYYNNYNNNYNNNNNNNNN", "YNNNNNYNNYNNYNYNNNYNNNYYNYYNNNYNNNNNNNNN", "NNNNNNNNYYNNYYNNNNYNNNNYNYNNNNNNNNNNYNNN", "NNYNYNYNNYNYNYNNNNNNNYNNYNYYNNNNNNNNYNNY", "NNNNNNNNNNNNYYNNNNYNNNNNNYNNNNNNNNNNYNNN", "NNNNNNYNYNNNNNNYNNYNNYNNYNYNNNYNNYNNYNNN", "NNNNNNYNNYNNNYNNNNYNNNNNNYNNNNNNNYNNYNNN", "NNNNNNYNNNNNNYNNNNYNNNNNNNNNNNNNNYNNNNNN", "YYNNNNYYNNNNNYNYYNYNNYYYNYNYNNYYYYYYNNNY", "NYNNNNNYYNNNYNNYNNYNNNNNNYYYNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNYYNNYYYNYNNYNNNNYNNYYNYYNYNYNYNNY", "NNNYNNYNYYNYYNNNNNYNNNNNYNNNNNYNNNNNYNNY", "NNNNNNNNNNNNYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYNNNNYNYYYNYYYYNNNYNYYNYYNNNYNYNYYNN", "YNNNNYYYYNNYNYYNNNYNNYNNYYYYNYYYNYNYNYNY", "NNNNYNNNYNNNYNNYNNNNNNNYYYNYNNNNNNNNYNNN", "NNNNYNYNYYNNYYYNNNNNNYNNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNYNYNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNYNNNNNNNNNNNYNNNNNNYNYNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNYNNNNNNNYYNNYNNNNNN", "NNNNNNNNNNNNYYNYNNYNNNNNNNNNNNNNNYNNYNNN", "NNYNNNNYYYNYNYYYNNNNNYNYNYYNNNYYYYYNNYNN", "NYNNYNYNNNNNNNYNNNNNNNNNNYNNNNNNNYNNYNNN", "NNNNNNNNYNNNNYYYNNNNNYNNYNNYNNNNNNNNYNNN", "NYYNYNNNNNNYNNYNNNYNNYYYNNNNNYNNNYNNYNNN", "YYNYYNNNYNNNYNNNNYNNNNYYNNYNNYNNNNNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNN", "YYYYYNNYNNNYNNYYNYYNNYNYNNNYNNYNNNNNYNNY", "YNNYNYYNYYNYYNNYNYNNNYNYNYYNNYNYYNNNYYNY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNYYNNNNYNNYYNNNYNNYNNNNNNNYYYNNNNY", "YYYYNYNNNNYYNNNNYYNYNNYYYNNYNYNNNYNYYYNN", "NNNNNNNNNYNNYNNYNNYNNYYNYYNYNYNNNNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 7492092;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> relations = {"NNYNNNYNNNNYNNNYYYNYNNYNYNYYNNNYNNNYNNYNN", "YNYYYYYYNNNNNNYYYNNNNYNNNNNYNYNNNYNNNNNNN", "NNNNNNNNNYNNYNNNNNNNYYNNYNNNNNYYNYYYNYNNN", "NNNNNNNNNYNYYNNNYYNNNNNYNNYNNYNNNYNNNYNNN", "YNNYNNNNNNNYYNYNNYNYYYNYNNYNNNNYNYNYNYNNY", "YNYYNNNNNNNYNNNNYYNYNNYNYNNNNYYYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNN", "NNYNNNYNNYNNYNNYNNNNNNNNYNNNNNNNNYYYNNNNN", "YNNNYYYYNYNNYNNNNNNNYYYNNNNYNYYNYNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNYNNYNNN", "NYNYYNYYNNNYYYNNYYNNNYNNYNYNNYYYNYYYYYYNN", "NNNNNNNYNNNNYNNYNYNNNYNNYNNYNYNYNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNN", "NYNYYNYYNNNYYNNNYYNYYYNYYNNNNNYYNYNYNNNNY", "NNYNNNNYNNNNYNNYYYNYNYNYNNYYNYNYNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNYNNNNYNNNNYYNNNNN", "NNNNNNYYNYNYNNNYNNNNYNNNNNNYNNNYNYYYNNNNN", "NNYNNNNYNYNNYNNNNNNNYYNNNNNNNNNYNYNNNNNNN", "NYYYNYYYYYNNYNNNYYNYNNNNNNYYNNYNYYNNNYNNY", "NNNNNNNNNYNNNNNYNYNNYNNNYNNNNNYNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNYNNYYYNNNNYNNNNNNNNYNYYNN", "NNYNNNYNNYNNYNNYYNNNYNNNYNNNNYYNNNYNNYNNN", "NNNNNNNNNNNNYNNNNNNNYYNNNNNNNNNYNNNYNNNNN", "YYNYNNNYNYNNNYYYNNYYNNNNNNYYNNNNNNYNNNNNY", "NNNNNNNNNNNYYNNNNYNNNYNNYNNNNYYYNNYNNNNNN", "NNNNNNNYNNNNYNNNNYNNYNNNNNNNNNYYNYYYNNNNN", "NNYNNYYNYYNNNNYYNNNYNYNYYNYYNYNYYYNYNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNN", "NNNNNNYNNNNNNNNYNNNNYYNNYNNNNNNNNYNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNNNYNNNNNYNYNNNNNYYNNNNYNNNYNYNNYNN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNYNNYYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNN", "NYNYYYNNNNNYNNYNYNYYNNNYNNNYNNNYYYNYNYYNY", "NNNNNNNNNNNNYNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNYYNNNNNNYNYNNYNNYNYYNNYNYNNNNN", "NYYNNYYNNYYNYNYNNNNYYNYYNNYNNNNYNYYNYYNNN", "NNNNNNYNNYNNNNYNYYNYNNNYNNYNNYYNNYNYNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 18893358;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> relations = {"NYYYYNNYNNNNNNYYYYYYYYYNNNNYYNYYNYYYNYNYYY", "NNYNNNNNNNNNNNYNNYNNYNNYNYNYNNNNNNNYYYNYYN", "NNNNNNNNNNNYNNYYNNNNNNNNYYYNNNNNNYNYNYNYNN", "NNNNNNNNNYNNNNNNNNNNYNNNNNYYYNNNNNNYNYNYYN", "NNNYNNNNNYYNYYYYYYNNNYNNYNNYYNYYNYNYNNNYYY", "NNNNNNNYNYNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNYN", "NYYYNYNYNYNNNNYYNYYNYNYNYYNYNNNNNNNNNNNYYN", "NNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYYYNNYNNNNYNNYYNYNYNNYYYNYYNNNNNNNNNYYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNYNNNYNNNYNNNYNNNNNYNYYYYYYNNNNNNYNYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNYNNNNYNNYNYNNNYYYYNNYYYNNNNNYNNNYNNYN", "NNYYNYNYNYNNNNNYNNYYNNYNNYNNNNNNNNNYNYYYNN", "NNNNNYNYNYNNNNNNNNNNNNNNNNYYNNNNNNNNNYNNYN", "NNNNNNNYNNNYNNNNNNNNNNNNNNYYNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNYN", "NNNNNYNNNYNYNNYNNNNNYNNYYYNNNNNNNYNNYNNYYN", "NYNNNYNNNYNYNNNNNNNNYNYYYYYNYNNNNNNNYNNNNN", "NYNYNYYYNYNYNNYYNYYNNYYYNNYYYNNNNYNYNYNNYN", "NNNNNYNYNYNYNNYYYNNNNNNNYNYYNNNNNYNNNNNNYN", "NNYNNYNNNYNYNNNYNNNNNNNYNNNYYNNNNYNNYYNYNN", "NNYYNNNNNNNNNNYNYYNNNNNYYNYYYNNNNNNYNYNYYN", "NNNNNYNNNNNYNNYYNNNNNNNNYNYNNNNNNNNNNNNNYN", "NNNNNNNNNNNYNNNYNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNYNYNNNNNNYNNNNNNNNNNNNNYNYNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNNNYNNNNNNNNYNNYYNYYNNNNNNNYNNNNYN", "YYNNYYYNYYNNYNNNNNYYNYNYNYNNNNNYNYYNYYNYYY", "NYNNNYYYNYYNYYYYYYNYYNNYYNYNYNNYYYNNNYNYNY", "NNNYNNYNYNNNYYNYYNNYYYNNYYNYYNNNYYNYYNYYNY", "NYNYNYNYNYNYYYYYYNYYNNYNYYYNNNNNNNNNNNYYNN", "NNNNNNNNNYNYNNYYYNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNYYNYNYYNYYYNYYNYYYNNNNYNYYNNYYYNNY", "NNNNNYNNNYNNNNNNNNNNYNNYYNYNNNNNNNNNNNNNYN", "NNNNNYNNNNNYNNYNNNNNYNNYNYNNYNNNNNNNNNNYYN", "NNNNNYNNNNNYNNNYNNNNNNNNNNYNNNNNNNNNNNNNYN", "NNNNNYNYNYNNNNNYNNNNNYYNNYNYNNNNNYNNYYNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNYNYNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYNYNNNYNNNYYNNNNYNNYNNNNNYNNNNNNNYYNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 54475266;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> relations = {"NNNNNNNNYNNNNNYNYYYNYYNYNYNNYNNNNYNYNNNNNNN", "NNNYNNNYNYYNNYYNNYYNNYNNNNNYNNNNNYNNNNNNNNN", "NYNNNYNYYYYYYYNNYYNNYYNYNNNYNYYNYNNYNNYNNNY", "NNNNNYNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNNYNNYYYYNNNNYNYNNYNYNNNNYYNYNNNNNYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYNNNYNYNYNNNYYNNNNNNNYNNYNYNYYNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNYNNNYYNNNNNYYNNYYNNNNNNYNNNYNNNNNNNNNN", "NNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNYNYNNYNNYNNNYNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNYNYYNYYNNYNNNYNNYNNNNNNNNNYNYNYNNNNNNN", "NNNYNYNYNNNNNNYNNYYNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNYNYNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNN", "NYYNYYYNNNYNYYNNYYNYNNYNNYYYYNNNNYYNNNNYYNY", "NYNNNNNYNNYNNNNNNNYNYYNNNNNYNNNNYNNNNNNNNNN", "NNNYNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYYYYYNNYYNNYNNYYNNNNNYNNNNNNNNNNYYNYN", "NYNNNYNYNNNYNNNNNNYNNNNNNNNYYNNNNYNNNNNNNNN", "NNNYNNNNNYNYNYNNNYNNNNNNNNNNYNNNNNNNNNNNNNN", "NYYNNYYYYYYYYNYNYYNNNYNYNNNNYNNNNYYYNNYYNYY", "NNNYNYNYYYNYNNYNNYYNNNNNNYNNNNYYNYNYNNNNNNN", "YYYYYNNYNYYYYYNNNYNNYYYYNNNYNYYYNYYNNNNYNYN", "NYNYNNNNYNNYNNNNYNYNYNNNNNNNNNNNNYNNNNNNNNN", "NNNNYNYYYNYNNNNNYYYYNYNYNNNNYYNNNYNYNNNNYYY", "NNNNNNNNNYNYNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNYNNNYNYNYYYNNYNYNNNNNNNNNNNNNNYYNNN", "NYNYNNNNNYYYNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNN", "NNNYNNNYYYNNNYYNNYNNNYNNNYNNYNNNNYNNNNNNNNN", "NNNYNYNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNYNYYYYYYYNNNYNNYNNNNNNNNNYYNYNYNNYYNNY", "NYNNNYNNYYYNNYYNNNNNYNNNNNNYNNNNNYNNNNNNNNN", "YYYNNYYNYYYYYNYNNYNYNYYYYYNYYNNNNYNNNNYNNNN", "YYYYNNNYYNNNNYNNYNNNYNYNNNNYNNYNYYNYNNNYYNY", "NYNYNNNNNYYYYYYNYYYNYYNNNYNNNNNNNNNNNNNNNNY", "NYNNNYNNYNNYYYYNNYNNNYNYNYNNNNNYYNNNNNNNNNN", "NYYYNNNYYNYYNYNNYNNYYYYNNYNNYNYYYNNNNNYNNYN", "YNNNNNNYNNYYNYYNYYYNYYNNNYNNYNYYYNNNNNNNNNN", "YNNYNYNNNYNYYNYNNYNNYYNYNYNYNNNYYYNYNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 42521132;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> relations = {"NYNYYYNNNYNNYYYNYYNNYYNYYNNNNNYNNNNNNNNYNNYN", "NNNYYYYNNYNYNNYNYNNNYYNNYYNNNNYNNNNNNNNYNNYY", "NNNYNNYYNYNYNYYNYNNNYNNYNNYNYNYNNYNNYNYYNNNY", "NNNNYYYNNNNNNNYNNYNNNYNNYYYNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNYNNYNNYNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNYNYYNNNN", "NNNYNYNNNNNYYYYNNYNNYNNNNNYNNNNNNNNNYNYYNNNY", "NYYNNNNYNNNYNNNNYYYNNNNYYYNNYNNYNYNNNYYNYNNY", "NNNNNYYNNNNNNYYNNYNNYNNNYYYNYNNNNNNNNNNNNNYN", "NNNYNNNNNNNNYYYNYYNNNNNYNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNYNNNNNNNYNYNNNNNNNNNNNYYNNNN", "NNNNYYNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNYNNNYN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NYYNYYNNNYNYYNNNNYYNNYNNNNYNNNNNNYYYYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNYNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNYNYNNYNYNNNYYNNNNNYNYYNNNYNNYNNYNNYNNYY", "YYYNNNYNYNYYYNNNNYNNNNNYNNYYNYNYNYYNYYYYNNYY", "NNNNYYYNNNNYNYYNNYNNNNNNNYYNNNNNNNNNYNYYNNNY", "NNNNYNNNNNNYNNNNYYNNNNNNNYNNNNNNNNNNNNYYNNNN", "NNYNNYNYYNNNNYNYNNYYYNNNYNNYYYNYYNNNNYYYNNNY", "NNNNYYYYNNNYYNNNNYNNYYNNYYYNNNNNNNNNYNNNNNYY", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNYNNNNYYNNNNNNYNNNNNNNNNNNYNYYNNNY", "NNNNYYNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNYNYNNYYYYNNYNYNYNNYNNYYNNNYYYYYNYNYYYYNYN", "NNNNYNYNNNNNNYYNNNNNNYNNNYNNNNNNNNNNYNNYNNNN", "NYNYYYYNNNNYYYNYNYYNNNNYYNNNNNNYYNYNYYYYYNNN", "NNNYNNYNNNNNYYNNYNNNYYNNYNNNNNNNNYNNNNYNNNNY", "NNNYYYNYNNNNYYYNYNNNNYNYYNYNNNYNNYYNYNNYNNNN", "NYYNYNNNYYNYNNNNYNNNYYNNNNYNYNYNNNNNNNYNYNNN", "NNNYYNNNNYNNNYYNNNNNNNNYNYNNNNNNNNNNNNYNNNNY", "NNNNYNYYNNYNNNYNYNNNYNNYNNYNNNNNNNNNYNNYNNNY", "YYNYNNYYNNYNYYYNYNYNYNNYYYNNNNYNNNYNNYYYNNYN", "NNNNYNNNNNNNNNYNYYNNNNNNNNNNNNNNNNNNNNYNNNYN", "NYYYNYYYNNYYYNNNYYNNNYNYYNYNYNNNNNNNYNYNNNNY", "NNNNYNNNNNNYNNYNYYNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYYNYNNNNNYYNYYNNYNNYYNYNNNNNNNNYNNNNNNNY", "NNNNNNNNNYYYYNYNYYYNYYNYNNYYNYNYNYYNYNYNNNYN", "NNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 18187958;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> relations = {"NNNNNNNNNNNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNN", "YYNNNYYYNNYNNNNNNYNYNYNYNNNYNNNNNNNNYYNNNYYNN", "YNYYNYNNYNNYNYNNNNYNYYNNNNYNNNYNNNYYYNNYNYNYN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNYYYNYYYNYNYNYNNYNNNNNNNNYNNNNNNYYYYNNYNY", "NNNNNNNYNNNYNNNYNYYNNNNNNNNYNNYNNYNNNNNNNNYNY", "YYNNNNNNNYNNNNNYNNYNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNYYNNNYYNYNYNNYNNYNYNNNYYNYNYYYNNYNNNYYYN", "NNYNNYYNNYNNNNNNNYNNYNNNNNYYNYNNNYYNNNNYNYNNN", "YNNYNNYNYNYNNYNNNYNYNNNNNNNYNNYNNNNNNNYNNYNNY", "YNYNNYNNNNNYNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNYNN", "YYNNNYNNNYNNNYNNNNYNYNNNNNYNNNNNNYYNNNNYNYYYN", "NYYNNNYYNNNYNNNYNNNNNNNNNNNNNYNNNYNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNYNNYNYYNYYNYNNNNYYYNYYNNNNNNNYNYY", "YNNNNNNYNNNNNNNYNNNNNNNNNNYNNYNNNYNNNNNYNNYYN", "YNNNNNNNYYNNNYNNNYNNYNNYNNNNNYNNNNNNYNNYNNYNN", "NYYYNYYNNNYYNYYYNYNYYNNYNNNYNNNNYNYNYNYYNYNYY", "NYYNNYYYNNYYNYNNYNNNYNNNNNNYNYYNNNNNNNYYNYYNN", "NNNNNNNYNNNYNYNNYYYNNNNNNNNNNYYNNNNNYNYYNNYNY", "YYNNNYNYYNYYNNNYNYNNYNNYYNYYNYNNYNYNYYYNNNYNN", "NNYNNYYNNNNNNNNYNYNNNNNNNNNYNYYNNYNNNNNYNNNNY", "NNNNNNYYNNNYNNNYNYNNNNNNNNNNNNYNNYNNNNNNNNYNN", "YNYNNYYYYYYNNYNYYNNNYYNNNNNYNNYNNNYNNNYYNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNYYNYNYNYYNNYYNYNNNYNNYYYNYNNNNYNYNYNYYYNYN", "YYYNNYYYNYYYNNNNNYYNYNNNNNNYNYNNNYYNNNNYNNYNN", "YYYNNYNYNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYYNNYNNNNNNNYYNYNNNNNYNNNYNNNNNNNNNNNNYY", "NYYYNYNYNYNYNYYNYYYNYNNNYYYNYYYNNNNNNNNYNYNYY", "NYNNNNNNNNNYNYNNNNNNYNNNNNYYNYNNNNNNNNNYNYYNN", "NYYNNYNYNNYNNYNNYNYNYNNNNNYYNNYNNYYNNNNNNYNYY", "NYNNNYYYNNYNNYNYNYNNYNNNNNYYNYNNNYNNNNNYNYNYN", "YNYNNYNYNNNYNNNNNYYNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNYNNYYYYNNYNYNNYYNNNNNNYNNNNNNNNYYYYYNYNNYNN", "YYYNNYNNNYNYNNNNNNYNNNNNNNYNNNYNNNNNNNNYNNYNN", "YNNNNYNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNY", "YNNNNNYNNYNYNNNYNNNNNNNNNNYYNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNYNNNNNNNNNNYYNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 61826296;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNYNNNNNNYNNNYYYNNYNNNNNNNYNNNNNNNNNNYN", "NNNNNNYNNNNNNNYNNNNNNNNYNNNNNNYNNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNYYNNNNNYNYYNNYNNYNNNNYNNNYNNNNNY", "NYYYNNYNYYNYNNNNYNNYNYNNNYYYNNNNNNYNNNNYYYNNYN", "NNNNYNNYNYNYNYYYYNNYNYNYNYYNYNYNNYYYNNYYYYNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNYNNNNNNNNNNNNNYNNYNNNYNNYNNNNYNNNNYYNNYN", "YNYNNNYYNYNNNNYNNNNNYNNNNYYYNNYNNNNNNNYYYYNNNY", "YNNNNNNNNNNNNNYNNNNYNNNNYYNYNNYYNYNNNNYNNNNNYN", "NNNNNYNYNNNNNYYNYNYYYNNNNNYYYYYYYNYYNYNYYYNNYN", "YYYYNNYNYNNNNNNNYNNYYNNNYYYNNNYYNNNNNNYYYNNNNN", "YNNYNYYNYNNYNNYYYNNNNYYYNYYNYNYYNYNNNNYNNYNNYY", "YYNYNNYNYNNYNNYYYNNYYNNNYNNNNYYYNNYYNNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNYNNNNNNNNNNNNNYNNNNNNYYYYYNNYNNNNNNNYYYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNNNNNNNNNYNNNN", "NYYNNYNNNYNNNYYYYNNNNNNYNYYNYNNNNNYYYYYNYNYYYN", "NNYNNYNNNYNNNYNNNNNYYNYNNYYNNNYYYYYNYNYNNYNNYN", "YNNNNNYNNNNNNNNNYNNNYNYNNNYNNNNNNNNNNNNNYYNNYN", "YNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNYNNNNN", "YNNNNNYYNNNNNNYNNNNNNNNYYYYNNNYNNNNYNNNNYYNNNN", "YNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNNYYNYNNYYNNYNNNNNNNNNNYNNYN", "NNYNNNYNNNNNNNNNNNNNYYNNNNNYNNYNNNNNNNNNYNNNYN", "NNNNNNNNNNNNNNYNNNNNYNNYNNNNNNYYNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNN", "YNNYNNYNYNNYNNNYYNNNYNYYNYNYNYYNNYYYNNNNNYNNYY", "YNYYNNNYYYNNNNYNYNNNYYNYYYNNNNNNNNYYNNYNNNNNNY", "NNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNN", "YYNYNYNYNNNNYYNYNNNNYYNNNNNYYYYYNYYNNNNYNYNNNY", "NNYNNNNYNNNNNNYNNNNYNNYYYNNNNNYYNNNNNNNYNNNNNN", "NNYNNNYNYYNNNNNNYNNNYNNYYNYYNNYNNYNNNNYYYNNNYY", "YNYNNNNNNNNNNNNNYNNNYNNNNNNYNNNYNNNNNNNNNYNNYN", "YYNYNNNYYNNNYNYNYNNNYNNNNYYYYNYYYNNNNYNNYYNYNN", "YYYYNYYNNNNYYNYYNNNYNNNYYYNYNYNNNNYNNNYYNNNYNN", "NNYNNNNNNNNNNNYNNNNNYNNYYYYNNNYNNNNYNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNYNYNYNYNNYYNNNYNNYNYNNNYN", "YNNNNNNNNNNNNNYNNNNNNNNYNNYYNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNYNNNNYYNYYYNNNYYYNYYNNYNYYNYNYYNNNNYNNNN", "YNYNNYNNYNNYNYYNNNNYNNYNYNNNYYYNNNNYNNYYNYNNYY", "NNYNNNNNNNNNNNNNNNNNYNNNNNYYNNYYNNNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNYNNYNYYYYYYNNNYYNNNNNNNYYNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 96467608;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> relations = {"NNNNNNNNNNNNNNYNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNYNYYYNNNYNNNNNYYYNNNNYYNYNNNNYYNNNYYNNYNNNNNY", "YNNNYYYNNNNNYNNNNNYYNNNYYNNNYNNNNNNYNYNYNNNYNNN", "NNYNYNYNYNYNYYNNNYNNNNNYYYYNNNNNYYNYNYNNYNNYNNN", "NNNNNNNNNNNNNNYNYNNNNNNNNYNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNYNNNNNNN", "YNNNNYYNYNNNNNNNYNNNNNNNNYNNNNNNNNNNNYNYNNNNNNY", "NNNNYYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYNYNYYNNNYYNNNNYNYNNYNYYYYNNYYYNNNNYYYYNYYNY", "YNNNYNNYYNNNYNNNYNNYNNNNNNNNNNNYNYNNYYNNYNNNNNY", "YNYYNNYYYNNNNNNYNNNYYNNNNNNNYNYNYNNNNYYNYNNYYNN", "NNNNNYNNNNNNNNYNYNNNNNNYNYNNNNNYYNNNNNNNNNNNNNN", "YNYNNYYYNNYNNNNNYYYNNNNYYYNNYNNNNYNNYNNYYNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YYYNNNYYNNYNYNYNYNNYNNNNYNNNNNNYNYNYYNYNYNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNYYNYNYNNNYNNNNNNYNYNNNNNNNNNYNYNYNNNNNNN", "NNNNYYYNYNNNYNYNNYNNNNNYNNNNNNNYYNNYNNNNYNNNNNN", "NNYNYYYYNNNNYYYNYYNNNNNNNNNYYNNNNNNYNNNNNNNNYNY", "NYYYYNYNYNNNNYNYNNNNNNNYNNNNYNNYYNNNNYNNYNNNYNY", "NYYNNNNNNNNNYYYYYNNYNYNNYYNYNNNYYNYNNYYNNNNYYYY", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNYYYNNNNYNNNYYNYNNNYNNNNNNNNNNNNNYNNNNNNNNY", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNYNYNNNNYNYNYNYNNNNNNNNNYNNYYYNNYYNYYNNNNNN", "YYYNNYYYYNNNYYNNNYYYNNNYYYNNYNNYYNNNYYYYNNNYNNY", "NNNNYNNYYNNNNNYNNYNYNNNNNNNNNNNYYYNNYYNYNNNYNNY", "YNYYYNYNYYYNNNNNNNYNYYYNYYYNYNNYYNYNYYYNNNYYYNY", "YNYNNNNYNYYNNNYYYYYNYNNNYNNYYNNNYYNYYNNNNYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNYNYNYNNNNNNNYYNNNNNNNNNYNNNYYNNYNNY", "NNYYYNYYYYNNNNYYYYNYNNNNNYYYYNYNNYNYNYNNNYNNNYY", "YNNNYNYNNNNNNNYNNNNNNNNYNYNNNNNYYNNNNNNYYNNNNNN", "YNNNYYYNYNNNYNNNNNNNNNNYNYNNNNNNYNNNNNNNNNNNNNY", "NNNNYYNNYNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNYNNNNNN", "NNYNNYYNNNNNYNNNYNYYNNNNYYYNNNNYNYNNYNNYNNNNNNN", "NNNNYYNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNYNNNYNYNNYNNNNNYNNNNNNNNYNNNNNNNNNNNNNN", "NNYNYYYNYNNNYNYNYYNNNNNYYYNYNNNYNNNNYNYNNNNYNNY", "YYYNYNYYNNNNYYYYNYYYNNNNYYNNYNNNYNNNYYYYYYNNYNN", "YNNNNYNNYNNNYNNNYNNYNNNYNNNNNNNNNNNYYNNYNNNNNNY", "YNYNNNNNYNNNYYYNYYNYNNNYNYNYYNNYYYNYYNYNYYNYNNY", "NYYYYNYNYNNNYNNYYNYYNNNYNYYYYNNYNNNNYNYYNNNYNNN", "NNNNYNNNYNNNNNYNYNNNNNNYNYNNNNNNNNNYNYNNYNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 58905736;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> relations = {"NNNNNNNNNYNNYYYNNYNNNNYNYYNYNNNYYYNNNNNNNYNYNNYY", "NNNYNNNNNYNNYNNNNNNYNNNNNNNNNNNYYNNNNNNNNYNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNYNNNNYNNNNNNNYNNNNYYYNNNNNNYNNNNNNNNNYNNYNYY", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNYNNYNYNYNNYYYNYYNNNNNYYNNYYYNYNNNYNYYYY", "NNYYYYNNYYNNYYNYNYNNNYYNNYYNYYYNNYNYYYNYYYNNNNNY", "NNNNNNNNNNNYYNNYNYNYNYNNNNNYYNYNNNNYNYYYNNNNYNNN", "YYNNNNNNNNNYYNNYNYYYNNYYNNNYYNNNYYYYYNNNNYNNNYNY", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNYNYN", "YYYYYNNYNYNYYNYYNYYNYYNYYYYNNYYNYYNNYNNYNNYNYNYY", "NNNNNNNNNYNNNNYNNNNNNYNNNYNNNNNYNNNNNNNNNNNYNNYN", "NNYYYNNNNNNNNNNNNNNNNYNYNYNNNNNNYNNNNNNNNNYYYNNY", "NNNYNNNNNYNNYNYNNYNYNNNYYNNYNNNNYNNNNNNNNNYNNNYY", "NNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNYN", "YNYYNNNNNNNYYNNNNYYNNYNNNNNYNNYYNYNYNYNNNNYNYNYY", "NNNNYNNNNNNNNNNNNNYYNNNNNYNYNNNNYYYYNYYNNYYYYNNN", "NNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNYYYNNY", "NNYNNNNNNYNYNNNNNNNYNYNNYNNYNNNYNNNNNNNNNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNNNNNNNYYYYNYYYNNNNYYNNYNYNNNYNYYYNNYYYNNYY", "NNNNYNNNNYNNNNYNNNNNNNNNYNNNNNNYNNNNNNNNNNYYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNYNNYNNNNNNNYNYNNNNNNYNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYN", "NNYNYNNNNYNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNYN", "YNNNNNNNNNNYNYYYYYYNYNNNNYNYYNYNYYYYNYNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNYNYNYYNNNNNNYYNNNNNNNNYNNNNNY", "NNNYYNNNNYNNYYNNNNNNNNYYNYNNNNNNYYNNNNNYNNNNNNYN", "NNYYNNNYYYNYYYYYYYNYNYYNYNYNYNYYYYNNNNNNNNNYNYYN", "YYNYYNNNNYNNYNNNNNYNNNNNNNNYNNNNNYNYNNNYNYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNYNYNNYNNYNYNNYNYNNNNNNYNNNNNNNNNYYNNNNN", "NNYNYNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNYYNNN", "NNNYYNNNNNNNNYNNNNNYNYNYNYNNNNYYNNNYNYNNNYNYNNYN", "NNYNYNNNNNNNYYYNNNYNNYNNYYNYYNNYYNNNNNNYNYYNYNYN", "YYNYYNNNNYNNYYNYNNNYNNYYYNNYYNYYNYYYNYNNNYYYNYYN", "YYYNYNNNNNNYNYYNNNYNNYYNNYNYYNYYNNNYNNNNNNYNNNNN", "YYNYYNNNNYNNYYYYNNNNNNYYYYNYYNYNYNNNNNNYNNNYYNNN", "NNNNNNNNNNNNYNYNNNNYNNNNNYNYNNNYNYNNNNNNNYNYYNNY", "YYYYNYNYNNNYYNYYNNYYYYYYYYYYNNNYYNNNNNNYNYYNYNYN", "NNNNNNNNNYNYNNNNNYNNNYYYNYNNNNNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNYNYNNNNNNYNNNNNNNNNNYYNNNN", "NYNYNNNNNYNNYNNYYNNYNYNNNNNYNNNYNYYNNNYYNYYNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNYNNNYNNNNNNNNNNNNNNNNNNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 190804322;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> relations = {"NNYNNYNNYYNNNYNYNYYNYNNNNNYNYNNYYNYNNNNYYNNNYYNNN", "YNNNYYNNYYNNNYNYNNYYNYNNYNNNNNYNNNNNNNNNYYNNNNYNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNYYYNYYNNNNYNNNNNNNNNNYNYNYYYNYNNNNNNNNNNNYNN", "NNNNNNNNYNNNNYYNNNNNYNNYNNNNYNNYYNYNNNNYYNNNYNYNN", "NNNNNNNNNYNNNYNNNNNNYNNYNNNNYNYNNNNNNNNNNNNNNNNYN", "NNNNNYNNYYYNNNYNNYNNYNNNNNYNYNYNNNYNNNNYYNNNNYYYN", "NNNNYNYNNNNNNYNYNNYNNNNYNYYNNNYNYNYNNNNYYNNNYYNNY", "NNNNNNNNNYNNNYNYNYYNNNNYNNYNYNYYNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNYNNNYYNNNYNYNNYNNYNNNYNYNNNNNNNNNNNNNNYN", "NYNNYYNNNYNNYNYYYNYNYNNYNYYNYNYYYNYNNNNYYNNNNNNYN", "YNNNNYNYNNNNNYNYNYNYNYYYYYYNNNNNNNNNNNNNNYNNNNYYN", "NNYNNNNNNYNNNNYNNNNNYNNYNNNNYNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNYNNYNNNNYNNNYNNNNNNNNNNNNNNNN", "NNNNYYYYNYNNNNNYNYNYNYNYYYNNYNYNNNYNNNNYYYNNYYNYN", "NNNNNYNNNYNNNNYNNNYNNNNNNNYNYNYNYNNNNNNYNNNNNNNYN", "NNYNNNNNNYNNNYYNNNNNYNNYNNYNYNNNNNNNNNNNNNNNNNNNN", "YNYYYNYNYNNNNNYNNNYNYNNYNNYNNNYYNNNNNNNNYNNNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYYYYNNYNNYYYNNNNYNNYNYNNNNNYYNYNNYNNNNNNNYNNY", "YNYYNNNNYYNNNNNNNYYYYNNYNYYNYNNYNNNNNNNNYYNNYYNNN", "NNYNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYYYYNNYNNNYNYNNYYNYYNYNYYYNNNNNNYYNNNYNYYY", "NNYNYYNNNNYNNYYYNNNNNNNYNNNNNNNYNNNNNNNYNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NYYYYNNNYNNYNNYNYNYNNYNNYYYNYNNYNNNNYNNNYNYNNNNYY", "NNNNNNNNNNNNNNNNNNNNYNNYNNYNNNYNNNNNNNNNNNNNNNNNN", "YYYYYNNYNNYYNNYNYNYYYYYYYYYYNNNYNNNNYYNNYYNNYNYNY", "NNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNYNNYNYNNYNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNYNYNYNNNYYNNNNYYNNYYYNYYYNYNNYYYYYNYYNNNYNYN", "NNYNNYNNNNYNNNYYNNNNNNNNNNYNNNYNYNNNNNNNNNNNYNYNN", "YYYNYNYYYYNNNNNNYYYNNNNYYYNNYNYYYNNNNYNYYNNNYNNYN", "YYNYNYNYNYNYNYYYYYYNNNYNNYNNYNNYYNYNNNNYYNNNYNNYN", "YNYNYNNNYYNNNYNNNYNNYNNYNYYNNNYYYNYNNNNNYNNNYNNNY", "NNYNYYNNYNNNNYYYNYNYNYYNNNYNNNYNNNNNNYNYYYNNYYYNY", "NNNNNNNNNYYNNNYNNNNNYNNYNNYNYNNYYNYNNNNNNNNNYYNNN", "NNYNNNNNNYNNNNNYNNNNYNNYNNYNYNNNNNYNNNNYNNNNNNYNN", "YNYYNYYNNNNNNNNYNYNNNNNYNNYNNNYYNNNNNNNYYNNNYNNNN", "YNNYNYYYNNYNNYYYYYYYYNNNYNYNYNNNYNYYNNYYYYNNNYYYN", "YNNNNNYYYNNNNYNYNYNYYYNYNYYYNNNYNYNNYYNNYNNNYYYYN", "NNYNNYNNNNYNNNYYNNNNYNNYNNYNNNYYNNNNNNNNNNNNNYNYN", "NNNNNYNNNYYNNNNYNNYNNNNYNNNNYNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNYYNNNNNNNNNYNNNNNYNYNNNYNNNNNNNNNNNNYNNY", "NNNNNNNNNNNNNYYYNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNYNNNNNNNNYNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 606357477;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> relations = {"NNNNNYYNNNYNNYNYYYNYYYNNYYNNNNYYNYNYYNYNYNNYYNNYNY", "NNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNYNNNNNYNNNNNNYNNNNNNNNNNNNNNNYNNYNNNNN", "NYNYNYNNNYYNYYNNYYNYYYNNYNNNNYYYNNNYYNNYYNNNYYNYYN", "NNNYNNNNYNYNYYYYNNYNNNNNNYNNNNNNNNNNNNNNYYNNNYNNYY", "NNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNYNNNNNNY", "YYYNNNNNNYNNYYYNNYNNYYYNYNYNNNNYYYYYNYYYYNNNYNNYNY", "NYNNNNYNNYYNNNNNNNNNNYNNNYNNNNNNNNNNYYNNNNYNYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNYYNYYNNNYY", "NYNNNNYNNYNNNYNYNNYNNNNNYYNNNNNNNNNYNYNNYYNYNNNNNN", "NNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NYNYNNNNNYNNYNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNNNYNNYNNNYNNNNYNNYNNNNYNNNNNNYNNNYYYYYNNNYY", "NNYNNNYNNYYNYYNNNNYNNYNNYNNNNNNNNNNNYNNNYNNYNNNNNY", "NYNYNNYNYNNNYYNNNNNNNNNNYYNNNNNNNNNYYYNNYNNNNNNNNN", "NYNNNNYNYNYNYYYYYNNNNNYNYYNNNNNNNNNNYNYYNNNYNNNNYN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NYNYNYNNYNNYYYYNYNNNYYNNYNNNYYYNNNNYYYYYYNNNNNNYNN", "NNYNNNNNYYNYNYNNNNNNNNNNYNNNNNNNNNNNYYNNNYYNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNYNNYYNYYYYNNNNNYYNNYYNNNNNNNNNNYYNNNYYYYYNNNN", "NNYYNNYNYNYYYNNNNYYYNNNNYNNNNNNNNYNYYYNYNNYNYNNNNY", "NNYNNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNNNNNNNNNNYNNNNNN", "NYNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNN", "YNYYYYNNNYNNYYNNYNNNYNNNNYNNNNYYYNNNNYYNYNYNYYNYYN", "YNYYYYNYNNNYYYNNYNYYNYYNYYYNNYNYNYYNYYNNYYYNYYNYNN", "NNYYNYYNNNNNNNNYYNNNYNYNYYNNNYNNNNNNYNNNNNYNNYNNNN", "NYYYNNNNYYYNNNNNNNYNNNNNNYNNNNNNNNNNYNNNNYNYYNNNYY", "NNNNNNYNNYYNYYNNNNNNYYYNYYNNNYNNNNNYYYNYYYYYNNNNNN", "NYYYNYYNYNNNYNYNYYNNNYYYNYNNYNYNNYYNNYNYYYNYYNNYYN", "YNYYYNNNNYNYNYYNNNNYNNYYNNNNNYYNNNYYYNNNNNYYNYNYNY", "NNYYNNNNNNNNYNYYNYYNYYYNYYNNYYNNNNNNNNNNYYYYYYNNNN", "NYNNNNNNYYYYNNNNYNNNNYNNNNNNNNNNNNNNNYNYNYYYYYNNNN", "NNYYNNYNYYYNYNNYNNYNNNNNYYNNNNNNNNNNNNNNNNNNYNNNNN", "NNYYNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNYNNYYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNY", "NNNYNYYNYYYYYNNNYNYNNYNNNYNNYYYNNNYYYYNNNYYYYYNNYN", "NNYYNYNNNNNNNYNNNNYNYYNNNYNNNYNNNNNNNYNNNNYNNNNNNN", "NNYYNNNNNNNNNYNNNNYNNYNNYNNNNNNNNNNNNYNNNYYYYNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNYNNNYNNNNYNNNNNYNNNNNNNNNNNYYNNNYNYYNNNNY", "NNYNNNNNNYNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNYNYNYNYYNNNNYNNNNNNNNYNNNNNYNYNNNYNNNNNNNY", "YNYNNNYYYYYYYYNYYNYYYNNNYNYNNNNYNYNYNYNYNNYYYNNYYN", "NNNNNYYNYYYYNNYYYYYNNNYNNYNNYYNNNNYNNYNNYYNNYNNNNN", "NNYYNNNNNNNNYNNNNNYNNYNNYNNNNNNNNNNNNYNNNNNYYNNNNY", "NNNNNNNNNNNNYYNNNNYNNYNNNYNNNNNNNNNNNNNNNYNNYNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 3572746384;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> relations = {"NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> relations = {"NNNN", "NNNN", "NNNN", "NNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> relations = {"NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> relations = {"NYYYNNYYNNNNNNYYNNNNNNNYNNNNNYYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNNNNNNNNYNNNN", "NYYNNNYYNNNNNNYYNNNNNNNYNNNNNYYNNNN", "YYYYNYYYYNYYNYYYYYYNYYYYYYYYYYYYYYY", "YYYYNNYYNNNNNNYYNNYNNNNYNYNNNYYNYNY", "NYNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNN", "NYYNNNYNNNNNNNYYNNNNNNNNNNNNNYYNNNN", "YYYYNYYYNNNNNNYYNNYNNNNYNYNNNYYNYNY", "YYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYNNYNNYYNNYNYNNYNYYNNYYNYNY", "YYYYNYYYYNNNNNYYNNYNNNNYNYNNNYYNYNY", "YYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYNYYNNYYNNYNYNNYYYYNNYYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNYNNNNNNNYNNNNNNNNNNNNNNNYNNNN", "YYYYNYYYYNYYNYYYNYYNYNNYYYYYYYYYYYY", "YYYYNYYYYNYYNYYYNNYNYNNYYYYYYYYNYNY", "YYYYNNYYNNNNNNYYNNNNNNNYNNNNNYYNNNN", "YYYYYYYYYNYYNYYYYYYNNYYYYYYYYYYYYYY", "YYYYNYYYYNNYNNYYNNYNNNNYNYNNNYYNYNY", "YYYYNYYYYNYYNYYYYYYNYNYYYYYYYYYYYYY", "YYYYNYYYYNYYNYYYYYYNYNNYYYYYYYYYYYY", "NYYNNNYYNNNNNNYYNNNNNNNNNNNNNYYNNNN", "YYYYNYYYYNYYNNYYNNYNYNNYNYYNNYYNYNY", "YYYYNNYYNNNNNNYYNNYNNNNYNNNNNYYNNNY", "YYYYNYYYYNNYNNYYNNYNYNNYNYNNNYYNYNY", "YYYYNYYYYNYYNYYYNNYNYNNYYYYNYYYNYYY", "YYYYNYYYYNYYNYYYNNYNYNNYYYYNNYYNYYY", "NYYNNNYNNNNNNNYYNNNNNNNNNNNNNNYNNNN", "NYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YYYYNYYYYNYYNYYYNYYNYNNYYYYYYYYNYYY", "YYYYNNYYNNNNNNYYNNYNNNNNNYNNNYYNNNY", "YYYYNYYYYNYYNNYYNNYNYNNYYYYNNYYNYNY", "YYYYNNYYNNNNNNYYNNYNNNNYNNNNNYYNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 16512389632;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> relations = {"NYYNNNNNNYYNNNYYNYNYNNYYNYYYYNNYYYNYNNYYN", "NNYNNNNNNYYNNNYNNNNYNNNNNYYYNNNYYNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "YYYNNNNYNYYNNNYYNYNYNYYYNYYYYNNYYYNYYNYYN", "YYYYNYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYY", "YYYYNNNYNYYNNNYYNYNYNYYYNYYYYYYYYYNYYNYYN", "YYYNYNNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYY", "YYYNNNNNNYYNNNYYNYNYNNYYNYYYYNNYYYNYNNYYN", "YYYYNYNYNYYYNYYYYYYYNYYYYYYYYYYYYYYYYNYYY", "NNYNNNNNNNYNNNYNNNNYNNNNNYNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNNYNYYNNNYYYYNYNYYYYYYYYYYYYYYYYNYYN", "YYYYNYNYYYYYNYNYYYYYNYYYYYYYYYYYYYYYYNYYY", "YYYYNYNYNYYYNNYYYYYYNYYYYYYYYYYYYYYYYNYYN", "NNYNNNNNNNYNNNNNNNNYNNNNNYNYNNNNNNNNNNYNN", "NYYNNNNNNYYNNNYNNNNYNNYNNYYYNNNYYYNNNNYYN", "YYYYNYNYNYYNNNYYNYNYNYYYNYYYYYYYYYNYYNYYN", "NYYNNNNNNYYNNNYYNNNYNNYYNYYYYNNYYYNYNNYYN", "YYYYNYNYNYYYNNYYYYNYNYYYYYYYYYYYYYYYYNYYN", "NNYNNNNNNNYNNNNNNNNNNNNNNYNYNNNNNNNNNNYNN", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYNN", "YYYNNNNYNYYNNNYYNYNYNNYYNYYYYNNYYYNYYNYYN", "NYYNNNNNNYYNNNYNNNNYNNNNNYNYNNNYYYNNNNYYN", "NYNNNNNNNYYNNNYYNNNYNNYNNYYYNNNYYYNNNNYYN", "YYYYNYNYNYYNNNYYYYNYNYYYNYYYYYYYYYYYYNYYN", "NNYNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNYNN", "NNYNNNNNNYYNNNYNNNNYNNNNNYNYNNNNYNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNNYYNNNYYNNNYNNYYNYNYNNNYYYNNNNYYN", "YYYYNNNYNYYNNNYYNYNYNYYYNYYYYNNYYYNYYNYYN", "YYYYNNNYNYYNNNYYNYNYNYYYNYYYYYNYYYNYYNYYN", "NNYNNNNNNYYNNNYNNNNYNNNNNYYYNNNNYNNNNNYNN", "NNYNNNNNNYYNNNYNNNNYNNNNNYNYNNNNNNNNNNYNN", "NYYNNNNNNYYNNNYNNNNYNNNNNYYYNNNYNNNNNNYYN", "YYYYNYNYNYYNNNYYYYNYNYYYNYYYYYYYYYNYYNYYN", "NYYNNNNNNYYNNNYYNNNYNNYYNYYYYNNYYYNNNNYYN", "YYYNNNNYNYYNNNYYNYNYNNYYNYYYYNNYYYNYNNYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYY", "NNYNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYYNNNNNNYYNNNYNNNNYNNNNNYYYNNNYYNNNNNYNN", "YYYYNYNYNYYYNYYYYYYYNYYYYYYYYYYYYYYYYNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1013371163128;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> relations = {"NYYNYYNNNYNYYYNYYYNNYYYYNNYYNYYYNNNYYN", "NNYNNYNNNNNYNNNYNYNNYYNYNNYYNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNYNNNYNNNNNYN", "YYYNNYNNYYNYYYNYYYNNYYYYNYYYNYYYNNNYYN", "NYYNNYNNNNNYNNNYNYNNYYNYNNYYNNYYNNNNYN", "NNYNNNNNNNNYNNNYNNNNNYNNNNYYNNYNNNNNYN", "YYYYYYNYYYNYYYYYYYYYYYYYYYYYNYYYNNNYYN", "YYYYYYNNYYNYYYYYYYNNYYYNNYYYNYYYNNNYYN", "YYYNYYNNNYNYYYNYYYNNYYYYNNYYNYYYNNNYYN", "NYYNYYNNNNNYNNNYYYNNYYNYNNYYNNYYNNNNYN", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYN", "NNYNNNNNNNNNNNNYNNNNNYNNNNYYNNYNNNNNYN", "NYYNYYNNNYNYNYNYYYNNYYYYNNYYNYYYNNNYYN", "NYYNYYNNNYNYNNNYYYNNYYYYNNYYNNYYNNNYYN", "NYYYYYNNYYNYYYNYYYNNYYYYNYYYNYYYNNNYYN", "NNYNNNNNNNNNNNNNNNNNNYNNNNYYNNYNNNNNYN", "NYYNYYNNNNNYNNNNNYNNYYNYNNYYNNYYNNNNYN", "NNYNNYNNNNNYNNNYNNNNYYNNNNYYNNYNNNNNYN", "YYYYYYNYYYNYYYYYYYNYYYYYYYYYNYNYNNNYYN", "YYYYYYNYYYNYYYYYYYNNYYYYYYYYNYYYNNNYYN", "NNYNNYNNNNNYNNNYNNNNNYNNNNYYNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYYNYYNNNYNYNNNYYYNNYYNYNNYYNNYYNNNYYN", "NNYNNYNNNNNYNNNYNYNNYYNNNNYYNNYNNNNNYN", "YYYYYYNYYYNYYYYYYYNNYYYYNYYYNYYYNNNYYN", "YYYNYYNNNYNYYYNYYYNNYYYYNNYYNYYYNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNYNNNYNNNNNYN", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYNNYYYN", "NYYNYYNNNYNYNYNYYYNNYYYYNNYYNNYYNNNYYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNYN", "NYYNNYNNNNNYNNNYNYNNYYNYNNYYNNYNNNNNYN", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNNYYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYNNNYYN", "NYYNYYNNNYNYNNNYYYNNYYNYNNYYNNYYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 98653175296;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> relations = {"NNYYNYYYYYYYYNYYYYYNYNYYYYYYYY", "YNYYNYYYYYYYYNYYYYYNYNYYYYYYYY", "NNNYNYYYYYNYYNYYYYYNYNYYYYYYYY", "NNNNNYYYNNYYYNYNNNYNNNYYNNNYYN", "YYYYNYYYYYYYNNYYYYYNYNYYYYYYYY", "NNNNNNNYNNYYNNNNNNYNNNYYNNNNNN", "NNNNNYNYNNYYNNYNNNYNNNYYNNNNYN", "NNNNNNNNNNYYNNNNNNYNNNYYNNNNNN", "NNNYNYYYNYYYYNYYYYYNYNYYYYYYYY", "NNNYNYYYNNYYYNYYNNYNNNYYNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNYNNNNNNNYNNNYYNNNNNN", "NNNNNYYYNNYYNNYNNNYNNNYYNNNYYN", "YYYYYYYYYYYYYNYYYYYYYNYYYYYYYY", "NNNNNYNYNNYYNNNNNNYNNNYYNNNNYN", "NNNYNYYYNNYYYNYNNNYNNNYYNNNYYY", "NNNYNYYYNYYYYNYYNYYNNNYYYNNYYY", "NNNYNYYYNYYYYNYYNNYNNNYYYNNYYY", "NNNNNNNNNNYNNNNNNNNNNNYYNNNNNN", "YYYYYYYYYYYYYNYYYYYNYNYYYYYYYY", "NNNYNYYYNYYNYNYYYYYNNNYYYNNYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNYYYNYYYYNYYNNYNNNYYNNNYYY", "NNNYNYYYNYYYYNYYYYYNYNYYYNYYYY", "NNNYNYYYNYYYYNYYYYYNYNYYNNNYYY", "NNNNNYYYNNYYNNYNNNYNNNYYNNNNYN", "NNNNNYNYNNYYNNNNNNYNNNYYNNNNNN", "NNNYNYYYNNYYYNYNNNYNNNYYNNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 520077184;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> relations = {"NYYYNNYYNNNNNNYNNYNNYYNYNNYYYN", "NNNNNNNYNNNNNNNNNYNNYYNYNNNYNN", "NYNNNNNYNNNNNNNNNYNNYYNYNNNYYN", "NYYNNNNYNNNNNNNNNNNNYYNYNNNYYN", "YYYYNYYYYYYYYNYYYYNYYYYYYYYYYY", "YYYYNNYYYYYYNNYNYYNNYYNYYYYYYN", "NYNYNNNYNNNNNNYNNYNNYYNYNNNYYN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNYNN", "YYYYNNYYNNNNNNYNNYNNYYNYNNYYYN", "YYYYNNYYYNYYNNYNYYNNYYNYYYYYYN", "YYYYNNYYYNNNNNYNNYNNYYNYNNYYYN", "YYYYNNYYYNYNNNYNNYNNYYNYYYYYYN", "YYYYNYYYYYYYNNYYYYNNYYNYYYYYYY", "YYYYYYYYYYYYYNYYNYNYYYYYYYYYYY", "NYYYNNNYNNNNNNNNNYNNYYNYNNNYYN", "YYYYNYYYYYYYNNYNYYNNYYNYYYYYYY", "YYYYNNYYYNYYNNYNNYNNYYNYYYYYYN", "NNNNNNNYNNNNNNNNNNNNYYNYNNNYNN", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYNYYYYYYYYNYYYYNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNYNN", "YYYYNYYYYYYYYNYYYYNNYYNYYYYYYY", "NNNNNNNYNNNNNNNNNNNNYNNNNNNYNN", "YYYYNNYYYNYNNNYNNYNNYYNYNYYYYN", "YYYYNNYYYNYNNNYNNYNNYYNYNNYYYN", "NYYYNNYYNNNNNNYNNYNNYYNYNNNYYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNYNNNNNNNNNYNNYYNYNNNYNN", "YYYYNYYYYYYYNNYNYYNNYYNYYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 425306112;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> relations = {"NYYYYYYYYYYNNYYYYNYYNYYYYY", "NNYYYYYYYNNNNYYNNNYYNNYNNY", "NNNNNNYNNNNNNNNNNNNYNNNNNN", "NNYNNNYNYNNNNNNNNNNYNNYNNY", "NNYYNNYYYNNNNYNNNNYYNNYNNY", "NNYYYNYYYNNNNYNNNNYYNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNYNYNNNNNNNNNNYNNYNNY", "NNYNNNYNNNNNNNNNNNNYNNYNNY", "NYYYYYYYYNNNNYYNNNYYNYYNNY", "NYYYYYYYYYNNNYYYYNYYNYYYYY", "YYYYYYYYYYYNNYYYYNYYNYYYYY", "YYYYYYYYYYYYNYYYYNYYYYYYYY", "NNYYNNYYYNNNNNNNNNYYNNYNNY", "NNYYYYYYYNNNNYNNNNYYNNYNNY", "NYYYYYYYYYNNNYYNNNYYNNYNNY", "NYYYYYYYYYNNNYYYNNYYNYYYYY", "YYYYYYYYYYYYYYYYYNYYYNYYYY", "NNYYNNYYYNNNNNNNNNNYNNYNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNYYYYNYYNYYYYY", "NYYYYYYYYNNNNYYNNNYYNNYNNY", "NNYNNNYNNNNNNNNNNNNYNNNNNY", "NYYYYYYYYYNNNYYYNNYYNYYNYY", "NYYYYYYYYYNNNYYYNNYYNYYNNY", "NNYNNNYNNNNNNNNNNNNYNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 29351936;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> relations = {"NYYYYYYYY", "NNNYNYNNN", "NYNYNYNNN", "NNNNNNNNN", "NYYYNYYYY", "NNNYNNNNN", "NYYYNYNYN", "NYYYNYNNN", "NYYYNYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> relations = {"NNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNYNYNNNN", "YNYNNYNNNNNNYYNYNNNYYNNNYYYNNNNYYNYNNNN", "YNNNNNNNNNNNYNNYNNNNYNNNNNNNNNNNYNYNNNN", "YYYNYYYNYNNYYYYYYYYYYYYNYYYYYYNYYYYYYYY", "YYYNNYNNYNNYYYNYNYNYYNNNYYYNNNNYYNYNNNN", "YNYNNNNNNNNNYNNYNNNNYNNNNYYNNNNYYNYNNNN", "YYYNYYNNYYNYYYYYYNYYYYYNYYYNYYNYYYYNNNY", "YYYYYYYNYYYYYYNYYYYYYYYNYYYYYYNYYYYYYYY", "YYYNNYNNNNNNYYNYNNNYYNNNYYYNNNNYYNYNNNN", "YYYNYYNNYNNYYYNYNYNYYNNNYYYNNNNYYNYNNNN", "YYYYYYYNYYNYYYYYYYYYYYYNYYYYYYNYYYYYYYY", "YYYNNYNNYNNNYYNYNYNYYNNNYYYNNNNYYNYNNNN", "YNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNYNYNNNN", "YNYNNYNNNNNNYNNYNNNYYNNNYYYNNNNYYNYNNNN", "YYYNYYNNYYNYYYNYNYNYYNNNYYYNNNNYYNYNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YYYNYYNNYYNYYYYYNYNYYNNNYYYNNNNYYYYNNNN", "YYYNNYNNYNNNYYNYNNNYYNNNYYYNNNNYYNYNNNN", "YYYNYYNNYYNYYYYYYYNYYNYNYYYNNNNYYYYNNNY", "YNYNNYNNNNNNYNNYNNNNYNNNNYYNNNNYYNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNYYNNYYNYYYYYYYYYYNYNYYYNNNNYYYYNNNY", "YYYNYYNNYYNYYYYYYYNYYNNNYYYNNNNYYYYNNNY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YNYNNYNNNNNNYNNYNNNYYNNNNYYNNNNYYNYNNNN", "YNYNNNNNNNNNYNNYNNNNYNNNNNYNNNNYYNYNNNN", "YNYNNNNNNNNNYNNYNNNNYNNNNNNNNNNYYNYNNNN", "YYYNYYYNYYNYYYYYYYYYYYYNYYYNYYNYYYYNNNY", "YYYNYYNNYYNYYYYYYYYYYYYNYNYNNYNYYYYNNNY", "YYYNYYNNYYNYYYYYYYYYYYYNYYYNNNNYYYYNNNY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYY", "YNYNNNNNNNNNYNNYNNNNYNNNNNNNNNNNYNYNNNN", "NNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNN", "YYYNYYNNYYNYYYYYNYNYYNNNYYYNNNNYYNYNNNN", "NNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNYNNNNNN", "YYYNYYYNYYNYYYYYYYYYYYYNYYYYYYNYYYYNNNY", "YYYNYYYNYYNYYYYYYYYYYYYNYYYYYYNYYYYYNNY", "YYYNYYYNYYNYYYYYYYYYYYYNYYYYYYNYYYYYYNY", "YYYNYYNNYYNYYYYYYYNYYNNNYYYNNNNYYYYNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 274854576128;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> relations = {"NYNYYNYYNYNYYYNYNNNYYYNNYYN", "NNNYYNYYNYNNYYNYNNNYYYNNYYN", "YYNYYYYYNYNYYYYYNNNYYYNNYYN", "NNNNNNNNNNNNNYNNNNNNNNNNYNN", "NNNYNNNYNNNNNYNYNNNNNYNNYNN", "YYNYYNYYNYNYYYNYNNNYYYNNYYN", "NNNYYNNYNNNNNYNYNNNNNYNNYNN", "NNNYNNNNNNNNNYNNNNNNNNNNYNN", "YYYYYYYYNYYYYYYYYYYYYYYNYYY", "NNNYYNYYNNNNYYNYNNNYYYNNYYN", "YYYYYYYYNYNYYYYYYNYYYYNNYYY", "NYNYYNYYNYNNYYNYNNNYYYNNYYN", "NNNYYNYYNNNNNYNYNNNNYYNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYYYYYNYNYYYNYNNNYYYNNYYN", "NNNYNNNYNNNNNYNNNNNNNYNNYNN", "YYYYYYYYNYNYYYYYNNNYYYNNYYN", "YYYYYYYYNYYYYYYYYNYYYYYNYYY", "YYYYYYYYNYNYYYYYYNNYYYNNYYY", "NNNYYNYYNNNNYYNYNNNNYYNNYYN", "NNNYYNYYNNNNNYNYNNNNNYNNYNN", "NNNYNNNYNNNNNYNNNNNNNNNNYNN", "YYYYYYYYNYNYYYYYYNYYYYNNYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYY", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYYNYYNNNNYYNYNNNNYYNNYNN", "YYYYYYYYNYNYYYYYYNNYYYNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 50331648;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> relations = {"NYY", "NNY", "NNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> relations = {"NNNNYNNNYNNNNNYNYNNNNYNNNNNNYNN", "NNNNNNNNYNNNNNNNNNYYNNYNYNNYYNY", "NYNNYNNYNNYNNYYYNNNNNNYNYYYNNNY", "YNNNYYYNNNNNNYYYYNYYNYNYYYNNYNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNYNNNNYNNNNNNNNYNY", "NYNNNNNNNNNNNNNNYNNNNYYNNYNNYYY", "YYNNYYYNNNNYNNNNNNYYNYNNNYNYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNYYNYYNNNYNYYNNNNNNYNYNNNNYNN", "YYNYNYYNYNNNNYNYYNNNNNYNYYNYYNN", "NYNNYYNNYNNNNNNNNNNYNNYNYNNNNYY", "NNNNNNNNNNNNNNYYNYYNYYNYYNNNYNY", "NNNNYNNNNNNYNNYNNNNNNNNNNYNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNYNYNNNNYNYYNNNYYNNNNYYNYNYY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNYNY", "NNYYYNYNYNNNNNNYNNYNYNYYYNYYNYY", "YNNNYNNNYNNNNNNNYNNNNYNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNYNYYYNNNNYNYNYYNYNYNNNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNYNYNNNNNNNNNYNN", "YYNNNYNNNNNNNNYNNNYNNYNNNNNYYNN", "YNNNNNNNYNNNNNNNYNNYNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNYYNNNYNNNNYYN", "NYNNNNNNYYNYNNYYYNNYNNNNNYNYYYN", "YNNNNYNNYNNNNNNNYNNYNYNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNYNNNNNNNNNNYNYYNYNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 201720;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> relations = {"NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNYN", "YNNNNNNNNNNNNYYNYNNNNNNNYYNYNNYN", "NNNYNNNYNYNNYNNYNNNNNNNYYYYYNNYY", "YYNNNNNNYYNNYYYNYNNNNNNNNNYYNNNY", "NNNNNNNNYNNNNYYNNNNNNNNNNNYYNNNN", "NYYNNNNNYNNNYNYYYNNNYYNNNNYNNYYY", "NNNYNNNNNNNNNYNNYNNNNNNNNYYYNNNY", "YNNYNNYNYYYNYNYNYNYNNNNYYYYNNNNY", "NNNNNNNNNYNNNNYNYNNNNNNNNYYYNNNY", "YNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNN", "YNNNYNYYYNYNNNYNYNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YYNNYNNNNYNNNYNNNNNNNNNNYNYNNYYN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNYN", "YNYNNNNYNYYYNYYNNNYYYNNYYYYYNYYY", "YNNYYNNNNYNNYNYNNNNNNNNYNNNYNYNY", "YYNNYNYYYYNNYNNYYNNNYNNYNNNYNNYY", "YYNNNNNNNYYNYYNNNNNNNNNNNNYNNYYY", "YNNNNNYYYYYNNNYYYNNNNNNYNYNYNNYN", "YNYYYYNYNYYYYNNYYNNNNYNYYYYYYYNY", "NNNNYNNNNNYNYYYNNNNNYNNNNNYNNNNN", "YNNNNNNNNNYNNNNNYNNNNNNNNNYNNNYN", "YNNNNNNNNNYNYYYNYNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNNYNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNYYYNNYNYNYYNYNNNYNYNNNNY", "YYNNYNYNYYNNYYYNYNNNNNNNYNNYNNYY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNNNYYNYNYNYNNNNNNNNNNYNNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 163344;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> relations = {"NNNNNNNNNNNNNNNN", "NNNYNNNNYNNNNNNY", "NNNNNNNNNYNNNNNN", "NNNNNNNNYNYNYNNN", "NNNNNNNNNNYYYNNN", "NNNNYNNYNNYNYYYY", "YNNNNNNNYYYYNYNY", "NNNNNNNNYYYYNNYN", "YNNNNNNNNNNYNNNN", "YNNNYNNNNNYNNNYY", "YNNNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNN", "YNNNNNNNNNNNNNNN", "YYNYNNNYNNYNNNNY", "NNNNNNNNNNNNNNNN", "NNNNYNNNNNYNYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 302;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> relations = {"NNYNNYYNNNNNNYNYYYNNN", "YNYYYYYNYYYYYYYNNYYYY", "NNNNNNNYNNNYYNNNNYNNY", "NNNNYYYNNNNNNYNYNYNYN", "YNYNNNNYYNNYNYNNNNYNN", "NNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNYNNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNYNNNNYYNN", "NNYYYNYYYNYNYYYNYNYNN", "YNYYYNNYYNNNYYNYYNNYY", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNYYNNYN", "NNYYNYNYYNNNNYNYYYNNY", "NNNNNYNNYNNNNNNNYYYYN", "NNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNYYNNNYNNNN", "NNNNNYNNNNNNYNNNNYYNY", "NNNNNNNNNNNNNNNNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 6415;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> relations = {"NNNYYNYNYNNNNNYY", "NNNNNYNYNNYNNYYY", "NNNYYNYNYNYNYNYY", "NNNNYNYNYNYNNNNN", "NNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNYNNNYNNN", "NNNNYYNNNNNNNNNY", "NNNNNNNNNNNNNNNN", "NNYYNYNNYNYNNNYY", "NNNNYNNNYNNNNNNN", "NNYNYYNNNYYNYNYN", "NNNNNNNNNNNNNNNN", "NNNYNNNNYNNNNNNY", "NNNNNNNNNNYNYNNN", "NNNNNNYNYNNNYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 304;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> relations = {"NYNNNYYYYNYNNNNNYYNNN", "NNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNYNNNNYNNN", "NNNNNNNNNNNNYNYNNYNNN", "NNNNNNNNNNYNNNNNNYNNN", "NYNYNNNNNNNNYNYNNYNNN", "NNNYNNNYYNNNYNNNYYNNN", "NYNYYYNNNNYYYNNNYYNNN", "NNNYYNNYNNYYYNYNYYNNN", "NNNNYYNYNNYYYNNYYNNNN", "NYNNNNNNNNNNYNYNNYNNN", "NNNYYYNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "YYYNYYNNYNYNYNYNNNNNY", "NNNNNNNNNNNNYNNNNNNNN", "YNNYYNYYYNNYYNYNYNNNN", "NYNYYYNNNNYNYNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNN", "YYNNNNNYNNYYNNYYYYNNN", "NNNYYYNYNYYNNYNYYYNNY", "YYYYNNYYYNYNNNNYNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 13433;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> relations = {"NNNNNNYNNNYNYNNYNYYYNYYYNNNNNYNNNYYNNNNNYNNNNYNYY", "YNNYNYYYNYYYYYNNNNNYNNYNYYNNYYYNNYYNNNYYYYNYNNYNY", "NNNYNNNNYNNNNNNNNNNNNYNNNYNNYYYNNNNNYNYNYYNNNNNYN", "NNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNYNN", "NYYYNYYNYNNNNNNYNYYYNYNNNNYNYYNNNYNYNNYYYYNNNYNNY", "YNYYNNYNYYNYYYNNNNNYYYYNYYNYNNNNNYNNNNNYYYNNNYNNY", "NNNNNNNNYNNNNNNNNNNNNYNNNNYNNYNNNNYNNNNNNYNYNNYNY", "NNNNNNNNYNNNNNNNNNYNNYNNYYNNNYNNNNNNNNNNNYNNYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNNYYNNNYYNYNNNNYNYNYNYNNNNNNNYNNNYYNYNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNYNNNNNYNNNYNNYYNYYNYNNYYNNNYNYNYYNNNYNNYNN", "NNNYNNYNNNYNNNNNNNYNNYNNYYNYNYYNNNNNNNYNNNNYNYYYY", "NNNNNNNNNNYNNNNYNYNNYNNNYNNYNYNNNNNNNNYNNNNYYNNYN", "YNNYYNNNNYNNYNNNYNNYYNNNNNYNYYNYNYNNNNYYYYNYNYYYY", "NNNNNNYNNNNNNNNNNNNYNNNNNYNNNYNNNYYNNNYNNNNYYYYYN", "YYYYNNNYYNNNNYNNNNNNYNNYYYNYNYYNNYYYYYYYNYNYYYNYN", "NNNNNNNNYNNNNNNNNNNNYNNNYNYNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNYNNNNNNYYNYNNNNYNNNNYNNNNNNNYNNNNNYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNYNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNYYNYNYYNNNNNYYYNNYNYYNNYNNNNNNNYNYNNYYNYNN", "NNNYNNNNYNNNNNNYNYNYNNNNNNYYNNNNNYYNNNNNNYNYNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNYYNYYNNNNNNNNNNNNNNNNNNNYNYNNYNN", "NNNNNNNNYNYNNNNNNNNNYYNNYNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNYNYNNNNNYNNNNNNNNNNNNNNNNYNNNNY", "NNNNNNNYYNNYYNNNNYYYNYYYYYYYNYNNNNYNYNYYYYNNYYNNN", "NNNNNNNNNNYNNNNNNYYNYYNNYNNYNNNNNNNNNNNNNNNYNNYNY", "NNNYNNNNYNYNNNNNNYNNYYNNNNYYNNNNNNYNNNNNNNNNNNYYN", "NYYNNYNYYNNYNYNNNYYNNNYYNNNYNNYNNYYNYNNNNNNYNYNYY", "NNNYNYYNYNNNYNNNNNYYNYNYYYYYNNYNNYYNYNYNYNNNNYYYN", "NNNNNNYYNNNNNNNNNYNNYYNNYYYYNNNNNNNNNNNNNYNNYNNYY", "NNNYNNNNNNYNNNNNNYYNYYNNNNNYNNNNNNNNNNNNNYNYNNYNN", "NYNYNYYYYNYYYYNYNNYYYNYYNYNYYNYNNYYNYYYYNYNNNYYYY", "NNNNNNNYYNNNYYNYNNYYNNYYYYYNNYNNNNNNNNNNNNNYYNYYY", "NNNNNNNNYYYNYNNYNYYYNYYNYNYNYNYYYNYNNNYYNYNYYYNNY", "NNNYNNYNYNYNNNNNNYNNYNNNNNNYNYNNNNYNNNNNNNNNNNYYN", "NNNYNNNYNNNNNYNYNNNNYYNNNYNNNYYNNNYNNNYNYNNNNYYYN", "NNNNNNYNNNYNYNNYNNNNNYNNYYYNNYYNNYNNNNNNNNNNYNYYY", "NNNNNNNNNNYNNNNNNNNNNYNNYNYNNNNNNNNNNNNNNNNNNNYNN", "NYYNNYYNYYYNYNNNNNNNYYYYNYNYNNYNNNNNNNYNYNNYYYNNY", "NNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNYYN", "NNNNNNNNYNNNNNNNNNYNYNNNYNNNNNNNNNYNNNNNNNNYNNNNN", "NNNYNNYNNNYNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNYNYYNNYY", "NNNNNNNNNNYNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNYNYNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 300332132;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> relations = {"NNN", "NNY", "NNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> relations = {"NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNYYYNYYNNNNNYNNNNYYYNNYNYNNNNYYYYNN", "NNNYNYNNNNYNNNNNNNNNNNNYNNYYYNNNYNNYNNN", "YNNNNYNNNYNNNNNNNNNNNNYYNNNNNYNNYNNYNNN", "YYNNNNNYYYYNNNNNNNNYNYYYNNYYYYNNNNYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNNNNNNNNYNNYYNNYYNYYNYNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNYNNYNNNNNNYYNYNNNNNNYYYYYYYNYYYNY", "NNNNNYNNNNYNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNYNNNYNNNNNYYYYNNYYYNYYNYYYNYNYNNNN", "YYNYNYYNYYNNNYNNYNNNNNYYYNYYYNNYNYYNYNN", "YYYYNYYYYYYNNNNYYNNYNYNYNNNNYNYNYYYYNNY", "YYNNYYYNYNYYNNNNYYNYYYNYNNNNYYYNNYYNNNY", "YNNNNNNNNNNNNNNNNNNYNYYYNNYNNYYNYNYNNNN", "NNNNNNNYNYYNNNNNNNNNNNNYNNNYYYNNNNNYNNY", "NNNNNNNNNYYNNNNNYNNNNYNNNNNYNNNNYNYNNNY", "YYYYNNYYYYYNNYNNYNNYNNNYNNNYYNYYNYNYYNN", "NNYYNYNNNYYNNNNNNNNNNNNYNNNYNNYNNNNNYNN", "NNYYYNYYNNNYNNNYYNNYNNYYYNYYYYYNNNYNNNN", "NNNYNNNYNNYNNNNNYNNYNNNYNNYNNYNNYNNNYNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNN", "YYYYNYNNNNNYNNNNNNNNNNYNNNYNNYNYNYNNNNY", "YYYNNNNYNNNNNYNNYNNNNNYNNNNYYYYYYNNNYNN", "YNNNNNNNNYYNNNNNNNNNNNYNNNNYNYNNNNNYNNY", "NNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNYYNNYNNYNNNNNYNNY", "NNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "YNNNNYNNNNNNNNNNNNNNNNYYNNYNYNNNYNNNNNY", "YNYYNYYYNYNNNNNNYYNNNNYNNNNYNNYNYYYYNNN", "YNNNNYNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNN", "NNNYNNYYNYYNNNNNNNNYNNNYNNYYNYNNNNYNYNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNYNNNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNYNNNYNNNNNNNNNNNNYYNNYNYNNNNNYYNNY", "YYNNNNNYYNNNNNNNNYNNNYYNNNYNYNYYYNYNYNY", "NNNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1061911;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> relations = {"NYNNNYYNYNYNYNYYN", "NNNNYYYYYNYNNNNNN", "NNNYYYNNYNYNNNYYN", "NNNNNNNNNNYNYNYNN", "NNNNNNNNNNNNNNNNN", "NNNNNNYYYYNNYNNNN", "NNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNN", "NNNNYNYNNNYNNNNYN", "NNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNNNNNN", "NYYNYYNYYNNNNNYYN", "NNNNNNYYNNYNNNNYN", "YNYNYYYNNYYNNNNNN", "NNNNNYYYNYNNYNNNN", "NNNNNNYNNNNNNNNNN", "NYYNNNNYYNNYNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 851;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> relations = {"NNNNYYNNNNNNYNNNNNNNYNNNNNN", "YNNNYNNYNNYYYNNNNNYNYNYNYYN", "NNNNNYNNNNNYNNNNYNNNNNNNNYN", "NYNNYNYYYYNNYNYNNYNNNNYNNYN", "NNNNNNNNNNNNNNNNYNNNNNYNNNN", "NNNNNNNNNNNYNNYNNNNNNNNNNNN", "NNYNYNNNNNNYYNNNNNNNNNNNNYN", "YNNNNYYNNNNNNNNNYNNNYNYNNYN", "NNNNYYNNNYNYNNNNYNNYNNNNNYN", "YNNNNNNYNNNYNNYNNNNYNNYNNNN", "YNNNYNNNNNNNYNYNYNYNYNYNYYN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYYNNNNNNNNNNYNNNNNNNNYN", "NNNNNYNYNNYYYNNNYNNYYNNYYNN", "NNNNNNNNNNNYNNNNNNNNNNYNNNN", "NNYNYYYNYYNYYYYNNNNNYYNYNNY", "NNNNNNNNNNNYNNNNNNNNYNNNNNN", "NYNNYYYYYNYYNNYNNNNYYNNNNNN", "NNYNNNNNNYNYNNYNYNNYYNYNYYN", "YNNNYNNNNNNNYNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NYNYYYNNNNNYYNYNNYYNYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYYYNYNNNNNYNYNNNYYN", "YNYNYNNNNNNYNNYNYNNNNNYNNYN", "NNNNYNNNNNNYNNYNYNNNNNYNNNN", "YYNNNNNYYNNYNNNNNYYYNNYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 34754;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> relations = {"NNNNNNNNNNNN", "YNNNNNNNNNNN", "YNNNNNNNNNYN", "YYNNNNNNNYYN", "YNNNNNYYNYNN", "YNNNNNNNNYYN", "NNYNNNNYNYYN", "NYNNNNNNNYNN", "YYNNNNNNNYNN", "YNNNNNNNNNNN", "YYNNNNNNNYNN", "NYNYNNNYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 66;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> relations = {"NNNNNNNNYNNNYNNNNNNNNNNNYYNNNNN", "YNNNYYYNNNYNYNYYYNYNYNNNYYYYNYY", "NNNNYNNNNNNNYNNNNNYNNYNNNNNNNYY", "NNNNYNYNNNNNNNNNNNNNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YNNNNNNNYNNNYNNNNNYNNYNNNNNNNYY", "NNNNYNNNNNNNNNNNYNNNNNNNNYNNNNN", "YNYYNNYNYNNNYNNNYNYNNNNNNNNNYNN", "NNNNYNYNNNNNNNNNNNYNNNNNNNNNNNY", "YNYYNNNNNNNYYNYNYNYNYNNYNYNNYNY", "NNYYYYNYYNNNNYNNYYYYNYNNNNNNNYN", "NNYYNNYYYNNNYYYNYYYNYYNNNNYNNNN", "NNNNYNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNYNNNYNYNYYNNNNNYYNY", "YNYYNNYNNNNNYYNNYYNYYYYNYNNYYNY", "YNNNYNNNNNNNYNYNYYNNYYNNNYNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNYNNNNNNNNNNYYNYNNYYNYYYY", "NNNYNNNNNNNNYNNNNNNNNNNNNYNNNNY", "NNNYYNNNYNNNNYNNNNNNYYYNNNNYYNN", "YNNNNNYNNNNNNNNNYNNNNYNNNNNYYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNYNNNNN", "YNYYNNYNYNNNNNNNYNYNYNNNYNNNNYN", "NYYNNNYNNNYYNYNYYNYNNYNNYYNNNNY", "NNNYNNYNNNNNYNNNYNNNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNYNNYNNYNYNYNNYNNNNY", "YNYNNNYNYNNNNNNNYNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNYNYNNY", "NNNNNNYNNNNNYNNNYNNNNNNNNYNNNNN", "NNNYNNNNNNNNYNNNYNNNNYNNNNNNNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 880342;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> relations = {"NYNNNNYNYYYNNYNNYNNNY", "NNYNNNNYNNYNYNYYNNYNY", "NNNNNNNNNNNNNNNNNNNNN", "NYYNNYYNNNYNYNYYNYNYY", "YYNNNYNNNNNNYYNYNNYNN", "YYYNNNNYNNNYNYYYYYNNY", "NNNNNNNNYNYNYNYNNYNNY", "NNNNNNNNNYYNNNNNNYNNN", "NNYNNNNYNYNNNNNYNYNNY", "NNYNNNNNNNYNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNY", "NYYNNNYNYNYNNNNYNYNNN", "NNNNNNNNNYYNNNNYNNNNN", "NNYNNNNYNYYNYNNNNNNNY", "NNNNNNNYYYYNYYNNNYNNY", "NNYNNNNNNNYNNNNNNNNNN", "NNNNNNYYYYYNYNNYNYNNY", "NNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNYNYNNNNYNYNNN", "NNYNNYNYYYYYNYYNYYNNN", "NNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 5703;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> relations = {"NNYNNNYYNNYNNYNYNYNNNNYYYYNNYYNNNNNNYNNNYYYYNNYY", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNYNNNNNYNNNNNNNYNNNNN", "NYNNNYNYYNYNYYNNNNNNYNNYYYNNNYNNNNYNNNNNNYYNNNYY", "NNNNNYYYNNNNNNNNNNNNNNNNYNNNYYNNNNNYNNNNNNYNNNNN", "NNNYNNYYYNYNNNNNNNYYYNNYYYYNYNNNNNYYNNNNYNYNNNYY", "NYNNNNNNNNYNNNNNNNYNYNNNYYYNYNNNNNYYNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNYNNNNNYYNNNYNNNNNNNNNNYNYNNNYN", "NNNNNYYNNNNNYYNNNNYYNNNYYNYNNYNNNNNYNNNNYNYNNNYY", "YYYYYYNNNNNNNYNNNNNYYNYYYNYYNYNNNNYNYNNNNYYYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYYNNNNNNYNNNYYNYNNNNNYNYYNNNNNNYYNNNNNNNNYYN", "NNNNNYNNNNNNNNNNNNYNYNNNYYNNNNNNNNNYNNNNNNNNNNYN", "NYNYNYYNNNYNNNNNNNNNYNNNYNYNYYNNNNYYNNNNNNNNNNYN", "NNYNYNNNNYNNNNNYNNYNNNYYNYNNYYYNNNYYNNYNNYNYNYNY", "NYNYNNNNYNYNNNNNNNNYNNNYYNYNNNNNNNNYNNNNYNYNNNYY", "YNNNYYYYNYYNYNNYNNYNYNYYYNNYYNNNNNYYYYNNNYNNNYNY", "NYNYNNYYYNNNNYNNNNNYNNNNNYNNNNNNNNYNNNNNNYYNNNYY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNYNNNNNNYNNNNNYNNNNNYNYNYYNNNNYNNNNNYNNNNNNN", "NYNNNNYNNNNNNNNNNNYNNNNNYYYNYYNNNNYNNNNNNNYNNNNN", "NYYYYYYYYNYYYYYNNNNNYNYYYYYYNYNNNNNYYNNNNNNYNNNN", "NYNNNNYNNNNNYNNNNNYNYNNYYYNNYYNNNNYNNNNNNNNNNNYY", "NYNYNNYYNNNNNNNNNNNYNNNNNYNNYNNNNNYYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNYNNNYNNNNNNNYNNNNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNYNNNNN", "YNNNNYNYYNYNYYNYNYYYYNNYYYNNYYYNNNNNNNNNNNYNNNYY", "NNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNYNNNNNNN", "NYNNYNYNNNNNYNNNNYYNNNYNNNYNNNNNNNNNYNNNYNYYNNNY", "NYNYNYNYYNYNYNNNYYYNNNNYNYNYYYNNNYYYNYNNNNNYYYNY", "NNNYYYNYNYNNYYNNYYNYYNYYNNNYYNNNNNNYYYNNNYNNYYYY", "NNNNNYYNYNYNNNYNYYNYNYYNYYNNYNYNYNYYNYYNYYNNYNNY", "NNNNNNYNNNYNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNYNNNYNNNNNNNNNYNNNYYYNYNNNNNNNNNNNYNNNNNNN", "NNNYNYYNYNNNYYNYNYYYNNYNNYNNYNNNNNNYNNNNNNYNNNYY", "YNNYYNYNYNNNNYNYNYNNYNYNYYNYNYYNNNNNYNNNYNNNNYYY", "NNYNNNYNNNNNYYNYYNNYYNYYNNNYYYYNNNYYYNNNYNNYYYYY", "YYYNNYNNNYNNYYNYNYYYNNNYYYYYNYNNNNYYNYYNNNNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYYNYYNYNNYNNNNNYNNNYYNNNYNNNNNNNNNNNNNNNNNYY", "NNNNNNYNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNYNNNNNNN", "NYYYYYNYYNYNNNNNNNYNNNYYNYYNNNNNNNYNYNNNYYNNNNYN", "NNYNYYNNYNNNYNNYNYNNNNYNNYYNYNNNNNYNNNNNNNNNNNNN", "YNYNNYNNYNNNNNNNNYYYNNYYYNYYYYNNNNYNNNNNYYNYNNNN", "NNNNNNNNNNNNNNNNNNYNYNNNYYYNYNNNNNYYNNNNNNYNNNNN", "NNNNNYNYNNYNYNNNNNYNYNNYNYYNYYNNNNYNNNNNYNYNNNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1108154231;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> relations = {"NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNYNNYNNNNNNNNNYN", "NYNNNYYYNNNNNYNYNYYNNNYNNYNNYYNYY", "NYYNYYNYYNYNNYNYNYYYNYYNNNYNNYNYY", "YNNNNNNNYNNNNYNNNYYNNYNNNNNNNNYNY", "NYNNNNNNNNNNNNNYNNYNNNNNNNNNNNYYY", "NNNNYYNYNNNNNNNYNNYYYNNNNNNNNYYNN", "NYNNNYNNYNYNNYNYNYNNNYNNYNNNNNYYN", "YYNNNNNNNNNNNNNYNNNNNYNNNNNNNNYNN", "NNNNYYYYYNYNNNNYNNYNNNYNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNYNYYNYNNYNNNNNNNYYYNNNYNYY", "NYNYYYYNYNNNNNNYNYYYYYYYNNNNYYNNY", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNYN", "YNYNYYNYYYNYNNNYYNYNNYYYYNYNNNNYY", "YYNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNN", "YNYYYYNYYNNNNNNYNYYNYNNYNNNNNNYYN", "YYNNNNNNNNYNNNNYNNNNNNNNNNNNNNYYN", "YNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNYN", "YYNNNNNNNNYNNNNYNNYNNYNNNNNNNNNNN", "YYNNYYNYYNYNNYNNNYNYNYYNNNNNYYNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYN", "NNNNYYNNYNNNNYNNNNYYNYNNNNNNNNNNY", "NYNNNNNNNYNNNNNYNYNYYYYNYYNNYNNNY", "NYNNNYNNNNNNNYNNNNNYNNNNNNNNNNYYY", "YNNNYYNNYNYNNNNNNNYNNNYNYNNNNNNYY", "YYYNNYYNNYNNNNNNNNYYNNNNYNNNNNNNN", "YNYNYNYNYYNNYNNYYYNNNNNNYNNNNYYYN", "YYNNYNNNNNYNNYNYNYNNNNYNNNNNNNNYY", "NNNNNNNNYNYNNYNNNYNNNYYNYNNNYNYYY", "YYNNNNNNNNNNNYNYNNNNNYNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNYNNNYNNNNNNNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1386689;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> relations = {"NNNYNYNNNNN", "NNNNNNNNNNN", "NNNNNNYNNNN", "NNNNNNNNNYN", "NYYYNNYYNNN", "NNNNNNNNNNN", "NNNYNYNYNYN", "NYNNNNNNNYN", "YNYYYNYNNNN", "NNNNNNNNNNN", "NNNNNNYYNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 67;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> relations = {"NNYNNNNNNNNNNNNNNNYNNYNNNYNN", "NNNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNNNNNNNYNNNNNNN", "NYYNNNNNYNNYNNNNNNYNYYYNYYYN", "YNNNYNNNNNNNNNNYNNNYNNYYNNNN", "NNYNNNNNYNYYNNNYNNYYYNNYNYYY", "NNYNNNNNYYNYNNNNYNNYYNNYNYYN", "NNNYNNNNNNNNYNNNNYNNNNNNYYYN", "NNNNNYNNYNNNYNNNNNYNYYNNNYNY", "NYYNNNNNNNNNNNNNNYYYYNNNYNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYYYNNNNNNNN", "YYNYYNNNYYNNNNNNNYNNNNNYYNYN", "YNNYNNYYNNYNYNNYNNNNYYYNYYNY", "NYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNNYYNNYNNYYYYYYYNNN", "NYNNNNNNNNNNNNNNNNYYNNNNNNNN", "NYNNNNNNNNNYNNNYNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNNNNNNNNNNNNNNNNNNYN", "NYYNNNNNNNNNNNNYNYYYYYNNYYNN", "NYNNNNNNNNNNYNNYNNNNYNNNYNYN", "NNNNNNNNNNNYNNNNNYYNNNNNNNNN", "NNNNNNNNNNNYYNNYNNYYYNNNNNNN", "NYNNNNNNNNNNNNNYNNYNNNNNNNNN", "NNNYYNNNYNNYYNNNNNNYYNYYNNYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 11444;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> relations = {"NNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNYYYNNNNYYYNNNNNNNNYNNNNNNYNNNNYYNNNNN", "YNNNNNNYNNNNYNNNNNYYNNNNNNNNNNNNNNNNNNNNNYYNNYNN", "YYNNYNNYNYNYNNYNNNYYNNNNNYNYNNYNNNNNNNNNNNYNNYNN", "YYNNNNNNNNYYNYYNNNNYYNNNNNNNNYYNNNNNYNNNNYYNNNNN", "NNNNNNNNNNYNNYYNNNNYYNNYNYNYYNYYNNNNYNNNNYNNNNNN", "NNNNNNNYNNNYNNYNNNNNYNNNNNNYNNYNNNNNNNNNNYNNNYNN", "YNNNNNNNNNNNYNNNNNYNNNNNNNNYNYNNNNNNNNNNNNNNNYNN", "YNNNYNNYNNYYYNYYNNYYYNNYNNNNNYYNNNNNYNNNNNNNNYNN", "YYYNNNYNNNNNYYNNNNNNNNNNNYNNNYNNNNNNNNNNNYYNNNNN", "YNNNNNYNNNNNYNYNNNYYYNNNNNNNNYYNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNYNNNNNNYYYNNNNNNYNYNNNNNNNNNNNNNNNYNN", "YYYNNNYNNNYYNYNNNNNYYNNYNNNYYYNNNNNNYNNNNNYNNYNN", "NNNNNYNNNYYNYNYYNNYNYNNNNYYYNNNNYNNYYNYYYNYNNYNN", "YYNYYYYYYYNNYYNYYNYYNYNYNYNNYNNYYNNNYNNYYYYNNYYN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NYNYYYYYNNNYYNNYNNNNYNNYNYNNNNNNNNNNNNNNNNNNNNNN", "NNYYYNNYYYYYYYNNYYYYYNNNYNNNYNNYNNNNNNYNYNYNNNNN", "NYNNYNNNNNYYYNNNNNNYYNNNNYNNNYNNNNNNNNNNNNNNNYNN", "NNYYYNYNNYNYYYNNNNNYNNNNNNYYNNNNNNNNNYYNYYNNNNNN", "YNNNNNYNNNYYNYNNNNYNNNNNNNNNNYYNNNNNNNNNNYYNNNNN", "NNNNYNNNNNYNYYNYNNNYNNNNNYNNYYNYNNNYNNNYYYYNNYNY", "NNNNNNNNNNNYYNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NYYYYNYYNNYNYNYNNNNYNNNYNYNYNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNNNNNYYNNNNNNYNNNNNNNNNNNNNYNNNYNN", "NNNNNNNNNNNNNYYNNNYNYNNNNNNYNNNNNNNNNNNNNNNNNYNN", "NNYNYNNYNNYNYNYNNNNYNNNNNYNYNYYNNNNNNNNNNNYNNYNN", "YNNNNYYYNNNYNYYNNNYYYYNNYNYNNYNYNNNNYYNNYYYNNNNY", "YYNNNNYNYNNYNYNNNNNNYYNYYYNNNNYYNNNNNNYNNYNNNNYY", "NNYNNYYYNYNYYNNNYYNYYNYNNNYNNNNNYNNYYNNYYNYYYYNY", "NNNYYNNNNYYNNYYYNNYNYNNNNNNNNYNNNNNNNNYYYNYNNNNN", "YNYNNNYNNNYNYNNNNNYYNNNNNNNYNYNNNNNNNNNNNNYNNYNN", "YNYYYYNNYNYNNYNYNNYYNYNNNYYYNYNNNNNNNNYYNNYNNNNY", "YYYNNYNNNYYYNNNNNNNNYNNNNNNNYYYNNNNNYNNNYYNNNNNN", "NNNNNNYYYYNYNYYYNNNYNNNYNYNYNNYNNNNNYNNNNYNNNNNN", "YYNNYNYNNNYNYNNNNNNYNNNYNNNYNNYNNNNNNNNNNYYNNYNN", "NNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNYNN", "YYYNNNYYNYYYYNYYYNNNNYNYYYNNNNYYYNNYNYNYNYYNNYNY", "NYYYYNNYNNYYYYNNYYYYNNYYNYNNYNNYYYNYNYYYNYYYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYYYYYYNYYNYNNYYNYNYYYNNNNNNNNNNYNNNNYYNNYNY", "NYYYNYNYNYNNNYYNNNYNYNNYNYNYYYYYNNNYNNNYYNNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 352053579;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> relations = {"NNNYNNNNNNNNNYYNNNYNNNNNNYNNYNNNNYYNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNYYNNYNYNYYNNNNNNYYYNNNNNNNYYYNNY", "NNNNNNNYYNNYYNYNNNYYNNNNNNNNYNNNYNNYNNNYYNYY", "NNYYNNNYYNYYYYYNYNNYYYYNNNNNNNNNYYYYYNYYNNYN", "YNNNNNNNNYNNYNYNNNNNNYNNYYNYYNNNNNYNNYNNNNNN", "YYYNNNNNNYNYYNYYNNYNNNNNNNYYYYNNNNNNNNYYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNYNYYNYNYYNNN", "YYYYNNYNYNNNNYNYNYYYYNYNYYNYNNNNYNYYNNNYNNYN", "NNNNNNNYNNNNYNYNNYNNYNNNNYNNYNYNNNYNNNYYYNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNYNNNNYNYNNNNNYNNNYNNNNYYNYYYYNNY", "NYNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNYNNNNNNNYNNY", "NYNYNNNNNYNNYNYNNNNYNNNNNYNYYYYNNNNYNYYNYNNN", "YYNYNNNYNYNYYNNYNNYNNYNNNNNYNNNNNYYNNNYNYNNN", "NNNNNNNNYNNNYNYNNNYNNNNNNYNNYNNNNNNNNNNYYNNY", "NNNNNNNNNNNNYNNNNNNYYNNNNYNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNN", "NYNYNNNNYYNNNYNYNNNNNNNNNYNYNNNNNNNYNYNNYNYN", "YNYNNNNYYYNNNNYNYNYYYYNNNYYNYYNNNNNNNNYNYNNY", "NYNYNNYYYNYNNNNYNNYNNYNNYYYNYYYNNYYYNNYYNNYY", "YYNYNNNNNNNNYYYYNNYNYYNNNNYYYNYNNNNYNYYNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNNNYNYNNYYNNYYNNNNNNNNNNYNNYNNNYNNNN", "NYNYNNNYNNNNYNNNNNYYYNNNNNNNYNYNYYNYNNYNNNNN", "NNNNNNNYNNNNNNYNNNYNYNNNNNNNNNNNYNNNNYNYYNNY", "NYNNNNNNYYNNNNNNNNNYNNNNNYNNYNYNNNNNNYNYYNNY", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNN", "NYNYNNYYYYNNNYYNNNNYYYYNYYNNYNNNYNYYYNNYYNNY", "NYNNNNNYYNNNYNNNNNNYYNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYYNNNYNYNNYYNNNNNNYNNNYYNYNYNNYYNYNYY", "NNNNNNNNNNNNYNYNNYNYYNNNNNNNYNNNNNNNNNNNYNNY", "NNNNNNNYNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNYNNN", "NYYNNNYNNYYNYNYYNYYNYYNNYNYYYNNNNNYYNYNYNNYY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNYNNNYNNNNNNYNNNNNNYNYNNYNYNNNY", "NYNNNNNNYNNNYNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYYNNNYNNNNNNNYNNNNYNNNNNNNNNNNYNNNNNN", "NYYNNNYYYNNYNNYNYNYNYNYYNYYNYNYNNNNYNYYNYNNN", "NNNNNNNNYNNYYYYNNYNYYNNNNYNNNNNNYNNYNNNNNNNN", "NYNNNNNYNNNNYNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 22041919;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> relations = {"NNNNNN", "YNNNNN", "NNNNYN", "YNNNNN", "NNNNNN", "NNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> relations = {"NNYNYNYYNNNYNNNNNNNYNYNNNNNYNNNYNNNNYNNN", "NNYNYYYYYYNYNNNNNYNNNYNNNNNYNNYYNNNNNNNN", "NNNNYNNNNYNNNNNNNNNNNYNNNNNNNNNNNNYNNNNN", "NNYNYNYYNNNYNNNYNNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNN", "NNYNNNYNYNNNNNNNNNNNNYNNNNNYNNYYYNYNNNNN", "NNNNNNNYNNNYNNNNNNNYNNNNNNNNNNYYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNYNNNYNNNNNNNYNYNNNNNNNNNYNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYYYYNNNNNNNNNNYNYNNNNNNYNNNNNNNYNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYYYNYNYYNYNNNNNNNYNNNNNNNNYNYNYNYYNN", "NNNYNNYYYYYYNNNYNNNYNYNNYNNYYNYYNNNNYNYN", "NNYYNNYYYYYNNYNNYNYYNNNYYNYYYYNNYNYYNNNN", "NNNNNNNYYYNYNNNNNNNYNNNNYNNNNNYYNNYNNNNN", "YYYNYNYYYNNNNNNYNNNNNYNNYNNYNNNYYNYNNNNN", "YNNNYNYNYNNYNNNYNNNYNYNNNNNNNNYNNNNNNNNN", "YNYYYNNYYYNYNYNYNYNYNNNNNYNNNNNNNNYNNYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYYNYNYYNYNNNNYYNYNYNNYNNYYYYNYNYYYYNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNN", "YYYNNNNNYNYNNYNYNYNYYNNNYYYNNYYYYYYYNNNN", "YNYNNNYNYNNNNNNNNYYYYYNNYNNYYNNYNNYYYYYN", "NNNNNNNNNYNYNNNNNNNYNNNNNNNNNNYNNNNNNNNN", "NNYNNNYYYNYNYNNYYYNYNYNNNNNYNNNNYNYYYYNN", "YYNNNYYNNNNYYNNYYNNNNNNNNNNYYNYNYYYYNNYY", "NNNNYNYNYNNYNNNNNNNNNYNNYNNNNNNYYNYNYNNN", "NYYNYYYYYYYYNNNYYNNYNYNNYNNYNNYYNNYNYNNN", "YYYYYYNNYYYYYNNNYYNNNNNNYYYYYNYNNNYNNNYY", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYYNYNNNNNNNYNYNNNNNNNNYNNNNNNNNN", "YNYNNNNYNNYYYYNYNYNYNNNNNNNNNNNYYNYNYYYY", "NNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNYNNYYYYNNNNYYYNYNYNNNNNYNNYYYNYNNNNN", "NNYNYNYYYNNYNNNYNNNNNYNNYNNNNNYYYNNNNNNN", "NNYYNYNYNYYYNNNNYYNNNNNNYNNNYNYNYNYNNNNN", "NNNYNYNNYNYNNNNNNYNYNYNNNNNYNNYNYNYNNYNN", "YYNNYNNNYNNNNNNNYYNNNYNNYNNNYNNNNNYNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 3503954;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> relations = {"NNYNNNNNNNYNNNNNNNNNNNNNNNNN", "YNYNNNYNNNYYYNNNNYNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YYNNYNYNNNYNYNNNNNYNNNNNNNNN", "YNNNNNYNNNNNNYNNNNNNNNNNNNNY", "YNNNNNNNNNYNYYNNNYNNNNNNNNNN", "YNYNNNNNNNNNNNNNNYYNNNNNNNNN", "YYYNNYNNYYNYNNNNNYYNYYNNNNNY", "NNYYNNYNNNNYYNNNNNNNYNNNNNNY", "NNYYYNNNNNNNNNNNNNYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNYYNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNYNNNNNYNNNNNNNNN", "NYYYYNNNNNNYNYNNNNYNNYYNNNNN", "NYNNYNYYYNNYYNNNYYYNYYYYNNNY", "YNNYYNNNYYYYYNNNNYYNYYYNNNNY", "YNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYYYNYYNYNNYYYYNNNNNNNYNY", "NYYNNYYNNNNYYYNNNYYNNNNNNNNN", "NYNYNYYNNNYNYYNNNNNNNNNNNNNY", "YNYYNNYNNNNNYNNNNYYNNYNYNNNY", "YYNNNNNNNNYYYYNNNYNNYYNNNNNY", "YYNNNNYNNYNYNNYNYYYNYYYNNNYN", "NNYYYYYNYNNNYNYNYYYNNYYNNNNN", "NNYNNYYYYNNNYNYNNNYNYNYYNYNN", "NNYNNYNNNNNNYNNNNNYNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 59430;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> relations = {"NNYNYYNNNYNYNYNNNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNYNNNNYNNNNNNYNYNYN", "NNYNNNNNNYNYNNYYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNNYNNNNNNNNNNNNNNN", "YYNNNYNYNYYNYNYNNNNYNNNYNNY", "NYNNNNNNNYNNYNNNNNNYNYNNNYY", "NYNNNYNNNYNYYYNNYYNNYYNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NYYNNYNNNNNNNNYNNNNNNYNYNNN", "NYNNYNNNNYNNNNNNNNNNNNNNNNN", "NNYNYYNNNYNNNNYNNNNNNYNYNYN", "NYYNYYNNNYYNNNYNNNNNNYNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNYNYNNNNYNYNYNNN", "YYYYNNNNNNYYYNYYNNNYNYNNNYN", "YNNNYYNNNNNNNNYNYNNNNYNYNYY", "YYNYNNNNNNYYYNYYYNNYYNNNYNN", "NNYNYNNNNNYNNYYNNNNNNYNNNNN", "NYNYYYNNNYNYNNYNNNNNNNNYNNY", "NYNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNYYNYNYYYNYNNYYNYNYNNNYY", "NNNNNNNNNYNYNNYNNNNNNYNNNNN", "NYYNYYYYYNNYNNYYNYNNYNNYNYY", "NYNNYNNNNYNNNNYNNNNNNNNNNNN", "NNYYNNNNNYNNYYNYNNNYNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 114843;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> relations = {"NYNNNNNYNNNNNNNNNNNNNNYNNNNNYNYNNYYNNNN", "NNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNYNNYNYNYYNYNNYYYNYNYNYYYNNYY", "NYNNNNNYYNNYNNNNYYYNYNNNNYYNYNNYNYNNYYY", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNN", "NYYNNNYNYNNNNYNNYNYNNNYYNNNNNNNYNNNYNNN", "YYYNNNNYNNNYNYYYYNYNNYNYNYYNYNYNNYYYNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNY", "YYNNYNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNY", "YNNNYNNYNYNYNNYNYNYYNNNYNYNNYNYYNNNNYYN", "YYNNNNNYYNNNNNNNNNYYNNYNNNNNNNYNNYNNNNN", "YNNYNNNNYNYNNNNYNYNNNYYYYNYNNYYNNNNNNYY", "NYNNNNNYYYNNNNNNNYYNYNNNYNYNYNNYNYNNNYN", "NNNNYNNNNYNNNNNNYNNYYNNNYYNNNNYNNYYNNYY", "NYNNNNNYYYNNNNNNNNNNNNNNNNNNYNYNNNYNYYN", "NNNNYNNNYYNYNNNYNNNYNNNNNNYNYNYNNNNNYNY", "YYNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNYNNNNNYNNNNNNNNNNNNYNNNNYNNYYN", "YYNNYNNYNYNNNNNYNYNYNYNNYNYNYNYYNNYNNNY", "YYNNNNNNNYNNNNNNNNYYNNNNNNNNYNNNNYNNYYN", "NYNNYNNYNYNNNNNNNNYNNNNNNNNNYNYNNNYNYYN", "YYNYNNNNNNNYNNYNNNNYYYYNNNYNYNNNYYYNYYN", "YYNNYNNNYNNYNNNNYYYNNYNNNNYNNNYNNYNNYYY", "YYNNNNNNNYNYNNNYNYYYNNYNNNNNYNNNNYYNYYY", "YYNNYNNNYYNNNNNYNYNYNNNNNNNNNNNNNNYNYYN", "YNYNNYNYNYNYNNYNNYNNNYNNYYYNYYYNNYNYYNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNN", "NNNYNNYYYYYYNYYYYNNYNNNYNNYNYNYYYYYNNYY", "NNNNNNNYNYNNNNNNNNYNNNNNNNNNNNNNNNYNYNY", "YNNNYNNYYNNNNNNYNNYYNNNNYYYNYNYNNYNNNYY", "YYNNNNNNYNNNNNNNNNNYNNNNYYNNYNNNNYYNYNY", "NNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNYNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNYNNNNYNNNYNYNNYNYNYYYYYYYNNNYNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 5373476;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> relations = {"NNYNNNYNNNNYNNNNYYNYN", "NNYNNYNNNYNNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "YNYNNNYNNYYYNNNNYYNYN", "NNNNNNNNNNNNNNNNYNNNN", "NNYYNNNNNNNNNNNNNNNNN", "YNYNNNNNYYYNYNNNYYNYY", "YYYNNYNNNNNNYNYNYYNNN", "NNYYNNNNNNNNNNNNNNNNN", "YNNNNNYNNNNYNNNNYYYNN", "NNNYNNYNNNNNNNNNYNNYN", "NNYYNYYNNNNNNNNNYYNNY", "YNYYYNNNNYYNNNYYNYNYN", "NNYNNNNNNNYYYNNNNNNYN", "YYYYNYYNNNNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNN", "NNYYNNNNNYNNNNNNYNNNY", "NNYNNNYNNYNNNNNNYYNYY", "NYNYNNNNNNNNNNNNYYNNY", "NNYYNYYNNYNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 3560;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> relations = {"NYYYY", "NNNNN", "NNNYY", "NNNNY", "NNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> relations = {"NNYNNNNNYNNNNNNNNNYNNNYNNNYNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNYNNNYNNNNNNYNNNNNNYNNNNNYNN", "NYNNNNNNYNNYNNNNNNYNNNNNNNNNYNNNNNNYNY", "NNNYNNNNNYNYNYNNNYYYYNNYYNYNYYNNYYNNYN", "NNNYNNNNYNNNNNNYYNYYNNNNNYYNYNNNNNNNYY", "YYYYNNNNNNNNNNNNNNYYNNNNNYYNNNNNNNNNNY", "YYYYNYNNYNNNYNNNYNNNYNNNYYYYYYNNNNYYNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYNNNNNNNYYYNYYYNYNYNNNYYNYNNNNYYYYN", "YNYNYNNNNYNNNNYNYYNYNNNNYYNNNNNNYNNYNY", "NYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNN", "YYYYNNNNYNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "YYNYNNNNYNNNNNNNNNYNNYNNNNNNYYNNNNNYNN", "NNNNNNNYYNNNNNNYYNYYYYNYNYNYNYYNYNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNYNNNNYNNNNYNNNYYYNYNNNNNNNYNNNYNNYN", "NYYYNNYNNNNYNYNYNNNYNYNNNNYNYYNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NYNNNNNNYNNNNNNYNNNNNNYNNNYNYYNNNNNNNN", "NYYNNNNNYNNYYYNNNNNNNYNNNYYNYYNNNYNYNY", "NYYNNNNNYNNYNNNNNNYNNNYNNNNNYNNNNYNNNY", "NYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNN", "NNYNNYNNYYNNNNNYNNYNNYYNNNYNNNNNYYNNNY", "NNYNNNNNNYNYYNNYNNNNYNNNNNNNYNNYNNYYYN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYNNYNYYNYNNNYYNYNNNYYYNNNYNNNNYNYYY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNYNN", "NYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNYYNYNNNYNYYYNNYYNYYYYNNNYNNYNYYNYYYY", "YNNNNYYNYNNNYNNYYYNYNNNNNNNNNYNNNYNNYY", "NNYNNNYNYYNYNYNYNNYNYYYNNNNNNYNNNYYYYN", "NYYYNNNNYNNNNNNNNNNYNNNNNYYNNNNNNNNNNY", "YYYNNNNNYNNNNYNNYNYNNYNNNNYNYYNNNYNNYY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNYNNNYNNYYNYYNNNYNYNNNNYNYNY", "NNNNNNNNNNNYNNNYNNNYNNNNNNYNNYNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1073778;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> relations = {"NNNNNNYYNNY", "NNNYNNNNNNN", "NNNNNNNNNNN", "NNYNNNNYYNN", "NNYYNNYNNNN", "NYNNYNNYNNN", "NNYNNNNNNNN", "NNYNNNYNNNN", "NNYNNNYYNNN", "NNNYYNYYYNN", "NNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 77;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> relations = {"NNYYYNNYNYYNNNNYNNNY", "YNYNYNYYYYYNNNYYYNNN", "NNNNNNNYNYYYYYNNNNYY", "NNYNNNNNNNYNNYNNNNYY", "NNYYNNNYNYYNYYYNNNNY", "NNNNNNNNNNNNYNYNNYYY", "YNYNNYNNNNNYYYNNYYNY", "NNNNNNNNNNNYNYNNNNNN", "YNYNYYNNNNYNYYYYNYYY", "NNNNNNNYNNNYNYNNNNNY", "NNNNNNNYNNNYNYNNNNNY", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNYYYNNNNNNN", "NNNYNNNNNYNNNYNNNNNY", "NNYNYNNYNYNYYYYNNNYY", "NNYYNNNYNNNYNNYNNNYY", "NNNNNNNYNNYYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 4010;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNNNNNNYNNNYNNNYYNNYNYNYYNNNNYNNNNNNNNNNYNNNNNYYN", "YYNYNNNNYYNNYYNNYYYYYNYNYNYNNNNNNNNYNNYYNYYYNNYYYN", "YNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNYNNN", "YNNYNNNNNNNNNNNYYYNNYNNNYYNNNNYNNNNNNNYNNNNNNNYNNN", "YYYYNNNNNYNYYNNYNYYNYNYNYNYNNYYNNNNYNNNYNYYYNNYYNN", "YYYYYYNNNYNYYYNYYYYYNNYNYYYNNYYNNNNNNNYYNYYYNNYYYN", "YYYYNYYNYYNYYYYNNYNYYNYNYYYNNYYYNNNYNNNYNYYYNYYYYN", "YNNYNNNNNNNNYNNYYYNNYNNNNYNNNNYNNNNNNNYNNNNNNNYNNN", "YYNYYNNNYNNYYNNYYYYNYNYNNYYNNYYNNNNYNNYYNYNYNNNYYN", "NYYYYYYYYYNYYNYYYYYYYYYNYYYNNYYYNYYYNNYYYYYYYYYYYN", "NYNYYNNNYNNNYNNYYYNNNNYNYYYNNYNNNNNYNNYNNYYYNNNYYN", "YNNNNNNNNNNNNNNNYNNNYNNNYYNNNNYNNNNNNNYNNNNNNNYNNN", "YNNNYNNNYNNYYNNYYYYYYNYNYNNNNYYNNNNYNNYYNYYYNNYYNN", "NYYYYYYNYYNYYYNYYNYYNNYNYYYNNNYYNNNYNNNYNYYYNYYYNN", "YNNYNNNNNNNNYNNNYYNNYNNNYYNNNNYNNNNNNNYNNNNNNNYNNN", "YNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNYNNNNNNNYNNN", "YNNNYNNNYNNNNNNYYYNNYNYNYNNNNYYNNNNYNNYNNNYNNNNYYN", "NYNYYNNNYYNYYNNNYYYNYNYNYYYNNNYNNNNYNNYYNYYYNNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNYYNYYNNNYYYYYYYYNYNYYNNNYYYNNNYNNNYNYNYNYYYYN", "YNNYYNNNYNNNYNNYYYNNYNNNYYNNNNYNNNNNNNYNNYNNNNYYYN", "YYYYYYNYYYYYYYYYNYYYYYYNYYYYNYYYNNYYYNYYYNYYYYYYYY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNYNNYNNNYNNNNNYNNNNNNNYNNNNNNNYNNN", "NYNYNNNNYNNNYNNYYYNNYNYNYYNNNYYNNNNYNNNNNNNNNNYYYN", "YYYYYYNYNYNYYYNYYYYYYYYNNYYNNYYYNYYYNNYNNNYNYYYYYN", "YYYYYYYYYYYNYYYYYYYYYNYNYYYYNYYYNYYYYNYYYYYYYYYYYN", "YNNYYNNNYNNNNNNYYYNNYNNNYYNNNNYNNNNNNNYNNNNNNNNYNN", "NNNYNNNNNNNNNNNNYNNNYNNNYNNNNNNNNNNNNNYNNNNNNNYNNN", "YYYYYYYNYYNYYYNNYNYYNNYNNYYNNYYNNNNNNNYNNYYYNYYYYN", "YNNYYYYYYYNYYYYYYYYYYYYYYNYYNYYNNYNYNYYYYYYYYYYYYY", "YYYYYYNNYYNYYYYYYYYYYYYNYYYNNYYYNNYYNNYYYYYYYYNYYN", "YYNNYYYYYYNYYYYNYYYYYYYNYYYNNYYYNNNNNNYYNYYNNYNYYN", "YNNYNNNNNNNNYNNYYYNNYNYNYYNNNYYNNNNNNNYNNYNNNNYYYN", "YYYNYYYNYNYYYYNYYYNYYYYNYYYYNYYYNNYYNNYYYNYYYYYYYN", "YYYYYYYYNNYYYYYYYYNYYYYYYNYYNNYYNNYYYNYYYYYYYYNYYY", "YNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NYNYYNNNNNNNYNNNYYNNYNNNYYYNNYYNNNNYNNYNNNNNNNYYYN", "NYYNNYYYYYNYYNYYYYYYYYYNYYYNNYNYNNYNNNNNNYYYYYYYYN", "YNNNNNNNYNNNYNNNYYNNYNNNYYNNNYYNNNNNNNYNNNNNNNYYYN", "YYNYYNNNYNNNNNNNYYNNYNYNYYYNNYYNNNNYNNYYNYNNNNYYYN", "YNNYYNNNNNNNYNNNYYYNYNYNYYYNNYYNNNNYNNYYNYYNNNYYYN", "YYYYYYYNYYNYYYYYNYYYYNYNYYYNNNYYNNNYNNYYNYYYNYYYYN", "NNYYYNNNYNNYYYNNYNYYYNNNYYYNNYYNNNNYNNYYNYYYNNYYYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYNNNYNNNNNNYYYNNNNNNYYNNNNYNNNNNNNYNNNNNNNYNNN", "YNNYNNNNNNNNNNNYYNNNYNNNYYNNNNYNNNNNNNYNNNNNNNYYNN", "YYYYYNYYYNYYYNYYYYYYYYYNYNYYNYYYNYYYYNYNYYNNYYNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1221005733797;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNN", "YNNNYYYYYYYYYYYYNNNYYNYNYYYYYYYYYYYNYNYYYNNNNNNYYY", "YYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYNNYYYYYYNYYYYNNYYYYYYYYYYYYYYYYYYYYNYYYNYNNYNYYY", "YNNNNYNYYYYNYYYYNNNNNNYYYYYNYNNNYYYNYNYYNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YNNNYYNYYYYYNYYYNNNYNNYYYYYNYYNYYYYYYNYYNNYNNNNNNY", "YNNNNYNNNYYNNNNYNNNNNNNNYNNNYNNNYNNNNNYYNNYNNNNNNN", "YNNNNYNYNYYNNNYYNNNNNNNNYNNNYNNNNNNNNNYYNNNNNNNNNY", "YNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNNNNNNNNN", "YNNNNYNNNYNNNNNNNNNNNNNNYNNNYNNNYNNNNNYYNNYNNNNNNN", "YNNNNYNYYYYNNYYYNNNNNNYNYNYNNNNNYNNNNNYYNNYNNNNNNY", "YNNNNYNYYYYYNYYYNNNNNNYYNYYNYNNNYYYNNNYNNNYNNNNNNY", "YNNNNYNYYYYNNNYYNNNNNNNNYNYNNNNNYNNNNNYYNNYNNNNNNY", "YNNNNYNYNYYNNNNYNNNNNNNNYNNNYNNNYNNNNNYYNNYNNNNNNN", "NNNNNYNNNYYNNNNNNNNNNNNNYNNNYNNNYNNNNNYYNNYNNNNNNN", "YYYYNYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYY", "YYNNYYYYYYYYNYYYNNYYYYYYYYNYYYYYYYYNYNYNYNYNNNNYYY", "YYNNYYNYYYYYYYYYNNNYYNYNNYYYYYYYYYYYYNYYYNYNNNNYYY", "YNNNNYNYYYYNYYYYNNNNNNNYNYYNYNNNYYYNYNYNNNYNNNNNNY", "YNNNYYYYYYYYNYYYNNNYNNYYYYYYYNNYYYYYYNYYNNNNNNNYYY", "YYNNNYYYYYYYYYYYNNYYYNYYYYYNYYYYYYYYYNYYYNYNNNNYYY", "YNNNNNNYYYYNNYYYNNNNNNNNYYYNYNNNYNNNNNYYNNYNNNNNNY", "YNNNNYNNYYYYNNYYNNNNNNYNYYYNYNNNYYYNYNYYNNYNNNNNNY", "YNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYYNNYNNNNNNN", "YNNNNYNYYYYNNNYYNNNNNNNNNNYNYNNNYNNNNNYYNNYNNNNNNY", "YNNNNYNYYYYNNNYYNNNNNNNNYNNNYNNNYNNNNNYYNNYNNNNNNY", "YNNNYYYYYYNYYNYYNNNYNNYNYYNNYYNYYYYYYNYYNNYNNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNYYYYYYYYYNNNYNNYNYYNNYNNNYYYYYNYYNNYNNNNNNY", "YNNNNYYYYYYYYYYYNNNYYNNYYYYYYYNYYYYYYNYYNNYNNNNNYY", "YNNNYYNYYYYYYYYYNNNYNNYYYYYNNNNNYYYYYNYYNNYNNNNNNY", "YNNNNYNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNYNNNNNNN", "YNNNNYNNYYYYNYYYNNNNNNNNNYYNYNNNNNNNNNYYNNYNNNNNNN", "YNNNNYNYYYYYNYYYNNNNNNYNNYYNYNNNYYNNNNYYNNYNNNNNNY", "NNNNNNNYYYYYYNYNNNNYNNYYYYYNYNNNYYYNYNYNNNNNNNNNNN", "YNNNNYNYYYYYNYYYNNNNNNYNNYYNYNNNYYNNNNYYNNYNNNNNNY", "NYNNYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYNYYYNYYYYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNN", "YNNNYYYYYYYYYYYYNNNYYNYYYYYYNYYNYNYYYNYYNNYNNNNNYY", "YNNYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYNYNYNYNYNNYNYYY", "NNNNNYNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNNNNNNNNN", "YNNYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYNYYYYYNNYNNYY", "YYNYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYNYYYYYYNYNYYY", "YYNNYYYYNYYYYYYYNYYYYYYYYYYYYNYYYYNNYNYYYNYNNNNYNY", "NYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYNYYY", "YNNNYYYYYYYYYYYYNNNYNNNYYYYNYYNYYYYYYNYYNNYNNNNNNY", "YNNNNYNYNYYNYNYYNNNYNNYYYYYNYYNYYYYYYNYYNNYNNNNYNN", "YNNNNYNYNYYNNNYYNNNNNNNNYNNNNNNNYNNNNNYYNNYNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 29854608906432;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> relations = {"NNYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYNYYYYNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNN", "NYNNYNNYYNYNYNNNYNYNYNYYYYNYNYYYYYYYYNYYNNYYNNYYNY", "NYYNYNYYYNNYYYNNYNYNYNYNNYNYNYYYYYYYYNNYNYYYYNYYNY", "NYNNNNNYNNNYNNNNNNNNNNNNNNNNNYNNYNNNNNYNNNNNNNNNNN", "NYYYYNYYYNYYYYNNYYYNYNYYYYNYNYYYYYYYYNYYYYYYNNNYNY", "NYYNYNNYYNYYYNNNNYYNYYYYYNNYNYYYYYYYYNYYNYYYNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NYNNYNNYNNNYNNNNYYNNYNNNNNNYNNYYNNYNNNYNNNNYNNNYNN", "NYYYYYYYYNYYYYYNNYYNYYYYNYYYYYYYNYYYYYYNYYYYYNYYYY", "NYNNYNNYYNNYNNNNYNNNYYNYNNNYNYNYYNNNYNYNNNNYNNYYNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNN", "NYNNYNNNNNYYNNNNYYNNYYNYNYNYNYYYNNYNYNYNNNYYNNYNNN", "NYYNYNYNYNYYYNNNYYYNYYNYYYNNNYNYYYNYYNYNYYYYNNYNNY", "NNYYYYNYYNYYYYNNYNNNYYYYYYYYYYYYYYYYYYYYYYYYNNYNYY", "YYYYYYYYYYYYYYYNYYYYNYYYYYNYNYYNYYYYYYNYNYYYYYNYYY", "NYNNYNNYNNNNNNNNNYNNNNNNNNNYNYYYYNYNYNYNNNNNNNNYNN", "NYNNYNNYNNNYNNNNNNNNNNNNNNNYNYNYYNNNNNYNNNNNNNNYNN", "NNNNYNNNYNYNYNNNNYNNYYNNNYNYNNYNNNYNYNYNNYYYNNYYNN", "YYNYYYYYYYYNYYYNYNYNYNYYYYYNNYYYYYYYYNYYYYYYYYNYYY", "NYNNYNNNNNNYNNNNYYNNNNNNNNNYNYYYYNYNYNYNNNNYNNNYNN", "NYNNYNNNYNNYNNNNYYNNYNNNNNNNNYNYYNNNYNYNNNYYNNYNNN", "NYNNYNNYYNYYYNNNYYYNYYNYNYNYNNYYNYYNYNYYNYYYNNYYNN", "NNNNYNNYYNNYNNNNYYNNYYNNNYNYNYNYYNYNYNNNNNYYNNYYNN", "NNNNYNNYYNYYNNNNYYYNYYYYNYNYNYYNYYYNNNYYNYYYNNNYNN", "NNNNYNNYYNNYNNNNYYNNYYNNNNNYNYYYYNYNYNNNNNYYNNYYNN", "NYYYYYYYYNYYNYNNYYYNYYNYYYNNNNYYYYYYYNYYYYYYYNNNYY", "NYNNYNNYNNNYNNNNNNNNNNNNNNNNNNNYYNNNNNYNNNNYNNNYNN", "NYYYYYYYYNYYYYNNYYYNYYYYNYYYNYYYYYNYYYYNYNYYNNYYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNN", "NNNNYNNNNNNYNNNNNNNNNNNNNNNYNYNYYNNNNNYNNNNNNNNYNN", "NYNNYNNYNNNYNNNNNNNNNNNNNNNNNYNNYNNNNNYNNNNYNNNNNN", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNN", "NNNNYNNYYNYYYNNNYYYNYYNYNYNYNYNYYNYNNNYNNYYYNNNYNN", "NYNNNNNYNNNYNNNNNYNNNNNNNNNYNYYYYNNNNNYNNNNYNNNYNN", "NYNNNNNYYNYYYNNNYYYNYYYYYYNYNYYYYNYNYNYYNYYYNNYYNN", "NYNNYNNYNNNNNNNNNYNNNNNNNNNYNNYNYNNNNNNNNNNYNNNYNN", "NNYYYYYYYNYYYNNNYYYNYYYNYNYYNYYYYYYNYNYNYYYYYNYYYY", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NYNNNNNYYNYYYNNNYYYNYYNYNYNYNYYYYNNNYNNNNYYNNNYYNN", "NNNNYNYYYNYYYNNNYYYNYYYYNYNYNYNYYYYYYNYYNYYYNNNYNY", "NYNNYNNYYNYYYNNNYYNNYYNYNYNNNNYNYNYNYNYNNNYYNNYYNN", "NYNNYNNYYNNYNNNNYNNNYNNNNNNYNYNYYNYNNNYNNNNYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNYYNNNYYNNNYYNNYYNYYYNYNYYYNYYYYNYYYYYYNNYYNY", "NYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYYYNYNYYYY", "NYNNYNNYYNNNNNNNYYNNYNNNNNNNNYYYYNYNYNYNNNYYNNNNNN", "NYNNYNNNNNNYNNNNNNNNNNNNNNNNNYNYNNNNNNYNNNNYNNNNNN", "NYYYYNYNYNYYYYNNYYYNYYNNYYNYNYYYYYYYYNYYYNYYYNYYNY", "NYNNYNNYNNYNNNNNYYYNYYYYYYNYNYYYYYYYYNYYNYYNNNYYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 51753879855449;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> relations = {"NYNNNNNNNNNNNNYNNNYYNNNNNNNNYNNNYYNNNNNNNNNYNNNYNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNYYNNNNNNNNNNNNNNNN", "YYNYYYYYYYNYYYYYYYYYYNYYYYNYYYYYYNYYYNYNYYYYNYYYNY", "YYNNYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYNYYYYN", "YYNNNYYNNYNYYNYYYNYYYYYNYYYYNYYYNYYYYNYNNYYNNYYYYY", "NYNNNNYYYYNNYNYYYYYYYYYNYYYNYYYNYYYYYNYNNNYYNYNNYY", "YNNNNNNYYNNNNNYNNNYYNNNNYNNNYNYNYYNNNNNNNNNYNNNYNN", "YYNNNNNNYNNNNNYNNNYYNYNNNNNNNYYNYYYNNNNNNNNYNNNYYN", "NYNNNNNNNNNNNNYNNNYYNYNNYNNNYYNNYNYNNNNNNNNYNNNYYN", "YYNNNNYYNNNNNNYNNNYYNYNNYNNNYYYNYYYNNNNNNNNNNNYYYN", "YYYYNYYYYYNYYYYYYYYYYYNYYNYYYYYYYYYYYNYNYYYYYYNYYY", "NNNNNNYYYYNNNNNNNNYYNYYNYNNNYYYNNYYNNNNNNNYYNNYYYN", "YYNNNNYNNYNNNNNYYYNYNYYNYNYNNYYNYYYYYNNNNNYYNNYNYN", "YYNNYYYYNYNYYNYYNYYYNYYNNYNYYNYYYYYYYNYNNYYYNYYYYY", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNYYNNNNNNNNNNNNNYNN", "YYNNNNYYYYNYNNYNYNYYNNYNYNNNYYYNYYNYYNNNNNYYNNYYYN", "YYNNNNYYYYNYNNYNNNYYNYYNYNNNYYYNYYYYYNNNNNNYNNYYYN", "YYNNNNYYYYNYNNYYNNYYNYYNNNNNYYYNNYYYYNNNNNYNNNYYYN", "NYNNNNNNNNNNNNYNNNNYNNNNNNNNYNNNYYNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNYYYYNNYNYYYNYYNYYNYYYNYYYNYYNNYNYNNNYYNYYYYN", "YYNNNNNNNNNNNNYNNNYYNNNNNNNNYYYNYYYNNNNNNNNYNNNYYN", "YYNNNNYYYYNNNNYNNNYYNYNNYNNNYYYNYYYNNNNNNNYNNNYYYN", "YYNYYYYYYYNYYYYYYYYYYYYNYYYYNYYYYNNYNYYNNYYYNYYNYY", "YYNNNNNNNNNNNNYNNNYYNYNNNNNNYYYNYYNNNNNNNNNYNNNYYN", "YYNNNNYNYNNYNNYYYYYYNYYNYNYNYYNNNNYYYNNNNNYYNYYYYY", "NYNNNNYYYNNYNNNYYYYNNYYNYNNNYYYNYNYYYNNNNNNYNNYYYN", "NYNNNYYYYYNYNNYNYYNYYYYNYYYNYYYNYYYYYNYNNYYYNYYYYN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNYNNNNYNNNNNNNNYNYNYYNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNYNNNYNNNNNNNNNYNNNYYNNNNNNNNNYNNNNNN", "YYNNNNYYYYNYYNYYYYYYNYYNYYYYYYYNYYYYYNYNNYYYNYYNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNYNNNYYNNNNNNNNYYYNYYNNNNNNNNNYNNNYYN", "YYNNNNNYYYNNNNYNNNYYNYYNYNNNYYYNYYNNNNNNNNYYNNYYNN", "YYNNNNYYYYNYNNNNNNYYNYYNYNNNYYYNNYYYNNNNNNYYNNYYYN", "NYNNNYYYYYNYYYYYYYYYYYYNYYYYYNYYYNNYYNYNNYYYNYYYNY", "YNNNNNYYYYNNNNYYYYYYNYYNYYNNYNYNYYYYYNNNNNYYNYNNYY", "YYYYYYYYYNYNNYNYYNYYYYYYYYYYYNYYYYYNYYYNYYYYYYYYYY", "NYNNYNYYYYNYYYYYYYYYYYYNYYYNYYYYYNYYYYYNNYYYNYNYYY", "YYNNNNYNYYNYYNNNYYYYNYNNYYYNYYNNYYYYYNYNNNYYNYYYYY", "YYNNNNYYNNNNNNYNNNYYNYNNYNNNYYNNYYYNNNNNNNNYNNYYYN", "NYNNNNNNNNNNNNYNNNNYNNNNNNNNYNNNNYNNNNNNNNNNNNNYNN", "NYYYYYYYNYNNYYYYYYYNYYYYYYYYYYYYYYYYYYYNNYYYNYYYNY", "YYNNNNNYYYNYYNYYYNYYNYYNYNNNYNNNYYYYYNNNNNYNNNNYYY", "YYNNNNNYYNNNNNYNNNNYNYNNYNNNYYYNYYNNNNNNNNNNNNNYYN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYYNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNYNNNYNNNNNNNNNYYYNYYNNNNNNNNNYNNNYNN", "YNNNNNYYYYNYNNYYYYYNNYYNYNYNYYYNYYYNNNNNNNYNNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 13263857948053;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> relations = {"NYYYYNNYYNNYNYYYNYNNNYYYYNNYYNYYNNYYYYYNYYNYNYNYNY", "NNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNYNYNNYYNYNNNNNYYNNNNNNNNNYNNNNNYNNYNNYYNN", "NYNNNNNNNNNYNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNYNNYNNN", "NYYYNNYNNYNYNNYYNYNNNNNNYNNNNNNNNNNNNNNNNYNYNNYYNY", "YYYNYNYNYYYYYYYYYYYNYYYYYNYYYNYYYYYNYYYYYYYYYYYYNY", "NYYYNNNNNYNYNNYYNYNNNNNYYNNNNNNNNNYNNNNNNNNYNNYYNY", "NYYYYNYNYYNYNYYYNYNNNNNYYNNNNNYNNNYNNNYNYYNYNYNYNY", "NYYYYNNNNYNYNYYYNYNNNNNYYNNNNNYNNNYNNNYNYYNYNYYYNY", "NYNYNNNNNNNNNNNNNYNNNNNYYNNNNNNNNNNNNNNNNNNYNNYYNN", "YYYYYNNYYYNYNYYYNYNNYYYYYNNYYNYYYNYYYYYNYYNYNYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNYYYYYYNYYYYYYNNNYYYNNYYNYYYYYYYYYNYNYYNYYYNY", "NNYYYNYNNYNYNNNYNYNNNNNYYNNNNNNNNNYNNNYNYYNYNNYNNY", "NYNYNNNNNYNYNNNNNYNNNNNYNNNNNNNNNNNNNNNNYNNYNNYYNN", "NYNYNNNNNYNYNNYNNYNNNNNYYNNNNNNNNNYNNNNNYNNYNNYYNN", "YYYYYNYYYYYYNYYYNYYNYYYYYNNYYNNYYYYYYYYNYYYYNYYYNY", "NNNYNNNNNNNYNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNYNNYNNN", "YYYYYNYYYYYYNYYYNYNNYYNYYNNYYNYYYYYYYYYNYYYYNYYYNY", "NYYYYYYYYYYYYYYYYYYNNNYYYNYYYNYYYYYYYYYYYYYYYYYYNY", "NYYYYNYYYYNYNYYNNYNNNYYYYNNNYNYYNNYYYYYNYYNNNYNYNY", "NYYNYNYYNNNYNYYYNYNNNNNYYNNNNNNNNNYNYNYNNNNYNYYYNY", "NYYYYNYYYYNYNNYYNYNNNYNYYNNNNNYNNNYYYNYNYYNYNYNYNY", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYYYYYYYYYYYYYYYYNYYYYYNYYYNYYYYYYYYYYYYYYYYYYNY", "YYNYYNYYYYYYYYYYYYYNYYNYYNNYYNYYYYYYYYYYYYYYYYYYNY", "NNYYYNYNYYNYNYYYNYNNNYYYYNNNYNYNNNYYYNYNYYNNNYYYNN", "NYYNYNYYYYNNNYYYNYNNNYYYYNNNNNYNNNYYYNYNYYNYNYNYNN", "YYYYYYYYYYYYYYYYYYNYYNYYYYYYYNNYYNYYYYYYYYYYYYYYNY", "NYYYNNYNNYNYNNYNNYNNNNNYYNNNNNNNNNYNNNNNYNNYNNYYNY", "NYYYYNYYYNNYNYYYNNNNNYYYYNNYYNYNNNYYYYYNNYNNNYYYNY", "YYYYYNYYYYNYNYYYNYNNYYYYYNNNYNYYNNYYYNYNYYNYNYYYNY", "YNYYYNYYYNYYNYYYNYNNYYYYYNNYYNYYYNYYNYYNNYNYNYNYNY", "NYNNNNNNNYNYNNYNNYNNNNNYYNNNNNNNNNNNNNNNYNNYNNYYNN", "NYYYYNYNYYNYNYNYNYNNNYNYYNNNNNYNNNYNYNYNYYNNNYYYNY", "NYYNYNYYYYNYNYYNNYNNNNNYYNNNNNYNNNYNNNYNYYNYNYYYNY", "NYYYYNYYYYNYNYYYNYNNNYYYYNNNYNYNNNYNYNYNYYNYNYYYNY", "NYYYYNYNNYNYNNYYNYNNNNNYYNNNNNNNNNYNNNNNNYNYNNYYNY", "YNYYYNYNYYYNYYYYYYYNYNYYYNNYYNYNNYYYYYYNYYNYNYYYNY", "NYNYNNNNNYNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNYNNYYNN", "NNYYNNYNNNNYNNYYNYNNNNNYYNNNNNYNNNYNNNNNYNNYNNYYNY", "YYYYYNYYNYYYNYYYNNNNYYYYYNNYYNYNNYYYYYYNYYNYNYYYNY", "NYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNN", "YYYNYNNYYYYYYYYYNYYNYYYNYNNYYNYYYYYYYYYYYYNYNYYYNY", "NYYYYNYNNYNYNYYYNYNNNNNYYNNNNNYNNNYNNNYNYYNYNNYYNY", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNNNYNNNNNYNNNNNYYNNNNNNNNNNNNNNNNNNYNNYNNN", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYNNYYNYYYYYYYYNY", "NNYYNNNNNYNYNNYYNYNNNNNYYNNNNNNNNNYNNNNNNNNNNNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 80425387087279;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> relations = {"NYNYYYNYYYYYYYNYNNYNNNYNNYYNNYYNYNNYNYNNYNYNYYNYYY", "NNNYNNNYNYNNYYNNNNNNNNNNNNNNNYYYYNNNNYNNYYNNNNNYYN", "YYNYYYYYYYYYYYNNYYYYYYYYYYYNNYYYYNYYNYYYYYYYYYNYYY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NYNYNNNYNYNNYYNNNNNNNNNNNYNNNYYYYNNYNYNNNYYNNYNYYN", "NYNYYNNNYYYYYYNYNNYNNNNNNYNNNYYYYNNYNYNNYYYNYYNYYN", "YYNYYYNYYYYYYYNYNNYNYYYNYYYNNNYYNNNYYYYYNYYYYYNYYY", "NNNYNNNNNNNNYYNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNYYN", "NYNYYNNYNYNYYYNYNNNNNNNNNYNNNYYYYNNYNYNNYYYNYYNYYN", "NNNYNNNNNNNNYYNNNNNNNNNNNNNNNYYYNNNNNNNNNNNNNNNYYN", "NYNYYNNYYYNYNYNYNNYNNNNNNYNNNYYYYNNYNYNNYYYNYYNNYN", "NYNYYNNYNYNNYYNNNNNNNNNNNYNNNNYYYNNYNYNNYYYNNYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNNYNNYYYYYYYNYYYYYYYYNYYYYYYYYYNYYYYY", "NYNYYNNNNYNYNYNNNNYNNNNNNYNNNYYYYNNYNYNNYYYNYNNYNN", "YYNNYYYYYYYNYYNYNNYNYYYNYNNNNNYYYNNYNYYYYYYYYYNYYY", "YNNYYYYYYYYYYYNNYNYNYYYNYYYNNYYYYNNYYYYYNYYYYYNYYY", "NNNYYNNYNYNYYYNNNNNNNNNNNYNNNNYYYNNYNYNNYYYNYYNYYN", "YYNYYYYYYYYYYYNYYYYNYNYNNYYNYYYYYNNYYYYYYNYYYYNYYY", "YYNYYYNYYYYYYYNNNNYNNYYNYYYNNYYYYNNYNYYYYYYYYYNYYY", "YYNYYYNYYYNYYYNYNNYNNNYNNYNNNYYYYNNYNYYYYYYNYNNYYY", "NYNNYYNNYYYYYYNYNNYNNNNNNYYNNYYYYNNYNYNNYYYNYYNYYN", "YYNYNNYYYYYYYYNNYYYYYYNNYNYNYYYYYNNYYNYNNYYYYYNNYY", "NYNYYYNYYYNYYYNYNNYNNYYNNYYNNYYYYNNYNYYNNYYYYYNYYY", "NYNYNNNYNYNNYYNNNNNNNNNNNNNNNYYYYNNNNYNNYYNNNYNYYN", "NYNYYYNNYYYYYYNYNNYNNNNNNYNNNYYYYNNYNYNNYYYNYYNYYN", "YYYYYNYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYY", "YNNYYYYYYYYYYYNNYYYNYYNNYYYNNYYYYNNYYYNYYYYNYYNYYY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYYNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "NNNYNNNYNYNNYYNNNNNNNNNNNNNNNYYYNNNNNNNNNYNNNNNYYN", "YYYNYYYYNYYYYYNYYYYNYNYYYYYNYYYYYNYYYYNYYYYYYYNYNY", "YYNNYYYYYYYYYYNYYYYYNYYNYYYNYYYYYNNYYYYYYYYYYYNYYN", "NYNYNNNYNYNNNYNNNNNNNNNNNYNNNYYYYNNNNYNNYYNNNNNYYN", "YNNYYYNYYYYNYYNYNNYNYYYNYYYNNYYYYNNYNYYYYYYYYYNYYY", "NNNYNNNYNYNNYYNNNNNNNNNNNNNNNYNYYNNNNNNNYYNNNNNYNN", "YYNYYNNYYYYYYYNYNNYNNNYNNYYNNYYYNNNYNYNNYYYNYYNYNY", "NYNNYNNYYYYNYYNYNNNNNNYNNNYNNYYYYNNYNYYNYYYNYYNYYY", "NNNYNNNYNYNNYYNNNNNNNNNNNNNNNYYYYNNNNNNNNYNNNNNYYN", "NNNYNNNYNYNNYYNNNNNNNNNNNNNNNYYYNNNNNNNNNNNNNNNYYN", "NYNYNNNYNYNNYYNNNNNNNNNNNYNNNYYYYNNYNYNNYYNNNNNYYN", "NYNNYYNYYYYYYYNYNNYNNYYNNYYNNYYYNNNYNYYYYNNNYYNYYY", "NYNNYNNYNYNYYYNNNNNNNNNNNYNNNYYYYNNYNYNNNYYNNYNYYN", "NYNYNNNYNYNNYYNNNNNNNNNNNNNNNYYYYNNNNYNNYYNNNNNYYN", "YYYYYYYYYYNYYYNYYYYYYYYYYYYNYYYYNYYYYYYYYYYNYYNYYY", "NNNYNNNNNNNNYYNNNNNNNNNNNNNNNYYYNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNYNNNNNNNNNNNNNNNYYYNNNNNNNNNNNNNNNNNN", "NYNYYYNYYYYYYYNYNNYNNNYNNYYNNYYYYNNYNYNNYYYNYYNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 70128705051354;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> relations = {"NNNYNNNNNNNNNNNNNNNYNNNYYNNNNYNYNYYNYNNNNNNYNYNNNN", "YNNNNNNNNNNNNNNNYYNYNYNYYNYNYYYYNYYNYNYYNNNNYNYNNY", "YNNNYNNYNYYNNNNNNYYYYNNNNNYNNYNYNYYNYNYYNNNYNYYYNY", "NNNNNNNYNNNNNNNNNNNYNYNYNNNNNYNYNNYNNNYNNNNYNNNNNN", "NNNYNNNYNNNNNNNYYYYYNNNNYNYNYYNYNNYNYNYYYNNNNYYNYN", "NNYYYNNYYYNYNNYNNYNNNNYYNYNNNYYYNYYNYYYNYYNYYYYNNY", "YYYYNYNNYNYYYNNNNNYYYYYYYYYYYNNNNYNNYNYNYNNYYNNYNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNYNNYNNNYNNNNNNNNNNN", "YYYNNNNYNYYNNNNNYNYYNYYNNNNYYYYNNNYNYYYYYNNNNNYYYY", "NNNNYNNNNNYNNNNYYNYNYNNNYNYYYYNYNNYNYNNNNYNYYNYNYN", "YNNYNNNYNNNNNNNNYYYNNNNYNNYNYYYNNYYNNNNYYYNYYNYNNN", "YNNNYNNNYNYNNNNNNYNYNNNYYYYYYYYYNYNYYYNYNYYYYNNYYY", "NNNYYNNYNYYNNNNYYYYYNYYYNNYYNYYYNNNNYYYNYNNYYNNYNY", "YYNYNNNYNNNNYNYNYNNYYNNNNYYYYYYNNYYNNYNYYYYYYYYYYY", "NYNYYNNNNNYNYNNYYYNYYYYYYYYYYYYNNYNYYYNYYNYYYNYYYY", "YYNYNNNYNNNNNNNNYYNYNYNYNNYNYYNYNNYNNNYYNYNNYYYNNY", "YNNNNNNYNNNNNNNNNNNNNNNYYNNNNYNYNYNNYNNNNNNYYYNNNN", "YNNYNNNYNNNNNNNNYNNYNYNNYNNNYNYYNNYNYNYNYYNYNNNNNN", "NNNNNNNYNNNNNNNNYYNYNYNNYNNNYYYYNNYNNNNNYYNYYYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYNNYNNNNNNNNNNNNNNN", "YYNYYNNYNNNNNNNYYNNYNYNNYNYYYNNYNYYNNNYYNYNNYYNNYY", "NNNNNNNYNNNNNNNNNNNYNNNNYNNNNNNNNYYNNNYNNNNNNNNNNN", "YYYYYNNNNYYNNNNYNYNNYYNNNNNNYYYYNNNNYYNNNYNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNN", "YNYNYNNYYNYNYNNYNYYYYYNYYNNYYYYYNYYYYNNYYNNYYYYNYY", "YNNNNNNYNNNNNNNNYYNNNYNYYNNNYYYNNNYNNNYYNYNYYYNNNY", "YNNYNNNYNNYNNNNNNNNNNYNYYNNNNNYYNYNNNNNNYYNYNNNNNY", "YNNYNNNNNNNNNNNNYNNYNNNYYNNNNYYYNNYNNNYNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNYNNNNYNNNNNNNNNNN", "YNNYNNNNNNNNNNNNNNNYNNNYNNNNNNNYNYYNYNNNNNNYYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYYNNNYYNNYYYYYYYYYYYYNNYNYYNYNYNNNNYYYYYYYYYYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNYNNYNNNYYYYNNYNNNNYNYNYNYYNNYYYNYNYYYYYYY", "NNNYNNNYNNNNNNNNNNNYNYNYNNNNNYNYNYNNNNYNNNNYYNNNNN", "YYNYYNNYNNYNNNNNYYNYYYNNYNNYNNNNNNYNNNYYYYNYNYYNNY", "NNNNNNNNNNNNNNNNNNNYNNNYYNNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNYYNYNNNYNNNNYNYNNYYNYNNNYYNYYYNNNY", "YNNYNNNYNNNNNNNNYNNYNYNNYNNNYYYYNYYNYNNNNNNYNYNNNN", "YNNNNNNYNNNNNNNNNNNYNYNNNNNNYNYYNYNNYNYNYNNYYYNNNY", "NYYYYNNYYNYNYNNYYYYYYYYNNYNNYYYYNYYNNYNYYYNYNYYYNN", "NNNNNNNYNNNNNNNNNNNYNYNYYNNNNYNNNYYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNYNYYNNNNNNNNYYNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNYNYNYNNNNNYNYNNYNNNNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNYNYNYNYYNYNNYNYNNNNYNNNYYNYNYNNNY", "YNNNYNNYNNNNNNNYYNYNYNNYNNYNYYYYNYYNNNYYYNNYYYNNYN", "YYNYNNNNNNNNNNNNNNNYNNNNNNYNYNNYNYNNYNYYNNNNYYYNNY", "YNNYNNNNNNNNNNNNYNNNNYNNNNNNYYYNNYNNYNYNNNNYYYNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 115357074968;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> relations = {"NNNNNYNYYYNYNYNNNYYNNNNNYNNYYNYNYNYYYNYNYYNNYYNNNY", "NNNYYYYYNYYNYYYYNYYYNNNYYYYYYNNYYYYYYNNNYYYYYNNYYY", "YNNNNYYYYNNYYNYNYNYNNNNYYNYNYNYNYYNYYNYYNYNYYYYYNN", "YNYNNYNNNYYYNNNNYYNNNNNYNYYYYYNYYYYYYNYYNYYYYYYNYY", "NNNNNYNYNYNNYYNNYYNNNNNYYYNYNNYNYYYNNNNNNNNNNYNYNY", "NNNNNNNNYYNNYNNNNYNNNNNNNYNNNNNNNNYYNNNNYYNNNNNYNY", "YNNNYYNNYNNYYYYNNYNNNNNYYYNYYYYNYNNYYNYYYYNNYYNYYN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNYNY", "NNNNNNNYNYNNNNNNYNNNNNNNNYNNYNNNYNYNYNNNNNNNNNNYNY", "NNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNY", "YNNNYNYYNYNYNNNNNNYYNNNYYYNNNYNYNYYYYNNYYYNYYNYYYY", "NNNNNYNYYNNNNNNYNYNNNNNNYYNYNYNNYYYYNNNNYYNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYYNNNNYNNNNNNNNN", "NNNNNYNYNYNYYNNYNNYNNNNYYYYYNYYNYNNNYNYNYYNYYYNYNY", "NNNNNNNYYYNNYNNYNNNNNNNNYYNYYNNNNNNYNNYNYNNNYNNYNN", "NNNNNYNNYNNNYNNNYNNNNNNNYYNNNYNNNNYYNNNNYYNNYNNNNY", "NNNNNNNNNYNNNNNNNYNNNNNNYYNNYNNNYNYYNNYNNYNNNNNYNN", "NNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNYNNNNNNNNY", "NNNNNNNYNYNYYNYYYNNNNNNNYYNYYYNNNNYYYNYNYNNYNNNYNY", "YNNNNYYYNNNYYYYNYYYNNNNNYYNYYNYNYNYNYNNNYYNNYYNNNY", "YYYYYNYYYYYNYNYYYYYYNNNYYYYNYYYYYNNYYNYNNYNYNNYYYY", "YNNNNYYYYNYYYYYYYYNYYNYYYNYYNYYNNYNYYNYYYNYYYNYYYY", "YYYYYYNNYYNNYNYYYNNYYNNYNYYYYNYYNYNNYNYYYNYNNYYYNY", "NNNNNYNYYYNYYNYYYYYNNNNNYNNNYNNNYNYYNNYNYYNYYYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNYNNNNYNNNNNNYNNNYNNNNNYYNNYNNYNNNNNYNY", "NNNNNYNYYYNYYNNYYNNNNNNYNYNYNYNNNYYYYNYNYNNYYYNYNY", "NNNNNYNNYYNNNNNYNYNNNNNNYYNNYYNNYNYYYNNNYNNYYYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNYNNYNNNNNNNNNNNYYNNYNNNNNNNNNYNNYNNNNNYNN", "NNNNNNNYNYNYNNNYNYNNNNNYYYYYYNNNYYYNYNYNYNNYYYNYNY", "YNNNYNYNYNNNYNYYYNYNNNNYYYYYYYYNYNYYYNYYYYNYNNYYYY", "NNNNNNNNNNNNYNNNNYNNNNNNNNNNYNNNNNYYNNYNNNNNNNNNNY", "NNNNNYNYNYNNYNNNNYNNNNNNYNNNYNNNYNYYYNYNYYNYYYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNYNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNYNNNYYNNNNNNNNNNYNNNYNYYNNYNNNNNNNNYNY", "YYNNYYYYYYNYYYYYNNYYYNYYNYYYYNYNYYYYNNNNYYNYNYYYYY", "NNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNYNY", "YNNNNNNNYNNYYNYNYNYNNNNYNYYYYNNNYYYYYNYNYYNNYYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNYNYNNNNNNNNNNNNNNYNNNNNNNNNYYNNNNYNNNNNNYNN", "YNNNYYNNYYNNYYYNNNNYNNNNNNNNNYYNYYNNNNNNNNNYYYYNYY", "NNNNNYNYYYNNYNNNYYNNNNNNYYNNNYNNNNYYNNNNNYNNYNNYNN", "NNNNNYNYYYNNYNNNYYNNNNNNYYNNYNNNNNNYYNYNNYNNNNNNNN", "NNNNNYNNYYNNNNNYYYNNNNNNNNNNYNNNNNNYNNYNYYNYNNNNNN", "YNNNYYNYYNNNNYYYYYYNNNNYNNYYYYYNYYYYNNYYYNNYYNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNNNYNNNNNNNNY", "YNNNNYNNYYNNYNYYYNYNNNNYYYYYNYYNYNYNYNYNYYNNYYNYNN", "NNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNNNNYNNNNNYNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 102127103612;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> relations = {"NNNNNNNNNNYNNNNNNNNNNYNNNYNYYNNNYNNNNNNNNNNNNNYNNN", "YNYNYYNNNYNYYNYNYNYYNYYYYYNYYNYYYNNNYNNNNNYNNNYNNN", "YNNNYNNNNNYNNNYNNNNNNYNNYNNYYNNNYNNNNNNNNNNNNNYNNN", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYNYNNNYYYYNYYYYNY", "YNNNNNNNNNYNNNNNNNNNNYNNYYNYYNNNYNNNNNNNNNNNNNYNNN", "YNNNYNNNNNYNYNYNYNNYNYNNYYNYYNNNYNNNNNNNNNNNNYYNNN", "YNYNYNNNNYYYYNNYYNNYNYYNYYNYYNNYYNNNYNNNNNYNYNYNNN", "NYYNNNYNNYYYYNYYNYYYNYYYYYNYYNNYYNNNNNNNNYYNNNNNNN", "YYYNNYNYNYYYYYYYYNYYYYNYYNNNYNYNYYNNYNNNNYYNYYYNYY", "NNNNYNNNNNYYYNYNYNNYNYNNNYNYNNNYYNNNYNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNYYNYYNNNYNNNNNNNNNNNNNYNNN", "YNYNYYNNNNYNYNYNYNNYNYNNYYNNYNNYYNNNNNNNNNYNNYYNNN", "YNYNYNNNNNYNNNNNNNNNNYNNYYNYYNNNNNNNNNNNNNNNNNYNNN", "YNYNYNYYNYYYYNNYYYYYYYYNYNNYYNYYYNNNYNNNNYYNYYYNYN", "NNNNYNNNNNNNNNNNNNNNNYNNYYNYYNNNYNNNNNNNNNNNNNNNNN", "NNYNYYNNNNYYYNYNYNNYNYNNYYNYYNNYYNNNNNNNNNNNNYYNNN", "YNYNYNNNNNYNYNYNNNNNNYNNYNNYNNNNYNNNNNNNNNNNNNYNNN", "YNYNYYYNNYNNYNNYNNYYNNYYNYNYYNNYYNNNYNNNNNNNYYYNNN", "YNYNYNYNNYNYYNYNYNNYNYYYYYNYYNYNYNNNYNNNNYYNYYYNNN", "YNYNYNNNNNYNYNYNNNNNNYNNYYNYYNNNYNNNNNNNNNNNNNYNNN", "YNYNNNNNNYYYYNYNYYYYNYYYYYNYNNYYYNNNYNNNNNYNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNYYNNNNNNNNNNNNNNNNNNNNN", "NNYNYYNNNYYYYNNYYNNYNNNNYYNYYNYYYNNNNNNNNNYNYYYNNN", "NNYNYYYNNYYYYNYYNNNYNYYNNYNYNNNYNNNNNNNNNYYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "YYNNYYYYYYYNNYYYNNYYYYYYYYNYYNYYYYYNYNNNYYYNYYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNYYYYYYYYYNYNYYYYYYYYYYYNYNYYYYYNYNNYYYYNYYYYYY", "YNNNYYNNNNNYNNYYYNNYNYNNNNNNYNNYNNNNNNNNNNYNNYNNNN", "YNYNYYNNNNYNYNYNYNNYNYNNYYNYYNNNYNNNNNNNNNYNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNYYNYNNNNNNNNNNNNNNNNNNNNNN", "YYYNYNYYNNYNYNYYYYYYYYYYYNNYYNYYNNYNYNNNYYYNYYYNYY", "NNYNYYNYNYNYYNYNYNNYNYYYYYNYYNYYYNNNNNNNYYYNYYYNNY", "YNYNYYYYYYYYYYYYYYNNYNNYYYYYNYNYYYNNYNNYNYYNYYYYYN", "YNYNYYNNNNYYNNYNYNNYNYNNYYNYYNNYYNNNNNNNNNYNNNYNNN", "YYYNYYYYYYNYNYYNYYYYYNYNYYYYYNYYYYYYYNNYYYYNYYYYYY", "YNYNYYYNYYYNYNNYYYYYYYYNYYYYYYNYYYYYYNNYYYYNYNYYYY", "YYYNNNYYNNYYYYYYYYYNNYNYYYYNYNNYNYYNNNNNYYYNYYYYYY", "YYYNYYYYNNYYYNYYYNYYNYYYYYNYYNYYYNNNNNNNNYNNYYYNNY", "YNYNNYNNNYYNYNNNYNNYNYNNNNNYNNYYYNNNNNNNNNYNNNNNNN", "YNYNYYNNNNYNNNYNYNNYNYNNYYNYNNNNYNNNNNNNNNNNNNYNNN", "NYYYYNYNYYNYYYYYYNYYNYYNYYYYNYNYYYYYYNYYYYNNYNYNYY", "YNYNYYNNNNYNYNYYYNNYNYNNYYNNYNYYYNNNYNNNNYYNNYNNNN", "YNNNYNNNNNYNYNYNNNNNNYNNYNNNYNNNYNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNYNYYNNNYNNNNNNNNNNNNNNNNN", "NNYNYYYNYYYYYYYYYYYYYNYYYYYYYNYYYYYNYNNNYYNNNYYNYY", "YNYNYYYYNYYNYNYYNNYYYYNYYYNNYNYYYNYNNNNNYNYNYYYNNY", "YYNNYNYYNYNYNNYNYYYNNYYNNYNYYNYYYNNNYNNNNNNNYNYNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1410272197837;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> relations = {"NYYYYYYYYYYYYYYNYYYYYYNYYYYNYYYYNNYYNYYYYYYYYYYYYY", "NNNNYNYYYNYNNYNNYNNNYNNYNNNNNYNYNNNYNNNYNNYNNNNNYN", "NYNYYNYYNYYNNYNNYNYYYYNYYYYNNYYYNNYYYNYYYYYYYYYYYY", "NNNNYNYYYNYNNYNNYNNNYNNYNNNNNYNYNNNYNNNNNNYNYNNNYN", "NNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNYNNNNNNNNNNYNNNNNNN", "NYYYYNNYYYYYNYNNYNYYYYNYYYNNNNNYNNYYNNYYYYYYYNYYYY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNYNNNYNNNNNNYNNNNNNN", "NNNNNNYNNNNNNYNNNNNNYNNYNNNNNYNYNNNYNNNYNNYNNNNNNN", "NNNNYNYYNNYNNYNNYNNNYNNYNNNNNYNYNNNYNNNYNNYNNNNNYN", "NYNYYNYYYNYYNYNNYNYYYYNYYYYNNNYYNNNYYNNNYYYYYNYYYN", "NNNNYNYNNNNNNYNNYNNNYNNYNNNNNYNYNNNYNNNYNNYNNNNNNN", "NNNYYNYYYNYNNYNNNNYYYYNYYYYNNYYYNNNYYNNYNYYNYYYNYY", "NYYYYYYYYYYYNYYNYYYYYYNYYYNNYYYYNNYNYNYYNYYNYYYYYY", "NNNNYNYNNNNNNNNNYNNNNNNYNNNNNYNYNNNYNNNNNNYNNNNNYN", "NYYNYYYYYYYYNNNNYYYYYNNYYYYNYYYYNNYYYNYYYYYYYYYYYN", "YYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNYNNNNNNN", "NYYYYYYYYNYYNYNNYNNYYYNYYYYNNYYYNNYYYNYYYYYYYYNYYY", "NYNYYNNYYNYNNYNNNNNYYNNYYNNNNYYYNNNYYNYYYYYYYYNYYN", "NYNYYNYYYNYNNYNNNNNNYYNYNNNNNYNNNNNNNNNYNNYNYNNNYN", "NNNNYNYNNNNNNYNNNNNNNNNYNNNNNYNYNNNYNNNYNNYNNNNNYN", "NYNYYNYYYNYNNYNNYNNNYNNYNNNNNNNYNNNYNNNYNNYNNNNNYN", "YYYYYYYNYYYYNYYNYNYYYYNYYYYYYYYYYYNYYYNYYYYNYYYYYY", "NNNNYNYNNNNNNNNNYNNNNNNNNNNNNYNYNNNYNNNNNNYNNNNNNN", "NYNYNNYYYNYNNYNNYNNYYYNYNNNNNYNYNNNYNNNYNNYNYNNNYN", "NYNYYNNYYNYNNYNNYNYYYYNYYNNNNYYYNNNYYNYYYYYYYYYYNY", "NYNYYNYYYNYNNYNNYNYNNYNYYYNNNYYYNNNYYNYYNNYYYYYYYY", "NYYYYNNYYYYNYYYNYYYYYNNYYYYNYYYYNNYYYYYYYYYYYYYYYN", "NYYYYYYYYYYNNYNNYNYYYYNYYNYNNYYYNNYYYNYYYNYYNYYYYY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNYNNNNNNYNNNNNNN", "NNNYYNYYYNYNNYNNYNNNYYNYYNNNNYNYNNNYNNNYNNYNYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNYYNYYYYYYYYYNNYYYYYNYYYNNYYYYNNNNYYYYNYYYYYYYYY", "YYYYNYYYYNNYYYYNYYYYYYNYYYYYYYYYNNYYYYYNYNYYNYYYYY", "NYNYYNYYYYNYNYNNYNNYYYNYYYNNNYYYNNNYYNYYYYYYYYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYYNYYYNYNNNNNYNNYYYNYNNNNNYYYNNNYNNYNNNNNYNYNYN", "NYYYYYYYYYYYYYYNYNYNNYNNYYYNYNYYNNYYYNYYYYYYYYYYYY", "NYNYYNYYYNYNNYNNYNNYYYNYYNNNNYYYNNNYNNNYNNYNYNNNYN", "NNNNYNYNNNNNNYNNNNNNNNNYNNNNNYNYNNNYNNNNNNYNNNNNYN", "NYNYYNYYYNYNNYNNYNNYYYNYYNNNNYNYNNNYYNYYNYYNNNYNYN", "NYNYYNYNYNYNNNNNYNNYYNNYYNNNNNYNNNNYYNYYNNNNYNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNYNYYYNYNNYNNYNNYYYNYYNNNNYYNNNNYYNYYYYYNYNYYYN", "NYNNYNYNYNYNNYNNYNNNNNNYNNNNNNNNNNNYNNNYNNNNNNNNYN", "NYNYNNYYYNYNNYNNYNNYYNNYYNNNNYYYNNNYYNYYYYYNYNYNNN", "NYNYYNYYNNYNNYNNYNNYYYNNNNNNNYYYNNNYNNYYNNNNYNNNYN", "NYNYNNNNYNYNNNNNYNNNNYNYYNNNNYYYNNNYYNYYNYYNYNYNYN", "NNNNNNYNNNNNNNNNYNNNNNNYNNNNNYNYNNNYNNNNNNYNNNNNNN", "NNNYNNYYYNYNNYNNYNNYYYNYYNNNNYYYNNNYYNYYYYYYYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 11441083115371;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> relations = {"NYNNYYYNYYNNNNNNYNNYYYYNNNNYYYYNYNYYNNYNNNNNYYYNYN", "NNNNYNYNNNNNNNNNYNNYYYYNNNNYNYYNNNNYNNYNNNNNYYYNYN", "YYNNYYYNYYYYYNNNYNYYYYYNNNNYYYYNYYYYNNYYYYNNYYYYYN", "YYYNYYYYYYYYYNYYYYYYYYYYYNNYYYYNYYYYNNYYYYYNYYYYYY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYNYNNNNNNNNNYNNYYYYNNNNYNYYNNNNYNNYNNNNNYYYNYN", "NNNNYNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNYYYNNN", "YYYNYYYNYYYYYNNNYNYYYYYNYNNYYYYNYYYYNNYYYYNNYYYYYN", "NYNNYYYNNNNNNNNNYNNYYYYNNNNYNYYNNNNYNNYNNNNNYYYNYN", "NYNNYYYNYNNNNNNNYNNYYYYNNNNYYYYNYNYYNNYNNNNNYYYNYN", "YYNNYYYNYYNYYNNNYNYYYYYNNNNYYYYNYYYYNNYYYYNNYYYYYN", "YYNNYYYNYYNNNNNNYNNYYYYNNNNYYYYNYNYYNNYNNNNNYYYNYN", "YYNNYYYNYYNYNNNNYNYYYYYNNNNYYYYNYNYYNNYYYYNNYYYYYN", "YYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYNYYYYYNYYYYYY", "YYYNYYYYYYYYYNNNYNYYYYYNYNNYYYYNYYYYNNYYYYNNYYYYYN", "YYYNYYYYYYYYYNYNYYYYYYYNYNNYYYYNYYYYNNYYYYYNYYYYYN", "NNNNYNYNNNNNNNNNNNNNYYYNNNNNNYYNNNNNNNYNNNNNYYYNYN", "YYYNYYYYYYYYYNYNYNYYYYYNYNNYYYYNYYYYNNYYYYNNYYYYYN", "YYNNYYYNYYNYNNNNYNNYYYYNNNNYYYYNYNYYNNYYYYNNYYYNYN", "NNNNYNYNNNNNNNNNYNNNYYYNNNNYNYYNNNNYNNYNNNNNYYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNYNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNYYYNYN", "NNNNYNYNNNNNNNNNNNNNYYNNNNNNNYNNNNNNNNNNNNNNYYYNYN", "YYYNYYYYYYYYYNYYYYYYYYYNYNNYYYYNYYYYNNYYYYYNYYYYYN", "YYYNYYYNYYYYYNNNYNYYYYYNNNNYYYYNYYYYNNYYYYNNYYYYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYNNYYYYYYYYYNNYYYYYNYYYYYY", "NNNNYNYNNNNNNNNNYNNNYYYNNNNNNYYNNNNYNNYNNNNNYYYNYN", "NYNNYYYNYNNNNNNNYNNYYYYNNNNYNYYNNNNYNNYNNNNNYYYNYN", "NNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNYNNN", "NNNNYNYNNNNNNNNNNNNNYYYNNNNNNYNNNNNNNNNNNNNNYYYNYN", "YYYYYYYYYYYYYNYYYYYYYYYYYNNYYYYNYYYYNNYYYYYNYYYYYY", "NYNNYYYNYNNNNNNNYNNYYYYNNNNYYYYNNNYYNNYNNNNNYYYNYN", "YYNNYYYNYYNYYNNNYNYYYYYNNNNYYYYNYNYYNNYYYYNNYYYYYN", "NYNNYYYNYNNNNNNNYNNYYYYNNNNYYYYNNNNYNNYNNNNNYYYNYN", "NNNNYNYNNNNNNNNNYNNNYYYNNNNNNYYNNNNNNNYNNNNNYYYNYN", "YYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYNNYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYNYYYYYY", "NNNNYNYNNNNNNNNNNNNNYYYNNNNNNYYNNNNNNNNNNNNNYYYNYN", "YYNNYYYNYYNYNNNNYNNYYYYNNNNYYYYNYNYYNNYNYNNNYYYNYN", "YYNNYYYNYYNYNNNNYNNYYYYNNNNYYYYNYNYYNNYNNNNNYYYNYN", "YYNNYYYNYYNYNNNNYNNYYYYNNNNYYYYNYNYYNNYYYNNNYYYNYN", "YYYNYYYYYYYYYNYNYYYYYYYNYNNYYYYNYYYYNNYYYYNNYYYYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYY", "NNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNYNYNNN", "NNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YYNNYYYNYYNYNNNNYNYYYYYNNNNYYYYNYNYYNNYYYYNNYYYNYN", "NNNNYNYNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNYYYNNN", "YYYNYYYYYYYYYNYYYYYYYYYYYNNYYYYNYYYYNNYYYYYNYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421312;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421312;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421312;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> relations = {"NYNNYN", "NNNNNN", "NNNNNN", "NNYNNN", "NNNNNN", "NNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> relations = {"NNNNNN", "YNYNNY", "YNNNNY", "NNNNNN", "YNYNNN", "YNNYNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> relations = {"N"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 32951280098;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> relations = {"NYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 32951280098;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 17179869184;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNN", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 562949818941440;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNN", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 562915576897536;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 281474976710656;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> relations = {"NYNNNNNNNNN", "NNNNNNNNNNN", "NNNYNNNNNNN", "NNNNNNNNNNN", "NNNNNYYYYYY", "NNNNNNYYYYY", "NNNNNNNYYYY", "NNNNNNNNYYY", "NNNNNNNNNYY", "NNNNNNNNNNY", "NNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 68;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> relations = {"NYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 20365011073;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> relations = {"NNYY", "YNYY", "NNNN", "NNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 6223407611904;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> relations = {"NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 188286357654;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 8475368;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYY", "NNNNNNNYYYYYYYYYY", "NNNNNNNNYYYYYYYYY", "NNNNNNNNNYYYYYYYY", "NNNNNNNNNNYYYYYYY", "NNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 10737418240;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 137438953472;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 4294967296;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355328;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 17179869184;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> relations = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483648;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> relations = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    CorporationSalary* pObj = new CorporationSalary();
    clock_t start = clock();
    long result = pObj->totalSalary(relations);
    clock_t end = clock();
    delete pObj;
    long expected = 19327352832;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=12179&pm=9824
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
 
class CorporationSalary
{
public:
  int n;
  vector<string> G;
  int64 f[60];
  int64 solve(int v)
  {
    int64 &ret=f[v];
    if (ret!=-1) return ret;
    ret=0;
    for (int i=0;i<n;i++) if (G[v][i]=='Y') ret+=solve(i);
    if (ret==0) ret=1;
    return ret;
  }
  int64 totalSalary(vector <string> vs)
  {
    G=vs;
    n=SIZE(G);
    memset(f,255,sizeof(f));
    int64 result=0;
    for (int i=0;i<n;i++) result+=solve(i);
    return result;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/