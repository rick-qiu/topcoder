/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3491
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

class BagsOfGold {
public:
    int netGain(vector<int> bags);
};

int BagsOfGold::netGain(vector<int> bags) {
    int ret;
    return ret;
}


int test0() {
    vector<int> bags = {7, 2};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
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
    vector<int> bags = {2, 7, 3};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> bags = {1000, 1000, 1000, 1000, 1000};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> bags = {823, 912, 345, 100000, 867, 222, 991, 3, 40000};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = -58111;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> bags = {23, 35, 12, 100000, 99234, 86123, 3245};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = -83644;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> bags = {23, 35, 12, 100000, 99234, 86123, 3245, 1};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 83645;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> bags = {7, 7, 7, 7, 7, 7, 80, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = -66;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> bags = {7, 7, 7, 7, 7, 7, 7, 80, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> bags = {91, 56, 23, 45, 87, 65, 45, 45, 78, 23, 20, 41, 17, 54, 51, 51, 94, 62, 74, 42, 76, 76};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> bags = {92834, 95461, 15911, 56189, 6369, 80545, 31811, 51263, 30076, 68867, 36905, 32499, 59799, 334, 82991, 46636, 98741, 66601};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 42958;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> bags = {129};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> bags = {35463, 88121, 4362, 94457, 86235, 83680, 72686, 6003, 93069, 2015, 10436, 2139, 93162, 30380, 19067, 76335, 78941, 48620, 55887, 15679};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 101879;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> bags = {19335, 97643, 11468, 86267, 79718, 59584, 12129, 52642, 86575, 62307, 11545, 52658, 72377, 39986, 74850, 1992, 86928};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 1846;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> bags = {91883, 97793, 54567, 64714, 98624};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 82567;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> bags = {98473, 41866, 71129, 65936, 42626, 9194, 46718, 96921, 45613, 47677, 8763, 54634, 47259, 71448, 9918, 22666, 32711, 21692, 40207, 2017, 23040, 86083, 77809, 15472, 30718, 39085, 87911, 54827, 41686, 28354, 37203, 6548, 74184, 3043, 43961, 95189, 1238, 22002, 93507, 63546, 32527, 42778, 31614};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = -14953;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> bags = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> bags = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
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
    vector<int> bags = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 11, 11, 11, 11, 111, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 112, 312, 312, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 231, 31, 312};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 316;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> bags = {1234, 1233, 12, 312, 32, 23, 434, 12, 312, 45, 1234, 1233, 12, 312, 32, 23, 434, 12, 312, 45, 1234, 1233, 12, 312, 32, 23, 434, 12, 312, 45, 1234, 1233, 12, 312, 32, 23, 434, 12, 312, 45, 1234, 1233, 12, 312, 32, 23, 434, 12, 312, 45};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 1995;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> bags = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> bags = {9, 100, 1, 8};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> bags = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 66, 5, 4, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 6, 5, 4, 5, 6, 3, 4, 4, 5, 6, 3, 4, 5, 6, 3, 4, 5, 6, 3, 4, 5, 6, 3, 4, 5, 6};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> bags = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 1, 2, 3, 4, 65, 67, 2, 3, 4, 7, 2, 3, 4, 6, 6, 7, 2, 3, 4, 7, 78, 8, 82, 2, 3, 4, 7, 2, 2, 34, 4, 6, 7, 3, 2};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> bags = {100, 10, 10};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> bags = {1};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> bags = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 4, 3, 5, 4, 6, 7, 5, 6, 10, 2, 5, 4, 3, 4, 5, 6, 7, 9, 10};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> bags = {6, 4, 3, 5, 8, 8};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> bags = {1, 5, 20, 2, 1};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = -13;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> bags = {1, 2, 3, 4, 5, 6, 6, 7, 8, 767, 765, 111, 76576, 5, 64, 654, 64, 7, 7657, 76575, 64, 65, 6454, 64, 654, 65464, 7, 5435, 65, 746, 7, 546, 7, 654, 7, 5435, 547, 6, 6, 7, 6547, 7654, 6, 754, 54353, 65, 7, 8};
    BagsOfGold* pObj = new BagsOfGold();
    clock_t start = clock();
    int result = pObj->netGain(bags);
    clock_t end = clock();
    delete pObj;
    int expected = 118231;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=262936&rd=6517&pm=3491
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
 
// Real code
vector<int> bags;
class BagsOfGold  {
  public:
  map<int,int> optimal;
  int solve(int i1, int i2) {
    int key = i1*1000 + i2;
    if (optimal.count(key)) return optimal[key];
    
    if (i1 == i2) return bags[i1];
    int v1 = bags[i1] - solve(i1+1,i2);
    int v2 = bags[i2] - solve(i1, i2-1);
    v1 >?= v2;
    optimal[key] = v1;
    return v1;
  }
  
  int netGain(vector <int> _bags) {
    bags = _bags;
    return solve(0, bags.size()-1);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/