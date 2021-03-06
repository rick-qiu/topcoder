/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7539
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

class Tetrahedron {
public:
    string exists(vector<string> d);
};

string Tetrahedron::exists(vector<string> d) {
    string ret;
    return ret;
}


int test0() {
    vector<string> d = {"0 1 1 1", "1 0 1 1", "1 1 0 1", "1 1 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> d = {"0 1 2 3", "1 0 1 2", "2 1 0 1", "3 2 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> d = {"0 1 2 4", "1 0 1 2", "2 1 0 1", "4 2 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> d = {"0 2 2 1", "2 0 2 2", "2 2 0 2", "1 2 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> d = {"0 2 2 1", "2 0 2 1", "2 2 0 2", "1 1 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> d = {"0 2 2 2", "2 0 1 2", "2 1 0 2", "2 2 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> d = {"0 2 2 2", "2 0 1 1", "2 1 0 2", "2 1 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> d = {"0 2 1 1", "2 0 2 2", "1 2 0 1", "1 2 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> d = {"0 2 1 1", "2 0 1 2", "1 1 0 1", "1 2 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> d = {"0 1 1 1", "1 0 1 1", "1 1 0 1", "1 1 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> d = {"0 1 1 1", "1 0 1 1", "1 1 0 2", "1 1 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> d = {"0 1 1 1", "1 0 1 1", "1 1 0 1", "1 1 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> d = {"0 1 1 1", "1 0 1 1", "1 1 0 2", "1 1 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> d = {"0 1 1 1", "1 0 1 1", "1 1 0 1", "1 1 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> d = {"0 1 1 1", "1 0 2 1", "1 2 0 1", "1 1 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> d = {"0 1 2 2", "1 0 2 2", "2 2 0 3", "2 2 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> d = {"0 1 1 2", "1 0 2 2", "1 2 0 3", "2 2 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> d = {"0 2 3 2", "2 0 2 2", "3 2 0 3", "2 2 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> d = {"0 2 3 2", "2 0 1 2", "3 1 0 3", "2 2 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> d = {"0 3 3 2", "3 0 1 2", "3 1 0 2", "2 2 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> d = {"0 3 3 1", "3 0 1 2", "3 1 0 2", "1 2 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> d = {"0 2 3 2", "2 0 3 1", "3 3 0 3", "2 1 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> d = {"0 3 3 2", "3 0 3 1", "3 3 0 3", "2 1 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> d = {"0 2 3 1", "2 0 1 1", "3 1 0 2", "1 1 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> d = {"0 2 3 1", "2 0 2 1", "3 2 0 2", "1 1 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> d = {"0 1 3 2", "1 0 3 2", "3 3 0 2", "2 2 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> d = {"0 1 3 3", "1 0 3 2", "3 3 0 2", "3 2 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> d = {"0 2 3 3", "2 0 3 2", "3 3 0 2", "3 2 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> d = {"0 1 3 3", "1 0 3 2", "3 3 0 2", "3 2 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> d = {"0 2 4 2", "2 0 3 2", "4 3 0 3", "2 2 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> d = {"0 1 4 2", "1 0 3 2", "4 3 0 3", "2 2 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> d = {"0 3 3 1", "3 0 3 3", "3 3 0 3", "1 3 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> d = {"0 3 2 1", "3 0 3 3", "2 3 0 3", "1 3 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> d = {"0 3 3 4", "3 0 2 3", "3 2 0 2", "4 3 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> d = {"0 3 3 4", "3 0 2 4", "3 2 0 2", "4 4 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> d = {"0 3 1 4", "3 0 2 1", "1 2 0 3", "4 1 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> d = {"0 3 1 4", "3 0 2 2", "1 2 0 3", "4 2 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> d = {"0 2 2 2", "2 0 3 3", "2 3 0 3", "2 3 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> d = {"0 2 2 2", "2 0 3 4", "2 3 0 3", "2 4 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> d = {"0 5 4 2", "5 0 1 3", "4 1 0 2", "2 3 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> d = {"0 5 3 2", "5 0 1 3", "3 1 0 2", "2 3 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> d = {"0 2 3 5", "2 0 2 4", "3 2 0 3", "5 4 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> d = {"0 2 2 5", "2 0 2 4", "2 2 0 3", "5 4 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> d = {"0 3 1 3", "3 0 3 4", "1 3 0 3", "3 4 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> d = {"0 3 1 3", "3 0 3 4", "1 3 0 2", "3 4 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> d = {"0 4 2 2", "4 0 3 3", "2 3 0 1", "2 3 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> d = {"0 5 2 2", "5 0 3 3", "2 3 0 1", "2 3 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> d = {"0 4 4 3", "4 0 4 4", "4 4 0 2", "3 4 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> d = {"0 4 4 3", "4 0 4 5", "4 4 0 2", "3 5 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> d = {"0 2 4 3", "2 0 2 1", "4 2 0 1", "3 1 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> d = {"0 2 4 3", "2 0 2 1", "4 2 0 2", "3 1 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> d = {"0 6 2 3", "6 0 6 5", "2 6 0 4", "3 5 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> d = {"0 6 1 3", "6 0 6 5", "1 6 0 4", "3 5 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> d = {"0 3 4 3", "3 0 4 1", "4 4 0 4", "3 1 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> d = {"0 3 4 3", "3 0 3 1", "4 3 0 4", "3 1 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> d = {"0 1 3 5", "1 0 3 5", "3 3 0 5", "5 5 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> d = {"0 1 3 4", "1 0 3 5", "3 3 0 5", "4 5 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> d = {"0 4 5 3", "4 0 2 4", "5 2 0 4", "3 4 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> d = {"0 4 6 3", "4 0 2 4", "6 2 0 4", "3 4 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> d = {"0 4 2 4", "4 0 4 2", "2 4 0 4", "4 2 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> d = {"0 4 2 4", "4 0 5 2", "2 5 0 4", "4 2 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> d = {"0 6 5 3", "6 0 5 3", "5 5 0 4", "3 3 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> d = {"0 6 5 3", "6 0 5 3", "5 5 0 5", "3 3 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> d = {"0 6 6 4", "6 0 1 3", "6 1 0 3", "4 3 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> d = {"0 6 5 4", "6 0 1 3", "5 1 0 3", "4 3 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> d = {"0 6 6 3", "6 0 4 5", "6 4 0 4", "3 5 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> d = {"0 6 6 2", "6 0 4 5", "6 4 0 4", "2 5 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> d = {"0 5 4 6", "5 0 4 2", "4 4 0 4", "6 2 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> d = {"0 4 4 6", "4 0 4 2", "4 4 0 4", "6 2 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> d = {"0 1 4 6", "1 0 4 6", "4 4 0 6", "6 6 6 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> d = {"0 1 4 6", "1 0 5 6", "4 5 0 6", "6 6 6 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> d = {"0 1 5 5", "1 0 5 5", "5 5 0 6", "5 5 6 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> d = {"0 1 5 6", "1 0 5 5", "5 5 0 6", "6 5 6 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> d = {"0 5 4 6", "5 0 4 2", "4 4 0 4", "6 2 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> d = {"0 5 4 7", "5 0 4 2", "4 4 0 4", "7 2 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> d = {"0 2 6 4", "2 0 7 4", "6 7 0 5", "4 4 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> d = {"0 2 6 4", "2 0 7 3", "6 7 0 5", "4 3 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> d = {"0 6 8 1", "6 0 6 6", "8 6 0 8", "1 6 8 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> d = {"0 5 8 1", "5 0 6 6", "8 6 0 8", "1 6 8 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> d = {"0 3 4 6", "3 0 5 8", "4 5 0 8", "6 8 8 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> d = {"0 2 4 6", "2 0 5 8", "4 5 0 8", "6 8 8 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> d = {"0 2 6 5", "2 0 7 5", "6 7 0 5", "5 5 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> d = {"0 2 6 6", "2 0 7 5", "6 7 0 5", "6 5 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> d = {"0 7 5 7", "7 0 8 7", "5 8 0 4", "7 7 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> d = {"0 7 5 8", "7 0 8 7", "5 8 0 4", "8 7 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> d = {"0 4 4 3", "4 0 7 6", "4 7 0 3", "3 6 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> d = {"0 4 4 3", "4 0 7 7", "4 7 0 3", "3 7 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> d = {"0 9 7 7", "9 0 5 6", "7 5 0 8", "7 6 8 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> d = {"0 9 6 7", "9 0 5 6", "6 5 0 8", "7 6 8 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> d = {"0 5 9 7", "5 0 5 3", "9 5 0 4", "7 3 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> d = {"0 5 9 7", "5 0 5 2", "9 5 0 4", "7 2 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> d = {"0 4 3 3", "4 0 6 2", "3 6 0 5", "3 2 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> d = {"0 4 3 2", "4 0 6 2", "3 6 0 5", "2 2 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> d = {"0 4 7 3", "4 0 8 3", "7 8 0 9", "3 3 9 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> d = {"0 5 7 3", "5 0 8 3", "7 8 0 9", "3 3 9 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> d = {"0 3 3 4", "3 0 1 5", "3 1 0 5", "4 5 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> d = {"0 3 4 4", "3 0 1 5", "4 1 0 5", "4 5 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> d = {"0 8 3 4", "8 0 8 7", "3 8 0 2", "4 7 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> d = {"0 8 3 4", "8 0 9 7", "3 9 0 2", "4 7 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> d = {"0 10 4 5", "10 0 9 6", "4 9 0 4", "5 6 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> d = {"0 10 4 5", "10 0 9 6", "4 9 0 3", "5 6 3 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> d = {"0 7 3 2", "7 0 5 6", "3 5 0 2", "2 6 2 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> d = {"0 7 3 2", "7 0 5 6", "3 5 0 1", "2 6 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> d = {"0 9 6 7", "9 0 4 3", "6 4 0 4", "7 3 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> d = {"0 9 6 6", "9 0 4 3", "6 4 0 4", "6 3 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> d = {"0 7 9 5", "7 0 8 7", "9 8 0 5", "5 7 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> d = {"0 7 10 5", "7 0 8 7", "10 8 0 5", "5 7 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> d = {"0 6 8 6", "6 0 7 8", "8 7 0 4", "6 8 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> d = {"0 6 9 6", "6 0 7 8", "9 7 0 4", "6 8 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> d = {"0 6 10 9", "6 0 10 4", "10 10 0 9", "9 4 9 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> d = {"0 6 10 10", "6 0 10 4", "10 10 0 9", "10 4 9 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> d = {"0 4 5 4", "4 0 4 7", "5 4 0 4", "4 7 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> d = {"0 1 2 4", "1 0 1 2", "2 1 0 1", "4 2 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> d = {"0 6 6 3", "6 0 4 5", "6 4 0 4", "3 5 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> d = {"0 5 5 5", "5 0 5 5", "5 5 0 9", "5 5 9 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> d = {"0 3 3 4", "3 0 6 5", "3 6 0 5", "4 5 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> d = {"0 6 6 2", "6 0 4 5", "6 4 0 4", "2 5 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> d = {"0 10 10 3", "10 0 8 9", "10 8 0 8", "3 9 8 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> d = {"0 3 6 5", "3 0 3 3", "6 3 0 5", "5 3 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> d = {"0 3 6 5", "3 0 3 4", "6 3 0 5", "5 4 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> d = {"0 1 2 3", "1 0 1 2", "2 1 0 1", "3 2 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> d = {"0 4 8 5", "4 0 4 3", "8 4 0 5", "5 3 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> d = {"0 7 10 7", "7 0 4 8", "10 4 0 5", "7 8 5 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> d = {"0 10 10 5", "10 0 10 6", "10 10 0 6", "5 6 6 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> d = {"0 10 5 8", "10 0 6 8", "5 6 0 10", "8 8 10 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> d = {"0 3 1 5", "3 0 2 4", "1 2 0 6", "5 4 6 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> d = {"0 3 5 5", "3 0 3 6", "5 3 0 4", "5 6 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> d = {"0 3 5 4", "3 0 3 6", "5 3 0 4", "4 6 4 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> d = {"0 4 2 2", "4 0 4 3", "2 4 0 1", "2 3 1 0"};
    Tetrahedron* pObj = new Tetrahedron();
    clock_t start = clock();
    string result = pObj->exists(d);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10712&pm=7539
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef queue <pii> qp; 
typedef map <string, int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
 
class Tetrahedron 
{ 
// Global 
 
// Functions 
public: 
  string exists(vector <string> d) 
  { 
    string res; 
    int n; 
    int a[4][4]; 
    for (int i = 0; i < 4; ++i) 
    { 
      istringstream in(d[i]); 
      for (int j = 0; j < 4; ++j) 
        in >> a[i][j]; 
    } 
    for (int i = 0; i < 4; ++i) 
    { 
      for (int j = 0; j < 4; ++j) 
      { 
        for (int k = 0; k < 4; ++k) 
        { 
          if (a[i][j] + a[j][k] < a[i][k]) 
            return "NO"; 
        } 
      } 
    } 
    double x0 = 0; 
    double y0 = 0; 
    double x1 = a[0][1]; 
    double y1 = 0; 
    double x2 = (a[0][2] * a[0][2] - a[1][2] * a[1][2] + x1 * x1) / (2 * x1); 
    double y2 = sqrt(a[0][2] * a[0][2] - x2 * x2); 
    double x3 = (a[0][3] * a[0][3] - a[1][3] * a[1][3] + x1 * x1) / (2 * x1); 
    double y3 = sqrt(a[0][3] * a[0][3] - x3 * x3); 
    if (hypot(x2 - x3, y2 - y3) - EPS < a[2][3] && hypot(x2 - x3, y2 + y3) + EPS > a[2][3]) 
      return "YES"; 
    else 
      return "NO"; 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/