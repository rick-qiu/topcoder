/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11553
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

class WhichDay {
public:
    string getDay(vector<string> notOnThisDay);
};

string WhichDay::getDay(vector<string> notOnThisDay) {
    string ret;
    return ret;
}


int test0() {
    vector<string> notOnThisDay = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Saturday";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> notOnThisDay = {"Sunday", "Monday", "Tuesday", "Wednesday", "Friday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Saturday";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> notOnThisDay = {"Sunday", "Monday", "Tuesday", "Thursday", "Friday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> notOnThisDay = {"Sunday", "Friday", "Tuesday", "Wednesday", "Monday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> notOnThisDay = {"Friday", "Monday", "Thursday", "Tuesday", "Sunday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> notOnThisDay = {"Thursday", "Friday", "Sunday", "Wednesday", "Saturday", "Tuesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> notOnThisDay = {"Thursday", "Saturday", "Sunday", "Tuesday", "Friday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> notOnThisDay = {"Friday", "Thursday", "Tuesday", "Sunday", "Wednesday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> notOnThisDay = {"Monday", "Friday", "Wednesday", "Saturday", "Sunday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Tuesday";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> notOnThisDay = {"Sunday", "Tuesday", "Saturday", "Monday", "Wednesday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> notOnThisDay = {"Sunday", "Monday", "Tuesday", "Wednesday", "Saturday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> notOnThisDay = {"Wednesday", "Thursday", "Saturday", "Tuesday", "Friday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> notOnThisDay = {"Saturday", "Friday", "Thursday", "Monday", "Wednesday", "Tuesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> notOnThisDay = {"Wednesday", "Tuesday", "Thursday", "Saturday", "Friday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> notOnThisDay = {"Sunday", "Wednesday", "Monday", "Saturday", "Friday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Tuesday";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> notOnThisDay = {"Sunday", "Wednesday", "Saturday", "Thursday", "Tuesday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> notOnThisDay = {"Thursday", "Saturday", "Wednesday", "Friday", "Tuesday", "Sunday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> notOnThisDay = {"Sunday", "Wednesday", "Friday", "Tuesday", "Thursday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Saturday";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> notOnThisDay = {"Monday", "Thursday", "Sunday", "Wednesday", "Tuesday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> notOnThisDay = {"Saturday", "Friday", "Tuesday", "Sunday", "Thursday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> notOnThisDay = {"Wednesday", "Monday", "Tuesday", "Sunday", "Friday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Saturday";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> notOnThisDay = {"Friday", "Monday", "Tuesday", "Sunday", "Saturday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> notOnThisDay = {"Saturday", "Monday", "Wednesday", "Thursday", "Tuesday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> notOnThisDay = {"Sunday", "Saturday", "Monday", "Tuesday", "Thursday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> notOnThisDay = {"Tuesday", "Saturday", "Monday", "Friday", "Wednesday", "Sunday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> notOnThisDay = {"Friday", "Wednesday", "Thursday", "Saturday", "Sunday", "Tuesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> notOnThisDay = {"Tuesday", "Saturday", "Thursday", "Monday", "Friday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> notOnThisDay = {"Sunday", "Tuesday", "Thursday", "Friday", "Monday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Saturday";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> notOnThisDay = {"Thursday", "Friday", "Monday", "Wednesday", "Saturday", "Sunday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Tuesday";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> notOnThisDay = {"Monday", "Sunday", "Saturday", "Thursday", "Tuesday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> notOnThisDay = {"Saturday", "Wednesday", "Tuesday", "Sunday", "Monday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> notOnThisDay = {"Saturday", "Thursday", "Sunday", "Wednesday", "Monday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Tuesday";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> notOnThisDay = {"Tuesday", "Sunday", "Friday", "Wednesday", "Thursday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> notOnThisDay = {"Tuesday", "Sunday", "Saturday", "Monday", "Friday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> notOnThisDay = {"Thursday", "Tuesday", "Monday", "Sunday", "Wednesday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> notOnThisDay = {"Tuesday", "Friday", "Wednesday", "Monday", "Saturday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> notOnThisDay = {"Tuesday", "Saturday", "Sunday", "Monday", "Friday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> notOnThisDay = {"Thursday", "Tuesday", "Monday", "Wednesday", "Sunday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> notOnThisDay = {"Tuesday", "Thursday", "Saturday", "Sunday", "Monday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> notOnThisDay = {"Saturday", "Friday", "Thursday", "Sunday", "Tuesday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> notOnThisDay = {"Sunday", "Friday", "Monday", "Wednesday", "Saturday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Tuesday";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> notOnThisDay = {"Thursday", "Saturday", "Friday", "Wednesday", "Sunday", "Tuesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> notOnThisDay = {"Tuesday", "Friday", "Thursday", "Monday", "Saturday", "Sunday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> notOnThisDay = {"Monday", "Thursday", "Friday", "Saturday", "Tuesday", "Sunday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> notOnThisDay = {"Monday", "Thursday", "Saturday", "Wednesday", "Sunday", "Tuesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> notOnThisDay = {"Sunday", "Friday", "Monday", "Saturday", "Wednesday", "Tuesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> notOnThisDay = {"Tuesday", "Friday", "Wednesday", "Monday", "Sunday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> notOnThisDay = {"Sunday", "Friday", "Thursday", "Saturday", "Wednesday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Tuesday";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> notOnThisDay = {"Sunday", "Saturday", "Friday", "Tuesday", "Thursday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> notOnThisDay = {"Sunday", "Tuesday", "Thursday", "Friday", "Monday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> notOnThisDay = {"Sunday", "Tuesday", "Friday", "Thursday", "Monday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Saturday";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> notOnThisDay = {"Sunday", "Tuesday", "Friday", "Saturday", "Monday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> notOnThisDay = {"Saturday", "Thursday", "Friday", "Sunday", "Monday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Tuesday";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> notOnThisDay = {"Thursday", "Friday", "Tuesday", "Sunday", "Saturday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> notOnThisDay = {"Saturday", "Monday", "Sunday", "Thursday", "Tuesday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> notOnThisDay = {"Tuesday", "Thursday", "Wednesday", "Friday", "Saturday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> notOnThisDay = {"Monday", "Sunday", "Tuesday", "Friday", "Wednesday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> notOnThisDay = {"Wednesday", "Saturday", "Friday", "Sunday", "Tuesday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> notOnThisDay = {"Monday", "Tuesday", "Friday", "Sunday", "Wednesday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> notOnThisDay = {"Friday", "Saturday", "Sunday", "Tuesday", "Thursday", "Monday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> notOnThisDay = {"Saturday", "Tuesday", "Thursday", "Monday", "Friday", "Sunday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> notOnThisDay = {"Sunday", "Friday", "Saturday", "Wednesday", "Monday", "Tuesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> notOnThisDay = {"Monday", "Sunday", "Friday", "Tuesday", "Thursday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Saturday";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> notOnThisDay = {"Thursday", "Wednesday", "Tuesday", "Monday", "Saturday", "Sunday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> notOnThisDay = {"Tuesday", "Friday", "Sunday", "Wednesday", "Monday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> notOnThisDay = {"Sunday", "Thursday", "Wednesday", "Tuesday", "Saturday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> notOnThisDay = {"Friday", "Thursday", "Tuesday", "Sunday", "Monday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> notOnThisDay = {"Sunday", "Friday", "Monday", "Saturday", "Tuesday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> notOnThisDay = {"Monday", "Friday", "Wednesday", "Tuesday", "Saturday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> notOnThisDay = {"Monday", "Saturday", "Sunday", "Thursday", "Tuesday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> notOnThisDay = {"Saturday", "Sunday", "Monday", "Thursday", "Tuesday", "Wednesday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> notOnThisDay = {"Thursday", "Monday", "Tuesday", "Friday", "Wednesday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> notOnThisDay = {"Saturday", "Tuesday", "Monday", "Thursday", "Sunday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Wednesday";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> notOnThisDay = {"Monday", "Sunday", "Thursday", "Wednesday", "Tuesday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Friday";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> notOnThisDay = {"Sunday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Monday";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> notOnThisDay = {"Sunday", "Monday", "Tuesday", "Wednesday", "Friday", "Thursday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Saturday";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> notOnThisDay = {"Sunday", "Friday", "Tuesday", "Wednesday", "Monday", "Saturday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Thursday";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> notOnThisDay = {"Saturday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    WhichDay* pObj = new WhichDay();
    clock_t start = clock();
    string result = pObj->getDay(notOnThisDay);
    clock_t end = clock();
    delete pObj;
    string expected = "Sunday";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22908368&rd=14544&pm=11553
********************************************************************************
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
 
class WhichDay{
    public:
        string getDay(vector<string> v){
            vector<string> vv;
            //vv.push_back(""Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday".");
            vv.push_back("Sunday");
            vv.push_back("Monday");
            vv.push_back("Tuesday");
            vv.push_back("Wednesday");
            vv.push_back("Thursday");
            vv.push_back("Friday");
            vv.push_back("Saturday");
            map<string,int> m;
            for(int i=0;i<v.size();i++){
                m[v[i]]=1;
            }
            for(int i=0;i<vv.size();i++){
                if(m[vv[i]]==0) return vv[i];
            }
        }
};

********************************************************************************
*******************************************************************************/