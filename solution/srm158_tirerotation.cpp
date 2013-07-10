/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1791
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

class TireRotation {
public:
    int getCycle(string initial, string current);
};

int TireRotation::getCycle(string initial, string current) {
    int ret;
    return ret;
}


int test0() {
    string initial = "ABCD";
    string current = "ABCD";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
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
    string initial = "ABCD";
    string current = "DCAB";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string initial = "ABCD";
    string current = "CDBA";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string initial = "ABCD";
    string current = "ABDC";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string initial = "ZAXN";
    string current = "XNAZ";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string initial = "EPZQ";
    string current = "PEQZ";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string initial = "MHXB";
    string current = "MHXB";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string initial = "AXRS";
    string current = "RSXA";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string initial = "ELAM";
    string current = "AMEL";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string initial = "BVST";
    string current = "VBTS";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
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
    string initial = "TGEC";
    string current = "GTCE";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string initial = "YLTQ";
    string current = "QTYL";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string initial = "ONMZ";
    string current = "ONMZ";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string initial = "CEOM";
    string current = "OMEC";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string initial = "IXJN";
    string current = "NJIX";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string initial = "AOFH";
    string current = "FHOA";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string initial = "RNLU";
    string current = "RNLU";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string initial = "BUMG";
    string current = "MBGU";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string initial = "FQTR";
    string current = "QFRT";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string initial = "ZATY";
    string current = "TYAZ";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string initial = "RZHX";
    string current = "RZHX";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string initial = "RNES";
    string current = "ERSN";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string initial = "EXKG";
    string current = "XEGK";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string initial = "NFHI";
    string current = "NFHI";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string initial = "MLHZ";
    string current = "LMZH";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string initial = "FJNP";
    string current = "NPJF";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string initial = "RMBN";
    string current = "NBRM";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string initial = "QXOF";
    string current = "XOFQ";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string initial = "QROB";
    string current = "BOQR";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string initial = "GQUR";
    string current = "RUGQ";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string initial = "ZECM";
    string current = "EZMC";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string initial = "GUTS";
    string current = "UGST";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string initial = "HUEW";
    string current = "UHWE";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string initial = "GEMB";
    string current = "EGBM";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string initial = "JRSU";
    string current = "JRSU";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string initial = "YVQR";
    string current = "RQYV";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string initial = "DYTQ";
    string current = "QTDY";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
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
    string initial = "LIMP";
    string current = "IMPL";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string initial = "HMKR";
    string current = "RKHM";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string initial = "GBQZ";
    string current = "GQBZ";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string initial = "AOIB";
    string current = "OABI";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string initial = "OYXF";
    string current = "OYXF";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string initial = "WXIZ";
    string current = "XWZI";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string initial = "HYFN";
    string current = "YHNF";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string initial = "RCNX";
    string current = "XNRC";
    TireRotation* pObj = new TireRotation();
    clock_t start = clock();
    int result = pObj->getCycle(initial, current);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=159446&rd=4598&pm=1791
********************************************************************************
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  Olorin.invoke(Dijkstra.spirit(), Hoare.spirit() );
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//
//  **  **  **
//  **  **  **
//  ** **  **
//  ****  **
//  ***  **
//  **  **
//  ** **
//  ****
//  **
//  **
//  **
//  ** Olorin's Black Book of Dirty Code(TM)
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
#include <iostream>
#include <cmath>
#include <climits>
#include <float.h>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef long double      ld;
typedef long long double  lld;
typedef long long      i64;
typedef vector<int>::iterator    vit;
typedef vector<string>::iterator  vis;
 
const int  MAX     = 50;
const ld  EPSILON  = 0.000000000001;
 
template<class T> T ABS(const T& x)  { return (x>0? x: -x); }
 
bool ldEqual(ld a, ld b)  { return (ABS(a-b)<EPSILON); }
bool ldLess(ld a, ld b)    { return (a-b<-EPSILON); }
 
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++  Main Class                                                     ++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class TireRotation
{
public:
int getCycle(string inS, string inC)
{
  string one = inS;
  string two = Next(one);
  string three = Next(two);
  string four = Next(three);
 
  if(inC==one)    return 1;
  if(inC==two)    return 2;
  if(inC==three)  return 3;
  if(inC==four)    return 4;
  return -1;
}
//End
 
 
private:
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
string Next(string s)
{
  string r = "";
  r+=s[3];
  r+=s[2];
  r+=s[0];
  r+=s[1];
  return r;
}
//End Next
 
 
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
string viPrint(vector<int> v)
{
  string r = "";
  int L = v.size();
  for(int i=0; i<L; i++)
  { r+=itos(v[i]); r+=" "; }
  return r;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
string vsPrint(vector<string> v)
{
  string r = "";
  int L = v.size();
  for(int i=0; i<L; i++)
  { r+=v[i]; r+="\n"; }
  return r;
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  itos:
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
string itos(int x)
{
  if(x==0)  return "0";
  bool negative=false;
  if(x<0)
  { negative=true; x*=-1; }
  string t;
  while(true)
  {
    t+=(char)((x%10)+'0');
    if(x<10)  break;
    x/=10;
  }//WEND
  string r;
  if(negative)  r+='-';
  for(int i=t.size()-1; i>=0; i--)
    r+=t[i];
  return r;
}
//End itos
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  inBase:
//  returns the string representation of the decimal x
//  converted to base B.
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
string inBase(int x, int B)
{
  bool neg=false;
  if(x<0)  { neg=true; x*=-1; }
  string t="";
  while(true)
  {
  int k = x%B;
  switch(k)
  {
  case 10:  t+="A";  break;
  case 11:  t+="B";  break;
  case 12:  t+="C";  break;
  case 13:  t+="D";  break;
  case 14:  t+="E";  break;
  case 15:  t+="F";  break;
  default:  t+=(char)(k+'0');  break;
  }//SWITCH
  if(x<B)  break;
  x/=B;
  }//WEND
  string r="";
  if(neg) r+="-";
 
  for(int i=t.size()-1; i>=0; i--)  r+=t[i];
  return r;
}
//End inBase
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  GCD:
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int GCD(int a, int b)
{
  int n;
  a= abs(a);
  b= abs(b);
  while(b)
  {
  n=b;
  b=a%b;
  a=n;
  }//WEND
  return a;
}
//End GCD
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 
string itobs(int x, int w)
{
  string t;
  while(true)
  {
  if(x==0) { t+="0"; break; }
  if(x==1) { t+="1"; break; }
 
  t+=(char)((x%2)+'0');
  x/=2;
  }//WEND
  string r;
  for(int i=t.size()-1; i>=0; i--)
  r+=t[i];
  int diff=(w-r.size());
  if(diff>0)
  {
  string f;
  for(int j=0; j<diff; j++)
    f+='0';
  f+=r;
  r=f;
  }//IF
  return r;
}
//*********************************************
//End itobs
//*********************************************
 
int bstoi(string in)
{
  int r=0;
  int p = 0;
  for(int i=in.size()-1; i>=0; i--)
  {
  if(in[i]=='1') r+=(int)( pow(2.0, p) );
  p++;
  }//FOR
  return r;
}
//*********************************************
//End bstoi
//*********************************************
 
 
};
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//++  End Main Class                                                 ++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//  EOF
//  "There is poetry in overloading"
//  Olorin.finalize();
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

********************************************************************************
*******************************************************************************/