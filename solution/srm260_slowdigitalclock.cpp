/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4765
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

class SlowDigitalClock {
public:
    string firstCorrectTime(string currentTime, string clockTime, int secsPerMinute);
};

string SlowDigitalClock::firstCorrectTime(string currentTime, string clockTime, int secsPerMinute) {
    string ret;
    return ret;
}


int test0() {
    string currentTime = "01:11";
    string clockTime = "21:09";
    int secsPerMinute = 61;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:12";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string currentTime = "01:10";
    string clockTime = "21:09";
    int secsPerMinute = 61;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:12";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string currentTime = "12:50";
    string clockTime = "05:21";
    int secsPerMinute = 125;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:50";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string currentTime = "05:46";
    string clockTime = "23:50";
    int secsPerMinute = 240;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "11:10";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string currentTime = "12:34";
    string clockTime = "23:45";
    int secsPerMinute = 197;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "02:11";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string currentTime = "12:34";
    string clockTime = "23:45";
    int secsPerMinute = 300;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string currentTime = "00:00";
    string clockTime = "00:01";
    int secsPerMinute = 86;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:22";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string currentTime = "00:00";
    string clockTime = "01:21";
    int secsPerMinute = 77;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "15:02";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string currentTime = "21:28";
    string clockTime = "05:35";
    int secsPerMinute = 71;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "20:50";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string currentTime = "23:04";
    string clockTime = "20:17";
    int secsPerMinute = 77;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string currentTime = "15:19";
    string clockTime = "12:34";
    int secsPerMinute = 73;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string currentTime = "06:49";
    string clockTime = "01:40";
    int secsPerMinute = 180;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string currentTime = "22:15";
    string clockTime = "07:51";
    int secsPerMinute = 720;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string currentTime = "22:08";
    string clockTime = "22:12";
    int secsPerMinute = 288;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string currentTime = "04:18";
    string clockTime = "21:29";
    int secsPerMinute = 170;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string currentTime = "07:43";
    string clockTime = "20:52";
    int secsPerMinute = 354;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string currentTime = "01:32";
    string clockTime = "11:09";
    int secsPerMinute = 900;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string currentTime = "11:07";
    string clockTime = "05:20";
    int secsPerMinute = 114;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string currentTime = "05:00";
    string clockTime = "22:59";
    int secsPerMinute = 228;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string currentTime = "20:46";
    string clockTime = "23:39";
    int secsPerMinute = 84;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string currentTime = "02:32";
    string clockTime = "18:07";
    int secsPerMinute = 120;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string currentTime = "01:51";
    string clockTime = "15:10";
    int secsPerMinute = 61;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:51";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string currentTime = "21:10";
    string clockTime = "01:12";
    int secsPerMinute = 1000;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "21:10";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string currentTime = "00:00";
    string clockTime = "00:00";
    int secsPerMinute = 123;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string currentTime = "21:46";
    string clockTime = "18:02";
    int secsPerMinute = 437;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "15:12";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string currentTime = "02:11";
    string clockTime = "09:25";
    int secsPerMinute = 516;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "15:00";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string currentTime = "11:54";
    string clockTime = "10:22";
    int secsPerMinute = 78;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:10";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string currentTime = "18:50";
    string clockTime = "01:12";
    int secsPerMinute = 236;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "02:01";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string currentTime = "17:25";
    string clockTime = "04:54";
    int secsPerMinute = 322;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string currentTime = "19:41";
    string clockTime = "18:05";
    int secsPerMinute = 239;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "11:01";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string currentTime = "04:24";
    string clockTime = "14:03";
    int secsPerMinute = 842;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "22:02";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string currentTime = "19:08";
    string clockTime = "00:45";
    int secsPerMinute = 681;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "11:12";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string currentTime = "03:03";
    string clockTime = "11:04";
    int secsPerMinute = 311;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:02";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string currentTime = "04:17";
    string clockTime = "17:59";
    int secsPerMinute = 624;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "21:00";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string currentTime = "22:15";
    string clockTime = "11:02";
    int secsPerMinute = 793;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "10:12";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string currentTime = "10:11";
    string clockTime = "02:03";
    int secsPerMinute = 470;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "11:20";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string currentTime = "05:54";
    string clockTime = "02:28";
    int secsPerMinute = 874;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "21:50";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string currentTime = "20:50";
    string clockTime = "19:04";
    int secsPerMinute = 574;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "21:50";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string currentTime = "16:24";
    string clockTime = "17:20";
    int secsPerMinute = 569;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:22";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string currentTime = "03:05";
    string clockTime = "15:27";
    int secsPerMinute = 224;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:01";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string currentTime = "15:17";
    string clockTime = "11:30";
    int secsPerMinute = 122;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "22:20";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string currentTime = "17:25";
    string clockTime = "00:25";
    int secsPerMinute = 461;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:22";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string currentTime = "09:41";
    string clockTime = "22:07";
    int secsPerMinute = 476;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "10:20";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string currentTime = "13:34";
    string clockTime = "16:22";
    int secsPerMinute = 956;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:11";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string currentTime = "09:44";
    string clockTime = "02:05";
    int secsPerMinute = 669;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:21";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string currentTime = "06:22";
    string clockTime = "18:31";
    int secsPerMinute = 687;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string currentTime = "19:43";
    string clockTime = "13:28";
    int secsPerMinute = 64;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "21:01";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string currentTime = "11:23";
    string clockTime = "23:28";
    int secsPerMinute = 266;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "05:22";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string currentTime = "19:58";
    string clockTime = "18:40";
    int secsPerMinute = 250;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "05:02";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string currentTime = "15:08";
    string clockTime = "13:39";
    int secsPerMinute = 617;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:02";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string currentTime = "07:53";
    string clockTime = "19:27";
    int secsPerMinute = 669;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "22:00";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string currentTime = "22:18";
    string clockTime = "12:22";
    int secsPerMinute = 999;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "22:21";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string currentTime = "04:30";
    string clockTime = "20:20";
    int secsPerMinute = 121;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "02:51";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string currentTime = "03:57";
    string clockTime = "21:03";
    int secsPerMinute = 903;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "21:22";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string currentTime = "21:27";
    string clockTime = "14:33";
    int secsPerMinute = 912;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "15:00";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string currentTime = "03:21";
    string clockTime = "21:36";
    int secsPerMinute = 248;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:11";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string currentTime = "08:07";
    string clockTime = "14:20";
    int secsPerMinute = 854;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "22:51";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string currentTime = "20:20";
    string clockTime = "06:35";
    int secsPerMinute = 690;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:11";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string currentTime = "06:07";
    string clockTime = "13:53";
    int secsPerMinute = 382;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "20:20";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string currentTime = "14:45";
    string clockTime = "00:14";
    int secsPerMinute = 747;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:02";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string currentTime = "22:31";
    string clockTime = "06:02";
    int secsPerMinute = 505;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:10";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string currentTime = "18:38";
    string clockTime = "06:26";
    int secsPerMinute = 539;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "20:02";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string currentTime = "00:50";
    string clockTime = "22:22";
    int secsPerMinute = 191;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "20:21";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string currentTime = "14:36";
    string clockTime = "07:04";
    int secsPerMinute = 773;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "22:11";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string currentTime = "00:00";
    string clockTime = "00:01";
    int secsPerMinute = 86;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:22";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string currentTime = "12:50";
    string clockTime = "05:21";
    int secsPerMinute = 125;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:50";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string currentTime = "23:18";
    string clockTime = "03:02";
    int secsPerMinute = 997;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "10:12";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string currentTime = "01:07";
    string clockTime = "02:36";
    int secsPerMinute = 77;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:20";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string currentTime = "12:34";
    string clockTime = "23:45";
    int secsPerMinute = 300;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string currentTime = "12:34";
    string clockTime = "23:45";
    int secsPerMinute = 197;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "02:11";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string currentTime = "19:00";
    string clockTime = "17:00";
    int secsPerMinute = 807;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "05:51";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string currentTime = "08:29";
    string clockTime = "22:14";
    int secsPerMinute = 532;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:10";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string currentTime = "21:24";
    string clockTime = "11:35";
    int secsPerMinute = 441;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "05:51";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string currentTime = "00:01";
    string clockTime = "00:00";
    int secsPerMinute = 73;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string currentTime = "10:05";
    string clockTime = "00:25";
    int secsPerMinute = 737;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:10";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string currentTime = "00:01";
    string clockTime = "00:00";
    int secsPerMinute = 71;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string currentTime = "12:34";
    string clockTime = "23:23";
    int secsPerMinute = 61;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "05:01";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string currentTime = "18:44";
    string clockTime = "09:19";
    int secsPerMinute = 922;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "22:00";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string currentTime = "10:19";
    string clockTime = "02:01";
    int secsPerMinute = 999;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "10:20";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string currentTime = "12:34";
    string clockTime = "23:45";
    int secsPerMinute = 358;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "20:21";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string currentTime = "13:22";
    string clockTime = "11:00";
    int secsPerMinute = 61;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "12:50";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string currentTime = "23:59";
    string clockTime = "00:00";
    int secsPerMinute = 120;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string currentTime = "16:07";
    string clockTime = "01:41";
    int secsPerMinute = 321;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "02:21";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string currentTime = "08:10";
    string clockTime = "13:06";
    int secsPerMinute = 922;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string currentTime = "07:53";
    string clockTime = "18:53";
    int secsPerMinute = 362;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "15:02";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string currentTime = "22:10";
    string clockTime = "11:54";
    int secsPerMinute = 358;
    SlowDigitalClock* pObj = new SlowDigitalClock();
    clock_t start = clock();
    string result = pObj->firstCorrectTime(currentTime, clockTime, secsPerMinute);
    clock_t end = clock();
    delete pObj;
    string expected = "10:12";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10531352&rd=7994&pm=4765
********************************************************************************
/* A solution by 1711st Very Imaginative Programmer :-) */ 
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
using namespace std; 
 
#define REP(var, hi) for (var = 0; var < (hi); var++) 
#define GETMIN(X, Y) ((X) < (Y) ? (X) : (Y)) 
typedef vector <int> VI; 
typedef vector <string> VS; 
 
vector <string> split(const string& s, const string& delim = " ") { vector<string> res; string t; for ( unsigned int i = 0 ; i != s.size() ; i++ ) { if ( delim.find( s[i] ) != string::npos ) { if ( !t.empty() ) { res.push_back( t ); t = ""; } } else { t += s[i]; } } if ( !t.empty() ) { res.push_back(t); } return res; } 
vector <int> splitInt(const string& s, const string& delim = " ") { vector <string> tok = split(s, delim); vector <int> res; for (unsigned int i = 0; i != tok.size(); i++) res.push_back( atoi( tok[i].c_str() ) ); return res; } 
 
int val(int v) 
{ 
  if (v == 6) 
    return 9; 
  if (v == 9) 
    return 6; 
  if (v == 3 || v == 4 || v == 7) 
    return -1; 
  return v; 
} 
 
/*______________________________________*/ 
 
int h, m, s, h1, m1, s1; 
int uph, upm; 
 
class SlowDigitalClock 
{ 
public: 
    /*______________________________________*/ 
  bool doit() 
  { 
    if (val(m1 % 10) == -1 || 
      val(m1 / 10) == -1 || 
      val(h1 % 10) == -1 || 
      val(h1 / 10) == -1 ) 
      return false; 
    uph = val(m1 % 10) * 10 + val(m1 / 10); 
    upm = val(h1 % 10) * 10 + val(h1 / 10);   
    return true; 
  } 
    /*______________________________________*/ 
    string firstCorrectTime(string currentTime, string clockTime, int secsPerMinute) 
    { 
    int i, k; 
 
    VI tmp = splitInt(currentTime, ":"); 
    h = tmp[0]; 
    m = tmp[1]; 
    s = 0; 
 
    VI tmp2 = splitInt(clockTime, ":"); 
    h1 = tmp2[0]; 
    m1 = tmp2[1]; 
    s1 = 0; 
 
    string res = "??:??"; 
 
    REP(i, 6000000) 
    {   
      if (doit()) 
      {         
        if (uph == h && upm == m) 
        {           
          res[0] = (h / 10) + '0';          res[1] = (h % 10) + '0'; 
          res[3] = (m / 10) + '0';          res[4] = (m % 10) + '0'; 
          return res; 
        } 
      } 
 
      k = GETMIN(secsPerMinute - s1, 60 - s); 
 
      s += k; 
      m += (s / 60);        s = s % 60; 
      h = (h + (m / 60)) % 24;  m = m % 60; 
     
      s1 += k; 
      m1 += s1 / secsPerMinute; 
      s1 = s1 % secsPerMinute; 
      h1 = (h1 + (m1 / 60)) % 24; 
      m1 = m1 % 60; 
    }   
    return ""; 
    } 
    /*______________________________________*/ 
     
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/