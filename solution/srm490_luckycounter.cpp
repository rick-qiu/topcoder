/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11229
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

class LuckyCounter {
public:
    int countLuckyMoments(vector<string> moments);
};

int LuckyCounter::countLuckyMoments(vector<string> moments) {
    int ret;
    return ret;
}


int test0() {
    vector<string> moments = {"12:21", "11:10"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> moments = {"00:00", "00:59", "23:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"12:34"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"12:11", "22:22", "00:01", "03:30", "15:15", "16:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> moments = {"22:33", "11:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> moments = {"06:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> moments = {"00:23", "23:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> moments = {"11:33", "15:44", "11:11", "23:32"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> moments = {"03:55", "11:34", "11:11", "16:35", "22:49", "22:22", "17:17", "13:31"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> moments = {"16:48"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> moments = {"15:37", "23:14"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"07:07", "21:12", "15:28", "11:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> moments = {"19:52", "06:42", "22:22", "06:06", "06:06", "11:11", "00:00", "01:10"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> moments = {"00:04"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"11:04", "17:41"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> moments = {"07:11", "05:00", "04:40", "14:25"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> moments = {"11:55", "22:17", "23:44", "04:40", "22:56", "19:41", "10:55", "22:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> moments = {"07:38"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"19:46", "22:08"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"17:51", "16:16", "16:44", "11:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> moments = {"19:22", "05:34", "15:18", "20:44", "09:41", "19:03", "20:26", "17:34"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"11:33", "00:03", "01:26", "00:55", "14:55", "00:00", "16:16", "11:11", "23:21", "19:19"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> moments = {"19:19", "15:51", "07:07", "11:11", "18:22", "21:12", "22:12", "10:01", "22:22", "11:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> moments = {"11:11", "17:11", "11:40", "15:51", "18:18", "08:08", "19:19", "22:22", "01:22", "19:19"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> moments = {"16:57", "19:19", "11:33", "21:12", "00:15", "12:17", "08:08", "14:48", "09:27", "15:55", "11:00", "09:47", "15:16", "13:31", "06:44", "22:22", "09:32", "11:11", "17:52", "02:02"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> moments = {"16:07", "00:50", "03:12", "11:19", "08:08", "12:41", "21:54", "05:09", "19:19", "22:55", "09:55", "21:12", "19:19", "19:19", "10:10", "14:11", "21:44", "21:02", "00:00", "00:21"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> moments = {"06:11", "21:12", "00:00", "15:43", "21:35", "00:00", "02:02", "22:22", "06:27", "07:02", "18:44", "06:02", "22:22", "15:30", "10:10", "09:09", "02:20", "22:22", "04:40", "20:02"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> moments = {"05:32", "01:46", "17:00", "17:43", "12:59", "11:11", "12:12", "02:20", "12:55", "07:09", "11:10", "16:16", "00:00", "11:30", "06:24", "03:30", "12:21", "04:40", "14:15", "17:42", "18:18", "21:00", "15:39", "17:00", "21:44", "12:12", "14:03", "19:23", "00:00", "13:47"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> moments = {"14:54", "02:32", "03:26", "09:53", "12:41", "08:08", "13:13", "22:21", "12:00", "17:16", "21:33", "18:25", "18:46", "05:33", "18:17", "20:19", "20:20", "23:17", "15:55", "11:08", "09:19", "21:21", "10:54", "22:29", "12:27", "01:10", "11:44", "19:02", "08:22", "14:42"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> moments = {"08:52", "21:21", "05:07", "06:49", "17:17", "10:33", "23:13", "05:05", "20:04", "22:22", "06:00", "00:58", "02:51", "22:22", "19:39", "06:43", "18:10", "23:00", "19:05", "22:34", "02:54", "19:19", "03:00", "01:01", "15:38", "00:15", "23:22", "21:11", "12:21", "18:09"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> moments = {"11:33", "20:21", "15:35", "21:44", "06:06", "00:17", "18:18", "07:34", "15:51", "10:59", "11:11", "08:56", "00:24", "19:19", "13:20", "17:17", "01:00", "14:38", "04:40", "16:55", "10:54", "04:16", "02:26", "08:04", "17:40", "13:12", "13:13", "22:53", "22:46", "14:19", "00:00", "11:22", "08:54", "10:10", "22:19", "11:48", "05:59", "00:07", "00:18", "10:10"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> moments = {"05:32", "02:20", "13:12", "14:00", "03:01", "02:47", "00:42", "10:40", "06:56", "00:12", "15:46", "22:25", "11:49", "09:35", "07:21", "05:57", "07:46", "11:37", "19:52", "13:24", "21:55", "22:49", "17:52", "21:12", "03:52", "12:46", "07:25", "22:22", "08:09", "05:50", "19:00", "13:31", "17:17", "07:07", "11:11", "05:33", "04:40", "06:06", "17:07", "00:44"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> moments = {"05:11", "19:19", "07:21", "00:00", "20:19", "03:30", "20:03", "11:03", "22:32", "23:40", "14:41", "05:34", "07:54", "02:46", "04:22", "15:30", "11:33", "17:58", "23:32", "22:45", "06:15", "05:05", "14:58", "14:32", "00:19", "14:41", "12:25", "08:00", "22:16", "15:32", "15:57", "01:03", "00:00", "02:46", "01:01", "12:48", "19:43", "13:45", "10:17", "01:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> moments = {"22:54", "17:40", "19:33", "12:55", "23:23", "11:23", "23:14", "14:09", "09:09", "00:22", "19:35", "06:17", "08:05", "23:35", "07:00", "22:19", "11:11", "04:04", "12:12", "15:15", "01:36", "21:58", "08:08", "08:39", "01:36", "00:23", "11:13", "11:34", "04:40", "23:32", "00:42", "10:35", "02:15", "01:12", "21:16", "01:09", "08:40", "05:05", "22:30", "09:09", "08:28", "08:36", "20:55", "12:31", "21:14", "09:06", "02:33", "11:37", "07:07", "22:43"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> moments = {"11:50", "05:41", "01:11", "14:55", "08:45", "19:47", "00:15", "13:47", "04:45", "19:58", "00:22", "15:39", "18:18", "15:51", "18:52", "19:36", "12:12", "03:58", "06:28", "23:23", "14:18", "19:31", "03:28", "07:07", "22:55", "07:00", "18:12", "07:59", "09:09", "03:03", "17:32", "22:15", "11:29", "18:55", "02:55", "14:41", "11:42", "18:02", "20:50", "19:50", "00:00", "22:36", "02:05", "22:00", "12:00", "08:27", "00:43", "03:16", "00:23", "09:24"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> moments = {"00:01", "19:19", "00:53", "23:15", "21:09", "02:33", "01:13", "11:58", "05:05", "03:33", "05:05", "21:37", "02:04", "14:42", "23:37", "15:11", "12:32", "16:31", "05:14", "10:27", "01:08", "00:11", "00:57", "11:53", "05:06", "12:32", "14:18", "17:54", "04:08", "10:38", "22:27", "01:00", "11:02", "00:31", "11:11", "09:11", "03:03", "23:01", "18:34", "12:02", "05:05", "02:21", "10:09", "14:41", "03:03", "02:44", "18:18", "18:18", "12:50", "18:46"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> moments = {"12:10"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"11:11", "14:55"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> moments = {"03:05", "11:11", "22:44"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> moments = {"02:36", "08:37", "22:14", "15:50"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"06:44", "03:51", "11:11", "04:04", "11:44"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"01:11", "20:02", "13:56", "06:48", "02:11", "18:36"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> moments = {"20:02", "00:00", "15:33", "03:48", "20:10", "22:22", "16:23"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> moments = {"09:09", "14:44", "08:44", "19:03", "03:30", "21:31", "00:25", "18:51"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> moments = {"08:22", "15:02", "12:21", "06:06", "21:47", "05:40", "22:00", "22:22", "19:19"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> moments = {"22:15", "17:10", "11:11", "18:31", "10:22", "02:14", "09:51", "22:11", "20:32", "00:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> moments = {"00:16", "15:51", "05:50", "07:27", "02:02", "02:08", "06:26", "23:42", "00:51", "23:23", "02:14"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> moments = {"22:22", "00:02", "00:00", "23:32", "11:11", "21:12", "00:00", "22:22", "07:55", "22:22", "23:00", "12:21"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> moments = {"01:58", "16:16", "21:46", "20:42", "05:00", "14:28", "11:42", "17:17", "12:33", "11:39", "11:44", "01:47", "09:20"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> moments = {"00:26", "00:15", "13:34", "11:52", "09:22", "14:19", "13:50", "12:21", "10:28", "00:00", "01:53", "18:40", "04:16", "09:08"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> moments = {"20:02", "16:00", "02:44", "03:34", "05:44", "11:12", "11:24", "16:16", "11:44", "22:16", "21:34", "02:13", "11:13", "13:49", "20:38"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> moments = {"11:32", "04:52", "15:15", "14:07", "22:21", "04:27", "04:47", "06:06", "18:48", "03:15", "03:57", "14:52", "00:05", "22:01", "17:05", "14:14"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"22:53", "22:22", "06:33", "00:33", "11:11", "00:00", "01:00", "00:33", "04:59", "09:43", "10:33", "21:43", "07:50", "18:22", "18:24", "10:49", "00:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> moments = {"20:22", "11:14", "01:55", "11:19", "09:31", "22:57", "22:55", "00:25", "20:06", "02:14", "04:54", "13:29", "15:11", "09:29", "00:56", "05:30", "00:56", "05:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> moments = {"22:58", "15:28", "15:10", "13:13", "01:11", "03:21", "09:32", "07:04", "06:38", "18:14", "16:45", "11:51", "11:37", "14:42", "01:21", "05:01", "10:42", "08:35", "15:29"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> moments = {"11:12", "14:14", "11:00", "18:18", "08:08", "13:13", "11:22", "22:22", "15:40", "20:02", "12:49", "23:39", "11:11", "00:00", "11:11", "08:08", "16:54", "11:11", "04:40", "03:03"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> moments = {"01:15", "18:51", "05:27", "17:54", "22:34", "17:17", "18:29", "10:11", "13:33", "18:00", "18:46", "01:10", "23:40", "19:19", "13:17", "02:24", "12:23", "13:25", "09:08", "20:51", "22:26"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> moments = {"10:52", "02:54", "21:12", "22:03", "00:00", "20:02", "04:56", "00:51", "04:40", "10:35", "11:49", "11:01", "10:44", "21:20", "11:51", "21:55", "19:19", "11:14", "01:24", "11:53", "02:20", "04:20"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> moments = {"09:50", "14:08", "12:28", "22:12", "05:33", "18:09", "05:48", "00:00", "06:22", "20:26", "12:34", "21:52", "18:18", "23:45", "21:21", "00:00", "17:54", "23:37", "09:43", "11:11", "08:17", "11:11", "15:43"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> moments = {"23:51", "11:11", "04:26", "04:04", "15:51", "23:55", "15:51", "22:33", "11:04", "08:44", "11:11", "06:06", "11:11", "11:33", "17:44", "21:00", "05:00", "23:58", "23:32", "00:32", "17:55", "10:10", "11:44", "00:55"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> moments = {"22:04", "01:01", "15:19", "15:08", "04:04", "02:51", "17:31", "21:44", "11:56", "02:02", "09:29", "22:06", "22:33", "18:20", "21:55", "04:17", "02:02", "20:02", "19:25", "00:35", "00:00", "21:25", "22:59", "09:06", "11:21"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> moments = {"18:18", "16:10", "02:26", "05:09", "13:07", "15:45", "19:03", "01:21", "08:59", "02:27", "20:41", "23:32", "03:30", "11:59", "21:57", "18:18", "22:04", "22:58", "01:00", "20:33", "16:23", "07:07", "00:14", "04:01", "19:55", "11:02"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> moments = {"02:02", "09:00", "22:16", "19:53", "10:22", "23:33", "10:01", "08:55", "08:57", "11:11", "11:00", "07:38", "02:44", "17:35", "14:56", "22:22", "21:11", "09:44", "02:29", "10:09", "19:22", "08:33", "17:49", "02:18", "06:06", "05:54", "09:46"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> moments = {"21:22", "10:16", "03:30", "12:21", "07:00", "00:15", "21:11", "04:04", "15:48", "03:03", "11:12", "10:10", "22:22", "22:25", "22:22", "00:00", "06:13", "18:18", "11:11", "10:41", "15:33", "16:55", "11:05", "22:22", "00:39", "15:15", "13:13", "20:29"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> moments = {"22:22", "11:11", "03:44", "12:21", "22:22", "20:49", "23:33", "07:07", "04:44", "23:32", "22:22", "01:10", "00:00", "08:35", "11:11", "15:55", "04:04", "00:11", "13:33", "00:58", "11:11", "04:40", "22:22", "08:00", "15:51", "00:00", "19:19", "11:11", "22:48"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> moments = {"22:33", "03:30", "00:00", "00:59", "05:12", "12:33", "00:06", "17:17", "03:43", "09:48", "21:43", "07:17", "19:04", "02:33", "17:52", "22:22", "05:11", "09:00", "21:55", "15:20", "00:00", "11:40", "02:02", "00:00", "15:51", "22:37", "02:20", "16:16", "09:11", "09:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> moments = {"22:33", "04:40", "11:44", "18:42", "02:02", "11:27", "16:16", "16:16", "01:47", "00:00", "10:10", "01:25", "02:49", "00:00", "05:41", "12:12", "10:01", "03:30", "21:22", "10:10", "16:16", "05:50", "21:12", "21:55", "14:23", "22:15", "13:13", "10:01", "10:45", "00:31", "21:03"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"08:47", "23:32", "07:07", "01:24", "14:14", "06:06", "11:48", "00:39", "11:30", "09:34", "22:20", "00:54", "20:02", "08:11", "22:34", "08:45", "23:07", "21:12", "04:40", "12:21", "19:02", "11:30", "21:45", "04:04", "11:00", "11:12", "22:43", "16:16", "18:14", "10:11", "12:21", "11:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> moments = {"04:53", "22:26", "04:40", "11:11", "12:12", "00:58", "14:57", "21:45", "01:45", "19:33", "09:09", "02:20", "05:12", "22:22", "04:38", "00:29", "04:44", "22:44", "22:36", "15:05", "13:13", "03:59", "22:56", "03:11", "06:57", "22:22", "06:12", "02:23", "08:11", "02:00", "23:32", "17:38", "11:26"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> moments = {"04:55", "01:31", "05:13", "21:55", "18:45", "12:32", "02:37", "23:46", "05:58", "17:17", "21:51", "10:45", "09:00", "01:11", "04:26", "00:00", "20:02", "11:48", "19:32", "00:57", "00:45", "15:55", "01:11", "04:04", "22:45", "15:34", "20:24", "15:39", "21:47", "08:56", "10:12", "12:58", "12:26", "20:49"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
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
    vector<string> moments = {"10:10", "22:22", "22:06", "14:41", "03:30", "06:06", "10:43", "17:38", "02:47", "13:08", "08:08", "17:53", "04:04", "08:00", "03:03", "00:00", "20:00", "21:21", "03:30", "04:00", "00:33", "11:11", "09:03", "22:41", "11:13", "17:17", "00:00", "22:22", "16:16", "05:50", "22:44", "18:18", "04:38", "14:04", "00:53"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> moments = {"20:11", "17:50", "23:20", "18:58", "11:38", "08:24", "13:40", "00:00", "05:52", "05:51", "12:12", "18:26", "16:21", "23:55", "22:22", "16:09", "10:16", "01:21", "05:50", "18:00", "05:45", "06:55", "10:01", "22:00", "05:50", "08:57", "23:21", "16:41", "01:33", "02:18", "06:08", "16:16", "20:20", "08:55", "22:44", "20:20"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> moments = {"12:45", "11:31", "02:59", "17:22", "12:35", "09:07", "23:44", "13:20", "19:39", "19:32", "09:09", "10:10", "12:12", "16:55", "04:40", "21:24", "14:14", "15:58", "22:43", "00:25", "15:15", "18:18", "23:46", "06:06", "17:19", "22:33", "11:42", "16:16", "13:44", "12:21", "03:03", "00:17", "18:57", "11:11", "12:10", "22:11", "14:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> moments = {"15:23", "14:14", "08:08", "18:34", "13:28", "05:17", "08:08", "10:10", "23:42", "12:00", "17:17", "07:07", "11:44", "12:12", "11:11", "10:10", "22:55", "15:50", "09:38", "04:40", "11:33", "15:07", "21:40", "10:49", "03:07", "10:36", "00:11", "17:57", "06:33", "23:49", "13:48", "19:46", "10:07", "07:07", "04:22", "00:00", "17:17", "23:58"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> moments = {"00:25", "12:59", "13:27", "08:08", "03:33", "03:28", "13:40", "18:18", "21:21", "15:52", "13:37", "00:43", "17:08", "00:00", "03:08", "11:27", "09:49", "16:59", "03:43", "13:39", "00:36", "07:54", "10:46", "19:19", "00:45", "22:22", "08:32", "17:26", "04:22", "08:11", "00:08", "00:33", "23:23", "07:07", "22:39", "22:17", "14:25", "01:11", "12:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> moments = {"00:00", "11:33", "06:11", "22:22", "05:50", "11:11", "01:10", "00:25", "01:10", "00:57", "11:11", "11:11", "23:05", "08:00", "11:33", "19:19", "05:50", "16:16", "05:50", "10:10", "11:11", "00:28", "07:07", "11:11", "19:19", "06:06", "11:11", "15:33", "11:11", "08:08", "22:33", "00:45", "02:22", "15:33", "00:44", "02:20", "00:00", "15:51", "15:55", "05:55"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> moments = {"04:04", "09:45", "08:58", "11:28", "08:08", "18:18", "16:53", "04:55", "04:51", "07:02", "22:31", "21:57", "02:33", "22:22", "11:28", "22:28", "00:27", "13:12", "22:31", "16:30", "23:55", "16:44", "10:20", "12:21", "10:01", "15:44", "10:19", "15:55", "19:15", "11:06", "00:47", "11:55", "04:04", "19:19", "06:03", "07:03", "18:45", "08:56", "00:27", "18:28", "02:28"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> moments = {"22:18", "22:11", "20:15", "02:43", "08:01", "19:42", "12:30", "07:05", "17:17", "08:05", "15:11", "16:16", "00:33", "03:59", "14:46", "14:33", "11:45", "09:06", "15:25", "11:11", "23:28", "08:12", "01:53", "12:38", "19:38", "22:41", "23:23", "09:09", "20:00", "02:50", "09:00", "08:11", "23:12", "02:20", "09:29", "16:47", "07:11", "12:33", "21:21", "05:05", "05:00", "12:21"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> moments = {"10:01", "16:38", "11:11", "15:44", "11:33", "17:17", "20:25", "08:08", "19:14", "04:30", "09:03", "02:17", "23:20", "22:31", "14:07", "12:17", "04:33", "09:41", "11:11", "13:10", "21:33", "16:45", "22:29", "18:44", "20:09", "03:50", "17:27", "12:59", "07:03", "05:57", "14:32", "04:50", "14:11", "12:21", "17:49", "08:22", "13:24", "03:55", "10:01", "02:20", "20:58", "13:22", "14:14"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> moments = {"11:11", "10:01", "09:09", "19:09", "20:44", "10:59", "23:23", "22:31", "22:11", "16:20", "10:12", "11:33", "17:39", "17:55", "22:06", "19:19", "23:11", "07:36", "10:44", "00:00", "20:46", "11:23", "11:11", "20:39", "19:14", "11:27", "00:05", "12:18", "00:56", "22:57", "00:50", "11:34", "13:31", "07:19", "03:33", "04:46", "08:08", "22:33", "23:18", "21:44", "23:22", "18:32", "10:33", "18:25"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> moments = {"21:03", "07:07", "22:10", "11:30", "21:55", "08:55", "13:20", "23:00", "17:38", "15:23", "22:21", "14:34", "01:25", "11:48", "11:54", "11:37", "08:08", "01:11", "17:24", "05:17", "08:59", "22:44", "06:22", "11:52", "21:02", "18:35", "20:43", "09:39", "20:04", "04:16", "21:00", "15:37", "15:15", "07:04", "19:01", "11:11", "07:57", "01:01", "11:44", "10:01", "00:44", "20:11", "12:06", "02:37", "03:40"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> moments = {"06:51", "22:09", "17:30", "21:22", "01:29", "21:56", "16:16", "13:05", "16:16", "09:23", "19:48", "18:58", "08:09", "06:00", "01:54", "10:10", "14:54", "22:09", "22:09", "15:53", "16:49", "08:08", "18:25", "20:02", "05:55", "23:18", "18:46", "14:21", "00:00", "07:23", "12:55", "01:10", "06:06", "07:07", "10:38", "03:33", "22:09", "02:17", "01:33", "11:53", "06:19", "13:47", "04:25", "11:26", "11:17", "03:30"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> moments = {"01:10", "02:45", "06:53", "15:15", "16:48", "00:22", "23:29", "04:44", "19:05", "15:30", "12:49", "04:55", "16:13", "14:54", "09:09", "04:43", "06:06", "22:22", "16:00", "00:06", "20:08", "02:39", "01:20", "22:22", "16:58", "14:41", "18:18", "12:11", "15:30", "00:03", "17:16", "04:46", "20:11", "22:22", "02:36", "22:44", "22:01", "13:24", "11:11", "04:04", "11:11", "16:33", "15:44", "14:48", "09:09", "21:18", "05:45"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> moments = {"12:25", "13:34", "11:11", "18:48", "08:34", "05:01", "16:16", "15:11", "05:50", "07:36", "04:40", "12:22", "00:01", "23:23", "13:31", "04:01", "20:51", "13:31", "21:32", "09:40", "09:33", "13:25", "12:25", "01:44", "13:30", "06:33", "22:22", "14:47", "04:54", "00:37", "02:21", "06:28", "20:44", "23:59", "22:57", "04:32", "09:09", "05:54", "12:44", "14:07", "13:55", "19:27", "09:49", "21:00", "17:08", "01:11", "11:06", "22:51"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> moments = {"04:36", "14:00", "19:00", "11:11", "13:31", "12:54", "10:21", "09:09", "11:55", "14:35", "14:58", "17:35", "19:08", "10:02", "10:46", "02:07", "08:06", "13:13", "04:59", "00:00", "00:00", "22:49", "16:16", "10:10", "19:37", "15:25", "22:27", "21:23", "19:53", "03:03", "16:25", "20:07", "23:33", "01:05", "22:59", "17:59", "19:19", "22:37", "19:55", "01:39", "22:22", "06:46", "11:11", "15:58", "16:16", "08:38", "03:33", "18:44", "08:18"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> moments = {"00:59", "23:31", "02:20", "22:44", "06:06", "21:55", "19:56", "12:21", "12:30", "12:21", "00:56", "04:26", "11:02", "00:00", "05:17", "19:19", "18:36", "09:10", "02:51", "07:55", "08:33", "22:22", "02:43", "03:30", "16:01", "16:16", "14:44", "00:00", "02:55", "08:11", "02:16", "22:19", "18:16", "08:08", "10:54", "01:10", "06:06", "22:43", "03:49", "18:18", "10:00", "05:05", "00:33", "04:40", "06:22", "09:43", "18:35", "10:01", "22:35", "13:10"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> moments = {"22:02", "12:17", "14:14", "08:58", "03:30", "10:01", "08:04", "06:11", "21:12", "03:11", "09:44", "07:07", "01:28", "11:19", "18:02", "16:00", "20:02", "06:06", "20:06", "08:33", "11:11", "21:44", "00:55", "11:11", "00:00", "20:00", "21:21", "00:00", "07:28", "04:53", "18:18", "07:07", "20:14", "02:20", "12:40", "21:00", "03:26", "21:12", "11:11", "23:33", "11:11", "06:06", "14:09", "02:20", "00:44", "11:36", "21:41", "22:04", "19:22", "00:58"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> moments = {"17:17", "18:33", "02:20", "11:11", "22:22", "09:17", "20:27", "11:11", "00:00", "15:05", "22:22", "05:44", "18:04", "11:14", "22:22", "12:12", "01:10", "05:05", "01:10", "20:22", "16:32", "12:31", "10:05", "01:10", "13:21", "18:33", "00:37", "20:03", "15:17", "00:11", "10:41", "00:33", "23:56", "00:00", "10:10", "04:20", "09:55", "22:36", "12:33", "07:31", "04:04", "00:55", "12:58", "10:22", "22:22", "00:00", "21:00", "17:33", "14:17", "00:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> moments = {"00:52", "05:00", "04:04", "11:48", "01:10", "03:30", "11:58", "19:56", "23:32", "18:18", "06:19", "05:05", "22:22", "06:35", "18:18", "22:22", "19:24", "19:19", "11:11", "00:00", "00:56", "18:46", "15:51", "22:22", "12:58", "20:23", "11:11", "00:11", "14:14", "02:33", "02:02", "20:29", "22:45", "12:02", "23:23", "11:05", "20:02", "12:37", "17:17", "16:16", "03:30", "13:55", "02:02", "22:22", "04:40", "08:08", "05:50", "23:21", "17:17", "14:21"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> moments = {"15:06", "10:01", "01:52", "22:16", "17:11", "17:17", "03:33", "17:44", "20:55", "04:11", "22:11", "16:02", "00:53", "07:07", "11:11", "00:55", "23:06", "22:30", "16:51", "21:24", "04:41", "16:22", "05:00", "00:05", "19:00", "11:14", "20:02", "22:22", "05:03", "13:39", "17:14", "15:41", "15:42", "05:00", "03:32", "01:12", "07:07", "07:07", "19:27", "09:09", "22:22", "00:09", "00:00", "00:25", "11:40", "11:57", "00:00", "00:44", "11:11", "00:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> moments = {"03:03", "04:40", "19:35", "08:37", "09:20", "00:10", "00:00", "17:39", "03:30", "22:22", "01:01", "04:40", "02:42", "21:21", "21:12", "00:00", "00:22", "11:11", "14:08", "10:55", "04:56", "22:33", "21:28", "16:16", "11:11", "21:21", "00:00", "19:52", "00:00", "11:11", "11:11", "12:21", "05:00", "11:11", "01:24", "06:44", "01:24", "16:15", "02:02", "22:05", "15:51", "14:41", "16:16", "03:30", "16:22", "00:30", "00:00", "15:15", "21:59", "20:02"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> moments = {"09:22", "17:55", "12:10", "04:40", "11:49", "09:09", "19:19", "22:11", "14:14", "22:20", "07:15", "16:24", "07:11", "19:19", "11:01", "13:47", "05:52", "15:15", "18:10", "12:12", "14:41", "11:26", "11:02", "22:58", "10:01", "21:21", "00:00", "01:46", "17:17", "05:50", "03:08", "07:22", "16:55", "00:00", "18:51", "08:08", "18:09", "16:04", "00:00", "06:47", "21:21", "12:35", "11:21", "14:22", "11:44", "02:34", "03:00", "10:01", "05:47", "06:06"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> moments = {"12:21", "04:40", "11:59", "23:32", "07:16", "16:49", "10:51", "05:42", "22:22", "05:50", "11:53", "09:55", "01:33", "22:25", "16:55", "01:10", "00:33", "13:21", "08:44", "12:30", "03:05", "14:02", "11:22", "21:21", "00:00", "19:37", "18:44", "21:28", "09:09", "22:22", "02:02", "11:21", "14:41", "11:22", "22:45", "23:09", "23:23", "16:12", "21:38", "16:47", "00:33", "14:14", "11:33", "22:55", "09:44", "22:22", "06:06", "22:04", "20:02", "18:18"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> moments = {"15:06", "08:13", "07:55", "18:45", "23:55", "02:20", "22:59", "04:04", "16:22", "03:26", "18:31", "02:21", "04:04", "23:31", "09:09", "17:17", "20:58", "22:22", "22:13", "19:00", "15:07", "21:00", "17:22", "17:17", "06:06", "23:11", "11:16", "11:11", "21:21", "01:10", "21:00", "11:37", "07:07", "16:16", "05:00", "20:20", "13:31", "23:55", "00:11", "23:41", "10:09", "12:18", "19:19", "18:55", "15:25", "03:03", "16:19", "07:07", "19:33", "21:21"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> moments = {"18:18", "11:11", "03:30", "11:18", "16:16", "12:12", "14:41", "10:08", "06:06", "07:07", "04:04", "00:41", "13:38", "19:19", "11:11", "14:35", "03:03", "08:00", "03:01", "22:57", "15:02", "04:40", "01:10", "17:00", "00:33", "12:21", "10:01", "13:13", "14:27", "02:19", "12:21", "02:30", "11:22", "08:08", "03:30", "15:22", "08:33", "09:00", "07:39", "10:34", "03:55", "12:12", "19:00", "00:00", "15:42", "01:22", "11:48", "09:09", "00:00", "11:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> moments = {"23:44", "10:24", "23:32", "15:55", "17:57", "08:00", "12:21", "20:43", "14:41", "20:02", "10:39", "13:55", "01:43", "07:07", "20:33", "00:00", "05:14", "00:00", "08:13", "01:16", "03:23", "04:52", "22:00", "11:11", "15:33", "14:41", "13:55", "20:47", "01:01", "07:07", "22:22", "00:55", "21:25", "10:01", "22:09", "22:22", "06:06", "16:16", "08:44", "23:23", "03:20", "17:50", "00:00", "17:17", "01:10", "00:00", "08:33", "22:22", "17:50", "00:33"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> moments = {"00:00", "02:20", "11:11", "11:11", "16:16", "21:12", "22:22", "11:11", "00:00", "01:10", "11:11", "04:40", "01:10", "22:22", "14:41", "00:00", "00:00", "22:22", "14:41", "00:00", "11:11", "11:11", "00:00", "01:10", "00:00", "00:00", "19:19", "22:22", "00:00", "13:31", "11:11", "11:11", "17:17", "06:06", "00:00", "03:30", "00:00", "02:20", "21:12", "15:51", "00:00", "22:22", "22:22", "23:32", "00:00", "21:12", "02:20", "07:07", "22:22", "11:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> moments = {"23:32"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> moments = {"22:22", "22:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> moments = {"12:11", "22:22", "00:01", "03:30", "15:15", "16:00", "20:02"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> moments = {"11:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> moments = {"00:01", "00:01", "11:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> moments = {"12:21", "11:10", "11:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> moments = {"01:01"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> moments = {"12:11", "22:22", "00:01", "03:30", "15:15", "16:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> moments = {"22:33"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> moments = {"00:44"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> moments = {"12:11", "22:22", "00:01", "03:30", "15:15", "16:00", "11:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> moments = {"04:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> moments = {"13:22"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> moments = {"00:11"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> moments = {"12:11", "22:22", "00:01", "03:30", "15:15", "11:22", "01:10", "10:10"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> moments = {"11:11", "22:11", "23:00"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> moments = {"23:05"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> moments = {"12:12", "12:21"};
    LuckyCounter* pObj = new LuckyCounter();
    clock_t start = clock();
    int result = pObj->countLuckyMoments(moments);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22773625&rd=14243&pm=11229
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class LuckyCounter {
public:
  int countLuckyMoments(vector <string> m) {
    string s;
    int i,j=0;
    bool flag=false;
    for(i=0;i<m.size();i++){
        s=m[i];
        flag=false;
        if(s[0]==s[3] && s[1]==s[4])
          flag=true;
        if(s[0]==s[1] && s[3]==s[4])
          flag=true;
        if(s[0]==s[4] && s[1]==s[3])
          flag=true;
        if(flag)
          j++;
    }
    return j;        
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/