/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1786
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

class Salary {
public:
    int howMuch(vector<string> arrival, vector<string> departure, int wage);
};

int Salary::howMuch(vector<string> arrival, vector<string> departure, int wage) {
    int ret;
    return ret;
}


int test0() {
    vector<string> arrival = {"08:00:00", "13:00:00", "19:27:32"};
    vector<string> departure = {"12:00:00", "17:00:00", "20:48:10"};
    int wage = 1000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 10015;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> arrival = {"01:05:47", "16:48:12"};
    vector<string> departure = {"09:27:30", "21:17:59"};
    int wage = 2000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 33920;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> arrival = {"00:00:00"};
    vector<string> departure = {"23:59:59"};
    int wage = 10000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 299995;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> arrival = {"10:00:00"};
    vector<string> departure = {"18:00:00"};
    int wage = 10000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 80000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> arrival = {"00:11:13", "02:59:22", "04:42:01", "06:33:45", "08:22:30", "09:21:27", "11:15:50", "12:40:14", "13:55:51"};
    vector<string> departure = {"01:48:51", "03:22:59", "06:33:07", "06:45:47", "08:23:15", "09:34:07", "11:48:51", "12:47:18", "16:01:53"};
    int wage = 9998;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 87238;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> arrival = {"01:15:19", "06:05:29", "08:54:03", "12:15:52"};
    vector<string> departure = {"03:41:48", "06:59:11", "11:41:51", "13:51:02"};
    int wage = 9892;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 88433;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> arrival = {"00:41:50"};
    vector<string> departure = {"02:04:22"};
    int wage = 6452;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 13312;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> arrival = {"00:02:24", "00:15:34", "01:49:50", "06:00:30", "06:32:40", "07:20:20", "10:08:24"};
    vector<string> departure = {"00:12:09", "01:40:25", "03:05:27", "06:02:29", "06:37:55", "09:47:09", "10:45:26"};
    int wage = 9082;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 67571;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> arrival = {"02:28:10", "06:38:17", "11:48:29"};
    vector<string> departure = {"03:56:36", "08:25:27", "12:08:15"};
    int wage = 9815;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 42463;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> arrival = {"01:36:08", "03:08:26", "04:19:14", "05:08:29", "07:49:55", "10:01:50", "11:18:26"};
    vector<string> departure = {"02:35:30", "03:40:11", "04:20:01", "05:35:37", "07:56:52", "10:26:23", "11:25:52"};
    int wage = 8731;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 31647;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> arrival = {"00:15:03"};
    vector<string> departure = {"08:01:33"};
    int wage = 5053;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 53812;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> arrival = {"00:21:14", "01:05:03", "06:25:05", "11:37:53", "12:21:50", "12:46:27"};
    vector<string> departure = {"00:38:07", "01:52:26", "11:24:28", "11:46:49", "12:32:00", "12:59:48"};
    int wage = 6636;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 47362;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> arrival = {"01:39:56", "04:20:00", "05:24:34"};
    vector<string> departure = {"03:46:59", "04:51:00", "05:34:15"};
    int wage = 6785;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 28451;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> arrival = {"00:07:24", "02:00:10", "03:32:10", "03:52:12", "05:39:53", "06:07:53", "07:31:59", "12:32:33", "12:54:34", "15:57:53"};
    vector<string> departure = {"00:52:54", "02:06:35", "03:39:16", "04:31:45", "05:40:55", "06:14:55", "08:30:55", "12:39:20", "14:38:50", "15:59:03"};
    int wage = 8381;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 45757;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> arrival = {"00:04:14", "01:34:15", "01:56:13", "02:44:05", "03:09:59", "04:07:06", "08:01:57", "12:17:35", "14:45:49", "16:26:50"};
    vector<string> departure = {"00:31:17", "01:35:12", "02:12:33", "02:52:08", "03:45:29", "07:44:13", "09:26:57", "14:33:37", "14:53:15", "18:33:03"};
    int wage = 6703;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 86759;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> arrival = {"00:21:34", "12:23:06"};
    vector<string> departure = {"10:49:19", "16:45:30"};
    int wage = 9740;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 171970;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> arrival = {"04:07:12", "06:28:22", "11:57:16", "13:34:13", "16:48:52"};
    vector<string> departure = {"06:06:23", "10:22:45", "11:58:27", "14:16:03", "17:15:19"};
    int wage = 9830;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 78547;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> arrival = {"00:55:54", "03:31:17"};
    vector<string> departure = {"03:19:13", "08:10:48"};
    int wage = 8076;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 76567;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> arrival = {"00:08:39", "02:46:35", "03:48:51", "04:05:42", "04:31:49"};
    vector<string> departure = {"02:03:17", "03:13:36", "03:54:31", "04:19:13", "05:17:05"};
    int wage = 7087;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 36515;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> arrival = {"03:10:51", "05:39:23", "07:03:27", "07:56:49", "09:46:49", "09:57:30", "11:45:30", "15:36:37"};
    vector<string> departure = {"03:51:33", "06:09:58", "07:13:54", "09:39:21", "09:56:07", "11:05:02", "15:08:16", "15:54:58"};
    int wage = 6863;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 58664;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> arrival = {"00:52:29", "05:18:12", "07:18:21", "07:24:08", "08:10:15", "09:52:45", "12:48:13", "16:27:38", "17:26:41"};
    vector<string> departure = {"03:50:29", "06:13:29", "07:20:41", "07:51:34", "09:19:25", "10:53:08", "14:43:09", "17:22:17", "18:37:51"};
    int wage = 6359;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 80777;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> arrival = {"00:24:33", "05:10:26", "05:53:25", "08:02:43", "10:23:31", "12:00:12", "12:26:44", "13:56:15"};
    vector<string> departure = {"00:38:43", "05:10:37", "06:58:44", "08:46:44", "11:40:59", "12:03:11", "13:33:02", "14:58:26"};
    int wage = 8424;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 48168;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> arrival = {"00:03:44", "04:46:45", "06:19:18", "06:58:03", "07:40:47", "08:09:27", "12:08:24"};
    vector<string> departure = {"04:01:46", "05:13:11", "06:34:09", "07:03:50", "07:50:02", "11:22:39", "12:14:36"};
    int wage = 7499;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 78237;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> arrival = {"01:26:33", "02:44:28", "04:21:58", "06:23:34", "08:43:52", "11:19:35", "15:55:03", "18:05:55", "18:42:51"};
    vector<string> departure = {"02:08:48", "02:56:03", "05:41:40", "07:05:11", "09:55:19", "12:43:16", "16:36:19", "18:20:30", "18:57:35"};
    int wage = 7308;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 58743;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> arrival = {"03:08:26", "05:44:57", "09:05:54", "10:37:37", "11:42:09", "12:43:57"};
    vector<string> departure = {"04:05:57", "06:24:26", "09:51:22", "10:54:12", "12:39:40", "13:44:20"};
    int wage = 9740;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 50848;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> arrival = {"00:26:23", "01:18:00", "04:51:11"};
    vector<string> departure = {"00:30:35", "02:25:17", "05:04:31"};
    int wage = 5391;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 11431;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> arrival = {"04:41:33", "05:11:52", "06:22:02", "07:23:29", "08:27:18", "11:04:14", "12:44:52", "13:05:52", "16:08:23"};
    vector<string> departure = {"04:57:43", "05:30:20", "06:48:39", "08:00:31", "10:04:26", "12:30:23", "12:55:28", "15:56:18", "16:45:57"};
    int wage = 9079;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 78303;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> arrival = {"00:03:46", "01:30:21", "02:17:04", "02:47:09"};
    vector<string> departure = {"00:52:16", "01:36:05", "02:29:24", "04:02:30"};
    int wage = 8574;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 30419;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> arrival = {"00:43:25", "02:06:06", "04:18:11", "05:34:21", "07:04:48", "10:19:57", "11:06:01", "13:13:22", "13:44:34", "15:10:28"};
    vector<string> departure = {"01:57:13", "02:38:17", "05:02:56", "06:58:17", "09:13:40", "10:37:35", "11:14:34", "13:37:56", "14:08:02", "18:12:07"};
    int wage = 6584;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 78311;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> arrival = {"00:39:28", "03:51:24", "04:56:16", "05:54:24", "08:08:47", "09:56:36", "13:13:28", "15:57:48", "16:37:19"};
    vector<string> departure = {"02:43:31", "04:36:10", "05:17:47", "07:40:56", "09:54:38", "11:58:58", "14:56:50", "15:57:51", "17:45:57"};
    int wage = 6719;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 89037;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> arrival = {"01:14:44", "04:18:37", "05:44:27"};
    vector<string> departure = {"03:45:31", "05:44:13", "05:49:44"};
    int wage = 9599;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 57993;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> arrival = {"02:30:45", "03:11:25", "04:20:22", "05:01:06", "06:40:51", "08:05:22", "11:19:23", "13:45:15", "14:30:22"};
    vector<string> departure = {"02:57:58", "04:08:33", "05:00:36", "06:27:59", "07:05:40", "10:30:40", "11:29:57", "13:46:22", "21:44:09"};
    int wage = 6625;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 113824;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> arrival = {"00:40:45", "02:30:19", "03:43:22", "05:08:24", "07:39:52", "12:08:15", "14:47:37", "16:12:58", "17:14:47", "19:40:53"};
    vector<string> departure = {"01:14:47", "03:08:57", "04:27:12", "06:59:37", "10:21:55", "12:17:15", "14:59:47", "16:38:51", "18:04:58", "19:44:10"};
    int wage = 7293;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 70311;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> arrival = {"02:46:35", "06:19:05", "08:12:48", "09:39:29", "11:08:03", "16:20:38", "16:25:19", "17:20:09", "20:09:58"};
    vector<string> departure = {"03:06:25", "07:25:02", "09:13:05", "10:25:00", "15:46:15", "16:24:30", "16:54:49", "18:22:33", "21:23:09"};
    int wage = 7486;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 86902;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> arrival = {"00:49:38", "06:42:57", "09:32:06", "11:32:22", "17:25:50"};
    vector<string> departure = {"02:34:40", "09:12:36", "09:39:20", "16:21:43", "21:13:14"};
    int wage = 9053;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 139989;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> arrival = {"01:27:05", "04:11:22", "08:26:48", "10:42:14", "12:50:45", "13:50:43"};
    vector<string> departure = {"02:49:42", "04:35:17", "09:39:29", "11:55:26", "13:48:27", "13:55:35"};
    int wage = 5087;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 31221;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> arrival = {"00:48:31", "01:56:02", "02:32:00", "04:54:35"};
    vector<string> departure = {"01:10:57", "02:31:09", "04:02:06", "09:20:14"};
    int wage = 7093;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 61452;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> arrival = {"00:01:50", "02:33:56", "14:39:05", "16:04:34"};
    vector<string> departure = {"01:21:18", "12:10:02", "15:18:42", "17:25:47"};
    int wage = 5328;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 81622;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> arrival = {"01:47:30", "03:18:07", "05:36:43", "06:34:28", "08:55:50", "12:06:04", "15:09:34", "17:42:29"};
    vector<string> departure = {"03:11:31", "04:27:32", "06:17:09", "06:50:11", "09:27:25", "12:50:13", "16:07:35", "17:47:49"};
    int wage = 6671;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 48589;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> arrival = {"00:44:09", "04:13:36", "05:57:29", "07:14:54", "09:05:16", "12:05:06", "12:37:03", "13:22:44", "14:08:10"};
    vector<string> departure = {"01:40:02", "04:44:16", "06:14:24", "07:58:59", "11:23:03", "12:13:28", "13:18:15", "13:44:23", "18:50:49"};
    int wage = 8282;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 97885;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> arrival = {"03:56:44", "10:29:07"};
    vector<string> departure = {"09:52:32", "13:49:29"};
    int wage = 9904;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 101978;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> arrival = {"01:01:35", "03:55:26", "05:20:19"};
    vector<string> departure = {"01:43:00", "04:44:09", "08:45:28"};
    int wage = 5913;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 35496;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> arrival = {"01:45:13", "02:47:02", "06:36:03", "07:50:38", "08:25:47", "08:44:54", "08:50:25", "10:58:26", "13:21:38"};
    vector<string> departure = {"02:45:48", "04:20:48", "06:36:47", "08:24:52", "08:26:26", "08:47:04", "10:18:11", "13:05:41", "16:42:54"};
    int wage = 6946;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 79368;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> arrival = {"01:19:24", "03:44:55", "04:28:34", "08:24:37", "09:09:45", "10:55:17", "11:39:31", "12:26:49", "14:03:52"};
    vector<string> departure = {"02:48:45", "03:49:37", "06:55:23", "08:47:20", "09:34:04", "11:00:15", "12:03:30", "12:45:41", "19:46:38"};
    int wage = 6090;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 83690;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> arrival = {"00:22:38"};
    vector<string> departure = {"00:25:39"};
    int wage = 9996;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 753;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> arrival = {"02:34:52", "03:22:51", "04:07:58", "07:45:08", "10:12:15", "11:27:06", "12:57:47", "13:41:39", "18:35:48", "19:39:25"};
    vector<string> departure = {"03:20:55", "03:38:24", "04:11:27", "08:22:37", "11:04:27", "12:38:36", "13:12:04", "16:56:41", "18:43:45", "20:40:10"};
    int wage = 5330;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 50739;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> arrival = {"01:09:08", "02:11:27", "03:12:56", "04:52:41"};
    vector<string> departure = {"01:31:46", "03:11:37", "03:19:19", "05:35:18"};
    int wage = 5936;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 19559;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> arrival = {"02:01:02", "02:38:12", "03:48:21", "08:17:47", "10:09:30"};
    vector<string> departure = {"02:10:42", "03:11:15", "07:13:40", "09:34:50", "10:44:13"};
    int wage = 7799;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 58100;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> arrival = {"00:52:58", "01:19:34", "01:57:46", "04:19:37", "07:11:29"};
    vector<string> departure = {"01:06:13", "01:41:38", "02:44:41", "05:34:17", "08:34:26"};
    int wage = 6314;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 33495;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> arrival = {"00:43:55", "03:11:44", "06:56:19", "08:15:39", "13:21:16", "15:34:05", "16:57:33", "18:00:11"};
    vector<string> departure = {"02:33:51", "06:18:06", "07:52:34", "09:32:14", "13:52:45", "16:28:54", "17:48:47", "19:50:55"};
    int wage = 9948;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 144555;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> arrival = {"00:24:17", "01:23:40", "03:04:43", "05:54:25", "06:20:51", "06:39:56", "08:10:20", "10:02:27", "13:50:13", "14:52:47"};
    vector<string> departure = {"00:42:59", "02:05:53", "05:00:43", "06:11:10", "06:32:10", "06:52:26", "08:51:15", "13:45:18", "14:37:27", "16:19:07"};
    int wage = 7791;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 91682;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> arrival = {"01:40:31", "04:00:40", "04:43:06", "06:50:17", "08:07:44", "08:31:49", "10:35:27", "13:10:32", "14:14:07", "14:30:36"};
    vector<string> departure = {"01:43:37", "04:31:42", "05:57:07", "06:56:18", "08:17:01", "09:41:26", "12:48:15", "14:08:10", "14:25:23", "16:10:35"};
    int wage = 8762;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 80146;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> arrival = {"00:13:49", "02:28:38", "05:16:39", "08:13:39", "10:32:31", "12:27:05"};
    vector<string> departure = {"00:40:10", "05:04:14", "08:00:38", "09:14:49", "10:53:10", "14:48:59"};
    int wage = 9563;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 108747;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> arrival = {"00:56:21", "02:01:57", "03:31:25", "04:43:43", "08:05:17", "09:43:04", "10:18:12", "11:32:14"};
    vector<string> departure = {"02:00:35", "02:38:17", "04:41:40", "07:51:06", "08:38:20", "09:56:10", "10:27:10", "13:16:19"};
    int wage = 7322;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 78217;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> arrival = {"01:33:07", "02:53:08", "08:20:04", "08:58:48"};
    vector<string> departure = {"01:45:08", "04:36:29", "08:32:30", "10:16:47"};
    int wage = 6087;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 26728;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> arrival = {"01:48:15", "02:37:15"};
    vector<string> departure = {"02:27:14", "04:02:35"};
    int wage = 8281;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 25736;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> arrival = {"00:54:52", "04:44:37", "07:10:41"};
    vector<string> departure = {"04:20:58", "05:45:10", "07:17:20"};
    int wage = 6712;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 45487;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> arrival = {"01:05:58", "05:58:54", "09:37:36", "10:24:38", "12:10:12", "15:08:53", "16:24:15", "16:57:48", "17:57:12", "19:09:26"};
    vector<string> departure = {"01:37:45", "08:59:28", "10:05:23", "11:31:33", "13:46:41", "15:13:26", "16:33:58", "17:33:07", "18:26:42", "19:24:16"};
    int wage = 8937;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 79637;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> arrival = {"00:08:14", "03:28:33", "05:02:40"};
    vector<string> departure = {"00:36:09", "03:53:46", "05:02:43"};
    int wage = 7962;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 10586;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> arrival = {"03:30:31", "06:25:49", "10:09:32", "16:01:45"};
    vector<string> departure = {"06:08:30", "08:03:37", "14:26:15", "16:06:30"};
    int wage = 5429;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 53565;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> arrival = {"02:56:41"};
    vector<string> departure = {"04:19:51"};
    int wage = 8132;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 16907;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> arrival = {"02:38:54", "04:56:56", "05:16:37", "06:56:12", "14:10:22", "16:39:46"};
    vector<string> departure = {"03:40:45", "05:11:03", "06:31:09", "13:30:50", "15:28:14", "17:01:21"};
    int wage = 8057;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 94570;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> arrival = {"00:07:17", "02:56:56", "06:30:25", "06:52:29", "08:05:54", "09:07:28", "11:38:31", "12:21:50", "16:56:34"};
    vector<string> departure = {"00:47:56", "03:12:00", "06:50:30", "07:36:46", "08:30:02", "11:33:17", "12:10:44", "14:45:23", "17:35:32"};
    int wage = 7175;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 63693;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> arrival = {"02:49:14", "05:45:58", "06:41:07", "09:12:08", "11:49:50", "12:11:10", "12:58:17", "16:20:25", "17:02:41", "19:32:55"};
    vector<string> departure = {"04:14:58", "06:15:55", "08:50:42", "09:40:51", "12:07:36", "12:40:58", "16:01:22", "16:44:58", "17:39:21", "20:02:03"};
    int wage = 8689;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 95496;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> arrival = {"22:19:46"};
    vector<string> departure = {"23:12:46"};
    int wage = 5320;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 7049;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> arrival = {"00:00:00"};
    vector<string> departure = {"23:59:59"};
    int wage = 10000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 299995;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> arrival = {"08:00:00", "13:00:00", "19:27:32"};
    vector<string> departure = {"12:00:00", "17:00:00", "20:48:10"};
    int wage = 1000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 10015;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> arrival = {"22:19:46"};
    vector<string> departure = {"23:12:46"};
    int wage = 5320;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 7049;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> arrival = {"03:00:00"};
    vector<string> departure = {"06:00:00"};
    int wage = 10000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 45000;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> arrival = {"00:00:00"};
    vector<string> departure = {"23:59:59"};
    int wage = 100;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 2999;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> arrival = {"05:59:59"};
    vector<string> departure = {"06:00:00"};
    int wage = 10000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> arrival = {"03:02:00"};
    vector<string> departure = {"21:00:00"};
    int wage = 218;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 4567;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> arrival = {"05:59:59"};
    vector<string> departure = {"23:00:00"};
    int wage = 10000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 195004;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> arrival = {"00:00:00"};
    vector<string> departure = {"00:00:01"};
    int wage = 3600;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> arrival = {"18:00:00"};
    vector<string> departure = {"18:00:01"};
    int wage = 7200;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> arrival = {"00:00:00"};
    vector<string> departure = {"01:00:00"};
    int wage = 999;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 1498;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> arrival = {"00:00:00"};
    vector<string> departure = {"01:00:00"};
    int wage = 1000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 1500;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> arrival = {"05:59:58"};
    vector<string> departure = {"05:59:59"};
    int wage = 10000;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> arrival = {"12:00:00"};
    vector<string> departure = {"13:00:00"};
    int wage = 8189;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 8189;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> arrival = {"00:00:01", "00:00:05", "00:00:09", "04:09:59", "06:06:06", "09:59:59", "12:59:00", "14:00:00", "17:30:30", "20:00:01"};
    vector<string> departure = {"00:00:02", "00:00:07", "00:00:10", "05:59:59", "07:07:07", "10:00:01", "13:14:15", "16:59:59", "19:00:59", "23:59:59"};
    int wage = 342;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 5143;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> arrival = {"05:59:00", "17:58:32"};
    vector<string> departure = {"06:00:01", "18:01:21"};
    int wage = 9999;
    Salary* pObj = new Salary();
    clock_t start = clock();
    int result = pObj->howMuch(arrival, departure, wage);
    clock_t end = clock();
    delete pObj;
    int expected = 834;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4590&pm=1786
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
vector<int> tokint(string s, string ch) { 
  vector<int> ret; 
  vector<string> p = tokenize(s, ch); 
  for( int i = 0; i < p.size(); i++ ) 
    ret.push_back( atoi(p[i].c_str()) ); 
  return ret; 
} 
 
vector<vector<int> > tokmat(vector<string> s, string ch) { 
  vector<vector<int> > ret; 
  for( int i = 0; i < s.size(); i++ ) 
    ret.push_back( tokint(s[i], ch) ); 
  return ret; 
} 
 
int t[24*60*60]; 
 
class Salary { 
public: 
int howMuch(vector <string> A, vector <string> B, int c) { 
  int i, j, k, x, y, z, n; 
  i64 ret = 0; 
 
  VVI a = tokmat(A, ":"); 
  VVI b = tokmat(B, ":"); 
  for( i = 0; i < a.size(); i++ ) { 
    x = a[i][0]*60*60 + a[i][1]*60 + a[i][2]; 
    y = b[i][0]*60*60 + b[i][1]*60 + b[i][2]; 
    for( j = x; j < y; j++ ) t[j] = 1; 
  } 
  for( i = 0; i < 6*60*60; i++ ) if( t[i] ) ret += 3*c; 
  for( ; i < 18*60*60; i++ ) if( t[i] ) ret += 2*c; 
  for( ; i < 24*60*60; i++ ) if( t[i] ) ret += 3*c; 
  return ret/7200; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/