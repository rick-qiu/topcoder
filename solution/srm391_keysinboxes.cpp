/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8202
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

class KeysInBoxes {
public:
    string getAllKeys(int N, int M);
};

string KeysInBoxes::getAllKeys(int N, int M) {
    string ret;
    return ret;
}


int test0() {
    int N = 2;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/2";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/3";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 3;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5/6";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 4;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "17/24";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 2;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/2";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 2;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 3;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/3";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 3;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5/6";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 3;
    int M = 3;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 13;
    int M = 13;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 14;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/14";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 14;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1506353/5045040";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 14;
    int M = 3;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "45682723/75675600";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 14;
    int M = 4;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3039177083/3632428800";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 14;
    int M = 5;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "20724488437/21794572800";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 14;
    int M = 6;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "43117036267/43589145600";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 14;
    int M = 7;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "87025015687/87178291200";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 14;
    int M = 8;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "10087969/10090080";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 14;
    int M = 9;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "29058907271/29059430400";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 14;
    int M = 10;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "4843233127/4843238400";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 14;
    int M = 11;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "87178287377/87178291200";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 14;
    int M = 12;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "21794572777/21794572800";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 14;
    int M = 13;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "87178291199/87178291200";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 14;
    int M = 14;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 15;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/15";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 15;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1532093/5405400";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 15;
    int M = 3;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "662153417/1135134000";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 15;
    int M = 4;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "22370624933/27243216000";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 15;
    int M = 5;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "38547237577/40864824000";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 15;
    int M = 6;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "161271871153/163459296000";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 16;
    int M = 15;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "20922789887999/20922789888000";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 16;
    int M = 16;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 17;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/17";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 17;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3157279/12252240";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 17;
    int M = 3;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1877404679/3430627200";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 17;
    int M = 4;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "244554744787/308756448000";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 17;
    int M = 5;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "208392092947/224550144000";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 17;
    int M = 6;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "21809665142933/22230464256000";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 17;
    int M = 7;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "44291145720611/44460928512000";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 17;
    int M = 8;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3702875698421/3705077376000";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 17;
    int M = 9;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "355662020225969/355687428096000";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 17;
    int M = 10;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "355685077385809/355687428096000";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 17;
    int M = 11;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "118562420805743/118562476032000";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 17;
    int M = 12;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "355687419369661/355687428096000";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 17;
    int M = 13;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "355687427763683/355687428096000";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 17;
    int M = 14;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "118562476029121/118562476032000";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 17;
    int M = 15;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "355687428095863/355687428096000";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 17;
    int M = 16;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "355687428095999/355687428096000";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 17;
    int M = 17;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 18;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/18";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 18;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "54394463/220540320";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 18;
    int M = 3;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "32799917663/61751289600";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 19;
    int M = 6;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "117673715514659/120679663104000";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 19;
    int M = 7;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "7560514392457891/7602818775552000";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 19;
    int M = 8;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "15190768995109163/15205637551104000";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 19;
    int M = 9;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "60814284850802981/60822550204416000";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 19;
    int M = 10;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "496503185530673/496510613913600";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 19;
    int M = 11;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "8688924430600097/8688935743488000";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 19;
    int M = 12;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "12164508958910509/12164510040883200";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 19;
    int M = 13;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "60822549918021181/60822550204416000";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 19;
    int M = 14;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "30411275096457911/30411275102208000";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 19;
    int M = 15;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "60822550204077733/60822550204416000";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 19;
    int M = 16;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "60822550204409131/60822550204416000";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 19;
    int M = 17;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "30411275102207957/30411275102208000";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 20;
    int M = 1;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/20";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 20;
    int M = 2;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "352893319/1551950400";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 20;
    int M = 3;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5892264552313/11732745024000";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 20;
    int M = 4;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "3397910830121/4512594240000";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 20;
    int M = 5;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "7650419585601887/8447576417280000";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 20;
    int M = 6;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "421073820723551/433209047040000";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 20;
    int M = 7;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "75531608767061723/76028187755520000";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 20;
    int M = 8;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "303745639691989879/304112751022080000";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 20;
    int M = 9;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "110566771649608481/110586454917120000";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 20;
    int M = 10;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "2432850898346888777/2432902008176640000";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 20;
    int M = 11;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "347556739856377241/347557429739520000";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 20;
    int M = 12;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "608225411055349517/608225502044160000";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 20;
    int M = 13;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "5631717561282199/5631717611520000";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 20;
    int M = 14;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1216451003583421799/1216451004088320000";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 20;
    int M = 15;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1216451004070392749/1216451004088320000";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 20;
    int M = 16;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "608225502043925611/608225502044160000";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 20;
    int M = 17;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "110586454917119227/110586454917120000";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 20;
    int M = 18;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "2432902008176639809/2432902008176640000";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 20;
    int M = 19;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "2432902008176639999/2432902008176640000";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 20;
    int M = 20;
    KeysInBoxes* pObj = new KeysInBoxes();
    clock_t start = clock();
    string result = pObj->getAllKeys(N, M);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=11125&pm=8202
********************************************************************************
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
long long fact[21];
long long memo[21][21];
long long doit(int N, int M) {
  if (M < 0) return 0;
  if (N == 0) return 1;
  long long& ret = memo[N][M];
  if (ret != -1) return ret;
  ret = 0;
  long long cur = 1;
  for (int i = 1; i <= N; i++) {
    ret += cur * doit(N-i, M-1);
    cur *= (N-i);
  }
  return ret;
}
 
template<typename T> T Gcd(T a, T b) {return b ? Gcd(b, a%b) : abs(a);}
 
class KeysInBoxes {
public:
string getAllKeys(int N, int M) {
  fact[0] = 1;
  for (int i = 1; i <= 20; i++) fact[i] = fact[i-1] * i;
  memset(memo, -1, sizeof(memo));
  long long num = doit(N, M), den = fact[N];
  long long gcd = Gcd(num, den);
  num /= gcd; den /= gcd;
  ostringstream sout;
  sout << num << '/' << den;
  return sout.str();
}
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/