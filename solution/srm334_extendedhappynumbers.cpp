/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7244
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

class ExtendedHappyNumbers {
public:
    long calcTheSum(int A, int B, int K);
};

long ExtendedHappyNumbers::calcTheSum(int A, int B, int K) {
    long ret;
    return ret;
}


int test0() {
    int A = 13;
    int B = 13;
    int K = 2;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 1;
    int B = 5;
    int K = 2;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 10;
    int B = 99;
    int K = 1;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 450;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 535;
    int B = 538;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 820;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 72637;
    int B = 74236;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11789917;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 100000;
    int B = 400000;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5169721292;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 1;
    int B = 1000000;
    int K = 1;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4999996;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 1;
    int B = 1000000;
    int K = 2;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3449108;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 1;
    int B = 1000000;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 160104496;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 1;
    int B = 1000000;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 662296074;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 1;
    int B = 1000000;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6399861874;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 1;
    int B = 1000000;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17031865483;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 1;
    int B = 1;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 2;
    int B = 2;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 999999;
    int B = 999999;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5619;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 999999;
    int B = 999999;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 309;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 568625;
    int B = 621730;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 978533935;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 670270;
    int B = 810950;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 95153223;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 854744;
    int B = 971170;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2194469088;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 476423;
    int B = 491337;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2515259;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 242739;
    int B = 840550;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3872455375;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 222558;
    int B = 543391;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1970098456;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 112843;
    int B = 445295;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2009503692;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 822402;
    int B = 909381;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 14099100;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 943019;
    int B = 986251;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 28690265;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 772328;
    int B = 982900;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 33823866;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 664486;
    int B = 775299;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1955466546;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 984799;
    int B = 994910;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 62963877;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 176725;
    int B = 731853;
    int K = 2;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1913156;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 343782;
    int B = 559543;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3801037388;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 95563;
    int B = 615898;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 82927342;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 853244;
    int B = 963813;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17628851;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 786558;
    int B = 978964;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3672572090;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 233616;
    int B = 869623;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11428330857;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 190015;
    int B = 738105;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3479382561;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 984572;
    int B = 986912;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1518223;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 95506;
    int B = 769624;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 107923684;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 854990;
    int B = 874785;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3197612;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 713111;
    int B = 916052;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 33160169;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 103454;
    int B = 105991;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 37842086;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 940911;
    int B = 962628;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 393226747;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 720841;
    int B = 726017;
    int K = 1;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 25884;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 408088;
    int B = 628656;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1402436454;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 367107;
    int B = 695991;
    int K = 1;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1644426;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 239072;
    int B = 742764;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 80655956;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 232040;
    int B = 396659;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 25972811;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 441925;
    int B = 709354;
    int K = 2;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 923870;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 288411;
    int B = 590095;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1894517320;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 835746;
    int B = 837884;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1331533;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 190918;
    int B = 261935;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10742235;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 436115;
    int B = 500637;
    int K = 1;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 322610;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 314423;
    int B = 520705;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 33337440;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 110706;
    int B = 532823;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 67225380;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 50425;
    int B = 647687;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 95469633;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 381832;
    int B = 496887;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2029335895;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A = 818648;
    int B = 983398;
    int K = 1;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 823752;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A = 811629;
    int B = 876592;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 449437168;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 402757;
    int B = 950032;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 367974407;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 577260;
    int B = 665132;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1609236767;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A = 753721;
    int B = 836741;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1553958826;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 125945;
    int B = 817759;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4422341415;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A = 588950;
    int B = 787112;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 134018239;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 740923;
    int B = 940171;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3728420695;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 518554;
    int B = 753707;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4143643049;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A = 896686;
    int B = 958314;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 40923299;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A = 905439;
    int B = 909645;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2756821;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A = 106031;
    int B = 133842;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17282141;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A = 197709;
    int B = 270506;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 10926867;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A = 757551;
    int B = 982135;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 36135598;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A = 6033;
    int B = 895106;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 590240188;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A = 743729;
    int B = 761411;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 12385279;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A = 640808;
    int B = 932547;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2005740356;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A = 338590;
    int B = 959556;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4123964502;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A = 438681;
    int B = 488244;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 833657679;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A = 624270;
    int B = 902896;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 186194394;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A = 50932;
    int B = 291683;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3774424464;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A = 57390;
    int B = 86673;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 413438186;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A = 764470;
    int B = 968857;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1408164454;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A = 133902;
    int B = 648198;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8967071180;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A = 668710;
    int B = 768987;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 67997327;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int A = 233089;
    int B = 880967;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 104160405;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A = 376023;
    int B = 799495;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 68335942;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A = 914477;
    int B = 921696;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 53547104;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A = 507348;
    int B = 831313;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5761884357;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A = 425434;
    int B = 817104;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2595407649;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A = 656264;
    int B = 978002;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 214593087;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A = 809028;
    int B = 970012;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1103920660;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A = 570006;
    int B = 653284;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1530539059;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A = 93836;
    int B = 389691;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 191564227;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A = 137067;
    int B = 282771;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 23019783;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A = 408112;
    int B = 998188;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3928835167;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A = 671649;
    int B = 713051;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 786593034;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A = 142632;
    int B = 998611;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5561378008;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A = 831133;
    int B = 987534;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2976784946;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int A = 222714;
    int B = 240056;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 90342843;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A = 590077;
    int B = 923592;
    int K = 3;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 54316662;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A = 25678;
    int B = 25678;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5619;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int A = 117888;
    int B = 117888;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 309;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int A = 234556;
    int B = 234556;
    int K = 4;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int A = 3;
    int B = 3;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int A = 7;
    int B = 7;
    int K = 5;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int A = 100000;
    int B = 400000;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5169721292;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int A = 1;
    int B = 1000000;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17031865483;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int A = 1234;
    int B = 926134;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 15675272554;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int A = 1;
    int B = 999999;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17031865482;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int A = 999999;
    int B = 999999;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5619;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int A = 1000000;
    int B = 1000000;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int A = 10;
    int B = 99;
    int K = 1;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 450;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int A = 1;
    int B = 998765;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17014040712;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int A = 1;
    int B = 100000;
    int K = 6;
    ExtendedHappyNumbers* pObj = new ExtendedHappyNumbers();
    clock_t start = clock();
    long result = pObj->calcTheSum(A, B, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1120996038;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=10658&pm=7244
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
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
#define MAX(f,w) ({ int _mm=(1<<31); f _mm>?=(w); _mm; })
typedef long long LL;
 
const int MAX = 4000000;
 
int POW[10];
int cache[MAX];
 
int f(int x) {
  int res = 0;
  while(x) { 
    res += POW[x%10];
    x/=10;
  }
  return res;
}
 
int happy(int x) {
  if(cache[x]>=0) return cache[x];
  if(cache[x]==-2) {
    int y = x;
    int m = x;
    do {
      y = f(y);
      m = min(m,y);
    } while(y!=x);
    cache[x]=m;
    return m;
  }
  cache[x]=-2;
  int y = f(x);
  int mm = happy(y);
  mm = min(mm, x);
  cache[x]=mm;
  return mm;
}
 
struct ExtendedHappyNumbers {
long long calcTheSum(int A, int B, int K) {
  REP(i,10) POW[i]=int(pow(double(i),double(K)));
  memset(cache,-1,sizeof(cache));
  LL res = 0;
  FOR(i,A,B) res += happy(i);
  return res;
}
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/