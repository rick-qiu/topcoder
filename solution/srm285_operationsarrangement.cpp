/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5952
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

class OperationsArrangement {
public:
    string arrange(string sequence);
};

string OperationsArrangement::arrange(string sequence) {
    string ret;
    return ret;
}


int test0() {
    string sequence = "222";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2+2";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sequence = "322";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3+2*2";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sequence = "307";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3*0*7";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sequence = "391118571";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3+9*1*1*1+8+5+7*1";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sequence = "111221911212";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*2*2*1+9*1*1+2*1*2";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sequence = "00000000000000000000000000000000000000000000000000";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0*0";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sequence = "99999999999999999999999999999999999999999999999999";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sequence = "99999999999999999999999999999999999999999999999990";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*0";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sequence = "09999999999999999999999999999999999999999999999999";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "0*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sequence = "99999999999999999999999999999999999999999999999991";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9*1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sequence = "19999999999999999999999999999999999999999999999999";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sequence = "11111111111111111111111111111111111111111111111111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sequence = "11111111111111111111111111111111111111111111111119";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*9";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sequence = "91111111111111111111111111111111111111111111111111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sequence = "11111111111111111111112221111111111111111111111111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*2*2+2*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sequence = "11111211111111111111111211111111121111111111111111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*1*2*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*2*1*1*1*1*1*1*1*1*1+2*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sequence = "22222222222222222222222222222222222222222222222222";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sequence = "22222222222222222222222222222222222222222222222211";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2*1*1";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sequence = "11222222222222222222222222222222222222222222222222";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string sequence = "12121212121212121212121212121212121212121212121212";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2*1*2*1+2";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string sequence = "80";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "8*0";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sequence = "283";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2+8+3";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sequence = "248";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2+4+8";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string sequence = "2184121342";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1+8+4*1+2*1+3+4+2";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sequence = "18132641";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*8*1+3+2+6+4*1";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sequence = "2101221";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*0*1*2*2*1";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sequence = "4774";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "4+7+7+4";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sequence = "7266071";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "7*2*6*6*0*7*1";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sequence = "226";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2+6";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string sequence = "6646";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "6+6+4+6";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string sequence = "9221212122116122218481225122271119121224211";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9+2*2*1+2*1*2*1+2*2*1*1+6*1+2*2+2*1+8+4+8*1+2*2+5*1+2*2+2+7*1*1*1+9*1+2*1*2+2+4+2*1*1";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string sequence = "51931211210111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "5*1*9*3*1*2*1*1*2*1*0*1*1*1";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string sequence = "121813";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*1+8*1+3";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string sequence = "122514122121412102221411212910221";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*2*5*1*4*1*2*2*1*2*1*4*1*2*1*0*2*2*2*1*4*1*1*2*1*2*9*1*0*2*2*1";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string sequence = "11112110111281212013115141";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*2*1*1*0*1*1*1*2*8*1*2*1*2*0*1*3*1*1*5*1*4*1";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string sequence = "212161211222612122111221";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*2*1+6*1+2*1*1*2+2*2+6*1+2*1*2+2*1*1*1*2+2*1";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string sequence = "234111711116121211111125011611811427425121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*3*4*1*1*1*7*1*1*1*1*6*1*2*1*2*1*1*1*1*1*1*2*5*0*1*1*6*1*1*8*1*1*4*2*7*4*2*5*1*2*1";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string sequence = "11269112213122161111210121221126211211128";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*2*6*9*1*1*2*2*1*3*1*2*2*1*6*1*1*1*1*2*1*0*1*2*1*2*2*1*1*2*6*2*1*1*2*1*1*1*2*8";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string sequence = "825";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "8+2+5";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string sequence = "642";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "6+4+2";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string sequence = "1292";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+9+2";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string sequence = "122";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*2";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string sequence = "124113442129223221121811722";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+4*1*1+3+4+4+2*1*2+9+2*2+3+2*2*1*1+2*1+8*1*1+7+2*2";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string sequence = "211111111121121241112381611111614811122967112811";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*1*1*1*1*1*1*1*1*2*1*1+2*1*2+4*1*1*1+2+3+8*1+6*1*1*1*1*1+6*1+4+8*1*1*1+2*2+9+6+7*1*1+2+8*1*1";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string sequence = "2625611134111172";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2+6+2+5+6*1*1*1+3+4*1*1*1*1+7+2";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string sequence = "2122112211281112";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*2+2*1*1*2+2*1*1*2+8*1*1*1+2";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string sequence = "115221112119";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*5+2*2*1*1*1+2*1*1+9";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string sequence = "11111111172222221";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*1*1*1*1*1*7+2*2+2*2+2*2*1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string sequence = "215111111112311221232127";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1+5*1*1*1*1*1*1*1*1+2+3*1*1+2*2*1+2+3+2*1*2+7";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string sequence = "34891168";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3+4+8+9*1*1+6+8";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string sequence = "223111172241252115422223142118112239221112";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2+3*1*1*1*1+7+2*2+4*1+2+5+2*1*1+5+4+2*2+2*2+3*1+4+2*1*1+8*1*1+2*2+3+9+2*2*1*1*1+2";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string sequence = "2852222121421421882912142183121222122211121122";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2+8+5+2*2+2*2*1+2*1+4+2*1+4+2*1+8+8+2+9*1+2*1+4+2*1+8+3*1+2*1*2+2*2*1+2*2+2*1*1*1*2*1*1+2*2";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string sequence = "122122921267";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*2*1+2*2+9+2*1*2+6+7";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string sequence = "221111511";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2*1*1*1*1+5*1*1";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string sequence = "1771221212221222221221121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*7+7*1+2*2*1+2*1*2+2*2*1+2*2+2*2+2*1*2+2*1*1*2*1";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string sequence = "71225318121612";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "7*1+2*2+5+3*1+8*1+2*1+6*1+2";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string sequence = "72215211157215242112172218";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "7+2*2*1+5+2*1*1*1+5+7+2*1+5+2+4+2*1*1*2*1+7+2*2*1+8";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string sequence = "11191212211121112121199281223221912";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*9*1+2*1*2+2*1*1*1*2*1*1*1+2*1*2*1*1+9+9+2+8*1+2*2+3+2*2*1+9*1+2";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string sequence = "111172112182117311219";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*7+2*1*1*2*1+8+2*1*1+7+3*1*1+2*1+9";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string sequence = "123222211111126111112129825336222811212121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+3+2*2+2*2*1*1*1*1*1*1+2+6*1*1*1*1*1+2*1*2+9+8+2+5+3+3+6+2*2+2+8*1*1+2*1*2*1+2*1";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string sequence = "12211222";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*2*1*1+2*2+2";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string sequence = "212222122211122111222112822";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*2+2*2+2*1*2+2*2*1*1*1+2*2*1*1*1+2*2+2*1*1*2+8+2*2";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string sequence = "619121121511121311211111115182222121112211";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "6*1+9*1+2*1*1*2*1+5*1*1*1+2*1+3*1*1+2*1*1*1*1*1*1*1+5*1+8+2*2+2*2*1+2*1*1*1*2+2*1*1";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string sequence = "221";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2*1";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string sequence = "21115121227152111111122851216222411";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*1*1+5*1+2*1*2+2+7*1+5+2*1*1*1*1*1*1*1*2+2+8+5*1+2*1+6+2*2+2+4*1*1";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string sequence = "111117222423221112121112111276221287";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*1*7+2*2+2+4+2+3+2*2*1*1*1+2*1*2*1*1*1+2*1*1*1*2+7+6+2*2*1+2+8+7";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string sequence = "212251422412111721182621111122121119211211612";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*2+2+5*1+4+2*2+4*1+2*1*1*1+7+2*1*1+8+2+6+2*1*1*1*1*1*2+2*1*2*1*1*1+9+2*1*1*2*1*1+6*1+2";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string sequence = "12122227191231131112211172211171128363212281422182";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*1*2+2*2+2+7*1+9*1+2+3*1*1+3*1*1*1+2*2*1*1*1+7+2*2*1*1*1+7*1*1+2+8+3+6+3+2*1*2+2+8*1+4+2*2*1+8+2";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string sequence = "1211291289522291121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*1*1*2+9*1+2+8+9+5+2*2+2+9*1*1+2*1";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string sequence = "21312214212421471221121116116111111121421121125";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1+3*1+2*2*1+4+2*1*2+4+2*1+4+7*1+2*2*1*1+2*1*1*1+6*1*1+6*1*1*1*1*1*1*1+2*1+4+2*1*1*2*1*1+2+5";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string sequence = "2219121211112121211511111514121161211921111121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2*1+9*1+2*1*2*1*1*1*1+2*1*2*1+2*1*1+5*1*1*1*1*1+5*1+4*1+2*1*1+6*1+2*1*1+9+2*1*1*1*1*1*2*1";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string sequence = "1112226926112816112631122221281171411119226";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*2*2+2+6+9+2+6*1*1+2+8*1+6*1*1+2+6+3*1*1+2*2+2*2*1+2+8*1*1+7*1+4*1*1*1*1+9+2*2+6";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string sequence = "121628221122293211111218291122121291521112111225";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*1+6+2+8+2*2*1*1+2*2+2+9+3+2*1*1*1*1*1*2*1+8+2+9*1*1+2*2*1+2*1*2+9*1+5+2*1*1*1*2*1*1*1+2*2+5";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string sequence = "122111824111821111152221111221233191271162";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*2*1*1*1+8+2+4*1*1*1+8+2*1*1*1*1*1+5+2*2+2*1*1*1*1*2+2*1*2+3+3*1+9*1+2+7*1*1+6+2";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string sequence = "11252121213212813111142222111122141297136121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*2+5+2*1*2*1+2*1+3+2*1*2+8*1+3*1*1*1*1+4+2*2+2*2*1*1*1*1+2*2*1+4*1+2+9+7*1+3+6*1+2*1";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string sequence = "2162211179241241222221242236512222666918";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1+6+2*2*1*1*1+7+9+2+4*1+2+4*1+2*2+2*2+2*1*2+4+2*2+3+6+5*1+2*2+2*2+6+6+6+9*1+8";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string sequence = "3232121162121922852212182981121714162111181211422";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3+2+3+2*1*2*1*1+6+2*1*2*1+9+2*2+8+5+2*2*1+2*1+8+2+9+8*1*1+2*1+7*1+4*1+6+2*1*1*1*1+8*1+2*1*1+4+2*2";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string sequence = "818111116111222111511111281141121222111911192";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "8*1+8*1*1*1*1*1+6*1*1*1+2*2+2*1*1*1+5*1*1*1*1*1+2+8*1*1+4*1*1+2*1*2+2*2*1*1*1+9*1*1*1+9+2";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string sequence = "1211421221621412213828431221144282811121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*1*1+4+2*1*2+2*1+6+2*1+4*1+2*2*1+3+8+2+8+4+3*1+2*2*1*1+4+4+2+8+2+8*1*1*1+2*1";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string sequence = "47114212112221442122511121122323521217111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "4+7*1*1+4+2*1*2*1*1+2*2+2*1+4+4+2*1*2+2+5*1*1*1+2*1*1*2+2+3+2+3+5+2*1*2*1+7*1*1*1";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string sequence = "11181125111111211222121112121121511219812222191";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*8*1*1+2+5*1*1*1*1*1*1+2*1*1*2+2*2*1+2*1*1*1*2*1+2*1*1*2*1+5*1*1+2*1+9+8*1+2*2+2*2*1+9*1";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string sequence = "4121141111712112111982111616812112411419";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "4*1+2*1*1+4*1*1*1*1+7*1+2*1*1*2*1*1*1+9+8+2*1*1*1+6*1+6+8*1+2*1*1*2+4*1*1+4*1+9";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string sequence = "52111221121211212121111111171211125222221622118211";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "5+2*1*1*1*2+2*1*1*2*1+2*1*1*2*1+2*1*2*1*1*1*1*1*1*1*1+7*1+2*1*1*1*2+5+2*2+2*2+2*1+6+2*2*1*1+8+2*1*1";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string sequence = "1611112217321621221111213419111221112118181111122";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*6*1*1*1*1+2*2*1+7+3+2*1+6+2*1*2+2*1*1*1*1*2*1+3+4*1+9*1*1*1+2*2*1*1*1+2*1*1+8*1+8*1*1*1*1*1+2*2";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string sequence = "2211111112212311228118121622115312121121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2*1*1*1*1*1*1*1+2*2*1+2+3*1*1+2*2+8*1*1+8*1+2*1+6+2*2*1*1+5+3*1+2*1*2*1*1+2*1";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string sequence = "12412111121221151321815211221111121151222123411291";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+4*1+2*1*1*1*1*2*1+2*2*1*1+5*1+3+2*1+8*1+5+2*1*1*2+2*1*1*1*1*1*2*1*1+5*1+2*2+2*1*2+3+4*1*1+2+9*1";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string sequence = "716221211212142777132112147112128121111522121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "7*1+6+2*2*1+2*1*1*2*1+2*1+4+2+7+7+7*1+3+2*1*1*2*1+4+7*1*1+2*1*2+8*1+2*1*1*1*1+5+2*2*1+2*1";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string sequence = "62122224121222231112212167212211181111512";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "6+2*1*2+2*2+2+4*1+2*1*2+2*2+2+3*1*1*1+2*2*1+2*1+6+7+2*1*2+2*1*1*1+8*1*1*1*1+5*1+2";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string sequence = "661523112121526211112119911112117822112117121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "6+6*1+5+2+3*1*1+2*1*2*1+5+2+6+2*1*1*1*1*2*1*1+9+9*1*1*1*1+2*1*1+7+8+2*2*1*1+2*1*1+7*1+2*1";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string sequence = "8121211212211171811221449112218112722113112217212";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "8*1+2*1*2*1*1+2*1*2+2*1*1*1+7*1+8*1*1+2*2*1+4+4+9*1*1+2*2*1+8*1*1+2+7+2*2*1*1+3*1*1+2*2*1+7+2*1*2";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string sequence = "21123521181184211726622124112196113241221112";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*1*2+3+5+2*1*1+8*1*1+8+4+2*1*1+7+2+6+6+2*2*1+2+4*1*1+2*1+9+6*1*1+3+2+4*1+2*2*1*1*1+2";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string sequence = "61117211115626131121121782222161211121112211122112";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "6*1*1*1+7+2*1*1*1*1+5+6+2+6*1+3*1*1+2*1*1*2*1+7+8+2*2+2*2*1+6*1+2*1*1*1*2*1*1*1+2*2*1*1*1+2*2*1*1+2";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string sequence = "12111962112621111827712182113112142182157112";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*1*1*1+9+6+2*1*1*2+6+2*1*1*1*1+8+2+7+7*1+2*1+8+2*1*1+3*1*1+2*1+4+2*1+8+2*1+5+7*1*1+2";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string sequence = "1261911282122211112229121812128117162112122";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+6*1+9*1*1+2+8+2*1*2+2*2*1*1*1*1+2*2+2+9*1+2*1+8*1+2*1*2+8*1*1+7*1+6+2*1*1*2*1+2*2";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string sequence = "125111111212127922913212121211412111112811231";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+5*1*1*1*1*1*1+2*1*2*1+2+7+9+2*2+9*1+3+2*1*2*1+2*1*2*1*1+4*1+2*1*1*1*1*1*2+8*1*1+2+3*1";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string sequence = "11222111811413123123122228111121222412111171";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*2*2+2*1*1*1+8*1*1+4*1+3*1+2+3*1+2+3*1+2*2+2*2+8*1*1*1*1+2*1*2+2*2+4*1+2*1*1*1*1+7*1";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string sequence = "112111211111111327121111122121114122422283171121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*2*1*1*1*2*1*1*1*1*1*1*1*1+3+2+7*1+2*1*1*1*1*1*2+2*1*2*1*1*1+4*1+2*2+4+2*2+2+8+3*1+7*1*1+2*1";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string sequence = "2111151185112722121225221194113112211221812218";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*1*1*1*1+5*1*1+8+5*1*1+2+7+2*2*1+2*1*2+2+5+2*2*1*1+9+4*1*1+3*1*1+2*2*1*1+2*2*1+8*1+2*2*1+8";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string sequence = "2211711235132121122125221212191222211721111111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2*1*1+7*1*1+2+3+5*1+3+2*1*2*1*1+2*2*1+2+5+2*2*1+2*1*2*1+9*1+2*2+2*2*1*1+7+2*1*1*1*1*1*1*1";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string sequence = "12221812211121121111229211292112111112111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*2+2*1+8*1+2*2*1*1*1+2*1*1*2*1*1*1*1+2*2+9+2*1*1*2+9+2*1*1*2*1*1*1*1*1+2*1*1*1";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string sequence = "111221911212";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*2*2*1+9*1*1+2*1*2";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string sequence = "1112222222222222221114222134324333321121";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*1*1*1+4+2*2+2*1+3+4+3+2+4+3+3+3+3+2*1*1*2*1";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string sequence = "01234567899876543210123456789009876543219988776655";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "0*1*2*3*4*5*6*7*8*9*9*8*7*6*5*4*3*2*1*0*1*2*3*4*5*6*7*8*9*0*0*9*8*7*6*5*4*3*2*1*9*9*8*8*7*7*6*6*5*5";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string sequence = "99999900999";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9*9*9*9*9*9*0*0*9*9*9";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string sequence = "32454565756724136568765112645341152342222264235234";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3+2+4+5+4+5+6+5+7+5+6+7+2+4*1+3+6+5+6+8+7+6+5*1*1+2+6+4+5+3+4*1*1+5+2+3+4+2*2+2*2+2+6+4+2+3+5+2+3+4";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string sequence = "12345678901234567890123456789012345678901234567890";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*3*4*5*6*7*8*9*0*1*2*3*4*5*6*7*8*9*0*1*2*3*4*5*6*7*8*9*0*1*2*3*4*5*6*7*8*9*0*1*2*3*4*5*6*7*8*9*0";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string sequence = "99999999999999999999999999999999999099999999999999";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*0*9*9*9*9*9*9*9*9*9*9*9*9*9*9";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string sequence = "99999999999999999999999999999999999999999999999990";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*0";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string sequence = "99999999999999999999999999999999999999999999999999";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string sequence = "22222333335555511111111111111111111111111111111111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2+2*2+2+3+3+3+3+3+5+5+5+5+5*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1*1";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string sequence = "483274892340000392102";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "4*8*3*2*7*4*8*9*2*3*4*0*0*0*0*3*9*2*1*0*2";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string sequence = "22";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string sequence = "112550";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*2*5*5*0";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string sequence = "1222112";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*2+2*1*1*2";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string sequence = "999999999999999999999999999999999999990";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*9*0";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string sequence = "12345678911234567891123456789112345678911234567891";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+3+4+5+6+7+8+9*1*1+2+3+4+5+6+7+8+9*1*1+2+3+4+5+6+7+8+9*1*1+2+3+4+5+6+7+8+9*1*1+2+3+4+5+6+7+8+9*1";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string sequence = "113";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*3";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string sequence = "123121231231232344345645";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+3*1+2*1*2+3*1+2+3*1+2+3+2+3+4+4+3+4+5+6+4+5";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string sequence = "99990";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9*9*9*9*0";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string sequence = "12121121222111212121122598";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2*1*2*1*1+2*1*2+2*2*1*1*1+2*1*2*1+2*1*1*2+2+5+9+8";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string sequence = "12345678987654331231312312312312312434543645645674";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2+3+4+5+6+7+8+9+8+7+6+5+4+3+3*1+2+3*1+3*1+2+3*1+2+3*1+2+3*1+2+3*1+2+4+3+4+5+4+3+6+4+5+6+4+5+6+7+4";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string sequence = "12";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*2";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string sequence = "392570";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3*9*2*5*7*0";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string sequence = "3221123121321434242132234321421143912341324";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3+2*2*1*1+2+3*1+2*1+3+2*1+4+3+4+2+4+2*1+3+2*2+3+4+3+2*1+4+2*1*1+4+3+9*1+2+3+4*1+3+2+4";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string sequence = "30";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "3*0";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string sequence = "999999999999999999999999999999999999";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9+9";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string sequence = "11111191111111";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*1*1*1*9*1*1*1*1*1*1*1";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string sequence = "19";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*9";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string sequence = "11122191121288238741268822211182112543311133451191";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*1*1*2*2*1+9*1*1+2*1*2+8+8+2+3+8+7+4*1+2+6+8+8+2*2+2*1*1*1+8+2*1*1*2+5+4+3+3*1*1*1+3+3+4+5*1*1+9*1";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string sequence = "2307";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*3*0*7";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string sequence = "5550";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "5*5*5*0";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string sequence = "14";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "1*4";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string sequence = "98654859874569523687946546456456";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "9+8+6+5+4+8+5+9+8+7+4+5+6+9+5+2+3+6+8+7+9+4+6+5+4+6+4+5+6+4+5+6";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string sequence = "222222";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2+2*2+2*2";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string sequence = "222222222222222222222";
    OperationsArrangement* pObj = new OperationsArrangement();
    clock_t start = clock();
    string result = pObj->arrange(sequence);
    clock_t end = clock();
    delete pObj;
    string expected = "2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2*2+2";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19847704&rd=8082&pm=5952
********************************************************************************
#include <string> 
#include <vector> 
#include <sstream> 
 
using namespace std; 
 
class OperationsArrangement 
 {  
 public:  
     string arrange(string sequence)  
     {  
       string out; 
       int sum = (int)(sequence[0] - '0'); 
       out.push_back(sequence[0]); 
       bool iszero = false; 
       for (int i=0; i<sequence.size();i++) 
         if (sequence[i]=='0') 
           iszero = true; 
 
       if (iszero) 
       { 
         for (int i=1; i<sequence.size();i++) 
         { 
           out.push_back('*'); 
           out.push_back(sequence[i]); 
         } 
         return out; 
       } 
 
       for (int i=1; i<sequence.size();i++) 
       { 
         int nn = (int)(sequence[i] - '0'); 
         if (sum*nn <= sum+nn) 
         { 
           sum *= nn; 
           out.push_back('*'); 
           out.push_back(sequence[i]); 
         } 
         else  
         { 
           sum = (int)(sequence[i] - '0'); 
           out.push_back('+'); 
           out.push_back(sequence[i]); 
         } 
          
       } 
       return out; 
     }  
 
   
  
 };  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/