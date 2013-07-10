/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11635
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

class RainyRoad {
public:
    string isReachable(vector<string> road);
};

string RainyRoad::isReachable(vector<string> road) {
    string ret;
    return ret;
}


int test0() {
    vector<string> road = {".W..", "...."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W..", "..W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W..W..", "...WWW."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"..", "WW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".WWWW.", "WWWWWW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W.W.W.", "W.W.W.W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".............................................W.", ".............................................W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"..", "W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"..", ".."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> road = {"..", ".W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W.", "WWW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W.", "W.W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"...", "..."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> road = {".W...", "W...."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"...W......", "WW..W.W.W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> road = {"....WW.......W.", ".WW...WW......W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"..W.W....W..........", "WW..............W.WW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> road = {"........W......W...W.....", "W.WW........WW........W.."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"..................................................", "W................................................."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> road = {"..................................................", ".WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", "W................................................W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> road = {".WWWWW.", "W.....W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"..WW.WW.WWW.WWWWWWWWW.W.W.", "WW..W..W...W.........W.W.W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> road = {".WWWWW.WWWWW.WWWW.WW.WWWWWW..WWWWWWWWWWWWWWW.", "......W.....W....W..W......WW................"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W.....", "......W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> road = {".WWW.W....W...........W...", "...............W........WW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"............W..W........W...........WW.......", "......W..........W.....W.................W..."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> road = {".WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", ".WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> road = {"...WW...W.WWW.WWWWWW.W..WW.WWWW.......WWWW.WWW..W.", "W..WW...W.WWW.WWWWWW.W..WW.WWWW.......WWWW.WWW..WW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W.W..W.W..W.WW...W..W.WW..W.W..WW..W.............", "WW...W.........W.W.WWW.W.WW.W..W......W..WW.WWWW.W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> road = {".W..WWW.W..W.WWW......W.W......W..W.W.WWW.WW.WWW..", ".W..WWW.W..W.WWW......W.W......W..W.W.WWW.WW.WWW.."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"..W.W.WW..W.W.WW..WWWWWW.WW....W....W........W....", ".WWW.W..W..W....W...W.WWW..WW.W.WWWW..WW.......WW."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> road = {"..W..W.", "WW.WW.W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> road = {".WWWWW.WWWWWWWWWWWWWWW..W.", "....W.W.....W..WW...W.WW.."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> road = {".WWWWWWWWWWWWWWW.WW.W.WWWW.W..W.W.W.WWWWWWWW.", "....W.....WWWW..W..WWWWW.WW.WW.WWW.WW.....W.W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {"....WW.", "....WWW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> road = {".WWW...WW.W.W.W.WW....WWW.", "W.W....WW.WWW...W...W.W.WW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".WWW..W....WWWW..W.WWWW.WWWW....W..WW.WW..W..", "WWWW...W..W..W.WW..W.WW.WWW..W...W..W.WW...W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> road = {".W.W.W.", "WWWW.WW"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W.W.WWWWWWWWW.WWW.WWWWW..", "WW.W.W.WWWWW.W.WWW.WWW.WW."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> road = {".W.WW.WWWWWWW.WWWWWWW.W.WWWWWWWWW.W..WWWWWWW.", ".WWWWWW.WWWWW.W..WWWWWW.WWWWWWWWW.W.WWWWWWWW."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".WWWWW.", "WWWWWW."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> road = {".WWWWWWWWWWWWWWWWWWWWWWWW.", "WWWWWWWWWWWWWWWWWWWWWWWWW."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW.", "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> road = {".W.............................................", ".W............................................."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W..", "..W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W.W.W.", "W.W.W.W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> road = {".W..", "...."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W..", ".W.."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W.", ".W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> road = {"..W.", ".W.."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> road = {"...", ".W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".WW.", "..W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".W..W..", "...WWW."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> road = {"...W.", "...W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
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
    vector<string> road = {".............................................W.", ".............................................W."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> road = {".W.", "W.W"};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> road = {"...........................................W...", "...........................................W..."};
    RainyRoad* pObj = new RainyRoad();
    clock_t start = clock();
    string result = pObj->isReachable(road);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23036995&rd=14550&pm=11635
********************************************************************************
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
 
using namespace std;
 
class RainyRoad {
public:
   string isReachable( vector <string> road ) {
     for(int i=0; i<road[0].size(); i++)
     if(road[0][i]=='W' && road[1][i]=='W') return "NO";
     return "YES";
   }
};
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/