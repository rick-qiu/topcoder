/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11205
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

class TheBoringGameDivOne {
public:
    vector<int> find(int scoreJ, int killedJ, int scoreB, int killedB, int scoreF, int killedF);
};

vector<int> TheBoringGameDivOne::find(int scoreJ, int killedJ, int scoreB, int killedB, int scoreF, int killedF) {
    vector<int> ret;
    return ret;
}


int test0() {
    int scoreJ = 1;
    int killedJ = 1;
    int scoreB = 1;
    int killedB = 1;
    int scoreF = 2;
    int killedF = 2;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int scoreJ = 0;
    int killedJ = 0;
    int scoreB = 0;
    int killedB = 0;
    int scoreF = 0;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int scoreJ = 4;
    int killedJ = 7;
    int scoreB = -2;
    int killedB = 5;
    int scoreF = 1;
    int killedF = 9;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int scoreJ = 1;
    int killedJ = 5;
    int scoreB = -1;
    int killedB = 4;
    int scoreF = 3;
    int killedF = 6;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 9};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int scoreJ = -2;
    int killedJ = 5;
    int scoreB = -10;
    int killedB = 0;
    int scoreF = 8;
    int killedF = 1;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int scoreJ = -5;
    int killedJ = 4;
    int scoreB = -4;
    int killedB = 2;
    int scoreF = -3;
    int killedF = 1;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int scoreJ = -10;
    int killedJ = 3;
    int scoreB = -10;
    int killedB = 3;
    int scoreF = -1;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int scoreJ = 45;
    int killedJ = 40;
    int scoreB = -31;
    int killedB = 36;
    int scoreF = 21;
    int killedF = 25;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int scoreJ = 25;
    int killedJ = 35;
    int scoreB = -22;
    int killedB = 36;
    int scoreF = -38;
    int killedF = 30;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int scoreJ = -13;
    int killedJ = 12;
    int scoreB = -17;
    int killedB = 18;
    int scoreF = 31;
    int killedF = 24;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int scoreJ = -9;
    int killedJ = 21;
    int scoreB = -6;
    int killedB = 21;
    int scoreF = 22;
    int killedF = 5;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 26};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int scoreJ = 24;
    int killedJ = 23;
    int scoreB = 23;
    int killedB = 24;
    int scoreF = 47;
    int killedF = 47;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 70};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int scoreJ = 28;
    int killedJ = 12;
    int scoreB = 21;
    int killedB = 32;
    int scoreF = 10;
    int killedF = 30;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int scoreJ = 28;
    int killedJ = 44;
    int scoreB = -1;
    int killedB = 12;
    int scoreF = 5;
    int killedF = 24;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int scoreJ = 38;
    int killedJ = 32;
    int scoreB = 1;
    int killedB = 0;
    int scoreF = 46;
    int killedF = 2;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int scoreJ = 19;
    int killedJ = 45;
    int scoreB = 18;
    int killedB = 6;
    int scoreF = -2;
    int killedF = 18;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int scoreJ = -9;
    int killedJ = 37;
    int scoreB = 6;
    int killedB = 6;
    int scoreF = 44;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int scoreJ = -22;
    int killedJ = 47;
    int scoreB = -25;
    int killedB = 47;
    int scoreF = 47;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47, 47};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int scoreJ = 37;
    int killedJ = 4;
    int scoreB = 10;
    int killedB = 15;
    int scoreF = 7;
    int killedF = 39;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int scoreJ = -12;
    int killedJ = 14;
    int scoreB = -14;
    int killedB = 44;
    int scoreF = -42;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int scoreJ = 9;
    int killedJ = 16;
    int scoreB = -1;
    int killedB = 16;
    int scoreF = 20;
    int killedF = 20;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 36};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int scoreJ = 1;
    int killedJ = 21;
    int scoreB = 1;
    int killedB = 18;
    int scoreF = 22;
    int killedF = 19;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 37};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int scoreJ = -1;
    int killedJ = 25;
    int scoreB = -6;
    int killedB = 33;
    int scoreF = 35;
    int killedF = 16;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 41};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int scoreJ = -2;
    int killedJ = 25;
    int scoreB = -8;
    int killedB = 20;
    int scoreF = 22;
    int killedF = 13;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 33};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int scoreJ = -3;
    int killedJ = 40;
    int scoreB = -4;
    int killedB = 35;
    int scoreF = 41;
    int killedF = 27;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 62};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int scoreJ = 4;
    int killedJ = 14;
    int scoreB = 10;
    int killedB = 15;
    int scoreF = 18;
    int killedF = 25;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 39};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int scoreJ = 4;
    int killedJ = 15;
    int scoreB = 2;
    int killedB = 17;
    int scoreF = 21;
    int killedF = 17;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 32};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int scoreJ = -2;
    int killedJ = 19;
    int scoreB = 1;
    int killedB = 24;
    int scoreF = 29;
    int killedF = 13;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 32};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int scoreJ = -6;
    int killedJ = 34;
    int scoreB = 12;
    int killedB = 25;
    int scoreF = 40;
    int killedF = 25;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 50};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int scoreJ = 7;
    int killedJ = 30;
    int scoreB = 0;
    int killedB = 32;
    int scoreF = 45;
    int killedF = 24;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43, 54};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int scoreJ = 8;
    int killedJ = 35;
    int scoreB = 8;
    int killedB = 35;
    int scoreF = 42;
    int killedF = 44;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {57, 79};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int scoreJ = 8;
    int killedJ = 36;
    int scoreB = 8;
    int killedB = 37;
    int scoreF = 44;
    int killedF = 45;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59, 81};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int scoreJ = 6;
    int killedJ = 36;
    int scoreB = 7;
    int killedB = 36;
    int scoreF = 43;
    int killedF = 42;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {57, 78};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int scoreJ = 7;
    int killedJ = 36;
    int scoreB = 7;
    int killedB = 37;
    int scoreF = 44;
    int killedF = 43;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 79};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int scoreJ = 6;
    int killedJ = 39;
    int scoreB = 7;
    int killedB = 38;
    int scoreF = 45;
    int killedF = 45;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {61, 83};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int scoreJ = 7;
    int killedJ = 35;
    int scoreB = 7;
    int killedB = 36;
    int scoreF = 42;
    int killedF = 43;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {57, 78};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int scoreJ = 7;
    int killedJ = 36;
    int scoreB = 7;
    int killedB = 36;
    int scoreF = 43;
    int killedF = 43;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 79};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int scoreJ = 7;
    int killedJ = 36;
    int scoreB = 8;
    int killedB = 35;
    int scoreF = 43;
    int killedF = 43;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {57, 78};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int scoreJ = 7;
    int killedJ = 37;
    int scoreB = 7;
    int killedB = 36;
    int scoreF = 44;
    int killedF = 43;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 79};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int scoreJ = 8;
    int killedJ = 37;
    int scoreB = 7;
    int killedB = 37;
    int scoreF = 45;
    int killedF = 44;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59, 81};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int scoreJ = 0;
    int killedJ = 24;
    int scoreB = -2;
    int killedB = 26;
    int scoreF = 30;
    int killedF = 18;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 42};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int scoreJ = 3;
    int killedJ = 27;
    int scoreB = 1;
    int killedB = 30;
    int scoreF = 36;
    int killedF = 25;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 52};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int scoreJ = -3;
    int killedJ = 23;
    int scoreB = 0;
    int killedB = 25;
    int scoreF = 27;
    int killedF = 18;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 41};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int scoreJ = 0;
    int killedJ = 25;
    int scoreB = 2;
    int killedB = 24;
    int scoreF = 28;
    int killedF = 23;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 47};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int scoreJ = 47;
    int killedJ = 47;
    int scoreB = 47;
    int killedB = 47;
    int scoreF = 47;
    int killedF = 47;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int scoreJ = -47;
    int killedJ = 47;
    int scoreB = -47;
    int killedB = 47;
    int scoreF = -47;
    int killedF = 47;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int scoreJ = -47;
    int killedJ = 0;
    int scoreB = -47;
    int killedB = 0;
    int scoreF = -47;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int scoreJ = 500;
    int killedJ = 500;
    int scoreB = 500;
    int killedB = 500;
    int scoreF = 1000;
    int killedF = 1000;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 1500};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int scoreJ = -500;
    int killedJ = 1000;
    int scoreB = -500;
    int killedB = 1000;
    int scoreF = 1000;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 1000};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int scoreJ = 0;
    int killedJ = 500;
    int scoreB = 0;
    int killedB = 500;
    int scoreF = 0;
    int killedF = 1000;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 1000};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int scoreJ = 500;
    int killedJ = 0;
    int scoreB = 500;
    int killedB = 0;
    int scoreF = 0;
    int killedF = 1000;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 1000};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int scoreJ = -500;
    int killedJ = 750;
    int scoreB = 0;
    int killedB = 750;
    int scoreF = 1000;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {750, 750};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int scoreJ = 250;
    int killedJ = 0;
    int scoreB = 500;
    int killedB = 250;
    int scoreF = 250;
    int killedF = 750;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {750, 750};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int scoreJ = 0;
    int killedJ = 250;
    int scoreB = -250;
    int killedB = 750;
    int scoreF = 250;
    int killedF = 500;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {750, 750};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int scoreJ = 111;
    int killedJ = 555;
    int scoreB = 111;
    int killedB = 555;
    int scoreF = 666;
    int killedF = 666;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {888, 1221};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int scoreJ = 59;
    int killedJ = 496;
    int scoreB = 189;
    int killedB = 306;
    int scoreF = 370;
    int killedF = 680;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {741, 986};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int scoreJ = 101;
    int killedJ = 551;
    int scoreB = 121;
    int killedB = 558;
    int scoreF = 852;
    int killedF = 479;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {794, 1030};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int scoreJ = -41;
    int killedJ = 555;
    int scoreB = 4;
    int killedB = 373;
    int scoreF = 555;
    int killedF = 336;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {632, 709};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int scoreJ = 38;
    int killedJ = 445;
    int scoreB = 22;
    int killedB = 420;
    int scoreF = 352;
    int killedF = 573;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {719, 925};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int scoreJ = -53;
    int killedJ = 670;
    int scoreB = -14;
    int killedB = 565;
    int scoreF = 681;
    int killedF = 487;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {861, 1052};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int scoreJ = 64;
    int killedJ = 484;
    int scoreB = 120;
    int killedB = 515;
    int scoreF = 548;
    int killedF = 635;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {817, 1119};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int scoreJ = 204;
    int killedJ = 505;
    int scoreB = 62;
    int killedB = 657;
    int scoreF = 781;
    int killedF = 647;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {905, 1152};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int scoreJ = 288;
    int killedJ = 249;
    int scoreB = -9;
    int killedB = 384;
    int scoreF = 449;
    int killedF = 463;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {548, 712};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int scoreJ = -16;
    int killedJ = 494;
    int scoreB = 22;
    int killedB = 535;
    int scoreF = 520;
    int killedF = 515;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {772, 1009};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int scoreJ = 127;
    int killedJ = 320;
    int scoreB = 20;
    int killedB = 422;
    int scoreF = 345;
    int killedF = 544;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {643, 864};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int scoreJ = -28;
    int killedJ = 696;
    int scoreB = 38;
    int killedB = 706;
    int scoreF = 770;
    int killedF = 642;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1022, 1338};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int scoreJ = -25;
    int killedJ = 751;
    int scoreB = 49;
    int killedB = 758;
    int scoreF = 952;
    int killedF = 581;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1045, 1332};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int scoreJ = -51;
    int killedJ = 755;
    int scoreB = 4;
    int killedB = 673;
    int scoreF = 855;
    int killedF = 526;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {977, 1199};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int scoreJ = -24;
    int killedJ = 745;
    int scoreB = 2;
    int killedB = 720;
    int scoreF = 852;
    int killedF = 591;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1028, 1311};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int scoreJ = -37;
    int killedJ = 770;
    int scoreB = -94;
    int killedB = 765;
    int scoreF = 881;
    int killedF = 523;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1029, 1288};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int scoreJ = -231;
    int killedJ = 317;
    int scoreB = -275;
    int killedB = 490;
    int scoreF = -266;
    int killedF = 819;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int scoreJ = -619;
    int killedJ = 541;
    int scoreB = -70;
    int killedB = 91;
    int scoreF = -940;
    int killedF = 369;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int scoreJ = 1000;
    int killedJ = 1000;
    int scoreB = 1000;
    int killedB = 1000;
    int scoreF = 1000;
    int killedF = 1000;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int scoreJ = -1000;
    int killedJ = 0;
    int scoreB = -1000;
    int killedB = 0;
    int scoreF = -1000;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int scoreJ = 500;
    int killedJ = 600;
    int scoreB = -100;
    int killedB = 600;
    int scoreF = 600;
    int killedF = 1000;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1100, 1600};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int scoreJ = -400;
    int killedJ = 1000;
    int scoreB = 400;
    int killedB = 1000;
    int scoreF = 1000;
    int killedF = 1000;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1500, 2000};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int scoreJ = 2;
    int killedJ = 2;
    int scoreB = 12;
    int killedB = 3;
    int scoreF = 4;
    int killedF = 15;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 17};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int scoreJ = 11;
    int killedJ = 4;
    int scoreB = 4;
    int killedB = 7;
    int scoreF = 11;
    int killedF = 15;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 19};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int scoreJ = 5;
    int killedJ = 13;
    int scoreB = -7;
    int killedB = 11;
    int scoreF = 10;
    int killedF = 12;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 22};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int scoreJ = 4;
    int killedJ = 6;
    int scoreB = 7;
    int killedB = 2;
    int scoreF = 8;
    int killedF = 11;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 13};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int scoreJ = 15;
    int killedJ = 12;
    int scoreB = 5;
    int killedB = 8;
    int scoreF = 20;
    int killedF = 20;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 28};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int scoreJ = 0;
    int killedJ = 1;
    int scoreB = -1;
    int killedB = 1;
    int scoreF = 1;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int scoreJ = 1;
    int killedJ = 1;
    int scoreB = -1;
    int killedB = 1;
    int scoreF = 1;
    int killedF = 1;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int scoreJ = 1;
    int killedJ = 1;
    int scoreB = -1;
    int killedB = 2;
    int scoreF = 2;
    int killedF = 1;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int scoreJ = 0;
    int killedJ = 1;
    int scoreB = 0;
    int killedB = 3;
    int scoreF = 1;
    int killedF = 3;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int scoreJ = -1;
    int killedJ = 1;
    int scoreB = 0;
    int killedB = 1;
    int scoreF = 1;
    int killedF = 0;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int scoreJ = -5;
    int killedJ = 6;
    int scoreB = 2;
    int killedB = 6;
    int scoreF = 6;
    int killedF = 3;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 9};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int scoreJ = -1;
    int killedJ = 3;
    int scoreB = -2;
    int killedB = 4;
    int scoreF = 3;
    int killedF = 1;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int scoreJ = 1;
    int killedJ = 1;
    int scoreB = 0;
    int killedB = 0;
    int scoreF = 1;
    int killedF = 1;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int scoreJ = 0;
    int killedJ = 1;
    int scoreB = 0;
    int killedB = 1;
    int scoreF = 1;
    int killedF = 1;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int scoreJ = -8;
    int killedJ = 11;
    int scoreB = 1;
    int killedB = 13;
    int scoreF = 13;
    int killedF = 4;
    TheBoringGameDivOne* pObj = new TheBoringGameDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(scoreJ, killedJ, scoreB, killedB, scoreF, killedF);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 15};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663117&rd=14241&pm=11205
********************************************************************************
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
 
const int INF = 1000000000;
 
inline int max (int a, int b, int c)
{
    return max (max (a, b), c);
}
 
inline int min (int a, int b, int c)
{
    return min (min (a, b), c);
}
 
inline bool check (int a, int b, int c, int d, int e, int scoreJ, int killedJ, int scoreB, int killedB)
{
    if (a < 0 || b < 0 || c < 0 || d < 0 || e < 0)
        return false;
 
    if (a - d + e != scoreJ + scoreB)
        return false;
 
    if (2 * b + c + 2 * d + e != killedB + killedJ)
        return false;
 
    int goal1 = scoreJ - scoreB;
    int goal2 = killedJ - killedB;
 
    if ((a + d + e + goal1) % 2 != 0)
        return false;
 
    if ((c + e + goal2) % 2 != 0)
        return false;
 
    return max (-e, goal2 - c, -a - d - goal1) <= min (e, goal2 + c, a + d - goal1);
}
 
struct TheBoringGameDivOne
{
    vector <int> find (int scoreJ, int killedJ, int scoreB, int killedB, int scoreF, int killedF)
    {
        if (scoreF < 0)
            return vector <int> ();
 
        int self_killed = killedJ + killedB - scoreF;
        int least = INF, most = -INF;
 
        for (int b = 0; 2 * b <= scoreF; b++)
            for (int d = 0; 2 * b + d <= scoreF; d++)
            {
                int e = scoreF - 2 * b - d;
                int c = self_killed - d;
                int a = killedF - c - e;
 
                if (check (a, b, c, d, e, scoreJ, killedJ, scoreB, killedB))
                {
                    least = min (least, a + b + c + d + e);
                    most = max (most, a + b + c + d + e);
                }
            }
 
        if (least > most)
            return vector <int> ();
 
        vector <int> v;
        v.push_back (least);
        v.push_back (most);
        return v;
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/