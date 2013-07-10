/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6498
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

class ParallelepipedUnion {
public:
    int getVolume(vector<string> parallelepipeds);
};

int ParallelepipedUnion::getVolume(vector<string> parallelepipeds) {
    int ret;
    return ret;
}


int test0() {
    vector<string> parallelepipeds = {"1 1 1 4 4 2", "3 2 1 5 3 3"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> parallelepipeds = {"1 1 1 2 2 2", "3 3 3 4 4 4"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
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
    vector<string> parallelepipeds = {"1 10 20 5 15 23", "2 12 22 3 14 23"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> parallelepipeds = {"28 31 21 67 60 81", "60 1 21 67 50 81"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 80460;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> parallelepipeds = {"34 3 50 37 6 53", "36 1 51 38 4 55"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> parallelepipeds = {"32 35 15 57 49 70", "73 10 82 86 16 90"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 19874;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> parallelepipeds = {"43 31 21 65 48 78", "16 28 2 43 30 11"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 21804;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> parallelepipeds = {"72 53 3 90 70 5", "33 20 5 72 49 8"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 4005;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> parallelepipeds = {"40 45 76 42 69 98", "42 14 40 76 45 76"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 39000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> parallelepipeds = {"14 38 8 30 42 15", "41 40 23 69 43 65"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 3976;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> parallelepipeds = {"54 92 49 57 95 59", "53 96 58 54 97 68"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> parallelepipeds = {"52 26 24 54 51 31", "54 28 31 57 68 61"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 3950;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> parallelepipeds = {"66 13 5 90 14 54", "53 15 42 75 18 66"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2760;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> parallelepipeds = {"72 21 60 75 47 69", "71 47 41 74 82 61"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2802;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> parallelepipeds = {"38 3 40 41 4 62", "56 5 51 88 8 62"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 1122;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> parallelepipeds = {"4 41 10 79 42 14", "27 38 30 79 41 78"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 7788;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> parallelepipeds = {"19 29 32 46 68 83", "19 22 4 77 29 32"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 65071;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> parallelepipeds = {"20 11 64 24 14 65", "21 12 66 24 15 69"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> parallelepipeds = {"71 34 70 72 73 93", "68 29 70 71 68 78"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 1833;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> parallelepipeds = {"59 22 42 78 80 62", "31 46 53 60 80 86"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 54272;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> parallelepipeds = {"32 53 49 62 87 76", "83 53 11 92 95 76"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 52110;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> parallelepipeds = {"20 70 3 59 74 74", "25 21 25 59 70 74"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 92710;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> parallelepipeds = {"40 61 22 64 76 74", "6 61 10 64 82 55"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 61650;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> parallelepipeds = {"33 29 26 76 62 60", "11 29 26 76 87 74"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 180960;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> parallelepipeds = {"83 5 7 93 14 86", "31 21 34 58 67 84"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 69210;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> parallelepipeds = {"40 45 18 56 86 48", "10 86 13 14 89 52"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 20148;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> parallelepipeds = {"19 6 17 22 41 58", "22 2 4 24 63 17"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 5891;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> parallelepipeds = {"44 20 44 64 74 60", "13 5 25 84 17 53"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 41136;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> parallelepipeds = {"48 13 64 73 16 89", "43 14 11 48 17 91"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 3075;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> parallelepipeds = {"14 42 44 58 96 47", "55 19 43 81 97 45"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 11022;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> parallelepipeds = {"41 90 27 57 93 30", "13 89 25 64 93 26"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 348;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> parallelepipeds = {"27 6 6 32 49 74", "32 23 36 41 49 71"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 22810;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> parallelepipeds = {"36 47 21 54 64 44", "5 39 10 62 55 44"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 34734;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> parallelepipeds = {"22 47 61 25 50 64", "21 46 59 25 50 65"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> parallelepipeds = {"21 46 18 47 71 75", "3 32 5 55 88 12"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 57434;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> parallelepipeds = {"17 14 88 92 94 90", "43 44 85 83 78 88"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 16080;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> parallelepipeds = {"33 46 51 53 68 83", "3 40 44 49 87 100"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 123888;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> parallelepipeds = {"29 55 28 51 70 69", "5 19 5 93 82 69"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 354816;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> parallelepipeds = {"32 37 55 68 52 68", "1 5 30 73 89 82"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 314496;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> parallelepipeds = {"21 31 27 61 79 30", "40 16 25 61 27 26"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 5991;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> parallelepipeds = {"47 36 24 90 70 81", "47 6 11 84 36 22"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 95544;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> parallelepipeds = {"10 60 35 14 83 37", "14 34 35 42 60 42"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 5280;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> parallelepipeds = {"79 58 42 83 59 43", "81 60 40 84 63 43"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> parallelepipeds = {"18 25 43 43 28 78", "23 28 65 43 29 89"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 3105;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> parallelepipeds = {"29 71 42 35 84 86", "29 21 24 45 75 63"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 36624;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> parallelepipeds = {"42 91 31 52 96 81", "42 37 31 68 84 62"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 40382;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> parallelepipeds = {"11 59 16 14 80 50", "11 9 50 12 80 52"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2284;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> parallelepipeds = {"28 66 37 58 75 56", "27 70 39 58 92 56"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 14174;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> parallelepipeds = {"20 57 93 59 93 98", "20 57 93 86 80 96"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 8883;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> parallelepipeds = {"19 37 37 22 40 40", "17 39 36 18 40 42"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> parallelepipeds = {"35 63 41 45 66 98", "45 38 45 78 66 90"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 43290;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> parallelepipeds = {"12 5 10 27 36 95", "12 7 18 52 52 55"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 90030;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> parallelepipeds = {"7 42 52 86 77 53", "8 42 52 65 76 55"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 6641;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> parallelepipeds = {"6 5 26 67 98 91", "18 28 17 58 74 91"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 385305;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> parallelepipeds = {"56 19 20 59 79 68", "56 12 21 58 18 68"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 9204;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> parallelepipeds = {"10 28 12 49 55 15", "12 44 10 49 55 12"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 3973;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> parallelepipeds = {"24 42 50 60 70 84", "5 42 74 40 52 84"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 36172;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> parallelepipeds = {"83 85 54 86 88 88", "83 87 54 85 88 97"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> parallelepipeds = {"6 70 49 91 76 72", "32 54 33 41 76 72"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 18210;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> parallelepipeds = {"45 23 6 80 84 9", "60 24 6 80 84 8"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 6405;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> parallelepipeds = {"3 95 50 27 96 87", "29 91 50 82 94 87"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 6771;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> parallelepipeds = {"43 42 38 62 81 68", "5 42 30 43 81 35"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 29640;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> parallelepipeds = {"25 19 52 28 39 67", "25 10 33 28 19 52"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 1413;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> parallelepipeds = {"12 24 16 40 59 27", "19 24 42 50 59 95"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 68285;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> parallelepipeds = {"83 7 57 86 38 60", "83 2 56 86 7 59"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> parallelepipeds = {"11 14 45 59 49 48", "29 33 45 78 55 48"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 6834;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> parallelepipeds = {"21 26 27 71 66 79", "86 15 27 93 66 79"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 122564;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> parallelepipeds = {"65 10 10 90 36 45", "65 10 45 90 28 80"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 38500;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> parallelepipeds = {"30 54 21 33 75 44", "29 54 21 32 75 45"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 1995;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> parallelepipeds = {"28 40 37 89 97 89", "28 40 37 83 82 89"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 180804;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> parallelepipeds = {"35 19 17 92 59 53", "27 19 98 94 59 99"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 84760;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> parallelepipeds = {"32 18 11 35 60 14", "32 12 14 35 76 15"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 570;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> parallelepipeds = {"32 22 11 72 74 48", "32 21 5 72 77 12"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 90560;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> parallelepipeds = {"18 15 33 36 18 79", "13 13 33 97 18 79"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 19320;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> parallelepipeds = {"29 45 93 32 48 96", "29 43 91 32 50 98"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> parallelepipeds = {"57 65 53 60 90 59", "57 20 36 60 50 59"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2520;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> parallelepipeds = {"31 29 15 96 44 53", "23 29 15 31 87 53"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 54682;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> parallelepipeds = {"26 54 42 77 65 62", "26 54 42 78 65 49"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 11297;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> parallelepipeds = {"32 42 24 86 60 71", "32 5 52 86 66 71"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 89802;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> parallelepipeds = {"58 59 57 72 60 73", "58 28 38 72 60 73"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 15680;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> parallelepipeds = {"35 50 18 83 86 45", "35 50 5 83 86 13"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 60480;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> parallelepipeds = {"23 37 20 41 54 72", "23 54 20 41 75 72"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 35568;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> parallelepipeds = {"20 35 27 63 63 65", "20 35 21 63 63 36"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 52976;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> parallelepipeds = {"93 46 12 98 89 61", "93 46 12 96 89 61"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 10535;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> parallelepipeds = {"15 28 42 18 74 58", "15 16 42 18 75 58"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2832;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> parallelepipeds = {"95 94 40 98 97 43", "95 94 42 98 97 43"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> parallelepipeds = {"22 27 64 42 52 69", "22 27 64 42 52 69"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> parallelepipeds = {"54 26 10 68 33 17", "34 41 31 82 72 74"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 64670;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> parallelepipeds = {"27 91 71 60 94 74", "29 95 74 46 96 76"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 331;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> parallelepipeds = {"56 73 11 62 78 28", "19 42 28 63 73 84"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 76894;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> parallelepipeds = {"93 34 31 96 74 60", "92 37 1 94 39 8"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 3508;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> parallelepipeds = {"5 46 47 29 49 55", "29 48 30 49 51 63"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2556;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> parallelepipeds = {"93 83 81 96 86 84", "91 81 82 95 85 83"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> parallelepipeds = {"12 20 50 13 21 55", "11 22 52 14 25 55"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> parallelepipeds = {"44 24 25 59 85 62", "14 85 42 59 95 52"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 38355;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> parallelepipeds = {"31 11 42 47 44 51", "29 12 50 59 44 62"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 15760;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> parallelepipeds = {"21 83 92 77 88 93", "40 85 91 77 88 94"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 502;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> parallelepipeds = {"41 6 29 54 21 73", "39 28 38 78 69 66"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 53352;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> parallelepipeds = {"15 48 7 76 84 10", "76 64 5 89 71 12"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 7225;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> parallelepipeds = {"12 31 71 73 42 96", "48 30 55 69 55 83"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 28703;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> parallelepipeds = {"51 41 30 80 81 65", "46 60 35 89 81 47"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 44128;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> parallelepipeds = {"45 37 36 50 42 37", "46 38 35 49 41 38"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> parallelepipeds = {"85 32 33 88 96 48", "86 8 33 87 11 36"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2889;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> parallelepipeds = {"49 16 17 81 75 20", "49 75 18 78 94 19"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 6215;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> parallelepipeds = {"19 13 81 22 16 84", "21 14 83 24 15 84"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> parallelepipeds = {"58 41 21 61 44 24", "57 42 21 61 43 22"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> parallelepipeds = {"64 18 72 70 55 75", "65 12 26 68 61 75"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 7536;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> parallelepipeds = {"24 77 17 26 78 18", "23 75 16 26 78 19"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> parallelepipeds = {"27 60 61 30 89 74", "27 62 15 30 63 39"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 1203;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> parallelepipeds = {"27 35 43 50 47 81", "27 39 12 50 45 43"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 14766;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> parallelepipeds = {"35 30 63 63 85 65", "39 30 30 64 85 70"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 55440;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> parallelepipeds = {"45 31 21 51 51 66", "25 33 21 53 51 66"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 23220;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> parallelepipeds = {"22 3 26 57 88 27", "22 28 25 57 73 28"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 6125;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> parallelepipeds = {"48 40 58 79 81 72", "71 40 59 79 81 60"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 17794;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> parallelepipeds = {"52 19 17 87 66 20", "52 19 18 87 66 19"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 4935;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> parallelepipeds = {"21 65 53 57 71 80", "12 22 13 61 61 81"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 135780;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> parallelepipeds = {"19 56 32 40 84 37", "18 14 26 52 56 44"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 28644;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> parallelepipeds = {"29 15 29 30 16 31", "28 14 27 31 17 30"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> parallelepipeds = {"45 12 16 59 24 84", "40 8 16 64 41 60"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 38880;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> parallelepipeds = {"28 36 21 39 40 77", "27 33 41 77 46 71"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 20644;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> parallelepipeds = {"56 48 95 65 55 97", "53 32 94 81 81 97"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 4116;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> parallelepipeds = {"70 26 40 91 43 69", "74 36 40 75 41 69"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 10353;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> parallelepipeds = {"52 26 26 82 60 58", "55 27 30 75 41 52"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 32640;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> parallelepipeds = {"1 1 1 99 99 99", "2 2 2 100 100 100"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 969711;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> parallelepipeds = {"1 1 1 10 10 10", "20 20 1 30 30 10"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 1629;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> parallelepipeds = {"1 1 1 2 2 11", "9 9 2 10 10 10"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> parallelepipeds = {"99 99 99 100 100 100", "99 99 99 100 100 100"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> parallelepipeds = {"28 31 21 67 60 81", "60 1 21 67 50 81"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 80460;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> parallelepipeds = {"13 22 44 100 100 100", "1 1 4 83 99 88"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 817880;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> parallelepipeds = {"11 22 33 44 55 66", "2 33 44 55 66 77"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 77682;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> parallelepipeds = {"34 3 50 37 6 53", "36 1 51 38 4 55"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> parallelepipeds = {"1 2 3 4 5 6", "1 2 3 4 8 8"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> parallelepipeds = {"1 1 1 4 4 2", "3 2 1 5 3 6"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> parallelepipeds = {"1 2 1 3 4 2", "2 1 1 4 3 2"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> parallelepipeds = {"3 2 1 5 3 3", "1 1 1 4 4 2"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> parallelepipeds = {"1 1 1 100 100 100", "1 1 1 100 100 100"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 970299;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> parallelepipeds = {"1 1 1 3 3 5", "6 6 3 8 8 7"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> parallelepipeds = {"1 1 1 4 4 2", "5 5 1 6 6 2"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> parallelepipeds = {"1 1 1 10 10 10", "20 20 5 30 30 50"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 5229;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> parallelepipeds = {"34 3 50 37 6 53", "36 1 5 99 4 55"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 9474;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> parallelepipeds = {"1 1 1 4 4 2", "3 2 1 5 3 3"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> parallelepipeds = {"2 2 2 3 3 3", "1 1 1 4 4 4"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> parallelepipeds = {"39 49 59 99 59 99", "1 2 3 99 99 99"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 912576;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> parallelepipeds = {"60 1 21 67 100 81", "60 1 21 67 50 81"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 41580;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> parallelepipeds = {"1 1 1 5 5 5", "50 50 1 100 100 5"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 10064;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> parallelepipeds = {"1 1 1 5 5 5", "50 50 50 100 100 100"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 125064;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> parallelepipeds = {"1 1 1 2 2 2", "3 3 1 4 4 2"};
    ParallelepipedUnion* pObj = new ParallelepipedUnion();
    clock_t start = clock();
    int result = pObj->getVolume(parallelepipeds);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=9992&pm=6498
********************************************************************************
// I think it is good to submit wrong solutions sometimes to give others challenging opportunities. 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
#line 3 "ParallelepipedUnion.cc" 
 
class ParallelepipedUnion { 
  public: 
  int getVolume(vector <string> parallelepipeds) { 
    // !FDI 
    int x1,y1,z1, x2,y2,z2, x3,y3,z3, x4,y4,z4; 
    sscanf(parallelepipeds[0].c_str(), "%d%d%d%d%d%d", &x1,&y1,&z1,&x2,&y2,&z2); 
    sscanf(parallelepipeds[1].c_str(), "%d%d%d%d%d%d", &x3,&y3,&z3,&x4,&y4,&z4); 
//  return "Now you should be able to see that this is"; 
//  return "a comment, thanks to syntax highlighting"; 
    return (x2-x1)*(y2-y1)*(z2-z1)+(x4-x3)*(y4-y3)*(z4-z3) - 
      (((x2 <? x4) - (x1 >? x3)) >? 0) *  
      (((y2 <? y4) - (y1 >? y3)) >? 0) *  
      (((z2 <? z4) - (z1 >? z3)) >? 0); 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/