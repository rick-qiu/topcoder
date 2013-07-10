/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6041
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

class Projections {
public:
    vector<int> count(string front, string right);
};

vector<int> Projections::count(string front, string right) {
    vector<int> ret;
    return ret;
}


int test0() {
    string front = "x";
    string right = "x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string front = "x.";
    string right = ".x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string front = "xxxx";
    string right = "x..x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string front = "x.x.x.x";
    string right = "x.x.x.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 16};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string front = "x...xx..x.xxx..x.xx.";
    string right = ".xx..xxx.xx.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 70};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string front = ".x..x.xxx.xxxxxxxxxxx......x.x.";
    string right = "x.xx..x..x...x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 108};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string front = ".x.xxx.xxxxx.xx.xx...xxxx.xxx...x";
    string right = "x...x..x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 63};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string front = ".x.x";
    string right = "xxx.xx...xxx.x.xxx.xx.xx.x.x.x.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 38};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string front = ".x....x.x.x...x.x.xx.xx.x..xxx..";
    string right = "...xx.x.x.x.x...xx.x.....xx..xx.xx.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 224};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string front = ".x..x..xx..x.xx..x.xx...x.x..xx.";
    string right = "xxxxxx.xxx..x...xxxx.xxx.xxx......x...xx.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 336};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string front = "xx....xx.xx..x...x..x.x.x.xxxx.xx.x..x.xx";
    string right = ".x...xxx.xx..xxxx..x..x.xxx..";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 315};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string front = "x.";
    string right = "..xx...xx......xxx....x.....";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string front = "..x.x..xxxx..xxxxx..xxx.xxx";
    string right = "xxx..x..xxxxx.x..xxxxx.xxx...x.xxx.x.x.xxxx.x.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 493};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string front = "x.x.x.x.xx.xx.xx.xxx.x..";
    string right = ".xx..xx.x..x...x.x.xxx..x.x...xxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 252};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string front = "...x....xx...xx...xx....xx...x";
    string right = "xxx.x.....x.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 50};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string front = "..x.xx...xxxx.x..xx.xxxxx.x.xx..x.xx..x.xxxx";
    string right = "xx..x.xxx.x....x...x.xx.xx..";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 338};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string front = ".....xx.xx.";
    string right = "x...x.xxxxxxx..xx.x..x.xxxxxxxx...xx.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 92};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string front = ".x.x.x.xxx.xx...x...x.x..xx.";
    string right = ".x....x.xx..xxx.x...x.x..";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 130};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string front = "xx";
    string right = "..x.x.x.xxx.xx...xx.x.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 22};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string front = "..xx.x..x.....x.xxxxx";
    string right = "....xx.x.x..x.xx.x.x.xx..x.xx.xx...xx..x.....x..";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 200};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string front = "xx.....x.";
    string right = "x.x..xxxx.....x..x.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 27};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string front = ".x..x.xx.x...x.x....x.x..x...xx";
    string right = "x.....x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 24};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string front = "x.";
    string right = "xxxxxx.x.xxxxxxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 16};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string front = ".x.x.x...xxxxxx...xx.x..xxxxx.xxxxx...xx.x.xx";
    string right = "....xx.xxx.x.xx..xx......";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 270};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string front = "..x..xxx.xx.x..x.x";
    string right = "x.....x..xxx....";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 45};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string front = "xxx...xxx..xx.x....xx.";
    string right = "..xx...x.xxx.x.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 77};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string front = ".xxxxx..x..xx...";
    string right = "xxx.....x..xx.x........xx....x.x.x.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 96};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string front = "xx.x.....x.xxxxx...x.....xx";
    string right = ".xxx..x.xx..";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 72};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string front = "x.";
    string right = "xxxxxxxxxxx...x....xx..x..x.xx.x.x.x.xxxx....";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 25};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string front = "..xxxx...x..x.x...xx..xx...x";
    string right = ".xxx.xxxx.x..x.x.x.xx......xx...xx...xx...x.xx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 264};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string front = ".xx...xx.xxxx.....xx....x.x.x....xxx.....x..x.";
    string right = ".x.x..xxx.xx..x..xxx..xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 252};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string front = "xx.xx.x..x..xxx..x.xxx...xx....x.x...x.xx...x..";
    string right = "..x....xxxx.xxxxxx.x.x.xx...xxxxxx.xx....x.x..x.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 567};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string front = "...xxx.....x.x.xxx..xx.xxxxx.xxx.";
    string right = ".....x.xxxxxx....x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 144};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string front = "...xxx..x.xx..xxx....x.x.";
    string right = ".xxx.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 33};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string front = "x.x.x.xxxxx";
    string right = ".......xxxxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 56};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string front = "x";
    string right = "xx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string front = "x...xx..x.xxx..x.xx.";
    string right = ".xx..xxx.xx.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 70};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string front = "x...xx..x.xxx..x.xx.";
    string right = ".xx..xxx.xx.xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 100};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string front = "xx";
    string right = "xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string front = "x.x.x.x";
    string right = "x.x.xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 20};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string front = ".xx..xxx.xx.";
    string right = "x...xx..x.xxx..x.xx.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 70};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string front = ".x.";
    string right = "xxxx.xx.x...x.xx..xx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string front = "x";
    string right = "x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string front = ".x.";
    string right = ".x..x..x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string front = ".xx..xxx.xx..xx..xxx.xx..xx..xxx.xx.";
    string right = "x...xx..x.xxx..x.xx..xx..xxx.xx.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 357};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string front = "xx..";
    string right = "xxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string front = "xx";
    string right = "..xx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string front = "xx...";
    string right = "xxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string front = ".xx..xxx.xx..xx..xxx.xx..xx..xxx.xx.";
    string right = "x...xx..x.xxx..x.xx..xx..xxx.xx.xxxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 483};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string front = "x.";
    string right = "xxxx..";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string front = "x.x";
    string right = "xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string front = "xx";
    string right = "x.x.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string front = ".x";
    string right = "xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string front = "x.x.x.x";
    string right = "x.x.x.x.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 20};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string front = "x..";
    string right = "xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string front = "x";
    string right = ".x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string front = "..x.";
    string right = ".xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string front = "...x.x.xxx";
    string right = "x.xxx.x.x.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 35};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string front = ".xx.xx.xx";
    string right = "x...xx..x.xxx..x.xx.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 60};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string front = "x.";
    string right = "xx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string front = "x..x";
    string right = "xxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string front = "x.";
    string right = ".xxxxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string front = "x";
    string right = "xxxxxxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string front = "x..";
    string right = ".xx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string front = "xx.";
    string right = "xxxxxxxxxxxxxxxxxxxxxxxxxxx.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 56};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string front = ".x.....x.x...x.....x..x.xx...xxx..x...x....x.x..xx";
    string right = "x.xxxxxxxxxxxxxx.xxxxxxxxxx.xxxxxxxxxxxxx.xxxx.xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45, 765};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string front = "xxxxx.x.....xx.x.x..x..x....xx...";
    string right = "...xx.x.x.x..x.....xx......x...x......xx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 168};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string front = "x";
    string right = "x.x.x.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string front = "x...xx..";
    string right = ".xx..xxx.xx.";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 21};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string front = "xx..xx..xx..xx..xx..xx..xxxx....";
    string right = ".......xx....xxx...";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 80};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string front = "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.";
    string right = ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 625};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string front = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.";
    string right = ".x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 47};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string front = "x.";
    string right = "xxxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string front = "xx";
    string right = "..xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string front = "x";
    string right = ".xxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string front = "x";
    string right = "xxxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string front = ".x...";
    string right = ".xx.x";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string front = ".x";
    string right = "xx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string front = ".xx.";
    string right = "xxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string front = "x";
    string right = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    Projections* pObj = new Projections();
    clock_t start = clock();
    vector<int> result = pObj->count(front, right);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 50};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8363863&rd=9820&pm=6041
********************************************************************************
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <utility> 
#include <vector> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
 
using namespace std; 
 
class Projections { 
public: 
  vector <int> count(string a, string b) { 
    int i, m, n; 
    vector<int> ret; 
 
    for (m = i = 0; i < a.size(); i++) 
      if (a[i] == 'x') m++; 
 
    for (n = i = 0; i < b.size(); i++) 
      if (b[i] == 'x') n++; 
 
    ret.push_back(max(m, n)); 
    ret.push_back(m*n); 
    return ret; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/