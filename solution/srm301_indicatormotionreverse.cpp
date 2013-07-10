/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6172
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

class IndicatorMotionReverse {
public:
    string getMinProgram(vector<string> actions);
};

string IndicatorMotionReverse::getMinProgram(vector<string> actions) {
    string ret;
    return ret;
}


int test0() {
    vector<string> actions = {"-|-|/-/|//////-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F03R02L02R01S05R01L01";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> actions = {"N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> actions = {"/NNNN", "-", "||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01S03L01F01S03";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S50S99";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> actions = {"N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L...";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> actions = {"/NN-|N", "N", "|", "||-N/N", "--/N---", "-", "//NNN//|", "--|||N--", "/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01S01L01F01L01S01R01S02F01R01F02L01S01L01F01L01S03L01S01F01S02F01S01L01F01S01F01S02L02S01L01";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> actions = {"|N//NN//-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01F01S01F01S01F01S01R01";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> actions = {"|-||", "-N", "//", "N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F02S01F01R01F01S01F01";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> actions = {"-N|/|/", "/", "/-", "---N", "|N|-|N", "N", "|N-", "-/|N", "NNN|", "//"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R03L01R01S02R01S03R02L01R01F02L01S01R01L02S01L03S03R02S01";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> actions = {"|/-//-", "||", "-", "|//|N---//", "--|//"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R02L01S01R01F01S01F02R01S01L03S02L01S01R01S01F01R01S01";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> actions = {"/", "N/", "|N-N|", "/----N", "NN/N--|N", "/-", "N/NN||N", "|-/-", "/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F02L03R04S03R01S02F02L01S01F01L01F01R02F02S01R01S01L01R01F01L01R01L01";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> actions = {"/", "-||/N//N", "//", "NN/|", "N||-/|", "--N/N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01F01S01R01F02S01F02S01F01S01F01L02R01S01F01L02F01S01R01F02";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> actions = {"-", "N|/NN|", "|||N/", "/|NN/-/|N", "-N", "/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R03F01S01R01S03L01F01S01L02S01F01R01L04R01F01";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> actions = {"-/-//N-/", "N", "|N|", "-/|-", "/--|/-", "/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01S01F01L02F01R01L01R01F01L02F01L01R01S01F01R02L01";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> actions = {"-N|-NN/NN|", "|--N", "NNN--|-N/N", "/-|-||-N-|", "-|NN-N", "/-|N--|N-", "N|N-N-/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R02F01R01S01F02S01R01S01F01S01R01S03L01S01F02R01F03R01F03S01F01R01L01F03L01S01L01R01F01R01F01L02S...";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> actions = {"NN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> actions = {"N|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> actions = {"N/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> actions = {"N-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> actions = {"|N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> actions = {"||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> actions = {"|/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> actions = {"|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> actions = {"/N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> actions = {"/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> actions = {"//"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> actions = {"/-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> actions = {"-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> actions = {"-|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> actions = {"-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> actions = {"--"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> actions = {"/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> actions = {"-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> actions = {"|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> actions = {"--------------------------", "--------------------------", "--------------------------", "--------------------------", "--------------------------", "--------------------------", "--------------------------", "--------------------------", "---|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S12S99S99F91R61R99R99L73L99";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> actions = {"-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "------|-|-|", "-|-|-|-|-|-", "|-|-|-|-|-|", "-|-|-|-|-|-", "|-|-|-|-|-|", "-|-|-|-|-|-", "|-|-|-|-|-|", "-|-|-|-|-|-", "|-|-|-|-|-|", "-|-|-|-|-|-", "|-|-|------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "-----------", "------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S38S99S99F11F99S17S99";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> actions = {"//////////////////////////////////////////////////", "////////////////////////////////////////N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|NNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNN|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S89F30F99L06L99L99S49L76S60S99R38R99R99F94F99F99R01R99R99";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> actions = {"/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R59R99L76L99R28L70L99F50F99F99";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> actions = {"/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|////////////////////////", "/////////////////////////////////////", "/////////////////////////////////////", "/////////////////////////////////////", "/////////////////////////////////-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F58F99L84L99L99R45R99L48L99L99R96R99R99S68S99R17R99R99L64F81";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> actions = {"|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||N-/|N-/|N-/|N-|-|-|-|-|-|-|-", "|-|-|-|-|-||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||", "||||||||N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L33L99S15S99S99L29L99F26F99F99S64F01F99S99S99L14F25S71S99S99L23L99L99";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> actions = {"NNNNNNNNNNNNNNNNNNNNNNNNN-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|--------", "-------------------------------------------", "-------------------------------------------", "-------------------------------------------", "--------------------------------------/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|NNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNN-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/||||", "|||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|--", "-------------------------------------------", "-------------------------------------------", "-------------------------------------------", "-------------------------------------------", "-------------------------------------------", "-------------------------------------------", "-------|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S24L82L99F75F99S75S99L17L99L99S54S99L81L99L99S46S99S99F46F99S68S99S99F93L97L99";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> actions = {"|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-------", "---------------------------------------", "---------------------------------------", "---------------------------------------", "--N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "/N/N/N/N/N/N/N/N/N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-||||||||", "|||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||", "|||||N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F71S26S99R37F18R27R99R99F62S09S99S99L57L99F19F99F99R53L88L99F44F99R69";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> actions = {"/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/NNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNN|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/|N-//////////////////////", "///////////////////////////////////////-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-NNNNNNNNNNNNNNNN|/-N|/-N|/", "-N|/-N|/-N|/-NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L46L99L99R01R99R99S27S99S99R16R99L99F36F99R26R99L97L99F46S20S99S99R74F74F99F99L04S60R30S15R24S18S...";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> actions = {"N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-----", "-------------------------------------------------", "---------------N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/////////////////////", "/////////////////////////////////////////////////", "/////////////////////////////////////////////////", "/////////////////////////////////////////////////", "//////////////-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-/|N-/|N-/|N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/N/N/N/N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L93S68R85R99F41L61F70F99S82S99R63F55L11R85R99F76R50R99L94L99F74F99L31L99R42F07R01R99L24L99R74F41F99";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> actions = {"/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N/N/N/N/", "N/N/N/N/N/N/N/N///////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "/////////N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/NNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-N|/-N|/-N|/-N|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/---------------", "--------------------------------------------------", "--|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/N/N/N/N/", "N/N/N/N/N/N/N/N/NNNNNNNNNNNN/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|N-/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-NNNNNNNNNNNNNNNNN", "NNNNNNNNNNN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R83L98R62R99F23S44S99F38F99S42F66F99R19R99F65F99L98L99R14L57F30L36R67S66F96F99L96L99F25S11F78R73R...";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> actions = {"/-N|/-N|/-N|/-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|||||||||||", "||||||||||||||||||||||||||||N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/NNNNNNNNNNNNNNNNNNNNNNNNNN|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N//////////////////////////", "////////////////-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/|N-/|N-/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|", "/-N|||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||N-/|N-/|N-/|N-/|N-/|N-/|N", "-/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/////////////", "////////////////////////////////////////", "////////////////////////////////////////", "////////////////////////////////////////", "////////////////////////////////////////", "///////////////////////-N|/-N|/-N|/-N|/-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R13L12L99R06R99S38L98L99F60S25R68F37S41R65R99L08F44F99L29L99R25S91L27R96R99L12L99S96S99R17F51F99";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> actions = {"/|N-/|N-/|N-/|N-/|N-/|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/////////////////////////////////////////", "//////////////////////////////////////////////", "//////////////////////////////////////////////", "//////////-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-NNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNN|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|||||||||||||||||||||||||||||||||||||-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L21R68L84R54R99F74F99R41R99F09F99R79R99S43S99R23R99S58R61F61L68F96F99L47L99R41R99F08F99S36F95";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> actions = {"NNNNNNNNNNN/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "|N-/|N-/|N-/|N-/|N-/|NNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNN/N/N/N/N/N/N/N/N/N/N|/-N||||||||||||", "||||||||||||||||||||||||||||||||N-/|N-------------", "----------------------/|N-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-//////////////////////////////////////////", "///////-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N-/|N-/|N-/|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|N-/|N-/|N-", "/////////////////////////////////////////N/NNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN-/|N-/|N-/|N-/|N|", "/-N|/-N|/-N|/N/N/N/N/N/N/N/N/N/N/N/NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN-/|N-/|N-/|/-N|/-N|/", "-N|N-/|N-/|N-/|N-/|N-/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N||||||||||||||-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|----", "--------------------------------|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S10F39L22S42F20R05S43L06S34L04F32L01S48R46L11F76L11S40F03S89L16R14F23S44L11R12L19R31S13F31S35F29S07";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||N-/|N-/|N-", "/|N-/|N-/|/-N|/-N|/-N|/-N|/-N|/-N|/-N-/|N-/|N-/|N-", "/|N-/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/NNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNN/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N////////N/N/N/N/N/N/N/N/N/N/N/N/N/N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/-N|/-N|/-N|/-N|/-N|/-N|-------", "------N|/-N|/-N|/-N|/-N|/-N|/-N|/N/N/N/N//////////", "///////////////////////////|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N|/-/-N|", "/-N|/-N|/-N|//////////////////////////////////////", "///N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N-/|N-/|N-/|N|/", "-N|/-N|/-N|/-N|/-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/----", "-/|N-/|N-/|N-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N|/-N|/-N|/|N-/|N-/|N-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S39L20R27L18F39S32F31S07F27R48F31R23F01S12R27F08S36L42R27L01R16S40F33L12R19L42R38S04L12R47L42R10L12";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> actions = {"///////////////////////////////-N|/-N|/|N-/|N-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|N-/|N-/N/", "N/N/N/N/N/N/NNNNNNNNNNNNNNNNN-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N/N/NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNN-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/||||||||||||||||||||||||||||||||||||||||||||||", "|||/-N|/-N|||||||||||||||||||||||||||||||||/-N/N/N", "/N/N/N/N/N/N/N/N/N/NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNN-/|N-/|N-/|N-/|N-/|N-/|N-////////////////////", "/////////////////////////|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-------------------/|N-/|N-/|", "N-/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/|N/N/N/N/N/N/N/N/N/N/N/N/N/NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNN/-N|/-N|/-N|/--/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S30R08L07F33R47L22F15S16L48F04S43L31S48R08S32R03F24S35L26S44L47S18L13F33L36R30L02F26S29F01R13S01L42";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> actions = {"NNNNNNNNNNNNNNNN-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-/|N", "-/|N-/|N-/|N-/-N|/-N|/-N|/-N|/-N|-N|/-N|/-N|/-N|/-", "N|/-N|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|||||", "|||||||||||||||||||||||||||||||||||||||N-/|N-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/----------------------------", "-|-|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N||||||||||/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-NNNN-/|N-/|N-/|N-", "/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N|/-N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-/|N-/|N-/|N-/|N-/|N-/|N-|-|-|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|||||-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-------------------------------------------", "/|N-/|N---------N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-/|N-/|N-----------------------------", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S15L49F32L17R19F01R22F40S43L06R28S28F03R36S09R35S03L20R28F35R41L24F44R37L43S04F45S42L08S08R48L08S...";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> actions = {"-|-|-|-|-|-|-|-|-|-|-|-|-|-|----------------------", "-----/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/-N|/-N|/-N|/", "-N|/-N|/-N|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|---", "-------N|/-N|/-N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N///////////////////", "////////|N-/|N/N/N/N/N/N/N/N/N|/-N|/-|-|-|-|-|-|-|", "-|-|-|-|-|-|N-/|N-/|N-/|N-/|N-/|N-/|N-------------", "------------------------------N|/-N|/-N|/-N|/-N|/-", "N|/-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N---------", "---------------------------------------|-|-|-|-|-|", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/-N|/-N|////////////////////", "////////////////N/////////////////////////////////", "///////////N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|N-/|N-/|N-/|N-/|N-/|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "/|N-/|N-|-|-|-|-|-|-|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F28S26L33R23F37S09R09L34F32S26L06F16R07F25L26S42R24F44L44S47F41L43R08S35F02S43F49L08R37L20F31R44L...";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> actions = {"NNNNNNNNNNNNNNNNNNN/N/N/N/N/N/N/N/N/N/N/N/N/N/N/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-|-|-|-|-|-|-|-|-|-/|N", "-/|NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N|/-N-/|N-/|N-/|N-/|N-N|/-N|/-N", "|/|N-/|N-/|N-/|-|-|-|-|-|-|-|-|-|-|-|-|-|-|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/N/N/N/N/N/N/N/N/N/N/N/|N", "-/|N-/|N-/|N-/|N-/|N/N/N/N/N/N/N/N/N/N/N/N/N/NNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN-/||N-/", "|N-/|N-/|NNNNNNNNNNNN-/|N-/|N/N/N/N/N/N/N/N/N/////", "//////////////////-N|/-N|/////////////////////////", "/////////-N|/-N|/-N|/-N|/-N|/-N|/-N|||||||||||||||", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|N-", "/|N-/|N-/|N-/N/-N|/-N|/-N|/-N|/-N|N-/|N-/|N-/|||||", "||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S18F29L31F18L07S32F34R04L17R11L13F28R33F22L22F26S47L03S01L13S11L08F17S22R08S33R27S14F48L15F02R19L...";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> actions = {"-/|N-/|N-/|N-/|N-/|N-/|N-/|N-N|/-N|/-N|/-N|/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/|N-/|N-/|N-/|N-N|/-N", "|/-N|////////////////////////////////////|N-/|N-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/----------------------------", "---N|/-N|/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N--------------------------------N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/---------------------------", "--------------N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/////////////////////////////////|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-//////////////////////", "//////////|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/|N-/|N-", "/|N-/|N-/|N-/|N-//////////////////////////////-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/-N|/-N|/", "-N|/-N|/-N|/-N|/-NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN|/", "-N|/-N|/-N|/-N|/-N|/-N|/-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N-/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "////////////////////////////////////////"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L28R15F36L15R11S35L07F41R34S30R21L33S31R36S40R47S32L36S31L46F37L24S29R48L48R26S30R27L45F31L02F40S...";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> actions = {"//////////////////////////////////////|N-/|N-/|N-/", "|N-/|N-/|N-/|N-//////////////////////////N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N|/-N///////////////////", "/////////////////////////N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-N|/-N|", "/-N|/-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-|-|-|-|-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N---------/|N-", "/|N-/|N-/|/-N|/-N|/-|-|-|-|-|-|-|-|-|-|-|N-/|N-/|N", "-/|N-/|N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N///////////////////////////////N/N/N/N/N/N/N/N/N", "/N/N/N/N/N-/|N-/|N-/|||||||||||N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-------------------------------/", "|N-/|N-/|N-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-NNNNNNNNNNNNNNNNNNNN/N/N/N/N/N/N/N/", "N/N/N/N/N/NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S37L28S25F40L46R04F01S43F41L31F47R12L38R42F08L44S08L14R10F21L17F45S30F27L11S10L38S30L27R40S19F26S...";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> actions = {"/N/N/N/N/N/N/N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|||||-|-|-|-/|N-/|N-/|N-/|N-/|N-/|N-/|N-//////", "////////////////////////////////-N|/-N|/-N|///////", "/////N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|////////////////////////////////////////////////", "/|N-/|N-/|N-/|N-////////////////////|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/////////////////", "/////-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/N/N/N/|N-", "N|/-N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-////////////", "///////////////////N/N/N/N/N/N/N/N/N/N/N/N/N/N/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|||-|-|-|-|-|-", "|-|-|-|-|----------------------------------N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/-N|/-N|/-NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNN|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "|||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F13R41S04F07L29S37R12S11F34R64S48L16S19L48S21R36F06L03R05L34S30F28R41F49S02F21S33R39F28R10S41R33S...";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> actions = {"|N-/|N-/|N-/|N-/N/N/N/N/N/N/N/N/N/N/N/N/N/N/NNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNN-/|N-|-|-|-|-|-|-|---", "---/|N-/|N-/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|-|-|-|-|-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|N-/|N/N/N", "/N/N/N/N/N/N/N/N|/-N|/-N|/-N/N/N/N/N/N/N/N/N/N/N/N", "/N/N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-/|N-/|N-/|N-/|N-/|N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/NNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N|/-N||", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-///////", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L15F29S34L05F14S05L09R47F09L32F41L05F20R12F26R47F28L19R36L47F45L36R47F33S40R40L48R29S02L43S06L53L...";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> actions = {"/|N-/|N-/|N-/|N-/|N-/|N-/|N-/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-|-|-|-|-|-|-|-|-|-|-N|/-N|/-N|/-N|", "/-N|/-N|/-N||||||||||||||||||||||||||-|-|-|-|-|-|-", "|-|-|-|-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|-|-|-|-|-|-N|/-N|/-N|/-N|/", "-N|///////////////////////////////////////////////", "///N/N/N/N/N/N/N/N/N/N/N/N/N/N/N//////////////////", "//////////////////////////|N-/|N-/|N-/|N-/|N-/////", "//N/N/N/N/N/N/N/N/N/N/N/N/N/N/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-///////////////////////////////", "///////////N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N/N/N/N/N", "/N/N/N/N/N/N/N|/-N|/-N|/-N|/-N|/-N|/-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/||||||||N-/|N-/|N-/|N-", "/|||||||||||||||||||||||||||||N-/|N-/|N-/|N-/|N-/|", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|////////", "///////////////N/N/N/N/N/N/N/N/N/N/N//////////////", "////////////////////////N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L28R37F20R26S25F21R36L30F11R19S49F30S43L20S06F28L40S41F41R40F22R23L42S07L16S28L21R42S22F22S37F61F...";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> actions = {"-N|/-N|/-N|/-N|/-N|/-N||||||||||||||||||||||||||||", "||||||||||||||||||N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N//////", "////////////////////////////////N/N/N/N/N/N/N/N/N/", "N/N/N/N/N/N/N/N/N-/|N-/|N-/|N-N|/-N|/-N|/-N|/-N|/-", "N|/|NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNN/N/N/N/N/N/N/N/N/N/N/N/N//////////////////////", "////////////////////-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/////////////////////////////////////|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/----", "--------------|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|---", "--------------------------N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/N/N", "/N/N/N/N/N/N/N/N-/|N-|N-/|N-/|N-/|N-/|N-/|N-/|N-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-|-|-", "|-|-|-|-|-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-------------------------------------------", "-----|-|-|-|-|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|", "/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-", "N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R22S45L43F34S37F35L13R23L02S49F25S41R32S36L38R71S17F34S28R30L47R44F19L05F01L26R48F14R48S47F09R36R...";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> actions = {"//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S24S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> actions = {"-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/", "-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N", "|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/-N|/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R24R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99R99";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> actions = {"/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N", "/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N/N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F24F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> actions = {"-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/", "|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L24L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99L99";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> actions = {"|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F24F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> actions = {"|N|N|-/-|N/-|N/--N-|N|--|//-/N-NN-NN-||N/-//N|-/-|", "|N|N/-|/N--NN||//NN/|//-/N|N//|//-|N|--NN/|/|//||N", "|NN/|-NN//-//-||N|--//|/N-N-||-N-N-NN|-/-/N|--NN|N", "//-||/||NN||-NN//NN|N|NN//N-N-||//|-N-N/||-//N--NN", "-|/N|N/--/-/N|NN-||/N||/|/N|N|-/N||//|//|-/N|N/|-/", "N|N|-N-|N/|-//-||/N|-/--||N/--||N//--||-/N-|NN|--N", "N||N/-|N/-|/N--//N||N|-N-||--//NN//--/-|/|--//-/N-", "|NN/-|//||-/N|NN//--||N|-N-N-|N||N/-|/|--||N||N/-|", "NN//N-N//|--||/NN|N||--N/-|/NN//-||//|/N-N-N/--/N-", "NN-|N//-|//N||//--N-|//N|-N//-/--N/|-N--|N/|/NN|N/", "-/N-NN|NN--/N|NN||N/||//N|-N/--NN|N/||N/|//-||--NN", "/|-N/|//||N//--NN//N|N//-|//N-N/||-//--||-N-|N/|-N", "--/-/-//-||NN//-//||/|-N-N/|-N--NN|--|N/--N//-|N|N", "N/-//N||-/--N/|--/N--N-||N//-/N-N/--/NN||/N-NN//|/", "|--/NN--NN--//--NN|-NN|-N-|/|-/-/N|-N-|N//NN//NN|-", "N--N--|N|N/|--NN-|/||/N|--|N|N//-/-|/NN/--||//NN/|", "//-|/NN-NN|N/-/NN--/--//NN/--|//|-/--N//N||--/N--/", "/NN-|//||--/--|//|//N--N-|/||/|/N--N/--NN||/|--NN|", "|//|/N|NN||-N/|//N-|N|N/||-N-|NN//|-/N-NN/|//NN-|/", "|//|/NN-|N|--|N/-||//||/|/||/||NN|-//--//|/|//-|NN", "/|--NN-N/-//N|-/--N-|/|-N-||/|-/-/-/-/N-N/--N-N/|/", "|/NN-N-|NN--N--N-||NN|-N-|//N|N/--N-N--NN|N|-/N|-N", "-NN/||NN/|//|/N||N|-/-//-//|//|--N//|/|//-/N||//|-", "/N--N/|-//|-/-||-N/-|//N--N/||//N|NN/|/N|NN//N-N/-", "-|N|-/--N/-/N|-NN/-//--/-/-/NN/-||/N||N/-/-||//N-|", "|N//NN/--NN|-N/|-/-/NN//|/||/|--/NN|-/N|--N-||/||N", "||NN//|--/--||/|/N--/N|--|/N-||-/NN||-//--//--N-|/", "/--/--N-N--|N|--|/N-N-N-NN/||N|NN-N/|/|-NN-|N/--N/", "|-//|--||N|-N--//NN-|NN||-N-NN--NN--|/||-N--/N--/-", "|/||N/--/N|NN-|N|--N-|//-/-|//NN|-N/||-/--NN/-//||", "//NN--NN//-|//|/|-/-|N|--|/NN/|/|/||/|/N-||-NN//--", "//N|-NN/-|//N-N--N-||//||/|-N//|-/-/--|NN|-NN|NN|N", "N|--|NN--//||N|-/N|-N-|N//NN|NN--/-//N||--N/--NN|N", "N|-/--//-/NN--|/N|-N/--N/-||NN|NN|NN||NN/--N/||/NN", "//|//NN//|/|/|/N--||/|/|--NN//|/NN-|/N|N|-/N-|/||-", "/NN/--|NN/-//|-//N-N-||-N//N|--N/-//N-|N/|//N|N|N|", "|N/--NN|-/N|--//N|--|N|N|--N/|/NN/|--|NN--||//|-/N", "N|N/||/NN--||N/-|/||//NN/-|//NN-N-||-/N--//|//-/--", "|N|NN/-/-//||-N//|//N|NN//-//N-|NN-|NN-|/N--NN/-|/", "/--|N|--N--//NN||-//-/--/--|/N-NN-N/-||-N-N-N//N|-", "N-|NN-|N/-/-||--/N|-//N--N//|/|-N//--||/|/N-N//-/N", "N|-N-NN/|-N//-//||NN/-|/|-N/--/-|N//N|N|N//NN--N-N", "-||NN//||N/-/N|NN|-N-|/|/N-||NN--|N/-||-//-/N--|/|", "--/-||N||/N|-/NN/--NN|--|/NN||/NN-NN--N-NN-N/-|/NN", "|-N/-/N-NN|-N-N//NN-|/|-//-/NN|N/-|N|N//|/|/||N/|-", "-NN-N//||/||/N--|/|/|/|//-|/|/|-/N-N-NN-|N|--||-N-", "|//|-/--N-N//|/NN|N/-/-|NN--/NN//||N||-N-|N||-N--|", "N|-/N-|//|/N-|N|-N--/NN/-/-|/NN/|/|//||/N-N/||N/|-", "N--/N||/||/|//-//N-|/|--N/-|NN/|/NN-||N/|--|N|-//-", "|/N-|/||//N-NN/--||N||-//-||N/--||/N||/N-|//--NN/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01F01L01R01F01L01F01R01F01L01F01R01S01R01L01F01L01R01F01S01F01R01S01R01L01F01L01R01S01L...";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> actions = {"N//||-N--|NN|-//N|N//-|N|N/--N/||N/|/|/|//-|NN|NN/", "-||NN//NN|NN||N/|/NN//||-//-/NN|-/N-N/|--N--||NN-N", "-|/|/NN--|N/-|//||-//NN-NN|N|NN-N--|/N|NN|-N-N--NN", "||NN|--|//-||//--/-|//NN-N//N-NN//|/||N/-||-N/-//-", "-|/NN//N||//||NN--N-||--N-|N/-/NN//|-N-||//N||/|/N", "-||//-||N//-|//N-NN/|/NN--||//|-N-N--N--//|-N-|NN-", "N/||-NN/||-/N||-NN-N/||-NN||/|/||-/NN--N--||NN//N|", "--N--/-/--//N-NN//||N//NN//||--N--N--||-N-NN|N//|-", "//-//N-|//-||-/-/-||//-/NN-|//-/-/--|/||NN--NN//-/", "-|//--|/N-NN/-|N|NN|-/-//--|/|-//--//-|/N-||/|//N|", "-//-||-/--N-N/||/N|--N/-/N|N|-/N-|NN-N/||-//|//--N", "-||/N|--NN||-N-||N|-N-|/||//|/||/NN/|--NN--NN|NN//", "--||/N|-N//||/|-N/-/--/N-|N/-|NN/||--/-/--N--//-|N", "|-/NN||N||/N-||--NN|--N/-|NN|N|N|NN-NN-N-|N|N||/||", "/||/|//N--N/-|NN-N/--NN/||-//N||/||-/-|//NN-N--/N-", "N/|//-|NN/|//||NN--|//|--|N/-|/NN-|N//-|NN--/N-|NN", "-N//NN--|/N|-NN/||N/-|/|-NN|-//NN|-NN/-/N-N-N/-//|", "|-/N-|/N|N/-||-N//||/N||/N||-N--|/N-NN/|-//|-N//N|", "NN/||/NN/|-/N-||/|/N|NN--/-/-/N|-N/-/-/-/N-N--//|-", "-//|-NN--N-N--|/N-|NN-N//|//||-NN--/-/--|//||NN-|N", "|-//-|//N|N/-|N|N||//--|N|-/-|/|//N|NN//-/-|N/||NN", "-|//|//-||--N/||-//--|//NN-|/N-N/-||//N--|//N-N-NN", "//|/N-||-//|--/N|N/||N|NN|N/|--//--N/|-/--|N//N|--", "|NN--N/-|/|/|-NN|-/N|N//-|/NN--NN//||N//N--|/|/N|N", "/--|/NN--/N||/|--/NN||/||//--|/NN-N-NN-NN||N/--||-", "-N/|//|//|/N-||N/|-/--N-|N||NN--NN-|/N|-/-|//||N|N", "N/|//N-|/N--NN||--N/|-//|-N-|//-|//-|/NN|--/-|/N--", "/N-||//|--|/||/|/|/N--|/||/N|--|//NN--||/|-//|-/-/", "N-NN||--|/N||/NN/-//NN//N--/NN/-||-N-|NN--|NN|-N/-", "|//N||//N-|N//N--/N|-/-/-//||N/-|NN|--/NN|-//|--NN", "//||/|--||//N|-N-|//N|N|N/--||/NN|-/-/-//-||--|NN-", "||N|N||N||-N-|N|-N/-//||/N||-N-|N//NN/||/N|-N--/--", "||-N-N--||/||N|NN-|N|--||-NN||//|--||-NN|--NN||-/N", "-N//|/|--//N-|N|N||--N-NN/||--|/|--N/-|NN-|/||-/N|", "--||/NN/-/N|-NN//N-NN--//N--N-||/N-N/||/|/NN||/||-", "-|N|N/|//-/-/N|--//N||/NN||//NN||//--|/NN-N-N/|-/N", "N|--//N-|/NN/-|/N||NN-|/N||N//-|N||N||//N|N/||N|-/", "NN/||NN-||NN-N//|-/N|-//||-/N|N/|-//|/N-||N//|--N-", "|N/--|/|-/-|N//|/NN-NN--/--//-||N/-|N/|-N/||-//N||", "//|-/N--|NN/|--|//NN//-||N|N||NN-N-N--|N//|/|-N/-|", "|-//NN//|/||/|/|-/-/-|N|-N--N/|-/N||/N--|//-//--N/", "/N||/N-|/|/N-N--||NN|N/--N--//|//-/--|N/||-//--/NN", "//--/N--||N|-NN-|//N--/-/N-N/|/|//-|//N-|/N|-NN-|/", "NN|-/--NN/--||-NN-|/NN/|-/NN||N|N|N/-|/||N/--||/N-", "N-N/||-NN||//||/|--NN-||N//||/|/N|--NN||N|-//N||//", "--NN-|N|-N--||-//|-/N-|N|--//--N//|-//--N//|/|/||-", "-|NN--//N--||/||NN/|-//-//N|N/--||N|NN||/N--|/||N|", "NN//N|-/N-NN-NN-N/-|//|-N/--//NN-|N||--N-|/|/|/|//", "--NN--|N|N|N/|-N//--|/|//--NN-NN-NN-|/N-NN-N//NN//", "--/--/N|-N/||N//-|N|NN-|NN||-N-|NN-||//--/N--|N|-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01S01L01S01F01R01L01S01F01L01S01R01F01L01S01F01R01L01F01S01R01F01L01R01L01F01R01S01R01F01L01S01L...";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> actions = {"//-||-N/|/|//--/-/-|//-|N/-/N-N//-//-||--//N-N//||", "-NN||N||NN||NN--|//||N||-/NN||--/--/-|//|-N//NN--/", "/--/--|//-/N-||N||//-/-||/N||/|/|--N//--N/||/||-N/", "/N-|NN/||-/-/N--N//N-||/|/N-||N|-NN/|/|-/N-NN|-/N|", "NN||--NN//|-/-|NN//|/|/NN-N-|N/--//--||N|-//||NN//", "-//||N/|-/-||N||//NN-NN--//NN/|--N-N--/N-|/N|--||/", "/N|--NN|NN--N--//N|--/-/N--//N-NN-||-//--NN|-/-|NN", "--||-//||--//--||NN-|/|-/N|-/NN/-|/NN-N//N-N-NN/-|", "N/||--/--N//||NN-NN/|-N//N--||N/|--||N|NN|N||-N-|N", "/--NN-||/|-N//NN-|N|--N-NN--N-||NN|N|-NN//--/--N/-", "|NN-N//|-/NN||N||/|/NN|-/NN--NN||//-//NN//-/N--|/N", "-NN|N|N//N||NN--//-|N|N//-||--|NN--NN|NN/|-//-/-||", "N||//||-NN--N/-/-||N||N||N||N/|-N/-/N--|/N|-N-NN|N", "N/-|/|/N-N-|/N--NN-|N||//|-N/||/||/NN/|//||//||/N|", "|//||//|/|--||NN/|/||NN-N-N--/-||--/-||N||//|--/-|", "N|-N-N/|/|/N-N--N//N|-NN-|N|-/N-|/|/N||/|-/N-N//N|", "-/N-|/|-N-NN-NN/--/N-|N/-||N/||NN||--N-|//|//NN|N|", "|//-//-||--|/N|N/--/N|N||/NN||//N-|//NN/--/-//|/N|", "--/-//|/|-/N--||--/N||-/--|N|-/NN/-//|-/-//||-/--N", "//||/|/N||--/N--|/N-N//|/N--NN|N/|-/-/N--NN||-NN/|", "/N||/NN/-//N--/NN|N//-/N|N||N|--/--||N/-|/||/|--N/", "/--N/|-NN//NN|-/-/NN|-/-//|--|/NN|NN--|N|-/-|//-|N", "N-|N||-//--|/NN--//N|--//||-NN|N|-N--/--//||//N|N|", "NN|--N/|/NN//-/N-N/|-N/|-//N--N-NN-NN|N//NN-||/NN-", "||NN-N-||N//|-/N-||--/NN|N/|--|N/|/||N/--N--N-NN-N", "N-|N/--//|-//|-N/--N-N--N//N-||--//N||-/-/NN--NN/-", "|/|-/N|N|--N//N|-N/||N//--||/NN||/|-//N|NN//|--||/", "NN|N//-|/|/NN|N|-N-||/||//N|--/--N//-//-//N||N|N/-", "||N/||//|--|N/||N/|/N|NN//-/NN/-||--||N/|/NN|NN/-|", "/NN|-NN/-||N|-NN|NN|-N/-/-/NN//NN|-NN/-|N/-/-|NN/-", "|N/|-/N|-/NN/--/--N/--N/--N/|/N|-N-N/||/N-NN//||N|", "|N|-NN||N||/||//N--N//-|N//N|N/-/N-|NN-N-|N|--|/|/", "/-//|/NN-||-N-||N|N/||//N-|NN||/NN|--|//|-N//NN|--", "//N||--|N/-/--NN-|/|/NN|--//-/NN/|//NN||/NN--//N|-", "N-|//|--||-NN-|//--|NN-NN-|N/||/N|-/N|-NN||-/-/N||", "-N-N-||/NN//-||N||/||NN-NN|--//--|N//-|N||/|-/NN||", "//||//--/N|-NN|--/N|NN-NN|N//--NN-N/--N//N--//-/N-", "-||N//-|NN//N-|NN/||-//|-N-NN||NN|--//||--/-||//||", "N||N//|/|-N-|N|-N-|/||//|/||NN|NN|NN-|/NN/-|NN-|/|", "-/NN||//|-//|/|--N/||--|N//|/N-|//|-NN/-/N|-N//-|N", "|-N/||-N//--/--/N|-/-//NN-N/|--NN/|//-/N-NN-|N/|--", "/-//N-N--N/|//-|N/|--||//N-||/NN-|NN//|--NN/-||N|-", "/NN/|/N-NN|NN/|/NN/||//--N-NN||-/NN-NN||N|--|//N-|", "//--|//NN|-/--N--||NN||N||NN|N||NN-N/--||N/--NN-|/", "NN-N//|/|/|/N|--|/NN/-//|-/N|N/|/|/|--/-/N--/--|N/", "|//NN-|/N--/--||/NN|-/N-||N//|--N--||--/--//|//||N", "|N||/N-||-//N|-N--NN|-/N--|N|--NN--N/-//N|N//N-|N|", "NN/--|N||N/-|/N-|/N||--N-NN||NN/--|N//-/NN--||--/-", "/-/-||N/--/-|//N-|//--||N/||N|NN-N-NN/|/|--N/|--N/", "--|/|//||N/||/NN|N//|/N||//--NN|-/N--//N-N/||//N|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01R01F01S01F01R01F01L01R01L01R01S01R01S01L01R01L01R01F01R01S01R01F01L01F01R01L01F01L01R01F01S01R...";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> actions = {"//||-NN-|//N-||//--|NN/-/-||/N|NN-N-NN--/--/NN//NN", "-||/|-/-//-//|--//|/NN//N|N||NN--|//-/NN|-NN-NN-|N", "|N//N|NN/||N|--/NN-N--//|--|N/|/|--NN|N|--/-||//|/", "/--N//||-NN/||N/|/|-NN|--NN-NN/--/N--|//N--N/-|/||", "NN/||N||/|//||N|N/|-/N-N-|//--N-|//-|/N|N|NN|-N/-|", "/N-N//||/||N/||-/-/N|-/NN//N|-//--N--/--N--//NN|N/", "/N-N-||//N||-NN--//N|-/-||N|NN-N--N/-/-/--/-/NN|--", "|NN-|NN|-N--NN/||//||//--N-||-/-/-|N|-//||/|//-//-", "-NN/|/N--||NN|NN//NN--|/NN/-//NN-N/-||/|//||/||/|/", "|/N-N--||-N-|NN--/N|--|N//N--|N/--|/|-N-NN||N|--//", "NN//N-||/|-/-//N|-/N-NN||-N//NN||N/-//-||//|-//|--", "/-|/|//-/-/N|N|-N/||-N--|/N|-//N-|N|--NN//N-N//||/", "/--||-N--//|/|-//-/-|N//--N-|NN|N|-/-|N|--|N/-/N|-", "N/-/--N--/-/--NN//--||-//--N//|--NN//N-N-N-|/|/NN/", "/-||--N//-||NN/|-NN/|-/N--N//--N//N--//|-N/-/NN|--", "|/N|-N/|/||//||N|-/-|/N-NN/|-/-/N|-/--|/|-N-|N|N/|", "//|//|--N-||--N-||-N/||/|/|//N-NN/|/||/||N|-//|--/", "-|N/--/N||/|-N-|NN--/-//|-N--|//--N/-//N||--/NN/||", "N//|//|/NN|-/-//-/N--|/||-N-|NN/-|N//NN||-/N-|/||/", "|-/-/NN||NN/|//|/N-NN//|//-|/NN/-|N/|//||/||-/--|N", "|NN|-N/|/||-N//-//NN--NN--||/|-NN--|NN||//-/-||NN/", "-/-/-/--/NN-|//N|-/-/N-|/|//|-N//-|/||/N|-/-||N|NN", "--NN||NN--||NN/|--N/||-/N-N/|//NN|N|-/N-|/NN//-||N", "/|/||NN//-//--//NN//N--|N|-/-||NN//NN//--/NN/|--N/", "/||N/|/N|NN|N|N//|/N-N-|N|-N-N-N-NN-|/N-|N||//|/NN", "-|N||-N/-/NN--||-/-/-|/|-N//-/--||N/-/--/-/-||--|N", "/-//N--NN|-N/|--//NN-N-NN-||-NN-|NN||/N|--N//--/N|", "N//-/-|N||N/||-N/||N|N//|-N/-/-//|--|/N|-/--||/|/|", "|/N-NN/||-NN|-/-//-||NN|NN||N|N||N|-NN-|N||-N/-/N|", "NN--|//N|--N/|/||-//N-N--||-//|--|N|N/-||--|N//NN-", "|N|--/NN-|NN-|N/--//NN|-N-NN-N--|NN-|N|N|NN|--/--/", "N--//|-N-N-|N//N|N/-|//NN/--N/-//||/|-/-|//N-N//N-", "N/-/N-|/|-NN-N/||--/N|NN--/--|NN||N||NN--|NN/-||N/", "-/NN/--/-//N||-N/||/|-N//N--|N/-|N||/|--N//-/NN/--", "||N|--N-NN--|N/--NN/-/N|NN//-//N|N|NN|N/||--N/-/NN", "|--N//-/--/-|NN/|//-//-/-||//-//-|/NN--NN|N|N/--/N", "N|--/--|/N||N//||-NN||/N-||-N//N|N||--N//N-N-|//-/", "-|N||N||/|//-|NN//|//|-NN/|-NN||-/--N--|N/-|N|--|N", "//NN|--N-||NN|N/-//-/-/-|//||-N--NN|NN/|-//NN//|-/", "N||N/-//N-||/||/N|NN/|/N||-//N|N//--NN/-//|-/N||//", "-||NN//--/--||/|/N|NN-NN/||/|/||NN-N--/-//N||N/|--", "||NN||/NN-|//--//-//|--|N//--/N-N-|N/-||NN|N/|/|/N", "N//N|NN/|//||-//--|/N-N-N/-|//-|/N|NN-N-|NN-N--|N/", "/--N/-||N|N/-||/|--//-|/N--|NN/||//-|N|-N//|-NN/|-", "-||-//N|-//N|--|//N|N//|--|NN/-/N-||/|-//||/N||/|/", "/-|N/-/--|/||-//-//|/N-N--NN-|/N|-N--//-|/|-N//|/N", "N/||N/-||/NN/||/|-//|-N-NN-N-|N||/|/|/|//N||-N--N-", "-N/-/--N--|NN--//||N||NN-||-/N--||N/-|N||NN|NN/--|", "|--NN/--/-//|//NN/-||-N/||-/N-N-N/--|/N--/-//||//|", "|NN|N//N-|//||-//NN|--|N|-N//N|N/||N//--||/N-||NN-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01L01S01F01R01S01L01F01R01S01F01L01F01S01R01S01R01S01F01L01S01F01R01L01R01F01S01R01F01R01L01S01L...";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> actions = {"|-", "|---N/", "|/-|N", "/N/|/-/N/", "/--N-|-|/NN|//", "NNNNNN/|-//-", "-NN/N||NNN|/|//-N/-|--/|", "|-|---|N-/-/|", "|N-|/N|/", "-N|-|/N--/N/N|NN|NN|||/-", "N/N|-N-NN---N", "/", "-/-N||/-NN", "|", "/N/-||--/N-|-/N--/|||--N|/N/||N-/|N/||N/", "--///N", "|-|/|-|/-N|/-NN/NN---/", "-/N|N-N--N-NN/|||-N/---|////|//", "-/N-N||/N/--|N", "-N/-N", "|-NN/-|/|||--N/---", "N|/|||", "NNNN/-", "|--|NN-/-/", "//N--N-N/N-||/|", "//N-N|-||/|N/N//N/N||---N/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F03S02R01F01L01R02F01L01F03L01R02L01F02S01R01S01R01L01F03R01F01S01R02S01F01S05F01L01F01L01S01R01S...";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> actions = {"N|//-/|N--|-||N-N//-/|/N-//N//N", "-", "/-|NN/N|-//|--", "|/N|-N/-|-/-||N|N", "-", "/-|||NN-N|--|N/|//|/N-", "/|NN|N|N||N-N-////NN|||//|", "-N-//--//N|-N-N-|-/|/-//N/", "/", "N-/-|", "N|", "NN-NN|-N--|", "N-//|//--|NNNN|NNN|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R02S01R01L04S01F03S01L02R01F01S01R01L02R01F01L02S01F02S01F01L02R01F01L01S01F02R01F01L01S01L01F01S...";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> actions = {"///N/-N", "|/|-|N//N/-N|||||/|--|||-|/N-|/--/-N-|", "N//|-||N/|N-N|||NN//-|/||-|-", "-", "-|NNN|-N|/-/--//N", "N-|/NN|-N-|-/N-||---||/N//|-|///N/||-|//-|", "|N//N/N/|-N|", "-/|/-N-|-/|N/|N/N|-|NN-|//", "-//|/|/-/-|-//N|--", "--/|--/-N|/|N||||/||N-/---|-|/--N|/||-N/N||/-/", "N--/-", "-N||---|N|||--N/|-|-/N-/N/N/||N", "|N-/||N|/-/-///NN/N|-//||--/N/|", "N//-//-|N||-//-||-N/-N-N/|N--N|||N|//--//N/--NN-", "/N/|/|-/NN|NNNN", "-N|", "-N/NN/||NNN|N||/-N--/|N||-N|/N-/--/|NNN-|-/N|/-/NN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S02F02R04L01F02L01F01S01F02R03S04R01L01F01S01F01S02F02R01F01L01F01R02S01L01R02L01F01L01F01S01L01F...";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> actions = {"//N-N|--/N-/", "--/|N---|-NN-N|N/|-/N/|N/NN/N-/||", "N/-N-N-/", "/N|/N||--|N|/-//NN/NN-NNN-/N||/-//N--|N-NN-", "/--/N|NN/-N|--|/|||N|N-//-N-||N/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01F01L01R02F01S01L01F01L02R01S01L04S02F02R01S01L01R02L01F01L01F01L01F02L02F02S01F02L03S01L01F01R...";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> actions = {"/NN/|NNN|//N|N/|/N//NN|", "N/N||N/N-", "|N|/|-//|N/-NN|//|||-/N|--N-///||/NN/-//|/NNN-/|NN", "NN--N/-N/N--NNN/N-N-///-|/N|//---//--//N--N/|", "/-/--N/-|N/|/-||-|N", "/-////NN-NN||NN/-|||/|||///"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01S01F01L02S02R02S01F01R01L01F01L01R01F02S01F01S01R01L01F02R01S01L01F02L01F01L01R02L01F01L01S01L...";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> actions = {"|N-N-NN/|///-NNN", "N|N/|-/-NN/-NN-|-----|-||/|N", "|-|NN/-N/--|N|-|N-NN/--|--/NN-N-", "--///|-/--/|-N-|N/||", "N-/|N|-N||----N-////|-N|--/|-NN-N", "//-/NN||N--/||-", "//-/N/|", "|--//-N/||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L02R01L01R01S01F01L01R01S02R02S03R01L01F01L01F01L01R02S01F01R02S01L01F02S04F03S01R01L02R01F02L01S...";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> actions = {"/N/--N/|/|N-N|-///|N/N--NN|-//N-////||-/-//||", "N/////--|-|-||-|---|-N|/N/-|--", "//--|/|||///-/||-", "-//--NNN|/N||-NN|/-N/-N--/N//--/|--|N//--", "|/-/NNN/NN|/-/-/---||", "-|-|-/N", "NN-NN/-|-N|//|", "|//---|///|---N//---/|---NN|/N/", "/N|NN-||/", "//-//|/|NNN-N-/|||N||/-|--|N|///|N|/|N|//", "|-|N---NN--//N|-/-//N-|||NNN-/-/-NNNN|-//-N/|", "-N---", "-/-/-N|-||-/||///||", "/|----|/", "//N-|-/N/N-|/N|-|///|NN", "N||N-|/|/N/NNN//|/NN--N/|/|/-|N|/|/N", "/-/|--/|/N//-N-//|N|//-|N--|NN-", "//-N-/|-//|//|NN|-", "|-|/N-/N///|N//|/NN||NN|/N-", "NN/N||-/-|N/|/N/-|-/|NN/N-NN|NN|N/--N--/NN|-", "N-/|-|--//NNNN|/-/-/-||-", "|N||//N|/||/||/N/-N---NN||-NN--|/---/-N|/N|", "//--|N/-/NNN-/-||/|||-/-", "|/-||-|NN|//|NNN-/-///|-|N|/N/NN//", "|/|/N|-||---|N/N||N|/--", "|//-||N-/||/N-N/---N/-NN|-NN-/|N-|N--/-|/N-/-", "|--NN/|N-/NN", "-||-/-", "/|-|N/-||//--N||//|-N-NN||NN||", "/||-/N||/||", "|-//NN--N-/|-/-|--N/N|//||-//|N|-NN|N-", "|-NN///|//NN|-||N---N|-/||NN/", "--/|-N--N//|/N-N-|//N///NN", "-|-|/N|/N--NN/-/N-|", "||---/-|--/N||--|/N/|/|/-/-N-N-|NN/N-/", "N-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F02R01S01R01F01L01R01L03R02F01L01S02L02F02L01S01R01S01R01F01L01S01F01L02S03L01S01F01L01R01L01S01L...";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> actions = {"--|N-|N|", "|/|N/|--/|||-N--N||-/--N|N///-N-/NN/-//-||--NN", "/NN//|-N/NN--|NN|/-||N-|||/-N", "//N|/", "///-|/-//NN//N||N-/-NN//NNN-/||N//N-/N-|-N///-NN-", "N|NN/-|", "-/---|-|N|N-|N-||-/|/|/N|", "/-", "N||----/N-NNN", "|N||NN|||NN/||N|-/|--N/-|-/N|//NN-||-N|--|//", "N||/|-N/||/||///--/-|-", "N|-N-N--N||-/N|-/N-N-/|-|-N|/-N", "|-/||N/N/||//N|N--/|-N", "|N||/N/-NN|-||-N|-N|///N-|-//|N--/", "|N--//N|||--", "/N/NN/|", "|NN|/|/|//-|-/||", "N", "|--N-N--///N||||N/-/-|//N-|/|N//", "//N|/|/N-//--/N/N-N/N|N-|NN/N|", "/-//|N-N/N/N|N|-N//-|N-|/N-|--|//NN|---|--//-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01F01L02F01L01R01S01R01L02F01L01F01S01L02S02F01R01L01S01R02S01F01L01R01S01R02L01F01S02R02L02F01S...";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> actions = {"|", "|---N--|-/N-/N|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01F01S02R01L01S01F02L01F01L02F01R01";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> actions = {"-/|", "|-|--//", "--/-NNN-", "/N--|N-N/|/|-", "NN--N-NN/N", "-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L02S01F03S01L01S01R01S01L01R02S02L02F01L01S01F01L02R01F01L01R01L01F01R01S01L01S01R01L01R01S01F02L...";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> actions = {"--NN", "NN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01R01S03";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> actions = {"-N|-N--N|//-N/-", "N||-|/|/--|", "---|", "NNN//|/-NNN|-|", "/|-N/N|/|-/NN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R02F01R01L01S01R03S01R02F01R03S01F02R01L01R02S01F02S02F01L01S02F01S01L01R03S02R01F02R01L01F01R01F...";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> actions = {"NN-|/N/|//|/NN", "N|/", "|N/-NN-|-", "-|-/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01L01F01R01F02L01R01S01L01R01F01S02R02L02F01R02S01L01F02S01F02L02";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> actions = {"|", "-N", "|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01R02";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> actions = {"|N/", "--", "N|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01F01R01S01R02";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> actions = {"N|", "|||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01S03";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> actions = {"/", "/-", "|NNN|/N/|N", "NNN|/-", "|", "-", "|", "N", "-", "/", "/", "/", "/", "/-N|/N", "/N", "/|N-", "/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01R01F01L01S02R02F02L02S03R03F03L03S04R04F04L04";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> actions = {"||/N---", "N|-|N----N", "|/N/N-/|||||/-N|-", "|-|N-/||", "||||/-N|/N", "/N/N-/|N---", "----N|/-N|-|-|", "-|N-/|N", "--------N|/", "-N|/N/N/", "N/N-/|N-", "/||||||", "|||/-", "N|/-N|", "-|-|-|-", "|N-/|", "N-", "/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01R01F01L01S02R02F02L02S03R03F03L03S04R04F04L04S05R05F05L05S06R06F06L06S07R07F07L07S08R08F08L08";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> actions = {"-|-|/-/|//////-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F03R02L02R01S05R01L01";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> actions = {"||||NN-N----N||NN|||-|-|/-/|//////-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S03L01S01L01R01L01S03R02S01L01S01R01S02F04R02L02R01S05R01L01";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> actions = {"N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L...";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> actions = {"|||||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||||", "------------------------------------------", "--------------------|---------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S97F01S61F02S20";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99S99";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "N", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S50S99L01R01S05S99S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> actions = {"--------------------------------------------------", "--------------------------------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> actions = {"N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01S99S99";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> actions = {"|N|N|N|N|N|N|N|N|N|N|N|N|N|N|N|N|N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> actions = {"|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F24F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> actions = {"||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S03";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> actions = {"----------------------------------------", "----------------------------------------", "---------------------------------------", "----------------------------------------", "----------------------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> actions = {"N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> actions = {"//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S32S99S99S99";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-|-|/-/|//////-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S50S99F01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L...";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> actions = {"-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S50S99";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> actions = {"--------------------------------------------------", "--------------------------------------------------", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|", "N-N-N-/N-/N-///|//|/|/|N|N|N|N|N|N|N|N|N|N|N|N|NN|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99R01L01R01L01R01L02F01L02F01L02S02L01R01S01L01R01L01R01L02R01L01R01L01R01L01R01L01R01L01R01L01R...";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> actions = {"N", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S71S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99F01R01L01R01L01R01L01R01L01R...";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> actions = {"|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-", "|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99F99";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||||||||||||-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99F01";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||--//||N|/||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S33S99F01S01L01S01L01S01L01R02L01S03";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> actions = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> actions = {"-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R...";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> actions = {"-------------------", "----------------------", "-----------------------", "-------------------------", "-------------------------", "-----------------------", "------------------------", "-------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S86S99";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> actions = {"-//-/-//--/NN/NNN///-----N|||N/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01S01R01L01R01L01S01R01S01L01F01S01F02S02F01S02R01S04R02S02L01F01L01";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> actions = {"---------------------------------------------", "-----------------------------------", "--------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S02S99S99S99";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> actions = {"--------------------------------------------------", "--------------------------------------------------", "-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01S99";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> actions = {"N", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S13S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> actions = {"/N/N---||/N--|/N-|/N/N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F03L01S02F01S01R01F01L01S01F01R01F01L01F01R01F03";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> actions = {"/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> actions = {"N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> actions = {"--------------------------------------", "----------------------------------", "----------------------------", "------------------------", "---------------------------------------", "------------------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> actions = {"|||||||||||||||||||||||||||||||||", "|||||||||||", "||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||", "|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> actions = {"|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/|/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> actions = {"||||||||||||||||||||", "||||||||||||||||||||", "||||||||||||||||||||", "||||||||||||||||||||", "||||||||||||||||||||", "--------", "/////--//-", "||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99F01S07L01S04R01S01L01S01R01F01S19";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> actions = {"N|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> actions = {"-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> actions = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01S99";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S73S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> actions = {"N-N-N-N-N-N-N-|-//-N-N-N-N-N-N-N-N-N-N-N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01F02L01S01R02L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R...";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> actions = {"-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01F...";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S03S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> actions = {"N", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> actions = {"|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N", "|/-N|N---N|||/|//-/N/N-|N-|N-//-/-|N///-//-||N|/|N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R04L02S02R02S02R01L01R01S01R01L01F03L01F01L02F01L03S01R01L01R01F01L01F01S02R01L01S01R01F01S01L01R...";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "|||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S05S99";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S63S99S99S99S99S99S99S99S99S99S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> actions = {"/////////////////////////////////", "/////////////////////////////////", "//////////////////////////////////"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> actions = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "-------------------------------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S55S99S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> actions = {"-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R...";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> actions = {"-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N", "-/|N-/|N"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01L99L99";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> actions = {"//-//-|||---N", "///---NN/", "-", "-/", "-", "|--"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S01R01L01S01R01F01S02F01S02R01F01S02R01S02R01S01F01R01S01L01R01F02S01";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> actions = {"||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S04S99";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S52S99S99S99";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> actions = {"||||||||||||||||||||", "||||||||||||||||||||", "||||||||||||||||||||", "||||||||||||||||||||", "||||||||||||||||||||", "--------", "/////--//-", "||||||||||||||||||||", "||||||||||||||||||||", "||||||||||||||||||||", "||||||||||||||||||||", "---"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99F01S07L01S04R01S01L01S01R01F01S79F01S02";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> actions = {"----------", "----------", "----------", "----------", "----------", "----------", "----------", "----------", "----------", "----------", "/N/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99L01F02";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> actions = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S54S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-|-|/-/|//////-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S51S99S99F01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R...";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> actions = {"|||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S89S99S99";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||", "|||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S38S99S99";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> actions = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S09S99S99S99S99S99S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||||||||||||||", "//////////////NNNNNNNNNN||||NNNN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S50S99R01S13F01S09R01S03L01S03";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> actions = {"/N-/|N-/|N-/|N-/|N-", "/N|-/N|-/N|-/N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "/N|-/N|-/N|-/N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|", "N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-", "/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|N-/|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01L18F01R01F01L01F01R01F01L01F01R01F01L01F01L35R01F01R01F01L01F01R01F01L01F01R01F01L01F01L11L99L...";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> actions = {"//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S24S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> actions = {"-||||/-///NNN//---N-", "-||||/-///NNN//---N-", "-||||/-///NNN//---N-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "F01S03R02L01S02F01S02F01S01R01S02R01L01S01F01S03R02L01S02F01S02F01S01R01S02R01L01S01F01S03R02L01S...";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> actions = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> actions = {"-/|N--|-/N|NNNN/--//|N|", "|-|NN///----N/---||N///", "NNN--||/||//N//////|--N", "///N|--|N/|N|-/|N--|-/N", "|NNNN/--//|N||-|NN///--", "--N/---||N///NNN--||/||", "//N//////|--N///N|--|N|", "N|"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L04S01F02L01F01R01L01S03F01R01S01L01S01L02R01S01F02L01S01F01S02R01S03R01F01R01S02F01S01L01F01S02F...";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> actions = {"||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||", "||||||||||||||||||||||||||||||||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S36S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> actions = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S53S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> actions = {"--------------------------------------------------", "-------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> actions = {"-/"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> actions = {"||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "||||||||||", "|||||||||"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S99S99";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> actions = {"//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "S04S99S99S99S99S99";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> actions = {"N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N-N", "-N-N-N-N-N-N--N-N-"};
    IndicatorMotionReverse* pObj = new IndicatorMotionReverse();
    clock_t start = clock();
    string result = pObj->getMinProgram(actions);
    clock_t end = clock();
    delete pObj;
    string expected = "L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L01R01L...";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=260835&rd=9822&pm=6172
********************************************************************************
#line 2 "IndicatorMotionReverse.cc"
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
 
class IndicatorMotionReverse {
public:
    string getMinProgram(vector <string> actions) {
  string input;
  vector<int> in;
  for (int i = 0; i < actions.size(); i++)
      input = input + actions[i];
  for (int i = 0; i < input.size(); i++)
      switch (input[i]) {
      case '-':
    in.push_back(0);
    break;
      case '/':
    in.push_back(1);
    break;
      case '|':
    in.push_back(2);
    break;
      case 'N':
    in.push_back(3);
    break;
      }
  string output;
  int p = 0;
  while (p + 1 < in.size()) {
      int d = (4 + in[p+1] - in[p]) % 4;
      int q = p;
      while (q + 1 < in.size() && d == (4 + in[q+1] - in[q]) % 4)
    q++;
      char c = "SLFR"[d];
      char buf[8];
      sprintf(buf, "%c%02d", c, 1 + (q - p - 1) % 99);
      output += buf;
      for (int i = 0; i < (q - p - 1) / 99; i++) {
    sprintf(buf, "%c99", c);
    output += buf;
      }
      p = q;
  }
  if (output.size() > 100) {
      output.resize(97);
      output += "...";
  }
  return output;
    }
};
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/