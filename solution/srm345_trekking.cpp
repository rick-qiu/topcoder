/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7650
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

class Trekking {
public:
    int findCamps(string trail, vector<string> plans);
};

int Trekking::findCamps(string trail, vector<string> plans) {
    int ret;
    return ret;
}


int test0() {
    string trail = "^^....^^^...";
    vector<string> plans = {"CwwCwwCwwCww", "wwwCwCwwwCww", "wwwwCwwwwCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string trail = "^^^^";
    vector<string> plans = {"wwww", "wwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string trail = "^^.^^^^";
    vector<string> plans = {"wwCwwwC", "wwwCwww", "wCwwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string trail = "^^^^....^.^.^.";
    vector<string> plans = {"wwwwCwwwwCwCwC", "wwwwCwwCwCwwwC", "wwwCwwwCwwwCww", "wwwwwCwwwCwwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string trail = "..............";
    vector<string> plans = {"CwCwCwCwCwCwCw", "CwwCwwCwwCwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string trail = ".^^^.";
    vector<string> plans = {"wCwCw", "CwCww", "wwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
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
    string trail = "^..^^";
    vector<string> plans = {"wwwwC", "wwCCC", "wCwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string trail = "^^..^";
    vector<string> plans = {"CwCwC", "CwwwC", "wwCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string trail = ".^...";
    vector<string> plans = {"wwwCC", "CwCCC", "wwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string trail = ".^^^^";
    vector<string> plans = {"wwCww", "CwwwC", "wwwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string trail = "^^^^.";
    vector<string> plans = {"Cwwww", "CCCww", "wwwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string trail = ".^^^^";
    vector<string> plans = {"CwwCw", "wCCww", "CCwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string trail = ".^.^^";
    vector<string> plans = {"wCwwC", "wwwCw", "CCwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string trail = ".^..^";
    vector<string> plans = {"wwwCw", "wwwww", "wwCwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string trail = ".^.^.";
    vector<string> plans = {"wCwCC", "wCwwC", "wCCCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string trail = "....^^^.^.";
    vector<string> plans = {"wwCwCwCCCw", "CCCwwwwCww", "wwwCwwwCCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
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
    string trail = ".^.^.^....";
    vector<string> plans = {"CwwwCCwwwC", "wwwwwCCwww", "wwwwwwwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
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
    string trail = ".^^^^^^.^^";
    vector<string> plans = {"wwCCwwwwww", "wwwwwwCCwC", "wwwwCCCCwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
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
    string trail = "^^.......^";
    vector<string> plans = {"CCwCwwCwCw", "wCCCCwwwCC", "wCwwCwwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string trail = ".^.^^.....";
    vector<string> plans = {"wwwwCwwCCw", "wCCCCwwCCw", "wwCCCCwwCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string trail = ".^....^^..";
    vector<string> plans = {"wCCwwwCwww", "wCCwCCwwww", "wwwCwCwCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string trail = "^.^^^....^";
    vector<string> plans = {"wwCwwwCwww", "CwwwCwwCww", "wwwwwwCwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string trail = "..^.^^...^";
    vector<string> plans = {"wwwCCwwwww", "CCwwCwwCCw", "wwCwCwwwww", "wwwwwwCwww", "wwCCwwwCww", "wwwwwwCwCw", "CwCwwwwwww", "CCCwCwCCCC", "CwwwCCCCCC", "wCwwwwwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string trail = "..^.^^.^.^";
    vector<string> plans = {"wCCCCCCCww", "wwwCwCwwww", "wwwCCCwCwC", "wCwwwwwCwC", "wwCwwwCwww", "CwwCCwCwww", "wwwwCwwwwC", "wCwCCwwwCw", "wwwCwCwwww", "wCwCCCwwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string trail = ".^.^......";
    vector<string> plans = {"CCwCCCCCww", "CCwCwwCwww", "wwwCwwCwCw", "wwwCwwwCCw", "CwCCwwwCwC", "CwCwwwwCCC", "wCwwwwwCCC", "CwwCwwwwwC", "wCwwwwwwww", "wwwwwCwCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string trail = "...^.^^..^";
    vector<string> plans = {"wwCwCCwwwC", "wwCCCwwwwC", "wwwCwwwwwC", "wCwwCwwwww", "wCCwwwwwww", "wwwCwwCCww", "wwCCwwCwCw", "wwwCwCwwww", "wCCwwCwwwC", "wCwwwwwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string trail = "^^^^^..^^.";
    vector<string> plans = {"CCCwCwwwww", "wwwwCwCCww", "wwwCwwwCCw", "CwwwCwwCwC", "wCwwwwCwww", "CwwwwCCwwC", "wwwwwCwCww", "CCwwwwCwwC", "wCwwCwCwwC", "wwCwwwCwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string trail = "^...^^^^..";
    vector<string> plans = {"CwwCwCCwww", "wwwCwwCCwC", "wCwwwwwwww", "wwwwwCwCCw", "wCCwwCwwwC", "CCCCwCwwCw", "wwwwwwwwww", "wwwCwwCwww", "CCwCCwwCww", "wwwwCCwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string trail = "^^^..^^^.^";
    vector<string> plans = {"CwCCCwCwww", "CwwCCwCwwC", "wwCwwCwCwC", "wwCwCwCCCw", "wwwwwwwCww", "wwwwCwwwww", "wCCCCwwCww", "wCwwCwwwww", "wCwwwwCwCC", "CwwwwwwCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string trail = ".^.^^^...^";
    vector<string> plans = {"wCwwwwCwCw", "wwwCCwwwww", "wwCwwwwwww", "CwCCwCwwCw", "wwwwwwwCwC", "CwCCCCwwww", "wCCCCwCCww", "CwCwCwwwCw", "wCCwCCCwwC", "wwCwwCwCwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string trail = "...^.^^...";
    vector<string> plans = {"wCwCCwCwwC", "wwCwwCCwww", "wCwwCwwwCw", "wCCCCCCwww", "wwwCwwwwCw", "wCCwwwwCCw", "wwwwCwwwwC", "CwCwCwwwww", "wwwwwCwCww", "CwwCwCwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string trail = "^^^..^^^..";
    vector<string> plans = {"wwwCwwwCCw", "wCCwwCwwww", "wwCCwwwwCC", "wCwCwwCCww", "wCwCwwCwCw", "wwwwwwwwww", "wCwwCCCCww", "wwCwwwCwwC", "wwCwCwwCCC", "wwwCwwwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string trail = "^..^^^^.^^^.....^^.^";
    vector<string> plans = {"wwwwCwCCwwwwwCwCwwww", "CwwwwwwwCwwwCCwwCCww", "wCCwCwwwwwwCCwwwwCww", "wwwCwCwwCCCCwwwwwCww", "CCwCCwCwCwwwwwwCwwwC", "wCCCCCCwwwwwCwCCwCww", "CwwCwCwwwwwwwwwwwwww", "wwCwwwCwwCCCCwCwCwCw", "CwwwwwwwwCCwCwwwwwww", "CwwCwCCwCCCwCwwwwwww", "wwwwwwCwwwCwwCwwwwww", "CwwCCwCCwwwCwCwCCwwC", "wCCCCwwCwCwwwCCCCwCw", "CCCwwwwwwwwwwwCwCCww", "CwwCwwCCwwCwwCwCCCww", "wCwCwCwwCCwwCwwCwwCC", "wwCwCwCCCwCCCCwwwwww", "CwCwwCwwCCCwwwwwCwww", "wCwwCwwwwCwwwwCwCwww", "wCCwwwwCwwCCCwCCwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string trail = ".^..^..^^...^.^^^^.^";
    vector<string> plans = {"CCCCwwwCwwwwwCwwwCww", "CwwwCwwCCwCCwwwCwCww", "CwwwwwwwwwCwwwwwwwww", "CwCwCwCwwwwCwwCCCwwC", "wCCwwCCwwwCwwCCwwCww", "CwwwCCCwwCwwCCwwwCwC", "wwCwwwwwCCwwwwCCCwwC", "wwwCwwwCwwwCwwwwwCwC", "wwwwCCwwwwwwCwwCwCCw", "wCCwwwwCCCCwwCwCwwwC", "CwwwwwwwwwCwCwwwwwww", "wwwwwCwwwwCwwCCCwwww", "wwwCwwwCCwwwwwwwwwww", "wwwCCwwCwwwwwwwwwwww", "CwCCwCwCCwwwCCwCCCCC", "CCwCCwwwCCwwwCwCCwCC", "CwwwCCwwCCwwwwwwCwww", "wCCwCCwwCwCwwwCCwCwC", "wwwCwwwwCCwwwwwwCCwC", "CwwwCwwCCwCwwCwCCCCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string trail = ".^^^.^....^..^^^.^^.";
    vector<string> plans = {"wwwCwCCwwwwCCCCwwwwC", "CwwwCwwwCwwwwCCwwwww", "CCwwCwwwwCwwwwwCCCwC", "CwwwwwwwCwCCwwCCCwwC", "wwCwCCwwCwCCwwwwCwwC", "wwwCwwCCwCwwwwwCwwwC", "wwwwCCCwCCwwwwwwCCww", "wwwwCCwCCwwCwCwwwCCw", "CwwCwwwCwwCwwwCwwCwC", "wwwCwwwCwCCCCCCwwwww", "wwwwwwCwwwCwCwCCwwwC", "CCwwCwCCwwwwwwwwwwww", "CwwwCwCwwwwwwwwwwwww", "wCwCwCCwwwwwCwwCwwww", "wwwCwCCCCCwCCwwwwwwC", "wCwwwwCwwwCCwwwCCwwC", "CCwwwCCwwwwwwCwCCwww", "wwwCCwwwwwCwwwwwwwww", "wwCwwCwwwCCwwCwCwCwC", "wwCwwwwCwwwCwwwwCCwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string trail = "^^..^..^.^.^.^^^^.^^";
    vector<string> plans = {"CwwwwCwwCwwCwwwwwwww", "wCwwwwwwwCCwwwCwwCCw", "wCwCCwwCwCwCCwwCCwww", "wCCwCCwCwCwwCwwCwCww", "CwwCCwwwwwwCwwCCwwww", "CwwCwwwwwwCwwCCCwwww", "CwwwwwwCwwCwCwCwwCCC", "wwCwCCwwwwwwCCCCCCwC", "wwCwwwCCwwwwwwwwwwww", "wwwwCwCwwCwCwwwwwwww", "wwCCCwCwCwwwwCwCwCww", "CwwCwwwwwwwwCwwCwwCC", "wCCwwwwCCwwwwCwCCCww", "wwwwwwwCwwCCwCwCCwCw", "wwwwwCwwCCwwwwCCCwww", "wCCwwCwCwwwCCCwwwCww", "wwwwCwwwwwwCCwwwwwCw", "wCCCwwCCCwwwwCCwwCww", "wwwwwCwwCCwwwCwwwwww", "wwwCwwCwwwwwwwwwCwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string trail = "..^..^.^^^^.^...^^..";
    vector<string> plans = {"wwCwwCCwCwwCwCwCCwww", "wCwCwwCwCCCwwwwCwwww", "wwwwwCwCCwwwwwwwCCww", "CwwCCwwCwCwwCCCCwwww", "CwCCCwwwwwCwCwCwwwww", "wwCwCCwwwwwwwwwCCwww", "CwwwwwCwCwCCwwwwwwww", "CCCCwCCwCCwwCwCwwwwC", "wwCCCCwwCCwCCwwCCwww", "CwCwCwCwCCwwCCwwwCww", "CwwwwwCCwwwwCwCwwwCw", "CCCCwCCwwCwwwCwwCwCw", "wwwwCwwwCCwwwwwCwCww", "CCwwwwwwwwCCwwwwwwwC", "wwwwwwwwwwCwwwCwCCww", "wwCwwwwwwCwwCCCwwCww", "wCCwwCwwCwCCCCCCCCww", "CCwwwCwwCCwwwCwwwwCw", "wCwwwwwwwwwCCwwwwwCw", "wwwwCCCwwCwCwwCCCCwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string trail = "...^^^^^^^^^^.^...^.";
    vector<string> plans = {"wwwwCwwwwwCCwwCwwwww", "wwwwCwwCwwCwCwwwCCww", "CwwwwwwCCwwCwwwCCwCw", "CwwwCwwwwwwCwwCCwwww", "wCwwwwwCwwwwwCwwwCww", "CwCwwCwwCwwCCwwCCwCw", "wCwwwwwwwwwCwwCwCwCw", "wCwwwwwwwCwCwCCCwwww", "CwwwwwwwwwwwwCwwwwCC", "wwwwwwCwwwwwwwwwwCwC", "CCwwCCCwwCwCwwwwCwCC", "wwwwwwwwwwwCwwwwwCCw", "wCwwwwwwwwwwCCCCwwCw", "CwwCwwwwwwwwCwwCCwww", "wwCCwwwwCCwwwwwwwwww", "wCCwwwwwCwwCwCwwCwwC", "wwwwwwwwwwCwCwwwwwww", "CwCCwwCwCCwCwwwwwCwC", "CwCCCwCCwCwCCwCwCwCw", "wCwwwCCwwwwwCwwwCwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
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
    string trail = "^....^......^.^......^^..^.^.^.^..^.^^^^^^..^^.^^.";
    vector<string> plans = {"CwwCwCCCCCwCwwCwCwCwwwwwwwwwwCwwwCwCwwCwwwwwwCCwww", "wwwwwwwCCCwwwwCwwwwCwCCwCwwwwwwwCCCwwwCwCwwwwwwwwC", "wCwwwwwwCwwwwwwCwwCwwwwwCwwwCCCCCwwwwwwwCCwwwCwwww", "wCwCCwwwwwCwwwCwCwCwwCwwwCwwwCwCwCwwwCwwwwwwwwwCww", "wCCwwwwCwwwCCwCCwCCCwCwCwwwwwwwwwwwCwCCwCwwwwwwCCw", "wCwCwCCCwwwCwwCCCwwwwwwCwCCCwwwCwwwCwwwwCwwwCCwwCw", "wwwwCCCwCCCwwCwwCwwwwwwwwCCwwCCwwCwwCwCwwCwCwCwwww", "wwCwwwwwwCwwCwwCCCwwwwwCwCwwCwCCCCwCCwwwwwwwwCCCCw", "wwCwCwCwwwwwwwwwwwwwwwCwCCwwwCCwCwCwCCwwwwwwwwCwwC", "CCwwwCwCwwwwCwwwwCwCCwCwwwCCCCCwCCCwCCCwwwwwwwwwCC", "wCCwwCwCCwCwwwwwwwwwwwwwwCCCwCCwwwwCwCwCwwwwCwCwww", "wwwwCCCCCCwwwCwCwwwwwwwwCwCCwCwwwwwCCCCwwwCCCwwwww", "CwwCCwCwwwwCwCwwCwwwCwwwwwwwwwwCCCCwwCwwCwCCwwwCwC", "CwwwCwwCCwwCCCCCwwwwwCCwCCwCCwCCCCCwCwwwCwwCwCwwww", "CCwwwCwwwCwwwwCwwCwCCwwwwwCwCwwwwwwCwwwCwwCwwwCCww", "CwwwwwwwCwwwCwCwwwCwwCCCwwwCwwwCwCCCwwCwwwCCwwwwCw", "wwCwwwwwCwwwwCCCwwwwwwwCwwwwwCwwwCwwCCwwCCCwCwwCww", "wwwwwCwwwCwCCwCwwwwCwwwCwwwCCwCwCwwwwCCwwCwCwCwCwC", "wwwCwCCwwCwwCwwCCCwwCwwwwwwwwwCwCwCwwwwCwwwCwCwwwC", "wwwwCCwCCwwCwwwwCwCCwCwwwwCCCwwwwCCwCwCwCwwwwwCCCw", "wCwCwCwwwwwCwwwCwwwwwwwCwCCwCCCwwCwCwCwCwwwwCwwwwC", "wwwwCwwCCCwwCwwCwCCwwwwwCwwwCwwwCwwwCwwwwCwwwwCwCw", "wwwCwwwwwwwwwCwCwCwCwwwCwwwwwwCwwwwwwwwCCCwCCwCwwC", "wwwCwCwwwwwCwCwCwwwCwwwwwwCwwCwwwCwCwwCwwCwCwwCwCC", "wCCwwCwCwwCCwwwCCwCwwwwwCCCwwCwwwCwCwwwwwwCCCwwCCw", "wCwCwCCwwCwwCwwwwCCCwCCwwCwwwwCCwCCwCwwCCwCwwwwCww", "CwwwCwwCCwCwwCwCCCCwwwwwCwwwCwCwwCCCwwCCwwwwwwwwwC", "wCwCCwCwCwwCCCwwwwwwwwwwwCCwCCwwCwwCCwwwwCwwwwCCww", "wwwCCCwwCwwwCwwCCwwwwCCCwwwCwwwwCwwwwwCwCwwwCwCwCw", "wwwwwCwwwCwwwCCwwCwwCCwCCwwwwwwCwwwwwCCwwwwCwwCCwC", "CwwwwwwCwwCCwCwwCwCCwwwCCwCwCwwwwCCCCCCwwwwwwwwCCw", "wwwCCwwCCCwCwCwCCwwwwwwwwCwCCwwwwCwwwCwCwwCwwwwCww", "wCCCwwwwwwCwwwwwwwCwwwwCCCCwwwwwwwwwwwwCwwwwwwCwwC", "wwwwwwwwwwCwwCwwCwwwCwCCCCwwCwwwwwCwwwwwwwwCCwwCwC", "wCCwCwwCCwwwwwCwCCCwwwwwCwCwCCCwCCwCCCwwCwCCCwwwwC", "wwCCwCCwCCCCwCwwwwCwwwCwwwwwCCwCwwCwCwwCwwwwCCwCwC", "wCwwwCwwwwwwwwwwwwCCwwCwwCCwwwCwCwCwwwCwCwCwwCwwCC", "wwCwwwCCCwCwwwwwwCCwwwwwCwCCwwCwwwCCCwwwwwCwwwwwCw", "wwwwwwwwCwCwCwCCCwwwCCCwwwwwwwCwCwwwwwCwwCCwCwCCww", "wCwCwCwwwwwwwwwwCCwCwwCCwwwwwwwwwwwwwwwCwwwwCCwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string trail = "^.....^.^.^..^...^^^..^^^^^.....^..^^^^.^^.^..^.^^";
    vector<string> plans = {"wwwwwwwwwwCwwwCCwwCCwwCCwwCwwwCwwwCCwwCwwwwCCwwCww", "wCwwwCwwCwCCCCCwCCCwwwCCwwCCwwCwCwwwwCCCwwCwwwwCwC", "wwwwwwwwCwCCwwwCwwwwwwCCwwwwwwCwCwwwwwCwCCwCwCCwww", "wwCCwCwwCwwwCwwwwwwwwCwwCwwCwwwwCwwwwwwwCwCCwCwCww", "wwwwwwCCCwwCCCwwCCCwCwwwwwwwCwwwwwCwwCCCCCCwwwwwww", "wwwCwCwCCwwwwwwCCwCwwwCCwwwwwwwwwCwCwwCwCwCwwwwCww", "wwCwwwwwwwwwCwwwwCCwwwCCCwwCCwwwwwwwCwCwwCCwwwwCCw", "wwwwwwwCCwwwCCwwwwCwwwwwwwwCCwwwCwwCwCCwCwwwwwwwww", "CwwCCwwwwCwwwCCwCwwwwwwwCCwwwwwwwCwCwwwCwwwwwwwwwC", "wwwwCwwwCwwwCCwCwwCwwwwwwwwCwwCCCCCwwwwwCwwwCwwwww", "wwwCwwwCwwwwCwCwwwCwwwCwCwwCCwwwwwwCCwwCCCwwwCwwww", "CCCwCwwwwwwwCCwwwwCwwwwCwwwCCwwCCwwCwwCwCwwwCCwCww", "wwwwwCwCCCCwwwCwwCCwCwwwwCwCCwCwwCCwCCwwCwwwCwwCCw", "CwCCwCCwwwCwwwCwCwwCCCCCCwwwwCwCwCCwCwwCwwCwCwCwCC", "CwwwwwCwwwwCwwCwwwwwwCCwCwwwCwwwCCCwwCwwwwwwCCCCww", "CwwwwwwwCwwwwCwwwwwwCCwwwCCCwCCwCCCwwCwwwwCwwwwwCC", "CwwwwwCwCwCwwCCwCwwCCwwCCwCwCCwCwwwwwCwCwwwwwwCwCC", "wCwwwCwwwCwwCwCCwCwCCwwwwCCwwCwCCwCwCCwCCwwwCwwCCw", "wwwwwwCwwwCwwwwwCwwCCCwwwwwwCCCCwwwwwwwCCwCwwwwCCw", "CCwCCwwCCCCwCwwwwCwCwwCwwCwCwwCwCCwwwwwCwwwCCCwwww", "wwCwwwCCCwwCCCwCwCwwwwwCwwCwwwCwwCwwwwCwwCwwwwwwCw", "CwwwwCCCCwwwwwwCwCwwwwCCwwwwwwwwwCwwwwCCwCwwCCwwww", "wwwCwwwwCwwwCwCwwwwwCwwwwCCwwwCwwCwwwwCwCwwwwCwwww", "CwwCCwwwwwwwwwwwwwwwwCwwwwwwwCCwwwwCwCwwwwwCwwCwww", "CwwCCwCwwwCwCCwCCwwwCCwwwwwwwwwCwwwwCwwwCwwwwwwwww", "wwwwCwwwwCwCCCwwCwwwCwCwwwwwwwCwwwwwCwwCwwCCCwwCCw", "wCCwwwwwwwCwwCCCCwwCwCwCwCwwCCwCwwCwCCwwCwCwwwwCww", "CwwCCCwwwwwwCwwwwwwCCwwCwwwwwwCwwwCwwwwwwwCwwwwCCC", "CwCwCwCCwwCwCwwCwCCwCCCwCwCwCCwwCwCwwwwCwwCwwCwCww", "wwwCCwCCwCwwwwwwwwwCCCwCwCwwCwwwCwwwCCwCwwwCwCCwCw", "wCCwwwwwwCwwwwCwCwwwwCCwwwwwwwwwCCwCwwwwwCwwwwCwww", "wwwwCwCwwCCCwwCCwCCwwCCCwCwCwwCwCwwCwCwwCwwwCCCwwC", "wCCCwwwwwwwCCwwwCwCwwCwwCwCCwwwwCwwwwwCwwwwwwwCCCC", "CCwwwwwCwwwCwwwwwwCwCwwwCwwCwwCCwwCwwCCwwCwwwwwCww", "CCwCwwwwwwCCCCCwCCwwwwwwCCCwCCwwwCCwwwCwwwwwwCCwCw", "wCwwwwwCwCCCwwCwwCwwCwwCwwCwwwwCwwwwwwwCwwwwCwwwCw", "wCCCCwwwwwCwwwwCwwCwCCCwCwCCCwwCwwwwCCwCwwwwwCwwCw", "CCCwCCwCwwCCCwwwwwCCwCCwwwwwCwCwwwwCwwCwwwwwwwwCww", "wwCwwCCwwwCwwCCwCwwwCwCwwwwwwCCwwwCCwwwCwCwwwwwwww", "wwwCwwCwwwwCwCwCCwCwwwCwwwwwwwwwCCwwwwwwwwwwwCwCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
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
    string trail = "^^.^^.^^...^.^^....^^..^^^^^^.^.^^^^.^..^..^.^^.^^";
    vector<string> plans = {"wwwwwwwwwwwwwCwwwwwwwwwwwCwwwCwwwwwwwwwwwwwCwwwwww", "CwwwwCwwwCwwCwwwwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwC", "CwwwCwwwwCwCwwwwwwCwwwwwwwwwwwwwwwwCwwwwwwwCwwwwCw", "wwwwwwwwwwwwwCCwCwwwwwwwwCCwwCwwwwCCwwwCwwwwwwwwCw", "wwwwwwwwwwwwwwCwCwwwwwwwCwwwCwwwwCwwwCwwwCwwwwCwww", "wCwwwwwwwwwwwwwwwwwCwwCwwwwwwwwwCwwwCwCwwwwwwwwwww", "wCwwwwwwwCwwwwwwwwwwwCwwwwwwwwCwwwCwCwwwwCwwwwwwCC", "wwwwwwwCwwwwwwwwwwwCwwwwwCCwwwwwwwwwwwwwwwwwwwwwCw", "wwwwwwwwwwwwwCwCwwwwwwwwwwwwCwwwCwwwwwCCwwwwwwwwww", "wwwwwwwwwwwwCCwwwwwwwwwwwwwwwCCwwwwwwwwwwwwwwwwwww", "wwwwwwwCCwCCwwwwCwwwwwwwCwwwwwwwwCCwwwwwwwwwwwwwwC", "wwwwwwwwwwwwCwwCwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwCwwwwwwCwwwwCwwwCwwwwwwwCwwwwwwwwwCwwwwCwC", "wwwCwCwwwCwwwwwwwwwwwwCwwwwwCwwwwwwwwwwwwwwwCwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwCCwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwCwwwCwww", "wwwCCwCwCwwwwwwwwCwwwwwwwwwwwwwwwwwwwwCwwwCCCwwwww", "CwwwwCwwwwwwwwwwwwwwwwwwwwwwwwwwwwwCwwwCwwwwwwwwww", "wwwwwwwwCwwwwwwwwwwwwwwwwwwwCwwwwwwwwCwwwwwwwwwwww", "wwwwwwwwCwwwCCwwwwwwwwCwwwwwwwwwwwCwwwwwwwwwwCwwww", "wwCwwwwwwwwwwwwwwCwwwCwCwCCwwwwwwwwwwwwwwwwwwCwwCw", "wwwwwwwCwwwwwCwwwwwwwwwwwwwwwwwwwCwCCwCwwwwwwwwwww", "wwwCwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwCwCwwwwwwCww", "wwwwwCwwwwwwCwwwwwCwwCCwwwwwwCwwwwwwwwwwCwwwwwwwww", "wwwwwwwwwwwCwwwwwCwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwC", "wwwwwwwwwCCwwwwwwwwwwwCwwwCwwwwwwwwCwwwwCwCwwwwwww", "CwwCwwwwwwwwwwwwwCwCwwwwwwwwCwwCwwwwwwwwwCwwwCwwCw", "wwCwwwwCwwwwwwwwwwwwwCwwwwwwCwwwCwwwwwwwwwwwwwwwww", "wwwwwwwCwwwwwwwwwwwwCwwwwwCwwwwwwwwCwwCwwwwwwwwwww", "wwwwwwwwwwCwwwCwwwwwwwwCwwwwwwwwwwCwwwCwwCwwwwwwwC", "wwwwwCwwwwwwwwwwCwwCCCCwwwwwwwwwwwwwwwwwwwwwwwwwCw", "wCwwwwwCCwwwwwwwwwwCwwwwCwwwCwwwwwwwwwwwwCwCwwCwww", "wwwCwwwwwwCwwwwwwwwCwwCwwwwwwwwwwwwwwCwwCwwwwCwwww", "wwwwwCwwwwwwwwwwwwwwwwwCwwwCwwwwwwwwwwwwwwwwwwwCww", "wwwwwwwCwCwwwwwwwwwwwwCwCwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwCwwwCwCwwwwwwwwwCwwwwwwwwwwCCCCCwwwwwwwwCwwwww", "wwwwwCwwwwwCwwCwwwCwCwwwCwwwCwCCwwwwwwwwwCwwwwwwww", "wwwwwwwwwCwwCwwwwwwwwwwwwCwCwwwwwwwCwwwwwwwwwwwwCw", "wwwwwwwCwwwwwwwCwwwwwwwwwwwCwwwwCCwwwCwwCwwwwwwwww", "wwwCwCwwCwwwwwwwCwwwCwwCwwwwwwwwwwwwwwwwwwwwwwwwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string trail = "...^.^.^^^^^^.^^.^^^^^.^..^^^^^^^...^^^^...^.^.^.^";
    vector<string> plans = {"wwwwwwwwCwwwwwwwwwwCwwCwwwwwwwwwCwwwwCwwwCwCwwwwwC", "wwwwwwwwwwwwwwCwwwwwwwwwwwwCwwwwwwwwwwwCwwwwwwwwww", "CwCwwwwwwCwwwwwwwCCCCwwwwwwwwCwwwwwCwwwwwwwwwwwwww", "wwwwwwwCwwCwwwCwwwwwwwwCwwwCCwwwwwwwwwwwwwwwwwwwww", "wwCwwwwwwwwwwwwCCCwwwwwwwwCCwwCwCCwwwwwwwwwwwwwwww", "wwCwwwwwwwwwwwwwwwCwwwwwwwwwwwCwwCwwwwwwwwwwwwwwww", "wwCwwwwwwCwCwwCwwwwwwwwwwwwwwwwwwwwwwwwCwwCwwwwwCw", "wwwwwwwwwwwwwwwwwwwwCwwCwwwwwwwwwwwwwwwwwwwwwCwwCw", "wCwCCwwwwwwCwwwwwwwCwwwwwCwwwwwwwwwwwwwwCwwwwwwwww", "wwwCwwwwwwCwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwwwwwww", "CwwwwCCwwwwCwwwwwwwwwwwwwwwwwwCwwwwwwwCwwwwwwwCwww", "wCwwwwwwwwwwwwwwwwwwwwCwwwwwwwwCwwwwwwCwwwwwwCwwww", "wwwwwwwwwwwCwwwwCwwCCwCwwwwwwwwwCwwwwwwwwwwwwwwwww", "wwwwwwCwwwwwwwwCwwwwwwwwwwwCwwwwCwCwCCwwwCwCwwCwww", "wCwwwwwwwwwwCwwwwwwCwwCwwwCwwwwwwwwwwwwwwCCwwwwwww", "wwwwCwwCwwwwwCCwwwwwwwwwCwwwwCwwwwwwwCwwCwwwwwCwww", "wwwwwwwCwwCwwwwwwwwwwwCwwwwwwCwwwwwCCwCwwwwwwwwwww", "wwwwwCCCwwwwwwwCwwwwwwwwwwwCwwwwwwCwwCCwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwCwwwwwwCwwwwwwwwwwwwwwwwwwwwww", "wwwwwCCCCwCwwwwwCwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwCw", "wwwwwwwCwwwwwCwwwwCwwwwwwwwwwwCwCwwwwCwwwCwwwCwwww", "wwwCwwwwwwwwwwwwwwwwwwwwCwwwwwwCwCCwwCwwwCwwwwwwwC", "wwwwwwwwwwwCwwCwwwwwwwwwwCwwwwCwwwwwwwwwwwwwwwwwCw", "wwwwwwwCCwwCwwwwwwwwwwwwwwwwwwCwwwwCCwCwCwwwwwwCww", "wwwwwwwwCwwwwwCwwwwwwwwwwCCwCwwwwwwwwCwwwwwwwwwwww", "wwwwwwwwCwwwwCCwwwwwCCwwwwwwwwwwwCwCCwwCwwwCwwwwCw", "wCwwwwwwwCwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwCwwwwCwwwwwwwCwwwwwwwwwwwwCwwwwwwwwwwCwwwww", "wwCwwwCwCwwwwwwwwwwwwwwwwwwwwwCwCwwwwwwCwCwwwwwwww", "wwwwwwwwwwCwwCwwwwwwwwwwwwCwwwCwwwwwwwwCwwwwwwwwww", "wCwwwwwwCwwCwwwwwwwCwCwwwwwwwCwwCwwwCwCCwwCwCwwwww", "wwwwwwCwwwwwCwCwwwwwwwwwwwCCwwwwwwwwwwwwwwwwwwwwww", "wCwwwwwwwCwwwwCwwwwwwwwwCwwwCwwwwwwwwwwCwwwwwwwwwC", "wwwwwwCwwCwCwCwCwwwwwwwCwwwwwwwwwwwwwwwwwwwwwwwwww", "wCwwCwwwwwwwwwwwCwwwwwwwwwCwwwwwwwwwwCwwCwwwCwwCww", "wwwCwwwwCwwwwCwwwwwwwwwCwwwwwwwwwwwwCwwCwwwwwCwwww", "CwwwwwwCwCwwwwwwwwwwwwwwwwwwwwwwwwwCCwCwwwwwwwwwww", "wwwwwCwwwCwwwwwCwwwCwwwwwCCwwwwwwwwwwCwwwwwCwwCwww", "wwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwwwwCwCwwwCw", "wwwwwwCwwwwwwwwwCwwwwwwwwwwCwwwCwwwwwwwwwwwwwwwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string trail = "....^..^..^..^^......^^...^^^..^.^^^^^..^^.....^..";
    vector<string> plans = {"wwwwwwwwwwwwwwwwwwwwCCwCwwwwwwwwwwwwwCCwwwwwwwCwCw", "wCwwCwwwwwCwwwwwwwwCwwwwwwwwwwwwwCwwwwwwwwwwwwwwCw", "wwwwwwwwwwwCwwwwwwwwwCwCCCwwwwwCwCCwwwwwwwwwwwwwwC", "wwwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwCwwwwwwwCCwwwwww", "wCwwwwwwCCwwwwwwwCwwwwwwwwCwwCwCCwwwwwCwwwwwwwwwww", "wwwCwwwwwwwwwwwwwwwwwCwwwwCwwwwwwwwwwwwwwwCwCwwwCw", "wwwCwwwwwwwCwCwCwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwww", "wwwwwwCwwwwwwwwwwwwwCwwwCCwwwwwwwwwwCwwwwwwCwCwwww", "wwwwCwwwwwwwwwwwwwwCwwwwwwwwwwwwwCwwwwwCwwwwwwwwww", "wwwwwwwwwwCwCwwwCwwwwwwwwwwwwwwCwwwwCwwwwwwwwwwwCw", "wwwwwwwwwwwwwwCCwCwwwwCwwwwwwwwwwwCwwwwwwwwwwwwCCw", "wwwwwCwwwCwCCwwCwwwwCwwwwwwwwwwwwwCwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwCwwwwwCwwwwwwwCCwwwCwwwwwwwwww", "CwwwwwwwCwwwwwCwwwwCwwwwwwwwCwwCwwwwwCwwwwwwwwCwww", "wwwwwCwwwwwwwCwwwwCwwwwwwCwwwwwwwwwCwwwwCwwwwwwwww", "wwCwCwwwwwwwwwCwwwwwwwwwwwCCwwwwCwwCwwwwwwCCwwwCww", "wwwCwwwwwwwwwwCwwwwwwwwwwwCwwwwwwwwCwwCwCwwwwCwCww", "wwwwCwwCwwwwwwwwwwCwCCwCwwCwwwCwwwwwCwwwwwwwwwCwwC", "wwCwwwCwwwCwwwwwwwwwwCwwwwCwwwwwwwwwwwwwCCCwwwwwww", "wwwwCCwCwCwwwwwCwwwwwwwwwwwwwwwCwwwwwwwwwwwCwwwwww", "wCwwwwwCwwwCwwwwCwCwwwwwwwCwCwwwwwwwCwwwwwwwwCwwww", "wwwwwwwwwwwwCCwwwwwwwwCwwwwwwwwCwwwCwwwwwwwwCCCwww", "wwwwwwwwwwwwwwwwwwwwwwwwCwwCwwwwwwCwwwwwwwwwCwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwCwCwwwwwwwwwwwwwwwwwwC", "wwwwwCwwwwCwwwwwwCwwwwwwwwCwwwwwCwwwwwwwwwwwwwCwww", "wwwwwwwwwwwwCwwwwCwCwwwwwCwwwwwwwwwwwwwwwwwwwCwwww", "wwCwwwwwwwwwwwwCCwwwwwwwwwCCwwwwCwwwwwwwwwCCwwCwww", "wwCwwwwwwwwwwwCwwwwwwCwwCwwCwwwwwwwwwwwwwwwwwwwwCC", "wwCwwCwCCwCwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwCwCwwwww", "wwCwwwwwwwwwwwwwCwCwwwwwwwwCwwwCwwwwwwwwwwwwwwwwww", "wwwwwwwwCwwwwwwwCwwwCwCwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwCwwwwwwwwwwwwCwCwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwww", "wwwwwwwwwwwwwCwwwwwwwwwwwwwwwCwwwCwCwwwCwwwwwwwwww", "wwwCwwCCwwwwwwwwwwwwwCwCwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwCwwwCCwwwwwwCwwwwwww", "wwwCwwwCwwwwwCwwwwwwwwwwwwwwwwwCCwCwwwwCCwwwCwwwww", "wwwwCwwwwwwwwwCwwwwwwwwCwwwwwCwwwwwwwwwCwwwwwwwCww", "wwCwwwwwwwwwwwwwwwwwCwwwwwwCwwwwwwwwCwwwCwwCwCwwCw", "CCwwwwwwwCwwwwwwwwwwCwwwwwwwCwwCwwwwwwwwwwCwwwwwww", "wwwwwwwwCwwCwwwwwwwwwwwwwCwwwCwwwwwwCwwCwCCwwwwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string trail = "^..^^.^.^.^..^^..^^..^..^^^.^.^..^^^.^.^^^^..^...^";
    vector<string> plans = {"wwwwwwwwwwwwwwwwwwwwwwwwwwCwwwCwwwwCCwwCwwwwwwwwww", "wwwwwwwCwwwwwwwCwwwCwwwwwwCwCwwwCwwwwCwCwCwwwwwwww", "wCwwwwwwwwwwwwwwwwwwwwwCwwwCwwwwwCwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwCwwwwwwwwwCwwwwwwCwwwCwCwwwwCw", "wCwwwwwwCwwCwwCwwwCwwwwwwwwwwwwCwwwCCCwCwwwwwwwwww", "wwwwwwCwCwwwwwCwwCwwwwwwwwwwwwwwwwwwwwwwwwwwwwCCww", "wwwwwwCCwwwCwwwCwwwwCCwwwwwwwwCwCwwwCwwwwwwwCwwwCC", "wCCwwwwwwwwwwwCwwCwwwwCwCCwwwCwwCwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwCwwwwwwwwwCwwwwwwCwwwwwwwwwwwCwwwwwwww", "wwwwwwCwwwwwwwwwwwwwwCCwwwwwwCwwwwwwwwwwwwwwCwwwww", "wwwwwwwwwwwwwCwwwwCwwwwwwwwwwwwwwwwwwwCwwwwwwCCwwC", "wwwwwwwwwwwwwCwwwwwwwCwwwCwwCwwwwwwCwwwCwwwCwwwwww", "wwwwwwwwwwwwwCwwCwwwwwwwwwCCwwwwwwwwwwCwwwwwwwwwwC", "wwwwwwwwwwwwwwwwwwCwwwwwwwwwwCwwwwwwwwwCwwwwwwwwww", "wwCwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwCCCwwwwwwwwwww", "wwCwCwwwwwwwwwwwwwwwwwCwwwwwwwwwCwwCwwwwwwwwwwwCww", "wwwwwwwwwwCwwCwwCCCwwwwCwCCwCwCwwwwwwwwwwwwwwwwwww", "wwwwwCwwwwwwCwwwwwwwwCwwwwwwwwwwCwCwwwwwwwwCwwwwww", "wwCCwwwCCwwwwwwwCwwwwwCwwwwwCwwCwwCCCwCCwwwwwwwwwC", "wwwwwwwCwCwCCwwCwwwwwCwwCCwwwwwwwwwCwwCCwCwwwwwwww", "CwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwwww", "wwwwCwwwwwwwwwwwwwwCwwwwwwwwwwCwCwwCwwwwwCwwwwwwww", "wCwCwCwwwwwwwwwwwCwwwwwwwwwwwwwCwwCwwwwwwwwCwwwwww", "wwwCwwwwwwwCwwwwwwwCwCwwCCwwwwwwwwwwwwCCCwCwwwwwww", "wwwwCwwwCwwwwwCwCwwCwwwwwwwwwwwCwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwCwwwwwCwwwwwwwwwwwwwwwCwwwwwwwCwwwwww", "wwwwwwwwwCwwwCwwCwCwwwwwwwwCCwwwwwCCwwwwwwwCwwwwww", "wwwwCwwwwwwwwwwwCwwwwwwCwwwwwCwwwwwwwwwCwwwwwwwwCw", "wwCwwwwwCwwwCwwwCwwwwwwwwwwwwwwwwwwwwwwwwwwwwCwwww", "CwwwwwCwwwCwCwwwwCCwwwwCwwCwwwwwwwwCCwwCwwwwwCwwCw", "CwwwwwwCwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwwwwCwwwwwww", "wwwCCwwwwwwwwwwwwwwwCwwCCwwwwwwCwwCwwwwCwwwwwwCwww", "wwwwCwwwCCwwCwwCwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwwCww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwCwCwCwCwwwwwwwwwww", "wCwwwwwwwCwCwwwwwwCwCwwCCwwwwwwCwCwwwCwwCwwwCwwwww", "wwCwwCwwwwwCwwCwwwwCwwwwCwwwwCwCwCwwCwwwwCwwwCwwww", "wwCCwwwwwwwwCwwwwwCCwwCwwwwCwwwCwwwwwwwCwwwwwwwwww", "wwwwwCwwCwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwww", "wCCwwwCCwwwwCwCwwwCwCwwwCwCwCwwCwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwCwwwwCwwwwCwwwwCwwwwwwwwwwwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string trail = "^.^.^^.^..^^.^^^.^..^^^........^.^.^^..^....^^^^^.";
    vector<string> plans = {"wwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwCwwwwwwwwwwwwwwwwwwCwCwwwwwwwwwwwwwwwwwC", "CwwwwwCwwwwwwwCwwwwwwwCwwwwwwCwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwCwwwwwwwwwwwwCwwwCCwwwwwwCwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwCwwwwwCCwwwwwwwwwwwwwwwwwwCwwwwwwCwwwwwwCwwwwww", "CCwwwwwwwCwCwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwCwww", "wwwwwwwwwwwwwwCwCwwCwwwwwwwwwwwwwwwCwCwwwwwwwwwwwC", "wwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwCwwwwCwCwwwwwwCwwww", "wwwwwwwwwwwwwwwwwwCwwwwCwwCCwwwwwwwwwCwwwwwwwwwwww", "wwwwwwwwwwCCwwwwwwwwwwwwwwwCwwwwwwwwwCwwwwCwwwwwww", "wwwCwwwwwwwwwwCCwwCwwwwwwwwwwwCwwwwwwwwCwwwwwwwwCw", "wwwwwwwwwwwwwCwwwCwwCwwwwwwwwwwwCwwwwwwCwwwwwCwCCC", "wwwwCwwwwwwwwwwwwwwCwwwwwwwwwwwwwCwwwCwCwwwwwCwwww", "wwwwwwCwwwwwwwwwwwwCwwwwwwwCwwwwwwwwwwwwwwwCwwwwww", "wwCwwwwwCwwwwCwCwwwwwwwCwwwwwwCwwwwwCwwCwwwwwCwwww", "wwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwww", "wwwCCwwwwwwwwwwwwwwwwwwwwwCCCwwwwwwwwwCwwwwwwwwwww", "wCwwwCwwwwCwwwwCwwwwwwwwwCwwwCwwCwwwwCwwwwwwCwwwww", "wwwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwCwwwwwwwwwwww", "wCwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwCCwwwwwwwCwwwwwww", "wwCCwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwCwCwCwwww", "wwwwwwwwwwwCwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwC", "wwwwwwwwwwCwwwwwwwwwwwwwwwwwwCwwwwCCwwwwwwwwwwwCww", "wwwwwwwwwwwwwwwwwwwwwwwwCCwwCwwwwwwwwwwwwwwwwwCwww", "wwwCwwCwwCCwwwwwwCwwwwwwwwwwCwwwwCwCwwwwwwwwwwCwww", "CwwwwCwwwwCwwwwwwwwCwwwCwwwwCwwCwwwwwwwwCwwwwwwwww", "wwwwwwwwwwCwwwwCwwwwCwwCwwwwwwwwwwCwwwwwCwwwwwwwww", "wwwCwwwwwwwwwwwwwwwCCwwwwwwwwwwwCwwwwwCwwwwwwwwwww", "wwwwwwwwwCwwwwwwwwwwwwwwCwCwwwwwwCwCwCwwCwwwCwwwww", "wwwCwCwwwwwwwwwwCwwwwwwwwwCwwCwwwwwwwwwwwwwwwwwwww", "CwwwwwCwwwwwwwwwwwwwwwwwwwwCwwwwwCCwwCwwCwwwwwwwww", "CwwwCCwwCwwwwwwwwwCwCCwwwwCwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwCwwwwwwwwwwCwwwwwwwwwwwwwwwwCwwCwwwwwww", "wwwwwCwwwwCwwwwwwwwwwwwCwwwCwCwCwwwwwwCCwCwwwwwwww", "wwwwwwwCwCCwCwwwwwwwwwwwwwwCwwwwCwwwwwwCwwwwwwwCww", "wwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwCwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwCwwwCwwwwCwwwwwCwwwwwCwwwwww", "wwCwwwwwwwwCwwwwCwwwwwwwwwwCwwwwwwwCwwwwwwCwwwwwCC", "CwwwwwwwwwwwwwwwwCCwCwwCwwwwwwwwwwwwwwwwwCCwwwwwww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string trail = "..................................................";
    vector<string> plans = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCwwwwwwwwwwCCCCCCCCCCCCCCCCCCCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string trail = "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    vector<string> plans = {"wwwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwCwwwwwwwwwwwwwwwwwwwwwwwwwCwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string trail = "^^....^^^...";
    vector<string> plans = {"CwwCwwCwwCww", "wwwCwCwwwCww", "wwwwCwwwwCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string trail = "^^^^";
    vector<string> plans = {"wwww", "wwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string trail = "...";
    vector<string> plans = {"CCw", "CCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string trail = "^^.^^^^";
    vector<string> plans = {"wwCwwwC", "wwwCwww", "wCwwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string trail = "..";
    vector<string> plans = {"ww", "CC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string trail = "..............";
    vector<string> plans = {"CwCwCwCwCwCwCw", "CwwCwwCwwCwwCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string trail = "..";
    vector<string> plans = {"CC", "CC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string trail = "^^....^^^...";
    vector<string> plans = {"CwwCwwCwwCww", "wwwCwCwwwCww", "wwwwCwwwwCww", "wwCwCwwwwCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string trail = "^^^^";
    vector<string> plans = {"CCCC", "CCCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string trail = "...";
    vector<string> plans = {"wCw", "wCC", "CCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string trail = ".^....";
    vector<string> plans = {"wCwwww", "wwCCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string trail = "....";
    vector<string> plans = {"wwww", "wwwC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string trail = "^..";
    vector<string> plans = {"CwC", "CCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string trail = "^^^";
    vector<string> plans = {"CCw", "CCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string trail = "^^^";
    vector<string> plans = {"CCC", "CCC", "CCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string trail = "^^^^^";
    vector<string> plans = {"CCCCC", "CCwCC"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string trail = "^^^...^";
    vector<string> plans = {"Cwwwwww", "wCwwwww", "wwCwwww", "wwwCCww"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string trail = "....";
    vector<string> plans = {"wwww", "wwwC", "wCCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string trail = "^.^";
    vector<string> plans = {"Cww", "wCw"};
    Trekking* pObj = new Trekking();
    clock_t start = clock();
    int result = pObj->findCamps(trail, plans);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21595683&rd=10669&pm=7650
********************************************************************************
#include <string> 
#include <vector> 
#include <map> 
#include <list> 
#include <set> 
#include <queue> 
#include <iostream> 
#include <sstream> 
#include <stack> 
#include <deque> 
#include <cmath> 
#include <memory.h> 
#include <cstdlib> 
#include <cstdio> 
#include <cctype> 
#include <algorithm> 
#include <utility> 
using namespace std; 
 
typedef unsigned long long   uint64; 
typedef long long  int64; 
typedef unsigned  uint; 
typedef unsigned char  uchar; 
typedef vector<int>  VInt; 
typedef vector<string>  VStr; 
typedef map<int, int>  MapI; 
 
#define PB(what)  push_back(what) 
#define FOR(i, from, to)   for(i = from; i<(to); ++i) 
#define FORI(i, from, to)   for(i = from; i<=(to); ++i) 
#define FORD(i, from, to)   for(i = from; i>(to); --i) 
#define FORDI(i, from, to)   for(i = from; i>=(to); --i) 
#define FORS(i, from, to, step)   for(i = from; i<(to); i+=step) 
#define FORSI(i, from, to, step)   for(i = from; i<=(to); i+=step) 
#define REP(i, to)  for(i = 0; i<(to); ++i) 
#define REPI(i, to)  for(i = 0; i<=(to); ++i) 
 
#define min(a, b)   (((a) < (b)) ? (a) : (b)) 
#define max(a, b)   (((a) > (b)) ? (a) : (b)) 
#define ALL(a)     (a).begin(), (a).end() 
#define INF     (2000000000) 
#define INF_MIN  (-2000000000) 
 
class Trekking { 
  public: 
  int findCamps(string trail, vector <string> plans) 
  { 
    int mn=20000000; 
    for (int i=0; i<plans.size(); ++i) 
    { 
      int cnt=0,j; 
      for (j=0; j<trail.size(); ++j) 
      { 
        if (plans[i][j] == 'C') 
        { 
          ++cnt; 
          if (trail[j] == '^') break; 
        } 
      } 
      if (j == trail.size()) 
      { 
        mn = min(mn, cnt); 
      } 
    } 
    if (mn > 10000000) return -1; else return mn;     
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/