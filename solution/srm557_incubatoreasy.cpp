/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12196
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

class IncubatorEasy {
public:
    int maxMagicalGirls(vector<string> love);
};

int IncubatorEasy::maxMagicalGirls(vector<string> love) {
    int ret;
    return ret;
}


int test0() {
    vector<string> love = {"NY", "NN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> love = {"NYN", "NNY", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
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
    vector<string> love = {"NNYNN", "NNYNN", "NNNYY", "NNNNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> love = {"NNNNN", "NYNNN", "NYNYN", "YNYNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> love = {"NNNNN", "NNNNN", "NNNNN", "NNNNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> love = {"Y"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> love = {"YNNNN", "NNNYN", "NNNNN", "YNNNN", "NYNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> love = {"NNNNNNYY", "YNNYNNNN", "NYYYYNYN", "NYNYNNNN", "NNNNNNNN", "YNYYYNNY", "NNYYNYNN", "NNNYNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> love = {"NNN", "YNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> love = {"NN", "NN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> love = {"NYNNNNNN", "NNNYNNNY", "NNNNNNNN", "YNNNNNYN", "NNYYYNNN", "NNNNNNNN", "YNNNYYYY", "NYNNYYNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> love = {"NYNNYNNNNN", "YYNNYNNNYN", "YNNNYNNYNN", "NNNNNNNNNN", "YYNYNYYYNN", "YYYYYYYNNY", "NNNNYNNNNY", "NNYYNNNYYY", "NNYNNNNNNN", "NNNNYNYNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> love = {"NNNNNNN", "NNNNNNY", "NNYNNNN", "YNNYNNN", "NYNNNNN", "NNNNNNN", "NYNYNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> love = {"NYNNNNNNN", "YNYNNYYYN", "NNNNNNYNY", "NNNNNNNNN", "NNYNYNNNY", "YNNNNNNNN", "NNNNYNNYY", "NNNNNYNYN", "NNNNYNYNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> love = {"NYNYYY", "NNNNNN", "NYNNNN", "NNNNNN", "NNNYNN", "NNNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> love = {"NN", "NY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> love = {"NN", "NN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> love = {"YNNYYYNN", "NYNNYNNN", "YNYYNNNN", "NNYNNYYN", "NYYNYNYY", "NNNNYYNN", "YNNYYYYY", "YYNNNNYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> love = {"NNN", "NNN", "NNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> love = {"NNN", "YNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> love = {"NNN", "NNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> love = {"NNNNNYN", "YNNNNNN", "NNNNNYY", "YNNNNNN", "NNNNNYN", "YYNYNNN", "NNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> love = {"NNY", "NYN", "YYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> love = {"NNN", "YNN", "NYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> love = {"NNYY", "NNNN", "NYNN", "YNYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> love = {"NNYNYNYYNN", "YNYNNYNNYY", "NNNNNNYNNN", "NNNNNYNNNY", "YNNNYYNYNN", "NNNNNYNNNN", "NNNNYNNNNY", "NNNNYNNNNN", "NNYNNNNNNN", "NNNYNYNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> love = {"YNNY", "NNYN", "NNNN", "YNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> love = {"NYNNYNN", "NNNYNNN", "NNNNNNN", "NNNYNNN", "NNNNNNN", "YNNYNNN", "NNNNYNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> love = {"NNNN", "YNNN", "NNYN", "NYYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> love = {"NNNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNNN", "NNYNNNN", "NNNNNNN", "NNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> love = {"NNN", "NNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> love = {"NNNNNNNNNY", "NNNNNYNNNN", "NNNNNNNNYN", "YNNYNNYNNN", "NNNNNNNYNN", "NNNNNYNYNY", "NNNNNNNNNN", "NNYNNYNYNN", "NYNNNYNYNN", "NYYYNNNYNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> love = {"YN", "NN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> love = {"NNNNNN", "NNNNNN", "NYNNNN", "NNNNNN", "YNNNNY", "NNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> love = {"YNNNNYN", "NNNNYNN", "NNNNYNN", "NNNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> love = {"NNNNNN", "NNNNNN", "NNNNNN", "NNNNNN", "NNNNNN", "NNNYNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> love = {"NNNNNNNYN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNYNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> love = {"NNNNNYNNYY", "NNYNNYNNNY", "NNNYNNNNNY", "NYNNNNNNYY", "YNYNNYNNYN", "NNNNNNNNNN", "YNNYNNYNNN", "NNNYNNNYYY", "NNYNNYYYNN", "NNYNNNYNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> love = {"NYNNNYNNN", "NNYYNNNNN", "NNNNYNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNYYYNNN", "NNNYNNNNN", "NNNNNNNNN", "NNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> love = {"YNNNNN", "NNNNNY", "NNYNNN", "YNNNNN", "NNNNYN", "NNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> love = {"NNNNNNNNNY", "NNYNYNNNNY", "YNNNYNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NYYNNNNNYN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNYNYN", "NNNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> love = {"NNNN", "NNNN", "NNNY", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> love = {"NNNNNNNNNN", "NNYNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNYNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> love = {"YNNNNYN", "NYNNNYN", "NNNNYNY", "NYNNNNN", "NYYYNNN", "NNNNNNN", "NNNNNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> love = {"NY", "NN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> love = {"NNNN", "YNNN", "NNNN", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> love = {"NYYYYN", "NNYYYY", "NNYYYY", "YNYYNY", "YYYYYY", "YYYNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> love = {"NNNNNNN", "NNNNNNY", "YYNYYNY", "YNNNYNN", "NNNNNNN", "NNYNNNN", "NNYNNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> love = {"NNNNNN", "NNNNNN", "NNNNNN", "NNNNYN", "NNNNNN", "NNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> love = {"NYN", "YYY", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> love = {"NN", "YN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> love = {"YY", "NY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> love = {"NNNNNNN", "NNNNNNN", "NNNYNYN", "NNNNNNN", "YNNNNNN", "NNNNNNN", "NNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> love = {"YNNNNNNNY", "NNYNYYNNN", "YNYNNYNNY", "NYYYYNYYY", "YNNNNNYNN", "YNYNYYNNN", "NYNYYYYYY", "NNYNNNNYY", "NYNNYNYYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> love = {"NN", "NN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> love = {"NNN", "NNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> love = {"NNYNNNNY", "NYNYNNYN", "NNYNNNNN", "YNNNNNNN", "YYYNNYNN", "NNNNNNNY", "NYNNYNYN", "NYNNNNYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> love = {"NNN", "NYN", "YNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> love = {"NNNNN", "NNNYN", "NNNNN", "NNNNN", "NNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> love = {"NN", "NN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> love = {"NYNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> love = {"NNNNNNN", "YNYNNNN", "NNNNNNN", "NNNYNNY", "NNNNYNN", "NNNNYYY", "YYNYNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> love = {"NNNNNNN", "NNNNNNN", "NNNNYNN", "NNNNNYN", "YNNNYNN", "NYNNNYN", "NNNNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> love = {"NNNNNNNNN", "NYNNNNYNN", "YYYYNNYYY", "YYYNNNYNN", "NNNYNNYNN", "NNYNNYNNN", "NNNNNNNNY", "NNNNYNNYY", "NNNYYNYNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> love = {"NNNYNNN", "NNNNNNN", "NNNYNNN", "NNNNNNY", "NNNNNNN", "NNNNNNN", "NNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> love = {"NNNNNNN", "NNNNYNN", "NNNNNNN", "NNNNNNN", "NYNNNNN", "NNNNNNN", "NNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> love = {"NNNNNNN", "NYNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNNY", "NYNNNNN", "NNYNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
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
    vector<string> love = {"NNNNY", "NNNYY", "YNYNN", "NNYNN", "YYYNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> love = {"NYNYNNNYY", "NYNNYNNYN", "YYNNNYNNN", "YNYYYYYYN", "NNYYNNYNY", "NYYNYNNYN", "NYYNYYYYN", "YNYYNNYYY", "NNNNYYYYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> love = {"NNNYNNNNN", "NYNNNNNYN", "YYNNNNNNY", "YNNNNNNNY", "NNNNYYYNY", "YNNYNNNNN", "YYNYNNNYN", "NYNNNNYNN", "NYYNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> love = {"NNY", "YNY", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> love = {"NNNNNY", "NNNNNN", "NNNNYN", "NNNNNN", "YNNNNN", "NNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> love = {"NNYNN", "NNNNN", "NNNYY", "NNNYN", "NNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> love = {"NNNNNYNNNN", "NNNYNNNNNN", "NNNNNNNNNN", "NNNNNNNYNN", "NNNNNNNNYN", "YNNNYYNNNN", "NNNNNNNNNN", "NNNYYNNNNY", "NNNNYNNNNN", "NNYNYNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> love = {"NNNNNN", "NNNNNN", "NNNNNN", "NNNNNN", "NNNNNN", "NNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> love = {"NYYNNNN", "NNYNYYN", "YNNNNNY", "YNNNNYY", "NYNYNYN", "YYYNNYY", "NYNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> love = {"NNN", "NNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> love = {"NY", "NY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> love = {"NNNNNNNN", "NNNNNNNN", "NNNNNNNN", "NNNNNNNN", "NNNNNNNN", "NNNNYNNN", "NNNNNNNN", "NNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> love = {"YNYNNNNN", "NNYNYNNY", "NNNNNYNN", "NNNNNNNN", "NNNNNNNN", "YNNNNNYN", "NNNNNYNN", "NNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> love = {"NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> love = {"NNNN", "NNNY", "NNNN", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> love = {"YNY", "NYN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> love = {"NYNN", "YNNN", "NNNN", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> love = {"NYNNYNY", "NYNYYYN", "NNNNNYY", "YYNNYNY", "NYNNYYY", "YNNNYNN", "NYNNYYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> love = {"NNN", "YYN", "YYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> love = {"NNNNNYNNNN", "NNYNNNNNNN", "NNNNNNNNNN", "NNNNNNNNYN", "YNNNYNNNNN", "NNNYNNNNNN", "NNNNNNNNNN", "NNYYNNNNNN", "NNNNNNNNNY", "NNNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> love = {"NNNNYN", "NYYYYN", "NNNNNN", "NNYNNN", "NNNNNN", "NNNYNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
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
    vector<string> love = {"NNNNY", "NNYNN", "NNNNN", "NNNYN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> love = {"YNNNNYN", "YNNNNNY", "NNYNNNY", "NYNYNNN", "YNNNNNN", "NNNNNYN", "NYYYNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> love = {"NNNNNNNYNN", "NYNNNNNNNN", "NNNNNNNNNN", "NYNNNNNNNN", "NNNNNNNNNN", "NNNNYNNNNY", "NNNNNNNNNN", "YNNNNNYNNN", "YNNNYNNNNN", "NNNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> love = {"YYNNYYYN", "YNNNNYYY", "NYYYNNNY", "YYNYYYYN", "YYNYYYNN", "NYNYYYYY", "YNNYYNNN", "NNYNNNYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> love = {"NYN", "YNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> love = {"YNNNYNNYN", "NYYNNNNNN", "YNYYNNYNY", "NNYNNNNNN", "NYYNYNNNN", "YNNNYNNNN", "YNYNNYNNN", "NNYNNNNNN", "NNNNNYNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> love = {"NYNYYNYNYY", "NYYNNYYYNY", "YYNNYYNNNN", "NYNYNNYNYN", "YNYYYNYYYN", "YNYYYNNYNY", "NYNYYNNYYN", "YNNNNNNYNN", "YNYYYNYNNY", "YNYYNNYYYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> love = {"NNNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNNN", "NNNNNYN", "NNNNNNN", "NNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> love = {"YYY", "YYN", "YYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> love = {"NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> love = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> love = {"NY", "NN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> love = {"Y"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> love = {"NNNNN", "NYNNN", "NYNYN", "YNYNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> love = {"NYNN", "NNNN", "NYNN", "NYYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> love = {"NYN", "NNY", "NYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> love = {"YYYYY", "NNNNY", "NNNNY", "NNNNY", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> love = {"NNY", "NNY", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> love = {"NYN", "NNN", "NYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> love = {"NYYN", "NNNY", "NNNY", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> love = {"NYNNNN", "NNYNNN", "NNYNNN", "NNNNYN", "NNNNNY", "NNNYNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> love = {"NY", "NY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> love = {"YN", "YN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> love = {"NYNN", "NNYN", "NNNY", "NNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> love = {"NYNNNNNN", "NNNYNNNN", "NYNYNNNN", "NNNNYNNN", "NNNNNYNN", "NNNNNNYN", "NNNNNNNY", "YYNYYYYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> love = {"NNNNN", "NNNNN", "NYNYN", "YNYNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> love = {"NYN", "NYN", "NYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> love = {"YNNNY", "NNNNY", "NNNNY", "NYNNN", "YNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> love = {"YNYNYNYNNY", "YNYNYNYNNY", "YNYNYNYNNY", "YNYNYNYNNY", "YNYNYNYNNY", "YNYNYNYNNY", "YNYNYNYNNY", "YNYNYNYNNY", "YNYNYNYNNY", "YNYNYNYNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> love = {"NYY", "NNY", "NYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> love = {"NYYY", "YNYN", "YYYN", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> love = {"NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "YYYYYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNYNNN", "NNNNNNYNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> love = {"NNNNY", "NNNNN", "NNNNN", "NNNNN", "NNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> love = {"YYN", "NNY", "NNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> love = {"NYN", "NYN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> love = {"NYNN", "NNYN", "NNNY", "NNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> love = {"NNNN", "NNNY", "NNNY", "NNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> love = {"NNNNN", "NNNNN", "NNNYN", "NNNNN", "NNNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> love = {"NNNNN", "NNNNN", "NNNNN", "NNNNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> love = {"NNN", "NYN", "NYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> love = {"NYYNN", "NNNYN", "NNNNY", "NNNYN", "NNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> love = {"NNY", "NNY", "YNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> love = {"NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> love = {"NNY", "YNN", "NYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> love = {"NNNNNN", "NNNNNY", "NYNNNN", "NNYNNN", "NNNYNN", "NNNNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> love = {"NNYN", "NNYN", "NNYN", "NNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> love = {"NNNNN", "NNNNN", "NNNNN", "NNYNN", "NNYNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> love = {"NYYYN", "NNNNY", "NNNNY", "NNNNY", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> love = {"NNNYN", "NNYNN", "NNNNY", "NYNNN", "YNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> love = {"N"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> love = {"NNNYN", "NNNYY", "NNNYY", "NNNNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> love = {"YNN", "YNN", "YNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> love = {"YNNNN", "YNNNN", "YNNNN", "YNNNN", "YNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> love = {"NNNNNYYNNN", "NNNNNNYYYY", "NNNNNNYYYY", "NNNNNNNNNY", "NNNNNNNNNY", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> love = {"YYYNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNYNNNNN", "NNNYNNNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNYNNN", "NYYNNNNNNN", "NNNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> love = {"NYYN", "NNNY", "NNNY", "NNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> love = {"NNY", "NYN", "NYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> love = {"NYNYNYNYNY", "NYNYNYNYNY", "NYNYNYNYNY", "YYNNNYNYNY", "YYNNNYNYNY", "YYNNNYNYNY", "YYNNNYNYNY", "YYNNNYNYNY", "YYNNNYNYNY", "YYNNNYNYNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> love = {"NNN", "YYN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> love = {"NYNN", "NNYN", "NNNY", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> love = {"NNNNNNNYNN", "NNNNNNNNNN", "NNNNNYNNNN", "NNNNNNNNNN", "NNNNNNNYNN", "NNNNNNNNNN", "NNNYNNNNNN", "NNNNNNNNNN", "NNYNNNNNNN", "NNNNNYNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> love = {"NNYYNNYYYY", "NNYYNNYYYY", "NNYYNNYYYY", "NNYYNNYYYY", "NNYYNNYYYY", "NNYYNNYYYY", "NNYYNNYYYY", "NNYYNNYYYY", "NNYYNNYYYY", "NNYYNNYYYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> love = {"NYN", "NNY", "YNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> love = {"NNNN", "NYNN", "NYNN", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> love = {"YNN", "NNN", "YNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> love = {"YY", "YY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> love = {"NYNNN", "NYNNN", "NYNYN", "YNYNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> love = {"NYYNNN", "NNNNNN", "NNNNNN", "NNNNNN", "NNNYNN", "NNNYNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> love = {"NYN", "NNY", "NNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> love = {"YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY", "YYYYYYYYYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> love = {"NNYN", "NNYN", "NNNY", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> love = {"YYY", "NNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> love = {"NYNN", "NNYY", "NNNN", "NNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> love = {"NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> love = {"NYYNN", "NNNYN", "NNNYN", "NNNNY", "NNNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> love = {"NYNY", "NNYN", "NNYN", "YNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> love = {"NYY", "NNN", "NNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> love = {"NNN", "NNY", "NNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> love = {"NN", "YN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> love = {"NNNNY", "NYNNN", "NYNYN", "NYNNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> love = {"NYYYY", "NYYYY", "NYYYY", "NYYYY", "NYYYY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> love = {"NYNNNN", "NNYNNN", "NNNYNN", "NNNNYN", "NNNNNY", "NNNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> love = {"NYNN", "NYNN", "NNNY", "YNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> love = {"YNYNNYYNYN", "YNYNNYYNYN", "YNYNNYYNYN", "YNNYNNNYNY", "YNYNNYYNYN", "YNYNNYYNYN", "YNYNNYYNYN", "YNYNNYYNYN", "YNYNNYYNYN", "YNNYNYNNYN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> love = {"YYNNN", "NNNNN", "NNNYY", "YYNNN", "NNNNN"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> love = {"NYYN", "NYNN", "NYNY", "NNNY"};
    IncubatorEasy* pObj = new IncubatorEasy();
    clock_t start = clock();
    int result = pObj->maxMagicalGirls(love);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22750353&rd=15179&pm=12196
********************************************************************************
/*
 Muhammad Magdi Muhammad
 */
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
 
#define all(v)          v.begin(),v.end()
#define allr(v)         v.rbegin(),v.rend()
#define rep(i,m)        for(int i=0;i<m;i++)
#define REP(i,k,m)      for(int i=k;i<m;i++)
#define mem(a,b)        memset(a,b,sizeof(a))
#define mp              make_pair
#define pb              push_back
#define OO ((int)1e9)
#define MAX 100000
 
typedef long long ll;
 
int diri[] = { -1, 0, 1, 0, -1, 1, 1, -1 };
int dirj[] = { 0, 1, 0, -1, 1, 1, -1, -1 };
int compare(double d1, double d2) {
  if (fabs(d1 - d2) < 1e-9)
    return 0;
  if (d1 < d2)
    return -1;
  return 1;
}
 
using namespace std;
int m[11], p[11];
vector<string> lve;
int n;
void dfs(int ind) {
  for (int i = 0; i < n; ++i) {
    if (lve[ind][i] == 'Y' && !p[i]) {
      p[i] = 1;
      dfs(i);
    }
  }
}
int check(int mask, int N) {
  mem(m, 0);
  mem(p, 0);
  n = N;
  for (int i = 0; i < n; ++i) {
    if (mask & (1 << i)) {
      m[i] = 1;
      dfs(i);
    }
  }
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    if (m[i] && !p[i])
      ans++;
  }
  return ans;
}
 
class IncubatorEasy {
public:
  int maxMagicalGirls(vector<string> love) {
    int n = love.size(), mx = 0;
    lve = love;
    for (int mask = 0; mask < (1 << n); ++mask) {
      mx = max(mx, check(mask, n));
    }
    return mx;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/