/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1789
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

class BaseMystery {
public:
    vector<int> getBase(string equation);
};

vector<int> BaseMystery::getBase(string equation) {
    vector<int> ret;
    return ret;
}


int test0() {
    string equation = "1+1=2";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string equation = "1+1=10";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string equation = "1+1=3";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string equation = "ABCD+211=B000";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string equation = "ABCD+322=B000";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string equation = "1+0=1";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string equation = "GHIJ+1111=HJ00";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string equation = "1234+8765=9999";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string equation = "1234+8766=10000";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string equation = "JJJJ+JJJJ=1JJJI";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string equation = "A9A9A+9A9A9=JJJJJ";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string equation = "I63+81G=1780";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string equation = "28H77+E8=7D37C";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string equation = "E8+CDJE=CEE2";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string equation = "9+4FAIH=4FAJ6";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string equation = "F4+AH1=BC5";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string equation = "JB+11H9=F9F";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string equation = "4CCF+4=4CD0";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string equation = "6+I3=I9";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string equation = "6F+I=7D";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string equation = "8+A78=A85";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string equation = "JI+A14=EDGD";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string equation = "26C+G20EA=G2323";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string equation = "7B+I23E3=I242E";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string equation = "I0HE+6=I0I1";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string equation = "9+D82=D8B";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string equation = "5+5499=549E";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string equation = "3+1=4";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string equation = "94529+58=94581";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string equation = "E+3D8=2J1A3";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string equation = "BE+7FB=875";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string equation = "BI2B2+3I7DJ=2";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string equation = "29+8=37";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string equation = "FI+64B7=6575";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string equation = "AJBD+3BF=B338";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string equation = "7H+JE6=71";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string equation = "J+B21=BF";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string equation = "27829+B=27831";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string equation = "1GGH+H36=2F14";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string equation = "IE30+I9H8=1I518";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string equation = "JH+I40=J3H";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string equation = "H1FI+73FHA=81HE9";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string equation = "ACC4+329C7=3D46B";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string equation = "JHEGI+JF1=JIEBJ";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string equation = "E+B21C=B227";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string equation = "G04+CCHJ=D8I3";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string equation = "34G74+G=1027";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string equation = "9F+2BDA=2B2D";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string equation = "C+603=60F";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string equation = "E+H7AD=H7B7";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string equation = "F248G+8AC=F2D2B";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string equation = "C3+4F6D=4G1G";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string equation = "G24+F=G32";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string equation = "DFF+E6=ED4";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string equation = "2JB2+AF58H=17";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string equation = "9+23=32";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string equation = "B0+JAGF=JB7F";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string equation = "873+1GICD=1H80G";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string equation = "BFA2E+33C=BFD66";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string equation = "D+AE=BC";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string equation = "69+7F7=84G";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string equation = "1234+8765=9999";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string equation = "0+0=0";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string equation = "1+A=0";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string equation = "1A+1=2";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string equation = "1+1=2";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string equation = "A+0=A";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string equation = "9+3=2";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string equation = "FFFF+1=FFFG";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string equation = "A+2=11";
    BaseMystery* pObj = new BaseMystery();
    clock_t start = clock();
    vector<int> result = pObj->getBase(equation);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=4598&pm=1789
********************************************************************************
#line 2 "BaseMystery.cpp" 
 
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
class BaseMystery { 
  public: 
  vector <int> getBase(string equation) { 
    vector<int> ans; 
    for(int base=2;base<=20;base++) { 
      bool valid=true; 
      int t1,t2,cur=0; 
      for(int j=0;j<equation.size();j++) { 
        char c=equation[j]; 
        if (c=='+') { 
          t1=cur; 
          cur=0; 
        } else if (c=='=') { 
          t2=cur; 
          cur=0; 
        } else { 
          int i; 
          if (isdigit(c)) 
            i=c-'0'; 
          else 
            i=c-'A'+10; 
          if (i>=base) valid=false; 
          cur=cur*base+i; 
        } 
      } 
      if (valid && t1+t2==cur) 
        ans.push_back(base); 
    } 
    return ans; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/