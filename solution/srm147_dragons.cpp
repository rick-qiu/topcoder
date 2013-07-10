/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1520
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

class Dragons {
public:
    string snaug(vector<int> initialFood, int rounds);
};

string Dragons::snaug(vector<int> initialFood, int rounds) {
    string ret;
    return ret;
}


int test0() {
    vector<int> initialFood = {0, 0, 4, 0, 0, 0};
    int rounds = 2;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> initialFood = {0, 0, 4, 0, 0, 0};
    int rounds = 3;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1/2";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> initialFood = {1000, 1000, 1000, 1000, 1000, 1000};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1000";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> initialFood = {0, 0, 4, 0, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "5864062014805/8796093022208";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> initialFood = {1, 0, 0, 0, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "11728124029611/70368744177664";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> initialFood = {1, 2, 3, 4, 5, 6};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "7/2";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> initialFood = {3, 4, 1, 2, 5, 6};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "61572651155457/17592186044416";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> initialFood = {1000, 0, 0, 0, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1466015503701375/8796093022208";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> initialFood = {999, 0, 0, 0, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "11716395905581389/70368744177664";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> initialFood = {0, 0, 999, 0, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "5858197952790195/35184372088832";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> initialFood = {0, 0, 0, 0, 0, 0};
    int rounds = 10;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> initialFood = {999, 998, 997, 996, 995, 994};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1993/2";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> initialFood = {2, 2, 3, 3, 4, 4};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> initialFood = {3, 3, 2, 2, 4, 4};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "105553116266497/35184372088832";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> initialFood = {1, 10, 100, 2, 20, 200};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "3905465301860361/70368744177664";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> initialFood = {0, 1, 0, 0, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "11728124029611/70368744177664";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> initialFood = {0, 0, 1, 0, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "5864062014805/35184372088832";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> initialFood = {0, 0, 0, 1, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "5864062014805/35184372088832";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> initialFood = {0, 0, 0, 0, 1, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "11728124029611/70368744177664";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> initialFood = {0, 0, 0, 0, 0, 1};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "11728124029611/70368744177664";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> initialFood = {128, 256, 384, 512, 640, 768};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "448";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> initialFood = {1, 0, 0, 0, 0, 0};
    int rounds = 1;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1/4";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> initialFood = {0, 1, 0, 0, 0, 0};
    int rounds = 1;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1/4";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> initialFood = {0, 0, 1, 0, 0, 0};
    int rounds = 1;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> initialFood = {0, 0, 0, 0, 1, 0};
    int rounds = 1;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1/4";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> initialFood = {0, 0, 0, 0, 0, 1};
    int rounds = 1;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "1/4";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> initialFood = {22, 33, 44, 11, 4, 4};
    int rounds = 0;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "44";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> initialFood = {5, 6, 1, 2, 3, 4};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "61572651155457/17592186044416";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> initialFood = {3, 5, 7, 11, 13, 17};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "328387472829099/35184372088832";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> initialFood = {3, 4, 5, 6, 1, 2};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "61572651155455/17592186044416";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> initialFood = {200, 1000, 999, 977, 13, 337};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "20676682664203205/35184372088832";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> initialFood = {0, 0, 1, 0, 0, 0};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "5864062014805/35184372088832";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> initialFood = {200, 1000, 999, 977, 337, 13};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "20676682664203205/35184372088832";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> initialFood = {6, 5, 1, 3, 2, 4};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "246290604621827/70368744177664";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> initialFood = {46, 21, 13, 17, 14, 33};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "844424930131977/35184372088832";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> initialFood = {200, 999, 1000, 13, 937, 133};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "38491703065182289/70368744177664";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> initialFood = {7, 11, 13, 17, 19, 27};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "275610914695851/17592186044416";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> initialFood = {0, 1000, 1000, 1000, 1000, 1000};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "7330077518506625/8796093022208";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> initialFood = {999, 1000, 200, 133, 13, 923};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "38327509328768415/70368744177664";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> initialFood = {1, 3, 5, 7, 9, 11};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "6";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> initialFood = {1, 2, 3, 4, 5, 6};
    int rounds = 45;
    Dragons* pObj = new Dragons();
    clock_t start = clock();
    string result = pObj->snaug(initialFood, rounds);
    clock_t end = clock();
    delete pObj;
    string expected = "7/2";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=262936&rd=4540&pm=1520
********************************************************************************
// Includes
 
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
// Macros
 
typedef long double ld;
typedef long long ll;
template <class T> T MIN(const T &x, const T &y) {return x<y? x:y;}
template <class T> T MAX(const T &x, const T &y) {return x>y? x:y;}
template <class T> T ABS(const T &x) {return x>0? x:-x;}
template <class T> void SWAP(T &x, T &y) {T z=x; x=y; y=z;}
const ld PI = 3.14159265358979323846;
const ld EPSILON = 0.000000000001;
 
// General parsing/formatting
 
ll toInt(string s) {stringstream in(s, ios_base::in); ll result; in >> result; return result;}
ld toDouble(string s) {stringstream in(s, ios_base::in); ld result; in >> result; return result;}
string toString(ll n) {stringstream out(ios_base::out); out << n; return out.str();}
string toString(ld d, int precision = -1) {stringstream out(ios_base::out); if (precision >= 0) {out.precision(precision); out.setf(ios::fixed);} out << d; string s=out.str();
  bool nonZero=false; for(int i=0;i<s.size();i++) if (s[i]!='0' && s[i]!='-' && s[i]!='.') nonZero=true; if (s[0]=='-' && !nonZero) return s.substr(1); else return s;}
string toString(int n) {return toString((ll)(n));}
string toString(char ch) {string s="?"; s[0]=ch; return s;}
string toString(const string &s) {return s;}
template <class U, class V> string toString(pair<U,V> u) {return toString("(") + toString(u.first) + "," + toString(u.second) + ")";}
template <class T> string toString(const vector<T> &v, string delim=",") {string s="("; for(int i=0;i<v.size();i++) {if(i!=0)s+=delim; s += toString(v[i]);} return s+")";}
template <class T> string toString(const set<T> &t, string delim=",") {string s="{"; for(typename set<T>::const_iterator it=t.begin(); it!=t.end(); it++) {if(it!=t.begin())s+=delim+" "; s += toString(*it);} return s+"}";}
template <class U, class V> string toString(const map<U,V> &m, string delim=",") {string s="{"; for(typename map<U,V>::const_iterator it=m.begin(); it!=m.end(); it++) {if(it!=m.begin())s+=delim+" "; s += toString(it->first) + "->" + toString(it->second);} return s+"}";}
int getNumWords(string s, string delim=" ") {int count=0; for(int i=0; i<s.size(); i++) if ( (i==0 || delim.find(s[i-1])!=-1) && delim.find(s[i]) == -1) count++; return count;}
string getWord(string s, int j, string delim=" ") {int count=0; string t; for(int i=0; i<s.size(); i++) {if (delim.find(s[i])==-1) t += s[i]; else {if (i!=0 && delim.find(s[i-1]) == -1) count++; if(count>j) return t; t="";}} return t;}
string getDelimiter(string s, int j, string delim=" ") {int count=0; string t; for(int i=0; i<s.size(); i++) {if (delim.find(s[i])!=-1) t += s[i]; else {if (i==0 || delim.find(s[i-1]) != -1) count++; if(count>j) return t; t="";}} return t;}
 
// Basic math
 
bool isEqual(ld v1, ld v2) {return ABS(v1-v2)<EPSILON;}
bool isLess(ld v1, ld v2) {return v1-v2<-EPSILON;}
ll gcd(ll n1, ll n2) {return n2==0? ABS(n1) : gcd(n2,n1%n2);}
ll lcm(ll n1, ll n2) {return n1==0 && n2==0? 0 : ABS(n1*n2)/gcd(n1,n2);}
 
struct Fraction {
  Fraction(ll n, ll d) {ll g=gcd(n,d); num = n/g; den = d/g; if (den<0) {num=-num; den=-den;}}
  Fraction(ll n=0) {num=n; den=1;}
  ll num, den;
 
  Fraction operator+(const Fraction &rhs) const {ll g=gcd(rhs.den,den); return Fraction(num*(rhs.den/g)+(den/g)*rhs.num,den*(rhs.den/g));}
  Fraction operator-(const Fraction &rhs) const {ll g=gcd(rhs.den,den); return Fraction(num*(rhs.den/g)-(den/g)*rhs.num,den*(rhs.den/g));}
  Fraction operator-() const {return Fraction(-num,den);}
  Fraction operator*(const Fraction &rhs) const {ll g1=gcd(rhs.den,num); ll g2=gcd(rhs.num,den); return Fraction( (num/g1)*(rhs.num/g2), (den/g2)*(rhs.den/g1));}
  Fraction operator/(const Fraction &rhs) const {ll g1=gcd(rhs.num,num); ll g2=gcd(rhs.den,den); return Fraction( (num/g1)*(rhs.den/g2), (den/g2)*(rhs.num/g1));}
};
ld toDouble(const Fraction &f) {return ((ld)f.num) / ((ld)f.den);}
string toString(const Fraction &f) {return toString(f.num) + "/" + toString(f.den);}
bool operator<(const Fraction &f1, const Fraction &f2) {return toDouble(f1) < toDouble(f2);}
bool operator!=(const Fraction &f1, const Fraction &f2) {return f1.num!=f2.num || f1.den!=f2.den;}
bool operator==(const Fraction &f1, const Fraction &f2) {return f1.num==f2.num && f1.den==f2.den;}
 
// Real code
 
class Dragons 
{
  public:
  string snaug(vector <int> initialFood, int rounds) 
  {
    int adj[6][6] = {{0,0,1,1,1,1},
      {0,0,1,1,1,1},
      {1,1,0,0,1,1},
      {1,1,0,0,1,1},
      {1,1,1,1,0,0},
      {1,1,1,1,0,0}};
    int i, j;
      
    vector<Fraction> food;
    for (i = 0; i < 6; i++)
    food.push_back(Fraction(initialFood[i],1));
    
    for (int t = 0; t< rounds; t++) {
      cout << toString(food);      
      vector<Fraction> newFood(6,Fraction(0,1));
      for (i = 0; i < 6; i++)
      for (j = 0; j < 6; j++)
      if (adj[i][j]) newFood[i] = newFood[i] + food[j]/4;
      food = newFood;
    }
    cout << toString(food);  
    
    if (food[2].den == 1) return toString(food[2].num);
    else return toString(food[2]);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/