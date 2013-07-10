/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7247
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

class NewMagicSquare {
public:
    vector<string> completeTheSquare(vector<string> square);
};

vector<string> NewMagicSquare::completeTheSquare(vector<string> square) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 04 05", "06 07 08 09 10", "11 12 13 14 15", "16 17 18 19 20", "21 22 23 24 25"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> square = {"?? ?? 20 ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? 05 ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 06 20 21 22", "07 08 09 10 11", "02 03 04 05 12", "13 14 15 16 17", "18 19 23 24 25"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? 24", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "21 ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> square = {"?? ?? 15 ?? ??", "02 ?? ?? ?? ??", "?? ?? ?? 07 ??", "?? ?? 16 ?? ??", "?? ?? ?? ?? 21"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 03 15 17 18", "02 08 09 10 22", "04 05 06 07 23", "11 12 16 24 25", "13 14 19 20 21"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? 12", "?? ?? ?? 22 ??", "?? ?? 21 ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 04 05", "06 07 08 09 12", "10 11 13 22 23", "14 15 21 24 25", "16 17 18 19 20"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> square = {"?? ?? ?? 04 ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? 23 ?? ??", "?? ?? ?? ?? 09"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 04 10", "11 12 13 14 15", "16 17 18 19 20", "21 22 23 24 25", "05 06 07 08 09"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> square = {"?? ?? 03 ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? 07 ??", "?? ?? ?? ?? 21"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 08 09", "10 11 12 13 14", "15 16 22 23 24", "04 05 06 07 25", "17 18 19 20 21"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> square = {"?? ?? ?? 06 ??", "?? ?? 18 ?? ??", "?? ?? ?? ?? ??", "?? ?? 03 ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> square = {"?? ?? ?? ?? 11", "?? ?? ?? ?? ??", "?? ?? ?? 24 ??", "?? ?? ?? ?? ??", "?? 21 ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> square = {"?? ?? 01 ?? ??", "?? ?? 09 ?? ??", "11 ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? 15 ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? 21 ?? ??", "?? ?? ?? 23 ??", "?? ?? ?? 25 ??", "?? 10 ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> square = {"13 ?? ?? ?? ??", "?? 25 ?? ?? ??", "?? ?? ?? ?? ??", "?? 07 ?? ?? ??", "?? 12 ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? 19 ?? ?? ??", "?? ?? ?? 11 ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 04 05", "06 07 12 13 14", "15 19 20 21 22", "08 09 10 11 16", "17 18 23 24 25"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> square = {"?? 15 ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? 01 ?? ??", "?? ?? ?? 08 ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> square = {"?? ?? 19 ?? ??", "?? ?? 16 ?? ??", "?? ?? ?? 05 ??", "?? ?? ?? ?? ??", "?? ?? 01 ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> square = {"?? ?? ?? 13 ??", "?? 23 ?? ?? ??", "25 ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? 17 ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> square = {"?? ?? ?? ?? 12", "?? ?? ?? ?? ??", "?? ?? ?? 08 ??", "07 ?? ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 09 12", "10 11 13 14 15", "04 05 06 08 16", "07 17 18 19 20", "21 22 23 24 25"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? 02", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? 06 ??", "?? 13 ?? ?? ??", "?? ?? ?? ?? ??", "23 ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? 11", "?? ?? ?? 21 ??", "?? ?? ?? ?? 08", "?? ?? ?? 19 ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 12 13 22 23", "02 03 09 10 11", "14 15 20 21 24", "04 05 06 07 08", "16 17 18 19 25"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> square = {"25 ?? ?? ?? ??", "?? ?? ?? 01 ??", "?? ?? 14 ?? ??", "?? 22 ?? ?? ??", "?? ?? ?? ?? 15"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> square = {"?? ?? 05 ?? ??", "?? ?? ?? 16 ??", "?? ?? ?? 22 ??", "?? ?? ?? ?? ??", "?? ?? ?? 02 ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? 04", "?? ?? ?? 16 ??", "?? ?? 06 ?? ??", "?? ?? ?? ?? 25"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? 21 ?? ?? ??", "?? ?? ?? 02 ??", "?? ?? 20 ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> square = {"?? ?? ?? ?? 10", "?? ?? ?? ?? 09", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 04 10", "05 06 07 08 09", "11 12 13 14 15", "16 17 18 19 20", "21 22 23 24 25"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? 09 ?? ??", "?? ?? ?? ?? ??", "?? ?? 25 ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> square = {"05 ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? 22 ?? ?? ??", "?? ?? ?? 02 ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> square = {"?? ?? 25 ?? ??", "?? ?? ?? ?? 07", "08 ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? 14 ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? 22", "?? ?? ?? ?? ??", "?? 23 ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? 13 ??", "?? ?? ?? 04 ??", "?? ?? ?? ?? 19", "?? ?? ?? 06 ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> square = {"?? ?? ?? 03 ??", "?? ?? ?? ?? ??", "?? ?? 09 ?? ??", "?? 16 ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> square = {"?? ?? ?? ?? 07", "21 ?? ?? ?? ??", "23 ?? ?? ?? ??", "?? ?? ?? ?? ??", "15 ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> square = {"25 ?? ?? ?? ??", "?? 07 ?? ?? ??", "?? ?? 21 ?? ??", "?? ?? ?? 10 ??", "18 ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> square = {"13 ?? ?? ?? ??", "?? ?? ?? 08 ??", "?? ?? ?? ?? ??", "?? ?? ?? 15 ??", "?? ?? ?? ?? 24"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"13 14 16 17 18", "01 02 03 08 09", "04 05 06 07 19", "10 11 12 15 25", "20 21 22 23 24"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> square = {"?? ?? ?? 13 ??", "?? ?? ?? ?? 03", "?? ?? ?? 18 ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> square = {"12 ?? ?? ?? ??", "?? ?? ?? ?? 09", "13 ?? ?? ?? ??", "?? 02 ?? ?? ??", "?? 21 ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"12 14 15 16 17", "03 04 05 06 09", "13 18 19 20 22", "01 02 07 08 10", "11 21 23 24 25"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> square = {"?? ?? ?? ?? 08", "?? ?? ?? 11 ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? 17 ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 04 08", "05 06 07 11 12", "09 10 13 18 19", "20 21 22 23 24", "14 15 16 17 25"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? 17 ?? ??", "09 ?? ?? ?? ??", "?? ?? ?? ?? 11", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 04 05", "12 13 17 18 19", "09 14 15 16 20", "06 07 08 10 11", "21 22 23 24 25"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> square = {"?? ?? ?? ?? ??", "10 ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? 13 ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 02 03 04 05", "10 11 12 14 15", "06 07 08 16 17", "18 19 20 21 22", "09 13 23 24 25"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> square = {"?? ?? ?? 02 ??", "?? ?? 01 ?? ??", "?? ?? 22 ?? ??", "?? ?? ?? ?? ??", "?? ?? 09 ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> square = {"?? 19 ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? 15", "?? ?? ?? ?? 14", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 19 20 21 22", "02 03 04 05 16", "06 07 08 09 15", "10 11 12 13 14", "17 18 23 24 25"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> square = {"?? ?? ?? 20 ??", "?? ?? ?? ?? ??", "?? 02 ?? ?? ??", "?? ?? ?? ?? 21", "?? ?? ?? ?? 14"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"03 04 05 20 22", "06 07 08 09 15", "01 02 23 24 25", "16 17 18 19 21", "10 11 12 13 14"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> square = {"?? 14 ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? 03 ?? ??", "?? ?? ?? 20 ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"04 14 15 16 17", "05 06 07 08 09", "01 02 03 10 11", "12 13 18 20 21", "19 22 23 24 25"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> square = {"?? ?? 20 ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? 11", "24 ?? ?? ?? ??", "?? ?? ?? ?? 13"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> square = {"?? ?? ?? ?? 25", "?? ?? ?? ?? 20", "?? ?? ?? ?? 15", "?? ?? ?? ?? 10", "?? ?? ?? ?? 05"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"21 22 23 24 25", "16 17 18 19 20", "11 12 13 14 15", "06 07 08 09 10", "01 02 03 04 05"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> square = {"21 ?? ?? ?? ??", "16 ?? ?? ?? ??", "11 ?? ?? ?? ??", "06 ?? ?? ?? ??", "01 ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"21 22 23 24 25", "16 17 18 19 20", "11 12 13 14 15", "06 07 08 09 10", "01 02 03 04 05"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> square = {"?? ?? 23 ?? ??", "?? ?? 18 ?? ??", "?? ?? 13 ?? ??", "?? ?? 08 ?? ??", "?? ?? 03 ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"04 05 23 24 25", "09 10 18 19 20", "11 12 13 14 15", "06 07 08 16 17", "01 02 03 21 22"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> square = {"?? ?? 20 ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? 05 ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 06 20 21 22", "07 08 09 10 11", "02 03 04 05 12", "13 14 15 16 17", "18 19 23 24 25"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> square = {"?? ?? 15 ?? ??", "02 ?? ?? ?? ??", "?? ?? ?? 07 ??", "?? ?? 16 ?? ??", "?? ?? ?? ?? 21"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 03 15 17 18", "02 08 09 10 22", "04 05 06 07 23", "11 12 16 24 25", "13 14 19 20 21"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> square = {"?? ?? ?? 24 ??", "?? ?? ?? 22 ??", "?? ?? ?? 19 ??", "?? ?? ?? 10 ??", "?? ?? ?? ?? 05"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"06 11 12 24 25", "13 14 15 22 23", "16 17 18 19 20", "07 08 09 10 21", "01 02 03 04 05"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? 20", "?? ?? ?? ?? 15", "?? ?? ?? ?? 10", "?? ?? ?? ?? 05"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"21 22 23 24 25", "16 17 18 19 20", "11 12 13 14 15", "06 07 08 09 10", "01 02 03 04 05"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> square = {"?? ?? ?? ?? 25", "?? ?? ?? ?? 20", "?? ?? ?? ?? 15", "?? ?? ?? ?? 10", "?? ?? ?? ?? 05"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"21 22 23 24 25", "16 17 18 19 20", "11 12 13 14 15", "06 07 08 09 10", "01 02 03 04 05"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> square = {"?? ?? 15 ?? ??", "02 ?? ?? ?? ??", "?? ?? ?? 07 ??", "?? ?? 19 ?? ??", "?? ?? ?? ?? 21"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01 03 15 16 17", "02 08 09 10 22", "04 05 06 07 23", "11 12 19 24 25", "13 14 18 20 21"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? 05"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"06 07 08 09 10", "11 12 13 14 15", "16 17 18 19 20", "21 22 23 24 25", "01 02 03 04 05"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> square = {"?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? ?? ?? ??", "?? ?? 10 ?? ??", "?? ?? ?? 04 ??"};
    NewMagicSquare* pObj = new NewMagicSquare();
    clock_t start = clock();
    vector<string> result = pObj->completeTheSquare(square);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"05 06 07 11 12", "13 14 15 16 17", "18 19 20 21 22", "08 09 10 23 24", "01 02 03 04 25"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10675&pm=7247
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
typedef long long int64; 
typedef unsigned long long uint64; 
#define two(X) (1<<(X)) 
#define twoL(X) (((int64)(1))<<(X)) 
#define contain(S,X) (((S)&two(X))!=0) 
#define containL(S,X) (((S)&twoL(X))!=0) 
const double pi=acos(-1.0); 
const double eps=1e-11; 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;} 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;} 
template<class T> inline T sqr(T x){return x*x;} 
typedef pair<int,int> ipair; 
 
class NewMagicSquare 
{ 
public: 
  vector<string> result; 
  string A[10]; 
  int T[10][10]; 
  bool vis[30]; 
  bool valid(int r,int a1,int a2,int a3,int a4,int a5) 
  { 
    int B[6],v; 
    B[1]=a1;B[2]=a2;B[3]=a3;B[4]=a4;B[5]=a5; 
    istringstream sin(A[r]); 
    for (int i=1;i<=5;i++) 
      if (T[r][i]!=-1 && T[r][i]!=B[i]) 
        return false; 
    for (int i=r+1;i<=5;i++) 
      for (int k=1;k<=5;k++) 
        for (int l=1;l<=5;l++) 
          if (T[i][k]==B[l]) 
            return false; 
    return true; 
  } 
  bool check(int r) 
  { 
    int size=0,v,P[6],V[6]; 
    bool used[30]; 
    memcpy(used,vis,sizeof(used)); 
    for (int i=r;i<=5;i++) 
      for (int k=1;k<=5;k++) 
        if (T[i][k]!=-1) 
        { 
          int v=T[i][k]; 
          P[++size]=k; 
          V[size]=v; 
          used[v]=true; 
        } 
    int C=0; 
    for (int i=1;i<=25;i++) 
    { 
      if (!used[i]) C++; 
      int C2=0; 
      for (int k=1;k<=size;k++) 
        if (V[k]<=i) 
          C2+=(P[k]-1); 
      if (C<C2) return false; 
    } 
    C=0; 
    for (int i=25;i>0;i--) 
    { 
      if (!used[i]) C++; 
      int C2=0; 
      for (int k=1;k<=size;k++) 
        if (V[k]>=i) 
          C2+=(5-P[k]); 
      if (C<C2) return false; 
    } 
    return true; 
  } 
  bool solve(int r) 
  { 
    for (int a1=1;a1<=25;a1++) if (!vis[a1]) 
    for (int a2=a1+1;a2<=25;a2++) if (!vis[a2]) 
    for (int a3=a2+1;a3<=25;a3++) if (!vis[a3]) 
    for (int a4=a3+1;a4<=25;a4++) if (!vis[a4]) 
    for (int a5=a4+1;a5<=25;a5++) if (!vis[a5]) 
    { 
      if (!valid(r,a1,a2,a3,a4,a5)) continue; 
      vis[a1]=vis[a2]=vis[a3]=vis[a4]=vis[a5]=true; 
      if (check(r+1)) 
      { 
        char str[200]; 
        sprintf(str,"%02d %02d %02d %02d %02d",a1,a2,a3,a4,a5); 
        result.push_back(str); 
        return true; 
      } 
      vis[a1]=vis[a2]=vis[a3]=vis[a4]=vis[a5]=false; 
    } 
    return false; 
  } 
  vector <string> completeTheSquare(vector <string> square) 
  { 
    for (int i=0;i<5;i++) 
      A[i+1]=square[i]; 
    for (int i=1;i<=5;i++) 
    { 
      istringstream sin(A[i]); 
      for (int j=1;j<=5;j++) 
      { 
        string str; 
        sin>>str; 
        if (str=="??") 
          T[i][j]=-1; 
        else 
          sscanf(str.c_str(),"%d",&T[i][j]); 
      } 
    } 
    memset(vis,false,sizeof(vis)); 
    vector<string> empty; 
    result.clear(); 
    empty.clear(); 
    for (int row=1;row<=5;row++) 
      if (!solve(row)) 
        return empty; 
    return result; 
  } 
};

********************************************************************************
*******************************************************************************/