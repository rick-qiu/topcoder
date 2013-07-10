/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11869
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

class KingdomAndPassword {
public:
    long newPassword(long oldPassword, vector<int> restrictedDigits);
};

long KingdomAndPassword::newPassword(long oldPassword, vector<int> restrictedDigits) {
    long ret;
    return ret;
}


int test0() {
    long oldPassword = 548;
    vector<int> restrictedDigits = {5, 1, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 485;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long oldPassword = 7777;
    vector<int> restrictedDigits = {4, 7, 4, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long oldPassword = 58;
    vector<int> restrictedDigits = {4, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long oldPassword = 172;
    vector<int> restrictedDigits = {4, 7, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 127;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long oldPassword = 241529363573463;
    vector<int> restrictedDigits = {1, 4, 5, 7, 3, 9, 8, 1, 7, 6, 3, 2, 6, 4, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 239676554423331;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long oldPassword = 172;
    vector<int> restrictedDigits = {1, 7, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 217;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long oldPassword = 1;
    vector<int> restrictedDigits = {1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long oldPassword = 9999999999999999;
    vector<int> restrictedDigits = {8, 3, 6, 6, 2, 1, 4, 6, 1, 2, 6, 5, 1, 7, 6, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999999999999;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long oldPassword = 9999999999999999;
    vector<int> restrictedDigits = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long oldPassword = 6669982649;
    vector<int> restrictedDigits = {9, 6, 9, 4, 6, 6, 6, 9, 8, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 6826499669;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long oldPassword = 2371232579661552;
    vector<int> restrictedDigits = {5, 5, 7, 6, 3, 7, 2, 1, 2, 3, 6, 2, 1, 5, 9, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 2369767555312221;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long oldPassword = 4689479974398;
    vector<int> restrictedDigits = {7, 4, 3, 8, 9, 9, 6, 9, 8, 7, 4, 9, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 4689479899743;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long oldPassword = 46128;
    vector<int> restrictedDigits = {2, 6, 1, 8, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 48216;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long oldPassword = 64271513;
    vector<int> restrictedDigits = {5, 7, 6, 1, 2, 1, 3, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 64271513;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long oldPassword = 9151;
    vector<int> restrictedDigits = {9, 1, 5, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1915;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long oldPassword = 23171;
    vector<int> restrictedDigits = {1, 7, 1, 3, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 23711;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long oldPassword = 441462224;
    vector<int> restrictedDigits = {1, 4, 2, 2, 4, 4, 6, 4, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 426422414;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long oldPassword = 1985196;
    vector<int> restrictedDigits = {9, 9, 8, 5, 6, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1899165;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long oldPassword = 4338746596458;
    vector<int> restrictedDigits = {3, 4, 5, 6, 8, 8, 3, 6, 4, 7, 9, 4, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 4338746596458;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long oldPassword = 66259;
    vector<int> restrictedDigits = {5, 6, 9, 2, 6};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 65692;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long oldPassword = 589326;
    vector<int> restrictedDigits = {3, 6, 9, 5, 8, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 586923;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long oldPassword = 544823589767;
    vector<int> restrictedDigits = {3, 6, 2, 5, 4, 8, 5, 7, 9, 8, 7, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 544823657789;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long oldPassword = 855313355;
    vector<int> restrictedDigits = {3, 3, 5, 5, 8, 5, 3, 1, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 853353551;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long oldPassword = 7993235;
    vector<int> restrictedDigits = {9, 9, 3, 5, 3, 2, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 7599233;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long oldPassword = 841689983651673;
    vector<int> restrictedDigits = {8, 3, 5, 9, 6, 3, 9, 8, 1, 8, 4, 1, 6, 6, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 799888666534311;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long oldPassword = 6651564386;
    vector<int> restrictedDigits = {1, 5, 6, 8, 6, 5, 6, 3, 6, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 6651564638;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long oldPassword = 7;
    vector<int> restrictedDigits = {7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long oldPassword = 938394;
    vector<int> restrictedDigits = {9, 3, 3, 9, 4, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 899433;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long oldPassword = 8433;
    vector<int> restrictedDigits = {3, 8, 3, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 8343;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long oldPassword = 9356434931967561;
    vector<int> restrictedDigits = {9, 3, 5, 3, 4, 3, 1, 3, 4, 3, 5, 7, 6, 6, 9, 6};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 7999666554433311;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long oldPassword = 27799539;
    vector<int> restrictedDigits = {4, 1, 7, 7, 3, 6, 2, 9};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 27935997;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long oldPassword = 89994662991474;
    vector<int> restrictedDigits = {9, 6, 9, 7, 9, 2, 1, 8, 4, 6, 4, 9, 7, 9};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 89796999642441;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long oldPassword = 1395981945;
    vector<int> restrictedDigits = {4, 5, 5, 9, 1, 3, 5, 8, 9, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1395981945;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long oldPassword = 83;
    vector<int> restrictedDigits = {8, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long oldPassword = 9735633893326;
    vector<int> restrictedDigits = {3, 1, 8, 5, 1, 7, 3, 6, 8, 5, 9, 9, 3};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 9736235333689;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long oldPassword = 568519;
    vector<int> restrictedDigits = {9, 5, 7, 1, 5, 6};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 568519;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long oldPassword = 578396383741221;
    vector<int> restrictedDigits = {3, 4, 8, 8, 7, 5, 3, 1, 6, 2, 8, 1, 3, 7, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 577988643332211;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long oldPassword = 19793192822;
    vector<int> restrictedDigits = {4, 1, 5, 5, 9, 7, 2, 3, 3, 9, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 19793192822;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long oldPassword = 811632227185915;
    vector<int> restrictedDigits = {1, 1, 2, 7, 5, 1, 4, 8, 3, 1, 6, 2, 5, 8, 9};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 821112125356798;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long oldPassword = 659;
    vector<int> restrictedDigits = {5, 8, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 659;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long oldPassword = 54338445672426;
    vector<int> restrictedDigits = {8, 5, 4, 3, 6, 1, 2, 5, 4, 8, 6, 4, 4, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 54342234547686;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long oldPassword = 64454;
    vector<int> restrictedDigits = {5, 4, 5, 3, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 46445;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long oldPassword = 79637946132;
    vector<int> restrictedDigits = {3, 9, 2, 7, 7, 1, 7, 4, 2, 6, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 77996643321;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long oldPassword = 4516632961524187;
    vector<int> restrictedDigits = {4, 3, 7, 8, 3, 1, 1, 5, 1, 5, 5, 9, 2, 4, 2, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 3987666454251211;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long oldPassword = 8;
    vector<int> restrictedDigits = {8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long oldPassword = 9868564685726583;
    vector<int> restrictedDigits = {2, 6, 5, 3, 3, 2, 2, 5, 1, 8, 6, 3, 4, 8, 8, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 9868564685726538;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long oldPassword = 174;
    vector<int> restrictedDigits = {9, 1, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 174;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long oldPassword = 91296294;
    vector<int> restrictedDigits = {2, 3, 9, 7, 2, 2, 9, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 91296429;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long oldPassword = 766455314942;
    vector<int> restrictedDigits = {8, 6, 5, 6, 4, 3, 6, 2, 6, 5, 8, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 759566444321;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long oldPassword = 78937768633;
    vector<int> restrictedDigits = {6, 5, 8, 3, 6, 5, 8, 7, 6, 5, 3};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 78963336778;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long oldPassword = 31588534453243;
    vector<int> restrictedDigits = {8, 6, 5, 5, 3, 5, 3, 4, 6, 8, 3, 5, 8, 4};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 31488455542333;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long oldPassword = 9962;
    vector<int> restrictedDigits = {9, 6, 6, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 6992;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long oldPassword = 227187615844;
    vector<int> restrictedDigits = {6, 2, 1, 1, 9, 7, 9, 1, 4, 8, 4, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 218876752414;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long oldPassword = 411;
    vector<int> restrictedDigits = {1, 2, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 411;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long oldPassword = 6646113;
    vector<int> restrictedDigits = {9, 6, 1, 2, 1, 6, 3};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 6466311;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long oldPassword = 2952;
    vector<int> restrictedDigits = {2, 3, 5, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 5229;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long oldPassword = 39659883423;
    vector<int> restrictedDigits = {5, 3, 6, 6, 7, 8, 3, 3, 5, 9, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 39598684332;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long oldPassword = 483;
    vector<int> restrictedDigits = {5, 5, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 483;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long oldPassword = 54;
    vector<int> restrictedDigits = {5, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long oldPassword = 172;
    vector<int> restrictedDigits = {3, 7, 3};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 127;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long oldPassword = 132251342515551;
    vector<int> restrictedDigits = {4, 5, 5, 5, 5, 5, 2, 5, 3, 5, 1, 5, 4, 5, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 511112525253534;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long oldPassword = 3345411115342361;
    vector<int> restrictedDigits = {4, 1, 1, 3, 1, 1, 1, 6, 2, 1, 4, 1, 1, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1651544114133332;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long oldPassword = 1542545132141325;
    vector<int> restrictedDigits = {4, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 5, 5, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 5551111222335444;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long oldPassword = 6119193531479171;
    vector<int> restrictedDigits = {8, 1, 8, 1, 1, 1, 1, 6, 4, 1, 1, 2, 7, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1919977116511433;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long oldPassword = 6119193531479171;
    vector<int> restrictedDigits = {8, 1, 8, 1, 1, 1, 1, 6, 4, 1, 1, 2, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1919977116511433;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long oldPassword = 6118192831479171;
    vector<int> restrictedDigits = {8, 1, 8, 1, 1, 1, 1, 6, 4, 1, 1, 2, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1919887117611432;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long oldPassword = 6118192831579171;
    vector<int> restrictedDigits = {8, 1, 8, 1, 1, 1, 1, 6, 4, 1, 1, 2, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1919887117611532;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long oldPassword = 6118192831579171;
    vector<int> restrictedDigits = {1, 1, 8, 1, 1, 1, 1, 6, 4, 1, 1, 2, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long oldPassword = 6118192831519771;
    vector<int> restrictedDigits = {1, 1, 5, 1, 1, 1, 1, 9, 4, 1, 1, 2, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long oldPassword = 6119152831519771;
    vector<int> restrictedDigits = {1, 1, 5, 1, 1, 1, 1, 4, 4, 1, 1, 2, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long oldPassword = 6119152833519771;
    vector<int> restrictedDigits = {1, 1, 5, 1, 1, 1, 1, 4, 4, 1, 1, 1, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long oldPassword = 6119182833519771;
    vector<int> restrictedDigits = {1, 1, 5, 1, 1, 1, 1, 4, 4, 1, 1, 1, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long oldPassword = 6119182833519741;
    vector<int> restrictedDigits = {8, 1, 5, 1, 1, 1, 1, 4, 4, 1, 1, 1, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1919887116541332;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long oldPassword = 6119182833519741;
    vector<int> restrictedDigits = {8, 1, 5, 1, 1, 1, 1, 4, 2, 1, 1, 1, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1919887116541332;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long oldPassword = 6919182833519741;
    vector<int> restrictedDigits = {8, 1, 1, 1, 1, 1, 1, 4, 4, 1, 1, 1, 6, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1999887116541332;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long oldPassword = 5176858323464289;
    vector<int> restrictedDigits = {9, 7, 8, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 8818223344556679;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long oldPassword = 4752914625388618;
    vector<int> restrictedDigits = {9, 8, 7, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 8188122344556679;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long oldPassword = 241529363573463;
    vector<int> restrictedDigits = {1, 4, 5, 7, 3, 9, 8, 1, 7, 6, 3, 2, 6, 4, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 239676554423331;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long oldPassword = 548;
    vector<int> restrictedDigits = {5, 1, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 485;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long oldPassword = 9999912399945698;
    vector<int> restrictedDigits = {1, 4, 9, 9, 3, 9, 8, 1, 7, 6, 3, 2, 6, 4, 9, 8};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 9986959999994321;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long oldPassword = 1234567899787;
    vector<int> restrictedDigits = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 8, 7, 7};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 2143658777989;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long oldPassword = 1234567891234567;
    vector<int> restrictedDigits = {2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 1234567891234567;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long oldPassword = 123456781234567;
    vector<int> restrictedDigits = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 123456781234567;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long oldPassword = 123456789123451;
    vector<int> restrictedDigits = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long oldPassword = 3941;
    vector<int> restrictedDigits = {5, 9, 5, 5};
    KingdomAndPassword* pObj = new KingdomAndPassword();
    clock_t start = clock();
    long result = pObj->newPassword(oldPassword, restrictedDigits);
    clock_t end = clock();
    delete pObj;
    long expected = 4139;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22834714&rd=15170&pm=11869
********************************************************************************
#include <vector> 
#include <map> 
#include <set> 
#include <deque> 
#include <stack> 
#include <bitset> 
#include <algorithm> 
#include <sstream> 
#include <iostream> 
#include <cstdio> 
#include <queue> 
#include <cmath> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <string> 
#include <cassert> 
 
using namespace std; 
 
//----------------------zjut_DD for Topcoder------------------------------- 
typedef long long LL; 
typedef pair<int,int> PII; 
typedef vector<int> VI; 
typedef vector<string> VS; 
#define PB push_back 
#define MP make_pair 
#define ff first 
#define ss second 
#define two(w) (1<<(w)) 
#define test(x,w) (x&two(w)) 
#define sz(v) (int)v.size() 
#define all(c) c.begin(),c.end()  
#define clr(buf,val) memset(buf,val,sizeof(buf)) 
#define rep(i,l,r) for(int i=(l);i<(r);i++) 
#define repv(i,v)  for(int i=0;i<(int)v.size();i++) 
#define repi(it,c) for(typeof(c.begin()) it=c.begin();it!=c.end();++it) 
//------------------------------------------------------------------------ 
 
 
class KingdomAndPassword { 
public: 
  long long newPassword(long long oldPassword, vector <int> restrictedDigits); 
}; 
 
 
map<VI, LL> mp; 
LL old; 
VI res; 
 
bool better(LL x1, LL x2, LL old){ 
  //if( x2==-1 ) return true; 
  if( abs(x1-old) != abs(x2-old) )  
    return abs(x1-old) < abs(x2-old); 
  return x1 < x2; 
} 
 
LL dfs(VI v){ 
  if( mp.find(v)!=mp.end() ) return mp[v]; 
   
  int num=0; 
  rep(i, 1, 10){ 
    num+=v[i]; 
  } 
  if( num==0 ) return 0; 
  LL mul=1; 
  rep(i, 1, num) mul*=10; 
  int w=old/mul%10; 
  //v[0]=0 [\u31561][\u20110] 
  //v[0]=1 [\u23567][\u20110] 
  //v[0]=2 [\u22823][\u20110] 
  LL ret=-1; 
  rep(i, 1, 10)if( v[i] && res[sz(res)-num]!=i ) { 
    //if( sz(res)<4 ) printf("num=%d i=%d\n", num, i); 
    VI tmp=v; 
    tmp[i]--; 
    if( v[0]==0 ){ 
      if( i<w ) tmp[0]=1; 
      if( i>w ) tmp[0]=2; 
    } 
    LL ans=dfs(tmp); 
    if( ans!=-1 ) { 
      ans+=mul*i; 
      if( ret==-1 ) ret=ans; 
      else if( v[0]==0 && better(ans, ret, old%(mul*10)) ) ret=ans; 
      else if( v[0]==1 && ans>ret ) ret=ans; 
      else if( v[0]==2 && ans<ret ) ret=ans; 
    } 
  } 
  return mp[v]=ret; 
} 
 
long long KingdomAndPassword::newPassword(long long old, vector <int> res) { 
  mp.clear(); 
  ::old=old; 
  ::res=res; 
  VI v(10, 0); 
  while( old ){ 
    v[old%10]++; 
    old/=10; 
  } 
  return dfs(v); 
} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/