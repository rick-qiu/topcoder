/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1647
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

class Iditarod {
public:
    int avgMinutes(vector<string> times);
};

int Iditarod::avgMinutes(vector<string> times) {
    int ret;
    return ret;
}


int test0() {
    vector<string> times = {"12:00 PM, DAY 1", "12:01 PM, DAY 1"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 241;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> times = {"12:00 AM, DAY 2"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 960;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> times = {"02:00 PM, DAY 19", "02:00 PM, DAY 20", "01:58 PM, DAY 20"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 27239;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> times = {"12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> times = {"12:03 PM, DAY 9", "01:03 PM, DAY 10"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 12513;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> times = {"12:04 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1", "12:05 PM, DAY 1"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> times = {"12:03 AM, DAY 9", "01:03 PM, DAY 10"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 12153;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> times = {"12:03 PM, DAY 9", "01:04 PM, DAY 10"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 12514;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> times = {"11:03 PM, DAY 9", "01:03 PM, DAY 10", "01:03 PM, DAY 10"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 12983;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> times = {"11:59 PM, DAY 99"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 142079;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> times = {"07:59 PM, DAY 1"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 719;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> times = {"11:59 AM, DAY 1", "08:01 AM, DAY 1"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> times = {"02:00 PM, DAY 19", "02:00 PM, DAY 20", "01:58 PM, DAY 20", "12:12 PM, DAY 1"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 20493;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> times = {"10:00 PM, DAY 99", "09:00 PM, DAY 23", "11:58 PM, DAY 1"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 58459;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> times = {"03:20 AM, DAY 10", "09:17 PM, DAY 39", "09:33 PM, DAY 87", "04:25 PM, DAY 41", "04:15 PM, DAY 22", "06:06 AM, DAY 3", "05:09 AM, DAY 48", "09:41 PM, DAY 63", "12:50 AM, DAY 62", "10:21 AM, DAY 77", "11:53 AM, DAY 75", "05:32 AM, DAY 53", "08:06 PM, DAY 29", "10:22 PM, DAY 23", "07:12 PM, DAY 25", "06:22 PM, DAY 11", "04:35 PM, DAY 76", "10:54 PM, DAY 76", "01:25 PM, DAY 96"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 68366;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> times = {"06:31 PM, DAY 48", "11:24 PM, DAY 66", "05:50 AM, DAY 19", "06:55 PM, DAY 32", "05:39 PM, DAY 24", "03:47 PM, DAY 22", "05:33 PM, DAY 60", "01:07 PM, DAY 8", "10:05 AM, DAY 49", "10:38 PM, DAY 58", "11:44 PM, DAY 19", "08:36 AM, DAY 89", "11:56 PM, DAY 20", "08:47 AM, DAY 78", "03:39 AM, DAY 83", "11:10 AM, DAY 70", "03:47 AM, DAY 83", "10:01 AM, DAY 46", "12:11 AM, DAY 33"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 67634;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> times = {"07:47 AM, DAY 11", "09:56 PM, DAY 87", "06:34 AM, DAY 25", "08:51 PM, DAY 67", "02:51 PM, DAY 79", "06:35 PM, DAY 63", "09:10 PM, DAY 97", "03:23 AM, DAY 62", "11:11 AM, DAY 31", "10:54 PM, DAY 60", "11:53 PM, DAY 40", "08:43 PM, DAY 7", "08:44 PM, DAY 43", "04:20 AM, DAY 89", "04:57 PM, DAY 61", "07:49 PM, DAY 22", "04:22 AM, DAY 37", "05:55 AM, DAY 98", "10:56 AM, DAY 8", "02:19 AM, DAY 90", "01:11 PM, DAY 15", "09:26 PM, DAY 61", "12:30 PM, DAY 56", "04:20 AM, DAY 65", "06:33 PM, DAY 47", "05:15 PM, DAY 7", "07:00 PM, DAY 22", "02:14 AM, DAY 33", "09:03 AM, DAY 46", "10:24 PM, DAY 23", "08:42 AM, DAY 56", "02:32 PM, DAY 3", "02:32 AM, DAY 61", "04:52 PM, DAY 96", "11:29 PM, DAY 93", "10:40 PM, DAY 26", "01:18 AM, DAY 27"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 69505;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> times = {"11:35 PM, DAY 68", "01:01 AM, DAY 6", "06:16 PM, DAY 64", "07:28 PM, DAY 33", "12:19 PM, DAY 57", "11:06 AM, DAY 69", "06:35 PM, DAY 76", "10:55 PM, DAY 44", "01:24 PM, DAY 90", "07:14 PM, DAY 92", "08:56 PM, DAY 93", "05:12 PM, DAY 9", "10:31 PM, DAY 62"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 83615;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> times = {"07:26 AM, DAY 76", "02:21 AM, DAY 35", "03:18 AM, DAY 23", "12:38 PM, DAY 20", "07:09 AM, DAY 71", "02:22 AM, DAY 30", "07:59 AM, DAY 84", "06:57 AM, DAY 38", "07:12 AM, DAY 80", "08:50 PM, DAY 61", "02:10 AM, DAY 18", "08:41 PM, DAY 75", "03:40 AM, DAY 31", "06:56 PM, DAY 59", "04:32 PM, DAY 5", "08:53 AM, DAY 82", "02:59 AM, DAY 28", "02:59 AM, DAY 81", "09:05 PM, DAY 7", "04:09 AM, DAY 36", "10:07 PM, DAY 1", "07:48 AM, DAY 7", "07:16 AM, DAY 93", "01:06 PM, DAY 25", "12:03 PM, DAY 63", "08:15 AM, DAY 42", "02:25 AM, DAY 49", "02:26 PM, DAY 18"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 62322;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> times = {"06:35 PM, DAY 51", "03:37 AM, DAY 62", "10:03 PM, DAY 63", "03:03 AM, DAY 57"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 82670;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> times = {"10:54 PM, DAY 19", "12:21 AM, DAY 87", "08:44 PM, DAY 49", "03:56 PM, DAY 41", "11:16 AM, DAY 99", "07:29 AM, DAY 97", "03:42 AM, DAY 15", "03:53 AM, DAY 31", "01:34 PM, DAY 26", "11:02 AM, DAY 9", "11:51 AM, DAY 88", "01:45 AM, DAY 94", "11:25 PM, DAY 8", "04:41 PM, DAY 3", "04:00 PM, DAY 52", "01:51 AM, DAY 40", "03:29 AM, DAY 82", "05:22 AM, DAY 45", "10:30 PM, DAY 62", "03:45 AM, DAY 13", "08:27 AM, DAY 11", "12:57 AM, DAY 90", "07:13 AM, DAY 23", "09:21 AM, DAY 57", "07:28 PM, DAY 96", "10:38 AM, DAY 42", "01:02 PM, DAY 45", "10:07 PM, DAY 69", "01:02 AM, DAY 59", "12:36 PM, DAY 60", "03:56 AM, DAY 3", "11:17 PM, DAY 57", "03:25 PM, DAY 92", "02:33 AM, DAY 70", "04:17 PM, DAY 98", "05:44 PM, DAY 47", "04:31 AM, DAY 94", "02:15 PM, DAY 81", "05:17 PM, DAY 83", "04:53 PM, DAY 50", "09:10 AM, DAY 35", "10:21 AM, DAY 90", "02:21 PM, DAY 68"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 78464;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> times = {"01:08 AM, DAY 35", "06:02 PM, DAY 93", "03:21 AM, DAY 53", "01:34 PM, DAY 59", "02:29 PM, DAY 90", "07:06 AM, DAY 55", "04:20 AM, DAY 73", "06:46 AM, DAY 8", "04:55 PM, DAY 70", "09:04 PM, DAY 81", "01:52 PM, DAY 80", "10:31 PM, DAY 51", "12:31 PM, DAY 47", "10:29 PM, DAY 3"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 80923;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> times = {"02:14 PM, DAY 7", "05:02 PM, DAY 93", "08:11 AM, DAY 58", "05:12 PM, DAY 38", "03:30 PM, DAY 11", "12:24 AM, DAY 73", "03:37 AM, DAY 26", "04:11 PM, DAY 86", "07:31 AM, DAY 14", "08:06 PM, DAY 40", "10:51 AM, DAY 96", "07:50 AM, DAY 68", "12:37 PM, DAY 72", "03:46 AM, DAY 21", "01:42 AM, DAY 92", "06:33 AM, DAY 43", "08:02 AM, DAY 30", "04:42 PM, DAY 25", "05:06 PM, DAY 48", "11:02 AM, DAY 83", "11:37 AM, DAY 7", "01:26 PM, DAY 93", "10:36 PM, DAY 83", "05:47 PM, DAY 77", "02:24 AM, DAY 65", "09:03 AM, DAY 50", "02:15 PM, DAY 25", "09:11 PM, DAY 91"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 76698;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> times = {"06:58 AM, DAY 36", "09:38 PM, DAY 48", "12:15 AM, DAY 32", "01:53 PM, DAY 95", "08:20 PM, DAY 11", "09:57 PM, DAY 60", "05:37 AM, DAY 14", "06:44 AM, DAY 55", "05:05 PM, DAY 55", "02:31 PM, DAY 38", "11:37 AM, DAY 88", "09:08 PM, DAY 12", "04:17 AM, DAY 62", "11:34 PM, DAY 25", "12:21 PM, DAY 12", "02:20 PM, DAY 2", "04:09 AM, DAY 86", "01:02 PM, DAY 64", "11:01 AM, DAY 16", "09:26 PM, DAY 53", "07:58 PM, DAY 82", "01:31 PM, DAY 26", "11:10 AM, DAY 98", "11:21 PM, DAY 75", "08:03 PM, DAY 37", "07:47 AM, DAY 22", "01:33 PM, DAY 40", "05:39 PM, DAY 10", "12:34 AM, DAY 33", "11:45 AM, DAY 73", "12:12 AM, DAY 83", "01:40 AM, DAY 14", "11:27 AM, DAY 76", "07:06 AM, DAY 89", "07:31 PM, DAY 89", "08:36 PM, DAY 57", "02:58 AM, DAY 58", "10:23 PM, DAY 93", "08:11 PM, DAY 12", "01:51 AM, DAY 27", "06:45 AM, DAY 85"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 70595;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> times = {"09:08 PM, DAY 18", "12:14 PM, DAY 45", "08:25 PM, DAY 3", "03:55 PM, DAY 80", "11:09 AM, DAY 7"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 43114;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> times = {"03:47 PM, DAY 27", "10:10 PM, DAY 80", "03:24 AM, DAY 39", "03:03 PM, DAY 24", "03:33 AM, DAY 18", "11:37 PM, DAY 79", "12:31 PM, DAY 89", "04:55 PM, DAY 21", "05:57 PM, DAY 50", "10:33 PM, DAY 5", "07:27 AM, DAY 36"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 60223;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> times = {"07:30 PM, DAY 61", "03:20 AM, DAY 91", "12:46 PM, DAY 72", "06:49 AM, DAY 45", "04:59 PM, DAY 64", "12:02 PM, DAY 54", "01:04 AM, DAY 2", "12:51 AM, DAY 70", "09:20 AM, DAY 58", "04:50 AM, DAY 48", "03:55 AM, DAY 35", "02:02 PM, DAY 45", "05:09 PM, DAY 2", "11:47 AM, DAY 26", "02:51 AM, DAY 68", "02:47 PM, DAY 57", "11:16 PM, DAY 32", "10:06 AM, DAY 11", "07:48 PM, DAY 90", "07:47 PM, DAY 42", "05:19 PM, DAY 19", "02:44 AM, DAY 61"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 67672;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> times = {"07:46 AM, DAY 82", "10:21 PM, DAY 90", "02:45 PM, DAY 61", "06:38 AM, DAY 50", "04:36 PM, DAY 16", "04:18 AM, DAY 23", "10:36 AM, DAY 24", "03:00 PM, DAY 67", "08:17 PM, DAY 50", "01:00 PM, DAY 41", "09:08 AM, DAY 64", "07:17 PM, DAY 55", "06:02 AM, DAY 70", "03:08 PM, DAY 24", "07:55 AM, DAY 23", "12:05 PM, DAY 29", "09:05 PM, DAY 31", "02:26 AM, DAY 9", "06:05 PM, DAY 70", "11:33 AM, DAY 13", "03:30 PM, DAY 75", "02:32 AM, DAY 45", "05:47 AM, DAY 33", "10:00 AM, DAY 15", "03:19 AM, DAY 11", "11:49 PM, DAY 76", "12:16 AM, DAY 61", "04:41 AM, DAY 67", "07:30 AM, DAY 89", "07:26 AM, DAY 78", "02:54 PM, DAY 78", "05:02 AM, DAY 56", "05:09 PM, DAY 86", "10:15 PM, DAY 80", "05:13 AM, DAY 30", "04:02 AM, DAY 13", "02:16 PM, DAY 10", "09:25 AM, DAY 21", "10:26 AM, DAY 39", "11:23 PM, DAY 44", "01:05 AM, DAY 57", "03:08 AM, DAY 48", "11:24 AM, DAY 49", "06:12 AM, DAY 7", "11:10 PM, DAY 39", "09:50 PM, DAY 7", "11:58 AM, DAY 29", "02:15 PM, DAY 45", "05:30 PM, DAY 85", "08:18 PM, DAY 54"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 65577;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> times = {"03:56 AM, DAY 85", "11:46 AM, DAY 18", "08:45 PM, DAY 30", "02:25 PM, DAY 87", "11:50 PM, DAY 73", "02:56 AM, DAY 76", "09:54 AM, DAY 98", "12:47 PM, DAY 4", "02:07 PM, DAY 41", "06:08 AM, DAY 68", "01:24 AM, DAY 69", "02:20 PM, DAY 74", "07:15 AM, DAY 72", "07:38 PM, DAY 52", "01:52 PM, DAY 78", "12:25 PM, DAY 77", "12:36 AM, DAY 54", "02:46 AM, DAY 61", "12:51 PM, DAY 28", "08:19 PM, DAY 65", "07:22 PM, DAY 37", "06:41 AM, DAY 53", "09:37 AM, DAY 62", "01:42 AM, DAY 95", "08:09 PM, DAY 57", "06:51 AM, DAY 59", "11:22 AM, DAY 88", "04:19 AM, DAY 35", "12:30 PM, DAY 77"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 86778;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> times = {"10:23 PM, DAY 19", "09:40 AM, DAY 52", "03:31 AM, DAY 96", "06:03 AM, DAY 29", "05:25 AM, DAY 54", "03:17 PM, DAY 21", "04:13 AM, DAY 35", "12:48 AM, DAY 58", "04:43 AM, DAY 80", "10:47 PM, DAY 70", "01:12 AM, DAY 35", "01:55 AM, DAY 5", "09:24 PM, DAY 84", "02:10 PM, DAY 23", "05:39 PM, DAY 13", "06:16 AM, DAY 70", "12:02 AM, DAY 34", "08:36 PM, DAY 67", "02:49 AM, DAY 73", "11:01 PM, DAY 3", "05:08 AM, DAY 64", "05:55 PM, DAY 96", "11:04 AM, DAY 12", "05:16 AM, DAY 76", "05:24 PM, DAY 65", "05:41 PM, DAY 88", "01:46 PM, DAY 86", "08:21 PM, DAY 3", "08:21 AM, DAY 65", "09:39 PM, DAY 76", "01:38 PM, DAY 89", "01:53 PM, DAY 97", "08:17 PM, DAY 76", "12:05 PM, DAY 23", "06:22 PM, DAY 41", "04:55 AM, DAY 52"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 75989;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> times = {"11:58 PM, DAY 97", "07:23 AM, DAY 74", "07:33 PM, DAY 4", "07:35 AM, DAY 25", "01:20 AM, DAY 42", "06:31 AM, DAY 90", "12:38 PM, DAY 87", "05:01 PM, DAY 89", "10:35 PM, DAY 70", "06:24 AM, DAY 66", "05:20 PM, DAY 97", "01:29 AM, DAY 9", "12:48 PM, DAY 43", "12:49 PM, DAY 61", "04:48 AM, DAY 68", "01:12 PM, DAY 18", "02:47 PM, DAY 50", "04:05 AM, DAY 85", "01:10 PM, DAY 41", "07:03 AM, DAY 84", "10:29 AM, DAY 61", "07:09 PM, DAY 11", "05:47 PM, DAY 69"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 82753;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> times = {"03:15 PM, DAY 30", "11:52 AM, DAY 69", "10:35 AM, DAY 2"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 47314;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> times = {"09:22 AM, DAY 61", "09:41 AM, DAY 80", "06:23 AM, DAY 61", "04:21 AM, DAY 29", "12:54 PM, DAY 96", "03:33 PM, DAY 9", "08:41 AM, DAY 76", "03:45 AM, DAY 63", "07:36 PM, DAY 17", "07:51 AM, DAY 4", "02:52 AM, DAY 20", "05:24 AM, DAY 60", "05:53 AM, DAY 62", "10:02 PM, DAY 4", "06:41 AM, DAY 76", "03:18 AM, DAY 42", "01:50 PM, DAY 87", "08:35 AM, DAY 45", "07:03 PM, DAY 86", "09:57 AM, DAY 33", "05:03 AM, DAY 65", "01:38 AM, DAY 40", "11:00 PM, DAY 61", "01:48 PM, DAY 73", "07:13 AM, DAY 5", "07:56 AM, DAY 76", "05:04 PM, DAY 16", "09:16 PM, DAY 51", "11:04 PM, DAY 23"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 69293;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> times = {"03:40 PM, DAY 7", "09:36 AM, DAY 4", "11:36 PM, DAY 4", "02:19 AM, DAY 56", "08:40 AM, DAY 33", "05:40 PM, DAY 95", "03:09 PM, DAY 48", "05:03 AM, DAY 90", "06:01 PM, DAY 3", "01:03 PM, DAY 65", "10:36 PM, DAY 59", "12:15 PM, DAY 27", "01:31 PM, DAY 25", "02:40 AM, DAY 48", "03:20 PM, DAY 3", "05:51 AM, DAY 38", "09:43 PM, DAY 55", "04:33 AM, DAY 34", "05:17 PM, DAY 3", "10:40 PM, DAY 55", "07:13 AM, DAY 15", "01:37 AM, DAY 17", "02:08 AM, DAY 66"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 52023;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> times = {"03:25 AM, DAY 40", "07:02 AM, DAY 51", "03:27 PM, DAY 49", "05:15 AM, DAY 23", "07:24 AM, DAY 11", "11:55 AM, DAY 23", "09:20 PM, DAY 83", "05:16 AM, DAY 68", "04:44 AM, DAY 94", "11:03 PM, DAY 56", "08:37 AM, DAY 65"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 72401;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> times = {"05:35 AM, DAY 98", "02:23 PM, DAY 57", "04:37 PM, DAY 17", "04:36 PM, DAY 67", "08:07 AM, DAY 89", "04:35 AM, DAY 98", "12:36 PM, DAY 24", "11:18 PM, DAY 17", "01:59 PM, DAY 80", "03:50 AM, DAY 53", "08:18 PM, DAY 53", "08:06 PM, DAY 18", "02:25 AM, DAY 2", "08:47 AM, DAY 75"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 75751;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> times = {"08:34 PM, DAY 78", "08:54 PM, DAY 18", "11:48 AM, DAY 80", "09:09 PM, DAY 88", "10:01 AM, DAY 61", "09:19 AM, DAY 19", "07:58 AM, DAY 6", "01:30 PM, DAY 5", "07:26 AM, DAY 30", "07:04 PM, DAY 78", "02:16 PM, DAY 15", "10:43 PM, DAY 12", "10:54 PM, DAY 92", "10:02 PM, DAY 83", "06:55 PM, DAY 45", "10:22 PM, DAY 53", "05:26 AM, DAY 45", "08:58 AM, DAY 2", "06:44 PM, DAY 31", "01:22 PM, DAY 96", "02:58 PM, DAY 92", "03:37 PM, DAY 83", "12:24 AM, DAY 25", "04:46 AM, DAY 65", "05:50 PM, DAY 14", "10:17 AM, DAY 2", "06:38 AM, DAY 70", "07:14 AM, DAY 5", "04:19 AM, DAY 35", "08:01 AM, DAY 57", "07:31 AM, DAY 50", "11:53 PM, DAY 56", "01:54 AM, DAY 27", "06:09 AM, DAY 93", "10:13 AM, DAY 82", "12:01 PM, DAY 73", "07:31 PM, DAY 56", "08:45 PM, DAY 88", "04:26 AM, DAY 38", "11:55 PM, DAY 8", "05:10 AM, DAY 9", "04:25 AM, DAY 22", "02:52 AM, DAY 69", "03:56 PM, DAY 65", "12:52 PM, DAY 54", "04:42 AM, DAY 6", "08:32 PM, DAY 5", "11:49 AM, DAY 44", "07:22 PM, DAY 12", "07:49 AM, DAY 63"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 65229;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> times = {"06:04 PM, DAY 47", "03:40 PM, DAY 69", "01:38 AM, DAY 70", "04:37 PM, DAY 27", "05:13 PM, DAY 22", "08:29 PM, DAY 62", "03:04 PM, DAY 59", "03:41 PM, DAY 51", "11:54 PM, DAY 93", "02:14 PM, DAY 21", "10:15 PM, DAY 88", "02:47 PM, DAY 80", "05:02 PM, DAY 14", "01:46 PM, DAY 55", "11:02 PM, DAY 29", "05:13 AM, DAY 42", "02:07 AM, DAY 66", "06:11 AM, DAY 38", "10:21 PM, DAY 36", "12:50 AM, DAY 61", "04:33 AM, DAY 78", "01:19 PM, DAY 9", "03:21 PM, DAY 37", "07:00 PM, DAY 85", "02:50 PM, DAY 49", "12:18 AM, DAY 96", "11:44 PM, DAY 2", "12:09 PM, DAY 43", "05:23 PM, DAY 75", "02:50 AM, DAY 6", "11:10 PM, DAY 13", "02:36 AM, DAY 6", "03:08 PM, DAY 53", "07:49 AM, DAY 81"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 69322;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> times = {"10:09 AM, DAY 86", "12:06 PM, DAY 30", "09:58 PM, DAY 94", "02:44 PM, DAY 67", "08:30 PM, DAY 26", "06:18 AM, DAY 7", "12:21 PM, DAY 84", "11:07 PM, DAY 56", "08:20 AM, DAY 48", "10:16 PM, DAY 5", "03:57 AM, DAY 45", "11:00 PM, DAY 8", "01:26 AM, DAY 58", "10:32 AM, DAY 98", "08:01 AM, DAY 82", "12:54 PM, DAY 45", "04:46 AM, DAY 7", "09:29 AM, DAY 55", "12:07 PM, DAY 11", "08:54 PM, DAY 86", "05:13 PM, DAY 33", "12:25 PM, DAY 92", "04:26 PM, DAY 6", "11:49 PM, DAY 46", "01:28 PM, DAY 55"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 69749;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> times = {"04:46 PM, DAY 35", "09:14 AM, DAY 35", "09:38 AM, DAY 33", "04:41 AM, DAY 46", "10:44 PM, DAY 78", "12:51 PM, DAY 87", "02:05 AM, DAY 8", "01:28 PM, DAY 50", "08:09 AM, DAY 84", "11:44 AM, DAY 30", "01:45 AM, DAY 10", "10:59 AM, DAY 77", "03:34 AM, DAY 33", "09:00 PM, DAY 11", "12:44 PM, DAY 52", "05:33 PM, DAY 23", "06:58 AM, DAY 65", "08:30 AM, DAY 65", "12:46 AM, DAY 72", "03:43 PM, DAY 53", "07:48 PM, DAY 7", "10:21 PM, DAY 38", "09:13 PM, DAY 66", "04:45 PM, DAY 6", "06:21 PM, DAY 61", "07:42 AM, DAY 39", "09:15 PM, DAY 19", "04:05 AM, DAY 73", "07:26 PM, DAY 57", "12:32 PM, DAY 62", "04:03 AM, DAY 36", "03:53 PM, DAY 93", "11:47 AM, DAY 41", "01:02 AM, DAY 62", "10:20 PM, DAY 7", "11:52 AM, DAY 3", "03:16 AM, DAY 32", "06:46 AM, DAY 10", "07:23 PM, DAY 22", "04:08 AM, DAY 63", "06:07 PM, DAY 94", "05:18 AM, DAY 18", "05:43 AM, DAY 62"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 63014;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> times = {"10:05 PM, DAY 64", "03:11 PM, DAY 94", "03:14 PM, DAY 20", "12:10 PM, DAY 61", "04:17 AM, DAY 88", "09:17 AM, DAY 65", "05:48 PM, DAY 76", "02:53 AM, DAY 14", "12:37 AM, DAY 61", "01:38 PM, DAY 81", "10:17 PM, DAY 11", "06:14 PM, DAY 49", "03:33 PM, DAY 9", "01:52 PM, DAY 89", "06:15 AM, DAY 64", "12:10 PM, DAY 18", "04:37 AM, DAY 80", "04:02 AM, DAY 89", "12:21 PM, DAY 53", "04:44 PM, DAY 67", "10:51 PM, DAY 10", "03:18 AM, DAY 30", "01:46 PM, DAY 4", "09:10 AM, DAY 70", "02:22 AM, DAY 55", "03:15 AM, DAY 49", "12:39 AM, DAY 22", "12:52 AM, DAY 11", "12:08 PM, DAY 11", "04:19 PM, DAY 90", "08:44 PM, DAY 29", "09:59 PM, DAY 36", "10:24 AM, DAY 88", "09:25 AM, DAY 89", "07:30 PM, DAY 33", "05:30 PM, DAY 12", "06:31 AM, DAY 43", "06:19 AM, DAY 26"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 69291;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> times = {"07:30 AM, DAY 85", "08:31 AM, DAY 33", "03:44 PM, DAY 49", "06:40 PM, DAY 1", "08:06 AM, DAY 88", "11:17 AM, DAY 42", "06:03 PM, DAY 17", "11:49 AM, DAY 50", "04:14 PM, DAY 82", "01:48 AM, DAY 30", "06:56 AM, DAY 19", "06:13 PM, DAY 73", "02:37 AM, DAY 18", "10:23 AM, DAY 85", "06:25 PM, DAY 91", "02:33 AM, DAY 32", "04:16 AM, DAY 80", "02:48 AM, DAY 54", "09:31 AM, DAY 40", "03:14 PM, DAY 98"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 75530;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> times = {"03:14 PM, DAY 53", "07:03 PM, DAY 71", "10:23 PM, DAY 9", "09:32 PM, DAY 27", "03:19 PM, DAY 47", "01:39 PM, DAY 33", "04:55 PM, DAY 99", "08:01 AM, DAY 81"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 74671;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> times = {"09:56 AM, DAY 42", "01:21 AM, DAY 63", "04:37 AM, DAY 17", "05:13 PM, DAY 18", "12:19 PM, DAY 13", "08:27 PM, DAY 66", "01:45 PM, DAY 27", "11:29 AM, DAY 93", "08:31 AM, DAY 64", "10:29 AM, DAY 30", "09:06 PM, DAY 97", "11:20 AM, DAY 64", "03:46 AM, DAY 96", "12:29 AM, DAY 9", "03:45 AM, DAY 72", "04:00 PM, DAY 99", "12:43 PM, DAY 55", "09:33 PM, DAY 61", "07:41 AM, DAY 46", "12:36 PM, DAY 46", "09:40 PM, DAY 76", "03:20 PM, DAY 77", "08:57 PM, DAY 63", "01:50 AM, DAY 3", "09:16 PM, DAY 27", "05:52 PM, DAY 36", "04:07 AM, DAY 24", "11:41 PM, DAY 2", "02:41 PM, DAY 6", "05:24 PM, DAY 62", "05:13 AM, DAY 85"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 70314;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> times = {"03:32 AM, DAY 73", "11:36 AM, DAY 39", "04:13 PM, DAY 12", "11:02 AM, DAY 35", "03:13 PM, DAY 33", "07:33 PM, DAY 14", "04:34 AM, DAY 80", "10:31 AM, DAY 92", "06:57 AM, DAY 65", "07:04 AM, DAY 5", "03:43 AM, DAY 15", "01:09 PM, DAY 1", "05:07 PM, DAY 56", "06:46 PM, DAY 84", "08:25 AM, DAY 89", "03:44 PM, DAY 25", "08:36 PM, DAY 14", "07:59 PM, DAY 48", "01:48 AM, DAY 34", "05:08 PM, DAY 34", "07:44 AM, DAY 18", "05:35 PM, DAY 32", "06:04 PM, DAY 60", "07:05 AM, DAY 99", "08:28 AM, DAY 20", "01:27 AM, DAY 24", "03:55 AM, DAY 21", "07:05 PM, DAY 61", "02:52 PM, DAY 63", "03:08 AM, DAY 67", "05:12 PM, DAY 52", "12:24 AM, DAY 43", "03:13 AM, DAY 72", "04:25 PM, DAY 50", "01:25 AM, DAY 44", "08:38 PM, DAY 44", "02:44 AM, DAY 15", "12:05 PM, DAY 35", "10:25 PM, DAY 69", "05:04 AM, DAY 5", "01:45 PM, DAY 62", "08:34 AM, DAY 12", "02:05 PM, DAY 32", "06:29 AM, DAY 36", "10:40 AM, DAY 53"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 60730;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> times = {"07:31 PM, DAY 70", "03:44 AM, DAY 10", "05:57 AM, DAY 93", "02:38 AM, DAY 56", "01:24 AM, DAY 94", "01:18 AM, DAY 58", "01:18 AM, DAY 30", "04:20 AM, DAY 72", "04:24 PM, DAY 15", "04:01 PM, DAY 34", "11:07 AM, DAY 64", "01:58 AM, DAY 84", "06:20 AM, DAY 58", "10:34 PM, DAY 85", "07:10 PM, DAY 54", "06:01 PM, DAY 29", "09:08 AM, DAY 4", "10:33 PM, DAY 97", "09:06 AM, DAY 33", "01:36 PM, DAY 3"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 73794;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> times = {"11:31 PM, DAY 85", "10:01 PM, DAY 25", "05:33 AM, DAY 96", "12:08 AM, DAY 89", "09:28 AM, DAY 12", "03:19 PM, DAY 94", "09:14 AM, DAY 92", "03:19 PM, DAY 66", "02:20 PM, DAY 34", "10:07 PM, DAY 27", "10:23 AM, DAY 28", "02:44 AM, DAY 7", "12:32 PM, DAY 85", "02:46 AM, DAY 92", "01:39 PM, DAY 18", "08:04 PM, DAY 40", "07:43 AM, DAY 99", "05:03 PM, DAY 89"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 85066;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> times = {"04:37 PM, DAY 35", "09:11 AM, DAY 74", "11:30 PM, DAY 22", "05:41 PM, DAY 72", "01:45 AM, DAY 10", "11:28 AM, DAY 84", "07:02 PM, DAY 51", "10:01 AM, DAY 44", "10:13 AM, DAY 9", "03:34 PM, DAY 24", "09:35 PM, DAY 56", "04:31 PM, DAY 86", "02:41 PM, DAY 79", "06:24 AM, DAY 84", "08:37 PM, DAY 4", "02:47 PM, DAY 18", "11:22 AM, DAY 74", "07:44 AM, DAY 42", "06:13 PM, DAY 36", "06:41 AM, DAY 61", "11:08 AM, DAY 88", "02:05 AM, DAY 45", "06:48 PM, DAY 17", "07:03 AM, DAY 87", "02:08 PM, DAY 6", "03:02 PM, DAY 75", "10:45 AM, DAY 69", "04:47 PM, DAY 89", "05:41 PM, DAY 30", "03:44 PM, DAY 7", "05:38 AM, DAY 13", "11:29 PM, DAY 7", "04:06 AM, DAY 24"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 65287;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> times = {"11:45 PM, DAY 58", "02:16 PM, DAY 43", "07:33 AM, DAY 9", "09:34 AM, DAY 82", "08:47 AM, DAY 22", "06:46 PM, DAY 98", "04:07 PM, DAY 49", "11:31 AM, DAY 29", "08:28 AM, DAY 78", "03:17 AM, DAY 30", "03:00 AM, DAY 37", "07:22 AM, DAY 79", "04:15 AM, DAY 90", "12:39 PM, DAY 16", "09:49 PM, DAY 86", "10:26 PM, DAY 68", "06:42 AM, DAY 63"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 78156;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> times = {"09:24 PM, DAY 16", "12:59 AM, DAY 93", "02:26 PM, DAY 67", "04:53 AM, DAY 58", "09:30 AM, DAY 33", "02:38 PM, DAY 96", "07:19 AM, DAY 19", "03:07 PM, DAY 53", "01:16 PM, DAY 72", "02:51 AM, DAY 89", "12:44 PM, DAY 53", "06:55 PM, DAY 29", "01:01 AM, DAY 98", "12:26 PM, DAY 76", "03:59 PM, DAY 85", "11:50 PM, DAY 42", "10:30 PM, DAY 2", "01:16 AM, DAY 33", "04:11 AM, DAY 89", "01:36 PM, DAY 42", "01:03 PM, DAY 71", "08:02 AM, DAY 21", "08:40 PM, DAY 22", "05:17 PM, DAY 22", "09:48 PM, DAY 15", "03:20 PM, DAY 68", "06:21 AM, DAY 53", "04:07 PM, DAY 13", "08:44 PM, DAY 91", "01:26 PM, DAY 2"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 71951;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> times = {"05:06 PM, DAY 43", "07:12 AM, DAY 45", "06:50 PM, DAY 72", "06:54 AM, DAY 17", "10:42 AM, DAY 21", "06:29 AM, DAY 22", "09:38 AM, DAY 35", "10:19 AM, DAY 5", "10:21 PM, DAY 52", "04:55 AM, DAY 64", "03:53 PM, DAY 93"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 60187;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> times = {"05:30 PM, DAY 54", "08:23 AM, DAY 40", "01:24 AM, DAY 22", "07:37 PM, DAY 53", "12:33 AM, DAY 57", "04:30 PM, DAY 45", "01:17 PM, DAY 90", "04:43 PM, DAY 69", "05:17 AM, DAY 87", "10:13 PM, DAY 54", "12:41 AM, DAY 17", "04:58 AM, DAY 13", "08:59 PM, DAY 22", "04:03 AM, DAY 94", "06:14 PM, DAY 27", "06:51 PM, DAY 47", "02:31 AM, DAY 99", "05:02 AM, DAY 32", "02:19 AM, DAY 53", "07:58 PM, DAY 94", "09:02 AM, DAY 88", "02:26 AM, DAY 13", "01:41 AM, DAY 42", "11:17 AM, DAY 54", "07:13 AM, DAY 71", "01:11 PM, DAY 73", "06:21 AM, DAY 81", "08:48 AM, DAY 63", "10:11 PM, DAY 29", "08:22 AM, DAY 13", "09:26 PM, DAY 79", "04:38 AM, DAY 58", "05:09 PM, DAY 60", "05:19 PM, DAY 73", "06:58 PM, DAY 97", "10:29 PM, DAY 69", "02:52 PM, DAY 76", "12:07 AM, DAY 44", "10:46 PM, DAY 99", "05:18 PM, DAY 97", "05:36 AM, DAY 72", "02:55 PM, DAY 61", "05:12 AM, DAY 18"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 82454;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> times = {"01:02 AM, DAY 87", "03:17 PM, DAY 77", "11:17 PM, DAY 28", "04:36 AM, DAY 19", "01:17 PM, DAY 28", "12:33 PM, DAY 51", "11:47 PM, DAY 81", "07:49 AM, DAY 37", "11:31 AM, DAY 10", "03:50 AM, DAY 13", "12:13 PM, DAY 88", "07:16 PM, DAY 55", "05:15 AM, DAY 38", "09:41 PM, DAY 9", "10:07 AM, DAY 15", "09:31 AM, DAY 7", "07:30 PM, DAY 21"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 55082;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> times = {"07:09 AM, DAY 8", "10:39 AM, DAY 2", "01:04 PM, DAY 56", "09:19 PM, DAY 53", "04:53 PM, DAY 15", "04:46 PM, DAY 2", "05:11 AM, DAY 26", "08:07 PM, DAY 39", "04:41 AM, DAY 66", "12:16 PM, DAY 42", "04:09 PM, DAY 46", "02:50 PM, DAY 37", "05:32 PM, DAY 21", "05:44 AM, DAY 93", "01:12 AM, DAY 96", "03:25 AM, DAY 32", "02:52 AM, DAY 31", "10:16 AM, DAY 22", "11:43 AM, DAY 81", "04:27 AM, DAY 68", "04:29 AM, DAY 91", "08:37 PM, DAY 50", "09:20 AM, DAY 34", "11:22 AM, DAY 70", "11:56 AM, DAY 49", "02:18 PM, DAY 44", "08:55 PM, DAY 64", "05:09 PM, DAY 93", "02:57 PM, DAY 54", "03:49 PM, DAY 15", "04:56 AM, DAY 49"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 66089;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> times = {"04:00 AM, DAY 52", "05:05 AM, DAY 30", "10:40 PM, DAY 58", "01:56 AM, DAY 57", "11:39 AM, DAY 56", "04:09 PM, DAY 99", "12:30 AM, DAY 43", "04:57 AM, DAY 36", "04:42 AM, DAY 33", "10:34 AM, DAY 25", "01:02 AM, DAY 3", "03:26 PM, DAY 77", "01:45 PM, DAY 27", "08:15 AM, DAY 5"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 60414;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> times = {"03:43 AM, DAY 61", "11:45 PM, DAY 88", "09:27 AM, DAY 66", "11:34 AM, DAY 11", "02:18 PM, DAY 53", "01:39 AM, DAY 10", "02:15 PM, DAY 40", "11:12 PM, DAY 40", "03:21 AM, DAY 73", "10:16 PM, DAY 69", "11:22 AM, DAY 52", "09:51 PM, DAY 55", "03:50 AM, DAY 80", "06:12 PM, DAY 32", "12:33 AM, DAY 43", "02:59 PM, DAY 39", "05:47 AM, DAY 6", "03:12 AM, DAY 94", "10:39 PM, DAY 39", "03:13 AM, DAY 43", "01:47 PM, DAY 89", "03:59 AM, DAY 46", "04:34 PM, DAY 53", "06:14 AM, DAY 89", "07:46 PM, DAY 86", "01:48 AM, DAY 29", "04:09 PM, DAY 45", "11:13 PM, DAY 90", "11:11 PM, DAY 73", "04:17 AM, DAY 98", "10:13 PM, DAY 43", "07:00 AM, DAY 84", "04:56 PM, DAY 86", "05:53 PM, DAY 70", "07:08 PM, DAY 26", "09:30 AM, DAY 28", "07:41 PM, DAY 72", "08:38 AM, DAY 33", "10:56 PM, DAY 6"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 77874;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> times = {"06:38 PM, DAY 8", "07:09 PM, DAY 32", "07:32 PM, DAY 71", "12:03 AM, DAY 69", "06:12 AM, DAY 3", "09:10 PM, DAY 44"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 53407;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> times = {"10:54 AM, DAY 17", "04:39 PM, DAY 47", "05:13 PM, DAY 67", "04:40 PM, DAY 56", "11:50 PM, DAY 38", "02:15 AM, DAY 5", "11:12 AM, DAY 17", "05:45 PM, DAY 70", "10:00 PM, DAY 27", "07:03 AM, DAY 9", "05:26 PM, DAY 74", "10:33 AM, DAY 68", "07:17 PM, DAY 14", "08:22 AM, DAY 56", "04:26 AM, DAY 66", "04:37 PM, DAY 63", "03:32 AM, DAY 9", "05:57 AM, DAY 36", "05:13 PM, DAY 23", "04:17 PM, DAY 41", "04:08 AM, DAY 3", "02:13 AM, DAY 59", "09:20 AM, DAY 63", "08:15 AM, DAY 44", "07:39 AM, DAY 99", "09:18 AM, DAY 17", "06:07 PM, DAY 80", "08:25 PM, DAY 65", "08:14 AM, DAY 5", "01:28 AM, DAY 76", "04:35 PM, DAY 2", "06:38 PM, DAY 45", "11:38 PM, DAY 55", "07:53 AM, DAY 39", "08:04 PM, DAY 10", "08:44 AM, DAY 64", "09:56 AM, DAY 87", "12:08 AM, DAY 41", "06:31 AM, DAY 65", "06:26 PM, DAY 95", "07:00 AM, DAY 41", "08:42 PM, DAY 49"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 64195;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> times = {"05:06 PM, DAY 65", "08:02 AM, DAY 29", "07:51 AM, DAY 98", "09:44 AM, DAY 34", "05:07 AM, DAY 30", "04:23 PM, DAY 5", "05:17 AM, DAY 63", "02:47 PM, DAY 72", "08:52 PM, DAY 21", "09:55 AM, DAY 76", "05:15 AM, DAY 52", "01:48 AM, DAY 81", "06:32 PM, DAY 54", "07:05 AM, DAY 96", "06:34 PM, DAY 99", "08:13 AM, DAY 25", "01:01 PM, DAY 33", "10:58 AM, DAY 31", "07:31 PM, DAY 43", "01:58 PM, DAY 42", "04:51 AM, DAY 26", "07:38 PM, DAY 80", "09:26 PM, DAY 65", "08:09 AM, DAY 30", "05:06 AM, DAY 87", "10:35 PM, DAY 94", "08:35 PM, DAY 26", "06:15 PM, DAY 67", "03:54 AM, DAY 83", "04:35 AM, DAY 2", "10:28 AM, DAY 37", "02:49 AM, DAY 18", "08:18 PM, DAY 73", "02:09 PM, DAY 60", "01:28 AM, DAY 37"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 74239;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> times = {"12:11 PM, DAY 79", "04:49 AM, DAY 52", "01:46 PM, DAY 43", "01:43 AM, DAY 79", "06:13 PM, DAY 70", "05:00 AM, DAY 16", "02:06 PM, DAY 15"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 71501;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> times = {"10:02 AM, DAY 65", "04:30 PM, DAY 7", "12:22 AM, DAY 20", "01:03 PM, DAY 82", "07:22 AM, DAY 77", "02:31 AM, DAY 81", "07:52 PM, DAY 11", "11:04 PM, DAY 90", "10:08 AM, DAY 88", "01:12 AM, DAY 51", "04:27 AM, DAY 67", "11:34 PM, DAY 69", "05:12 PM, DAY 58", "02:36 PM, DAY 80", "06:03 PM, DAY 95", "03:21 PM, DAY 66", "08:30 AM, DAY 80", "08:34 AM, DAY 26", "02:54 PM, DAY 52", "11:45 AM, DAY 64", "02:28 PM, DAY 85", "09:55 PM, DAY 63", "04:10 AM, DAY 42", "11:47 PM, DAY 58", "02:33 PM, DAY 42", "08:50 PM, DAY 30", "02:02 AM, DAY 80", "01:00 AM, DAY 7", "11:07 PM, DAY 38", "11:26 AM, DAY 74", "03:20 AM, DAY 18", "12:44 AM, DAY 25", "01:36 AM, DAY 97", "06:25 AM, DAY 89", "08:59 PM, DAY 42", "10:19 PM, DAY 52"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 81643;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> times = {"04:55 AM, DAY 18", "03:34 AM, DAY 5", "06:15 PM, DAY 97", "11:27 PM, DAY 43", "08:49 PM, DAY 8", "04:53 AM, DAY 25", "07:01 PM, DAY 48", "11:48 PM, DAY 66"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 54770;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> times = {"10:10 AM, DAY 95", "10:15 PM, DAY 68", "02:43 AM, DAY 52", "03:56 PM, DAY 82", "05:12 AM, DAY 49", "07:04 AM, DAY 52", "01:58 PM, DAY 46", "08:42 AM, DAY 4", "07:28 PM, DAY 11", "03:20 PM, DAY 1", "08:10 AM, DAY 34", "07:06 PM, DAY 15", "04:53 PM, DAY 25", "09:18 AM, DAY 89", "06:11 AM, DAY 90", "05:19 AM, DAY 46", "02:57 PM, DAY 55", "07:04 PM, DAY 65", "09:55 AM, DAY 96", "06:44 PM, DAY 10", "08:32 AM, DAY 53", "04:29 PM, DAY 8", "08:57 PM, DAY 50", "03:47 PM, DAY 72", "11:28 AM, DAY 52", "01:40 PM, DAY 59", "01:02 PM, DAY 72", "05:14 PM, DAY 44", "11:47 PM, DAY 40", "12:50 PM, DAY 83", "08:22 AM, DAY 20", "12:12 AM, DAY 65"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 70985;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> times = {"08:09 AM, DAY 1", "11:02 PM, DAY 54", "04:34 AM, DAY 93", "09:05 PM, DAY 49", "09:05 PM, DAY 35", "12:19 PM, DAY 39", "04:20 AM, DAY 64", "05:24 PM, DAY 66", "08:48 PM, DAY 98", "05:21 AM, DAY 52", "02:58 PM, DAY 96", "08:48 AM, DAY 71", "08:54 AM, DAY 98", "03:23 AM, DAY 3", "08:26 AM, DAY 31", "03:21 AM, DAY 90", "04:15 AM, DAY 85", "01:12 PM, DAY 75", "01:52 AM, DAY 21", "10:55 AM, DAY 37", "02:12 AM, DAY 16", "02:45 PM, DAY 37", "12:04 AM, DAY 32", "03:52 PM, DAY 4", "01:09 AM, DAY 52", "09:39 PM, DAY 47"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 73255;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> times = {"09:00 AM, DAY 1", "09:00 AM, DAY 1", "08:10 AM, DAY 1"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> times = {"12:30 PM, DAY 3", "12:40 AM, DAY 12", "12:05 AM, DAY 99"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 53065;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> times = {"12:01 AM, DAY 2"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> times = {"12:01 AM, DAY 2", "07:59 AM, DAY 3"};
    Iditarod* pObj = new Iditarod();
    clock_t start = clock();
    int result = pObj->avgMinutes(times);
    clock_t end = clock();
    delete pObj;
    int expected = 1920;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7269319&rd=4605&pm=1647
********************************************************************************
#line 72 "Iditarod.cpp" 
#include <string> 
#include <vector> 
#include <set> 
#include <queue> 
#include <sstream> 
#include <iostream> 
#include <cstdlib> 
#include <algorithm> 
#include <cmath> 
#include <cstdio> 
#include <functional> 
#include <climits> 
using namespace std; 
typedef vector<int> VI; typedef vector<string> VS; typedef vector<double> VD; 
typedef set<int> SI; typedef set<string> SS; 
typedef long long I64; typedef unsigned long long U64; 
typedef istringstream ISS; typedef ostringstream OSS; 
 
const double eps = 1e-9; 
 
I64 gcd(I64 a, I64 b) { I64 c; a=((a>0)?a: -a); b=((b>0)?b: -b);if (a<b) {c=a;a=b;b=c;} while(b!=0){c=a&b;a=b;b=c;}return a;} 
int gcd(int a, int b) { int c; a=((a>0)?a: -a); b=((b>0)?b: -b);if (a<b) {c=a;a=b;b=c;} while(b!=0){c=a&b;a=b;b=c;}return a;} 
 
class Iditarod  
{ 
  public: 
  int avgMinutes(vector <string> times) { 
    int n=times.size(); 
    int tot=0; 
    for (int i=0;i<n;++i) 
    { 
      ISS a(times[i]); 
      int h,m,d; 
      char ap,du; 
      a >> h >> du >> m >> ap >> du >> du >> du >> du >> du >> d; 
      if (h==12) h=0; 
      tot += (h-8)*60 + m + (ap == 'P' ? 12*60 : 0) + (d-1)*24*60; 
    } 
    return (int)((double)(tot) / n + .5+eps); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/