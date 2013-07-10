/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8058
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

class MirroredClock {
public:
    string whatTimeIsIt(string time);
};

string MirroredClock::whatTimeIsIt(string time) {
    string ret;
    return ret;
}


int test0() {
    string time = "10:00";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:00";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string time = "01:15";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:45";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string time = "03:40";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:20";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string time = "00:00";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string time = "11:53";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:07";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string time = "01:01";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:59";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string time = "07:23";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:37";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string time = "09:59";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:01";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string time = "00:13";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:47";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string time = "00:30";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:30";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string time = "06:00";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:00";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string time = "06:01";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:59";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string time = "05:59";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:01";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string time = "08:12";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:48";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string time = "06:59";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:01";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string time = "11:00";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string time = "09:09";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:51";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string time = "07:56";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:04";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string time = "06:24";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:36";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string time = "02:05";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:55";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string time = "05:33";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:27";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string time = "06:26";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:34";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string time = "04:52";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:08";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string time = "06:56";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:04";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string time = "00:40";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:20";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string time = "03:09";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:51";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string time = "09:56";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:04";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string time = "05:17";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:43";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string time = "08:50";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:10";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string time = "05:33";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:27";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string time = "07:49";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:11";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string time = "05:22";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:38";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string time = "04:56";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:04";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string time = "07:02";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:58";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string time = "06:09";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:51";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string time = "06:43";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:17";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string time = "00:01";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:59";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string time = "06:30";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:30";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string time = "00:58";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:02";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string time = "00:37";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:23";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string time = "03:00";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:00";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string time = "03:30";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:30";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string time = "01:00";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:00";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string time = "02:06";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:54";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string time = "00:53";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:07";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string time = "00:15";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:45";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string time = "10:30";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:30";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string time = "10:51";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:09";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string time = "00:10";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:50";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string time = "04:01";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:59";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string time = "11:48";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:12";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string time = "03:45";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:15";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string time = "06:12";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:48";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string time = "11:45";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:15";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string time = "00:11";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:49";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string time = "00:05";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:55";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string time = "00:12";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:48";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string time = "09:30";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:30";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string time = "06:11";
    MirroredClock* pObj = new MirroredClock();
    clock_t start = clock();
    string result = pObj->whatTimeIsIt(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:49";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22682056&rd=10777&pm=8058
********************************************************************************
#include<iostream>
#include<string>
using namespace std;
 
class MirroredClock
{
public:
  string whatTimeIsIt(string time)
  {
    int hour=0,min=0,reshour=12,resmin=0;
    string shour= time.substr(0,2);
    string smin=time.substr(3,2);
    hour+=(shour.at(1)-'0');
    hour+=((shour.at(0)-'0')*10);
    min+=(smin.at(1)-'0');
    min+=((smin.at(0)-'0')*10);
    if(min!=0)
    {
      resmin=60-min;
      reshour-=1;
      reshour-=hour;
    }
    else
    {
      resmin=0;
      reshour-=hour;
      if(reshour==12)
        reshour=0;
    }
    string sresmin,sreshour,result;
    if(resmin==0)
      sresmin="00";
    else
    {
      char cmin[2]={'0'};
      min=resmin%10;
      cmin[1]=min+'0';
      min=resmin/10;
      cmin[0]=min+'0';
      sresmin=cmin;
      sresmin.resize(2);
    }
    if(reshour==0)
      sreshour="00";
    else
    {
      char chour[2];
      hour=reshour%10;
      chour[1]=hour+'0';
      hour=reshour/10;
      chour[0]=hour+'0';
      sreshour=chour;
      sreshour.resize(2);
    }
    
    result+=sreshour;
    result+=":";
    result+=sresmin;
    return result;  
  }
};

********************************************************************************
*******************************************************************************/