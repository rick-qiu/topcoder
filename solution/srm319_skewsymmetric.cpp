/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6151
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

class SkewSymmetric {
public:
    int minChanges(vector<string> M);
};

int SkewSymmetric::minChanges(vector<string> M) {
    int ret;
    return ret;
}


int test0() {
    vector<string> M = {"1 2 8", "-2 1 0", "3 99 3"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> M = {"1 2 8 10", "-2 1 0 3", "3 99 3 2", "0 0 0 1"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> M = {"0 1", "-1 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> M = {"0 1 1 1 1 1", "-1 0 1 1 1 1", "-1 -1 0 1 1 1", "-1 -1 -1 0 1 1", "-1 -1 -1 -1 0 1", "0 0 0 0 0 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> M = {"0 0 0 0", "0 0 0 0", "0 0 0 0", "0 0 0 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> M = {"-34 -20 24 60 -53 -6 -62 -28", "-35 -75 92 77 -58 -66 -20 -58", "-13 -26 -1 -26 37 49 33 -37", "-27 15 98 -78 -79 -6 -24 6", "-95 -57 -11 -47 -15 -83 90 -12", "16 24 9 -91 17 99 -28 -75", "-87 -92 -91 -3 -60 -48 -50 0", "-50 -6 -36 46 -77 88 27 -90"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> M = {"90 -39 -43 -83 -90 87 0 16", "60 -79 11 71 99 95 -7 53", "-86 77 -54 53 -27 31 57 70", "8 54 21 27 -37 26 9 -63", "32 89 8 5 -4 89 -10 96", "73 -83 64 -43 26 -45 36 -37", "73 -83 40 -3 85 -38 87 73", "36 92 -96 98 -25 -15 26 -22"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> M = {"75 65 -38 -26 -61 74", "49 58 -23 -74 -7 -84", "-8 81 0 34 86 1", "95 -95 87 36 84 95", "-34 37 -17 -2 75 6", "-69 54 54 -31 -49 32"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> M = {"99 75", "9 65"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> M = {"90 -77 65", "-97 -45 -11", "-34 71 -31"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> M = {"95 -43 6 27 57 85 63 -3", "-56 -28 -37 67 -94 -4 33 -47", "-79 28 -89 -91 -24 86 58 -78", "36 -25 -58 -50 26 1 70 9", "-39 -57 -35 -4 -53 -37 -36 -27", "66 -73 36 2 54 91 -90 -2", "29 -65 -38 -63 39 57 -71 -7", "-36 10 16 -76 -89 -25 44 17"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> M = {"-85 -62 -19", "6 9 -98", "-46 18 23"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> M = {"81 -97 52 -29", "28 20 17 83", "34 -2 -71 14", "21 -92 39 -66"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> M = {"86 -66 -71 91 -14 -51", "82 -13 -43 -12 70 -9", "59 13 -83 28 8 -43", "-18 -49 -88 -88 76 -25", "-85 39 2 28 86 -93", "-80 -73 -98 54 76 76"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> M = {"-39 24 56 68 36 -85 10", "-72 29 7 -32 17 57 -36", "61 -49 -26 -32 41 72 0", "-36 16 93 67 -92 37 37", "71 77 38 38 34 -50 31", "75 -39 49 10 -47 73 -56", "11 -74 48 51 53 89 13"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> M = {"-73 82 -60", "80 -68 83", "-25 -27 69"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> M = {"-69 23 10 -28 -8 9 -12", "-29 -86 -83 33 -50 -79 -57", "94 -71 63 57 -29 -93 41", "-88 -70 -6 -21 -58 -64 87", "-74 80 48 -27 47 19 -96", "8 24 60 -96 -95 -81 57", "-42 -78 83 55 -4 19 17"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> M = {"-81 45 -6 35 -64 28 -38", "87 -76 69 -56 -69 -71 -82", "84 49 -33 15 -88 -78 33", "-22 6 -35 -8 14 -64 21", "25 -84 91 35 -22 44 -75", "96 -45 -99 86 -4 41 73", "-54 5 90 -88 32 -1 76"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> M = {"66 -9 -70 59 -17 -46", "22 6 42 -6 -43 -4", "-16 -25 33 -6 -73 93", "-88 -57 -92 48 -67 -19", "-1 66 -77 -20 91 97", "43 -1 53 68 -68 -95"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> M = {"-51 -65 -42", "-15 17 34", "4 -48 -90"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> M = {"59 -17 20 5 -70 -66 38 4 -42", "-52 52 -68 27 -61 4 10 85 61", "-68 92 -81 0 -45 32 91 58 -45", "58 -24 -98 22 -30 28 18 82 -29", "26 -18 19 -76 19 -88 -69 -19 -10", "84 -69 25 46 82 -99 -62 22 86", "89 86 -72 -79 -92 5 -66 -13 7", "-1 -18 -59 78 -43 7 -39 -76 -45", "70 40 -33 0 58 39 80 93 5"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> M = {"-96 54 -33 76 2 72 -97", "-75 -58 12 -77 -81 -60 43", "-29 15 -41 -51 -71 25 26", "19 -86 -79 36 -66 0 -23", "28 87 95 89 0 78 90", "-52 58 61 55 81 -82 -82", "54 45 -53 91 -10 0 -9"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> M = {"64 21", "44 -97"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> M = {"56 -76 -95", "-66 -43 -6", "-74 -17 -35"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> M = {"28 16", "62 -88"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> M = {"53 83", "28 -33"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> M = {"86 49 -59 -29 -88 1", "-45 -15 19 43 -55 -67", "92 -8 55 40 19 4", "64 94 99 -57 -30 -27", "58 -54 58 97 -96 47", "84 -86 -95 -14 -57 -76"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> M = {"14 71 75 58 -57 47 -53 -48 11", "-83 -55 -55 26 -33 -34 29 -72 93", "11 -29 -30 7 50 4 86 -53 69", "-61 65 96 -51 87 10 -9 -7 -74", "65 -65 -22 1 -38 -92 -37 -66 3", "-45 2 -1 91 -43 -7 -81 -63 70", "-9 -61 81 -69 86 -78 64 10 75", "4 80 -78 58 92 15 -29 -12 -74", "-58 39 35 -97 -91 -15 17 -55 -78"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> M = {"-49 82 -70 14 -44 -83", "-87 -11 -29 -37 30 -46", "-47 -74 68 -90 -76 -2", "-5 5 26 -8 -9 60", "-22 -27 -14 59 62 -85", "-34 -9 -71 -75 -70 16"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> M = {"-42 -66 8", "-12 -61 94", "-20 -9 -19"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> M = {"-60 -41 -83 -8 -5 15", "-65 1 -55 -27 43 -99", "-23 -42 -69 67 98 -94", "-7 -36 0 -85 -31 -44", "-86 86 18 -56 87 -30", "27 -13 73 -16 87 -94"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> M = {"-33 94", "76 48"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> M = {"14 -3 -7 61 -75 93 -95", "0 90 -26 51 73 87 -20", "89 -17 -51 50 -9 -79 0", "-42 -6 -99 -18 -42 -46 40", "-89 82 5 85 99 -18 -77", "51 -92 7 79 79 -84 41", "81 32 66 28 -91 -96 -12"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> M = {"-60 -98", "85 -61"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> M = {"34 90 12 -12 -68 -86 -35 -9", "-14 -16 -8 -82 39 -3 -33 47", "39 39 90 -90 77 -99 50 23", "67 -4 -36 -76 -81 42 -50 86", "8 -79 1 99 44 42 -35 41", "-2 -2 -53 -77 42 49 -74 24", "-61 -57 -60 19 -14 74 -4 -22", "65 45 72 -58 -56 -1 -84 36"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> M = {"91 -93", "-93 79"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> M = {"90 91 -64 53 56 64 -71 79", "-15 26 31 -23 76 93 90 80", "-44 -72 77 31 83 -60 -3 84", "99 18 -69 39 -27 -27 44 99", "39 -9 -48 -27 -16 -66 -53 -16", "-34 -7 -7 -97 13 -49 60 -93", "99 -1 -89 -88 19 5 75 -53", "-11 5 -57 82 -51 -89 39 91"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> M = {"-51 -5 -60 -5 94 65 -92 71 59", "20 -80 -15 15 -89 68 51 42 -24", "-5 40 -65 -5 21 -96 -73 0 84", "13 -32 -51 48 -12 -77 -16 -22 -97", "21 -53 76 -17 -13 36 -42 73 80", "71 -55 -59 3 22 36 17 -1 41", "-21 49 75 -70 30 20 -81 25 -11", "56 61 -97 -17 -31 -91 -79 0 -27", "-63 42 8 83 49 -10 -36 -83 55"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> M = {"-4 0 -79 10 -58 60 -43", "78 -28 -52 39 -4 18 95", "-98 32 -63 -72 64 -87 91", "76 43 -22 -69 -9 -70 88", "-90 63 58 49 64 42 47", "90 -10 -79 -23 -60 -40 -72", "-22 4 76 -48 3 -65 66"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> M = {"-69 -64 85 -36 -15", "-16 47 -80 -59 55", "-24 -80 -2 -60 4", "60 -18 -6 32 -88", "-32 -80 -80 -71 -88"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> M = {"35 32 64 -24 -83 -92 93", "-92 -22 -3 79 34 -70 -20", "-49 -34 -49 -90 -90 -73 -20", "-15 -92 93 98 -38 35 24", "49 -30 -67 49 -92 66 -72", "-44 57 -28 -58 -90 95 42", "-6 -33 -73 34 21 -1 93"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> M = {"53 -78", "-37 -87"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> M = {"-94 -10 -81 24 -83 64 -19 -54", "77 49 23 3 30 -36 49 -38", "-38 -2 40 21 -87 -87 -13 18", "-28 84 -42 -14 99 -83 57 -76", "12 40 52 1 40 -57 -44 -33", "2 59 -60 -53 99 83 15 -90", "-76 79 56 84 30 47 53 -60", "68 -82 64 -74 -61 -84 -79 -8"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> M = {"40 -83 -73 -27", "81 7 -30 -51", "53 -64 0 97", "-52 30 -19 43"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> M = {"53 -55 33 80 -6 18 -45 -14", "-49 24 -22 30 0 36 63 76", "90 -64 78 -4 -12 -73 74 78", "99 49 96 -41 40 -71 -56 98", "29 85 15 56 -13 98 -75 75", "72 0 9 -52 50 55 3 99", "-33 17 82 -99 -13 0 -95 -53", "-47 32 98 -56 54 3 46 -98"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> M = {"83 20 24 -44 79 -9", "86 -75 1 96 -31 -15", "56 60 -99 79 50 53", "-36 94 3 95 10 16", "49 30 -44 -12 -84 97", "5 57 -61 -6 -82 81"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> M = {"40 51 -32 7 -40 -71 -12 12 14", "-54 -7 87 -34 18 84 -86 74 -87", "-56 -44 58 -29 -66 -56 82 20 -57", "-98 30 -71 -9 -92 -39 19 29 74", "6 -22 83 29 -24 -51 43 54 -84", "-36 -63 47 6 25 -56 58 43 80", "-61 -62 -7 15 3 76 95 -43 53", "-4 46 -14 -46 74 -38 -3 59 47", "87 -35 24 53 11 -10 58 -96 26"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> M = {"-3 -32 17 67", "91 -64 -2 -81", "29 62 53 52", "60 -81 79 57"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> M = {"-65 -10 -4", "-38 -29 -35", "79 50 -83"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> M = {"61 -56 87 -15 -34 -46 -86 21", "-49 -35 -96 24 -44 -47 -65 -87", "97 84 -72 89 42 83 -31 -43", "79 -72 -65 1 97 -58 42 -5", "61 56 -49 52 43 -40 -95 59", "65 71 -84 50 -7 -89 -51 40", "62 -79 98 -97 80 11 76 74", "37 82 55 -88 12 -91 92 64"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> M = {"8 -60 -17 -87 89 -30 4 93", "34 59 -95 47 20 -87 57 -52", "44 76 44 -19 13 -75 90 92", "70 54 5 77 -32 -29 -81 39", "2 -90 -70 86 20 98 48 48", "22 22 -47 32 76 -1 -2 -19", "83 32 -91 61 -97 -66 -52 25", "16 -69 58 87 -76 -8 17 92"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> M = {"-19 35 13", "-37 -22 -61", "5 -78 45"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> M = {"35 -38 64 5 67 -24 -76", "78 -16 -91 -80 -57 -54 -55", "-22 -91 48 -4 -13 34 92", "-40 4 -35 -6 7 99 -4", "-11 27 -97 -97 -74 54 -13", "98 -69 -81 19 -71 6 -83", "-8 71 17 45 64 -97 52"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> M = {"86 13 -60 64 98", "-47 -76 13 -90 45", "65 73 -57 57 -55", "-86 45 -33 -57 -59", "-63 -57 -84 -61 -78"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> M = {"-53 -96 -14", "56 -35 79", "-41 -50 28"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> M = {"-5 -14 -82 -34 78 -69 60 -11", "56 -57 79 -28 43 -80 73 89", "85 45 -73 -95 2 34 -38 -36", "-61 33 85 90 41 -86 11 93", "-57 92 -88 97 -61 42 45 41", "-97 -40 -28 -87 25 -77 58 69", "-97 -43 38 -20 56 57 64 33", "12 0 -98 40 16 36 -42 -63"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> M = {"-30 -76 58 4 10 -71 38 61 98", "41 -53 -73 38 -39 -16 32 71 87", "-77 94 59 -28 17 -92 65 -40 29", "59 -93 99 -91 -73 -41 -91 96 -16", "-66 -75 -89 65 84 -93 4 88 42", "-73 -20 -29 -48 98 55 -2 -6 -28", "23 68 -76 31 -9 -21 -86 -38 68", "95 -68 75 59 -59 -40 -47 43 2", "-54 34 -21 15 27 96 24 74 58"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> M = {"10 9 87 -36 61 -81 98 -95", "-91 8 -15 -91 -84 -67 -12 89", "-45 74 30 57 15 -44 -67 -65", "-53 0 29 -50 0 -68 -62 -88", "91 3 41 4 88 52 87 -64", "40 43 91 -63 45 25 12 -17", "70 17 -48 41 -39 -26 -83 -31", "3 -48 -55 -1 65 28 -68 54"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> M = {"-93 -23 -49 -18 -74", "-37 18 -79 -51 41", "-93 -49 7 55 14", "-4 -35 -56 63 35", "-21 -51 10 -71 13"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> M = {"24 -18 -26", "33 93 53", "57 -19 96"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> M = {"71 -88 93 26 88 89", "-98 11 82 43 -83 -66", "-85 -27 76 74 -87 -55", "-75 99 -31 -73 0 -55", "-96 -82 71 -46 62 -3", "-7 -56 -39 89 -26 56"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> M = {"-38 51 0 62", "-33 99 -32 -87", "70 99 -51 -32", "-59 -47 25 -79"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> M = {"-74 54 -59 -78 -49 -44 15", "-30 -9 22 14 -25 -89 -36", "44 -46 44 99 0 -77 88", "51 91 -40 50 25 26 20", "30 -69 -84 -9 20 -1 -76", "-33 23 6 67 92 82 87", "64 -36 45 -70 70 -27 56"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> M = {"0 1 2 3 4 5 6 7 8 9", "-1 0 2 3 4 5 6 7 8 9", "-1 -2 0 3 4 5 6 7 8 9", "-1 -2 -3 0 4 5 6 7 8 9", "-1 -2 -3 -4 0 5 6 7 8 9", "-1 -2 -3 -4 -5 0 6 7 8 9", "-1 -2 -3 -4 -5 -6 0 7 8 9", "-1 -2 -3 -4 -5 -6 -7 0 8 9", "-1 -2 -3 -4 -5 -6 -7 -8 0 9", "-1 -2 -3 -4 -5 -6 -7 8 -9 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> M = {"0 10 20 30 40 50 60 70 80 90", "-10 0 20 30 40 50 60 70 80 90", "-20 -20 0 30 40 50 60 70 80 90", "-30 -30 -30 0 40 50 60 70 80 90", "-40 -40 -40 -40 0 50 60 70 80 90", "-50 -50 -50 -50 -50 0 60 70 80 90", "-60 -60 -60 -60 -60 -60 0 70 80 90", "-70 -70 -70 -70 -70 -70 -70 0 80 90", "-80 -80 -80 -80 -80 -80 -80 -80 0 90", "-90 -90 -90 -90 -90 -90 -90 -90 -90 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
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
    vector<string> M = {"1 0", "0 1"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> M = {"0 1 1 1 1 1", "-1 0 1 1 1 1", "-1 -1 0 1 1 1", "-1 -1 -1 0 1 1", "-1 -1 -1 -1 0 1", "0 0 0 0 0 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> M = {"1 2 8", "-2 1 0", "3 99 3"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> M = {"0 35 45", "-35 0 4", "-45 -4 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> M = {"0 1", "0 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> M = {"0 10 0", "-10 0 0", "0 0 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> M = {"0 21", "1 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> M = {"2 5 8 97 45 2", "4 7 8 9 2 1", "1 2 4 5 6 3", "5 88 99 66 4 7", "2 4 55 7 12 56", "55 7 95 78 42 1"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> M = {"0 1", "1 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> M = {"1 0 0 0 0 0 0 0 0 0", "0 1 0 0 0 0 0 0 0 0", "0 0 1 0 0 0 0 0 0 0", "0 0 0 1 0 0 0 0 0 0", "0 0 0 0 1 0 0 0 0 0", "0 0 0 0 0 1 0 0 0 0", "0 0 0 0 0 0 1 0 0 0", "0 0 0 0 0 0 0 1 0 0", "0 0 0 0 0 0 0 0 1 0", "0 0 0 0 0 0 0 0 0 1"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> M = {"0 2", "2 0"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> M = {"1 3", "3 1"};
    SkewSymmetric* pObj = new SkewSymmetric();
    clock_t start = clock();
    int result = pObj->minChanges(M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652321&rd=9999&pm=6151
********************************************************************************
#include <sstream> 
#include <string> 
#include <vector> 
#include <set> 
#include <map> 
#include <algorithm> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
 
class SkewSymmetric{ 
public: 
  int minChanges(vector<string> M){ 
    int n = M.size(),i,j,a[25][25],ans=0; 
    for(i=0;i<n;i++) 
    { 
      istringstream sin(M[i]); 
      for(j=0;j<n;j++) 
        sin>>a[i][j]; 
    } 
    for(i=0;i<n;i++) 
    { 
      if(a[i][i]!=0) 
        a[i][i]=0,ans++; 
      for(j=i+1;j<n;j++) 
      { 
        if(a[i][j]!=-1*a[j][i]) 
          ans++; 
      } 
    } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/