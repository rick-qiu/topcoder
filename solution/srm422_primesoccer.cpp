/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10033
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

class PrimeSoccer {
public:
    double getProbability(int skillOfTeamA, int skillOfTeamB);
};

double PrimeSoccer::getProbability(int skillOfTeamA, int skillOfTeamB) {
    double ret;
    return ret;
}


int test0() {
    int skillOfTeamA = 50;
    int skillOfTeamB = 50;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5265618908306351;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int skillOfTeamA = 100;
    int skillOfTeamB = 100;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int skillOfTeamA = 12;
    int skillOfTeamB = 89;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6772047168840167;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int skillOfTeamA = 43;
    int skillOfTeamB = 12;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6967817545210753;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int skillOfTeamA = 55;
    int skillOfTeamB = 100;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32120857144574655;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int skillOfTeamA = 0;
    int skillOfTeamB = 50;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3119316101074219;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int skillOfTeamA = 0;
    int skillOfTeamB = 0;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int skillOfTeamA = 1;
    int skillOfTeamB = 1;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02727121816404319;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int skillOfTeamA = 1;
    int skillOfTeamB = 100;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01372986366008384;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int skillOfTeamA = 99;
    int skillOfTeamB = 1;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1633771511659839;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int skillOfTeamA = 78;
    int skillOfTeamB = 11;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6480645387523168;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int skillOfTeamA = 17;
    int skillOfTeamB = 17;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8352494291961116;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int skillOfTeamA = 18;
    int skillOfTeamB = 19;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8345272105589906;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int skillOfTeamA = 17;
    int skillOfTeamB = 23;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8240750197973934;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int skillOfTeamA = 17;
    int skillOfTeamB = 83;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6970466307894632;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int skillOfTeamA = 78;
    int skillOfTeamB = 12;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6676645940835624;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int skillOfTeamA = 19;
    int skillOfTeamB = 19;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8336063890380028;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int skillOfTeamA = 20;
    int skillOfTeamB = 20;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8300960715969234;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int skillOfTeamA = 83;
    int skillOfTeamB = 83;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44291092001576443;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int skillOfTeamA = 76;
    int skillOfTeamB = 89;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5172470324584015;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int skillOfTeamA = 42;
    int skillOfTeamB = 94;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6011829426223376;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int skillOfTeamA = 1;
    int skillOfTeamB = 9;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4417697199997768;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int skillOfTeamA = 8;
    int skillOfTeamB = 7;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5923754549464548;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int skillOfTeamA = 3;
    int skillOfTeamB = 5;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2942561210017241;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int skillOfTeamA = 19;
    int skillOfTeamB = 21;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8294554174803039;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int skillOfTeamA = 99;
    int skillOfTeamB = 99;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28043890109834946;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int skillOfTeamA = 33;
    int skillOfTeamB = 44;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6427002434550181;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int skillOfTeamA = 78;
    int skillOfTeamB = 43;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5330449279924205;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int skillOfTeamA = 43;
    int skillOfTeamB = 76;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.546525257727783;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int skillOfTeamA = 38;
    int skillOfTeamB = 72;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6058808825290922;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int skillOfTeamA = 42;
    int skillOfTeamB = 44;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5746012495371897;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int skillOfTeamA = 12;
    int skillOfTeamB = 26;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7854068947455727;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int skillOfTeamA = 19;
    int skillOfTeamB = 29;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7984336328904318;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int skillOfTeamA = 74;
    int skillOfTeamB = 47;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5415780571348757;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int skillOfTeamA = 24;
    int skillOfTeamB = 25;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8000888645683668;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int skillOfTeamA = 1;
    int skillOfTeamB = 99;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1633771511659839;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int skillOfTeamA = 18;
    int skillOfTeamB = 80;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7026232773993955;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int skillOfTeamA = 34;
    int skillOfTeamB = 46;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6272304912663792;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int skillOfTeamA = 53;
    int skillOfTeamB = 87;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5034477777634486;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int skillOfTeamA = 28;
    int skillOfTeamB = 32;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7446137516111067;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int skillOfTeamA = 23;
    int skillOfTeamB = 12;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7986542487841684;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int skillOfTeamA = 20;
    int skillOfTeamB = 40;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7432251317619454;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int skillOfTeamA = 13;
    int skillOfTeamB = 87;
    PrimeSoccer* pObj = new PrimeSoccer();
    clock_t start = clock();
    double result = pObj->getProbability(skillOfTeamA, skillOfTeamB);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6790280442414693;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=13513&pm=10033
********************************************************************************
#include <vector> 
#include <string> 
#include <queue> 
#include <map> 
#include <math.h> 
#include <cmath> 
#include <algorithm> 
 
using namespace std; 
 
class PrimeSoccer 
{ 
  public: 
  double getProbability(int skillOfTeamA, int skillOfTeamB) 
  { 
    double a[19] = {0}; 
    double b[19] = {0}; 
    a[0] = b[0] = 1; 
    for (int i=0; i<18; i++) { 
      for (int j=18; j>=0; j--) 
        a[j] = ((a[j-1])*skillOfTeamA + a[j]*(100-skillOfTeamA))/100.0; 
      for (int j=18; j>=0; j--) 
        b[j] = ((b[j-1])*skillOfTeamB + b[j]*(100-skillOfTeamB))/100.0; 
    } 
    double res = 0.0; 
    for (int i=0; i<=18; i++) for (int j=0; j<=18; j++) 
    { 
      int pp = 0; 
      if (i==2 || i==3 || i==5 || i==7 || i==11 || i==13 || i==17) pp ++; 
      if (j==2 || j==3 || j==5 || j==7 || j==11 || j==13 || j==17) pp ++; 
      if (pp) res += a[i]*b[j]; 
    } 
    return res; 
  }; 
};

********************************************************************************
*******************************************************************************/