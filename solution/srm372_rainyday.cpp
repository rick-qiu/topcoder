/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8065
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

class RainyDay {
public:
    int minimumRainTime(string path, string forecast);
};

int RainyDay::minimumRainTime(string path, string forecast) {
    int ret;
    return ret;
}


int test0() {
    string path = "Y..H";
    string forecast = "R.RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "Y.C.H";
    string forecast = "RRRR.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "Y..C.H";
    string forecast = "RRR.R.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string path = "CCH..Y";
    string forecast = "RRRR.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string path = "Y.C..C...C....C.....C......C.......C........C....H";
    string forecast = "RRRRRRRRRRRRR..........RRRRRRRRRRRRRRRRR........RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string path = "Y................................................H";
    string forecast = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string path = "H................................................Y";
    string forecast = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string path = "H................................................Y";
    string forecast = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR.RRRRRRRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string path = "C........................................Y...H...C";
    string forecast = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string path = "Y................................................H";
    string forecast = "R...R.R..R.R.RRR.R.R.R.R..RR.R..R.R...R.RRR.R.R.R.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string path = "Y.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.CH";
    string forecast = "R..R.....RRRRRRR.R.R..R..R..RR.R.R.RRR.RR.RR.RRR.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string path = "Y.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.CH";
    string forecast = "R..RR.RRRRR..RRRRRR.R.RR...R.R.R.RRRRR..RRRRR..R.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string path = "CCC...C....C.Y..C.C.C.........H...............C...";
    string forecast = ".RR..RRRRR.RR.RRR.RRRRRRRRRRRR.RRRRRRRRR.RRRRR.R.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string path = "HCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCY";
    string forecast = "RRRRR.RRRRRRRRRRRR....RRRRRRR..RRRRRRRRRRRRR.RR.RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string path = "....CC......YCC..CC....C........C...CC...HC.CC....";
    string forecast = ".RRRRR.RRRRRRRRR.RR.RRRRR.RRRRRRR...RR.RRRRR..RRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string path = "Y..HCC.C..C.C......";
    string forecast = "RR......RR.RR.RR.R.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string path = ".C.......C.C.Y.C....C...CC.C.......HC...C..C";
    string forecast = "RRRRRRRR.R.R..R.RRRRR.RRR.RRRRRRRRRR.R.RRR.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string path = ".CC.C.......C.YC.C.H.C......C...C";
    string forecast = "RRRR..RRR..RR.RR.R.RRRRRRRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = ".......CC..HC..C..C...Y..C..";
    string forecast = "RR..RRR.RRR.RR.RRRR.R.RR.R.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string path = ".....C.C.C.C..C...HC...CC..Y....";
    string forecast = "................................";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "C....CH...C...C..Y.C.";
    string forecast = "RR.R.RR..RR..RRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = ".Y....C..HC";
    string forecast = ".R.RRRRR.RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string path = "............CY....H..CC....C.C";
    string forecast = "RRRRRR.RRRRRRRRRRR.RRRRR.RRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string path = ".C...CY..HCCC....";
    string forecast = "RRR.....RR....R.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "CYC......C....C..C..C.C.H";
    string forecast = "RRR.R.RRRRR..RR.R..R.R..R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string path = "CCHC.CC.CCCCCC.......C......Y.C..C.C.C...";
    string forecast = "R.RRR.RRR.RRRR...R.R...R.R.R..R.RR.RRR.R.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "...C.....C.C..Y....C..C...........C...H";
    string forecast = "RRR..RRRRRRRR.RRRRRRR.R.R.RR.R.RRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string path = "CC..Y.H";
    string forecast = "R.RRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "...CC.CC..CC.......C.C.CC.........YCC.....CH..C";
    string forecast = ".....R..RRRRRRRRR..RR..R.R.RRRR...R.....R...RR.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string path = "...CC..Y.CCCCCH.C..CC.CCC.CC........C.C....";
    string forecast = "R.R.R.R....R...R..RRR.R..R.R.R.RR.RR.R.R.RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string path = "CC.C.CC......YCCC.C..CCC.C.......CCCCC.CC.C.C.HCC";
    string forecast = "..RRR..RR.R..RRRRRRRRR..RRR.RRRRRRRRRRR.RRRR.RRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "..C..C.......C.C..C...C.HCY.....";
    string forecast = "................................";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string path = "YC.......HC.......";
    string forecast = ".R.R..R.R..RRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string path = ".HCC..Y.";
    string forecast = "RR.RRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string path = "C.....C.CCY.C...C.CC....C..C.CC..H";
    string forecast = "RR.RRRRRRRR.RRRRRRRRRRRRR..RRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string path = ".........YC..C.C......C...........CHC......";
    string forecast = "RRR.RR.RRR.RRRR.RR.RRRR.R.RRRRRRR.R.RRR..RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string path = ".C...C.C..Y.C.....CC.C..H";
    string forecast = "R.RRRRRR.RRR.RR.RRR.R.RRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string path = "HY";
    string forecast = "RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "YH.";
    string forecast = "RRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string path = ".Y.CC...C.CCC..CCC..C.C.CC......C..CH.CC...C.C";
    string forecast = ".RRRR..RR....RR.RRRR.R..RRRR.R.R.RR..RRRRRR..R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string path = ".CCC.HC.C..C...........C..Y.";
    string forecast = "RRRRRRR.R.RRRR.RR.R.RRRRRR.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string path = "C..Y.C.C.......C.H........C";
    string forecast = "RRRRRRR.R...RRRR..RRRRRRRR.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string path = "C.CHC.....C..CY.C";
    string forecast = ".................";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "C....CC....CY..C....C.C.HCCC..C...C.....C";
    string forecast = ".RRRRRR.RR.RRRRR.RRRRRRRRRRRRRRRRRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = ".....HYC.......C.C...............C";
    string forecast = "RR.RRRRR.RR.RR.RRR.RRRRRR.RRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "Y.CC...CC..C.CC.C.C...C..C......C..CC.CCCC..CH..";
    string forecast = "RR.RRR.RR.RRRRRRR.RRR.RR.RR.RR.RRR.RRRR....RRR.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "CC..CC..Y.H...";
    string forecast = "R....RR.R..RR.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "YC...CCC...C.C.C......CC......H..C.C..C.CC";
    string forecast = "..RR..RRRR.R.RRRRRRRR.RR.RR.RRR..RRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string path = ".C....Y.......C..........C.............C..CH....";
    string forecast = "RRRRR.RR.RRRRR..R.RRRRRR...R.RRRRRR.RR.RRRRR....";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string path = ".CHY";
    string forecast = ".RRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "Y...H";
    string forecast = "RR.RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string path = "Y...C........H";
    string forecast = "RRRRRRRRRR.RRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string path = "C.............C..C....CY..................CH..";
    string forecast = "RR..RRR.RR..RRRRRRR.RRRR..RR.RRRR..RRRRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string path = "....CC..CC.C..H..C.C.CYCCCC.....C...C...C";
    string forecast = ".RRR..RRRRRR..RRRRR..R.R.RRRRR.R.RR.R.R.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "..CC.....CY.C..C...C.H...";
    string forecast = ".R.RRR.R...R..R.RRRR.RR.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string path = "CCH.........Y";
    string forecast = ".............";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "Y.C..C...C....C.....C......C.......C........C....H";
    string forecast = "..................................................";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "H....C....C....C....C....C....C....C....C....C...Y";
    string forecast = "..................................................";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string path = "YHC";
    string forecast = "RRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = ".YCC...C.CCC....C.....CC..C..CC.CCC.CCCCCC...C.H.";
    string forecast = "RR.RR.R..R.RR.R..RR.RRR..RRRRRRRR.RRRRRRR.R.RRR..";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string path = "Y..............C................................H";
    string forecast = ".RR....R...RR.R......RR......RRRRR........RRR...R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string path = "CCY.CC..CCH";
    string forecast = "RRR....RRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "Y......C........C.....................H......C";
    string forecast = "R......RR.......RRR...................R......R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string path = ".C..CC.Y..C..CC..C.C.C.C.....C.C.C.....C.C.HCCC";
    string forecast = "RR....R.R.R.R...RRR..R.RR..RRR..R.R.R...R.R..RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string path = ".CHC.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.C.Y";
    string forecast = "R.R.R.R.R.R.R.R.R.RRR.R.R.R.R.R.R.R.R.R.R.R.R.R.R.";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string path = "Y....CC..H";
    string forecast = "RR..R..RRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string path = "CCY...............C...............HCC";
    string forecast = "......RRRRRRRRRR.R..R...R....R.....RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string path = "Y...............H";
    string forecast = "....RR...RRR....R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string path = "H.......................Y...............C........C";
    string forecast = "RRRRR....RRRRR.R.R.R.R.R.R.R.R.R.R.R.R.R.R.R.R.R.R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
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
    string path = "Y....C.........H";
    string forecast = "R......R.......R";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string path = "H......Y";
    string forecast = "RRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string path = "H...Y";
    string forecast = "RRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string path = "YH";
    string forecast = "RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string path = "Y..C.C......C.CC......C.C.....C.C......C......H.C";
    string forecast = "RRRRR.RRR.RRRRRRRR.RRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string path = "Y.C.CCCCCCCCCCCCCCCCCCCCCC...C.CCCCCCCCCCCCCCH";
    string forecast = ".RRRRRRRRRRRRRRR...RRR..R.R.R.R.R.R.R...R.R.RR";
    RainyDay* pObj = new RainyDay();
    clock_t start = clock();
    int result = pObj->minimumRainTime(path, forecast);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22651925&rd=10789&pm=8065
********************************************************************************
#include <numeric> 
#include <utility> 
#include <algorithm> 
#include <sstream> 
#include <iostream> 
#include <iomanip> 
#include <cmath> 
#include <string> 
#include <cstdio> 
#include <cstdlib> 
#include <ctime> 
#include <queue> 
#include <stack> 
#include <bitset> 
#include <deque> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <functional> 
using namespace std; 
 
#define INF 10000000 
 
bool fl[50]; 
int from, to; 
string f[50]; 
int flag[50][50]; 
 
struct State 
{ 
  int now; 
  int t; 
  int wt; 
  State(int now, int t, int wt):now(now), t(t), wt(wt){} 
}; 
 
int best; 
 
class RainyDay 
{ 
public: 
  int minimumRainTime(string path, string forecast) 
  { 
    int i; 
    for(i = 0; i < path.size(); i++) 
    { 
      fl[i] = true; 
      if(path[i] == 'Y') 
      { 
        from = i; 
      } 
      if(path[i] == 'H') 
      { 
        to = i; 
      } 
      if(path[i] == '.') 
      { 
        fl[i] = false; 
      } 
    } 
    f[0] = forecast; 
    for(i = 1; i < forecast.size(); i++) 
    { 
      f[i] = f[i - 1].substr(1); 
      f[i] += f[i - 1][0]; 
    } 
    int j; 
    for(i = 0; i < 50; i++) 
    { 
      for(j = 0; j < 50; j++) 
      { 
        flag[i][j] = INF; 
      } 
    } 
    flag[from][0] = 0; 
    best = INF; 
    deque<State> dq; 
    dq.push_back(State(from, 0, 0)); 
    int sz = forecast.size(); 
    while(!dq.empty()) 
    { 
      int now = dq[0].now; 
      int t = dq[0].t; 
      int wt = dq[0].wt; 
      dq.pop_front(); 
      if(wt >= best || wt > flag[now][t]) 
      { 
        continue; 
      } 
      if(now == to) 
      { 
        best = wt; 
        continue; 
      } 
      int nnow, nt, nwt; 
      nnow = now; 
      nt = t; 
      nwt = wt; 
      if(!fl[nnow] && f[nt][nnow] == 'R') 
      { 
        nwt++; 
      } 
      nt = (t + 1) % sz; 
      if(!fl[nnow] && f[nt][nnow] == 'R') 
      { 
        nwt++; 
      } 
      if(nwt < flag[nnow][nt]) 
      { 
        flag[nnow][nt] = nwt; 
        dq.push_back(State(nnow, nt, nwt)); 
      } 
      if(now > 0) 
      { 
        nnow = now - 1; 
        nt = t; 
        nwt = wt; 
        if(!fl[nnow] && f[nt][nnow] == 'R') 
        { 
          nwt++; 
        } 
        nt = (t + 1) % sz; 
        if(!fl[nnow] && f[nt][nnow] == 'R') 
        { 
          nwt++; 
        } 
        if(nwt < flag[nnow][nt]) 
        { 
          flag[nnow][nt] = nwt; 
          dq.push_back(State(nnow, nt, nwt)); 
        } 
      } 
      if(now < sz - 1) 
      { 
        nnow = now + 1; 
        nt = t; 
        nwt = wt; 
        if(!fl[nnow] && f[nt][nnow] == 'R') 
        { 
          nwt++; 
        } 
        nt = (t + 1) % sz; 
        if(!fl[nnow] && f[nt][nnow] == 'R') 
        { 
          nwt++; 
        } 
        if(nwt < flag[nnow][nt]) 
        { 
          flag[nnow][nt] = nwt; 
          dq.push_back(State(nnow, nt, nwt)); 
        } 
      } 
    } 
    return best; 
  } 
};

********************************************************************************
*******************************************************************************/