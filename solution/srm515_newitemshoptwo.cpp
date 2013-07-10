/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11510
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

class NewItemShopTwo {
public:
    double getMaximum(vector<string> customers);
};

double NewItemShopTwo::getMaximum(vector<string> customers) {
    double ret;
    return ret;
}


int test0() {
    vector<string> customers = {"8,1,80 16,100,11", "12,10,100"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> customers = {"8,1,80 16,100,11", "12,10,90 13,30,5"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 19.4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> customers = {"0,90,25 2,90,25 4,90,25 6,90,25", "7,100,80"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> customers = {"0,90,25 2,90,25 4,90,25 6,90,25", "7,100,95"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 95.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> customers = {"0,3,1 2,4,1 4,5,9 6,2,6 8,5,3 10,5,8 12,9,7 14,9,3", "1,2,3 3,8,4 5,6,2 7,6,4 9,3,3 11,8,3 13,2,7 15,9,5"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0692999999999997;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> customers = {"9,19,42 18,91,57", "6,69,12 12,86,5 13,5,17 14,13,23 15,75,22 22,54,18"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 68.45399999999997;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> customers = {"0,19,20 1,79,7 2,7,10 3,8,9 7,8,9 9,83,22 16,4,19", "5,95,5 6,97,20 8,64,11 10,61,24 14,73,26 19,68,11"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 75.4041;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> customers = {"0,49,8 2,69,26 4,8,21 5,56,20 7,17,4 11,21,17", "1,48,25 3,46,3 6,81,1 8,39,36 10,43,10 16,50,22"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 51.258800000000015;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> customers = {"2,93,9 9,44,21 18,31,11 20,62,20 22,68,17 23,25,19", "0,65,9 1,93,4 4,6,4 6,34,4 7,43,47 16,4,4 19,68,25"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 57.24960000000001;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> customers = {"21,9,55 22,36,12", "2,20,74 19,36,14"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 20.9524;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> customers = {"5,7,68 18,21,16", "6,39,51 13,23,32"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.8212;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> customers = {"8,7,68 18,52,9", "10,14,70 19,37,16"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 16.7312;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> customers = {"2,9,58 6,34,19", "3,52,38 12,14,45"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 28.8682;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> customers = {"8,9,58 16,33,26", "10,32,31 20,38,27"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 23.4326;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> customers = {"12,15,34 14,30,44", "4,40,37 23,32,20"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.737000000000002;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> customers = {"4,14,73 15,9,15", "0,22,67 10,33,20"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 21.5155;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> customers = {"9,21,48 16,8,32", "5,51,39 22,26,36"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 30.906;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> customers = {"12,14,70 20,29,16", "5,13,37 18,59,21"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 19.681599999999996;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> customers = {"17,18,56 19,26,25", "12,41,49 15,16,16"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 28.5458;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> customers = {"17,29,34 21,35,38", "4,15,33 22,38,27"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.032799999999998;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> customers = {"17,30,33 23,37,36", "4,33,45 6,10,28"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.621000000000002;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> customers = {"1,42,36 20,8,39", "5,15,68 15,63,10"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.3664;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> customers = {"1,27,56 19,14,15", "7,77,26 11,20,37"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 28.197000000000003;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> customers = {"21,54,28 22,38,19", "2,7,67 23,63,11"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.012900000000002;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> customers = {"5,26,57 22,20,21", "12,43,47 15,14,19"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.082099999999997;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> customers = {"3,30,51 4,30,32", "18,16,31 21,29,24"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.9264;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> customers = {"12,43,35 21,58,22", "8,22,46 11,9,32"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.81;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> customers = {"14,40,49 23,10,26", "2,15,67 7,35,14"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 23.992000000000004;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> customers = {"7,28,72 20,13,11", "3,51,30 21,34,20"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 31.568999999999996;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> customers = {"11,40,50 12,14,36", "7,19,26 16,25,44"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.8104;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> customers = {"12,30,68 17,15,21", "5,31,48 22,10,25"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.401000000000003;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> customers = {"4,33,60 5,28,21", "14,12,42 20,16,36"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.732;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> customers = {"18,59,34 20,28,36", "12,16,64 13,10,18"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 30.14;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> customers = {"0,2,9 2,5,3 4,1,6 5,2,8 8,2,6 11,5,1 13,8,4 14,8,5", "1,6,1 3,2,7 6,6,2 7,4,8 9,4,2 12,1,4 17,9,7 18,3,8"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 2.338300000000001;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> customers = {"1,4,1 2,8,6 4,8,5 5,5,2 6,7,5 11,3,2 12,1,8 18,9,9", "0,1,1 3,4,8 7,9,6 8,9,3 9,4,4 10,2,6 19,9,6 20,6,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.548000000000001;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> customers = {"1,8,6 2,2,6 3,5,4 7,3,4 9,9,1 12,2,6 14,2,6 19,9,3", "0,7,1 4,8,3 5,8,4 6,8,7 8,2,2 13,1,5 18,8,9 20,5,6"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1169000000000002;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> customers = {"3,7,7 5,4,7 6,7,5 7,2,5 8,5,4 10,3,2 15,7,9 18,6,7", "0,5,6 1,1,1 2,3,6 4,4,8 9,3,8 14,3,6 17,5,6 21,3,3"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.194200000000001;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> customers = {"0,7,7 2,5,7 5,5,5 6,3,3 8,7,1 12,5,9 13,2,9 16,2,3", "1,6,9 3,6,5 4,2,2 7,9,6 9,6,7 11,3,8 17,1,3 19,4,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3465999999999996;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> customers = {"0,9,2 1,9,6 2,3,2 3,1,7 9,8,7 12,7,3 21,3,2 23,7,2", "4,4,8 5,1,4 6,8,7 7,8,7 8,5,3 15,8,7 18,7,8"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8073;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> customers = {"0,9,2 2,6,3 3,3,7 4,9,6 9,1,1 14,8,9 17,2,7 18,8,5", "1,7,5 5,8,3 6,1,5 7,1,5 8,2,4 16,1,6 19,1,3"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8153;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> customers = {"0,8,6 3,9,4 6,6,8 7,8,1 9,1,7 14,7,7 22,6,1 23,4,2", "1,5,8 2,7,3 4,1,4 5,9,4 8,6,2 15,8,2 16,4,3"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0325999999999995;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> customers = {"1,4,6 5,8,6 6,3,7 7,2,2 8,8,6 13,4,3 14,7,8", "0,8,4 2,1,4 3,1,1 4,4,4 9,1,8 16,8,8 19,3,9 20,3,8"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.156599999999999;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> customers = {"3,6,8 5,8,8 7,3,6 8,8,5 9,4,2 14,8,5 15,5,4 20,9,7", "0,5,8 1,3,8 2,5,8 4,1,9 6,2,8 17,3,3 22,2,2"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.387300000000001;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> customers = {"2,7,3 4,4,9 9,3,2 15,1,4 16,4,8 18,8,5 23,2,4", "1,2,4 3,6,5 11,2,4 12,9,1 13,1,4 21,9,8 22,8,3"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4834000000000005;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> customers = {"3,1,3 5,5,1 7,7,6 11,7,4 13,1,6 14,8,9 19,1,8", "8,1,8 10,6,7 15,1,3 16,1,7 20,6,8 22,9,9 23,6,6"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2041999999999997;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> customers = {"5,52,43 13,40,25", "2,30,61 7,82,7"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 34.9318;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> customers = {"19,33,63 22,46,8", "0,46,24 4,54,18 5,59,16 6,44,9 21,44,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 42.3611;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> customers = {"2,10,48 4,82,7 13,51,24 14,57,12 16,71,2 19,46,4", "1,70,40 10,92,17 12,32,9 17,58,17 23,47,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 62.32770000000001;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> customers = {"12,75,41", "17,31,62"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 42.0898;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> customers = {"9,19,49 11,93,8 12,92,23 14,22,9 18,78,7", "4,42,3 17,31,45"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 45.35000000000001;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> customers = {"0,68,73 1,96,4 9,84,15 15,88,1 19,87,1", "4,1,12 12,73,52 13,76,17 17,12,14 20,97,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 70.75110000000001;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> customers = {"6,88,42 13,62,3 20,36,26", "21,52,59"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 57.077200000000005;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> customers = {"15,64,52", "3,50,72 6,33,2 20,8,14"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 45.856;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> customers = {"1,2,4 5,97,46 9,69,36 15,33,9 20,69,1", "0,79,32 8,43,47 12,32,15 17,26,2 19,28,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 76.1763;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> customers = {"19,97,74 21,61,1", "9,83,45 10,73,2 15,22,36 23,63,5"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 77.9642;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> customers = {"17,40,54 20,76,29", "15,94,49"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 68.3164;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> customers = {"23,80,72", "8,69,11 17,74,23 21,13,46 22,9,7"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 62.62599999999999;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> customers = {"7,6,20 22,51,42", "5,51,44 10,93,10 21,73,9"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 46.2354;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> customers = {"0,57,47 6,50,36 7,51,8 13,56,4 18,82,1 21,38,1", "11,1,68"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 52.31;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> customers = {"2,4,69 6,18,7 10,89,1 14,41,3 19,31,15 21,75,1", "3,15,57 13,40,11"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 17.998199999999997;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> customers = {"8,8,1 13,70,39 14,42,44 18,94,6", "3,49,50"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 51.49999999999999;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> customers = {"6,74,14", "2,28,72 3,79,7 5,37,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 28.132;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> customers = {"1,68,66 14,19,11 19,44,3 23,52,9", "2,97,2 22,71,70"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 63.748000000000005;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> customers = {"3,86,39 5,81,37 8,89,4 11,97,4 19,92,5", "1,40,49 4,89,33 6,32,10"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 79.6024;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> customers = {"0,84,16 1,90,24 5,64,34 6,17,15 16,37,3 21,38,4", "2,4,10 19,27,48 20,85,21 22,55,12"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 67.0998;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> customers = {"0,1,1", "1,1,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0199;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> customers = {"0,100,100", "23,1,1"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> customers = {"0,1,1", "23,100,100"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> customers = {"8,1,80 16,100,11", "12,10,90 13,30,5"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 19.4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> customers = {"1,1,1", "2,2,2"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.049600000000000005;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> customers = {"0,3,1 2,4,1 4,5,9 6,2,6 8,5,3 10,5,8 12,9,6 14,9,4", "1,2,3 3,8,4 5,6,2 7,6,4 9,3,3 11,8,3 13,2,7 15,9,5"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.064400000000001;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> customers = {"0,3,1 2,4,1 4,5,9 6,2,6 8,5,3 10,5,8 12,9,7 14,9,3", "1,2,3 3,8,4 5,6,2 7,6,4 9,3,3 11,8,3 13,2,7 15,9,5"};
    NewItemShopTwo* pObj = new NewItemShopTwo();
    clock_t start = clock();
    double result = pObj->getMaximum(customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0692999999999997;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23015823&rd=14540&pm=11510
********************************************************************************
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <algorithm> 
#include <bitset> 
#include <deque> 
#include <iostream> 
#include <iomanip> 
#include <list> 
#include <map> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
typedef long long ll; 
typedef long double ld; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <string> vs; 
 
const int INF = (int) 1E9; 
const ll LINF = (ll) 4E18; 
 
const ld PI = acos(-1.0); 
const ld EPS = 1E-11; 
 
#define FOR(i, a, b) for (int i = (a); i <= (b); i++) 
#define FORD(i, a, b) for (int i = (a); i >= (b); i--) 
#define REP(i, a) for (int i = 0; i < (a); i++) 
#define REPD(i, a) for (int i = (a) - 1; i >= 0; i--) 
#define FIT(it, v) for (typeof((v).begin())it = (v).begin(); it != (v).end(); ++it) 
#define FITD(it, v) for (typeof((v).rbegin())it = (v).rbegin(); it != (v).rend(); ++it) 
 
#define VAR(a, b) typeof(b) a(b) 
#define ALL(v) (v).begin(), (v).end() 
#define SET(a, x) memset((a), (x), sizeof(a)) 
#define SIZE(a) ((int)(a).size()) 
 
#define EXIST(a, b) (find(ALL(a), (b)) != (a).end()) 
#define SORT(x) sort(ALL(x)) 
#define GSORT(x) sort(ALL(x), greater<typeof(*((x).begin()))>()) 
#define UNIQUE(v) SORT(v); (v).resize(unique(ALL(v)) - (v).begin()) 
#define ENUM(v) FIT(it, (v)) cout << *it << " "; cout << endl 
 
#define PF push_front 
#define PB push_back 
#define MP make_pair 
#define F first 
#define S second 
 
template<typename T> T gcd(T a, T b) { return (b == 0) ? abs(a) : gcd(b, a % b); } 
template<typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; } 
template<typename T> inline T mod(T a, T b) { a %= b; if (a < 0) a += b; return a; } 
template<typename T> inline T sqr(T x) { return x * x; } 
template<typename T> inline T gmax(T a, T b) { return (a > b ? a : b); } 
template<typename T> inline T gmin(T a, T b) { return (a < b ? a : b); } 
 
template<typename T> inline string toString(T x) { ostringstream oss; oss << x; return oss.str(); } 
inline ll toInt(const string& st) { istringstream iss(st); ll x; iss >> x; return x; } 
inline ld toDouble(const string& st) { istringstream iss(st); ld x; iss >> x; return x; } 
inline string toLower(string st) { REP(i, SIZE(st)) st[i] = tolower(st[i]); return st; } 
inline string toUpper(string st) { REP(i, SIZE(st)) st[i] = toupper(st[i]); return st; } 
 
/* IMPLEMENTATION */ 
 
typedef pair <int, pair <int, pair <int, double> > > f4; 
 
f4 make4(int a, int b, int c, double d) { 
  return MP(a, MP(b, MP(c, d))); 
} 
 
class NewItemShopTwo { 
  public: 
  vector <f4> v; 
  double dfs(int level, bool f1, bool f2) { 
    if (level >= SIZE(v)) { 
      return 0; 
    } 
    int person = v[level].S.F; 
    int cost = v[level].S.S.F; 
    double p = v[level].S.S.S; 
    double k; 
    if (person == 0) { 
      if (f1) { 
        k = dfs(level + 1, true, f2); 
      } else { 
        k = p * gmax((double)cost, dfs(level + 1, true, f2)) 
          + (1 - p) * dfs(level + 1, false, f2); 
      } 
    } else { 
      if (f2) { 
        k = dfs(level + 1, f1, true); 
      } else { 
        k = p * gmax((double)cost, dfs(level + 1, f1, true)) 
          + (1 - p) * dfs(level + 1, f1, false); 
      } 
    } 
    //cerr << v[level].F << " " << f1 << " " << f2 << " " << p << " " << k << endl; 
    return k; 
  } 
  double getMaximum(vector <string> customers) { 
    v.clear(); 
    double total[5]; 
    total[0] = total[1] = 100; 
    REP(i, 2) { 
      string s = customers[i]; 
      REP(j, SIZE(s)) { 
        if (s[j] == ',') { 
          s[j] = ' '; 
        } 
      } 
      istringstream iss(s); 
      int t, c; 
      double p; 
      while (iss >> t >> c >> p) { 
        v.PB(make4(t, i, c, p / total[i])); 
        total[i] -= p; 
      } 
    } 
    SORT(v); 
    return dfs(0, false, false); 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/