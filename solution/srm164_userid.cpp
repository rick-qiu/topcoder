/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1754
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

class UserId {
public:
    string id(vector<string> inUse, string first, string middle, string last);
};

string UserId::id(vector<string> inUse, string first, string middle, string last) {
    string ret;
    return ret;
}


int test0() {
    vector<string> inUse = {"bjones", "bjones03", "bmjones", "old34id"};
    string first = "Bob";
    string middle = "";
    string last = "Jones";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "bjones01";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> inUse = {"bjones", "bjones03", "bmjones", "old34id"};
    string first = "Bob Mack";
    string middle = "Hertobise";
    string last = "Jone's";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "bhjones";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> inUse = {"bjones", "bjones03", "bmjones", "old34id"};
    string first = "Bob Mack";
    string middle = "Hertobise";
    string last = "Jonestone";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "bjonesto";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> inUse = {"bjonesto", "bjones01", "bmjonest", "old34id"};
    string first = "BoB Mack";
    string middle = "Mo";
    string last = "Jonestone";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "bjones02";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> inUse = {"bjonesto", "bjones01", "bjonesto", "old34id"};
    string first = "BoB-Mack";
    string middle = "Mo";
    string last = "Jonestone";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> inUse = {"axbc", "axbc01", "axbc02", "axbc03", "axbc04", "axbc05", "axbc06", "axbc07", "axbc08", "axbc09", "axbc10"};
    string first = "Axelrod";
    string middle = "X";
    string last = "'B Cal'm'";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "abcalm";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> inUse = {"axbc", "axbc01", "axbc02", "axbc03", "axbc04", "axbc05", "axbc06", "axbc07", "axbc08", "axbc09", "axbc10"};
    string first = "A'";
    string middle = "XX";
    string last = "BC";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> inUse = {"axbc", "abc01", "abc02", "abc03", "abc04", "abc05", "abc06", "abc07", "abc08", "abc09", "abc10", "abc"};
    string first = "A B";
    string middle = "X";
    string last = "'B'C";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "abc11";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> inUse = {"axbc", "abc01", "abc02", "abc03", "abc04", "abc05", "abc06", "abc07", "abc08", "abc09", "abc10", "abc"};
    string first = "A'p";
    string middle = "";
    string last = "B C";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "abc11";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> inUse = {"axbc", "abc01", "abc02", "abc03", "abc04", "abc05", "abc06", "abc07", "abc08", "abc09", "abc10", "abc"};
    string first = "A'p";
    string middle = "Pernicious";
    string last = "B '''C";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "apbc";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> inUse = {"axbc", "abc01", "abc02", "abc03", "abc04", "abc05", "abc06", "abc07", "abc08", "abc09", "abc10", "abc"};
    string first = "Alvin01";
    string middle = "Baker";
    string last = "Finch";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> inUse = {"abc", "adefores"};
    string first = "Alvin";
    string middle = "O'Neill";
    string last = "DeForest";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "aodefore";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> inUse = {"abc", "aodefore"};
    string first = "Alvin";
    string middle = "O'Neill";
    string last = "DeForest";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "adefores";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> inUse = {"aabc"};
    string first = " aa";
    string middle = "'";
    string last = " abc";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "aabc01";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> inUse = {"momorris", "mmmm", "momorr01"};
    string first = "'m m";
    string middle = "";
    string last = "O'Morrisy";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "momorr02";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> inUse = {};
    string first = "'m m";
    string middle = "J.J";
    string last = "O'Morrisy";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> inUse = {"axbc", "abc01", "abc03", "abc04", "abc05", "abc06", "abc07", "abc02", "abc09", "abc10", "abc"};
    string first = "A'p";
    string middle = "";
    string last = "B C";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "abc08";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> inUse = {"axbc", "abc01", "abc02", "abc03", "abc04", "abc05", "abc06", "abc07", "abc08", "abc09", "abc10", "abc"};
    string first = "A'p";
    string middle = " 'YXx'CX";
    string last = "B C";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "aybc";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> inUse = {"axbc", "abc01", "abc02", "abc03", "abc04", "abc05", "abc06", "abc07", "abc08", "abc09", "abc10", "abc"};
    string first = "A'p";
    string middle = "X02";
    string last = "B C";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> inUse = {"axbc", "abc01", "abc02", "abc03", "abc04", "abc05", "abc06", "abc07", "abc08", "abc09", "abc10", "abc"};
    string first = "A'p";
    string middle = "";
    string last = " ' B C";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "abc11";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> inUse = {"jjames"};
    string first = "joe1";
    string middle = "";
    string last = "james";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> inUse = {};
    string first = " A";
    string middle = " B";
    string last = " CCCCCCCCCC";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> inUse = {};
    string first = "foo";
    string middle = ".";
    string last = "bar";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> inUse = {};
    string first = " s";
    string middle = " a";
    string last = " a";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> inUse = {};
    string first = "''''''G";
    string middle = "''";
    string last = "''''''M";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> inUse = {"aaa"};
    string first = " ";
    string middle = "aaa";
    string last = "aaaa";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> inUse = {"aaaaron"};
    string first = " ";
    string middle = "a";
    string last = " ";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> inUse = {"bob"};
    string first = "fred";
    string middle = "w";
    string last = "";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> inUse = {};
    string first = "A";
    string middle = "";
    string last = "AAAAA";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> inUse = {};
    string first = "J'";
    string middle = "";
    string last = "abcd";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> inUse = {};
    string first = " ";
    string middle = "A";
    string last = " ";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> inUse = {};
    string first = "''''''''''''' G";
    string middle = "'' '";
    string last = " 'M' ";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> inUse = {};
    string first = "''s";
    string middle = "";
    string last = "''s";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> inUse = {};
    string first = " A";
    string middle = " B";
    string last = " CCCCCCC";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> inUse = {};
    string first = "''''G";
    string middle = "'' ''";
    string last = "''''M";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> inUse = {};
    string first = "a'";
    string middle = "b";
    string last = "cdef";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> inUse = {};
    string first = "a ";
    string middle = "asdf";
    string last = "asdf";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> inUse = {"jjames"};
    string first = "o'";
    string middle = "";
    string last = "toole";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> inUse = {};
    string first = "A";
    string middle = "";
    string last = "b";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> inUse = {};
    string first = "''''G";
    string middle = "''";
    string last = "''''M";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> inUse = {"blood"};
    string first = "B";
    string middle = "ABRAHAM";
    string last = "ONEAL";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> inUse = {};
    string first = " a";
    string middle = "";
    string last = " s";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> inUse = {};
    string first = " a";
    string middle = "a";
    string last = " a";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> inUse = {"bjones"};
    string first = "Bob";
    string middle = "' '";
    string last = "Jones";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "bjones01";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> inUse = {"jwerner"};
    string first = "juergen";
    string middle = "";
    string last = "werner";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "jwerne01";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> inUse = {"jjkames"};
    string first = "o'";
    string middle = "";
    string last = "toolt";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> inUse = {};
    string first = "a";
    string middle = "b";
    string last = "c";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> inUse = {"aaa"};
    string first = " ";
    string middle = "aaa";
    string last = "aaa";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> inUse = {};
    string first = "a'''";
    string middle = "";
    string last = "haaa";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> inUse = {};
    string first = "B'";
    string middle = "";
    string last = "DAVIS";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> inUse = {};
    string first = "b";
    string middle = "";
    string last = "z";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> inUse = {};
    string first = "m";
    string middle = "";
    string last = "m";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> inUse = {"bjones", "bjones03", "bmjones", "old34id"};
    string first = "B";
    string middle = "";
    string last = "Jones";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> inUse = {"sadffasd"};
    string first = "o'";
    string middle = "";
    string last = "toole";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> inUse = {};
    string first = "''a";
    string middle = "";
    string last = "''b";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> inUse = {};
    string first = "m";
    string middle = "";
    string last = "mm";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> inUse = {};
    string first = "A";
    string middle = "BOB";
    string last = "BOB";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> inUse = {"ireally", "hope", "this", "works"};
    string first = "johnz";
    string middle = "rob";
    string last = "azzaazz";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "jazzaazz";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> inUse = {"jwerner"};
    string first = " 'J '";
    string middle = "";
    string last = "Werner";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> inUse = {"aaa"};
    string first = "a";
    string middle = "a";
    string last = "a";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> inUse = {};
    string first = "A";
    string middle = "B";
    string last = "C";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> inUse = {};
    string first = "A'";
    string middle = "B";
    string last = "C'";
    UserId* pObj = new UserId();
    clock_t start = clock();
    string result = pObj->id(inUse, first, middle, last);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=262936&rd=4625&pm=1754
********************************************************************************
// Includes
 
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
 
// Macros
 
typedef long double ld;
typedef long long ll;
template <class T> T MIN(const T &x, const T &y) {return x<y? x:y;}
template <class T> T MAX(const T &x, const T &y) {return x>y? x:y;}
template <class T> T ABS(const T &x) {return x>0? x:-x;}
template <class T> void SWAP(T &x, T &y) {T z=x; x=y; y=z;}
const ld PI = 3.14159265358979323846;
const ld EPSILON = 0.000000000001;
 
// General parsing/formatting
 
ll toInt(string s) {stringstream in(s, ios_base::in); ll result; in >> result; return result;}
ld toDouble(string s) {stringstream in(s, ios_base::in); ld result; in >> result; return result;}
string toString(ll n) {stringstream out(ios_base::out); out << n; return out.str();}
string toString(ld d, int precision = -1) {stringstream out(ios_base::out); if (precision >= 0) {out.precision(precision); out.setf(ios::fixed);} out << d; string s=out.str();
  bool nonZero=false; for(int i=0;i<s.size();i++) if (s[i]!='0' && s[i]!='-' && s[i]!='.') nonZero=true; if (s[0]=='-' && !nonZero) return s.substr(1); else return s;}
string toString(int n) {return toString((ll)(n));}
string toString(char ch) {string s="?"; s[0]=ch; return s;}
string toString(const string &s) {return s;}
template <class U, class V> string toString(pair<U,V> u) {return toString("(") + toString(u.first) + "," + toString(u.second) + ")";}
template <class T> string toString(const vector<T> &v, string delim=",") {string s="("; for(int i=0;i<v.size();i++) {if(i!=0)s+=delim; s += toString(v[i]);} return s+")";}
template <class T> string toString(const set<T> &t, string delim=",") {string s="{"; for(typename set<T>::const_iterator it=t.begin(); it!=t.end(); it++) {if(it!=t.begin())s+=delim+" "; s += toString(*it);} return s+"}";}
template <class U, class V> string toString(const map<U,V> &m, string delim=",") {string s="{"; for(typename map<U,V>::const_iterator it=m.begin(); it!=m.end(); it++) {if(it!=m.begin())s+=delim+" "; s += toString(it->first) + "->" + toString(it->second);} return s+"}";}
int getNumWords(string s, string delim=" ") {int count=0; for(int i=0; i<s.size(); i++) if ( (i==0 || delim.find(s[i-1])!=-1) && delim.find(s[i]) == -1) count++; return count;}
string getWord(string s, int j, string delim=" ") {int count=0; string t; for(int i=0; i<s.size(); i++) {if (delim.find(s[i])==-1) t += s[i]; else {if (i!=0 && delim.find(s[i-1]) == -1) count++; if(count>j) return t; t="";}} return t;}
string getDelimiter(string s, int j, string delim=" ") {int count=0; string t; for(int i=0; i<s.size(); i++) {if (delim.find(s[i])!=-1) t += s[i]; else {if (i==0 || delim.find(s[i-1]) != -1) count++; if(count>j) return t; t="";}} return t;}
 
// Basic math
 
bool isEqual(ld v1, ld v2) {return ABS(v1-v2)<EPSILON;}
bool isLess(ld v1, ld v2) {return v1-v2<-EPSILON;}
ll gcd(ll n1, ll n2) {return n2==0? ABS(n1) : gcd(n2,n1%n2);}
ll lcm(ll n1, ll n2) {return n1==0 && n2==0? 0 : ABS(n1*n2)/gcd(n1,n2);}
 
// Real code
 
class UserId 
{
  public:
  string truncate(string x, bool isMiddle)
  {
    string result;
    for (int i = 0; i < x.size(); i++)
    {
      if (x[i] >= 'A' && x[i] <= 'Z')
        result += x[i] + 'a' - 'A';
      else if (x[i] >= 'a' && x[i] <= 'z')
        result += x[i];
      else if (x[i] != '\'' && x[i] != ' ')
        return "-";
    }
    if (!isMiddle && result.size() < 2)
      return "-";
    return result;
  }
  
  string id(vector <string> _inUse, string first, string middle, string last) 
  {
    set<string> inUse(_inUse.begin(), _inUse.end());
    first = truncate(first, false);
    middle = truncate(middle, true);
    last = truncate(last, false);
    if (first == "-" || middle == "-" || last == "-")
      return "BAD DATA";
      
    // First
      
    string firstInitial = "?";
    firstInitial[0] = first[0];  
    string x1 = firstInitial + last;
    if (x1.size() > 8) x1 = x1.substr(0,8);
    if (!inUse.count(x1)) return x1;
    
    // Second
    
    string middleInitial = "?";
    if (middle != "")
    {
      middleInitial[0] = middle[0];
      string x2 = firstInitial + middleInitial + last;
      if (x2.size() > 8) x2 = x2.substr(0,8);
      if (!inUse.count(x2)) return x2;
    }
    
    // Third
    
    if (x1.size() > 6) x1 = x1.substr(0,6);
    for (int i = 1; i < 100; i++)
    {
      string d = "??";
      d[0] = (i/10) + '0';
      d[1] = (i%10) + '0';
      string x3 = x1 + d;
      if (!inUse.count(x3)) return x3;      
    }
    
    return "?";
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/