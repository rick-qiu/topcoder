/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12152
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

class MapGuessing {
public:
    long countPatterns(string goal, vector<string> code);
};

long MapGuessing::countPatterns(string goal, vector<string> code) {
    long ret;
    return ret;
}


int test0() {
    string goal = "000";
    vector<string> code = {"0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string goal = "001";
    vector<string> code = {"0>1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string goal = "000";
    vector<string> code = {"1>1>1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string goal = "11001";
    vector<string> code = {">><<<<><<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string goal = "1000101011";
    vector<string> code = {"1<<0>>0>1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string goal = "00000010000000000000000000000000";
    vector<string> code = {"><>>0<0<>>1>0><>", "<<0>>0<>><0>0>>><><", ">>>0<>", ">0><>>>>0<<><>>0>>>0<0>>0>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 13601;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string goal = "11100011010111111010100100110001101";
    vector<string> code = {"11111111111111111111", "1<><><><><><><><><>1", "1<>000>000><0<><0<>1", "1<0<><>0><0<00>00<>1", "1<>00<>000><0<0<0<>1", "1<><>0>0><0<0<><0<>1", "1<000<>0><0<0<><0<>1", "1<><><><><><><><><>1", "1<>000><000<>000><>1", "1<>0><><0<><>0><><>1", "1<>000><000<>000><>1", "1<><>0><><0<><>0><>1", "1<>000><000<>000><>1", "1<><><><><><><><><>1", "11111111111111111111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {">>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 272;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {">0>>>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 68;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<>>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1984;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<>>>>0>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {">>>>0>>0>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 59;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<0>>0>>0>>0>>>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 639;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<0>>0>0>0>>0>>0>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1205;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<0>0>>0>0>>>>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 259;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<0>>>>0>>0>>0>>0>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 511;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<>0>0>>>>>>>0>0>>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1224;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<0>0>>0>>0>0>0>>>0>0>>>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 10062;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<>>>0>>0>>>0>>>>>>>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 265;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<>0>0>0>0>0>0>0>0>>0>0>0>0>>0>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 126168;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<<0>0>>>>>>>>>0>>0>0>>", ">>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 502;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<>>>>>0>>>>>>0>>>0>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>>0>>0>0>0>>>0>0>>>0>>0>0>0>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 32858;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<0>0>>0>>0>>0>>0>>0>>0>0>>0>0>>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 124895;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<>0>>0>0>0>>0>>>0>>0>0>0>0>0>>", "0>>>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 115670;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<<<<<>>>0>>>0>>>>0>0>>", ">>>>0>>>>0>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 811;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<>0>0>0>0>0>0>0>0>>0>>0>0>>0", ">0>0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 11978407;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {">>>>>>>>>>>>>>>>>>>>>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<<<<<<<<>0>0>>>>>>>>>0", ">0>>0>>>0>>>>>>>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 2701;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<<<>>0>0>>0>>>>>0>0>0>", "0>0>>>0>>>0>0>0>>>0>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 79868;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<>0>>0>0>>>0>0>>0>0>0>0>0>0", ">>0>0>0>0>0>0>>0>>0>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 4537225;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<>>>>>>>>0>>>>>>0>0>0>0>>>", ">0>>>>>>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1917;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<0>>>>>>>0>>>0>0>0>>0>>", ">0>0>>0>>>>0>>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 6998;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<0>0>>>0>>>0>>>0>>0>>>", "0>>0>>0>>>0>0>>0>>>>>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 48853;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>0>>>>", ">>0>>>>>>0>>>>>>0>>>>0>0>>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 311;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<0>>0>>>>>0>0>>0>0>0>>0>>>>", "0>0>0>0>>>>0>>0>0>>0>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 261222;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>0>0>", "0>>>0>0>0>0>>>>0>0>0>0>0>0>0>0>0>>0>0", ">0>0>0>>>0>>0>>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0", ">0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 68719476736;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 196608;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 376832;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 720896;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1376256;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 2621440;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 4980736;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0", ">0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 9437184;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0", ">0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 17825792;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0", ">0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0", ">0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 62914560;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0>0", ">0>0>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 117440512;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string goal = "111011111111111111111111011101010111";
    vector<string> code = {"<<<11111<1<1>11001>11>111<>1><<111111", "1>111111111111111<<11101>1101<<<1111<", "11<110<111<1110<11<<1111<<>111<><>111", "1<111>11<1>><><1>1>1111111001>111<11>", "110<>1><>11<<>1<1<11111111<011<1111<1", "11<1<1<1001<1>1<11<11>>011<01111>110<", "1<1<1>1>>1>1><11<11101>1<1111><1><111", "<<>11>111>><1>1><11<111111<<<0<1101<<", "111<01<1<<111101><1<<11<1111>11>1>11<", "0<<1<11>1111>1<01>0>1111>1<1>011111>1", "111<1<>1<><1>0<110><>1111>0<0>>><1111", "01>1<1><1110<1>1<<1111111<111>111>1<1", "111>0111110<11>0>1111<>><10<1<>0<11<>", "<<1<01>1<>11>0<10<1>1011>>11<11111<1<", "1>1<1>111111101<>><111<>1111<1<1><01<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string goal = "111111111111111111111111111111111111";
    vector<string> code = {">1<>>1<11<><1>111>>><1<><1>1111<<<>><", "<<><11<>11<<111><>><<1>1<1111>11>><><", "11>1><1>111>1<1><1><11<1>1><>11><>1>>", "11><1>1>1>111><1><>11>1>1>1><1<<<1>1<", "<1111<<11>1<111111>11>1<1111111111>11", "1>1<>111<<><>11<<1<11>>1<>1>>>>1<<<1>", "<1>1>>111<1>1><1111111>1>>>11<1<>1111", "1<111<111<>1<11>>11<>1<1>11>111<><1>>", "1<11>1>11<<11>>>1<11><1<<><<><1<><>1>", ">1><>>1><>1<<11>111>1111><1>><<>11<<1", "<<111>1<11<1111>1>>>>1<>1>1111>1><<1>", "<<>>><1111<<<1><1>111<1<1111>111><1><", "<<><11><11>>><11><<1<>111><11111>1111", ">>1><<><>1<1>1>1<1<<>11111>>1<><1<11<", "<<1>111>11><<<1><>111>111<<1<1<1<<>11"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 130488832;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string goal = "011110101010101011101111111111001011";
    vector<string> code = {"0>00<11100010101<1<0001>100010011100<", "10101<10<1001<000><11<001111000101<<0", "1101001<1<1101>111<0000<01011011>1<00", ">>000>>00>101100<1<>00000>000<0<0101<", ">1111>1>100>001100001<011011<<<<<0000", "001<010<1001110>1100<01000101><011010", "01<1<1000>0000110><1011010<0010<0<000", "<1101>1110101011011>00101>00101001110", ">10111<000<000011<00010>100>011><01>1", "1011110>00<111110>1<00011><1111010111", "<00001>1000<011<10011100000>00<100010", "00101<0<001>010110>01001100>101111001", "101000111><0>>01>11<0<1001011<1<11000", "111<1<0010>1000<00111101010><1<01010<", "1110>0111<00101<0111111111010<<001000"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string goal = "111111111111111111111111111111111111";
    vector<string> code = {"1<><><<<>>>>1<>>1>11>>>1<11>1>><<>1>>", "1>>>1<><1<1>11<1>1111<111<>>><<1<<11<", "111<11>11>11>><<>1<>1<11>1<11<<><111>", "><>>>11<<>11<<11>11<<><1<>><<<<>1<1<1", "1><11<1<<<<<<11<>>>1><1<<1>>111>1><<<", "<<11<1>1>>>1>>>><<><11>1>1<><1<11<>11", ">111>1<1>><<><<>1111<11>1>11<1<<>>11>", "1><>1<1<<<1>><<>><1<>>1<>1<1><1>11>11", ">>>1111<1<<1<>1><<>1<<><1><><>>1><>><", "1>>><><<>><11111<1<>1111>><<1><<1<>>>", "1<<<111>1<<><<1>><1<>111111>1>11111>1", "<1<<<111<11<<1><1<<1<<<>11><>>11>11<<", "11<11<111>1><11<<<><<1>>>><>1<><1>11<", "<>>><<>11<1111><11>1<>1<<<<1>1<>>1>>>", "111>>><<1111<1>1111<11111<>11>1<111<1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 218103808;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string goal = "111111111111111111111111111111111111";
    vector<string> code = {"111><11>11>11>>11111<11111<1>1>>1<11>", "11<>111111>111111>111<11111<>>1111><1", ">1<1<1<>>1<>111<>1111<111111>1111<11>", "11111<11111>1<<111>1><1<111>1>><111>>", "1>111111<1><1111111<111<<1>11111>1<11", "<11<1>11<<1>11111>11<11<11>>1<1111<11", "1<>111<>>111111<111<11<><<11111>11111", "111<11<>1<11<>><1<<11111111<11><1<111", "11111>11<11<11>11111111111>>11><1>1<1", "<>11<>11<1<1<11<1<1<11><11111<111<111", "1>1111<>1111111>11>>><11>1<11111><>1<", "><1>111>111><><111<<<<1111>11>111>111", "1111<11111111>1<11><1111111>11<<>1<11", "1<11111>1>><<111111>11111<11>11<1<>11", "1<<111111<>1111>1111>1<1>111111>1<111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 17825792;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string goal = "100110001011000010000101110111111001";
    vector<string> code = {"0000000110011010001>11>01111010001100", "11111000<100100111>1100<010101111>010", "0<001001010111011>1000111001011111001", "1101001111101011010101111110110>01000", "0111001111111100010110<10111111011111", "1011100001111011111001010110011111100", "10001101>1011111100110111100><1010010", "1000010110100001010001010110001100010", "0110111110001111000100<10011000111101", "10111110100001101011<110001110111100<", "101001010010000101010110111101>11001<", "0>11111>1001111011001100<010010110011", "1<101011111<100<111011111111>00010010", "100001111100000011110011000010100010>", "11101010>1011001<01001100011101100111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 295;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string goal = "000100000100010100000000000000000000";
    vector<string> code = {"1<<01>0<0000><0100>000<0<00000>001001", "01>0100000>1>100001><100>11>100001100", ">>100001000>0100>001>>01>0100><>0<00<", "000<01<1<01011>>>00>0>00<0<><1111<00<", "<>>0110><110<000001010001010<11<0>010", "1<000100<<0000000<00>111<>010000>1010", "0001<00>0<00>0000>0>0<1100101>110>>1>", "001<11>>0<10<0100<01<1><01000011000>0", "0>00<>00001>01<0<00<100><1>1<0>00<<01", "000<0>0010><00001<101<011<1<100001100", ">01><01><010100>010>><1<0>><01>0>1>01", "000100>000<10<0010>>11010<100>101<01<", "01<1>0>0<00010000>0>00000000<1<1><<1<", ">>00100010>0<>>0>0<00>011<01<01>1101>", "01000011011101<<<0<00<11<<1>001>>001<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 74;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string goal = "010000110000010000000110000000011000";
    vector<string> code = {"<0<1>0<0>0000000000000100000><1<11<01", ">00001000010<00000>011010<00<<00010>1", "1000>0011000100>00000>0110<01010>0000", "<0010001100000000>00100>11000<1001000", "100>1110>01<1<<011010000011>0001000<0", "001010><00000000<0000100<0><10>000001", "000<0000110<0<1<000101001111000>100<0", "0<<0<101000<<01<0<<000>0001010000001<", "0<00001><10000000001100>0000000000010", "100100<000000000100><>0011<00><101001", ">0<0<000>000101001010010100110001010>", "0><00>00111000001<00100000<0000<0<000", "000>01>00>000<00<01100100100010010010", "<<00001<0<>0100<010>0><1011>00<000000", "<01000000<10<1<001001000001<000100101"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 578;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string goal = "100011000111010110010110101000000101";
    vector<string> code = {"11<>01><0<<0<>01<<1<<<01>0>101>01>1>1", ">1<>>>11>10>><<>00011<1>01><>>001><<1", ">01<<1<10>1>101>0<10><10><><1<><>0><<", "1<11>><<<>0<11><<1<<>1<1<<11<0><0<1<<", "<0000101<<01<110>>01>>1<00<><<01<>0><", "><>1>1>>010><01>>01>11><>>><<<<>>0011", "010>>10><<>>010>1><110>00<11<<<1>><1>", "1>01<<><<<1>>01><>>>>>1>1><0<0>0<10><", "<<<1<>10<<<<>1000<><0><>0><1<>0>0>01>", "><<1<<0>111<<1<0<10>00<<>1<000><>000>", ">>1<><1<>>>0><>011>0<><><1<10010>>>>>", "0110>111>0<><0>11<1<<0<>0<00<>10>>11<", ">0<>00>111>1<1<<<0011<11><101<><>>>00", ">11>1<>11<<1<011<<1<1<<><>0<>>>100<1>", "0><0<00100010>0>>>11<10<<<000>>01>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 161;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string goal = "111111111101011111111111101101111111";
    vector<string> code = {"111<>>1><1><<<1<<<0<<<>10<>11<1><0111", "<>1>>>>011><>1>11<10>111<111<<>><11>>", "<>1<<>11<<<1>111>>>1<<11>1<<1>1<<>011", "<111<<<1>11><<1>10>111111><1<<0<>>0><", "<>><1>>><110011111<1>>1><><1<<1<1<<><", "0<<0><1<1<>11>0>111>>>>0110>>1<<1111<", ">>1<<>11><111<0>>11110><1>1<11>11>1>0", "0>1111><1110>><>0<>0<<><11<>11<>>>11<", "01111<<1>1<1>0<1><<>1>01<1<0<<<1<<<<>", "><<0>010<<1>0>1>11>><>>001<100<<1<<>1", "><<111><1><><<11<>1><11<>1<11<1>111<1", "1<<01<0><11>111<>>><1>1>>><0<10>>1>1<", "><1000<<<0<>>1<<1>1>111><111101>1>><>", ">0<<<>11><1<>1>101110><111<<><>><<<>1", ">11>><<<<<><1<><<0<11<11><1<<1><1<1<1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 3071;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string goal = "101011011000010000101110001100001001";
    vector<string> code = {"1000>>11010<>1011010<<001><000<0000<1", "00000><00>1><10100110<1<1>00<0>1011<<", ">00010100<1>1100><00<000<00>>011010<<", "0>0000001<0001001010<001>0000>><>1>0>", "10001<<>0>10<1<1>>1>1><00<01>0<1>1<10", "00>000100<>1<01<1<0000<100100>01<0110", "10>11<>000100100001111001<010<01>0>10", "<0000<110001>000>01<1>0010<0011110<01", "1010<<111000001111010111100000<01000>", "1<000><0011101><0<01>>110101>1<1001>0", "<<1<100>>11>0<<00><100<110>0<0<100011", ">011000>10<11<<<00<><100<1>0001<<1001", "<1<100<11001>101001110000<010>0001100", "00>0000<><1001<000>10<1<<<01<100010<1", "11101<11001>1000>00>100<10000000>0111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 158;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string goal = "101001000010001000010010010100001010";
    vector<string> code = {"0<0000100000100000001000<11>000000010", "01011>1010>10000100011000><10000>1010", "0<100010001001011110110001<0100<00000", ">0011010101010100>1101>10000011001110", "0>>1000<10010010001100011001>>0<00100", "000100010111>011010010001101010001011", ">0100001001000101<0000>01000111010000", "0000101010001011><0000011>110010011>0", "<010001000000>00000010<00110000001010", "0100110010010001000000111>1<0>00<0111", "000010111011>10101000<00000>10001<110", "000010>000>00>1100>>00000><00001<0000", "0001>1<00001001000100>0>11010>1000000", "010>0001>>101001<>110<00000000100110>", "0100000>001000001>>0>00<10100001>0000"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 153;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string goal = "100000001011101100001011001001110101";
    vector<string> code = {"<011<110>0>11111001<>11100>0><00010>0", "1110110111011<101>>1<0010>110<0001001", "10<011111011010<1><110101100111101110", "1110><0110>101011<10000101<111>10>110", "1<1110110111000111>0011001<1<100<111<", "1>11010<<100010<101<0000>11<10001>111", "1>011>>011><011111011<1000011<10>0010", "11000110111011<<011>111101>00>111>011", "1>0001110001111111001010100<<1001110<", ">00<0110111100010>11>0>0010110<01<>01", "110<0>0><<0>11110<<00011111011111<0<1", "01110000110<0>1010100>>0101>>111>>>>1", ">1101>01<001010011110<>1001<001>010>1", "<010><011000010100>1101111100110>1001", "1101100>10100<01111111<1>001101110011"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 373;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string goal = "010001000000000000000010000000100000";
    vector<string> code = {"00000000<0>000000>01>0000000<00000100", "<00<0<<000>000>000010101>00<0100<0010", "01000>>10001001<0>000<<000>0000000000", "00000000<0000>0000<000>01000<10000>00", "1001000<00101001>>00000010<0<00000000", "1001<10<0000<0000001<>01010000<>00>00", "<0<000<>00<001>0001000000>1010000<010", "<00000>00000000<0000<000<0100<10<0001", "00000<0000001>>0<0>10>00<1001<0001000", "000010001><0000>00>0<0>0000<0000<0000", ">00110<00>>00000001000<000000>001000>", "0001001000<<000000>000000001101>>0001", "0001001000<1>1000>0000>0000000000000<", "<0>0010000>0000000000100000000>00<000", "0000<00100<000001110000>0000001<1000>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 41032;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string goal = "101001010110111110110111111110011111";
    vector<string> code = {"1111101<10111000111111101011111111011", "<11111011111110100110000111110<010111", "01110101111100001111011010101<0011111", "101011000011<10111101100110<110111111", "0111111<111<0111011000011100101111110", "<10101011111100101010111111110<11011<", "11001111111111101<0101110110101111100", "1111101110011110111111010101100111011", "100011>111<01111011000<1100<11010<101", "11111010111110010110001111<1<01110111", "1111001101001111111101110111011111101", "1111101010110101111110101111101010111", "101111<11<101111<11011001111011011111", "1011<11111110011111110101111001111<10", "1010<01111111011100111000101111011<10"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string goal = "111101011111111111011111111111111011";
    vector<string> code = {">>>1>><>><1<><<<1<1><<>1<<1>1<<>><<<<", "<<<<><1<<>1<><<<0>>><00<<><><<<<>1>>0", ">0><<<0<0<>1<>>0<>>><><<<<>1<<><1><>>", ">><>1<<<>>0>><<><<1<<<>10><>>1<><<<0<", "<>11>><>><><><<<<>1>><>>><<>1<<>0>1>>", ">11>0<<1<><><1<<>1>><><><>1><<>11<<>>", "<<1><1<0<<1>>11><>><1<1>>><><><<>>><>", "<1<><<1<><>><<<<1<>><><<0><0>>>>><><<", "<><1><1><><>><1><>11>>1>>><<<>>0<>1<<", "<><<<1<>><<<<>>>>>>01>1<><1>1>>>1>1><", "<>>><>>><0>>1<><1><<<1<>1><<<<<<<<><<", "<<<>>><<<<0>>><>><<<<<>>><><1<1>>1<>1", "<><>>0><<<<>><<>>>1>><><<>111<<><<<0<", "<>><<<<>>>01<<<<1><1<><>>0<<>0>0>>><>", "<<1>1<<<<1<>1<<<>>0>>><<1>>1<0<><<<><"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 368;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string goal = "100111011110110110011111001001111010";
    vector<string> code = {"111><1111011111000010111111<10<0<10<1", "1100101111111>101111011<1011010111011", "1110111<1111>10>01111111<111101010010", ">00100<011101<01111101111111111101101", "11011<001<01110110>10101111111100010>", "0111>1>011<01010010010011110011111111", "1111011111>11101<110111>00100<1111010", "00001101>110>0111011010111111>011<011", "10110111110100101>11111101>1111101010", "111<0011110111<0011011010110100110110", "0011010010110111110100111011011010011", "1101011011110011110101111<100111>1100", "1<101111000111111100>11101>101111110<", "001>11111>11>101111010111101110011110", "0010111>11110110<<>1011011111010010>1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 399;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string goal = "111111111111111111011111111110111111";
    vector<string> code = {"><><>>><>><><><<><<><><>1<><>><<>>><<", "<1><<>>>><<>>><<<<>><<><<<<<<>>1<<><>", ">>>><<<>>>><<><>><><>>><><<<<<<><<>>>", "<>><<>><>>><><><><<<><>><<><>>><><><<", "<>>>>><>0<><<<>>><<>>><>1<<<<>>><<<>>", "><>>1><<>>><>1<>><<>>><<><>><<><><<<<", "><<<>>>>>>><><<<<>><>>><>>>>>><<><>>1", "><><><<<>><>>>><><>>1<><<1<<>><<>><<>", ">><<>1<<><<>>><><>><>>>>><>>>><>1<<<<", "<<<><<><<>>><<<>>>><<>>1><<>>>>><><<>", "><<<<><><><<><<<>><>>><>>>><<><><><>>", "<<<1<><>><<<<>>><>1<><<><<<<><>><><<>", ">><><><1<<>><><<<<<<<>><1<>>>><>>>><>", "<<>>>>><>><<<<<<>><<<>><>><><<>>><<<<", "<<<<><<<1<>><>><><><><><0<<><<<<<<>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string goal = "111111011110111111111111101111101111";
    vector<string> code = {"1111<111111111111<111101110111<111110", "1101110011111011111001001111111001111", "1111011111111110111111111101111111111", "1111111101111100<11111010110111111111", "111100001011110111111111011011011>111", "<0111011111111011101111111<1111111110", "01111101111110111011010<0100111111101", "111111111111111111<111111011111111111", "100111110111110111101100<<00111011111", "1111111011100111101011111101100111111", "1111101111111101111111101011111111011", "10011111010111<0111111111101111100111", "1110101111110111111011111111101111<10", "<101111100111111001011101001111<1<111", "0101101111111111010111111>01011010111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 810;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string goal = "111111111001101101111111101110111111";
    vector<string> code = {"11111011111011110<1111111011111111111", "1110101111111011110111111110111111110", "11>1110111011110111111011111<11111<11", "1111111111111111011111<10<1111101111<", "11101111010101110111001111<1111110111", "1111101111111111111101111111011111111", "10111111<101010001111<00101111111<<10", "1111111111111111110101100110100111111", "1111110101111011101111<11101111101011", "0111011<11111110<11110111110101111110", "11111111100001<11<1001111111110111111", "111111111110111110111<111111101111111", "11110110<110110111001110111001111<111", "1111110100111101111111011111110111111", "1111100111111111101011011111101110<11"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 33108;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string goal = "011001011111100000111111011111111111";
    vector<string> code = {"11>1>0<>>1<1<0><110<0<11<<>01>>0<0>0<", "01>0111<101001<00>1<>0<0001<10<11<0<<", "0101>0<1<>11111011><<<01111><1>>11>10", "<1011<11><<111>1<<01<<<<11<1<<>><<<10", "111>110>1<>01011>110<111111>111011111", "10>><111111111<101><>01111011>1<<1111", "1101101<111>0<<>1<>>>>11<11<0001<1111", "11>11110100101>111<<1<11111<0>><<1101", "01>1<1>00<1<111>11<1000>11<11>1110>1>", "110101<>1<<111>1><1>111><<1<00011011>", "001<11101>11<011>100<01>100111110<<>>", "1<1>><>1<11111>1<>00<<>1<<>0<11>1101<", "110><>1101<0000<<1<1>11011111>1011111", "11>11001111<1111>1<111111<>10>>010111", "01<1<1>1<1>111>000<1>100>011<>110>>>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 132;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string goal = "000000001000000000000100010000000010";
    vector<string> code = {"0000000000000100000000010010000000010", "1000>00000001000000110001010000000010", "0000001000000100000000000000000000000", "0000101000000000000000000010000000000", "00000000000100>0000010000000000010000", "0100000000010010000000000010000000000", "000>000000000000000100010000000000000", "0000000000000000000000000010000100000", "01000000000000000>0000010000000000010", "0010000010010000000000000000000001110", "0000000000000000000000>00000001000000", "0000000000001000000100000000000000000", "0000000100000000000000000000100000100", "0000001000000000>00000000000000000000", "0000>000000>0011100000000000010100000"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 2573;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string goal = "101011110010100001101110010100110100";
    vector<string> code = {"1100010111100001100000011101111110000", "0111011010011100001111101010111101110", "0101010011101100111111011010011111010", "0011100111110100010001111010111101011", "01010100101100000100>1101100010110111", "1001001010110010010000111001000011110", "0001100000101101001011011110101001011", "0010111110110010110100000100011010010", "100001000<110100011100011011110111101", "0000110111110111111100100110010101111", "0111111000111010010000010110111111111", "1101001000011010110000100010110000100", "0100101100111010110001011100011100001", "1110000000101000111110110100111000110", "1101110111100010010100100001110011101"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 65;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {"<<000000000>00<<<00<<00<0>0000000<>00", "0000000<0<00>0><0>0000<<>0000<000000<", "0<<0<<>0<000><<000<<00>>00<>0<<000<<0", ">0>0>00>0000000000>0><000<>00<00>00><", ">00<000000000<000<<0001><<00><>0<><<<", "000<<00>><00000000>0000><00<0<00>00<<", "0>>0>0>>0<000000>>0>000<0>>000<00>0<0", "000>0<00>00>>0>>00<<000<00000000<0>0<", ">00000><0>>00<0000<><<0<>000000<00>0>", "000000><0000<<<0<0000>>000<0>00<0>00>", "0><0000<000>0<<0>>000000<<>000<00<0>0", "000>0>0><000<0<000<<000<<0>000<<<>000", "<0>00>000>>0>00000>0<0<000><0<0>0000>", "0000>>0<<00000<00>00<>>00<00<00<0100<", "<0<00<0<<0>000<0><000<00<>0<><<<<<0<0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 252444672;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string goal = "101111110011101011011111011100111111";
    vector<string> code = {"1>>><><><1<>>><><11<<<><1<<>><1<>>>>>", "<1><><<11<><>><>1<><1>>><1<><<><<>>><", "><<1<<>>><>>>0>>>1>>1<<1><><<<><>1<<>", "><><<<<<<>1>><<<1<<1<<<<><<>>>>0>>111", "><1<>1<1<1<>>>>10<><>><<>10<<<<>>>1>>", "01>1<<><>><><<>>>><1<1<<>><>1><0<><<1", "<>1>><<>1>><<>><>><<<>><<><>><>>>>>0<", "<<><<<>0<>111<>1<11><><1>>0<<<><<>>>1", ">1<<<>>><<1>><<1><>1>1<>1><1><>><<1>0", "<><<<<>1>0>><<<<1<<<><<>><<10><<><01<", "1><>>>>1<<1>11<><<>1<><<<>><><<<<1>>>", "<>>0>>1<<><<><<1>>>>><>>1><<1<>0<>>>>", ">10><<<1>>>>1<<1><>>1><0<>1<11<><<>1>", ">1<<><<><<<<<<<<><>1>1<<<1>>11>><>>0>", ">>>1<><<0><1<><1>><111>>>>111<<>><>1<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 2165;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string goal = "111111110111111111111111111111111111";
    vector<string> code = {"11111<1111111111111111>1111111>111111", "11111111111111111111>101011<111111111", "11111>11111111<111111>1101111111111<1", "11111<1111111110111111111111111>11111", "11111111111<<100111111>11111111111111", "11111111>1111111>1111>111<11111111111", "11111>111<<1111<111111111111111111111", "101111<110111111<111111111111111<1<11", "11111111111110111111111111>111011>111", "101>111111110011111111>11111111111111", "111>11<11<1111111<11<1111111111111111", "11111>111111111111<111111<1111><11<11", "1111011111111111111<111111111>1111111", "1111111111111111>1111011111<1<>111<11", "111111111111111111111<1>11111111111>1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 19584;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string goal = "000000000010000010010011000001100100";
    vector<string> code = {"0000010000000000100010000000001001000", "000000000000100000011001001000000<000", "0000000000>00000000000000000000000000", "00000000100>0100001000000001001010<00", "00000000000001100000<0000010000000000", "0000000000010000000<00000100000010000", "00010000000000010100011>0000000001000", "000000<<00000000000000000000010000000", "1001100000000100000<00000000000001000", "1110100000000100000000100<10000000000", "0000010001010000000000100000000000000", "000010000100000000001010>001000<01000", "0001000100010100001000000010001000>01", "0100000000000>00100<0100000>000010011", "0100001000000000001001000000000000000"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 370;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string goal = "010010100011011011010110110101011111";
    vector<string> code = {"<>><<>>><<<1<>>><<<<><><>>>>>>>><>1>>", "><><><>>1<<<>>>1><<><>>><>0>><><>><<<", "1>>><><<<><><><<><<><<<<><<>1>><>011<", "<<>><>>><<>><><<>>>>1>><>1<<<><><<><>", "1<><><0<><1<><>1><<<<>>>1><><>><><>0<", ">><><1<<<<<>1><>>><>>><<><>><><<>><<<", "<<><>1<<><1><><><>00>>>>0>>>>>><>>1>>", ">>>><>>><><><0<<>>><<<>><>><>><<<><><", ">>>1<<<1><>><><<<><<1><<>><1<<<<<<><<", "<<<<><<><<<>1<>>>>>>><><><<0><>0><>>>", "><>>1<>>><1<><0>>>><<<0><>>1<1<><<>><", "<1><<>><>1<<><><<<<<>1<1><>><><<>><<>", ">>>0<<<<1>0><<>1>0><><<1><<0<<>1><>><", "<<><><><>>><>1<<<1>>><<>>><<<<>1><>>>", ">>1<>>>><><<<><<><>0<<<<>1<<<<<<<<<<<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 65;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string goal = "000000000000000101000000000000000000";
    vector<string> code = {"0001000000010000000000000001000000000", "0100000000001000>00000000010000000000", "1000001000000010000000000010000000000", "0000000000000010000010>00000000000000", "000>0000001000000000000000000>0000000", "0100000000000000000000000000000000000", "000>00001000001000<0000>0001000<0>000", "0000000000100000000000000000>00000000", "0000000>00000000000>00000000000000000", "0000100010000000010000000000000000000", "010000000000>000000000000000001>000>0", "0000000000001000000000000010000000000", "000>00000000001000000000010000000000>", "0010000000000001>100001000>0000000001", "00000000000010>1000000000000000000010"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 8703;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string goal = "000000000000000010001000100000000001";
    vector<string> code = {"01011>00>000<00>0010>010<0>0<<10>0000", "0>001>0>10<0<0<000000000<0<00<<00>00<", "001000><>0<00000<110<>101>>00100>0>>0", "0>><00<0>000>00<>101000<1<<100>><>000", "0>000100>11<001<1>00<00000>0<00011<0>", "<0<0>0<><0101000<10<<00<0>1000<<<>000", "<000<1<<0<0<00100<00>0<00>000>000000<", "00<<000<0<11><00000<000000>><1><000<0", "0100000<<100<00<00<110<0000>>00000>>>", "00111001><00<0><0000001000<0>0<00<00>", ">1000<0>00101<01100>0<00<00<00100<101", "<000001<0<1>000>>10<0<>01>>0<<>><<10>", "01<1000>00<<00<000>1<00><0>0000000<00", "00<1>000001000010<0><0000>0>00<00<011", "<0001<>100<0>><>00<10>>><01001100000<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string goal = "1";
    vector<string> code = {"1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string goal = "00";
    vector<string> code = {"11>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string goal = "111";
    vector<string> code = {">>111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string goal = "1011";
    vector<string> code = {"000111111100"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string goal = "11100";
    vector<string> code = {"0<1111<1001>00<<00"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string goal = "000000";
    vector<string> code = {"0001001001000000000000>11"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string goal = "1011010";
    vector<string> code = {"1>110011<11<01>>1>1>0>0>0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string goal = "00111000";
    vector<string> code = {">0000>0001011100010>001>11111<0>00><0", ">>>000"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string goal = "010001000";
    vector<string> code = {"0000101100000000000001000>01000000000", "011"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string goal = "1111110111";
    vector<string> code = {"0<100011<1001101010101001011111101100", "1010010<0111111011<1011101111>11110>>", "00111101<<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string goal = "10001000010";
    vector<string> code = {"011>11101><001010111<101001>01>0101<0", "111101>>0010><>000000101<11000111101"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string goal = "111111101111";
    vector<string> code = {"<><<001>><1<1>><>1><>>>11><<>1>1><><>", "<<<1<<<1<>>1<1<101><11<>>>>>>1<1<1><1", "<1<1<<11<1010>1>>><1<0<0<0>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 84;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string goal = "1111111101111";
    vector<string> code = {"11110111011111111>1111>011>11110111>1", "111111<10111111111110<101011010101111", "<111>1111011011101111>0100<1111111101"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 104;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string goal = "11010010001011";
    vector<string> code = {"1110111000011101001<10101101001110100", "1101011111111<0"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string goal = "111111111111111";
    vector<string> code = {"<1<<11101><<<1>1<><1<><0><<>1111>><1<", "<>1>><0><1<<<<1<111><1>11<<<1><1<>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 496;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string goal = "1011101011110110";
    vector<string> code = {">1101><11100<10111>0>0110110000>11110", "1010010<>111<1000001<1011011<111111<0", "1110<<0110010<<0001<1<111101110101010", "011011011<111111<0110<<1>110<100>1101", "0>111>1011<1111111001000<<111110111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string goal = "11001111111100111";
    vector<string> code = {"1>11111100111111111011111101110111111", "11101011101101111111101111110100010<1", "1010101011011111011111111011001011111", "<011011111011>01>111001>0011010011111", "01>0111110101"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 111;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string goal = "111101001101000010";
    vector<string> code = {"11>>><><<<<>>0<<<<><<0>>0<<>0>0><<0><", "0<>>>01>>>><>><><<<>>>><<0<0<<1<<10>0", "><1>>>>><>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string goal = "0000001000110111001";
    vector<string> code = {"0>010>1><0<<<>10>0110>101100110>101>0", "10<>10>1><1>1>00>>0<0001<0>1011100100", "0>>><01><10100>>00000001010000001><00", ">1>000<><>00<0>0>1<1>0<<<0>01111011>>", "100<<<>0100110<<<1<10>010111>0<11><>1", "<>0>1>0<>0>0<1011<1<<<1><000>0>110>>1", "<0<>0>11<1110<1<10>11000<>1000>00100>", "<>><001010>0<0<01001<><10><100<10<001", "1<<1>10>01><0<><001<000><10>000<<1><>", "000>00>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string goal = "10111011111010100111";
    vector<string> code = {"0110111111111001000111101110110101001", "0110111101111110101111111110110101111", "0111011101111011111101111111111010010", "0111111010111111011011111111101111101", "1011001111101111011111111101001101000", "0110110111111011111101011011011111101", "1011001111111110111111111101011111111", "1110001111111111111101101111001110111", "1111111110101111111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string goal = "000100101110000110101";
    vector<string> code = {"1>1<<1<0000010>1>1010>010>0>01>1>1>1>", "1111111010<11>1000<<>00<001<111<<1<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string goal = "0110100101111000000000";
    vector<string> code = {"><>11>00>>><<0<>10<0>>><>><"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string goal = "01111111111111111111011";
    vector<string> code = {">>>><>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string goal = "111111111111111111111111";
    vector<string> code = {"<<1>>><<><1"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 44;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string goal = "0100000101000001000000001";
    vector<string> code = {"100>00000>00>1011010000>00>0000>00000", "000001001000000000000000>100001100010", "1>0>101100000100>00000>01000000100000", "00>001>0>000000>001000>00011010>0000"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 42;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string goal = "01100010000000000000011000";
    vector<string> code = {"1010<<<<00<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string goal = "001000001011001011010101100";
    vector<string> code = {"1100100100101111110100001111000010101", "0001101000010010110010100100100101001", "0101000000110000000000000001100101000", "1010010011100010010001010110101000000", "0111110000100110010010010110101000100", "1100011101000000010111000010010010010", "0100101001001000000011110010001010011", "0000011001100110010110001100100001001", "0100111000111000010000001100000101011", "0000000101011011010011001101011100000", "0100111010010100010100100001101000000", "1110010010110100110101101110000011100", "001101101"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string goal = "0000000100000110000101110001";
    vector<string> code = {"0010001101000000000011010100000100010", "0001010000000000110000101001111000001", "0000100010001000001000000010101000001", "001010000100000000<100001010000000101", "00<001>100000000100010100001100000011", "000000110010<100110100000000>01010001", "001>1010010000000000>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 94;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string goal = "00000011100000000000000000001";
    vector<string> code = {"<1>><<>0<<>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string goal = "111110011111010001011110001111";
    vector<string> code = {"0101111111110111>11101101101111101000", "00101000110010111111100011100101<00<1", "1011111110<10011>1111101111>111010111", "110111110001111111110<1110011111"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 138;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string goal = "0100000100000100001010000000100";
    vector<string> code = {"0001>0>00>>00>00000100>>0000110100000", "000000001101>0>>>0>000>11101>000><001", ">0001>1010000000100000010000>01000001", ">0000000>0>01010>0<>10000001010101>00", "00<0<1110>00>100000100>0>1>1000>00>>1", "0000100110000000011000000010010>100<0", "0><00010<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 65;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string goal = "11111111011111111111110011111111";
    vector<string> code = {"1111>11101011111>>>111111111111011111", "11111>11>111>111>1111111101>10>11<1>1", "1100111111100111101>11>0101111111>1>1", "11>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 17428;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string goal = "110011111011111111111110110111011";
    vector<string> code = {"111<<<<1><101<11<0011<<1111>1<<100<<<", "0101<<<<10<<110>1<<<100>001>101111111", "0<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 552;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string goal = "0000000100001000000100010000101110";
    vector<string> code = {">><><>><>01<<>>>>>><><0>>>>><1>>0><0<", ">0<0<>>>>>>><<<><>>>>><<>>>0><<0<0><>", "><>>>>>>>1<>><<><00<<0<>><>><<>>>0<<0", "0>0>>>><>><>><"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string goal = "10000001011111010001000110110001000";
    vector<string> code = {"0001011111001101010111010001100011101", "00000>0010110111001100101111101000000", "0010000110010111100011100010011110000", "00110000>0000000110000100101110100110", "011>010010<00110000101000001000100111", "00010101110010001110<1101001>00011110", "0110011001000101000110<11101000010000", "0010001100011000110001100000101000111", "110011101101>100<11100011000101010010", "1000001"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 154;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string goal = "000000000000000000000000000000000000";
    vector<string> code = {">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string goal = "111111111111111111111111111111111111";
    vector<string> code = {"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"};
    MapGuessing* pObj = new MapGuessing();
    clock_t start = clock();
    long result = pObj->countPatterns(goal, code);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22777271&rd=15177&pm=12152
********************************************************************************
#include <stdio.h> 
#include <math.h> 
#include <string.h> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <map> 
#include <set> 
#include <list> 
#include <queue> 
#include <stack> 
 
#define vc vector 
#define pr pair 
#define mp make_pair 
#define ft first 
#define sd second 
 
 
typedef long long LL; 
#define SZ(a) ((int)(a).size()) 
#define pi 3.1415926535897932384626433832795 
 
using namespace std; 
 
class MapGuessing { 
public: 
  bool chk[36]; 
  char be[36]; 
  LL getval(string& goal, string& C, int pos) { 
    for (int i=0;i<SZ(goal);i++) { 
      chk[i] = false; 
    } 
     
    LL res = 0; 
    for (int i=0;i<SZ(C);i++) { 
      if (C[i] == '0' || C[i] == '1') { 
        be[pos] = C[i]; 
        chk[pos] = true; 
      } 
      if (C[i] == '<') pos --; 
      if (C[i] == '>') pos ++; 
       
      bool okay = true; 
      LL now = 0; 
      for (int j=0;j<SZ(goal);j++) { 
        if (chk[j] && be[j] != goal[j]) okay = false; 
        if (chk[j]) now = now + (1ll << (long long)j); 
      } 
      if (okay) res = now; 
    } 
    return res; 
  } 
   
  LL rmain[37]; 
  LL Comb[100][100]; 
  LL get(LL bt) { 
    LL res = 1; 
    while( bt > 0 ){  
      if (bt & 1) res *= 2; 
      bt = bt / 2; 
    } 
    return res; 
  } 
  LL countPatterns(string goal, vector <string> code) { 
    Comb[0][0] = 1; 
    for (int i=1;i<100;i++) { 
      Comb[i][0] = 1; 
      for (int j=1;j<100;j++) { 
        Comb[i][j] = Comb[i-1][j-1] + Comb[i-1][j]; 
      } 
    } 
    string C = ""; 
    for (int i=0;i<SZ(code);i++) C += code[i]; 
    int pos = 0; 
    int lpos, rpos; 
    lpos = rpos = 0; 
    for (int i=0;i<SZ(C);i++) { 
      if (C[i] == '<') { 
        pos --; 
      } else if (C[i] == '>') { 
        pos ++; 
      } 
      if (pos < lpos) lpos = pos; 
      if (pos > rpos) rpos = pos; 
    } 
    lpos = -lpos; 
    int vol = rpos + lpos; 
     
    vector<LL> num; 
    for (int i=lpos;i<SZ(goal)-rpos;i++) { 
      num.push_back( getval(goal, C, i) ); 
    } 
     
    if (SZ(num) == 0) return 0ll; 
     
    for (int i=1;i<=SZ(goal);i++) { 
      rmain[i] = Comb[ SZ(goal) ][i]; 
    } 
     
    LL sol = 0; 
    for (int i=0;i<SZ(num);i++) { 
      int vv = min( SZ(num) - i - 1, vol ); 
      for (int j=0;j<(1<<vv);j++) { 
        int one = 1; 
        LL bt = num[i]; 
        for (int k=0;k<vv;k++) { 
          if (j & (1<<k)) { 
            one ++; bt &= num[i+1 + k]; 
          } 
        } 
        rmain[one] --; 
        LL gbt = get(bt); 
        if (one % 2) sol += gbt; 
        else sol -= gbt; 
      } 
    } 
    for (int i=1;i<=SZ(goal);i++) { 
      if (i % 2) sol += rmain[i]; 
      else sol -= rmain[i]; 
    } 
    return sol; 
  } 
};

********************************************************************************
*******************************************************************************/