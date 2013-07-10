/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10508
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

class CubePainting {
public:
    int count(vector<string> cube);
};

int CubePainting::count(vector<string> cube) {
    int ret;
    return ret;
}


int test0() {
    vector<string> cube = {"***", "***", "***", "**....******", "**....******", "**....******", "***", "***", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
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
    vector<string> cube = {"***", "***", "***", "************", "............", "************", "***", "***", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
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
    vector<string> cube = {".*.", "***", ".*.", ".*..*..*..*.", "************", ".*..*..*..*.", ".*.", "***", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> cube = {"***", "***", "***", "************", "************", "************", "***", "***", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cube = {"*.*", "...", "*.*", "*.**.**.**.*", "............", "*.**.**.**.*", "*.*", "...", "*.*"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> cube = {"***", "***", "***", "............", "............", "............", "***", "***", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 40661;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cube = {"...", "...", "...", "............", "............", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 87358528;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cube = {"*..", "...", "...", "............", "............", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 409157492;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cube = {".*.", "...", "...", "............", "............", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 87043541;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> cube = {"...", ".*.", "...", "............", "............", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 147532253;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cube = {".*.", ".*.", ".*.", ".*..........", ".*..........", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 20012102;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cube = {"..*", "...", "..*", "............", "............", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 111610853;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cube = {"..*", "...", "*..", "............", "............", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 171725628;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cube = {"...", "...", "...", "............", ".*.....*....", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 159705949;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cube = {"...", "...", "...", "*...........", ".*..........", "..*.........", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 4109056;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cube = {"...", "...", "...", "...***......", "...***......", "...***......", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 13013856;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cube = {"...", "...", ".*.", "............", "........*...", "............", "...", ".*.", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 20036259;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cube = {"...", "...", "...", ".*.*..**.*..", ".*.*..*.**..", "**.*..*..*..", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
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
    vector<string> cube = {"...", "...", "...", "*........***", "*..........*", "***........*", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 484645;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cube = {"...", ".*.", "**.", ".....**.....", ".......*.*..", "...*..*.**..", "...", "*..", ".**"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cube = {"*..", "..*", "...", "..*.........", "...*.*......", "....*.*.....", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cube = {"...", "...", "...", "........*...", "............", "*...........", "...", "...", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 19749086;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cube = {"...", "...", "...", ".*......*...", "..........*.", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 31898771;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cube = {".*.", "..*", "**.", ".*.******...", "....*..*....", "....*.*.....", "...", "..*", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cube = {"...", "...", "...", "...*........", ".*.**.....*.", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 614878;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cube = {"*..", "...", "..*", ".*.**....*.*", "...*.......*", "......**....", "...", "*.*", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cube = {"...", "...", "...", "............", "............", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 87358528;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cube = {"...", "..*", "...", ".*....**..*.", "........*...", "...........*", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 75416;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cube = {"...", "..*", "...", "...**.......", ".........*..", "....*..**..*", "**.", "..*", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cube = {"...", "...", ".**", "*..**.*...*.", "*.......*...", "...*.*......", "...", "*..", "..*"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cube = {"...", "...", "...", ".......*..*.", "............", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 132653669;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cube = {"...", "...", "...", "............", "............", "............", ".*.", ".*.", "..*"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 36343737;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cube = {"...", "...", "...", "...***..*.*.", ".*...*..*.*.", ".....*......", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 35014;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cube = {"...", "...", "...", ".....**.....", ".........*..", ".........*..", "...", "...", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 364374;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cube = {"..*", "***", "*..", "**.....*...*", "....*...*...", "............", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cube = {"...", "...", ".*.", "..*.........", ".*....*.*.*.", "**..*....*..", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cube = {"...", "...", "...", ".......*....", "...........*", "......*....*", "...", "..*", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cube = {"*..", ".**", "...", "*.*..*...*..", "....*......*", "..****...*..", "...", ".*.", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cube = {"...", "...", "...", "...*..**....", "..**........", "..*...*.....", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 144126;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cube = {"*..", ".*.", ".*.", "...*..*.....", "......*.*...", "...*........", "**.", "..*", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cube = {"...", "...", "...", "............", "............", "............", "...", ".*.", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 147532253;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cube = {".*.", "..*", "...", "..*......**.", ".......*....", ".*..**.*....", "..*", "*.*", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cube = {"...", "..*", "*..", "*..*.*..*.*.", "......*.....", "...***....**", ".*.", ".*.", "*.."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cube = {"*..", "*..", ".*.", ".........*..", "*...*.......", "...*.....*.*", "...", "...", "*.."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cube = {"...", "*..", "**.", "..*..*.*...*", ".**..**.....", "*.*.**..*.**", "..*", "*..", "..*"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> cube = {"...", "*.*", "...", "....*....*..", "**.......*..", "...*.....*..", ".**", "...", ".**"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> cube = {"...", "...", "**.", "..*...*.....", ".**.****....", "***..**..*.*", "...", ".**", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> cube = {"...", "...", "...", ".......*....", "*..*..*...*.", ".......**.*.", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> cube = {"...", "..*", "...", "............", ".*......*...", "............", ".*.", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 1132211;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> cube = {".*.", "...", ".**", "..**...*...*", "...*...*.*..", ".***.***....", "**.", ".*.", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> cube = {"...", ".*.", "*..", "........*...", "....*.......", ".*..*......*", "...", "...", "..*"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 634;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> cube = {"**.", "...", "..*", "*.*.*....**.", "....*..**...", "..*..*.***..", "...", "*..", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> cube = {"...", "...", "...", ".*.........*", "...........*", "...*...**.*.", ".*.", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 10983;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> cube = {"...", "*.*", ".**", ".......**.*.", "..*...*.....", ".*.....*....", "*..", "*..", "*.."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> cube = {"...", "...", "...", "............", "*...........", "*...*.......", "...", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 87808156;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> cube = {"..*", "...", ".*.", "*.**.*....*.", "*...*....*..", "..*..*.*..**", "...", "*..", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> cube = {"..*", "**.", ".*.", "..**.*..*.*.", "....**.*..**", ".....*.*..*.", "*.*", ".**", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> cube = {"...", "...", "...", "............", ".....*.*..*.", ".....*.....*", "*..", "...", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 55634;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> cube = {".*.", "*..", "...", "*...**..*..*", "....*..***..", "...*.....*..", "...", "*..", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> cube = {"***", "***", "***", "************", "************", "************", "***", ".**", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> cube = {"***", "***", "***", ".***********", "************", "*******.****", "***", "***", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> cube = {".*.", "***", "**.", "*..*.*..**.*", "*..*.***.**.", "******..****", "**.", "***", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> cube = {"***", ".**", "**.", "*****.**.***", ".**.***.****", "..*******.**", "..*", "***", "*.."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> cube = {"***", "***", "***", "****.*******", "****.*******", "************", "***", "***", ".*."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> cube = {"..*", "**.", "***", "************", "**..********", "****.**.***.", "*.*", "*..", "..*"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> cube = {"***", "***", "***", "*****.******", "************", "******.*****", "***", ".**", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> cube = {"***", "***", "***", "************", ".**.****.***", "*******.****", "***", "***", "***"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> cube = {"***", ".**", "***", "************", "********.***", "************", "***", "***", ".**"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> cube = {"***", "***", ".**", "*********.**", ".***********", "************", ".*.", ".**", ".**"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> cube = {"...", ".*.", "...", "............", ".*..*..*..*.", "............", "...", ".*.", "..."};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 876011;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> cube = {"***", ".*.", "...", "............", ".*.**..*..*.", "............", "...", ".*.", ".**"};
    CubePainting* pObj = new CubePainting();
    clock_t start = clock();
    int result = pObj->count(cube);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=13900&pm=10508
********************************************************************************
// unfortunately I have no ideas for a good line here 
 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "CubePainting.cc" 
 
#define P 1000000007 
 
void swapbit(bool* u, int b) { 
  // printf("b = %d\n", b); 
  if(b == -1) return; 
  if(b <0 || b >= 108) exit(0); 
  u[b] = !u[b]; 
  } 
 
class CubePainting { 
  public: 
  int count(vector <string> cube) { 
    // !FDI 
     
    int qcs = 0; 
         
    int cs[7][7][7]; 
 
    FOR(a,0,7) FOR(b,0,7) FOR(c,0,7) cs[a][b][c] = -1; 
 
    FOR(a,0,7) FOR(b,0,7) FOR(c,0,7) 
      if(a == 0 || b == 0 || c == 0 || a == 6 || b == 6 || c == 6) 
      if(((a&1) + (b&1) + (c&1)) == 1)  
        cs[a][b][c] = qcs++; 
     
    int dx[9][12]; 
    int dy[9][12]; 
    int dz[9][12]; 
     
    FOR(a,0,3) FOR(b,0,3) { 
      dx[a][b] = 2*b+1; 
      dy[a][b] = 2*a+1; 
      dz[a][b] = 0; 
 
      dx[3+a][ +b] = 2*b+1; 
      dy[3+a][ +b] = 6; 
      dz[3+a][ +b] = 1+2*a; 
 
      dx[3+a][3+b] = 6; 
      dy[3+a][3+b] = 5-2*b; 
      dz[3+a][3+b] = 1+2*a; 
 
      dx[3+a][6+b] = 5-2*b; 
      dy[3+a][6+b] = 0; 
      dz[3+a][6+b] = 1+2*a; 
 
      dx[3+a][9+b] = 0; 
      dy[3+a][9+b] = 2*b+1; 
      dz[3+a][9+b] = 1+2*a; 
 
      dx[6+a][b] = 2*b+1; 
      dy[6+a][b] = 5-2*a; 
      dz[6+a][b] = 6; 
      } 
     
    int oldq[1<<16], newq[1<<16]; 
     
    int oldi[108], newi[108];     
    bool oldset[108], newset[108]; 
     
    FOR(k,0,108) oldset[k] = false; 
    oldq[0] = 1; 
     
    FOR(ny,0,9) FOR(nx,0,Size(cube[ny])) { 
     
      char ch = cube[ny][nx]; 
      int crosv = ch == '.' ? 2 : 0; 
       
      FOR(k,0,108) newset[k] = oldset[k]; 
       
      int x = dx[ny][nx], y = dy[ny][nx], z = dz[ny][nx]; 
       
      if(x>0) swapbit(newset, cs[x-1][y][z]); 
      if(x<6) swapbit(newset, cs[x+1][y][z]); 
      if(y>0) swapbit(newset, cs[x][y-1][z]); 
      if(y<6) swapbit(newset, cs[x][y+1][z]); 
      if(z>0) swapbit(newset, cs[x][y][z-1]); 
      if(z<6) swapbit(newset, cs[x][y][z+1]); 
 
      int tot = 1, otot  = 1, ntot = 1, kk = 0; 
      FOR(k,0,108) if(newset[k] || oldset[k]) { 
        if(newset[k]) newi[kk] = ntot, ntot <<= 1; 
        else newi[kk] = 0; 
        if(oldset[k]) oldi[kk] = otot, otot <<= 1; 
        else oldi[kk] = 0; 
        tot <<= 1; kk++; 
        } 
       
      FOR(q,0,ntot) newq[q] = 0; 
 
      FOR(r,0,tot) { 
        int cros = 0; 
        int oind = 0, nind = 0; 
        FOR(ll,0,kk) if(r & (1<<ll)) { 
          if((!oldi[ll]) ^ (!newi[ll])) cros++; 
          oind |= oldi[ll]; 
          nind |= newi[ll]; 
          } 
         
        // crosv = 0; 
        if(cros != crosv) continue; 
         
        newq[nind] += oldq[oind]; 
        newq[nind] %= P; 
        } 
       
      FOR(k,0,108) oldset[k] = newset[k]; 
      FOR(q,0,ntot) oldq[q] = newq[q]; 
       
//    printf("kk = %d oq = %d\n", kk, oldq[0]); 
       
//    if(kk <= 9) FOR(dd, 0, ntot) printf("%d ", newq[dd]); printf("\n"); 
      } 
     
    return oldq[0]; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/