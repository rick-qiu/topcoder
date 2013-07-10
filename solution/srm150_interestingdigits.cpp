/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1523
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

class InterestingDigits {
public:
    vector<int> digits(int base);
};

vector<int> InterestingDigits::digits(int base) {
    vector<int> ret;
    return ret;
}


int test0() {
    int base = 10;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int base = 3;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int base = 9;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int base = 26;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 25};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int base = 30;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int base = 4;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int base = 5;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int base = 6;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int base = 7;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 6};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int base = 8;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int base = 11;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 10};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int base = 12;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int base = 13;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 6, 12};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int base = 14;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int base = 15;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7, 14};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int base = 16;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 15};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int base = 17;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8, 16};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int base = 18;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int base = 19;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 6, 9, 18};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int base = 20;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int base = 21;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 10, 20};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int base = 22;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7, 21};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int base = 23;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 11, 22};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int base = 24;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int base = 25;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 6, 8, 12, 24};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int base = 27;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 13, 26};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int base = 28;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9, 27};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int base = 29;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 7, 14, 28};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int base = 27;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 13, 26};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int base = 3;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int base = 30;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int base = 23;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 11, 22};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int base = 26;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 25};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int base = 13;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 6, 12};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int base = 16;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 15};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int base = 9;
    InterestingDigits* pObj = new InterestingDigits();
    clock_t start = clock();
    vector<int> result = pObj->digits(base);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 8};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4555&pm=1523
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
class InterestingDigits { 
public: 
vector <int> digits(int base) { 
  int i, j, k, x, y, z, n; 
  vector <int> ret; 
 
  for( int i = 2; i < base; i++ ) if( base%i == 1 ) ret.push_back(i); 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/