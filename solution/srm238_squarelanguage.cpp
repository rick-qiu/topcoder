/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3050
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

class SquareLanguage {
public:
    long howMany(vector<int> abounds, vector<int> bbounds, vector<int> cbounds, vector<int> dbounds);
};

long SquareLanguage::howMany(vector<int> abounds, vector<int> bbounds, vector<int> cbounds, vector<int> dbounds) {
    long ret;
    return ret;
}


int test0() {
    vector<int> abounds = {0, 100};
    vector<int> bbounds = {0, 100};
    vector<int> cbounds = {0, 100};
    vector<int> dbounds = {0, 100};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 10828525844240801;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> abounds = {0, 10};
    vector<int> bbounds = {0, 10};
    vector<int> cbounds = {0, 10};
    vector<int> dbounds = {0, 10};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 213826481;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> abounds = {1, 10};
    vector<int> bbounds = {1, 10};
    vector<int> cbounds = {1, 10};
    vector<int> dbounds = {1, 10};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> abounds = {0, 2};
    vector<int> bbounds = {0, 2};
    vector<int> cbounds = {0, 2};
    vector<int> dbounds = {0, 2};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 6129;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {0, 1};
    vector<int> dbounds = {0, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 224;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> abounds = {0, 0};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> abounds = {0, 100};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 201;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> abounds = {1, 100};
    vector<int> bbounds = {10, 90};
    vector<int> cbounds = {20, 80};
    vector<int> dbounds = {30, 70};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 410390615610000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> abounds = {0, 100};
    vector<int> bbounds = {0, 100};
    vector<int> cbounds = {0, 100};
    vector<int> dbounds = {1, 100};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 10615191408029899;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> abounds = {0, 20};
    vector<int> bbounds = {0, 30};
    vector<int> cbounds = {0, 40};
    vector<int> dbounds = {0, 47};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 1641220888605;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> abounds = {0, 20};
    vector<int> bbounds = {0, 30};
    vector<int> cbounds = {13, 40};
    vector<int> dbounds = {0, 29};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 299019748230;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> abounds = {3, 20};
    vector<int> bbounds = {0, 23};
    vector<int> cbounds = {0, 25};
    vector<int> dbounds = {12, 29};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 40875134976;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> abounds = {9, 20};
    vector<int> bbounds = {5, 20};
    vector<int> cbounds = {0, 20};
    vector<int> dbounds = {3, 20};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 5267275776;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> abounds = {20, 20};
    vector<int> bbounds = {0, 20};
    vector<int> cbounds = {0, 20};
    vector<int> dbounds = {20, 20};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 194481;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> abounds = {1, 1};
    vector<int> bbounds = {19, 19};
    vector<int> cbounds = {91, 91};
    vector<int> dbounds = {13, 13};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> abounds = {0, 2};
    vector<int> bbounds = {0, 2};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 57;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> abounds = {0, 0};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 1};
    vector<int> dbounds = {1, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> abounds = {0, 0};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {2, 3};
    vector<int> dbounds = {0, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> abounds = {0, 0};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 1};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> abounds = {0, 0};
    vector<int> bbounds = {0, 94};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {1, 59};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 31096445;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> abounds = {0, 0};
    vector<int> bbounds = {0, 37};
    vector<int> cbounds = {0, 59};
    vector<int> dbounds = {1, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 5198400;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> abounds = {0, 0};
    vector<int> bbounds = {1, 1};
    vector<int> cbounds = {1, 24};
    vector<int> dbounds = {1, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 576;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> abounds = {0, 0};
    vector<int> bbounds = {12, 31};
    vector<int> cbounds = {87, 97};
    vector<int> dbounds = {1, 25};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 30250000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 24};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 1323;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 75};
    vector<int> dbounds = {1, 56};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 71994344;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {0, 1};
    vector<int> dbounds = {0, 92};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 484708;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {55, 91};
    vector<int> dbounds = {0, 54};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 65974480;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {0, 80};
    vector<int> cbounds = {1, 1};
    vector<int> dbounds = {0, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 104976;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {1, 1};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> abounds = {0, 1};
    vector<int> bbounds = {5, 54};
    vector<int> cbounds = {31, 93};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 39690000;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> abounds = {0, 40};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {1, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 6724;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> abounds = {0, 6};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {0, 78};
    vector<int> dbounds = {1, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 1223236;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> abounds = {0, 19};
    vector<int> bbounds = {1, 1};
    vector<int> cbounds = {0, 15};
    vector<int> dbounds = {1, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 102400;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> abounds = {0, 13};
    vector<int> bbounds = {1, 14};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {20, 37};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 12446784;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> abounds = {0, 33};
    vector<int> bbounds = {1, 80};
    vector<int> cbounds = {0, 82};
    vector<int> dbounds = {24, 57};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 58918519705600;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> abounds = {1, 1};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {16, 27};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 576;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> abounds = {1, 1};
    vector<int> bbounds = {0, 67};
    vector<int> cbounds = {1, 24};
    vector<int> dbounds = {1, 44};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 5156388864;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> abounds = {1, 1};
    vector<int> bbounds = {1, 1};
    vector<int> cbounds = {1, 74};
    vector<int> dbounds = {0, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 21904;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> abounds = {1, 1};
    vector<int> bbounds = {1, 19};
    vector<int> cbounds = {78, 79};
    vector<int> dbounds = {0, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 5776;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> abounds = {1, 1};
    vector<int> bbounds = {25, 58};
    vector<int> cbounds = {0, 16};
    vector<int> dbounds = {1, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 334084;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> abounds = {1, 66};
    vector<int> bbounds = {0, 1};
    vector<int> cbounds = {0, 1};
    vector<int> dbounds = {0, 64};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 293367100;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> abounds = {1, 65};
    vector<int> bbounds = {1, 66};
    vector<int> cbounds = {1, 1};
    vector<int> dbounds = {0, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 73616400;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> abounds = {1, 86};
    vector<int> bbounds = {1, 71};
    vector<int> cbounds = {1, 55};
    vector<int> dbounds = {1, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 112781788900;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> abounds = {37, 73};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 1};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 2884;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> abounds = {10, 57};
    vector<int> bbounds = {1, 62};
    vector<int> cbounds = {72, 76};
    vector<int> dbounds = {0, 47};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 510138777600;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> abounds = {4, 36};
    vector<int> bbounds = {62, 65};
    vector<int> cbounds = {1, 35};
    vector<int> dbounds = {0, 11};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 3073593600;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> abounds = {0, 100};
    vector<int> bbounds = {0, 0};
    vector<int> cbounds = {0, 0};
    vector<int> dbounds = {0, 0};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 201;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> abounds = {0, 20};
    vector<int> bbounds = {0, 30};
    vector<int> cbounds = {0, 40};
    vector<int> dbounds = {0, 47};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 1641220888605;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> abounds = {1, 100};
    vector<int> bbounds = {10, 90};
    vector<int> cbounds = {20, 80};
    vector<int> dbounds = {30, 70};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 410390615610000;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> abounds = {0, 20};
    vector<int> bbounds = {0, 30};
    vector<int> cbounds = {2, 40};
    vector<int> dbounds = {0, 47};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 1485116321472;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> abounds = {0, 100};
    vector<int> bbounds = {0, 99};
    vector<int> cbounds = {1, 98};
    vector<int> dbounds = {0, 97};
    SquareLanguage* pObj = new SquareLanguage();
    clock_t start = clock();
    long result = pObj->howMany(abounds, bbounds, cbounds, dbounds);
    clock_t end = clock();
    delete pObj;
    long expected = 9409068287131800;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=346607&rd=6537&pm=3050
********************************************************************************
#include <string>   
#include <vector>   
#include <iostream>   
#include <sstream>   
#include <map>   
#include <algorithm>   
#include <cmath>   
#include <stdio.h>   
#include <set>   
#include <list>   
#include <queue>   
#include <numeric>  
using namespace std;  
typedef pair<int,int> ip;  
 
class SquareLanguage  
{ 
public: 
  long long howMany(vector <int> abounds, vector <int> bbounds, vector <int> cbounds, vector <int> dbounds) { 
    vector<vector<int> > v(4); 
    v[0]=abounds; 
    v[1]=bbounds; 
    v[2]=cbounds; 
    v[3]=dbounds; 
    vector<long long> dup(4,0); 
    long long TOT=1; 
    TOT *= abounds[1]-abounds[0]+1; 
    TOT *= abounds[1]-abounds[0]+1; 
    TOT *= bbounds[1]-bbounds[0]+1; 
    TOT *= bbounds[1]-bbounds[0]+1; 
    TOT *= cbounds[1]-cbounds[0]+1; 
    TOT *= cbounds[1]-cbounds[0]+1; 
    TOT *= dbounds[1]-dbounds[0]+1; 
    TOT *= dbounds[1]-dbounds[0]+1; 
 
    for (int q=0;q<4;q++){ 
      int s=0; 
      for (int i=0;i<4;i++) 
  s+=v[i][0]; 
      if (s==v[q][0]){ 
  dup[q]=1; 
  for (int i=0;i<4;i++) 
    if (i!=q) dup[q]*=v[i][1]-v[i][0]+1; 
  dup[q]*=v[q][1]-v[q][0]; 
  dup[q]*=v[q][1]-v[q][0]; 
      } 
    } 
    return TOT - dup[0]-dup[1]-dup[2]-dup[3]; 
  } 
}; 
 
// Powered by FileEdit 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/