/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1815
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

class Cubism {
public:
    int lines(vector<string> lattice, string color);
};

int Cubism::lines(vector<string> lattice, string color) {
    int ret;
    return ret;
}


int test0() {
    vector<string> lattice = {"BBBBBWWWBWWWBWWW", "BWWWWWWWWWWWWWWW", "BWWWWWWWWWWWWWWW", "BWWWWWWWWWWWWWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> lattice = {"BWWWWWWWWWWWWWWW", "WWWWWBWWWWWWWWWW", "WWWWWWWWWWBWWWWW", "WWWWWWWWWWWWWWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> lattice = {"WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> lattice = {"WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> lattice = {"WWWWWWWWWBWWWWWW", "WWWBWWWWWWWWWWWW", "WWWWWWWWWWWWBWWW", "WWWBWWWWWWWWWWWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> lattice = {"BWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBW", "BWBWBWBWBWBWBWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> lattice = {"WBWBBWBWWBWBBBBW", "BWWWWBBBWWBWBBWB", "BBWBBBWBWWWBWBWW", "BBBBWBBWWBWWBWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> lattice = {"WWBWBBBBBBWBWBWB", "WWBBBWWBWBWBBBWW", "BBWBBWWWWBBWBBBW", "BWBWBBBWBWBBBWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> lattice = {"BWBWWWWWBBBWBWBB", "BBWBBBWBBWWWWWWB", "WBWWBBWBBWWBBWBB", "BWBWBBBBWWBWWBBW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
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
    vector<string> lattice = {"BBWWBBBWWWWBWBBW", "BWBWWWBWWWBBBWBW", "WWWBWWWWBBBWWBWW", "BBWWWWBWWBBBBWWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> lattice = {"BWWBWWWWWWBWWBWB", "BBWWWBWWWWWBWWBB", "WBWBBWWWWWBWWWBW", "BBBWBBBBWBBWWBBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> lattice = {"BBBWWBBBBWBWWWWW", "BWBWBBWBBWBBBWBW", "WBWBBWBWWWBWBWBW", "WBWWWWWBBWBWWWWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> lattice = {"WBWWWBWWBWBBBWBW", "WBWWBBWWWBWBBBWB", "WWBWBWBBWBWBBBWB", "WBWBWWBWBBWWBWBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> lattice = {"WBBBBWWBBBBWBBWW", "BBWWWWBWWWWWBBWW", "BWWWBWBBWWBBWWBB", "WWWWBWBBBBWWWWWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> lattice = {"WBBWWBWWWWWBWBBB", "WBBWWWWBWWWWBWBW", "BWBWBBBWWBBBWBWB", "BBBBWWBBWWWWBWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> lattice = {"BWBBBBWWBWWBBWBB", "WWBWBWBWWWBBBBBB", "WWWWBWWBBWBWWBWB", "BBBWBBWBBWWWBWWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> lattice = {"BWBWBBWWBWWWWBWW", "WBWWWBWWBBBWWWWB", "WBWWWWBBBBWWWBBW", "BBWWWBBBBBBWWBWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> lattice = {"BBBWBWWBBBBBWBWB", "BWWBWBWWWBBWWBBW", "BBWBBBBWBBBBWBBB", "WBBWBBWBBBWWBBWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> lattice = {"WBWWBWWBWBWBWWBW", "WWWBWWWWBWWWWWBB", "WBWWWBWBBWWWWWBB", "WWWWWBWWBBWBBBWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> lattice = {"BWWWWWBBWBBWBBBW", "WBWWWWBBBWBWWBBB", "BWBBWBWBWBBWBBBB", "BWWBBWBBWWBWWBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
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
    vector<string> lattice = {"WWBBBBBBBWWBBWWW", "BWBWBWWBBBBBWBWW", "BBBWWWBWBWWBBBWB", "WWBBWBBBWWBBWBBW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> lattice = {"WBWWWWWBWWWWBWBB", "WWBWBWWWBWWWBWWB", "WWWBBBWBBWBBBBWW", "WBWBBWBWWWWWBWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> lattice = {"WWWBWBWBWWBBWBWW", "WBWBBWBWWWBWWBWW", "WWWBBBWWBWBWWWWW", "BBBBWBBWWBWBWBWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> lattice = {"WWBWBWWWWBBWBBBW", "BWWBWWBBBBWWWBBW", "BBWBWBBWBWBBWBBB", "WWWBBWWBWBWWBWWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> lattice = {"WWWWBWBBWBWWWWWW", "BBWWWWWWBWBWBBBB", "BWWWWBWWWBBWBWBB", "BWWWWBWWBBBWBBWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> lattice = {"BBWBWWBBWWBWBWBW", "BBWWBBWWWBBWWBWB", "WWWBBWBBBBBBBWBB", "WWWWBWWBBBWBBBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> lattice = {"WWWBBWBBWBBBWWWB", "WBBBWBBBBWWBWWBW", "WBBBWWBBWWBBWBBW", "WBWWBBBBBWBBBWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
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
    vector<string> lattice = {"WWWBWWBWWBBWWWWW", "BBWWBWBBWBBBWBWB", "WWBBWBBWWWBBBBBW", "BWBWWBWWBBWWWWWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> lattice = {"WWWBBWBWBBWWBBBW", "WBWWWWWBBBWBBWWB", "WWWWBWWWWBWWBWWW", "BWWBBBBWWBBBBWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> lattice = {"WBBBBWWWWBWBWBWW", "WBBWBWWBWWWWWBWB", "BBWWWBWWBWBBWWWB", "WWBWWWBWWWWBBBWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> lattice = {"WWWBWBBWWWWWBBBB", "WBWWBWBWWWBBBBWW", "WWBBWWWBBBWBWBWB", "BWWBBBBBBWWBBBWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> lattice = {"BBWWWWWWBBWBBWBB", "WWWBWBBBWWWBWBWB", "BWWWWBWBWWWWWBBB", "BWBBBWWWBBWBBBWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> lattice = {"WBBWBWWBWBWBWBWW", "WWBBWBBBWBBWBBBW", "WBBWBWWBBBWWWWBB", "BWWBWBBBWBWWWBBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> lattice = {"BBWWBWBWBWBWBBBB", "BWWBBBBBBBWWWWBW", "BWWWWWWBWWWWBBBW", "WBWWWBBBWWBBWBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> lattice = {"WBBBBWWWBBBBBBWB", "BWWBWBBBWBWBWBWB", "BWBBBWWBBBWWWWBB", "WWBWWBBBBBBWBWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> lattice = {"BBBWBWWWWWBWWWWB", "WBBBWWWWWWBWWBBB", "WBWWBWWWBWBBWBWB", "BWWBBBBWWWWWBWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> lattice = {"WWBBWWWBBBWBWBWB", "BWBWBBBBBWBBWWWB", "WBWWBWBWWWBBBBWB", "WBWBBWBWWBWWWWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> lattice = {"BBBWBBWWBBWWWWWB", "BBWBWBBWWBWWBBBW", "WWBWWBBWWWBBBBWB", "BWBBWBBWWBBBWBWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> lattice = {"WWBWWWWBBBWBWBWB", "WWWWWWBWWWWWWWWB", "BWWBBBBBBBBWBBBW", "BBBBWWBBWWWBBBWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> lattice = {"WBBBWWWWWWBWWBWB", "BBWWWWWBWBBBBWWW", "BBBBWBBWBBWBWBBB", "BBWWWBWBBBWBWWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> lattice = {"BWWBWWWWWWBBBBBB", "BWWBBBWWBWWBBBBW", "BBWBBBWWWBWWWWBB", "WWWBWBWBWBBWBWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> lattice = {"BBWBWWWWWWBWBWBW", "WBBBBBWBBBWBWWBW", "WBBBBWBWWBWBBBBW", "WWWBWWWBWWBWWWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
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
    vector<string> lattice = {"BWBBWBBWWBWWWWBW", "BBBWWWBBWBWBWWWB", "BBWBBBBBWWWWBBWW", "WWWWWBWWBBBWBWBW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> lattice = {"WWBBWBBBBWBBWWWB", "BBWWBWWBWBBWBWBB", "WWWBBBWBBWWBWWBW", "BWBWBBBWBBBWWWWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> lattice = {"BBBBWBBBWWBWBWWB", "WBWBBBWWWWWBBWBB", "BBBWWWWBBWBWWBWB", "BBBBWWWWWBWWBWBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> lattice = {"WBBWWBBBWBBWWBWB", "BBBWBBWWBBBWWWBB", "WWBWWWWWWBBBWWBW", "WWBBWBBBWWBWWBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> lattice = {"BBWBWWBWBWBBBBWB", "BBBWBWBBWWBWWBWB", "BBBBBBBBWBBBWWBB", "WWBWWWBBWWBWWWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> lattice = {"WWBBWBWBBBBBBBBW", "WBBWBWWBBBWBBWBW", "BWWWBBWBBBWBBWWW", "WBBWBWBBBBWWBWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> lattice = {"BWBWWWBBWBWBBWBB", "BBWWBWBBWWWBBBBB", "BWBWBWWBBBWWBBWB", "BBBWWWBWWWBWBWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> lattice = {"BBBBBWWWBWBBBBWB", "WBWWBWWBWWBBWBBB", "BWBWBBWBWWBWWWBW", "BWBWWBWBBBWBWWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> lattice = {"WBBBBWWWBBBWBWWW", "WBWWWWWBBWWBWBWB", "BWBWBWWBBWWWBWBW", "BBBWWBBWWWBBWWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> lattice = {"BWWWWBWWWWBBWBBW", "BBWWBWWWBWBWWWWW", "WBWWWBBWBBBWWBBB", "BWBWBWBBWWBWWWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> lattice = {"BBWWWBWBWWBWBWBW", "BWBBBWBBWBBWWBBB", "WBBBWBBBWBWBBWWW", "BBWWBBBBWBWBWWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> lattice = {"BBBBBWBWWWWBWWBB", "BBWWWBWWWBBWWBBW", "WWBBWBWBWBBBWWWW", "BBWBWBBBBBWBBWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> lattice = {"WBWBBWWWBWBBWBWB", "WWBBWBBWBWWBBWBB", "BBWWWWWBBBWBBBWW", "WWBWBBBWBWBWWBWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> lattice = {"BBBWWWBWBWBWBBBB", "WWWWBBWBBWBWWWWB", "BBBBBBBWBBBBBWWW", "WWBBWBBBBBWWBBWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> lattice = {"BBWWBWWWWBWBBWBW", "BBBBWBBWBBBBWBBB", "WWWWWBBWBBWWBBBB", "WBBBWWBBWBBWWWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> lattice = {"BBWWWBWWWWBBWBWW", "BBBBWBWWWWWBWBWW", "BBWBBWWWBBWWWWBW", "WWWWBWWBWBBBBBBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> lattice = {"BWBWBBBWWBWWWBWB", "WBBBBBBWBWWBWWBW", "BWWBBWWBWBWWWWBW", "WBWWBBBWBWWBWBWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> lattice = {"WWBWBBWWWBWWBBWW", "BWBWBWBWWWWBWWWW", "BBBBWWBWBWBWBWBW", "WBWBBWBBBWWWBWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> lattice = {"WBBWWWWWBBBBBBBW", "BWWWWBBWWWBBBWBW", "BWBWBWWBBWWBBBWB", "WWBBWBBBWWWBBBBW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> lattice = {"BBWBWBBBBWWBBWWB", "BWWBWBBWWBBBWWWW", "WWWWWWWWWWBBBWWB", "BBBWBBBWBBBBWWBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> lattice = {"BWBWBWWBWWBBBBBW", "BBBWBBBWBBWBWWWB", "BWWWBBBBBBWBWWWW", "BWWWWBBWWWBWWWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> lattice = {"BWBBBWBBWBWBBWBW", "WWBWBWBBBBWBWBBB", "WWWWWBBBBBBBWBBW", "BBWWWWWBBBBWWWWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> lattice = {"BBWWWBBWWWWBBBWB", "WWBWBBWBWBWBWWBW", "BWBWBWBWWWBBBWWB", "WWBWWBWWBWBBWWBW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> lattice = {"BWBWWBBWBBWWBBWB", "BWWBBBBBBWBWBBBB", "BBBBBBWBBBWWWWWB", "WBBWBBBBBBBWBBWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> lattice = {"BBWWWWBWBWBWBBWW", "WBWBWWWBBBWWBBBB", "WWBWBBWBBWBBBWWB", "WWWWBBBWWBBWWWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> lattice = {"WBBWBWBWWWBWWWBB", "WWWWWBBBWBWWBWWW", "BBWWBBWBWBWBWWWW", "BWWWWWWWBWWBBBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> lattice = {"WBWWWBBBWBWWBWBB", "BWBBWWWBBBBBBBWB", "WWWBBWWWBWBBBWBB", "WBBWWBWBBBBBWWWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> lattice = {"WBWBWWWBBWWBBBBB", "WBWBWWWBBBBBBBBB", "WBBBWBWBBWBWBBWB", "BWWWWBBBWWBBBBBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> lattice = {"WWBBWWWBBWWBBBBW", "WBBWBBWWWWWBBBBB", "WWBWBWBBWWBBBBBW", "BBBWBWWWWBWWWWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> lattice = {"BBWWWWBWBBBBBBWW", "BBBBWBWWWWWBBWWW", "BBWWWWWBBBBWBWBW", "WWBBBWBWWWWWBBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> lattice = {"BWBWWBBWWBBBBWBB", "WBWWBBBBBBWWWWWB", "WWWWBBBWBWWBBWWW", "BBWWWBBBBWWWBBBW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> lattice = {"WBBBWWBWWBWBBBBB", "WBWBBWBBWWWWWBWW", "WWWWWBWWWBBWWBWB", "BBBWWWWWBWWWWBBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> lattice = {"WBWWBBWWBWBWWWWW", "WWWBWBWBBBBBBWWB", "WWWWWWBBBWBBBBWB", "WBBBWBBBWBWBWBBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> lattice = {"WWBWWWBBWBWBBWBW", "BWWBWWBWWBBBWBBW", "WBWWWWBBBWWBWBWW", "BWBWBBBWWBWWBWWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> lattice = {"WBWBWWWBBWBBWWBW", "WBBWWWBBWBBWWWWB", "WWWWWWWWWWBWBBBB", "BWBBBBWBWWBWBBBW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> lattice = {"BWWWBBWWBWWBBWBB", "WWBBBWWWBWWWBBBW", "BBWWBWBWBWBWWBWB", "WBBWWWBBWBWWWWBW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> lattice = {"BBBWWWBBBBBWBBWB", "BWBBWWWWBWBBWWWB", "BWWWWWWWBWBWWWBB", "WWWBWBBWWBBWBWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> lattice = {"WWBWWWBWBWWBBBWW", "BWWWWBBBWBBWWBWB", "WWWWWWBWBWWWBBBB", "WBBWWBBWBBWWWWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> lattice = {"BBBWBWBBBWBBWBWB", "BBWBWBBWWWBWBWBW", "WWBWBBWWWBWBWWBB", "BBWWWWBBWBBBWBWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> lattice = {"WWBWWBWBWBWBBBWB", "BWBBWWWWWWBBBWBW", "WBWBBBBBBWWWWBBB", "WBBBBWBBBWWWWBBW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> lattice = {"BWBWBWBBWBBWBBBW", "BBBWWBBBBWWBWBWB", "BWWWBWBBBBWBBWBW", "BBWWBWBWBWWWWWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> lattice = {"WWWWWBBBWBBWWWWW", "BWBBBBWWBWWBWBWW", "WWWBWWBWWWWWBBBB", "WBBWBWBBWBWBWBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> lattice = {"WWWBWWWBWWWWWWWW", "WWWWWWWWBBBBBBBB", "BBBWWBBWWBBWWBWB", "WBWBBBBWWBBBWWWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> lattice = {"BWWWBWBWWWWBBWBW", "BBWWBWWWWWWBWBWB", "WBWWBWBBBBWWWWBB", "BWWBWWBBBWBWWBWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> lattice = {"BWWWWWBWBWBWBWWW", "BWWBWBBBBBBBBWBB", "WWWWWBBWWBWBBBWB", "BWWBBBWBBWBWWBBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> lattice = {"WWBBWWBBWBWWBWBB", "WWWWBBBBBBWBBWBB", "BWWBWBWBBWWBBWWB", "BWBBWWBWBWWBBWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> lattice = {"WWWBWWWWWBWBBBBW", "WBBBBWBBWWWWBWBW", "WBBWWBWWWBWWWWWW", "BWBWBWWWWWWBBWWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> lattice = {"BBWWWBBBWWWBBWBB", "BWBBWWWWWBWBBWWW", "BBBWWBBWBWWWWBWW", "BBWBBWBBWBWBWBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> lattice = {"WWWBWBWWBWBBWWWW", "BWBWBBBWBBBWBBWW", "WWBBWWWBBWWWBBBB", "WBWBWBBWWWWBWWBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> lattice = {"BBBBWWWWWBWWWBWB", "WBWBWBWBWWWWWBWW", "BBBBWWWWWWWWBWWW", "BWWBWWWBBWWWBBWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> lattice = {"BWBBWBBWWWWWBWWW", "BWBWBBBWWWBWBBWW", "WWWWWWBBWWBBWBBW", "WWWWBBWWBWBBWBWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> lattice = {"BWWWBBBBBWBBWBBB", "WWBBWWWBWWBWWBBW", "BWBWWBWWBWBBBBWW", "WWWBWWBBWBBWBWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> lattice = {"BWBBWBBWBBWBBBWB", "BWBBWWWBBWWWWWBB", "BBWBWBBWBBWWBBBB", "WBBBBBBWWBWWBWBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> lattice = {"WWBBBBWWWWBBWWBW", "WBWWBWBWBBWBBWBW", "WWWBBBBBBBBWBBBB", "WWBBBBWBBBBWWWWB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> lattice = {"BWWBWWBWWBBWBBBB", "WBBWWWBBBBBWWWBB", "WWBBWBWBBWBBWBBW", "BBBBWBBBWWBWWBBB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> lattice = {"BWBWBBWWBBBBWBBB", "BWWWBBBWWWWWBBWB", "BBBBBBBBWBWBBBWW", "BBWBWWWWWBWBBBWB"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> lattice = {"WBWWWWBWWWWBWBWB", "BWBWBWWBWBBWWBBB", "WWBWWBBWBBBWWWWW", "BBBBBWBWBBBWWWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> lattice = {"WBBWWWBWBBWWBWBW", "WWBBWBBBWBBWWBWB", "BWBWBWBWBWBWWBBW", "BBBWWWBWBWWWBWBB"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> lattice = {"BBBBBWWWBWWWBWWW", "BWWWWWWWWWWWWWWW", "BWWWWWWWWWWWWWWW", "BWWWWWWWWWWWWWWW"};
    string color = "black";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> lattice = {"WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW", "WWWWWWWWWWWWWWWW"};
    string color = "white";
    Cubism* pObj = new Cubism();
    clock_t start = clock();
    int result = pObj->lines(lattice, color);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=296453&rd=4665&pm=1815
********************************************************************************
#include <vector>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
#define ARRAY_SIZE(array) (sizeof(array)/sizeof((array)[0]))
 
vector<string> split(const string &s, const char *delim = " \t\n") {
  vector<string> result;
  for (size_t candidate = 0; ; ) {
    size_t begin = s.find_first_not_of(delim, candidate);
    if (begin==string::npos)
      break; // only delimiters remain
    size_t end = s.find_first_of(delim, begin+1);
    if (end==string::npos) {
      result.push_back(s.substr(begin));
      return result;
    }
    result.push_back(s.substr(begin, end-begin));
    candidate = end+1;
  }
  return result;
}
 
template <typename Dst>
Dst &convert(Dst &dst, const string &src) {
    istringstream ss(s);
    ss >> dst;
    return dst;
}
 
template <typename Dst>
Dst convertTo(const string &src) {
    Dst dst; return convert(dst, src);
}
 
struct Cubism {
 
    char col(const vector <string> &lattice, int x, int y, int z) {
        return lattice[x][4*y+z];
    }
    int lines(vector <string> lat, string color) {
        int count = 0;
        char c = (color=="black"? 'B': 'W');
        for (int x = 0; x<4; ++x)
            for (int y = 0; y<4; ++y) {
                ++count;
                for (int z = 0; z<4; ++z)
                    if (col(lat, x, y, z)!=c) {
                        --count;
                        break;
                    }
            }
                for (int z = 0; z<4; ++z)
            for (int y = 0; y<4; ++y) {
                ++count;
        for (int x = 0; x<4; ++x)
                    if (col(lat, x, y, z)!=c) {
                        --count;
                        break;
                    }
            }
        for (int x = 0; x<4; ++x)
            for (int z = 0; z<4; ++z) {
                ++count;
            for (int y = 0; y<4; ++y)
                    if (col(lat, x, y, z)!=c) {
                        --count;
                        break;
                    }
            }
 
    for (int x = 0; x<4; ++x) {
                        ++count;
            for (int i = 0; i<4; ++i)
                if (col(lat, x, i, i)!=c) {
                        --count;
                        break;
                }
                        ++count;
            for (int i = 0; i<4; ++i)
                if (col(lat, x, 3-i, i)!=c) {
                        --count;
                        break;
                }
    }
 
    for (int x = 0; x<4; ++x) {
                        ++count;
            for (int i = 0; i<4; ++i)
                if (col(lat, i, x, i)!=c) {
                        --count;
                        break;
                }
                        ++count;
            for (int i = 0; i<4; ++i)
                if (col(lat, 3-i, x, i)!=c) {
                        --count;
                        break;
                }
    }
 
    for (int x = 0; x<4; ++x) {
                        ++count;
            for (int i = 0; i<4; ++i)
                if (col(lat, i, i, x)!=c) {
                        --count;
                        break;
                }
                        ++count;
            for (int i = 0; i<4; ++i)
                if (col(lat, 3-i, i, x)!=c) {
                        --count;
                        break;
                }
    }
 
    ++count;
    for (int i = 0; i<4; ++i)
        if (col(lat, i, i, i)!=c) {
                --count;
                break;
        }
 
     ++count;
    for (int i = 0; i<4; ++i)
        if (col(lat, 3-i, i, i)!=c) {
                --count;
                break;
        }
 
     ++count;
    for (int i = 0; i<4; ++i)
        if (col(lat, i, 3-i, i)!=c) {
                --count;
                break;
        }
     ++count;
    for (int i = 0; i<4; ++i)
        if (col(lat, i, i, 3-i)!=c) {
                --count;
                break;
        }
    return count;
    }
};

********************************************************************************
*******************************************************************************/