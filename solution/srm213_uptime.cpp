/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2893
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

class Uptime {
public:
    string calcUptime(string started, string now);
};

string Uptime::calcUptime(string started, string now) {
    string ret;
    return ret;
}


int test0() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "8 Jun 2004 at 07:16:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 2h 34m 56s";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "7 Jun 2004 at 04:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
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
    string started = "28 Feb 2004 at 01:23:45 PM";
    string now = "1 Mar 2004 at 12:34:56 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 11h 11m 11s";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string started = "28 Feb 2005 at 01:23:45 PM";
    string now = "1 Jan 2015 at 12:34:56 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "3593d 11h 11m 11s";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string started = "1 Jan 1900 at 12:00:00 AM";
    string now = "31 Dec 2199 at 11:59:59 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "109572d 23h 59m 59s";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string started = "1 Jan 1900 at 12:00:00 AM";
    string now = "31 Dec 1900 at 11:59:59 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "364d 23h 59m 59s";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string started = "1 Jan 1900 at 12:00:00 AM";
    string now = "28 Feb 1900 at 11:59:59 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "58d 23h 59m 59s";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string started = "1 Jan 2000 at 12:00:00 AM";
    string now = "28 Feb 2000 at 11:59:59 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "58d 23h 59m 59s";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string started = "1 Jan 2000 at 12:00:00 AM";
    string now = "29 Feb 2000 at 11:59:59 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "59d 23h 59m 59s";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string started = "1 Mar 2000 at 12:00:00 AM";
    string now = "28 Feb 2004 at 11:59:59 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1459d 23h 59m 59s";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string started = "1 Jan 2000 at 12:00:00 AM";
    string now = "1 Jan 2000 at 12:00:01 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1s";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string started = "1 Jan 2000 at 12:00:00 AM";
    string now = "1 Jan 2000 at 12:01:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1m";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string started = "1 Jan 2000 at 12:00:00 AM";
    string now = "1 Jan 2000 at 01:00:00 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "13h";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string started = "1 Apr 2000 at 12:00:00 AM";
    string now = "1 May 2000 at 12:00:01 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "30d 1s";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string started = "1 Jun 2000 at 12:00:00 AM";
    string now = "1 Jul 2000 at 12:01:01 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "30d 1m 1s";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string started = "1 Aug 2000 at 12:00:00 AM";
    string now = "1 Sep 2000 at 12:01:01 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "31d 1m 1s";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string started = "1 Oct 2000 at 01:00:00 AM";
    string now = "1 Nov 2000 at 12:00:01 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "30d 23h 1s";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string started = "1 Nov 2000 at 12:00:00 PM";
    string now = "1 Dec 2000 at 12:00:01 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "29d 12h 1s";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string started = "31 Dec 2000 at 12:00:00 AM";
    string now = "1 Jan 2001 at 12:00:01 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 1s";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string started = "1 Jan 1900 at 02:21:47 AM";
    string now = "2 Feb 1963 at 05:52:38 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "23042d 3h 30m 51s";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string started = "3 Mar 2000 at 09:27:40 AM";
    string now = "4 Apr 2100 at 02:25:06 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "36555d 16h 57m 26s";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string started = "5 May 2101 at 01:27:14 AM";
    string now = "6 Jun 2199 at 05:10:57 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "35826d 15h 43m 43s";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string started = "7 Jul 1979 at 05:31:10 PM";
    string now = "8 Aug 2007 at 07:20:32 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "10258d 13h 49m 22s";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string started = "9 Sep 1922 at 06:21:56 PM";
    string now = "10 Oct 2032 at 04:33:20 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "40208d 10h 11m 24s";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string started = "11 Nov 2047 at 08:00:28 PM";
    string now = "12 Dec 2082 at 12:26:48 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "12814d 16h 26m 20s";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string started = "13 Jan 1923 at 02:54:06 PM";
    string now = "14 Feb 1937 at 08:19:44 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "5145d 17h 25m 38s";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string started = "15 Mar 2004 at 03:32:54 AM";
    string now = "16 Apr 2049 at 10:21:49 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "16468d 6h 48m 55s";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string started = "17 May 1966 at 03:10:24 PM";
    string now = "18 Jun 2138 at 05:13:35 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "62854d 2h 3m 11s";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string started = "19 Jul 2098 at 08:15:11 PM";
    string now = "20 Aug 2159 at 09:20:42 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "22310d 13h 5m 31s";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string started = "21 Sep 2056 at 01:30:24 PM";
    string now = "22 Oct 2084 at 05:35:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "10258d 4h 5m 4s";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string started = "23 Nov 1966 at 09:19:29 AM";
    string now = "24 Dec 1995 at 02:18:25 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "10623d 4h 58m 56s";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string started = "25 Jan 1922 at 05:58:52 AM";
    string now = "26 Feb 2190 at 11:53:14 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "97918d 5h 54m 22s";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string started = "27 Mar 2067 at 02:45:10 PM";
    string now = "28 Apr 2067 at 10:24:30 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "31d 19h 39m 20s";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string started = "29 May 1914 at 03:39:06 AM";
    string now = "30 Jun 2123 at 07:51:09 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "76368d 16h 12m 3s";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string started = "1 Jan 1900 at 12:00:00 AM";
    string now = "1 Jan 1901 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "365d";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string started = "1 Jan 1904 at 12:00:00 AM";
    string now = "1 Jan 1905 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "366d";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string started = "1 Jan 1900 at 12:00:00 AM";
    string now = "1 Jan 1900 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string started = "1 Jun 2000 at 12:00:00 AM";
    string now = "1 Jul 2000 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "30d";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string started = "1 Jun 2000 at 12:00:00 AM";
    string now = "1 Aug 2000 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "61d";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string started = "1 Jun 2000 at 12:00:00 AM";
    string now = "1 Sep 2000 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "92d";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string started = "1 Jun 2000 at 12:00:00 AM";
    string now = "1 Oct 2000 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "122d";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string started = "1 Jun 2000 at 12:00:00 AM";
    string now = "1 Nov 2000 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "153d";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string started = "1 Jun 2000 at 12:00:00 AM";
    string now = "1 Dec 2000 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "183d";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "8 Jun 2004 at 07:16:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 2h 34m 56s";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string started = "4 Apr 2004 at 01:59:00 AM";
    string now = "4 Apr 2004 at 03:59:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "2h";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string started = "7 Jun 1901 at 04:41:32 PM";
    string now = "7 Jun 2004 at 04:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "37621d";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string started = "7 Jun 2004 at 04:41:28 PM";
    string now = "8 Jun 2004 at 07:16:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 2h 35m";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "9 Jun 2004 at 12:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 20h";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string started = "1 Jan 2004 at 01:02:02 AM";
    string now = "2 Jan 2004 at 01:02:02 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string started = "25 Jan 1922 at 05:58:52 AM";
    string now = "26 Feb 2190 at 11:53:14 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "97918d 5h 54m 22s";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "7 Jun 2004 at 04:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "7 Jun 2004 at 06:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "2h";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "8 Jun 2004 at 04:41:33 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 1s";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "8 Jun 2004 at 04:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string started = "8 May 1900 at 07:16:28 PM";
    string now = "8 May 2004 at 07:16:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "37986d";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "7 Jun 2004 at 04:41:33 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1s";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string started = "15 Jan 2004 at 01:00:00 PM";
    string now = "15 Jun 2004 at 01:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "151d 12h";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string started = "7 Jun 1900 at 04:41:32 PM";
    string now = "7 Jun 2199 at 04:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "109208d";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string started = "31 Jan 1900 at 12:58:52 AM";
    string now = "1 Mar 2199 at 12:58:51 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "109236d 23h 59m 59s";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "7 Jun 2004 at 06:43:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "2h 2m";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string started = "7 Jun 2004 at 12:41:32 PM";
    string now = "8 Jun 2004 at 07:16:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 6h 34m 56s";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string started = "27 Feb 2004 at 01:23:45 PM";
    string now = "28 Feb 2004 at 01:23:45 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "8 Jun 2004 at 04:43:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 2m";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string started = "1 Jan 1999 at 12:00:00 AM";
    string now = "2 Jan 2004 at 01:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1827d 1h";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string started = "1 Jan 1900 at 12:00:00 AM";
    string now = "31 Dec 2199 at 11:00:59 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "109572d 23h 59s";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "7 Jun 2004 at 05:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1h";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string started = "7 Jun 2004 at 12:00:00 AM";
    string now = "8 Jun 2004 at 12:00:00 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "7 Jun 2004 at 05:56:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1h 15m";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "8 Jun 2004 at 05:16:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 34m 56s";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string started = "7 Jun 2004 at 04:09:32 PM";
    string now = "8 Jun 2004 at 07:16:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 3h 6m 56s";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string started = "27 Feb 2004 at 01:23:45 PM";
    string now = "28 Feb 2004 at 01:24:45 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1d 1m";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string started = "1 Jan 2000 at 12:00:00 AM";
    string now = "31 Dec 2000 at 11:59:59 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "365d 23h 59m 59s";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string started = "27 Feb 2004 at 01:01:01 PM";
    string now = "1 Mar 2004 at 01:01:01 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "3d";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string started = "7 Jun 2004 at 12:41:32 PM";
    string now = "7 Jun 2004 at 04:41:32 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "4h";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string started = "12 Mar 2004 at 12:12:12 PM";
    string now = "13 Apr 2004 at 12:12:12 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "31d 12h";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string started = "7 Jun 2004 at 11:59:19 AM";
    string now = "7 Jun 2004 at 12:01:07 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "1m 48s";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string started = "1 Feb 2004 at 12:58:52 AM";
    string now = "1 Mar 2004 at 12:59:52 AM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "29d 1m";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string started = "7 Jun 2004 at 04:41:32 PM";
    string now = "8 Dec 2004 at 07:16:28 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "184d 2h 34m 56s";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string started = "2 Jan 1900 at 12:00:00 AM";
    string now = "2 Jan 1900 at 12:00:00 PM";
    Uptime* pObj = new Uptime();
    clock_t start = clock();
    string result = pObj->calcUptime(started, now);
    clock_t end = clock();
    delete pObj;
    string expected = "12h";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=5859&pm=2893
********************************************************************************
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <iostream> 
#include <map> 
#include <functional> 
#include <deque> 
#include <sstream> 
#include <numeric> 
 
using namespace std; 
 
char *monabbriv[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; 
 
vector< int > ptim( string in ) { 
  int day; 
  char month[ 4 ]; 
  int yr; 
  int hr; 
  int min; 
  int sec; 
  char ampm[ 3 ]; 
  sscanf( in.c_str(), "%d %s %d at %d:%d:%d %s", &day, month, &yr, &hr, &min, &sec, ampm ); 
  int mon; 
  for( mon = 0; 1; mon++ ) 
    if( strcmp( monabbriv[ mon ], month ) == 0 ) 
      break; 
  if( hr == 12 ) 
    hr = 0; 
  if( strcmp( ampm, "PM" ) == 0 ) { 
    hr += 12; 
  } 
  day--; 
  vector< int > mkd; 
  mkd.push_back( yr ); 
  mkd.push_back( mon ); 
  mkd.push_back( day ); 
  mkd.push_back( hr ); 
  mkd.push_back( min ); 
  mkd.push_back( sec ); 
  return mkd; 
} 
 
 
int moma[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
int momay[] = { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 
 
int gmamo( vector< int > &in ) { 
  int yamo = 0; 
  if( in[ 0 ] % 400 == 0 ) { 
    yamo = 1; 
  } else if( in[ 0 ] % 100 == 0 ) { 
    yamo = 0; 
  } else if( in[ 0 ] % 4 == 0 ) { 
    yamo = 1; 
  } else { 
    yamo = 0; 
  } 
  return moma[ in[ 1 ] ] + momay[ in[ 1 ] ] * yamo; 
} 
 
void increy( vector< int > &in ) { 
  in[ 0 ]++; 
  // YAY 
} 
 
void increo( vector< int > &in ) { 
  in[ 1 ]++; 
  if( in[ 1 ] == 12 ) { 
    in[ 1 ] = 0; 
    increy( in ); 
  } 
} 
 
void incred( vector< int > &in ) { 
  in[ 2 ]++; 
  if( in[ 2 ] == gmamo( in ) ) { 
    in[ 2 ] = 0; 
    increo( in ); 
  } 
} 
 
void increh( vector< int > &in ) { 
  in[ 3 ]++; 
  if( in[ 3 ] == 24 ) { 
    in[ 3 ] = 0; 
    incred( in ); 
  } 
} 
 
void increm( vector< int > &in ) { 
  in[ 4 ]++; 
  if( in[ 4 ] == 60 ) { 
    in[ 4 ] = 0; 
    increh( in ); 
  } 
} 
 
void incres( vector< int > &in ) { 
  in[ 5 ]++; 
  if( in[ 5 ] == 60 ) { 
    in[ 5 ] = 0; 
    increm( in ); 
  } 
} 
 
class Uptime { 
  public: 
  string calcUptime(string started, string now) { 
    vector< int > st = ptim( started ); 
    vector< int > nw = ptim( now ); 
    vector< int > delt( 6, 0 ); 
    while( st[ 5 ] != nw[ 5 ] ) { 
      delt[ 5 ]++; 
      incres( st ); 
    } 
    while( st[ 4 ] != nw[ 4 ] ) { 
      delt[ 4 ]++; 
      increm( st ); 
    } 
    while( st[ 3 ] != nw[ 3 ] ) { 
      delt[ 3 ]++; 
      increh( st ); 
    } 
    while( st != nw ) { 
      delt[ 2 ]++; 
      incred( st ); 
    } 
    string oat; 
    if( delt[ 2 ] ) { 
      char bef[ 128 ]; 
      sprintf( bef, "%dd ", delt[ 2 ] ); 
      oat += bef; 
    } 
    if( delt[ 3 ] ) { 
      char bef[ 128 ]; 
      sprintf( bef, "%dh ", delt[ 3 ] ); 
      oat += bef; 
    } 
    if( delt[ 4 ] ) { 
      char bef[ 128 ]; 
      sprintf( bef, "%dm ", delt[ 4 ] ); 
      oat += bef; 
    } 
    if( delt[ 5 ] ) { 
      char bef[ 128 ]; 
      sprintf( bef, "%ds ", delt[ 5 ] ); 
      oat += bef; 
    } 
    if( oat.size() ) { 
      oat.erase( oat.end() - 1, oat.end() ); 
    } 
    return oat; 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/