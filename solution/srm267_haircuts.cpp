/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4721
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

class HairCuts {
public:
    double maxCut(vector<string> enter, string lastExit);
};

double HairCuts::maxCut(vector<string> enter, string lastExit) {
    double ret;
    return ret;
}


int test0() {
    vector<string> enter = {"04:22", "09:00"};
    string lastExit = "05:52";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> enter = {"09:00", "09:22", "09:22"};
    string lastExit = "10:11";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 23.666666666666863;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> enter = {"09:00", "04:00", "04:02"};
    string lastExit = "04:09";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> enter = {"09:00", "09:00", "09:00", "09:00", "09:00", "09:00", "09:00", "09:00", "09:37"};
    string lastExit = "11:21";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 15.666666666666893;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> enter = {"04:59"};
    string lastExit = "06:58";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 119.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> enter = {"01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00"};
    string lastExit = "05:10";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> enter = {"01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00"};
    string lastExit = "05:09";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> enter = {"01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00", "01:00"};
    string lastExit = "05:11";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0199999999997775;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> enter = {"04:44", "09:22"};
    string lastExit = "05:00";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 16.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> enter = {"09:44", "09:32"};
    string lastExit = "10:00";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> enter = {"09:44", "09:32", "09:33"};
    string lastExit = "10:00";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.333333333333583;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> enter = {"09:44", "09:42", "09:33"};
    string lastExit = "10:00";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> enter = {"09:44", "09:42", "09:33"};
    string lastExit = "09:59";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 8.500000000000252;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> enter = {"09:44", "09:42", "09:33"};
    string lastExit = "10:01";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.333333333333583;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> enter = {"04:55", "04:50", "04:45", "04:40", "04:35", "04:30", "04:25", "04:20", "04:15", "04:10", "04:05", "04:00", "03:55"};
    string lastExit = "05:00";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> enter = {"04:55", "04:50", "04:45", "04:40", "04:35", "04:30", "04:25", "04:20", "04:15", "04:10", "04:05", "04:00", "03:56"};
    string lastExit = "05:00";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> enter = {"10:10"};
    string lastExit = "10:14";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> enter = {"01:15"};
    string lastExit = "05:46";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 271.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> enter = {"11:16", "11:18"};
    string lastExit = "01:53";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 78.5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> enter = {"09:52", "11:23", "12:08"};
    string lastExit = "04:51";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 139.66666666666643;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> enter = {"11:56", "01:58", "11:44", "10:34"};
    string lastExit = "06:55";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 125.24999999999984;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> enter = {"09:33", "09:57", "03:36", "10:52", "12:12"};
    string lastExit = "06:43";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 110.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> enter = {"12:17", "11:51", "10:47", "09:29", "01:48", "04:50"};
    string lastExit = "05:03";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> enter = {"09:44", "02:41", "12:21", "02:08", "12:09", "12:37", "09:43"};
    string lastExit = "04:42";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 54.599999999999774;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> enter = {"10:25", "09:05", "11:17", "02:39", "02:44", "09:21", "04:46", "11:15"};
    string lastExit = "06:48";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 72.87499999999976;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> enter = {"04:40", "10:54", "12:30", "03:46", "04:48", "01:57", "04:47", "10:29", "10:39"};
    string lastExit = "05:21";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 13.6666666666669;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> enter = {"11:23", "12:22", "01:09", "09:39", "10:38", "01:26", "02:58", "11:45", "04:17", "04:14"};
    string lastExit = "05:05";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 25.500000000000192;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> enter = {"04:25", "09:16", "12:48", "01:02", "04:30", "10:43", "02:39", "11:49", "09:23", "03:40", "11:51"};
    string lastExit = "04:35";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> enter = {"01:29", "04:49", "12:43", "01:51", "11:34", "12:17", "11:54", "01:24", "10:22", "04:33", "09:48", "01:17"};
    string lastExit = "06:57";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 44.30000000000023;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> enter = {"12:15", "11:42", "12:35", "09:53", "12:55", "10:16", "03:40", "02:38", "10:54", "04:40", "02:45", "09:51", "09:16"};
    string lastExit = "06:08";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 40.923076923077055;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> enter = {"02:50", "11:59", "04:39", "09:53", "09:22", "12:50", "10:18", "10:11", "09:28", "04:51", "09:24", "03:13", "09:56", "09:31"};
    string lastExit = "05:08";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 14.500000000000231;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> enter = {"02:23", "10:33", "09:04", "10:27", "02:30", "01:59", "02:32", "01:39", "04:28", "02:40", "03:52", "11:00", "03:23", "01:44", "04:13"};
    string lastExit = "05:11";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 19.272727272727387;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> enter = {"12:01", "11:01", "04:22", "03:50", "01:56", "04:54", "04:44", "10:35", "10:39", "12:16", "09:19", "10:53", "03:58", "10:28", "04:31", "02:11"};
    string lastExit = "05:28";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 16.333333333333556;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> enter = {"09:48", "09:24", "01:19", "09:21", "09:08", "10:34", "12:11", "04:29", "01:41", "03:40", "02:25", "04:15", "02:20", "11:56", "04:10", "02:56", "12:10"};
    string lastExit = "06:12";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 31.333333333333506;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> enter = {"11:42", "12:04", "01:41", "03:56", "11:54", "02:27", "01:15", "02:56", "01:36", "04:05", "04:38", "01:01", "01:44", "02:50", "03:23", "03:12", "04:04", "10:27"};
    string lastExit = "06:42";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 24.3571428571426;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> enter = {"11:08", "01:22", "10:08", "12:46", "10:38", "04:26", "02:15", "01:26", "10:06", "04:39", "04:30", "03:40", "04:20", "12:51", "11:33", "02:41", "04:05", "02:18", "10:43"};
    string lastExit = "04:44";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> enter = {"01:45", "10:41", "03:23", "02:08", "04:26", "10:39", "02:02", "01:29", "11:54", "03:37", "09:36", "01:25", "02:57", "03:08", "04:57", "02:40", "12:50", "04:03", "01:59", "10:00"};
    string lastExit = "05:37";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 18.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> enter = {"04:41", "10:38", "03:44", "09:56", "11:20", "12:11", "03:11", "01:15", "09:52", "03:14", "04:56", "12:29", "02:59", "04:19", "11:32", "12:40", "10:21", "01:43", "11:07", "09:57", "03:45"};
    string lastExit = "05:37";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 19.750000000000213;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> enter = {"09:54", "04:30", "03:26", "12:11", "03:43", "09:16", "10:08", "12:03", "04:24", "01:05", "12:03", "09:57", "04:41", "09:19", "12:03", "10:35", "03:47", "03:47", "12:30", "12:21", "03:30", "01:38"};
    string lastExit = "06:57";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 25.87499999999993;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> enter = {"09:36", "01:43", "04:30", "03:00", "02:13", "01:09", "12:52", "09:03", "09:48", "01:43", "03:34", "03:23", "02:20", "12:46", "02:08", "03:49", "11:28", "02:00", "12:09", "09:45", "04:55", "04:59", "11:04"};
    string lastExit = "05:26";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 15.500000000000227;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> enter = {"10:47", "12:50", "02:56", "11:06", "02:39", "03:42", "12:10", "01:01", "03:20", "01:50", "03:57", "12:58", "01:44", "01:13", "11:57", "10:00", "09:23", "02:48", "04:45", "11:19", "12:29", "04:33", "09:06", "04:37"};
    string lastExit = "05:00";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> enter = {"09:50", "12:21", "10:56", "11:35", "12:27", "09:40", "01:58", "12:05", "02:22", "01:43", "02:48", "03:33", "02:58", "01:14", "09:33", "03:43", "04:12", "09:16", "09:06", "02:43", "02:38", "10:42", "09:04", "01:41", "01:45"};
    string lastExit = "04:16";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> enter = {"09:42", "11:49", "10:37", "01:41", "11:01", "12:57", "01:32", "11:54", "09:47", "10:50", "02:53", "10:48", "10:30", "04:24", "01:33", "10:19", "09:14", "12:11", "12:15", "10:14", "01:34", "02:15", "09:40", "12:44", "01:05", "12:42"};
    string lastExit = "04:59";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 17.559999999999818;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> enter = {"12:40", "03:22", "10:14", "01:18", "12:58", "02:53", "09:26", "02:13", "03:59", "01:29", "01:34", "02:00", "03:23", "12:46", "12:19", "12:04", "11:02", "04:28", "12:20", "04:49", "09:20", "12:06", "11:48", "02:04", "02:42", "12:22", "12:21"};
    string lastExit = "06:14";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 16.782608695652215;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> enter = {"01:23", "12:42", "02:59", "01:09", "01:55", "04:12", "01:14", "04:11", "11:52", "12:31", "12:36", "11:58", "01:38", "02:29", "01:39", "10:12", "09:17", "01:01", "03:20", "02:45", "12:51", "11:38", "04:45", "09:52", "10:35", "11:43", "03:49", "03:06"};
    string lastExit = "05:40";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 15.083333333333561;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> enter = {"09:43", "12:30", "03:34", "09:24", "01:21", "12:48", "02:08", "03:19", "10:00", "10:13", "01:24", "02:45", "01:20", "02:13", "04:12", "02:28", "02:04", "11:56", "12:22", "01:39", "01:49", "03:22", "11:15", "09:07", "03:17", "10:48", "09:48", "04:31", "04:42"};
    string lastExit = "05:04";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 13.176470588235249;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> enter = {"03:28", "12:42", "12:37", "12:21", "04:56", "02:28", "03:38", "01:26", "03:39", "10:16", "09:39", "02:20", "11:25", "12:21", "01:41", "01:31", "01:06", "04:07", "12:51", "09:18", "03:13", "02:57", "10:25", "10:40", "09:07", "02:34", "10:25", "09:11", "10:51", "09:53"};
    string lastExit = "06:08";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 18.033333333333445;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> enter = {"11:10", "10:23", "03:26", "11:02", "01:50", "01:57", "04:06", "03:54", "10:48", "10:49", "04:42", "04:48", "10:57", "10:18", "09:49", "01:04", "11:54", "10:45", "09:20", "11:26", "02:35", "12:56", "10:52", "11:57", "03:24", "09:29", "03:40", "09:21", "12:48", "09:19", "09:08"};
    string lastExit = "05:29";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 16.161290322580648;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> enter = {"12:46", "10:38", "10:25", "09:17", "09:17", "04:16", "03:43", "09:24", "11:07", "01:03", "03:45", "01:57", "11:06", "04:31", "03:28", "01:44", "11:20", "10:48", "09:23", "01:05", "03:53", "03:13", "11:52", "11:02", "03:31", "12:24", "12:44", "11:39", "09:42", "04:30", "04:44", "03:21"};
    string lastExit = "05:26";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.090909090908946;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> enter = {"09:19", "11:53", "02:21", "12:22", "09:03", "11:30", "02:52", "04:51", "10:40", "10:24", "01:24", "02:02", "02:40", "02:11", "09:18", "03:19", "03:59", "09:40", "04:16", "02:03", "02:39", "04:39", "10:55", "12:25", "04:52", "10:24", "02:09", "02:37", "04:27", "04:30", "10:56", "01:45", "12:54"};
    string lastExit = "06:01";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 14.058823529411903;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> enter = {"11:23", "09:34", "09:25", "04:03", "04:54", "02:27", "11:45", "02:21", "09:22", "04:21", "10:41", "01:45", "04:56", "12:59", "12:32", "04:23", "04:14", "02:45", "01:58", "11:11", "01:48", "03:29", "10:42", "04:58", "01:12", "10:17", "12:57", "11:58", "01:49", "09:32", "11:20", "01:40", "01:14", "01:27"};
    string lastExit = "06:30";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 15.85714285714263;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> enter = {"01:11", "11:19", "02:24", "10:29", "09:14", "03:47", "02:07", "11:03", "12:55", "01:45", "10:02", "11:40", "04:00", "09:52", "04:43", "02:17", "03:00", "11:45", "02:24", "11:33", "03:44", "10:28", "09:18", "12:30", "02:06", "11:15", "03:15", "01:45", "11:27", "04:48", "12:07", "09:42", "09:37", "04:50", "11:42"};
    string lastExit = "05:05";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 7.33333333333359;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> enter = {"02:37", "11:22", "01:33", "09:24", "10:55", "03:17", "03:50", "12:58", "11:31", "01:14", "02:25", "03:42", "09:13", "02:27", "02:49", "10:58", "10:44", "09:12", "04:49", "12:29", "11:32", "10:46", "03:13", "10:04", "01:18", "04:15", "09:05", "10:48", "03:49", "02:52", "02:40", "11:20", "02:48", "02:53", "09:05", "11:41"};
    string lastExit = "06:22";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 15.266666666666577;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> enter = {"09:52", "09:55", "11:07", "09:39", "02:40", "03:08", "04:08", "01:22", "10:13", "09:05", "10:05", "09:47", "12:41", "04:36", "10:17", "09:56", "10:19", "11:55", "01:41", "11:33", "12:44", "02:17", "03:30", "01:28", "04:07", "02:35", "09:19", "01:52", "10:54", "03:29", "11:02", "01:23", "01:03", "01:26", "01:42", "10:46", "09:25"};
    string lastExit = "04:45";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> enter = {"02:35", "04:35", "11:55", "04:44", "03:53", "10:33", "04:11", "01:49", "12:24", "03:29", "04:21", "03:48", "09:45", "10:48", "12:43", "01:07", "03:51", "02:06", "11:37", "12:19", "11:05", "01:45", "12:18", "01:20", "11:48", "09:59", "10:29", "10:43", "09:33", "04:14", "12:31", "09:49", "04:59", "10:10", "03:22", "02:05", "11:55", "04:02"};
    string lastExit = "05:54";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.59999999999992;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> enter = {"01:35", "04:13", "09:51", "10:16", "04:02", "02:52", "09:15", "03:12", "04:03", "03:39", "11:05", "03:49", "04:11", "10:19", "12:07", "11:41", "09:54", "09:13", "04:21", "11:19", "10:06", "04:52", "03:13", "02:56", "09:16", "11:08", "10:24", "01:40", "04:58", "12:38", "12:42", "12:50", "12:30", "12:12", "10:59", "10:49", "04:39", "12:33", "12:34"};
    string lastExit = "06:07";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 13.692307692307926;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> enter = {"03:26", "02:26", "11:44", "10:40", "11:36", "09:12", "04:14", "10:42", "04:43", "04:10", "12:03", "10:15", "09:14", "09:36", "12:17", "04:13", "02:07", "01:06", "04:35", "03:27", "04:04", "04:31", "09:57", "11:58", "04:14", "02:17", "09:36", "04:26", "04:23", "02:05", "03:45", "12:59", "02:15", "02:24", "09:24", "01:48", "02:53", "03:17", "09:22", "02:15"};
    string lastExit = "05:35";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.099999999999932;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> enter = {"09:16", "03:32", "11:07", "09:32", "01:24", "02:11", "10:33", "12:26", "04:01", "11:26", "02:23", "01:54", "11:53", "02:31", "04:11", "09:08", "04:40", "01:30", "02:58", "09:11", "10:59", "10:03", "04:25", "09:37", "02:01", "03:39", "09:19", "09:20", "04:22", "10:31", "01:18", "01:23", "03:45", "11:09", "03:34", "09:12", "04:05", "10:03", "04:42", "02:10", "03:09"};
    string lastExit = "05:42";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.47826086956523;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> enter = {"09:58", "09:42", "01:12", "04:36", "09:33", "04:34", "09:17", "09:10", "09:38", "02:03", "12:24", "11:18", "04:44", "10:58", "10:09", "10:01", "12:45", "01:55", "02:06", "03:44", "12:11", "03:37", "11:43", "01:05", "02:05", "11:13", "09:43", "11:25", "03:30", "12:41", "10:34", "03:58", "09:14", "11:17", "04:18", "12:15", "03:36", "10:06", "03:08", "02:00", "01:19", "01:11"};
    string lastExit = "06:41";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 13.595238095238102;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> enter = {"09:40", "04:42", "09:02", "04:12", "10:24", "04:40", "03:06", "04:33", "10:59", "02:44", "11:19", "12:40", "10:29", "10:27", "11:40", "09:17", "12:45", "09:42", "03:49", "10:52", "09:15", "10:39", "11:30", "04:57", "10:54", "12:32", "03:07", "12:25", "09:06", "11:10", "03:58", "09:49", "02:34", "09:57", "12:39", "04:47", "02:31", "04:54", "02:18", "01:40", "04:50", "02:35", "02:40"};
    string lastExit = "05:06";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> enter = {"03:56", "03:56", "11:24", "11:39", "11:43", "11:37", "03:53", "10:16", "12:15", "03:51", "02:26", "04:17", "11:15", "03:52", "11:09", "10:48", "03:07", "09:07", "03:17", "01:57", "09:17", "01:38", "10:58", "02:04", "02:39", "03:06", "10:15", "09:15", "10:11", "01:58", "10:32", "02:55", "04:58", "09:16", "12:22", "03:51", "04:06", "11:45", "03:53", "09:52", "03:13", "03:52", "09:45", "02:55"};
    string lastExit = "06:33";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.545454545454591;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> enter = {"03:33", "11:20", "10:21", "04:20", "04:48", "04:15", "11:08", "12:15", "12:53", "11:48", "04:08", "10:38", "09:13", "10:45", "01:29", "10:32", "04:07", "03:16", "01:41", "12:52", "11:52", "02:22", "01:22", "12:24", "12:16", "10:17", "09:13", "04:51", "12:53", "02:50", "01:26", "11:31", "02:51", "03:29", "02:52", "03:47", "02:35", "03:29", "01:09", "10:29", "10:26", "11:12", "02:31", "12:56", "11:33"};
    string lastExit = "05:52";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 10.581395348837416;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> enter = {"04:51", "10:46", "10:26", "03:18", "03:35", "01:01", "01:38", "04:40", "09:38", "01:12", "01:47", "12:14", "12:39", "11:37", "01:22", "09:46", "02:03", "09:57", "11:42", "04:58", "12:41", "03:23", "04:55", "02:23", "12:05", "12:19", "11:08", "01:46", "03:42", "11:12", "03:48", "01:54", "02:04", "12:49", "11:57", "03:48", "03:52", "03:37", "01:37", "01:11", "03:55", "11:53", "12:06", "10:50", "02:23", "02:15"};
    string lastExit = "06:46";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.289473684210629;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> enter = {"03:09", "09:21", "10:22", "09:21", "09:45", "03:36", "10:09", "11:36", "02:21", "03:28", "12:13", "10:49", "04:06", "10:39", "01:14", "02:02", "04:09", "11:37", "11:09", "12:42", "09:36", "11:58", "03:09", "12:22", "09:36", "09:52", "01:04", "12:37", "01:23", "12:51", "03:30", "09:34", "02:46", "12:13", "09:54", "04:25", "11:45", "04:14", "11:36", "09:23", "11:26", "01:45", "11:02", "01:15", "09:28", "02:23", "12:27"};
    string lastExit = "06:29";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.659574468085212;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> enter = {"01:38", "11:09", "02:06", "11:10", "10:56", "04:44", "03:09", "03:19", "03:18", "10:46", "12:49", "04:27", "01:48", "12:56", "11:58", "10:44", "04:26", "01:39", "02:44", "03:22", "11:34", "03:09", "03:17", "02:03", "01:27", "01:56", "01:56", "09:27", "12:20", "11:31", "03:34", "11:19", "09:18", "02:21", "02:32", "02:53", "12:07", "01:09", "03:56", "01:27", "10:22", "11:44", "03:45", "03:09", "10:49", "01:39", "04:45", "10:18"};
    string lastExit = "05:39";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> enter = {"12:38", "09:46", "04:24", "11:08", "02:02", "02:35", "02:28", "01:47", "10:14", "12:10", "03:28", "02:55", "11:09", "04:31", "09:27", "12:04", "01:48", "03:58", "10:03", "03:38", "09:19", "11:58", "10:02", "01:48", "04:03", "02:10", "11:59", "01:50", "01:26", "09:57", "12:05", "12:18", "04:43", "01:27", "02:47", "04:07", "12:57", "01:02", "10:10", "12:47", "02:59", "04:11", "02:20", "10:04", "03:30", "02:35", "03:09", "03:18", "01:51"};
    string lastExit = "05:50";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.26315789473687;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> enter = {"12:11", "04:59", "03:25", "04:23", "12:05", "11:31", "01:06", "12:41", "02:29", "10:23", "11:51", "04:26", "12:24", "02:06", "02:13", "03:26", "12:42", "11:23", "04:15", "10:59", "10:50", "01:59", "10:06", "09:16", "12:29", "11:26", "09:43", "11:09", "12:30", "09:45", "12:57", "10:26", "09:07", "01:19", "01:55", "02:36", "12:43", "09:44", "01:06", "10:01", "03:15", "03:44", "10:32", "01:35", "10:47", "11:49", "03:52", "01:57", "11:50", "02:53"};
    string lastExit = "06:38";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.145833333333444;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> enter = {"01:22", "09:25", "01:06", "02:13", "03:11", "04:16", "12:27", "10:55", "04:11", "02:20", "04:35", "10:59", "10:30", "11:48", "12:34", "03:56", "02:12", "04:12", "02:42", "02:48", "03:45", "11:58", "09:54", "12:03", "09:41", "03:50", "03:37", "04:37", "10:59", "11:34", "11:51", "09:24", "03:07", "11:19", "03:03", "03:03", "10:23", "04:29", "01:53", "01:29", "02:43"};
    string lastExit = "06:11";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.950000000000134;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> enter = {"03:25", "11:02", "03:57", "02:22", "11:14", "09:41", "03:08", "04:49", "10:20", "02:10", "09:58", "01:02", "12:11", "12:55", "03:05", "04:36", "10:16", "11:50", "10:26", "10:05", "02:11", "10:30", "02:20", "11:32", "11:35", "04:39", "11:29", "03:48", "02:55", "01:55", "09:00", "03:10", "12:34", "01:08", "10:54", "10:30", "03:06", "11:56", "12:15", "12:43", "09:07", "11:32"};
    string lastExit = "06:21";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.897435897436134;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> enter = {"10:41", "02:06", "10:29", "04:32", "09:01", "02:29", "03:57", "04:46", "04:44", "01:13", "04:46", "04:25", "09:20", "01:59", "02:33", "09:58", "02:00", "01:29", "12:34", "03:06", "09:15", "11:20", "01:20", "03:09", "12:17", "01:04", "10:11", "09:20", "11:10", "04:28", "11:30", "10:34", "01:16", "12:00", "02:41", "03:42", "01:40", "04:05", "11:40", "11:53", "04:24", "01:18", "09:22"};
    string lastExit = "05:57";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.720000000000176;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> enter = {"12:32", "01:14", "02:24", "02:29", "12:31", "01:23", "01:28", "10:09", "03:13", "09:07", "03:43", "04:29", "01:07", "12:38", "02:56", "12:51", "09:19", "01:46", "09:36", "09:06", "11:31", "09:38", "04:47", "12:39", "12:13", "09:15", "03:51", "03:35", "02:13", "11:18", "11:01", "02:00", "12:55", "03:48", "12:49", "12:47", "03:55", "12:32", "10:35", "03:32", "01:07", "11:17", "11:32", "11:47"};
    string lastExit = "05:48";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 10.931034482758408;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> enter = {"03:28", "04:22", "10:35", "11:13", "04:33", "10:57", "04:41", "10:34", "11:55", "09:39", "11:11", "04:13", "11:07", "02:27", "03:41", "04:23", "09:57", "11:23", "02:57", "02:01", "10:33", "11:11", "12:27", "04:33", "04:21", "10:06", "12:41", "03:01", "09:56", "02:28", "09:06", "12:12", "12:36", "11:37", "11:10", "04:41", "11:33", "02:18", "11:30", "09:09", "03:10", "02:58", "03:06", "02:47", "12:41"};
    string lastExit = "05:26";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.124999999999986;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> enter = {"03:58", "02:42", "09:50", "02:32", "11:03", "10:51", "03:10", "04:16", "02:35", "10:30", "10:30", "01:25", "10:11", "03:56", "01:39", "12:35", "09:02", "12:11", "12:04", "04:30", "04:47", "01:46", "02:51", "11:27", "09:38", "04:39", "04:46", "09:35", "01:16", "12:32", "11:54", "11:42", "02:23", "04:58", "02:47", "02:24", "03:08", "09:37", "11:02", "03:02", "10:11", "11:24", "10:30", "01:56", "04:39", "02:36"};
    string lastExit = "06:00";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 10.849999999999927;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> enter = {"01:08", "11:41", "02:41", "10:46", "03:19", "01:38", "02:33", "02:46", "12:51", "12:12", "10:30", "11:28", "04:13", "11:05", "04:11", "01:05", "11:32", "09:24", "02:27", "01:38", "02:32", "12:54", "10:05", "04:53", "11:01", "12:40", "10:32", "02:51", "09:20", "09:11", "09:11", "04:50", "02:20", "02:56", "03:45", "11:56", "11:05", "11:55", "10:17", "03:39", "04:11", "02:29", "04:04", "11:36", "11:46", "01:57", "10:04"};
    string lastExit = "05:52";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 10.883720930232704;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> enter = {"09:15", "09:04", "11:12", "04:36", "01:38", "10:15", "12:05", "10:55", "09:22", "03:42", "04:14", "03:03", "04:59", "04:40", "11:47", "11:38", "09:35", "10:54", "09:21", "12:26", "12:09", "04:30", "01:34", "01:48", "09:30", "04:00", "04:39", "02:01", "12:02", "11:16", "10:32", "12:34", "11:35", "01:59", "12:55", "02:08", "12:04", "03:49", "12:13", "04:09", "04:17", "01:28", "11:14", "09:03", "02:51", "09:18", "04:52", "01:54"};
    string lastExit = "05:37";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.58333333333358;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> enter = {"09:12", "09:39", "11:50", "03:06", "09:51", "01:01", "12:31", "02:29", "04:50", "12:33", "09:12", "09:19", "02:18", "03:46", "02:44", "09:15", "02:06", "09:46", "02:20", "03:29", "10:26", "12:24", "03:34", "09:10", "11:22", "10:16", "10:47", "02:27", "01:17", "04:13", "04:15", "09:09", "10:29", "11:41", "02:58", "03:28", "03:30", "11:05", "12:23", "09:04", "12:14", "01:11", "04:58", "03:42", "01:31", "09:35", "11:40", "11:40", "03:21"};
    string lastExit = "05:06";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> enter = {"03:06", "02:05", "09:08", "01:30", "12:59", "10:12", "11:37", "03:15", "01:22", "01:27", "02:49", "10:42", "09:40", "04:47", "09:27", "03:45", "02:27", "02:39", "03:55", "04:38", "10:17", "04:31", "04:41", "01:02", "09:36", "12:20", "04:27", "03:46", "02:06", "09:33", "11:23", "09:28", "12:47", "09:49", "04:13", "02:16", "03:54", "02:24", "12:09", "12:09", "04:21", "02:19", "11:18", "12:24", "09:09", "09:41", "01:06", "04:20", "10:53", "02:04"};
    string lastExit = "06:34";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.319999999999862;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> enter = {"09:45", "02:15", "12:05", "02:46", "02:32", "04:33", "01:24", "09:19", "11:43", "01:35", "10:44", "12:57", "09:14", "03:27", "04:19", "03:15", "09:09", "09:29", "04:13", "12:29", "11:56", "01:56", "03:48", "03:05", "02:42", "09:58", "09:29", "02:35", "04:26", "12:52", "02:33", "03:44", "11:34", "02:47", "10:31", "02:34", "04:58", "02:24", "02:58", "04:41", "02:19"};
    string lastExit = "06:06";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 10.499999999999716;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> enter = {"10:10", "09:58", "02:01", "04:13", "04:53", "10:01", "11:50", "02:35", "11:12", "03:54", "11:14", "12:35", "03:32", "09:40", "12:05", "01:16", "11:43", "09:09", "02:47", "04:43", "10:36", "01:07", "12:48", "04:45", "11:36", "02:01", "09:27", "12:16", "03:46", "11:58", "10:01", "09:47", "04:14", "12:38", "03:37", "04:14", "01:57", "10:10", "11:26", "11:33", "12:29", "04:03"};
    string lastExit = "05:53";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.324999999999868;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> enter = {"04:38", "01:21", "03:24", "12:51", "04:57", "03:09", "11:49", "02:55", "03:35", "11:04", "01:32", "01:15", "10:03", "02:05", "02:14", "11:01", "09:42", "02:00", "11:15", "12:30", "02:07", "12:10", "01:35", "10:38", "09:11", "12:09", "09:56", "10:57", "01:13", "01:28", "09:17", "01:54", "11:12", "12:14", "09:26", "11:31", "02:12", "11:01", "04:47", "11:18", "10:36", "12:33", "01:19"};
    string lastExit = "05:21";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 10.945945945945732;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> enter = {"02:31", "11:54", "02:13", "04:39", "01:10", "10:00", "04:10", "02:37", "04:49", "01:47", "09:38", "10:35", "10:33", "03:32", "11:30", "03:32", "02:21", "04:36", "12:43", "09:57", "10:15", "10:23", "10:28", "11:03", "10:22", "01:31", "03:34", "04:00", "02:38", "04:59", "02:08", "01:09", "01:08", "02:27", "02:03", "10:40", "01:07", "02:47", "03:04", "04:10", "01:41", "11:16", "10:30", "11:02"};
    string lastExit = "06:19";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.555555555555797;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> enter = {"04:59", "11:12", "02:50", "04:37", "03:17", "10:26", "01:46", "04:29", "09:12", "12:44", "11:47", "04:45", "01:57", "02:07", "10:41", "09:37", "11:22", "11:48", "10:05", "10:47", "09:47", "02:52", "02:46", "10:11", "11:04", "09:38", "09:30", "10:39", "12:26", "01:33", "12:50", "02:56", "10:24", "03:29", "02:32", "09:55", "12:01", "02:13", "04:37", "10:46", "12:13", "12:32", "09:15", "01:40", "09:57"};
    string lastExit = "05:41";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.311111111111247;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> enter = {"12:44", "11:36", "03:47", "04:29", "02:30", "10:11", "04:54", "02:03", "12:11", "11:20", "02:38", "02:50", "03:45", "11:00", "09:37", "11:23", "10:26", "02:51", "01:44", "10:03", "03:29", "02:05", "12:26", "03:37", "09:14", "02:32", "03:30", "01:09", "11:16", "10:15", "03:43", "10:12", "04:07", "01:12", "04:40", "10:40", "03:00", "10:52", "12:10", "10:37", "03:33", "03:03", "02:07", "03:18", "04:01", "03:19"};
    string lastExit = "06:45";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.749999999999712;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> enter = {"01:09", "03:56", "12:17", "09:44", "03:45", "04:25", "09:26", "04:21", "02:10", "12:45", "04:37", "11:56", "09:20", "09:06", "09:15", "09:12", "10:33", "11:32", "10:13", "10:39", "02:10", "01:31", "04:06", "11:53", "12:37", "10:14", "03:32", "03:43", "03:52", "11:12", "11:56", "01:37", "03:10", "03:14", "03:18", "09:23", "04:07", "12:21", "02:43", "01:57", "12:03", "04:50", "10:42", "02:06", "10:12", "11:36", "10:43"};
    string lastExit = "06:33";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.06382978723391;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> enter = {"12:32", "01:44", "12:51", "02:35", "02:13", "04:48", "09:25", "04:56", "09:28", "02:43", "12:18", "09:04", "11:50", "12:18", "03:51", "01:38", "03:55", "12:57", "11:09", "09:17", "01:53", "03:52", "10:46", "04:15", "02:08", "12:44", "10:11", "11:40", "02:44", "04:58", "02:43", "09:43", "02:36", "01:27", "11:33", "12:48", "02:07", "04:07", "12:14", "04:26", "11:21", "09:04", "01:58", "11:35", "10:43", "04:58", "11:41", "03:47"};
    string lastExit = "05:41";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.945945945945736;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> enter = {"11:33", "09:00", "02:34", "03:31", "01:27", "04:53", "02:31", "12:30", "01:05", "11:24", "12:58", "12:22", "02:20", "09:03", "12:36", "04:50", "04:53", "12:49", "10:26", "03:30", "04:03", "10:44", "03:00", "09:49", "09:37", "04:20", "04:09", "09:22", "12:12", "11:45", "11:53", "12:16", "04:10", "04:53", "09:02", "02:41", "11:49", "09:40", "12:48", "10:57", "04:03", "04:00", "04:44", "12:44", "09:55", "03:40", "04:16", "02:29", "02:46"};
    string lastExit = "05:17";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 6.416666666666398;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> enter = {"12:37", "02:12", "02:16", "10:20", "02:34", "03:35", "04:10", "09:52", "11:21", "11:05", "01:17", "04:08", "03:04", "02:23", "01:48", "03:41", "01:18", "02:39", "10:14", "11:01", "10:55", "09:00", "11:19", "04:05", "01:42", "12:44", "02:11", "12:13", "11:59", "03:06", "10:38", "03:13", "04:30", "10:47", "03:55", "12:41", "12:15", "10:04", "11:26", "09:02", "03:07", "04:26", "03:44", "01:08", "09:39", "09:39", "12:47", "10:15", "09:32", "01:53"};
    string lastExit = "05:24";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.83333333333358;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> enter = {"02:38", "02:00", "12:35", "04:17", "01:17", "01:49", "10:49", "10:23", "12:38", "11:16", "10:13", "09:05", "04:31", "03:28", "11:13", "01:51", "01:34", "03:20", "12:31", "11:15", "10:41", "10:43", "03:23", "04:41", "02:35", "09:51", "10:53", "04:07", "03:37", "01:02", "09:47", "12:19", "03:46", "01:18", "12:11", "04:54", "04:44", "11:32", "11:18", "02:51", "12:12"};
    string lastExit = "05:32";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.416666666666908;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> enter = {"11:05", "04:19", "11:01", "09:19", "12:52", "03:20", "02:10", "09:13", "12:21", "02:20", "11:42", "01:57", "09:03", "10:37", "09:20", "12:16", "03:31", "01:59", "11:01", "03:35", "12:33", "03:35", "11:50", "01:58", "03:20", "02:00", "09:28", "09:50", "10:01", "10:51", "02:42", "02:26", "09:14", "03:35", "01:12", "11:43", "11:02", "01:47", "11:50", "04:37", "01:21", "04:44"};
    string lastExit = "05:32";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.119047619047707;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> enter = {"01:26", "01:30", "04:32", "02:32", "12:57", "02:33", "01:41", "10:56", "02:19", "09:59", "02:54", "10:20", "02:44", "11:25", "02:19", "02:59", "01:21", "12:53", "03:17", "04:28", "01:39", "12:45", "01:07", "02:04", "03:00", "02:18", "02:19", "02:08", "02:57", "12:56", "09:44", "01:42", "01:12", "10:40", "01:56", "09:26", "10:07", "11:14", "09:39", "12:14", "10:06", "11:46", "12:13"};
    string lastExit = "06:36";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.103448275862199;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> enter = {"01:15", "01:19", "03:33", "02:43", "12:49", "04:46", "11:54", "03:58", "03:07", "04:53", "12:57", "04:21", "09:22", "11:32", "01:01", "02:43", "01:37", "11:42", "11:49", "02:17", "01:05", "01:24", "04:00", "10:38", "09:58", "09:23", "01:27", "10:43", "04:37", "03:48", "10:30", "03:31", "01:36", "12:33", "01:45", "11:53", "04:00", "11:04", "02:24", "01:49", "01:18", "01:11", "11:43", "03:51"};
    string lastExit = "06:40";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.567567567567323;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> enter = {"10:15", "04:36", "10:28", "10:16", "01:26", "01:09", "03:01", "11:16", "01:48", "12:53", "04:36", "09:05", "01:51", "11:31", "02:58", "11:14", "12:02", "09:04", "03:24", "11:19", "12:56", "02:03", "11:56", "02:43", "12:55", "11:22", "03:56", "09:03", "12:23", "11:19", "11:33", "03:22", "12:09", "02:44", "02:45", "12:11", "11:16", "09:17", "10:39", "01:57", "12:59", "03:37", "02:37", "09:25", "02:03"};
    string lastExit = "06:27";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.027777777778017;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> enter = {"02:24", "09:47", "02:56", "11:56", "02:16", "02:11", "01:59", "11:26", "02:23", "01:35", "09:02", "03:57", "11:43", "04:03", "10:16", "03:18", "02:12", "09:00", "04:13", "02:42", "02:52", "09:01", "11:42", "03:29", "10:19", "10:16", "09:25", "09:04", "03:23", "09:10", "02:18", "11:34", "04:33", "04:19", "02:59", "03:13", "12:11", "10:49", "10:27", "09:28", "09:09", "12:55", "10:43", "01:32", "12:58", "03:25"};
    string lastExit = "06:25";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 12.282608695652229;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> enter = {"09:04", "11:04", "04:55", "03:35", "12:02", "11:24", "04:04", "11:01", "01:25", "11:57", "09:37", "11:42", "11:40", "01:41", "11:19", "04:49", "11:01", "12:57", "12:30", "02:21", "10:40", "03:05", "01:48", "11:28", "10:35", "10:11", "10:55", "12:09", "10:51", "09:38", "02:58", "01:35", "11:37", "10:44", "12:47", "12:27", "09:42", "09:46", "01:53", "10:23", "02:05", "10:48", "12:21", "03:38", "04:19", "02:52", "11:25"};
    string lastExit = "06:28";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.543478260869737;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> enter = {"10:53", "11:07", "10:56", "03:15", "03:43", "03:35", "02:26", "12:17", "04:44", "02:53", "01:15", "12:20", "11:59", "11:22", "12:54", "09:33", "09:57", "03:26", "04:08", "02:20", "11:16", "02:49", "03:07", "01:36", "11:24", "09:05", "10:47", "09:01", "04:25", "01:10", "09:16", "10:46", "12:02", "02:53", "01:02", "02:34", "04:17", "12:08", "12:28", "09:46", "11:11", "01:10", "03:59", "12:24", "01:00", "10:47", "02:52", "04:12"};
    string lastExit = "06:33";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 11.119047619047711;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> enter = {"04:40", "04:39", "01:52", "12:48", "10:05", "10:28", "02:51", "03:52", "02:20", "03:54", "01:47", "02:25", "09:10", "01:43", "10:51", "03:52", "01:05", "11:06", "11:48", "12:11", "09:04", "02:41", "01:36", "10:48", "11:32", "03:43", "12:58", "12:36", "02:19", "01:45", "10:08", "12:53", "01:27", "04:14", "09:30", "03:09", "12:42", "12:01", "03:49", "12:19", "04:29", "12:36", "11:52", "09:35", "12:00", "01:23", "01:28", "02:10", "01:47"};
    string lastExit = "04:43";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> enter = {"04:39", "02:56", "02:27", "11:15", "03:51", "03:55", "03:21", "04:00", "11:24", "03:57", "12:28", "10:25", "01:51", "10:10", "01:51", "01:07", "02:06", "12:15", "12:05", "02:14", "10:09", "09:07", "12:56", "11:21", "10:16", "03:04", "01:13", "02:59", "09:05", "02:14", "01:53", "01:36", "03:17", "01:41", "04:06", "10:31", "12:50", "11:56", "09:46", "11:49", "12:35", "12:11", "01:50", "02:16", "03:39", "09:21", "03:15", "03:05", "12:16", "12:27"};
    string lastExit = "05:53";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 9.578947368421023;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> enter = {"04:22", "09:00"};
    string lastExit = "05:52";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> enter = {"09:00"};
    string lastExit = "09:05";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> enter = {"09:00", "09:00", "09:00"};
    string lastExit = "09:15";
    HairCuts* pObj = new HairCuts();
    clock_t start = clock();
    double result = pObj->maxCut(enter, lastExit);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=8000&pm=4721
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
#include <regex.h>  
using namespace std; 
 
// LIB CODE 
#define PB push_back 
#define FOR(i,a,b) for(int i=(a);i<int(b);++i) 
#define SZ(v) ((int)(v).size()) 
#define FORSZ(i,a,v) FOR(i,a,SZ(v)) 
#define REPSZ(i,v) FORSZ(i,0,v) 
#define ALL(v) (v).begin(),(v).end() 
#define SORT(v) sort(ALL(v)) 
typedef vector<int> VI; 
#define REP(i,n) FOR(i,0,n) 
// REAL CODE 
 
int parse(string s) { 
  int h,m; sscanf(s.c_str(),"%d:%d",&h,&m); if(h<9) h+=12; return h*60+m; 
} 
 
class HairCuts { 
public: 
  double maxCut(vector <string> enter, string exit) { 
    VI e; REPSZ(i,enter) e.PB(parse(enter[i])); SORT(e); 
    int x=parse(exit); 
     
    double l=0,h=10000; 
    REP(q,100) { 
      double m=(l+h)/2; 
      double free=0; 
      REPSZ(i,e) { 
        free>?=e[i]; 
        free+=m; 
      } 
      if(free>x) h=m; else l=m; 
    } 
    double ret=(l+h)/2; 
    if(ret<5-1e-15) return -1; return ret; 
  } 
   
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/