/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8561
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

class QuasiLatinSquares {
public:
    vector<string> makeSquare(int n, int d);
};

vector<string> QuasiLatinSquares::makeSquare(int n, int d) {
    vector<string> ret;
    return ret;
}


int test0() {
    int n = 3;
    int d = 3;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 2", "1 2 0", "2 0 1"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 5;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 1", "0 0 0 0 1", "0 0 0 0 1", "0 0 0 0 1", "1 1 1 1 0"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 5;
    int d = 4;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 1 2 3", "0 0 1 2 3", "1 1 0 3 2", "2 2 3 0 1", "3 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 9;
    int d = 7;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 1 2 3 4 5 6", "0 0 0 1 2 3 4 5 6", "0 0 0 1 2 3 4 5 6", "1 1 1 0 3 2 5 6 4", "2 2 2 3 0 1 6 4 5", "3 3 3 4 5 6 0 1 2", "4 4 4 2 6 5 1 0 3", "5 5 5 6 1 4 2 3 0", "6 6 6 5 4 0 3 2 1"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 10;
    int d = 10;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 2 3 4 5 6 7 8 9", "1 0 3 2 5 4 7 6 9 8", "2 3 0 1 6 7 8 9 4 5", "3 2 1 0 7 6 9 8 5 4", "4 5 6 7 8 9 0 1 2 3", "5 4 7 6 9 8 1 0 3 2", "6 7 8 9 2 3 4 5 0 1", "7 6 9 8 3 2 5 4 1 0", "8 9 4 5 0 1 2 3 6 7", "9 8 5 4 1 0 3 2 7 6"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 2;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0", "0 0"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 2;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1", "1 0"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 4;
    int d = 3;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 1 2", "0 0 1 2", "1 1 2 0", "2 2 0 1"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 4;
    int d = 4;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 2 3", "1 0 3 2", "2 3 0 1", "3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 5;
    int d = 3;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 1 2", "0 0 0 1 2", "0 0 0 1 2", "1 1 1 2 0", "2 2 2 0 1"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 5;
    int d = 5;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 2 3 4", "1 0 3 4 2", "2 3 4 0 1", "3 4 1 2 0", "4 2 0 1 3"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 6;
    int d = 4;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 1 2 3", "0 0 0 1 2 3", "0 0 0 1 2 3", "1 1 1 0 3 2", "2 2 2 3 0 1", "3 3 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 6;
    int d = 6;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 2 3 4 5", "1 0 3 2 5 4", "2 3 4 5 0 1", "3 2 5 4 1 0", "4 5 0 1 2 3", "5 4 1 0 3 2"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 7;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0", "0 0 0 0 0 0 0", "0 0 0 0 0 0 0", "0 0 0 0 0 0 0", "0 0 0 0 0 0 0", "0 0 0 0 0 0 0", "0 0 0 0 0 0 0"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 7;
    int d = 5;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 1 2 3 4", "0 0 0 1 2 3 4", "0 0 0 1 2 3 4", "1 1 1 0 3 4 2", "2 2 2 3 4 0 1", "3 3 3 4 1 2 0", "4 4 4 2 0 1 3"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 7;
    int d = 6;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 1 2 3 4 5", "0 0 1 2 3 4 5", "1 1 0 3 2 5 4", "2 2 3 4 5 0 1", "3 3 2 5 4 1 0", "4 4 5 0 1 2 3", "5 5 4 1 0 3 2"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 7;
    int d = 7;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 2 3 4 5 6", "1 0 3 2 5 6 4", "2 3 0 1 6 4 5", "3 4 5 6 0 1 2", "4 2 6 5 1 0 3", "5 6 1 4 2 3 0", "6 5 4 0 3 2 1"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 8;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 1", "1 1 1 1 1 1 1 0"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 8;
    int d = 5;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 1 2 3 4", "0 0 0 0 1 2 3 4", "0 0 0 0 1 2 3 4", "0 0 0 0 1 2 3 4", "1 1 1 1 0 3 4 2", "2 2 2 2 3 4 0 1", "3 3 3 3 4 1 2 0", "4 4 4 4 2 0 1 3"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 8;
    int d = 6;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 1 2 3 4 5", "0 0 0 1 2 3 4 5", "0 0 0 1 2 3 4 5", "1 1 1 0 3 2 5 4", "2 2 2 3 4 5 0 1", "3 3 3 2 5 4 1 0", "4 4 4 5 0 1 2 3", "5 5 5 4 1 0 3 2"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 8;
    int d = 7;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 1 2 3 4 5 6", "0 0 1 2 3 4 5 6", "1 1 0 3 2 5 6 4", "2 2 3 0 1 6 4 5", "3 3 4 5 6 0 1 2", "4 4 2 6 5 1 0 3", "5 5 6 1 4 2 3 0", "6 6 5 4 0 3 2 1"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 8;
    int d = 8;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 2 3 4 5 6 7", "1 0 3 2 5 4 7 6", "2 3 0 1 6 7 4 5", "3 2 1 0 7 6 5 4", "4 5 6 7 0 1 2 3", "5 4 7 6 1 0 3 2", "6 7 4 5 2 3 0 1", "7 6 5 4 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 9;
    int d = 3;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 1 2", "1 1 1 1 1 1 1 2 0", "2 2 2 2 2 2 2 0 1"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 9;
    int d = 4;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 1 2 3", "1 1 1 1 1 1 0 3 2", "2 2 2 2 2 2 3 0 1", "3 3 3 3 3 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 9;
    int d = 5;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 1 2 3 4", "0 0 0 0 0 1 2 3 4", "0 0 0 0 0 1 2 3 4", "0 0 0 0 0 1 2 3 4", "0 0 0 0 0 1 2 3 4", "1 1 1 1 1 0 3 4 2", "2 2 2 2 2 3 4 0 1", "3 3 3 3 3 4 1 2 0", "4 4 4 4 4 2 0 1 3"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 9;
    int d = 6;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 1 2 3 4 5", "0 0 0 0 1 2 3 4 5", "0 0 0 0 1 2 3 4 5", "0 0 0 0 1 2 3 4 5", "1 1 1 1 0 3 2 5 4", "2 2 2 2 3 4 5 0 1", "3 3 3 3 2 5 4 1 0", "4 4 4 4 5 0 1 2 3", "5 5 5 5 4 1 0 3 2"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 10;
    int d = 8;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 1 2 3 4 5 6 7", "0 0 0 1 2 3 4 5 6 7", "0 0 0 1 2 3 4 5 6 7", "1 1 1 0 3 2 5 4 7 6", "2 2 2 3 0 1 6 7 4 5", "3 3 3 2 1 0 7 6 5 4", "4 4 4 5 6 7 0 1 2 3", "5 5 5 4 7 6 1 0 3 2", "6 6 6 7 4 5 2 3 0 1", "7 7 7 6 5 4 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 9;
    int d = 8;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 1 2 3 4 5 6 7", "0 0 1 2 3 4 5 6 7", "1 1 0 3 2 5 4 7 6", "2 2 3 0 1 6 7 4 5", "3 3 2 1 0 7 6 5 4", "4 4 5 6 7 0 1 2 3", "5 5 4 7 6 1 0 3 2", "6 6 7 4 5 2 3 0 1", "7 7 6 5 4 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 9;
    int d = 9;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 1 2 3 4 5 6 7 8", "1 0 3 2 5 4 7 8 6", "2 3 0 1 6 7 8 4 5", "3 2 1 0 7 8 5 6 4", "4 5 6 7 8 0 1 2 3", "5 4 7 8 0 6 2 3 1", "6 7 8 4 1 2 3 5 0", "7 8 5 6 3 1 4 0 2", "8 6 4 5 2 3 0 1 7"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 10;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 10;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 1", "1 1 1 1 1 1 1 1 1 0"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 10;
    int d = 3;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 0 1 2", "0 0 0 0 0 0 0 0 1 2", "1 1 1 1 1 1 1 1 2 0", "2 2 2 2 2 2 2 2 0 1"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 10;
    int d = 4;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 0 1 2 3", "0 0 0 0 0 0 0 1 2 3", "1 1 1 1 1 1 1 0 3 2", "2 2 2 2 2 2 2 3 0 1", "3 3 3 3 3 3 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 10;
    int d = 5;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 1 2 3 4", "0 0 0 0 0 0 1 2 3 4", "0 0 0 0 0 0 1 2 3 4", "0 0 0 0 0 0 1 2 3 4", "0 0 0 0 0 0 1 2 3 4", "0 0 0 0 0 0 1 2 3 4", "1 1 1 1 1 1 0 3 4 2", "2 2 2 2 2 2 3 4 0 1", "3 3 3 3 3 3 4 1 2 0", "4 4 4 4 4 4 2 0 1 3"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 10;
    int d = 6;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 1 2 3 4 5", "0 0 0 0 0 1 2 3 4 5", "0 0 0 0 0 1 2 3 4 5", "0 0 0 0 0 1 2 3 4 5", "0 0 0 0 0 1 2 3 4 5", "1 1 1 1 1 0 3 2 5 4", "2 2 2 2 2 3 4 5 0 1", "3 3 3 3 3 2 5 4 1 0", "4 4 4 4 4 5 0 1 2 3", "5 5 5 5 5 4 1 0 3 2"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 10;
    int d = 7;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 1 2 3 4 5 6", "0 0 0 0 1 2 3 4 5 6", "0 0 0 0 1 2 3 4 5 6", "0 0 0 0 1 2 3 4 5 6", "1 1 1 1 0 3 2 5 6 4", "2 2 2 2 3 0 1 6 4 5", "3 3 3 3 4 5 6 0 1 2", "4 4 4 4 2 6 5 1 0 3", "5 5 5 5 6 1 4 2 3 0", "6 6 6 6 5 4 0 3 2 1"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 10;
    int d = 9;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 1 2 3 4 5 6 7 8", "0 0 1 2 3 4 5 6 7 8", "1 1 0 3 2 5 4 7 8 6", "2 2 3 0 1 6 7 8 4 5", "3 3 2 1 0 7 8 5 6 4", "4 4 5 6 7 8 0 1 2 3", "5 5 4 7 8 0 6 2 3 1", "6 6 7 8 4 1 2 3 5 0", "7 7 8 5 6 3 1 4 0 2", "8 8 6 4 5 2 3 0 1 7"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 3;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0", "0 0 0", "0 0 0"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 3;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 1", "0 0 1", "1 1 0"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 4;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0", "0 0 0 0", "0 0 0 0", "0 0 0 0"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 4;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 1", "0 0 0 1", "0 0 0 1", "1 1 1 0"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 5;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0", "0 0 0 0 0", "0 0 0 0 0", "0 0 0 0 0", "0 0 0 0 0"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 6;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0", "0 0 0 0 0 0", "0 0 0 0 0 0", "0 0 0 0 0 0", "0 0 0 0 0 0", "0 0 0 0 0 0"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 6;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 1", "0 0 0 0 0 1", "0 0 0 0 0 1", "0 0 0 0 0 1", "0 0 0 0 0 1", "1 1 1 1 1 0"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 6;
    int d = 3;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 1 2", "0 0 0 0 1 2", "0 0 0 0 1 2", "0 0 0 0 1 2", "1 1 1 1 2 0", "2 2 2 2 0 1"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 6;
    int d = 5;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 1 2 3 4", "0 0 1 2 3 4", "1 1 0 3 4 2", "2 2 3 4 0 1", "3 3 4 1 2 0", "4 4 2 0 1 3"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 7;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 1", "0 0 0 0 0 0 1", "0 0 0 0 0 0 1", "0 0 0 0 0 0 1", "0 0 0 0 0 0 1", "0 0 0 0 0 0 1", "1 1 1 1 1 1 0"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 7;
    int d = 3;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 1 2", "0 0 0 0 0 1 2", "0 0 0 0 0 1 2", "0 0 0 0 0 1 2", "0 0 0 0 0 1 2", "1 1 1 1 1 2 0", "2 2 2 2 2 0 1"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 7;
    int d = 4;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 1 2 3", "0 0 0 0 1 2 3", "0 0 0 0 1 2 3", "0 0 0 0 1 2 3", "1 1 1 1 0 3 2", "2 2 2 2 3 0 1", "3 3 3 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 8;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 8;
    int d = 3;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 1 2", "0 0 0 0 0 0 1 2", "0 0 0 0 0 0 1 2", "0 0 0 0 0 0 1 2", "0 0 0 0 0 0 1 2", "0 0 0 0 0 0 1 2", "1 1 1 1 1 1 2 0", "2 2 2 2 2 2 0 1"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 8;
    int d = 4;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 1 2 3", "0 0 0 0 0 1 2 3", "0 0 0 0 0 1 2 3", "0 0 0 0 0 1 2 3", "0 0 0 0 0 1 2 3", "1 1 1 1 1 0 3 2", "2 2 2 2 2 3 0 1", "3 3 3 3 3 2 1 0"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 9;
    int d = 1;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 9;
    int d = 2;
    QuasiLatinSquares* pObj = new QuasiLatinSquares();
    clock_t start = clock();
    vector<string> result = pObj->makeSquare(n, d);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "1 1 1 1 1 1 1 1 0"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22703092&rd=11126&pm=8561
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
#define FOR(i, n) for (int (i)=0; (i)<(n); (i)++) 
#define DFOR(i, n) for (int (i)=(n)-1; (i)>=0; (i)--) 
#define ALL(x) (x).begin(), (x).end() 
#define SZ(s) (s).size() 
#define SQR(x) ((x)*(x)) 
#define CLR(a) memset(a,0,sizeof(a)) 
#define OO 1000000000 
 
struct QuasiLatinSquares 
{ 
  bool V[16][16]; 
  bool H[16][16]; 
  int M[16][16]; 
  int N; 
  bool dfs(int x, int y) 
  { 
    if (y==N) 
    { 
      FOR(a,N) 
      { 
        FOR(b,N) cout << M[b][a] << ", "; 
        cout << "\n"; 
      } 
      return true; 
    } 
    FOR(a,N) 
      if (!H[a][y] && !V[x][a]) 
      { 
        M[x][y]=a; 
        V[x][a]=1; 
        H[a][y]=1; 
        int xx=x+1, yy=y; 
        if (xx==N) { xx=0; yy++; } 
        if (dfs(xx, yy)) return true; 
        H[a][y]=0; 
        V[x][a]=0; 
        M[x][y]=a; 
      } 
    return false; 
  } 
  vector <string> makeSquare(int n, int d) 
  { 
    N=d; 
    vector <string> res(n); 
    int M2[16][16]; 
    CLR(M); CLR(M2); CLR(H); CLR(V); 
    dfs(0, 0); 
    FOR(a,n-d) FOR(b,d) { M2[a][b+n-d]=b; M2[b+n-d][a]=b; } 
    FOR(a,d) FOR(b,d) M2[a+n-d][b+n-d]=M[a][b]; 
    FOR(a,n) 
    { 
      res[a]=""; 
      FOR(b,n) 
      { 
        res[a]=res[a]+(char)(M2[b][a]+'0'); 
        if (b!=n-1) res[a]=res[a]+' '; 
      } 
    } 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/