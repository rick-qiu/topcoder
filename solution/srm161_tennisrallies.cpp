/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1802
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

class TennisRallies {
public:
    int howMany(int numLength, vector<string> forbidden, int allowed);
};

int TennisRallies::howMany(int numLength, vector<string> forbidden, int allowed) {
    int ret;
    return ret;
}


int test0() {
    int numLength = 3;
    vector<string> forbidden = {"cc", "dd"};
    int allowed = 1;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numLength = 10;
    vector<string> forbidden = {"c"};
    int allowed = 1;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
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
    int numLength = 10;
    vector<string> forbidden = {"c"};
    int allowed = 2;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numLength = 18;
    vector<string> forbidden = {"c", "d"};
    int allowed = 1;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numLength = 18;
    vector<string> forbidden = {"c", "cc", "ccc", "cccc", "ccccc", "cccccc", "ccccccc", "cccccccc", "ccccccccc", "cccccccccc"};
    int allowed = 20;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 185406;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numLength = 18;
    vector<string> forbidden = {"ccccccccccc", "cccccccccccc", "ccccccccccccc", "cccccccccccccc", "ccccccccccccccc", "cccccccccccccccc", "ccccccccccccccccc", "cccccccccccccccccc"};
    int allowed = 100;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numLength = 18;
    vector<string> forbidden = {};
    int allowed = 1;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numLength = 18;
    vector<string> forbidden = {"c", "cc", "ccc", "cccc", "ccccc", "cccccc", "ccccccc", "cccccccc", "ccccccccc", "cccccccccc"};
    int allowed = 100;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262122;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numLength = 18;
    vector<string> forbidden = {"dcccc", "cdcdc", "dcdcc", "dccdc", "ddcdd", "cccdd", "dcccd", "dcdcd", "cddcd", "dccdd"};
    int allowed = 100;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numLength = 18;
    vector<string> forbidden = {"c", "d", "cc", "cd", "dd", "dc", "ccc", "ccd", "cdc", "cdd"};
    int allowed = 40;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 10068;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numLength = 17;
    vector<string> forbidden = {"cdccdddccddcdcd", "ccdcddcd", "cddcddddccdcc", "cddddcdcddcdccddd", "dddddc", "d", "ddddccdcdc", "dcdccccdddc", "dddccddccc", "dc"};
    int allowed = 25;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numLength = 15;
    vector<string> forbidden = {"ddcdddddccc", "d", "cdccc", "dddddcdcdddcddcd", "ddccdcd", "dcddddcccccddcdd", "ccdcdc", "dccd", "cccccddd", "dddddc"};
    int allowed = 24;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numLength = 14;
    vector<string> forbidden = {"dccccdddddcd", "dddddcccdccd", "cdddcdcccdcdcddd", "dd", "dcccccdddcd", "cccddcc", "dddcccdcddcdccccdd"};
    int allowed = 9;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16209;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numLength = 17;
    vector<string> forbidden = {"cddcdddcdc", "ccdcc"};
    int allowed = 20;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numLength = 18;
    vector<string> forbidden = {"ddcdcdcdcdddccd", "ccdccdcdcddcdd", "cdcdccccdcd", "cdcdddcddcdcd", "dddddcdccdcdd", "ccdcccccddc", "cdc", "cccccdcdccddcddcc", "dcc"};
    int allowed = 27;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numLength = 17;
    vector<string> forbidden = {"ddddccccddccdccd", "dcdcdcdddddcddd"};
    int allowed = 26;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numLength = 17;
    vector<string> forbidden = {"cddddcd", "ddccddddcdd", "cddcdcddddc", "ddccdccccddcddccc", "d", "dddddccdcdcdcddddd", "ccd", "dcddccdccdcdddccd", "dcddccdcccdddcc", "dcccdcccdd"};
    int allowed = 3;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numLength = 18;
    vector<string> forbidden = {"dcddc", "dccdccdcc", "ccccd", "cccdcdcc", "dddccccdddd", "cdc", "dccdcdcddc"};
    int allowed = 29;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numLength = 16;
    vector<string> forbidden = {"cdcdcdcddddcddddcd", "dddd", "dcdccccddc", "cdccccd", "dcd", "c", "dcccddcccdcddc", "ccd", "dcdcddcccddccdcd", "cddddcdd"};
    int allowed = 16;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 63679;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numLength = 18;
    vector<string> forbidden = {"ddcccdc", "ccddccdcdcc", "dccccdddcdcccccdc"};
    int allowed = 2;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 261898;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numLength = 15;
    vector<string> forbidden = {"dcdcccc", "dccccccc", "ccddcdcccdcddd", "dcc", "ccccdd"};
    int allowed = 9;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numLength = 17;
    vector<string> forbidden = {"dcdccd", "ccdcd", "ccd", "dcdccddddd"};
    int allowed = 9;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numLength = 18;
    vector<string> forbidden = {"dcc", "ddcddcdcdcccdddccd", "ccccddd", "cccddccdcdccc", "dddccdccdcdc", "dddddddcddccdddd", "dcdcdcdc", "ccccdd"};
    int allowed = 3;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 149897;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numLength = 14;
    vector<string> forbidden = {"dccccddcccdc", "cd", "cddcddd", "dccdcdccccc", "ddccd", "cccdccccdc", "dddddccd", "ddcccdd"};
    int allowed = 5;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 12273;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numLength = 14;
    vector<string> forbidden = {};
    int allowed = 22;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numLength = 15;
    vector<string> forbidden = {};
    int allowed = 24;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numLength = 18;
    vector<string> forbidden = {"dccccccc", "dcdcccddcdcdddcc", "cdddccccd", "dddccddd", "cdddccdcccdddddddc", "dddccddcc"};
    int allowed = 2;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 261212;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numLength = 17;
    vector<string> forbidden = {"dd", "c", "ddcddcccccddcdd", "ddddccdcc", "dddccccd", "ccddcddccddccccdc", "cdddddcccdcccdcccc", "ddcccdddccc"};
    int allowed = 22;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numLength = 14;
    vector<string> forbidden = {"dddddccc", "ccd", "ccccddcdccdccd", "dcdcddccccdcccdc", "dddccc", "cdddddcd", "c", "dcdccdcccdcddc", "ccdddcdddcdccd", "d"};
    int allowed = 13;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numLength = 14;
    vector<string> forbidden = {"ddddcddddccdddd", "ddcddd"};
    int allowed = 18;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numLength = 17;
    vector<string> forbidden = {"cddccdddcddcccdddc", "cdddcd", "cdccc"};
    int allowed = 23;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numLength = 18;
    vector<string> forbidden = {"d", "cdcdccdcdcdddcdddc", "dddcc", "dcdddccc", "cdddddddcccd", "ddd", "ddcddccdcdc", "ddcc", "dcd"};
    int allowed = 4;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 563;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numLength = 14;
    vector<string> forbidden = {"ccddddccc", "cdc", "dccdcdcc", "d", "dccccccddcdcd", "dcddddc"};
    int allowed = 29;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numLength = 17;
    vector<string> forbidden = {"cdddccccddddc", "cccccccccddccddd", "dcdccdccccdcccd", "ccddcddcdccccc", "cccdccdcccddddd", "ddcddccccddddcddd", "d", "dccdcdcdddcdcd", "dddddddccd", "ccdcdddcccddddcd"};
    int allowed = 3;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numLength = 14;
    vector<string> forbidden = {"c", "dddcc", "cc", "dddcdddcddddcccccd", "dcddddcdccdddccdcd", "cddcddddccccdcddcc", "ccccdcd", "dd"};
    int allowed = 17;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 13551;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numLength = 18;
    vector<string> forbidden = {};
    int allowed = 25;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numLength = 15;
    vector<string> forbidden = {};
    int allowed = 3;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numLength = 17;
    vector<string> forbidden = {"cccc", "d", "cdcdcdddcddd", "dccdccccccccc"};
    int allowed = 9;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 39828;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numLength = 16;
    vector<string> forbidden = {"dcdddd", "cdcdddcdcddcdccdc", "ddddcccc", "cdddcccddc", "ddcddddcdcccdddcd", "cdcd", "ddcddcdddddcddddc", "cddcdd", "cddcc", "ddccd"};
    int allowed = 27;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numLength = 14;
    vector<string> forbidden = {"dd", "ccccdccdcdcccccccd", "dcddddcdcd", "dddddcddcdccdcd", "ccccdccddcdcd", "ddcdd", "dccdcdccccdcddcc", "dcccd", "dccdcddccdcddcddc"};
    int allowed = 3;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 4936;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numLength = 15;
    vector<string> forbidden = {};
    int allowed = 18;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numLength = 18;
    vector<string> forbidden = {"ccc", "dcdd", "dccccd", "ccccdddccdddcdd", "ddccddcccddcdcccdc", "ddddccddddd", "cdd", "dcddccdddccccd"};
    int allowed = 22;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numLength = 15;
    vector<string> forbidden = {"ddcdcddcc", "dccdcdcdccccdccccd", "dc", "ccccddcdddcdcddd", "d", "cdcddcdccdcc", "cccccddcdddd", "ddcdcc", "dddcd", "cccdc"};
    int allowed = 7;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 569;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numLength = 18;
    vector<string> forbidden = {"ddc"};
    int allowed = 7;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numLength = 16;
    vector<string> forbidden = {};
    int allowed = 13;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numLength = 17;
    vector<string> forbidden = {"cdddc", "ddcdddcdcddcdcddcc", "dcd", "dddcdcccdcccddc"};
    int allowed = 8;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131051;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numLength = 17;
    vector<string> forbidden = {"ccddd", "ddccdddcdd", "d"};
    int allowed = 30;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numLength = 16;
    vector<string> forbidden = {"dddddcccddd", "d", "cddcddccdc"};
    int allowed = 15;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 65519;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numLength = 15;
    vector<string> forbidden = {"dccdcdccdccccdc", "cdcdccdd", "dddcc", "cdcdddcdddcddc", "dcddc", "cccccdcddcc", "ddcddd", "ddcdddcdcdddccdd", "ddccccdddc"};
    int allowed = 15;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numLength = 16;
    vector<string> forbidden = {"ddd", "cddddcdc", "dcddcdcddcdddd", "dcdccdcdccdc", "dddccddcdddddddcdd", "cdddddccdcdcdccccd", "ccdddcdd", "dccdcddc"};
    int allowed = 5;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 59703;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numLength = 17;
    vector<string> forbidden = {"dccdddcdd", "c", "ddccdddcdcdcccc", "ddcdcdcdddddd"};
    int allowed = 11;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 109219;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numLength = 18;
    vector<string> forbidden = {"ddccddddcdd", "dccd", "dd", "ddddddcdddcccdcd", "cddcddcccdcddcdcd", "dcdddcdc", "cccddcddcccd", "dddcd", "ddd", "ccccddcdd"};
    int allowed = 27;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262075;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int numLength = 16;
    vector<string> forbidden = {"ddcddddcccddcdccd", "cdc", "cccc", "ddcddcdddddccdddc", "ccdcdddccdc"};
    int allowed = 17;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int numLength = 16;
    vector<string> forbidden = {"ccccddcccddccc", "cdccdddcccdddc", "dcdddd", "dcccdddcdcd", "ccccdcddd", "ddddddccccccc"};
    int allowed = 9;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int numLength = 18;
    vector<string> forbidden = {"ddddc", "cddccddcdddcc", "cddcccccddddcddccd", "dcdcddd"};
    int allowed = 5;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int numLength = 18;
    vector<string> forbidden = {"ccdccc", "dddccdddcdcdcc", "dccccdccc", "ddddc", "dddcccccdcd", "cdddddcdccdc", "dccccdcdccddddcdd", "cccdc", "dcddcdc", "dcdc"};
    int allowed = 6;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 259998;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int numLength = 16;
    vector<string> forbidden = {"ddcdccdccdcdc", "d", "cdcdccccccdcddc", "dcdcdcdcc", "dddccdc"};
    int allowed = 11;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 57746;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int numLength = 14;
    vector<string> forbidden = {"cccddc", "cddddccc", "ddcccddccdc", "cdcdddddddddc", "d", "cccdcdddcddc", "dccdddcdcc", "dc", "ccdccddcddcccd", "ccccdcdccdddccc"};
    int allowed = 15;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16383;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int numLength = 14;
    vector<string> forbidden = {"cccdcdccddddcdd", "dccddcccdcddddcdd", "cdcddddccccc", "cc"};
    int allowed = 26;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int numLength = 16;
    vector<string> forbidden = {"dcdc", "d", "ddcccdccd", "dcddccdcc", "cdcdddcddc", "dddddddccddccdcc"};
    int allowed = 19;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int numLength = 16;
    vector<string> forbidden = {"ddcdc", "dccdcdddccc", "ddcddcddccdcdcc", "dcdcdcdcccddddcdcc", "ccc", "cc", "dc", "cddcccdcddccdcccdc"};
    int allowed = 8;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 18617;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int numLength = 15;
    vector<string> forbidden = {"dccddcc", "dccccdcccdc", "dddcdcc", "cddcdcccdccccdcdc", "ccdcdddcddcdcdddcd", "c", "cdcdcc"};
    int allowed = 7;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 8866;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int numLength = 16;
    vector<string> forbidden = {"cddcdddddccccdd", "dddccdcdddcddc", "ccc", "cc", "dcdddcdcdcdccddc", "dccccc", "d", "dcccccddc"};
    int allowed = 22;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 64797;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int numLength = 16;
    vector<string> forbidden = {"dccccc", "cdcd", "dddc", "ddccc", "dddccddcdd"};
    int allowed = 29;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int numLength = 18;
    vector<string> forbidden = {"ccdccdcddcddcccc", "ccdcdcdc", "cccccccdccddcccc", "cdcddcccd"};
    int allowed = 5;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int numLength = 15;
    vector<string> forbidden = {"ccdccdccd", "cdd", "ccccccdcd", "dd"};
    int allowed = 11;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32209;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int numLength = 15;
    vector<string> forbidden = {"cc"};
    int allowed = 28;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int numLength = 16;
    vector<string> forbidden = {"cdccdccdddccddddcd", "dddcdcdccc", "d", "ccdd", "ddddcdddcdc", "dcccdcdddcdcdddc", "dccdccddccdccdccdd", "dddccdd", "cdddddddcdcdc"};
    int allowed = 2;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int numLength = 14;
    vector<string> forbidden = {"ddccddccdccdcd", "cdccdccdddddcdc", "dccddcccdccdcd", "dcdccdcdd", "cdccddddcdcc", "dcdddc"};
    int allowed = 22;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int numLength = 17;
    vector<string> forbidden = {"cdc", "ddcccccdd"};
    int allowed = 4;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 116941;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int numLength = 16;
    vector<string> forbidden = {};
    int allowed = 17;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int numLength = 18;
    vector<string> forbidden = {"dcdddcdc", "ddddccccdddcccdddc", "cddddcccdcddcdd", "cdccccdcccdcdccdd", "cccddccdddcccc", "ccccdddcdddcccddcd", "ccddc"};
    int allowed = 9;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int numLength = 14;
    vector<string> forbidden = {"dddddd", "dddccdddddc"};
    int allowed = 29;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int numLength = 16;
    vector<string> forbidden = {"cdddcd", "d", "ddddcddcddccdcddd", "ccdcc", "ddddddcdcddddcc", "dddddddd"};
    int allowed = 4;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int numLength = 17;
    vector<string> forbidden = {"cddcdccddccddddcdd", "ccdcddcd", "dddddddcccccdcdcd", "ddcc"};
    int allowed = 11;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int numLength = 15;
    vector<string> forbidden = {"ccdc", "dcc", "ddccddcdcdcdcccdd", "d", "ddccdccdcccc", "dc", "ccdccddddcccddd", "cdcddcddcc"};
    int allowed = 29;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int numLength = 14;
    vector<string> forbidden = {"cdccdcdccdddcdccc", "dcdddddccccdcdccc", "ccdcdcddccdddddc", "cdc", "dccddcdcdcccd", "dddccdddcc"};
    int allowed = 28;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int numLength = 14;
    vector<string> forbidden = {};
    int allowed = 21;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int numLength = 14;
    vector<string> forbidden = {"dd", "cdddc", "dcdccccccddc", "ccdcddcc", "dddd", "cddccccddc", "dccccdcdcdcddccd", "dcccdcdddcdcddcdd"};
    int allowed = 5;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 9899;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int numLength = 14;
    vector<string> forbidden = {"ddcdccddd", "cddcd", "cddddccddcdddddc", "ccccdccd"};
    int allowed = 11;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int numLength = 15;
    vector<string> forbidden = {"ccdddcdd", "ddddcccdcd", "cccdcddcdcccc", "cdddddcddddccdcccd", "c", "cddccddddddddc", "dcc", "cdddccdccccc"};
    int allowed = 16;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int numLength = 14;
    vector<string> forbidden = {"dddcdd", "dcccddddddddcccc", "ddcdcdccdcdddcddc", "dccddcdccd"};
    int allowed = 4;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int numLength = 15;
    vector<string> forbidden = {"cccdccdddcd", "dcdccd"};
    int allowed = 1;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 27732;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int numLength = 14;
    vector<string> forbidden = {"dcddddddcddcddd", "dcdddcdcdd"};
    int allowed = 30;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int numLength = 14;
    vector<string> forbidden = {"cdcc", "cd", "cdddcddcdccdddccc"};
    int allowed = 6;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 14295;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int numLength = 5;
    vector<string> forbidden = {"ccddccccdddddcccdd", "ddcddd", "cddccccdcdddcd", "ccccc"};
    int allowed = 4;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int numLength = 2;
    vector<string> forbidden = {"cdccdd"};
    int allowed = 26;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int numLength = 4;
    vector<string> forbidden = {"dcccc", "dc", "cccc", "dcccddddcdd", "c", "cddcdcccdcdcddcd", "ddcdc"};
    int allowed = 19;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int numLength = 7;
    vector<string> forbidden = {"cddcdcddcddcdccc", "dcdcdc", "dcddccdddcd", "cdcccdccddcc", "dcdcddddcccc", "c", "dddccdccddcddd", "dc"};
    int allowed = 7;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int numLength = 6;
    vector<string> forbidden = {"cccddddcddcdddd", "cccccdcd", "cdcdcc", "cddcdcdcdcccd", "dd", "cddcdcddddcdd", "cddcd", "cdccdccddc", "ccddcc"};
    int allowed = 7;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int numLength = 4;
    vector<string> forbidden = {"ccc", "dcddccccdddccdcd", "dddccddcccccdc", "cdcccdcdcccdccc", "dccdcdcdcccc", "dddcddcdddc", "cdccccccccddcccccc", "dd", "cccdcdc"};
    int allowed = 20;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int numLength = 6;
    vector<string> forbidden = {"cd", "dddd", "dc", "ddcdcdcccdcdccddd"};
    int allowed = 24;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int numLength = 2;
    vector<string> forbidden = {"cc", "cddc", "cccc", "dddd", "dcd"};
    int allowed = 1;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int numLength = 2;
    vector<string> forbidden = {"ccccdccccccdddc", "c", "cccd", "dddddddcc", "dc", "ccdcddddccdcdddcd"};
    int allowed = 20;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int numLength = 6;
    vector<string> forbidden = {"ccdcdddcddddcddddc", "d", "dddcddd"};
    int allowed = 26;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int numLength = 1;
    vector<string> forbidden = {"dddcddcdddc", "ddccccdcdccccddc", "ccddcdc", "dddcddcdcccdcccdd"};
    int allowed = 2;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int numLength = 5;
    vector<string> forbidden = {"ddddccdddccc", "ccdcdddccdcddcdcdc", "cdcccc", "cddddcdccdccdccdc", "ddcdcdcdc"};
    int allowed = 25;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int numLength = 5;
    vector<string> forbidden = {"dcccddddddcdccdc", "c", "dddccdddc", "cdddcccdcdcccccccd", "cdc", "dcdccddddcddddc"};
    int allowed = 29;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int numLength = 7;
    vector<string> forbidden = {"cddc", "ddddccdcccdccdccc", "cdddddddcccd", "c", "dcdccdcccccc", "cddcccc", "cddccdccdcc", "ccdcdccccc"};
    int allowed = 9;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int numLength = 7;
    vector<string> forbidden = {"ccddc", "cccccc", "cccdcdcdccdcdc", "ccddcccdcdc", "ccccccdc", "cdddcddcdddcccccdd", "ddcccddd", "dd"};
    int allowed = 11;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int numLength = 7;
    vector<string> forbidden = {"cdddddccdcdcddc", "ddddcddccdcc", "dddcccdcc", "dddcdc", "c", "cdccdc"};
    int allowed = 30;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int numLength = 1;
    vector<string> forbidden = {"ddddcccdcdcd", "d", "dddccdddcdddcccdcd", "cdcdc", "ccddcdcdd", "cddddcddcddcd", "ccdccdcddcc", "cdcccccdddddcccd"};
    int allowed = 3;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int numLength = 5;
    vector<string> forbidden = {};
    int allowed = 6;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int numLength = 1;
    vector<string> forbidden = {"cdcccccdddddccdcc"};
    int allowed = 7;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int numLength = 7;
    vector<string> forbidden = {"cddddccdd", "cdddcdd", "ccc", "ccccdccccdcdddc"};
    int allowed = 5;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int numLength = 18;
    vector<string> forbidden = {"c", "d", "cd", "dc", "cc", "dd", "cdd", "ccc", "ddc", "dcc"};
    int allowed = 100;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int numLength = 18;
    vector<string> forbidden = {"ccccc", "ccccd", "cccdc", "cccdd", "ccdcc", "ccdcd", "ccddc", "ccddd", "cdccc", "cdccd"};
    int allowed = 100;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int numLength = 18;
    vector<string> forbidden = {"c", "cc", "ccc", "cccc", "ccccc", "cccccc", "ccccccc", "cccccccc", "ccccccccc", "cccccccccc"};
    int allowed = 100;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262122;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int numLength = 18;
    vector<string> forbidden = {"cdcd", "ddddc", "ccdcdc", "cdc"};
    int allowed = 4;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 146712;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int numLength = 18;
    vector<string> forbidden = {"cccccccccccccccccc", "cccccccccccccccccd", "ccccccccccccccccdc", "cccccccccccccccdcc", "ccccccccccccccdccc", "cccccccccccccdcccc", "ccccccccccccdccccc", "dddddddddddddddddc", "ddddddddddddddddcd", "dddddddcdddddddddd"};
    int allowed = 100;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int numLength = 18;
    vector<string> forbidden = {"cccccccccccccccccc", "dddddddddddddddddd", "ccddccddccddccddcc", "ddccddcccccccccccc", "ddddddcccddddddddd", "cccccccccccccccccd", "dddddddddddddddddc", "cccddccdddddddcccc", "cccdddddddddcccccc", "cccccccccccdddddcc"};
    int allowed = 100;
    TennisRallies* pObj = new TennisRallies();
    clock_t start = clock();
    int result = pObj->howMany(numLength, forbidden, allowed);
    clock_t end = clock();
    delete pObj;
    int expected = 262144;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7348444&rd=4610&pm=1802
********************************************************************************
#include<vector>
#include<string>
#include<functional>
#include<algorithm>
#include<numeric>
#include<strstream>
#include<cmath>
using namespace std;
 
template<class Tp>int SZ(Tp&v){return(int)v.size();}
#define FORNF(i,n,f) {int for_n=(n);for(int i=0;i<for_n&&(f);i++){
#define FORN(i,n) FORNF(i,n,1)
#define FEACHF(i,v,f) FORN(i,SZ(v),f)
#define FEACH(i,v) FORN(i,SZ(v))
#define FORF(i,s,e,f) {int for_e=(e);for(int i=(s);i<=for_e&&(f);i++){
#define FOR(i,s,e) FORF(i,s,e,1)
#define FORRF(i,s,e,f) {int for_e=(e);for(int i=(s);i>=for_e&&(f);i--){
#define FORR(i,s,e) FORRF(i,s,e,1)
#define NEXT }}
 
#define VALL(v) v.begin(),v.end()
#define SZO sizeof
#define ARRSET(a,el,val) FORN(i,SZO(a)/SZO(el))((el*)(a))[i]=val;NEXT
#define MEMCLR(a) memset(a,0,SZO(a));
#define VARCLR(a) memset(&a,0,SZO(a));
typedef vector<string> vecs; typedef vector<double> vecd;typedef vector<int> veci;
//#define iint long long
typedef istrstream itext; typedef ostrstream otext;
 
int numL;
vecs forb;
int allo;
int sum;
char r[100];
 
#define CATCHREC(code) {if(code)return 1;}
 
int rec0(int depth,int pts){
  FEACH(i,forb)
    int p=depth-forb[i].size();
    int f1=1;
    FORF(j,p,depth-1,f1)
      if(r[j]!=forb[i][j-p]) f1=0;
    NEXT
    if(f1) pts++;
  NEXT
    
  if(pts>=allo) return 0;
  if(depth>=numL){
    ++sum;return 0;
  }
 
  r[depth]='c';
  CATCHREC(rec0(depth+1,pts));
  r[depth]='d';
  CATCHREC(rec0(depth+1,pts));
  return 0;
}
 
struct TennisRallies{
int howMany(int numL, vecs forb, int allo){
  ::numL=numL;::forb=forb;::allo=allo;
  return Main();
}
int Main(){
  sum=0;
  rec0(0,0);
  return sum;
}
};

********************************************************************************
*******************************************************************************/