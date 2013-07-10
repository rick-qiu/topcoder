/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4520
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

class TimeCard {
public:
    string leave(vector<string> time);
};

string TimeCard::leave(vector<string> time) {
    string ret;
    return ret;
}


int test0() {
    vector<string> time = {"03:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "BELOW 40";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> time = {"09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "09:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00,pm";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> time = {"12:00,am", "08:00,pm", "12:00,am", "08:00,pm", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,am";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> time = {"12:00,pm", "08:00,pm", "12:00,am", "08:00,pm", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,pm";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> time = {"09:00,am", "04:31,pm", "09:00,am", "04:31,pm", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "03:53,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:51,pm";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> time = {"12:09,am", "12:11,am", "01:03,pm", "11:02,pm", "01:03,pm", "11:02,pm", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:59,pm";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> time = {"12:09,am", "12:07,pm", "01:03,pm", "11:02,pm", "01:03,pm", "11:02,pm", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:03,am";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> time = {"12:09,am", "12:11,pm", "01:03,pm", "11:02,pm", "01:03,pm", "11:02,pm", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:59,am";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> time = {"12:09,pm", "12:11,am", "01:03,pm", "11:02,pm", "01:03,pm", "11:02,pm", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:59,am";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> time = {"12:09,pm", "12:07,am", "01:03,pm", "11:02,pm", "01:03,pm", "11:02,pm", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:03,am";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> time = {"01:11,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "BELOW 40";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> time = {"01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "01:01,pm", "02:00,pm", "10:00,am", "12:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00,am";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> time = {"12:23,am", "12:23,pm", "12:23,am", "12:23,pm", "12:23,am", "12:23,pm", "12:23,am", "12:23,pm", "03:03,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "ABOVE 40";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> time = {"12:00,am", "08:00,pm", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00,pm";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> time = {"11:11,am", "06:18,am", "06:30,pm", "01:01,am", "02:50,pm", "07:07,pm", "02:14,am", "02:26,am", "05:53,pm", "01:13,am", "03:39,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:12,am";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> time = {"08:33,pm", "09:16,am", "05:53,am", "08:39,pm", "01:25,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:56,pm";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> time = {"07:31,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "BELOW 40";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> time = {"05:31,pm", "08:42,pm", "02:37,am", "11:11,am", "01:37,am", "11:11,am", "03:39,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:20,pm";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> time = {"08:08,pm", "12:24,pm", "01:49,am", "09:09,am", "12:24,am", "07:07,am", "10:10,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:51,am";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> time = {"09:33,pm", "10:58,am", "09:33,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "BELOW 40";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> time = {"12:48,am", "12:34,pm", "11:55,am", "10:50,pm", "01:14,pm", "12:52,am", "01:13,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:54,pm";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> time = {"03:27,pm", "10:34,pm", "07:19,am", "12:00,pm", "07:07,am", "03:39,pm", "03:39,pm", "06:18,am", "04:04,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:05,am";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> time = {"02:20,pm", "05:19,am", "10:34,am", "06:30,am", "10:22,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:27,am";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> time = {"08:47,pm", "03:50,pm", "12:24,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "BELOW 40";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> time = {"08:09,am", "10:36,am", "08:37,pm", "08:01,am", "12:01,pm", "11:07,pm", "09:21,pm", "10:52,pm", "03:38,am", "01:10,pm", "04:52,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:52,am";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> time = {"12:11,pm", "07:36,pm", "05:56,am", "12:41,am", "11:31,pm", "06:57,am", "03:39,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:03,pm";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> time = {"10:58,am", "03:30,am", "06:59,pm", "07:55,am", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:31,am";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> time = {"09:51,pm", "04:48,am", "04:07,pm", "08:49,pm", "08:12,am", "10:31,pm", "11:51,am", "06:10,pm", "04:52,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:35,pm";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> time = {"06:15,am", "09:54,pm", "01:09,am", "07:40,am", "11:05,am", "12:20,pm", "04:52,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:27,pm";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> time = {"03:23,pm", "08:49,am", "05:17,pm", "07:07,pm", "06:25,pm", "03:34,am", "12:34,pm", "04:41,pm", "08:44,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:12,pm";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> time = {"11:00,am", "12:00,am", "11:00,pm", "12:00,pm", "11:59,am", "12:01,pm", "11:59,pm", "12:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am", "09:01,am", "09:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:36,pm";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> time = {"12:00,am", "08:00,pm", "12:00,am", "08:00,pm", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,am";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> time = {"12:00,am", "12:00,am", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "BELOW 40";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> time = {"12:00,pm", "08:00,pm", "12:00,am", "08:00,pm", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,pm";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> time = {"09:00,am", "04:31,pm", "09:00,am", "04:31,pm", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "03:53,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:51,pm";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> time = {"02:00,pm", "01:00,am", "02:00,pm", "01:00,am", "02:00,pm", "01:00,am", "02:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00,pm";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> time = {"12:00,am", "07:59,pm", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "BELOW 40";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> time = {"04:00,am", "12:00,am", "04:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,am";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> time = {"08:00,am", "08:00,pm", "08:00,am", "08:00,pm", "08:00,am", "08:00,pm", "08:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,am";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> time = {"11:59,pm", "12:01,am", "11:59,pm", "05:00,pm", "11:59,pm", "05:00,pm", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:55,am";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> time = {"12:00,am", "08:00,pm", "07:15,am", "03:14,am", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,am";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> time = {"09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "12:50,am", "05:00,pm", "09:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "ABOVE 40";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> time = {"09:00,pm", "05:00,pm", "09:00,pm", "04:59,pm", "11:59,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,am";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> time = {"09:00,am", "05:00,am", "09:00,am", "05:00,pm", "09:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00,pm";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> time = {"12:00,pm", "08:00,am", "12:00,pm", "08:00,am", "12:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,pm";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> time = {"09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "09:00,am", "11:00,pm", "05:11,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "ABOVE 40";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> time = {"09:14,pm", "05:14,pm", "09:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00,am";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> time = {"01:00,am", "01:00,pm", "01:00,am", "01:00,pm", "01:00,am", "01:00,pm", "01:00,am", "01:00,pm", "01:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "ABOVE 40";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> time = {"11:00,pm", "07:00,am", "11:00,pm", "07:00,am", "11:00,pm", "07:00,am", "11:00,pm", "07:00,am", "11:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:00,am";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> time = {"03:00,pm", "03:01,pm", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "BELOW 40";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> time = {"08:00,am", "08:00,pm", "08:00,am", "08:00,pm", "08:00,am", "08:00,pm", "08:00,am", "08:00,pm", "08:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "ABOVE 40";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> time = {"09:00,am", "04:31,pm", "09:00,am", "04:31,pm", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "04:53,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:51,am";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> time = {"12:00,pm", "08:00,pm", "12:00,am", "08:00,pm", "10:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:00,am";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> time = {"12:00,am", "08:00,pm", "04:01,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:01,am";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> time = {"12:00,am", "07:01,pm", "12:00,am", "08:00,pm", "12:00,am", "01:00,am", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "ABOVE 40";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> time = {"08:00,pm", "08:00,am", "08:00,pm", "09:00,am", "01:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:00,pm";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> time = {"12:00,am", "08:00,pm", "11:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:00,pm";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> time = {"11:59,am", "11:59,pm", "11:59,am", "11:59,pm", "11:59,am", "11:59,pm", "11:59,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:59,pm";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> time = {"10:00,am", "02:00,am", "10:00,am", "02:00,am", "10:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:00,pm";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> time = {"11:00,pm", "09:00,am", "11:00,pm", "09:00,am", "11:00,pm", "09:00,am", "11:00,pm", "09:00,am", "11:00,pm", "09:00,am", "09:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "ABOVE 40";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> time = {"12:00,am", "08:00,pm", "12:00,am", "08:00,am", "12:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00,am";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> time = {"09:00,am", "05:00,pm", "01:00,pm", "01:00,am", "09:00,am", "05:00,pm", "09:00,am", "05:00,pm", "09:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00,pm";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> time = {"12:00,am", "12:00,pm", "12:00,am", "08:01,am", "12:00,pm"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:59,am";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> time = {"02:00,am", "08:00,pm", "02:00,am", "08:00,pm", "12:20,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:20,am";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> time = {"12:00,am", "08:00,pm", "12:00,am"};
    TimeCard* pObj = new TimeCard();
    clock_t start = clock();
    string result = pObj->leave(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00,pm";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15601490&rd=8005&pm=4520
********************************************************************************
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <map>
#include <set>
#include <iostream>
using namespace std;
 
int calc(string tm)
{
  char c1,c2,c3,c4,c5;
  sscanf((char *)tm.c_str(),"%c%c:%c%c,%cm",&c1,&c2,&c3,&c4,&c5);
  int hh,mm;
  hh=(c1-'0')*10+(c2-'0');
  mm=(c3-'0')*10+(c4-'0');
  hh%=12;
  int ans=hh*60+mm;
  if(c5=='p') ans+=720;
  return ans;
}
 
string goback(int val)
{
  val%=1440;
  int hh=val/60,mm=val%60;
  char cc;
  if(hh>=12) cc='p'; else cc='a';
  hh%=12;
  if(hh==0) hh=12;
  char str[100];
  sprintf(str,"%s%d:%s%d,%cm",hh<10?"0":"",hh,mm<10?"0":"",mm,cc);
  return string(str);
}
 
class TimeCard
{
public:
string leave(vector<string> time)
{
  int n=time.size(),sum=0;
 
  for(int i=0;i<n/2;i++)
  {
    string s1=time[i*2];
    string s2=time[i*2+1];
    int v1=calc(s1);
    int v2=calc(s2);
    if(v2<v1) v2+=1440;
    sum+=(v2-v1);
  }  
  if(sum>40*60) return string("ABOVE 40");
  else if(40*60-sum>20*60) return string("BELOW 40");
  else
  {
    int rem=40*60-sum;
    int vv=calc(time.back());
    return goback(vv+rem);
  }
}  
};

********************************************************************************
*******************************************************************************/