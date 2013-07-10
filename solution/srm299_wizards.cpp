/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6039
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

class Wizards {
public:
    int questions(int wizards, vector<int> hats, vector<int> hatsOnWizards);
};

int Wizards::questions(int wizards, vector<int> hats, vector<int> hatsOnWizards) {
    int ret;
    return ret;
}


int test0() {
    int wizards = 2;
    vector<int> hats = {1, 2};
    vector<int> hatsOnWizards = {1, 1};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int wizards = 2;
    vector<int> hats = {1, 2};
    vector<int> hatsOnWizards = {0, 2};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
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
    int wizards = 2;
    vector<int> hats = {2, 2};
    vector<int> hatsOnWizards = {0, 2};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int wizards = 18;
    vector<int> hats = {7, 8, 9};
    vector<int> hatsOnWizards = {5, 4, 9};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int wizards = 32;
    vector<int> hats = {9, 9, 9, 9};
    vector<int> hatsOnWizards = {8, 8, 8, 8};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int wizards = 7;
    vector<int> hats = {4, 3, 3};
    vector<int> hatsOnWizards = {1, 3, 3};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int wizards = 6;
    vector<int> hats = {4, 3, 3};
    vector<int> hatsOnWizards = {0, 3, 3};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int wizards = 2;
    vector<int> hats = {5, 1, 1};
    vector<int> hatsOnWizards = {0, 1, 1};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int wizards = 7;
    vector<int> hats = {4, 3, 3};
    vector<int> hatsOnWizards = {3, 2, 2};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
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
    int wizards = 7;
    vector<int> hats = {4, 3, 3};
    vector<int> hatsOnWizards = {4, 2, 1};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int wizards = 50;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {10, 10, 10, 10, 10};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int wizards = 50;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {13, 12, 11, 10, 4};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int wizards = 50;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {14, 14, 12, 10, 0};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int wizards = 75;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {15, 15, 15, 15, 15};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int wizards = 70;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {14, 14, 14, 14, 14};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int wizards = 50;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {13, 13, 13, 10, 1};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int wizards = 49;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {13, 13, 13, 10, 0};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int wizards = 50;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {13, 13, 13, 11, 0};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int wizards = 48;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {13, 13, 13, 9, 0};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int wizards = 39;
    vector<int> hats = {8, 8, 11, 8, 14};
    vector<int> hatsOnWizards = {5, 8, 11, 4, 11};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int wizards = 32;
    vector<int> hats = {6, 4, 5, 12, 15};
    vector<int> hatsOnWizards = {6, 4, 5, 9, 8};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int wizards = 26;
    vector<int> hats = {5, 9, 6, 9, 3};
    vector<int> hatsOnWizards = {5, 8, 6, 4, 3};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int wizards = 34;
    vector<int> hats = {11, 4, 10, 15, 11};
    vector<int> hatsOnWizards = {6, 4, 6, 7, 11};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int wizards = 25;
    vector<int> hats = {6, 5, 8, 6, 3};
    vector<int> hatsOnWizards = {6, 4, 8, 4, 3};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int wizards = 36;
    vector<int> hats = {7, 8, 7, 6, 15};
    vector<int> hatsOnWizards = {4, 7, 6, 6, 13};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int wizards = 35;
    vector<int> hats = {11, 12, 12, 11, 11};
    vector<int> hatsOnWizards = {11, 4, 6, 9, 5};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int wizards = 43;
    vector<int> hats = {4, 12, 13, 7, 13};
    vector<int> hatsOnWizards = {4, 6, 13, 7, 13};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int wizards = 33;
    vector<int> hats = {6, 5, 8, 8, 8};
    vector<int> hatsOnWizards = {6, 5, 8, 6, 8};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int wizards = 24;
    vector<int> hats = {4, 5, 5, 6, 10};
    vector<int> hatsOnWizards = {4, 4, 5, 5, 6};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int wizards = 36;
    vector<int> hats = {8, 8, 11, 8, 14};
    vector<int> hatsOnWizards = {4, 8, 11, 3, 10};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int wizards = 30;
    vector<int> hats = {6, 4, 5, 12, 15};
    vector<int> hatsOnWizards = {6, 4, 5, 8, 7};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int wizards = 24;
    vector<int> hats = {5, 9, 6, 9, 3};
    vector<int> hatsOnWizards = {5, 7, 6, 3, 3};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
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
    int wizards = 30;
    vector<int> hats = {11, 4, 10, 15, 11};
    vector<int> hatsOnWizards = {5, 4, 5, 6, 10};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int wizards = 23;
    vector<int> hats = {6, 5, 8, 6, 3};
    vector<int> hatsOnWizards = {6, 3, 8, 3, 3};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
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
    int wizards = 32;
    vector<int> hats = {7, 8, 7, 6, 15};
    vector<int> hatsOnWizards = {3, 6, 5, 6, 12};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int wizards = 30;
    vector<int> hats = {11, 12, 12, 11, 11};
    vector<int> hatsOnWizards = {10, 3, 5, 8, 4};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int wizards = 42;
    vector<int> hats = {4, 12, 13, 7, 13};
    vector<int> hatsOnWizards = {4, 5, 13, 7, 13};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int wizards = 32;
    vector<int> hats = {6, 5, 8, 8, 8};
    vector<int> hatsOnWizards = {6, 5, 8, 5, 8};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int wizards = 20;
    vector<int> hats = {4, 5, 5, 6, 10};
    vector<int> hatsOnWizards = {3, 3, 5, 4, 5};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int wizards = 1;
    vector<int> hats = {1, 1};
    vector<int> hatsOnWizards = {0, 1};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int wizards = 34;
    vector<int> hats = {12, 14, 3, 6, 11};
    vector<int> hatsOnWizards = {5, 14, 3, 6, 6};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int wizards = 27;
    vector<int> hats = {10, 6, 8, 4, 7};
    vector<int> hatsOnWizards = {7, 5, 5, 3, 7};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int wizards = 51;
    vector<int> hats = {10, 14, 11, 12, 13};
    vector<int> hatsOnWizards = {10, 10, 9, 11, 11};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int wizards = 63;
    vector<int> hats = {15, 15, 15, 15, 15};
    vector<int> hatsOnWizards = {12, 12, 12, 12, 15};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int wizards = 22;
    vector<int> hats = {12, 13, 14, 15, 7};
    vector<int> hatsOnWizards = {5, 5, 2, 5, 5};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int wizards = 59;
    vector<int> hats = {13, 14, 15, 15, 15};
    vector<int> hatsOnWizards = {8, 10, 12, 14, 15};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int wizards = 55;
    vector<int> hats = {12, 13, 14, 15, 15};
    vector<int> hatsOnWizards = {11, 11, 11, 11, 11};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int wizards = 56;
    vector<int> hats = {15, 14, 13, 12, 15};
    vector<int> hatsOnWizards = {12, 11, 12, 8, 13};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int wizards = 33;
    vector<int> hats = {15, 10, 10, 5, 4};
    vector<int> hatsOnWizards = {13, 8, 8, 3, 1};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int wizards = 18;
    vector<int> hats = {1, 7, 8, 9, 1};
    vector<int> hatsOnWizards = {0, 5, 4, 9, 0};
    Wizards* pObj = new Wizards();
    clock_t start = clock();
    int result = pObj->questions(wizards, hats, hatsOnWizards);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=9820&pm=6039
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
 
int d[16][16][16][16][16];
int tot[16][16][16][16][16][2];
int zhan[1000000][5];
 
class Wizards
{
public:
int questions(int n, vector <int> h, vector <int> ho)
{
  int a[5];
  int i,j,best,top,bottom,tmp;
  while (h.size()<5)
  {
    h.push_back(0);
    ho.push_back(0);
  }
  memset(d,0,sizeof(d));
  top=0;bottom=0;
  for (a[0]=0;a[0]<=h[0];a[0]++)
  for (a[1]=0;a[1]<=h[1];a[1]++)
  for (a[2]=0;a[2]<=h[2];a[2]++)
  for (a[3]=0;a[3]<=h[3];a[3]++)
  for (a[4]=0;a[4]<=h[4];a[4]++)
    if (a[0]+a[1]+a[2]+a[3]+a[4]==n-1)
    {
      tot[a[0]][a[1]][a[2]][a[3]][a[4]][0]=0;
      tot[a[0]][a[1]][a[2]][a[3]][a[4]][1]=0;
      for (i=0;i<5;i++)
        if (a[i]<h[i])
        {
          tot[a[0]][a[1]][a[2]][a[3]][a[4]][0]++;
          tot[a[0]][a[1]][a[2]][a[3]][a[4]][1]|=(1<<i);
        }
      if (tot[a[0]][a[1]][a[2]][a[3]][a[4]][0]<=1)
      {
        d[a[0]][a[1]][a[2]][a[3]][a[4]]=1;
        zhan[bottom][0]=a[0];
        zhan[bottom][1]=a[1];
        zhan[bottom][2]=a[2];
        zhan[bottom][3]=a[3];
        zhan[bottom][4]=a[4];
        bottom++;
      }
    }
  while (top<bottom)
  {
    a[0]=zhan[top][0];
    a[1]=zhan[top][1];
    a[2]=zhan[top][2];
    a[3]=zhan[top][3];
    a[4]=zhan[top][4];
    tmp=d[a[0]][a[1]][a[2]][a[3]][a[4]];
    for (i=0;i<5;i++)
      if (a[i]>0)
        for (j=0;j<5;j++)
          if ((j!=i)&&(a[j]<h[j]))
          {
            a[i]--;
            a[j]++;
            if ((d[a[0]][a[1]][a[2]][a[3]][a[4]]==0)&&((tot[a[0]][a[1]][a[2]][a[3]][a[4]][1]&(1<<i))!=0))
            {
              tot[a[0]][a[1]][a[2]][a[3]][a[4]][0]--;
              tot[a[0]][a[1]][a[2]][a[3]][a[4]][1]-=(1<<i);
              if (tot[a[0]][a[1]][a[2]][a[3]][a[4]][0]<=1)
              {
                d[a[0]][a[1]][a[2]][a[3]][a[4]]=tmp+1;
                zhan[bottom][0]=a[0];
                zhan[bottom][1]=a[1];
                zhan[bottom][2]=a[2];
                zhan[bottom][3]=a[3];
                zhan[bottom][4]=a[4];
                bottom++;
              }
            }
            a[j]--;
            a[i]++;
          }
    top++;
  }
  best=2000000000;
  for (j=0;j<5;j++)
  {
    for (i=0;i<5;i++)
      a[i]=ho[i];
    a[j]--;
    if ((d[a[0]][a[1]][a[2]][a[3]][a[4]]>0)&&(d[a[0]][a[1]][a[2]][a[3]][a[4]]<best))
      best=d[a[0]][a[1]][a[2]][a[3]][a[4]];
  }
  if (best==2000000000) return -1;
  else return best;
}
};

********************************************************************************
*******************************************************************************/