/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2405
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

class GolfScore {
public:
    int tally(vector<int> parValues, vector<string> scoreSheet);
};

int GolfScore::tally(vector<int> parValues, vector<string> scoreSheet) {
    int ret;
    return ret;
}


int test0() {
    vector<int> parValues = {1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<string> scoreSheet = {"bogey", "bogey", "bogey", "bogey", "bogey", "bogey", "bogey", "bogey", "bogey", "eagle", "eagle", "eagle", "eagle", "eagle", "eagle", "eagle", "eagle", "eagle"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> parValues = {3, 2, 4, 2, 2, 1, 1, 1, 3, 2, 4, 4, 4, 2, 3, 1, 3, 2};
    vector<string> scoreSheet = {"bogey", "double bogey", "par", "double bogey", "double bogey", "triple bogey", "triple bogey", "triple bogey", "bogey", "double bogey", "par", "par", "par", "double bogey", "bogey", "triple bogey", "bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> parValues = {3, 2, 4, 2, 2, 1, 1, 1, 3, 2, 4, 4, 4, 2, 3, 1, 3, 2};
    vector<string> scoreSheet = {"eagle", "birdie", "albatross", "birdie", "birdie", "par", "hole in one", "par", "eagle", "birdie", "albatross", "albatross", "albatross", "birdie", "eagle", "hole in one", "eagle", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> parValues = {1, 1, 4, 4, 3, 3, 3, 1, 5, 4, 4, 2, 4, 2, 1, 3, 4, 5};
    vector<string> scoreSheet = {"par", "double bogey", "albatross", "par", "triple bogey", "double bogey", "triple bogey", "triple bogey", "eagle", "double bogey", "triple bogey", "triple bogey", "birdie", "bogey", "par", "eagle", "albatross", "eagle"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> parValues = {4, 1, 3, 3, 4, 4, 1, 4, 2, 3, 3, 5, 4, 1, 4, 4, 2, 1};
    vector<string> scoreSheet = {"triple bogey", "triple bogey", "bogey", "par", "triple bogey", "double bogey", "triple bogey", "triple bogey", "par", "eagle", "bogey", "bogey", "birdie", "par", "triple bogey", "eagle", "triple bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> parValues = {1, 4, 3, 5, 4, 3, 4, 5, 5, 2, 1, 5, 2, 1, 2, 3, 2, 1};
    vector<string> scoreSheet = {"double bogey", "triple bogey", "par", "birdie", "bogey", "eagle", "birdie", "eagle", "double bogey", "bogey", "double bogey", "birdie", "bogey", "triple bogey", "triple bogey", "bogey", "double bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> parValues = {2, 4, 3, 4, 3, 3, 3, 1, 4, 3, 4, 4, 4, 2, 1, 5, 2, 5};
    vector<string> scoreSheet = {"double bogey", "birdie", "triple bogey", "par", "double bogey", "par", "birdie", "par", "eagle", "birdie", "par", "triple bogey", "par", "birdie", "par", "birdie", "par", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> parValues = {1, 1, 5, 5, 2, 2, 3, 5, 2, 1, 1, 1, 4, 2, 5, 4, 5, 4};
    vector<string> scoreSheet = {"double bogey", "triple bogey", "par", "double bogey", "double bogey", "double bogey", "bogey", "par", "double bogey", "double bogey", "triple bogey", "hole in one", "par", "triple bogey", "eagle", "par", "double bogey", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> parValues = {4, 3, 2, 1, 4, 5, 5, 4, 1, 2, 4, 2, 5, 1, 4, 2, 3, 4};
    vector<string> scoreSheet = {"birdie", "eagle", "par", "par", "par", "triple bogey", "eagle", "double bogey", "bogey", "triple bogey", "double bogey", "triple bogey", "eagle", "double bogey", "double bogey", "par", "double bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> parValues = {2, 2, 4, 2, 1, 1, 1, 1, 5, 2, 5, 2, 3, 5, 5, 4, 1, 2};
    vector<string> scoreSheet = {"triple bogey", "par", "triple bogey", "triple bogey", "hole in one", "double bogey", "triple bogey", "double bogey", "albatross", "par", "eagle", "par", "double bogey", "double bogey", "par", "birdie", "par", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> parValues = {3, 5, 3, 2, 4, 1, 4, 3, 3, 1, 3, 5, 1, 4, 2, 1, 5, 4};
    vector<string> scoreSheet = {"eagle", "bogey", "triple bogey", "bogey", "par", "triple bogey", "par", "birdie", "bogey", "hole in one", "triple bogey", "par", "triple bogey", "albatross", "double bogey", "bogey", "albatross", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> parValues = {1, 1, 3, 5, 4, 5, 2, 4, 2, 2, 4, 2, 5, 2, 4, 4, 4, 3};
    vector<string> scoreSheet = {"bogey", "triple bogey", "bogey", "double bogey", "albatross", "birdie", "birdie", "triple bogey", "par", "par", "albatross", "triple bogey", "par", "birdie", "bogey", "albatross", "albatross", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> parValues = {2, 3, 3, 1, 2, 1, 3, 5, 4, 3, 1, 3, 1, 3, 4, 1, 3, 3};
    vector<string> scoreSheet = {"birdie", "double bogey", "triple bogey", "hole in one", "double bogey", "bogey", "par", "birdie", "double bogey", "par", "bogey", "bogey", "bogey", "birdie", "birdie", "triple bogey", "bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> parValues = {3, 4, 4, 2, 1, 4, 5, 3, 5, 4, 5, 3, 5, 5, 2, 2, 5, 5};
    vector<string> scoreSheet = {"eagle", "par", "double bogey", "birdie", "hole in one", "birdie", "par", "eagle", "eagle", "birdie", "bogey", "bogey", "eagle", "albatross", "par", "bogey", "triple bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> parValues = {5, 2, 4, 2, 3, 1, 3, 5, 4, 2, 5, 4, 4, 5, 5, 3, 2, 1};
    vector<string> scoreSheet = {"par", "bogey", "birdie", "double bogey", "double bogey", "bogey", "bogey", "triple bogey", "albatross", "bogey", "eagle", "birdie", "albatross", "bogey", "eagle", "birdie", "bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> parValues = {2, 1, 3, 5, 2, 3, 5, 2, 5, 4, 2, 4, 1, 5, 5, 5, 2, 1};
    vector<string> scoreSheet = {"double bogey", "bogey", "eagle", "birdie", "bogey", "birdie", "double bogey", "par", "birdie", "eagle", "triple bogey", "birdie", "bogey", "bogey", "triple bogey", "double bogey", "par", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> parValues = {4, 4, 1, 2, 4, 5, 3, 2, 1, 1, 5, 1, 5, 4, 4, 4, 4, 5};
    vector<string> scoreSheet = {"albatross", "par", "triple bogey", "par", "eagle", "triple bogey", "eagle", "par", "bogey", "bogey", "bogey", "triple bogey", "bogey", "bogey", "double bogey", "triple bogey", "bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> parValues = {2, 4, 2, 3, 3, 3, 3, 5, 5, 3, 5, 1, 2, 5, 4, 4, 1, 3};
    vector<string> scoreSheet = {"triple bogey", "eagle", "double bogey", "birdie", "eagle", "triple bogey", "bogey", "albatross", "double bogey", "eagle", "bogey", "triple bogey", "double bogey", "par", "birdie", "double bogey", "par", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> parValues = {3, 3, 2, 4, 1, 4, 3, 5, 5, 2, 4, 5, 3, 3, 4, 2, 2, 5};
    vector<string> scoreSheet = {"birdie", "double bogey", "triple bogey", "triple bogey", "triple bogey", "eagle", "bogey", "triple bogey", "bogey", "bogey", "albatross", "double bogey", "bogey", "bogey", "double bogey", "bogey", "triple bogey", "albatross"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> parValues = {4, 5, 5, 2, 1, 3, 4, 4, 3, 1, 5, 2, 5, 1, 1, 3, 1, 1};
    vector<string> scoreSheet = {"par", "par", "triple bogey", "bogey", "triple bogey", "triple bogey", "par", "birdie", "par", "par", "double bogey", "double bogey", "bogey", "hole in one", "triple bogey", "eagle", "double bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> parValues = {2, 2, 2, 5, 2, 1, 1, 2, 3, 5, 4, 4, 3, 3, 4, 1, 4, 1};
    vector<string> scoreSheet = {"par", "birdie", "par", "albatross", "triple bogey", "triple bogey", "triple bogey", "par", "triple bogey", "bogey", "double bogey", "triple bogey", "triple bogey", "eagle", "triple bogey", "double bogey", "double bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> parValues = {5, 1, 5, 4, 2, 5, 1, 4, 4, 4, 4, 5, 1, 3, 5, 5, 5, 2};
    vector<string> scoreSheet = {"eagle", "par", "eagle", "par", "par", "albatross", "bogey", "eagle", "birdie", "eagle", "albatross", "albatross", "triple bogey", "double bogey", "birdie", "par", "birdie", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> parValues = {3, 3, 3, 4, 5, 5, 5, 1, 1, 1, 5, 1, 5, 1, 4, 3, 5, 3};
    vector<string> scoreSheet = {"double bogey", "par", "birdie", "albatross", "eagle", "birdie", "par", "triple bogey", "double bogey", "bogey", "double bogey", "double bogey", "triple bogey", "double bogey", "triple bogey", "triple bogey", "bogey", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> parValues = {2, 2, 1, 3, 4, 2, 1, 2, 3, 2, 1, 2, 2, 4, 5, 4, 1, 1};
    vector<string> scoreSheet = {"triple bogey", "bogey", "bogey", "eagle", "par", "birdie", "double bogey", "double bogey", "bogey", "par", "triple bogey", "par", "double bogey", "albatross", "double bogey", "albatross", "hole in one", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> parValues = {4, 5, 3, 1, 4, 1, 5, 4, 2, 1, 3, 5, 2, 2, 3, 5, 5, 3};
    vector<string> scoreSheet = {"eagle", "double bogey", "bogey", "triple bogey", "albatross", "double bogey", "bogey", "par", "birdie", "triple bogey", "par", "birdie", "double bogey", "birdie", "triple bogey", "birdie", "bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> parValues = {4, 1, 5, 3, 3, 5, 4, 3, 1, 3, 3, 4, 3, 1, 5, 4, 4, 1};
    vector<string> scoreSheet = {"triple bogey", "bogey", "albatross", "triple bogey", "triple bogey", "bogey", "eagle", "par", "par", "par", "birdie", "albatross", "eagle", "par", "albatross", "birdie", "albatross", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> parValues = {2, 3, 1, 1, 1, 1, 3, 5, 3, 4, 3, 3, 5, 1, 3, 5, 2, 2};
    vector<string> scoreSheet = {"bogey", "bogey", "bogey", "double bogey", "double bogey", "double bogey", "double bogey", "triple bogey", "double bogey", "eagle", "birdie", "birdie", "albatross", "triple bogey", "par", "double bogey", "birdie", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> parValues = {1, 4, 5, 5, 5, 4, 3, 3, 2, 3, 2, 3, 1, 4, 5, 1, 5, 3};
    vector<string> scoreSheet = {"hole in one", "albatross", "double bogey", "birdie", "triple bogey", "par", "eagle", "birdie", "bogey", "eagle", "bogey", "triple bogey", "triple bogey", "bogey", "bogey", "double bogey", "eagle", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> parValues = {2, 4, 3, 2, 5, 3, 3, 2, 2, 1, 3, 2, 2, 1, 3, 3, 1, 4};
    vector<string> scoreSheet = {"double bogey", "albatross", "double bogey", "bogey", "birdie", "triple bogey", "double bogey", "triple bogey", "bogey", "triple bogey", "birdie", "double bogey", "bogey", "hole in one", "par", "par", "bogey", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> parValues = {4, 4, 4, 1, 1, 3, 1, 1, 5, 5, 4, 4, 3, 2, 5, 1, 3, 4};
    vector<string> scoreSheet = {"albatross", "bogey", "bogey", "triple bogey", "triple bogey", "bogey", "double bogey", "bogey", "bogey", "birdie", "eagle", "double bogey", "par", "triple bogey", "bogey", "triple bogey", "birdie", "eagle"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> parValues = {3, 2, 2, 1, 5, 4, 4, 2, 1, 4, 4, 1, 5, 2, 1, 2, 2, 2};
    vector<string> scoreSheet = {"double bogey", "bogey", "bogey", "hole in one", "triple bogey", "bogey", "albatross", "birdie", "triple bogey", "par", "bogey", "par", "triple bogey", "double bogey", "hole in one", "bogey", "double bogey", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> parValues = {1, 3, 5, 1, 3, 4, 5, 2, 5, 1, 4, 5, 3, 5, 3, 1, 5, 1};
    vector<string> scoreSheet = {"triple bogey", "double bogey", "eagle", "hole in one", "birdie", "birdie", "eagle", "bogey", "triple bogey", "bogey", "double bogey", "bogey", "birdie", "albatross", "bogey", "double bogey", "double bogey", "hole in one"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> parValues = {1, 4, 1, 5, 2, 2, 4, 3, 1, 4, 2, 1, 4, 3, 5, 5, 5, 5};
    vector<string> scoreSheet = {"bogey", "bogey", "triple bogey", "eagle", "par", "par", "par", "birdie", "triple bogey", "par", "double bogey", "triple bogey", "bogey", "par", "double bogey", "eagle", "triple bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> parValues = {4, 4, 1, 5, 1, 4, 3, 5, 3, 2, 4, 5, 3, 2, 5, 3, 4, 2};
    vector<string> scoreSheet = {"double bogey", "triple bogey", "double bogey", "birdie", "hole in one", "eagle", "birdie", "eagle", "birdie", "double bogey", "eagle", "triple bogey", "double bogey", "bogey", "bogey", "eagle", "bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> parValues = {4, 3, 2, 1, 4, 3, 3, 1, 1, 3, 2, 1, 3, 4, 1, 5, 3, 3};
    vector<string> scoreSheet = {"eagle", "birdie", "birdie", "triple bogey", "par", "birdie", "triple bogey", "double bogey", "triple bogey", "triple bogey", "birdie", "par", "par", "albatross", "triple bogey", "birdie", "triple bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> parValues = {1, 1, 3, 4, 5, 2, 4, 5, 4, 4, 5, 1, 3, 2, 5, 1, 5, 1};
    vector<string> scoreSheet = {"hole in one", "par", "birdie", "albatross", "triple bogey", "bogey", "double bogey", "par", "double bogey", "bogey", "triple bogey", "triple bogey", "bogey", "birdie", "double bogey", "double bogey", "albatross", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> parValues = {2, 5, 4, 1, 3, 1, 5, 4, 2, 5, 2, 2, 2, 1, 5, 4, 4, 5};
    vector<string> scoreSheet = {"double bogey", "triple bogey", "birdie", "bogey", "par", "triple bogey", "par", "bogey", "double bogey", "par", "double bogey", "bogey", "birdie", "double bogey", "triple bogey", "birdie", "triple bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> parValues = {1, 1, 2, 2, 5, 5, 1, 5, 4, 2, 3, 1, 4, 1, 2, 2, 4, 5};
    vector<string> scoreSheet = {"double bogey", "triple bogey", "double bogey", "par", "bogey", "triple bogey", "double bogey", "double bogey", "albatross", "double bogey", "triple bogey", "triple bogey", "birdie", "hole in one", "double bogey", "par", "birdie", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> parValues = {1, 3, 5, 1, 1, 1, 2, 2, 5, 1, 2, 3, 3, 5, 5, 3, 1, 5};
    vector<string> scoreSheet = {"triple bogey", "triple bogey", "bogey", "bogey", "hole in one", "bogey", "bogey", "bogey", "birdie", "triple bogey", "par", "eagle", "bogey", "triple bogey", "bogey", "birdie", "double bogey", "eagle"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> parValues = {3, 1, 2, 2, 5, 4, 2, 3, 2, 5, 4, 3, 5, 2, 4, 4, 1, 4};
    vector<string> scoreSheet = {"birdie", "double bogey", "double bogey", "bogey", "double bogey", "birdie", "triple bogey", "eagle", "birdie", "double bogey", "par", "double bogey", "double bogey", "par", "par", "par", "bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> parValues = {4, 3, 5, 2, 5, 2, 5, 1, 1, 1, 1, 4, 2, 4, 4, 2, 2, 2};
    vector<string> scoreSheet = {"double bogey", "par", "bogey", "double bogey", "albatross", "triple bogey", "bogey", "bogey", "triple bogey", "par", "triple bogey", "albatross", "double bogey", "eagle", "eagle", "birdie", "triple bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> parValues = {1, 4, 1, 4, 3, 2, 1, 5, 5, 2, 4, 1, 5, 1, 4, 3, 5, 3};
    vector<string> scoreSheet = {"triple bogey", "eagle", "hole in one", "par", "bogey", "bogey", "triple bogey", "albatross", "eagle", "bogey", "eagle", "bogey", "par", "bogey", "albatross", "eagle", "double bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> parValues = {3, 2, 1, 3, 2, 4, 3, 4, 2, 4, 5, 2, 4, 5, 2, 2, 4, 5};
    vector<string> scoreSheet = {"triple bogey", "triple bogey", "double bogey", "triple bogey", "bogey", "par", "triple bogey", "birdie", "double bogey", "bogey", "birdie", "par", "eagle", "albatross", "triple bogey", "birdie", "triple bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> parValues = {2, 3, 5, 3, 4, 2, 4, 3, 4, 4, 1, 1, 2, 5, 3, 5, 2, 4};
    vector<string> scoreSheet = {"bogey", "eagle", "double bogey", "triple bogey", "albatross", "bogey", "albatross", "birdie", "double bogey", "par", "double bogey", "hole in one", "birdie", "birdie", "double bogey", "bogey", "triple bogey", "eagle"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> parValues = {4, 4, 3, 5, 1, 2, 4, 4, 1, 4, 3, 1, 4, 2, 2, 3, 2, 1};
    vector<string> scoreSheet = {"double bogey", "bogey", "bogey", "double bogey", "triple bogey", "double bogey", "eagle", "birdie", "double bogey", "triple bogey", "double bogey", "double bogey", "par", "bogey", "double bogey", "triple bogey", "double bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> parValues = {1, 3, 2, 1, 1, 5, 2, 4, 4, 5, 3, 1, 2, 5, 3, 2, 4, 5};
    vector<string> scoreSheet = {"hole in one", "triple bogey", "triple bogey", "triple bogey", "double bogey", "triple bogey", "par", "double bogey", "birdie", "eagle", "birdie", "triple bogey", "triple bogey", "bogey", "birdie", "par", "par", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> parValues = {2, 5, 3, 4, 3, 5, 5, 4, 1, 5, 4, 5, 4, 1, 1, 5, 4, 1};
    vector<string> scoreSheet = {"birdie", "double bogey", "bogey", "albatross", "double bogey", "par", "albatross", "par", "hole in one", "par", "eagle", "eagle", "triple bogey", "bogey", "bogey", "albatross", "birdie", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> parValues = {1, 4, 1, 5, 4, 2, 1, 3, 2, 3, 2, 3, 3, 5, 1, 1, 1, 5};
    vector<string> scoreSheet = {"bogey", "triple bogey", "bogey", "eagle", "double bogey", "bogey", "double bogey", "double bogey", "birdie", "double bogey", "double bogey", "eagle", "triple bogey", "eagle", "bogey", "bogey", "bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> parValues = {5, 2, 5, 1, 5, 1, 5, 4, 2, 1, 1, 3, 5, 1, 1, 3, 2, 4};
    vector<string> scoreSheet = {"birdie", "double bogey", "bogey", "triple bogey", "triple bogey", "bogey", "bogey", "triple bogey", "birdie", "triple bogey", "bogey", "birdie", "albatross", "triple bogey", "hole in one", "par", "birdie", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> parValues = {3, 1, 2, 3, 1, 1, 2, 3, 3, 3, 4, 4, 2, 2, 3, 3, 2, 2};
    vector<string> scoreSheet = {"eagle", "hole in one", "par", "par", "double bogey", "bogey", "birdie", "birdie", "double bogey", "par", "triple bogey", "birdie", "par", "birdie", "triple bogey", "par", "bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> parValues = {2, 4, 5, 4, 5, 5, 1, 1, 3, 3, 5, 4, 4, 2, 2, 1, 3, 4};
    vector<string> scoreSheet = {"birdie", "triple bogey", "double bogey", "par", "triple bogey", "bogey", "par", "bogey", "triple bogey", "birdie", "albatross", "birdie", "triple bogey", "triple bogey", "bogey", "triple bogey", "bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> parValues = {3, 1, 5, 1, 3, 4, 4, 3, 2, 5, 2, 1, 3, 5, 5, 1, 4, 1};
    vector<string> scoreSheet = {"par", "par", "triple bogey", "bogey", "eagle", "bogey", "double bogey", "bogey", "par", "eagle", "bogey", "double bogey", "bogey", "eagle", "par", "triple bogey", "par", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> parValues = {2, 3, 1, 5, 5, 3, 5, 3, 5, 4, 3, 4, 2, 5, 5, 1, 4, 4};
    vector<string> scoreSheet = {"birdie", "triple bogey", "bogey", "albatross", "eagle", "birdie", "bogey", "triple bogey", "bogey", "eagle", "eagle", "triple bogey", "birdie", "albatross", "albatross", "triple bogey", "double bogey", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> parValues = {5, 1, 1, 2, 1, 5, 5, 1, 1, 1, 4, 1, 2, 1, 3, 4, 1, 2};
    vector<string> scoreSheet = {"albatross", "double bogey", "triple bogey", "birdie", "double bogey", "albatross", "double bogey", "par", "double bogey", "triple bogey", "par", "hole in one", "double bogey", "bogey", "double bogey", "eagle", "hole in one", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> parValues = {3, 2, 4, 1, 4, 4, 5, 4, 5, 1, 3, 1, 5, 4, 4, 4, 4, 4};
    vector<string> scoreSheet = {"triple bogey", "double bogey", "bogey", "bogey", "triple bogey", "albatross", "albatross", "albatross", "albatross", "double bogey", "eagle", "triple bogey", "par", "double bogey", "triple bogey", "par", "triple bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> parValues = {4, 2, 3, 3, 4, 4, 2, 1, 3, 2, 4, 4, 2, 5, 4, 2, 3, 1};
    vector<string> scoreSheet = {"triple bogey", "triple bogey", "birdie", "bogey", "albatross", "albatross", "bogey", "hole in one", "triple bogey", "triple bogey", "eagle", "par", "birdie", "bogey", "double bogey", "birdie", "double bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> parValues = {1, 1, 4, 2, 5, 2, 4, 4, 4, 1, 5, 5, 3, 3, 4, 3, 5, 2};
    vector<string> scoreSheet = {"bogey", "double bogey", "triple bogey", "par", "bogey", "birdie", "birdie", "eagle", "par", "triple bogey", "albatross", "bogey", "bogey", "bogey", "triple bogey", "par", "double bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> parValues = {4, 4, 3, 5, 3, 1, 1, 1, 2, 3, 4, 1, 1, 5, 5, 5, 5, 4};
    vector<string> scoreSheet = {"albatross", "albatross", "bogey", "par", "eagle", "double bogey", "double bogey", "par", "birdie", "double bogey", "bogey", "double bogey", "double bogey", "albatross", "birdie", "bogey", "par", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> parValues = {5, 5, 2, 3, 2, 4, 1, 3, 1, 2, 5, 5, 4, 3, 5, 4, 4, 2};
    vector<string> scoreSheet = {"eagle", "double bogey", "double bogey", "par", "bogey", "double bogey", "triple bogey", "triple bogey", "triple bogey", "bogey", "eagle", "eagle", "bogey", "triple bogey", "par", "bogey", "albatross", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> parValues = {5, 3, 5, 5, 3, 4, 4, 3, 5, 1, 1, 4, 4, 4, 4, 3, 4, 5};
    vector<string> scoreSheet = {"double bogey", "bogey", "par", "eagle", "eagle", "double bogey", "eagle", "birdie", "bogey", "hole in one", "hole in one", "albatross", "double bogey", "par", "double bogey", "birdie", "triple bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> parValues = {4, 4, 3, 4, 1, 5, 5, 4, 4, 2, 1, 1, 1, 1, 2, 5, 3, 1};
    vector<string> scoreSheet = {"albatross", "triple bogey", "birdie", "albatross", "hole in one", "albatross", "eagle", "par", "bogey", "par", "triple bogey", "triple bogey", "double bogey", "double bogey", "birdie", "bogey", "triple bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> parValues = {3, 3, 2, 3, 2, 2, 5, 4, 3, 4, 4, 1, 4, 5, 4, 3, 3, 2};
    vector<string> scoreSheet = {"eagle", "birdie", "bogey", "triple bogey", "birdie", "birdie", "albatross", "albatross", "birdie", "triple bogey", "double bogey", "double bogey", "bogey", "eagle", "double bogey", "birdie", "bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> parValues = {2, 3, 5, 3, 4, 4, 5, 3, 3, 3, 4, 2, 4, 2, 2, 5, 5, 2};
    vector<string> scoreSheet = {"birdie", "triple bogey", "albatross", "par", "eagle", "bogey", "birdie", "par", "bogey", "bogey", "par", "par", "bogey", "birdie", "bogey", "albatross", "triple bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> parValues = {1, 4, 5, 1, 4, 2, 2, 2, 3, 3, 1, 4, 4, 2, 2, 2, 5, 3};
    vector<string> scoreSheet = {"hole in one", "triple bogey", "double bogey", "double bogey", "albatross", "triple bogey", "birdie", "birdie", "eagle", "bogey", "bogey", "triple bogey", "double bogey", "birdie", "birdie", "triple bogey", "par", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> parValues = {3, 1, 1, 2, 5, 4, 5, 5, 1, 5, 5, 3, 5, 1, 4, 2, 3, 3};
    vector<string> scoreSheet = {"par", "bogey", "bogey", "par", "triple bogey", "par", "eagle", "par", "hole in one", "triple bogey", "double bogey", "par", "triple bogey", "par", "double bogey", "triple bogey", "birdie", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> parValues = {5, 4, 1, 4, 3, 1, 1, 5, 4, 5, 3, 1, 5, 4, 1, 5, 2, 3};
    vector<string> scoreSheet = {"triple bogey", "albatross", "bogey", "bogey", "eagle", "par", "triple bogey", "birdie", "albatross", "par", "par", "bogey", "eagle", "double bogey", "hole in one", "triple bogey", "birdie", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> parValues = {3, 5, 1, 3, 1, 5, 4, 4, 1, 5, 5, 3, 3, 1, 2, 2, 2, 5};
    vector<string> scoreSheet = {"eagle", "birdie", "bogey", "par", "triple bogey", "eagle", "bogey", "double bogey", "triple bogey", "double bogey", "birdie", "double bogey", "triple bogey", "hole in one", "par", "bogey", "par", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> parValues = {5, 3, 4, 5, 4, 2, 4, 2, 4, 5, 5, 5, 3, 3, 3, 4, 2, 3};
    vector<string> scoreSheet = {"albatross", "birdie", "eagle", "double bogey", "par", "double bogey", "eagle", "double bogey", "eagle", "albatross", "bogey", "eagle", "par", "par", "triple bogey", "par", "triple bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> parValues = {1, 1, 2, 5, 1, 3, 3, 2, 1, 5, 2, 1, 3, 3, 5, 4, 3, 1};
    vector<string> scoreSheet = {"hole in one", "triple bogey", "par", "albatross", "hole in one", "triple bogey", "bogey", "triple bogey", "bogey", "birdie", "bogey", "double bogey", "eagle", "eagle", "par", "bogey", "triple bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> parValues = {2, 5, 3, 4, 3, 2, 4, 5, 3, 4, 5, 4, 5, 3, 4, 4, 5, 2};
    vector<string> scoreSheet = {"birdie", "par", "bogey", "double bogey", "eagle", "birdie", "eagle", "bogey", "eagle", "eagle", "triple bogey", "eagle", "albatross", "bogey", "triple bogey", "double bogey", "triple bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> parValues = {5, 5, 5, 5, 4, 3, 5, 1, 1, 4, 4, 4, 5, 3, 4, 5, 4, 5};
    vector<string> scoreSheet = {"bogey", "par", "birdie", "bogey", "par", "double bogey", "albatross", "double bogey", "triple bogey", "par", "bogey", "birdie", "birdie", "birdie", "albatross", "eagle", "double bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> parValues = {4, 3, 3, 2, 1, 3, 3, 2, 5, 5, 3, 5, 4, 3, 5, 3, 1, 5};
    vector<string> scoreSheet = {"triple bogey", "triple bogey", "double bogey", "double bogey", "par", "birdie", "par", "triple bogey", "albatross", "double bogey", "bogey", "par", "birdie", "triple bogey", "double bogey", "triple bogey", "bogey", "albatross"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> parValues = {1, 2, 2, 2, 1, 1, 5, 5, 4, 5, 3, 3, 2, 3, 1, 2, 2, 4};
    vector<string> scoreSheet = {"bogey", "double bogey", "double bogey", "triple bogey", "triple bogey", "triple bogey", "double bogey", "triple bogey", "albatross", "birdie", "birdie", "eagle", "triple bogey", "birdie", "hole in one", "birdie", "triple bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> parValues = {1, 5, 5, 3, 3, 5, 2, 4, 3, 1, 4, 1, 4, 5, 2, 4, 4, 5};
    vector<string> scoreSheet = {"bogey", "eagle", "bogey", "triple bogey", "triple bogey", "triple bogey", "birdie", "triple bogey", "eagle", "bogey", "albatross", "double bogey", "birdie", "triple bogey", "double bogey", "bogey", "albatross", "albatross"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> parValues = {5, 1, 2, 3, 1, 2, 4, 2, 3, 3, 4, 3, 2, 2, 5, 3, 5, 1};
    vector<string> scoreSheet = {"par", "par", "triple bogey", "double bogey", "triple bogey", "triple bogey", "birdie", "triple bogey", "par", "eagle", "double bogey", "bogey", "birdie", "triple bogey", "double bogey", "triple bogey", "par", "hole in one"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> parValues = {3, 1, 5, 5, 2, 5, 1, 4, 5, 3, 1, 1, 4, 5, 4, 4, 1, 5};
    vector<string> scoreSheet = {"triple bogey", "bogey", "triple bogey", "birdie", "par", "eagle", "bogey", "albatross", "bogey", "par", "bogey", "triple bogey", "albatross", "par", "triple bogey", "par", "double bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> parValues = {4, 2, 1, 5, 2, 2, 3, 4, 3, 3, 1, 1, 1, 5, 2, 2, 4, 1};
    vector<string> scoreSheet = {"eagle", "par", "triple bogey", "bogey", "triple bogey", "bogey", "double bogey", "par", "double bogey", "double bogey", "triple bogey", "par", "bogey", "par", "triple bogey", "bogey", "triple bogey", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> parValues = {1, 5, 3, 5, 1, 5, 5, 4, 4, 1, 1, 4, 4, 1, 2, 3, 5, 4};
    vector<string> scoreSheet = {"double bogey", "par", "bogey", "double bogey", "hole in one", "eagle", "bogey", "bogey", "bogey", "triple bogey", "hole in one", "par", "triple bogey", "double bogey", "par", "bogey", "par", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> parValues = {3, 4, 3, 3, 1, 4, 5, 5, 2, 2, 5, 2, 2, 4, 5, 3, 5, 4};
    vector<string> scoreSheet = {"bogey", "albatross", "bogey", "double bogey", "triple bogey", "double bogey", "albatross", "triple bogey", "par", "par", "par", "bogey", "birdie", "triple bogey", "par", "eagle", "birdie", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> parValues = {3, 4, 3, 5, 1, 2, 2, 2, 3, 2, 4, 3, 3, 5, 5, 5, 3, 2};
    vector<string> scoreSheet = {"eagle", "double bogey", "double bogey", "albatross", "double bogey", "par", "triple bogey", "triple bogey", "triple bogey", "double bogey", "eagle", "triple bogey", "par", "bogey", "birdie", "triple bogey", "double bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> parValues = {4, 1, 5, 4, 4, 1, 1, 1, 3, 1, 4, 3, 5, 2, 2, 1, 4, 3};
    vector<string> scoreSheet = {"eagle", "triple bogey", "eagle", "double bogey", "birdie", "bogey", "double bogey", "triple bogey", "double bogey", "par", "bogey", "par", "par", "triple bogey", "par", "par", "bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> parValues = {4, 1, 2, 5, 2, 3, 1, 2, 1, 5, 4, 1, 1, 2, 2, 5, 4, 4};
    vector<string> scoreSheet = {"eagle", "par", "double bogey", "bogey", "bogey", "eagle", "par", "triple bogey", "bogey", "eagle", "albatross", "bogey", "hole in one", "bogey", "triple bogey", "birdie", "triple bogey", "eagle"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> parValues = {2, 1, 5, 3, 3, 5, 4, 3, 4, 5, 2, 5, 2, 2, 2, 2, 3, 2};
    vector<string> scoreSheet = {"birdie", "triple bogey", "double bogey", "par", "triple bogey", "double bogey", "double bogey", "eagle", "eagle", "bogey", "birdie", "bogey", "birdie", "birdie", "triple bogey", "par", "triple bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> parValues = {3, 2, 4, 5, 1, 5, 3, 2, 4, 2, 2, 4, 1, 4, 3, 1, 1, 3};
    vector<string> scoreSheet = {"triple bogey", "double bogey", "eagle", "birdie", "par", "bogey", "bogey", "par", "albatross", "double bogey", "triple bogey", "birdie", "bogey", "par", "triple bogey", "bogey", "triple bogey", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> parValues = {3, 5, 5, 5, 4, 4, 2, 2, 4, 5, 4, 2, 2, 4, 2, 3, 4, 5};
    vector<string> scoreSheet = {"triple bogey", "eagle", "albatross", "double bogey", "albatross", "eagle", "bogey", "triple bogey", "triple bogey", "birdie", "albatross", "birdie", "birdie", "triple bogey", "par", "eagle", "double bogey", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> parValues = {3, 3, 3, 4, 5, 4, 1, 1, 1, 1, 2, 4, 1, 5, 5, 2, 5, 4};
    vector<string> scoreSheet = {"eagle", "triple bogey", "double bogey", "par", "double bogey", "bogey", "double bogey", "triple bogey", "bogey", "triple bogey", "birdie", "albatross", "par", "eagle", "par", "triple bogey", "albatross", "albatross"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> parValues = {4, 3, 4, 3, 5, 3, 1, 3, 5, 4, 2, 3, 4, 2, 3, 3, 4, 1};
    vector<string> scoreSheet = {"triple bogey", "triple bogey", "double bogey", "birdie", "double bogey", "par", "bogey", "par", "par", "eagle", "par", "par", "birdie", "triple bogey", "birdie", "birdie", "double bogey", "hole in one"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> parValues = {5, 4, 2, 3, 3, 4, 3, 2, 2, 2, 2, 3, 5, 4, 2, 2, 5, 4};
    vector<string> scoreSheet = {"triple bogey", "bogey", "double bogey", "double bogey", "par", "triple bogey", "triple bogey", "birdie", "triple bogey", "double bogey", "birdie", "birdie", "triple bogey", "eagle", "par", "double bogey", "albatross", "eagle"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> parValues = {2, 4, 2, 3, 3, 3, 2, 5, 4, 3, 1, 3, 1, 3, 4, 1, 4, 3};
    vector<string> scoreSheet = {"par", "eagle", "bogey", "birdie", "par", "bogey", "triple bogey", "bogey", "birdie", "par", "double bogey", "bogey", "triple bogey", "double bogey", "bogey", "par", "bogey", "eagle"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> parValues = {4, 2, 5, 3, 3, 1, 1, 4, 2, 4, 1, 2, 5, 2, 5, 3, 2, 5};
    vector<string> scoreSheet = {"birdie", "triple bogey", "albatross", "par", "triple bogey", "double bogey", "par", "double bogey", "par", "double bogey", "triple bogey", "bogey", "eagle", "par", "triple bogey", "birdie", "double bogey", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> parValues = {2, 5, 4, 2, 4, 4, 3, 5, 2, 4, 4, 3, 5, 3, 5, 3, 2, 2};
    vector<string> scoreSheet = {"par", "eagle", "triple bogey", "double bogey", "triple bogey", "bogey", "bogey", "albatross", "par", "bogey", "par", "birdie", "double bogey", "birdie", "birdie", "triple bogey", "triple bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> parValues = {3, 1, 3, 1, 3, 5, 3, 5, 5, 4, 3, 1, 4, 4, 2, 3, 4, 4};
    vector<string> scoreSheet = {"bogey", "hole in one", "par", "double bogey", "birdie", "triple bogey", "birdie", "birdie", "bogey", "double bogey", "par", "bogey", "double bogey", "triple bogey", "double bogey", "bogey", "par", "par"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> parValues = {1, 4, 3, 2, 5, 1, 1, 1, 5, 4, 5, 5, 1, 1, 1, 4, 1, 5};
    vector<string> scoreSheet = {"par", "par", "bogey", "birdie", "double bogey", "double bogey", "triple bogey", "triple bogey", "par", "bogey", "albatross", "triple bogey", "hole in one", "hole in one", "par", "birdie", "par", "bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> parValues = {4, 4, 2, 2, 3, 3, 5, 5, 1, 5, 3, 2, 3, 5, 1, 2, 3, 5};
    vector<string> scoreSheet = {"eagle", "par", "double bogey", "par", "birdie", "eagle", "bogey", "eagle", "bogey", "eagle", "birdie", "bogey", "eagle", "eagle", "par", "par", "eagle", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> parValues = {3, 1, 4, 5, 3, 5, 3, 5, 3, 2, 3, 2, 3, 3, 4, 1, 4, 3};
    vector<string> scoreSheet = {"triple bogey", "double bogey", "double bogey", "triple bogey", "eagle", "triple bogey", "eagle", "bogey", "eagle", "birdie", "eagle", "bogey", "par", "birdie", "par", "hole in one", "bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> parValues = {5, 4, 5, 4, 3, 5, 1, 2, 4, 3, 3, 3, 1, 3, 1, 1, 3, 3};
    vector<string> scoreSheet = {"par", "eagle", "double bogey", "bogey", "triple bogey", "bogey", "triple bogey", "birdie", "eagle", "par", "par", "double bogey", "bogey", "eagle", "par", "triple bogey", "eagle", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> parValues = {4, 4, 1, 4, 1, 4, 2, 1, 2, 3, 3, 2, 2, 5, 5, 5, 2, 1};
    vector<string> scoreSheet = {"birdie", "triple bogey", "bogey", "bogey", "triple bogey", "double bogey", "birdie", "bogey", "birdie", "eagle", "eagle", "triple bogey", "bogey", "par", "par", "bogey", "double bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> parValues = {3, 2, 4, 2, 5, 2, 4, 2, 2, 1, 4, 1, 4, 1, 5, 2, 4, 1};
    vector<string> scoreSheet = {"birdie", "par", "albatross", "birdie", "bogey", "double bogey", "triple bogey", "bogey", "par", "double bogey", "bogey", "triple bogey", "albatross", "double bogey", "double bogey", "bogey", "bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> parValues = {1, 4, 2, 4, 5, 4, 5, 1, 3, 5, 4, 5, 3, 4, 4, 5, 3, 1};
    vector<string> scoreSheet = {"double bogey", "birdie", "double bogey", "albatross", "bogey", "double bogey", "par", "hole in one", "par", "albatross", "double bogey", "albatross", "bogey", "par", "par", "birdie", "triple bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> parValues = {3, 3, 2, 5, 1, 3, 3, 1, 4, 3, 1, 5, 2, 3, 5, 2, 5, 2};
    vector<string> scoreSheet = {"double bogey", "eagle", "bogey", "bogey", "triple bogey", "bogey", "eagle", "double bogey", "par", "bogey", "double bogey", "birdie", "bogey", "eagle", "albatross", "triple bogey", "eagle", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> parValues = {3, 2, 4, 2, 2, 1, 1, 1, 3, 2, 4, 4, 4, 2, 3, 1, 3, 2};
    vector<string> scoreSheet = {"bogey", "double bogey", "par", "double bogey", "double bogey", "triple bogey", "triple bogey", "triple bogey", "bogey", "double bogey", "par", "par", "par", "double bogey", "bogey", "triple bogey", "bogey", "double bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> parValues = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<string> scoreSheet = {"eagle", "birdie", "albatross", "birdie", "birdie", "par", "hole in one", "par", "eagle", "birdie", "albatross", "albatross", "albatross", "birdie", "eagle", "hole in one", "eagle", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> parValues = {3, 2, 5, 2, 2, 1, 1, 1, 3, 2, 4, 4, 4, 2, 3, 1, 3, 2};
    vector<string> scoreSheet = {"eagle", "birdie", "albatross", "birdie", "birdie", "par", "hole in one", "par", "eagle", "birdie", "albatross", "albatross", "albatross", "birdie", "eagle", "hole in one", "eagle", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> parValues = {3, 2, 4, 2, 2, 1, 1, 1, 3, 2, 4, 4, 4, 2, 3, 1, 3, 2};
    vector<string> scoreSheet = {"eagle", "birdie", "albatross", "birdie", "birdie", "par", "hole in one", "par", "eagle", "birdie", "albatross", "albatross", "albatross", "birdie", "eagle", "hole in one", "eagle", "birdie"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> parValues = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<string> scoreSheet = {"bogey", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> parValues = {4, 1, 3, 3, 4, 4, 1, 4, 2, 3, 3, 5, 4, 1, 4, 4, 2, 1};
    vector<string> scoreSheet = {"triple bogey", "triple bogey", "bogey", "par", "triple bogey", "double bogey", "triple bogey", "triple bogey", "par", "eagle", "bogey", "bogey", "birdie", "par", "triple bogey", "eagle", "triple bogey", "triple bogey"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> parValues = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<string> scoreSheet = {"hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> parValues = {3, 3, 3, 3, 3, 4, 3, 2, 4, 5, 4, 4, 3, 2, 3, 4, 5, 2};
    vector<string> scoreSheet = {"hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one", "hole in one"};
    GolfScore* pObj = new GolfScore();
    clock_t start = clock();
    int result = pObj->tally(parValues, scoreSheet);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=285916&rd=4750&pm=2405
********************************************************************************
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class GolfScore
{
public:
int tally(vector<int> p, vector<string> s)
{
int i;
int sum=0;
for(i=0;i<p.size();i++)
{
if (s[i]== "triple bogey")
sum+=p[i]+3;
else
if(s[i]=="triple bogey")
sum+=p[i]+3;
else
if(s[i]=="double bogey")
sum+=p[i]+2;
else
if(s[i]=="bogey")
sum+=p[i]+1;
else
if(s[i]=="birdie")
sum+=p[i]-1;
else 
if(s[i]== "eagle")
sum+=p[i]-2;
else
if(s[i]=="albatross")
sum+=p[i]-3;
else
if(s[i]=="par")
sum+=p[i];
else
sum+=1;
}
return sum;
}
};

********************************************************************************
*******************************************************************************/