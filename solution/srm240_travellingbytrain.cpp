/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4455
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

class TravellingByTrain {
public:
    string earliestArrival(vector<string> timeTable);
};

string TravellingByTrain::earliestArrival(vector<string> timeTable) {
    string ret;
    return ret;
}


int test0() {
    vector<string> timeTable = {"10:00-13:00 12:00-15:00", "11:00-16:00 14:00-19:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "19:00, day 1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> timeTable = {"09:00-13:57", "13:56-17:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "17:00, day 2";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> timeTable = {"10:00-08:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00, day 2";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> timeTable = {"09:10-11:00 09:05-10:05", "10:10-12:00 11:00-11:05", "17:00-08:00", "09:00-08:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00, day 3";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> timeTable = {"09:00-09:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00, day 2";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> timeTable = {"08:59-08:59"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:59, day 3";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> timeTable = {"10:00-22:00 21:58-21:59", "21:59-03:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "03:00, day 2";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> timeTable = {"08:59-08:59", "08:58-08:58", "08:57-08:57", "08:56-08:56", "08:55-08:55", "08:54-08:54", "08:53-08:53", "08:52-08:52", "08:51-08:51", "08:50-08:50", "08:49-08:49", "08:48-08:48", "08:47-08:47", "08:46-08:46", "08:45-08:45", "08:44-08:44", "08:43-08:43", "08:42-08:42", "08:41-08:41", "08:40-08:40", "08:39-08:39", "08:38-08:38", "08:37-08:37", "08:36-08:36", "08:35-08:35", "08:34-08:34", "08:33-08:33", "08:32-08:32", "08:31-08:31", "08:30-08:30", "08:29-08:29", "08:28-08:28", "08:27-08:27", "08:26-08:26", "08:25-08:25", "08:24-08:24", "08:23-08:23", "08:22-08:22", "08:21-08:21", "08:20-08:20", "08:19-08:19", "08:18-08:18", "08:17-08:17", "08:16-08:16", "08:15-08:15", "08:14-08:14", "08:13-08:13", "08:12-08:12", "08:11-08:11", "08:10-08:10"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:10, day 101";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> timeTable = {"09:04-16:43 10:03-13:32 11:04-12:01 11:00-12:05"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "12:01, day 1";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> timeTable = {"00:00-00:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00, day 3";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> timeTable = {"09:00-08:59"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:59, day 2";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> timeTable = {"10:43-21:35 01:49-08:18 09:45-08:41", "12:18-09:08 01:23-09:03", "13:37-04:41", "07:43-12:57", "14:50-14:44", "11:08-08:39 06:29-09:45 22:30-03:55", "06:24-15:45", "02:08-19:01 04:09-07:12 22:06-16:27 06:30-14:30", "01:14-16:07 01:23-17:59", "06:30-08:08 15:02-12:31 16:14-18:14", "04:20-00:42 05:26-14:42 22:09-21:44"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "14:42, day 8";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> timeTable = {"14:41-02:44", "20:09-20:37 15:48-03:44 03:59-02:01 04:28-23:36", "18:50-22:18 03:45-15:24", "23:32-21:21 18:23-09:16 10:21-12:10 18:52-11:51", "17:58-17:21 09:52-05:38 00:12-04:03", "08:24-09:56 20:22-05:20 12:44-08:59 06:27-03:22", "08:54-03:58 05:05-12:13", "21:50-01:09 04:07-14:04"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "01:09, day 7";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> timeTable = {"16:55-16:01 02:05-19:36 11:49-12:50 11:45-20:22"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "12:50, day 1";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> timeTable = {"13:55-06:16 15:15-01:23 22:48-02:15", "06:21-14:49 09:39-16:31"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "14:49, day 2";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> timeTable = {"15:26-10:02 18:24-13:20 11:17-23:45 06:18-23:58", "17:52-10:32 21:18-19:47 03:52-23:26", "02:20-22:56 05:43-20:37 12:20-04:02", "17:49-03:11 14:27-21:45 13:25-18:19 16:40-19:20"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "18:19, day 4";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> timeTable = {"18:39-04:00 15:41-23:17 18:23-22:06", "07:15-21:26 04:14-16:46", "13:17-05:13 23:29-01:16 07:03-22:16 02:06-13:20", "22:23-16:12", "13:44-11:50 14:44-01:10", "02:09-12:57", "19:31-23:59", "04:10-02:27 05:48-00:00", "13:37-03:11", "23:53-03:22 00:27-23:15 00:18-05:11 07:43-09:20", "06:37-01:10 22:22-13:13 02:38-22:49 22:48-09:27", "23:17-01:15 03:56-05:17 16:13-16:41", "01:40-19:48 16:06-09:53 02:42-19:56 14:39-09:13", "22:13-05:53", "14:40-19:23"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "19:23, day 12";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> timeTable = {"23:15-01:55", "09:17-16:47", "19:37-09:25 06:09-15:39 02:03-21:53", "05:37-23:05 08:33-08:27 03:23-14:15", "00:12-19:11 11:49-13:34 06:54-04:45"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "13:34, day 5";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> timeTable = {"09:42-05:55 03:39-09:46 00:41-03:40 01:04-07:06", "07:18-13:07 18:24-23:51 06:49-04:32", "14:03-17:28 22:15-01:15 14:37-08:57", "01:40-13:35", "22:13-06:39 15:38-17:33 00:08-10:17 19:33-01:52", "02:47-13:40 16:03-23:34 08:53-19:11 02:23-05:56", "04:39-15:38 19:39-09:22 10:00-23:25"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "23:25, day 4";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> timeTable = {"09:10-16:39 10:53-09:14 01:03-00:49 14:40-12:20", "03:02-21:10 14:58-03:07 07:30-01:16 20:46-06:16"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "06:16, day 2";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> timeTable = {"00:36-18:02 04:08-04:23 06:20-20:04 18:31-11:59", "21:40-21:39 09:40-09:02 10:47-14:02", "03:56-17:22 17:43-19:05 04:50-00:51", "23:58-15:41 05:21-01:09 06:26-15:46", "07:55-20:28", "00:03-16:17 19:36-15:09 02:49-16:58 16:29-06:42", "11:19-17:30 14:38-02:56 17:51-22:42", "09:13-14:50 15:00-15:39", "17:03-07:59 06:23-09:13 02:03-09:31", "06:27-04:59 23:49-13:50", "00:40-14:39 12:17-23:29 04:07-16:01 12:38-00:01", "16:02-14:09 02:00-05:59 04:43-19:51", "19:44-19:10 05:30-05:36 04:01-12:41", "19:58-05:02", "04:37-09:00 14:44-23:20 07:13-03:14 22:06-00:14", "03:29-04:34 18:20-09:45 16:11-23:14 19:04-10:42", "01:47-07:48", "12:58-04:53 09:47-02:58", "17:35-05:13 12:01-20:30", "10:31-03:16 18:45-03:38 21:33-04:16", "07:28-01:26 05:46-22:16", "04:15-10:59", "18:09-22:27", "10:41-17:52 16:16-14:44 12:17-17:19", "03:15-08:35", "04:23-08:01 06:33-02:54 15:07-23:05 22:00-12:41", "21:23-05:37 20:39-04:52 19:41-02:12", "07:01-12:16 18:01-23:05", "14:01-09:06 05:50-17:02", "01:30-10:27 14:28-23:50 03:55-06:39 16:03-15:47", "18:35-15:00 17:51-22:12 18:58-10:24", "20:01-22:58 11:55-19:15 21:17-03:57 21:48-20:18", "02:47-14:15", "09:28-00:59", "21:47-11:14"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "11:14, day 28";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> timeTable = {"01:20-18:02 08:26-07:53", "04:00-06:11", "19:58-23:28", "06:06-18:34 07:00-14:55", "23:30-20:09 12:40-06:18", "10:41-12:07 15:54-17:55", "23:08-17:53 10:33-07:03", "05:37-22:11 23:51-14:00 00:52-22:08", "13:53-13:51 07:56-02:24 16:24-01:20 01:27-19:16", "03:08-01:22 05:41-20:22", "14:55-03:50 16:31-22:43 00:46-19:48 18:17-06:42", "11:46-06:34 23:16-08:35 21:43-02:00 03:23-23:44", "13:29-02:18 21:37-21:10 14:55-19:45", "09:36-00:22 00:09-15:52 02:39-13:39", "22:50-01:15 05:05-08:36 15:14-03:50 12:46-15:04", "20:22-14:56 17:28-18:15", "05:37-06:59 16:59-08:45 16:36-11:59", "21:46-11:26", "22:16-00:29", "14:45-12:22", "12:41-07:13 15:17-22:05 06:11-16:55", "06:15-22:47 05:43-13:09 13:25-19:22 01:13-12:28", "09:13-18:40 15:23-06:22 12:48-06:01", "23:54-04:31", "01:33-04:04 08:39-17:03 06:45-03:01", "02:58-00:25 21:02-20:38"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "20:38, day 21";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> timeTable = {"09:17-06:57", "19:40-00:11 15:21-02:32 16:59-04:47", "18:56-14:37 20:25-18:54 08:41-07:54 04:55-15:31", "14:44-20:53", "20:04-08:16 03:35-08:11 03:29-12:07 20:49-23:07", "20:36-19:44 23:27-19:14 11:31-13:51 11:52-02:39", "15:07-14:28 02:08-07:05 00:41-19:10 02:36-12:31", "04:04-20:00", "11:38-09:47 07:07-17:04 15:21-23:04 18:10-14:30", "01:25-13:13", "13:22-05:53", "06:01-17:43 20:21-10:41", "14:37-15:06 04:05-10:30 00:23-04:16", "01:34-01:00 12:15-19:10", "09:42-05:58", "03:14-06:08 18:16-17:52 20:59-03:39", "16:24-11:07 16:54-05:39 16:56-01:52 04:37-10:34", "22:05-16:56 04:20-21:55 07:11-23:43 22:42-10:23", "09:32-06:03 14:51-16:14 13:41-13:00", "22:49-01:00 08:47-13:36", "18:44-07:31 01:48-10:11", "17:33-07:51 12:32-05:10", "10:18-05:49 00:03-20:46", "01:08-11:40", "06:52-01:55 13:12-21:00 21:26-07:16", "04:22-09:59 12:50-07:10", "14:29-16:26 18:38-21:00", "12:16-11:26 04:36-17:47 11:58-20:57 19:08-21:53", "03:20-03:11 06:55-02:08", "22:47-19:48 10:33-01:30", "05:06-03:21 04:44-14:17 19:04-09:36", "19:15-22:15 17:30-21:07 18:36-10:54 18:47-18:56", "12:04-19:17 12:14-09:28", "14:22-14:42 12:24-05:41", "08:27-09:23", "10:02-20:37", "07:04-20:49 23:23-20:31 03:04-05:22 14:53-18:12", "15:55-02:23 02:54-08:18 18:15-00:48 14:32-22:50", "18:38-21:31 08:23-12:00 01:30-23:32", "20:00-00:45 06:53-18:08", "16:27-06:33", "19:38-16:01", "16:57-02:47 22:36-00:02 21:52-19:40 05:37-16:44"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02, day 32";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> timeTable = {"23:00-23:10 22:51-07:45 20:24-07:13 07:46-16:42"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "23:10, day 1";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> timeTable = {"16:07-08:44 12:53-11:27", "18:04-09:31", "01:58-06:39 15:03-02:38 08:27-03:21 03:19-18:31", "23:46-04:55 03:05-14:47 06:12-16:02 09:46-23:46", "10:16-23:03 01:25-05:18 13:35-01:17", "05:24-20:14", "03:33-19:12", "11:31-08:01 09:44-21:43", "09:02-05:11", "09:56-03:20 17:05-13:26 14:34-22:50 17:51-09:34", "19:53-01:52 10:08-07:21 02:32-11:59", "11:16-10:11 16:25-06:23", "09:49-14:15 22:24-14:16 22:23-08:00 03:41-00:39", "22:15-15:32 20:48-14:16 18:14-11:17 02:49-10:32", "14:42-23:22 12:46-10:09 05:53-18:12 04:26-08:57", "09:09-08:52 23:36-02:28 02:49-08:01 02:05-16:15", "14:01-15:35 00:32-01:55 01:24-21:59", "12:50-09:15 07:43-23:42 15:19-20:38", "04:23-07:26 23:35-23:46 13:52-07:13", "08:28-02:51 23:18-19:44 07:38-04:00 11:19-04:03", "09:46-13:45 21:08-08:46 08:44-13:11 20:47-12:50", "18:51-17:56", "14:22-22:43", "05:25-01:38 12:51-18:23 18:32-16:52", "19:15-06:37 14:51-15:30 09:30-08:51 06:55-13:44", "06:09-00:49", "12:33-01:24 07:12-13:57", "12:24-14:41", "10:39-04:19", "18:37-19:01", "12:44-06:35 20:53-02:32 09:37-06:55", "19:08-16:49 15:23-12:10 17:34-19:43 21:52-11:52", "10:04-08:46 06:05-00:08", "01:01-12:52", "18:20-18:43"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "18:43, day 28";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> timeTable = {"05:19-23:21"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "23:21, day 2";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> timeTable = {"18:56-00:21", "09:54-18:34 13:54-10:31 04:29-22:46", "17:34-03:41", "10:34-05:54 04:07-03:48", "14:50-12:24", "04:04-08:21 08:09-10:30 00:48-02:44 05:34-07:12", "23:43-03:21", "23:00-22:38 12:37-12:46 11:08-14:55 19:57-06:34", "22:19-14:34 15:01-03:18 02:42-14:15 11:29-22:37", "09:38-02:08 19:28-10:30 11:01-02:33", "04:44-09:32 16:59-14:23 00:30-06:17", "15:18-14:59 22:29-02:40", "10:39-08:51 01:16-22:10 08:14-12:12 23:58-01:32", "19:16-06:07 09:49-04:27 20:11-05:59", "18:16-11:14", "19:50-08:18 20:57-06:32 14:10-15:03", "17:29-20:17 12:06-13:15", "20:56-23:28", "22:12-16:08 06:24-08:35 16:08-22:56", "12:08-02:35 16:17-08:43", "11:12-11:55", "22:27-08:16 14:46-07:28 09:18-22:10 02:29-04:58", "12:46-20:56 12:45-06:07 19:51-20:54", "01:16-03:10", "14:27-00:44 20:48-05:23", "18:33-17:44 05:16-21:53 20:14-15:04 20:47-11:45", "14:59-23:57 07:39-11:40 21:36-18:05 15:29-19:30", "00:25-08:52", "06:55-15:22 13:06-22:37", "22:08-05:55 05:01-23:45", "05:17-09:47", "19:29-12:39 01:31-11:56", "04:19-12:23 04:57-13:59", "12:35-17:02 17:33-16:44", "07:24-14:46 12:25-00:05 13:00-12:48 20:49-03:13", "09:56-02:48 02:06-23:03 20:06-02:47 02:58-01:59", "07:29-11:54 16:23-17:52", "08:23-19:36 02:58-04:06 23:01-01:53"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "01:53, day 27";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> timeTable = {"05:52-13:41", "21:19-23:51 18:56-00:22 15:58-07:05", "15:55-07:57 16:58-22:59 11:43-11:39 00:48-00:32", "02:56-07:31 16:39-23:52", "04:08-23:36 22:11-17:46", "22:07-12:02 06:29-22:51", "03:47-23:53 00:47-06:06 11:19-14:39", "04:08-11:56", "22:15-07:13 11:21-07:01", "22:57-16:12 16:13-08:09 07:32-12:30 18:30-22:31", "22:30-21:18 06:21-08:27 00:02-10:58", "02:17-16:05 20:27-03:50", "00:51-08:49 01:31-18:19 03:47-13:28 17:35-02:04", "01:42-04:25", "10:59-17:39 20:01-18:36", "15:21-20:50 20:14-19:31", "11:30-11:03 22:17-17:17 12:40-01:23 09:46-20:30", "10:47-03:22 10:58-01:09 10:41-17:20", "15:05-18:20 02:48-14:29", "16:53-03:11", "11:19-14:05 06:38-03:04 22:40-07:00", "18:54-19:09"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "19:09, day 18";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> timeTable = {"02:46-10:59", "16:42-14:24 04:42-22:11 08:07-05:28 20:14-21:44", "23:13-10:46 17:42-07:45", "23:02-19:41", "02:57-06:18 02:44-19:17 00:33-14:12", "04:59-07:11 17:09-13:29 20:59-16:35", "00:26-15:32", "23:15-06:45 05:32-14:35 07:27-14:54", "10:07-14:38", "16:52-19:49 16:36-19:51 20:42-19:08 12:38-15:41", "03:39-03:05 08:18-21:33 01:02-00:41 13:30-14:14", "02:58-16:46 19:45-06:48 20:50-15:26", "00:46-17:05 06:09-00:44 15:34-15:08 06:41-00:32", "05:02-04:55 03:51-14:54", "17:04-10:17 04:51-21:06", "22:47-04:27 20:56-18:05 00:41-13:54", "10:08-20:36 22:13-23:14 04:36-11:12", "11:11-18:42", "05:27-07:39", "08:36-01:58", "22:25-09:17 00:08-01:53 09:38-13:16", "21:57-05:14", "03:35-00:00 20:32-19:55 17:08-02:53 01:54-06:32", "16:04-19:40", "10:44-06:17 09:35-02:24 09:45-11:53 07:16-17:07", "06:05-09:01 03:25-23:10", "01:23-22:05 22:47-09:22 10:12-11:11 22:13-10:33", "20:35-07:20 22:29-04:40 03:09-07:58 01:12-17:15"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "04:40, day 22";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> timeTable = {"02:36-09:27 22:30-16:12", "23:15-04:28 12:14-03:16", "21:17-10:42 20:48-19:53 04:14-13:40 23:26-17:42", "17:30-15:30 15:25-10:56 16:54-05:38 04:27-02:42", "00:54-13:00 16:41-14:50 01:37-00:43 06:31-13:27", "17:49-02:52 04:51-15:17 03:30-09:12 10:31-21:29", "17:10-12:19", "10:26-17:45", "06:54-22:03", "17:12-19:08 19:21-03:03 09:38-19:28", "20:17-19:09 20:13-07:00", "06:43-10:22 03:52-09:17", "22:44-23:00", "07:49-11:39 08:56-19:59 00:49-19:28", "17:44-14:00 11:41-10:24 11:15-14:08 18:50-20:58", "01:33-21:32 04:32-20:20 21:12-16:56", "11:35-14:59 04:34-03:43", "09:14-11:42 08:36-02:33 17:29-08:16", "22:38-06:50 16:02-07:02 07:18-02:04", "10:55-02:53 07:37-17:13", "18:51-09:10 22:40-15:41 00:28-10:57 23:07-07:20", "14:29-17:03 18:40-02:46 01:11-09:24 17:04-06:04", "06:53-22:14 17:16-14:25", "16:25-16:29 04:01-20:19 19:55-15:46", "13:25-20:11 22:09-11:01"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "11:01, day 19";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> timeTable = {"02:10-06:25 19:35-14:12 15:48-04:55 08:32-13:03", "01:58-07:12 23:50-23:42 02:56-18:40 01:27-08:55", "21:48-05:09 17:29-12:00 04:42-20:07", "08:39-04:21", "21:00-23:22 05:06-06:39", "04:30-13:18 19:28-23:10", "16:33-12:04", "12:05-20:15 21:48-09:28"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "20:15, day 7";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> timeTable = {"08:59-08:59", "08:58-08:58", "08:57-08:57", "08:56-08:56", "08:55-08:55", "08:54-08:54", "08:53-08:53", "08:52-08:52", "08:51-08:51", "08:50-08:50", "08:49-08:49", "08:48-08:48", "08:47-08:47", "08:46-08:46", "08:45-08:45", "08:44-08:44", "08:43-08:43", "08:42-08:42", "08:41-08:41", "08:40-08:40", "08:39-08:39", "08:38-08:38", "08:37-08:37", "08:36-08:36", "08:35-08:35", "08:34-08:34", "08:33-08:33", "08:32-08:32", "08:31-08:31", "08:30-08:30", "08:29-08:29", "08:28-08:28", "08:27-08:27", "08:26-08:26", "08:25-08:25", "08:24-08:24", "08:23-08:23", "08:22-08:22", "08:21-08:21", "08:20-08:20", "08:19-08:19", "08:18-08:18", "08:17-08:17", "08:16-08:16", "08:15-08:15", "08:14-08:14", "08:13-08:13", "08:12-08:12", "08:11-08:11", "08:10-00:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00, day 101";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> timeTable = {"10:00-10:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "10:00, day 2";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> timeTable = {"09:00-09:00", "02:00-02:00", "01:00-00:59"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "00:59, day 6";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> timeTable = {"09:00-09:00 09:00-10:00", "10:00-11:00 09:30-11:30", "11:00-11:00 11:00-11:03", "12:00-11:00 12:00-10:59", "10:59-10:59 10:59-10:58", "10:58-10:58 10:58-10:59", "10:59-10:59 11:00-11:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "10:59, day 4";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> timeTable = {"09:00-13:57", "13:56-17:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "17:00, day 2";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> timeTable = {"08:59-09:00", "09:00-08:59", "08:59-09:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00, day 3";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> timeTable = {"07:00-06:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "06:00, day 3";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> timeTable = {"09:10-11:00 09:05-10:05", "10:10-12:00 11:00-11:05", "17:00-08:00", "09:00-08:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00, day 3";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> timeTable = {"04:00-05:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00, day 2";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> timeTable = {"09:01-09:01"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:01, day 2";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> timeTable = {"12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "12:00-12:00", "13:00-13:00", "14:00-14:00", "15:00-15:00", "16:00-16:00", "17:00-17:00", "18:00-18:00", "19:00-19:00", "20:00-20:00", "21:00-21:00", "22:00-22:00", "09:10-11:00 09:05-10:05", "10:10-12:00 11:00-11:05", "17:00-08:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00, day 29";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> timeTable = {"08:10-07:20 07:30-06:50"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "06:50, day 3";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> timeTable = {"08:00-09:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00, day 2";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> timeTable = {"09:00-09:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00, day 2";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> timeTable = {"08:59-08:59"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:59, day 3";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> timeTable = {"09:00-09:00", "08:59-08:58"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:58, day 4";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> timeTable = {"09:00-10:00 09:05-09:10", "09:30-09:45"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:45, day 1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> timeTable = {"10:00-08:59", "08:59-09:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00, day 2";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> timeTable = {"08:10-11:00 09:05-08:05", "10:10-12:00 11:00-11:05", "17:00-08:00", "09:00-08:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00, day 4";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> timeTable = {"10:00-13:00 12:00-15:00", "11:00-16:00 14:00-19:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "19:00, day 1";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> timeTable = {"08:10-21:00 09:05-07:05", "10:10-12:00 11:00-11:05", "17:00-08:00", "09:00-08:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00, day 4";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> timeTable = {"10:00-15:00 11:00-12:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00, day 1";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> timeTable = {"08:59-09:50 09:00-09:55"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:55, day 1";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> timeTable = {"09:00-00:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00, day 2";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> timeTable = {"09:00-09:00", "08:59-08:58", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00", "09:00-09:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00, day 18";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> timeTable = {"08:59-08:59", "08:58-08:58"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:58, day 5";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> timeTable = {"09:00-11:11 11:09-11:10"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "11:10, day 1";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> timeTable = {"08:15-09:00 10:00-10:00", "09:00-09:15 10:00-10:10"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:15, day 2";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> timeTable = {"10:00-13:00 23:00-00:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "13:00, day 1";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> timeTable = {"09:00-08:57 08:00-08:40"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "08:40, day 2";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> timeTable = {"09:00-09:00", "09:00-09:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00, day 3";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> timeTable = {"08:00-07:00"};
    TravellingByTrain* pObj = new TravellingByTrain();
    clock_t start = clock();
    string result = pObj->earliestArrival(timeTable);
    clock_t end = clock();
    delete pObj;
    string expected = "07:00, day 3";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9958600&rd=6539&pm=4455
********************************************************************************
#include <algorithm> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <string> 
#include <utility> 
#include <stdio.h> 
#include <iostream> 
#include <sstream> 
#include <math.h> 
 
using namespace std; 
 
typedef vector<string> VS; 
 
#define REP(var, n) for (int var = 0; var < (n); ++var) 
 
enum AddPatt { NOTPATT = 1, PATT = 3, BOTH = 2 }; 
// splits s into substrings with chars from patt or not from patt and returns 
//  those as indicated by add. 
VS split(const string& s, const string& patt = " ", AddPatt add = NOTPATT) { 
  VS res; 
  if (s.length() == 0) 
    return res; 
  bool inpatt = patt.find(s[0]) != patt.npos; 
  size_t st = 0; 
  for (size_t i = 1; i < s.length(); ++i) 
    if ((patt.find(s[i]) != patt.npos) != inpatt) { 
      if ((inpatt && add >= 2) || (!inpatt && add <= 2)) 
        res.push_back(s.substr(st, i-st)); 
      inpatt = !inpatt; 
      st = i; 
    } 
    if ((inpatt && add >= 2) || (!inpatt && add <= 2)) 
      res.push_back(s.substr(st)); 
    return res; 
} 
 
class TravellingByTrain 
{  
public:  
  string earliestArrival(vector <string> tt) {  
    int t = 9*60 + 1440; 
    REP(i, tt.size()) { 
      VS r = split(tt[i].c_str()); 
      int dt = t%1440; 
      int bt = 10000; 
      REP(j, r.size()) { 
        int dh,dm,ah,am; 
        sscanf(r[j].c_str(), "%d:%d-%d:%d", &dh, &dm, &ah, &am); 
        int d = dh*60+dm; 
        int a = ah*60+am; 
        if (a <= d) a+=1440; 
        int wt = d - dt; 
        if (wt < 0) wt += 1440; 
        bt = min(bt, wt+a-d); 
      } 
      t += bt; 
    } 
    char buf[100]; 
    sprintf(buf, "%02d:%02d, day %d", t%1440/60, t%60, t/1440); 
    return buf; 
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/