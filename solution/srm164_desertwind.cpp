/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1570
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

class DesertWind {
public:
    int daysNeeded(vector<string> theMap);
};

int DesertWind::daysNeeded(vector<string> theMap) {
    int ret;
    return ret;
}


int test0() {
    vector<string> theMap = {"--*", "@-*", "X--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
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
    vector<string> theMap = {"-X-*", "-@X-", "---X", "--**"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> theMap = {"*--X-----", "--XX--@--", "*-X------"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> theMap = {"--@", "*--", "--*"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> theMap = {"*@", "--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> theMap = {"--@-----------------------------------------------", "--------------------------------------------*-----"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> theMap = {"--@------------------------------------------*----", "--------------------------------------------*-----"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> theMap = {"--@-----------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> theMap = {"--@-----------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "------------------------------------------------*-", "-------------------------------------------------*"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> theMap = {"@X------X--", "-X--X--*X--", "-XX-X--*X--", "----X--*X--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> theMap = {"*--X--X---*", "--XX----XX-", "XXX---@----", "*------X-X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> theMap = {"@-------X--", "-X---------", "--X-X------", "--*-X--*X--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> theMap = {"*--X----", "--XX----", "--------", "XX-@----", "-----X--", "--------", "------*-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> theMap = {"---X---X---X---X---X---X---X---X---X---X---X---X-*", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X--", "@X---X---X---X---X---X---X---X---X---X---X---X----"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 3580;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> theMap = {"**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************************************", "**************************@***********************", "**************************************************", "**************************************************", "**************************************************"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> theMap = {"X-XX*X-X---X------XX-XXXXXXXXX-XXXX-XXX-X---X-XX-X", "--X-X----XXX---XXXXXXXXX--X-XX-X-XX-XX-*X--XXX--X-", "XXXXXX--XX-X--X-X--XXX-X----X---XX---X-XX-XX-X-X--", "XX---XXXXXXX-*X-XX--XX--X-X------XXXX-*-X--XX--X-X", "-XX--X--X--XXXXX-X-X---------X--X-XX-X-X-XX-X-XX--", "*XX----X--XXX-XXX-X--XX--X-XX-X-XX--X--XX-XXX-XX--", "X-X--X---X-------X-X-*---XX----X-X-XX-XXXXX-XX-X-X", "X-XXX-X-XXX-XX-X--XX-*--X--XXXXXXXX-XX---XX---X--X", "XXXXXXX-X-----XXXX--X-XXX--X--XXX-XXXX-X-X--X-----", "XX-XX-*--X---XX-X-XX-X-X---XX------XX-X---X--XXX-X", "-XXX-XXXXX-XXXX--X---X-X--X--X--X--X----XXX-X-*-XX", "-X--XX*--XXX-X-XX--X-X-XXXX----XX--X-XXX--XX--XX-X", "X----X-XXX---XXX--XX-*--XX-X--X---XXXX-X---XX-X-XX", "XXX-----XXX-X*-XXX--X-X---XX--XX--X-X-*XXX---X--X-", "XXXXX--X-X-XXX--X-XXXX--X-XX--XX--XXXX--X--X-X-XXX", "--X--X--X-X-X-XXX------XXX-X--XX--XXXXXXX-XX-XXXXX", "X-X--XXXX----X-XX----X-X--X---XX---XXXXXX--XX-XX--", "-XX-X-XXX--XXXXX-XXXXX-XX-XXX-*X--XXXXXXXXX--XX-X-", "--X-XX-X--X--XXX-X-XX-X-XX--XX---XX-XXX-X--XXX-XX-", "---XXX-X-XXX-XXX--X-X--XX---XXXX*--X-XX---XX--X--X", "-XXXX-----XXX---XXXX-X-XXX*-XX--XX--XX--X-XX-X-*XX", "X--XXXXXX-XXXXX-X--X-XXX--X-X-XX-XXXX-X-XX-X-XXX-*", "-X-X---XXX--X-XXX-----X-X-X--XX--X--XXX-X-XXXX-X--", "X--X-X----X-XX-XX-XX-------XXX--X-XXXXX--X-XXX---X", "XX-X-X-X-X-X-XXXXXXX-XX------XX--X-X--XX-XXXXXXX-X", "*-XXXXX-X--X--X---X-X----XX-XXXX-X**--------X--XX-", "-X-X*XXX-XX---X-XXXX-XX--XX-XX---X-XXX-X--X----XX-", "-XX--XXX-----X-XX-X-XXXX-XXXX-X--XXXX-XX-XX-X----X", "X*--XX-X-X--XX-XXX-X-X-X---X----X---X-X-----X---XX", "X-X--X-------XXX-XXX--X-X-X----XXX-X--X---X---XXX-", "X---XX-XX---X-X-X-XXX-X---X*X----*-X-X-X------X-X-", "X--X-X-X-XX-----XXX--X--XXXX--X-XX--------XX----X-", "-X-XXX----X--XXXX-X--XXX-X---XXXX-XXXXX--XXXXXXX--", "X-X---XX-**X-XX-*-X-----X-X---X----X-XXX-X*--XXX--", "XXXX-X--XX*-X--XXX-X-X-XXXXXXX--XXX*-X--XX-XX--X--", "--XXX-X---X--X-XX---XXXXXX-X-X--XXX-*XX---XX--X---", "--XXXXX-XX--XX---XXX--XXX--XXXX--XX-X--X---X--X-X-", "XX-XXX-X-X----XX-X-XXX-XX---XX---XX-X---X-XX-XX---", "X-X--X-XXX--X-----XX---X--X-------X-X-X-XXXXXXX--X", "-----X-X-----XXXX-XX----X--XX--XX------XXXXX-XXXX-", "X--XXX-XX--XXXX-X---X--XX-X----XXX-X-XXXX---X-X--X", "X--XX----X---XXXX*-XX----XX-X-X--X-----XXX--XXXXX-", "--X-XXXXXXX-XX-XX-----X--X-X--X-XXX-XXXXX----*--X*", "X----X---XXX-X-X-XX---*X-XX-X-XX---X----XXX--XXXXX", "--XX-XX-XXXX----X-XX----XX-XX--XX-X*-X-XX-XXXXX-XX", "XX-XXX-XX-X--X-X-XX-X-X---XXX--XXXX-XXXX--XX-X-X-X", "-X-X--X-----XXX-X-XXX-X-X-XX-X-XXX---XXX-XXXXX-XX-", "X-XXXX-XX-XXX--XX-XXX*X--XXXX-XX-XXX-XXXX-----X--X", "---X---X-X-----X-X-X-XX--X--X-XX----X-X*X-XX---XXX", "@---X--XXXXXX--*-XX-X--X-XXX-XXX--XXXXX--XXX--X-X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> theMap = {"--*-X-XX-XX-X-XX-X--*-XXX---*-X---XX-XX--X-------X", "X-X-X*--*-------XX-XXX--XX-X-X---XXXXXXXX---X-X-X-", "XXX-XXXXXXX-------XX--XXX-XXX-XXX-X-X-XXXXX---X-X-", "-XX-X----XXXX-XX---XX-X----X-X----XXX-X-X--XXX-XXX", "--X-XX--XX-XX-XXXXXXX-X---XX-X---X--XX-XXX-X-X---X", "X-XXX-X-XXX--X--XXXX--*-X-X-X-X-X-XXXXXXXX---X-X--", "XX-X-XX-XXX--XX-X--X----XX-XXX----X----XX--X-X-X-X", "-XX---------X--X-X--XXX--XX-X-X---XXX--X--X-----X@", "XXXXX--X---XXXXXXX----XXX---X---XXX-XX-XXXXX--XXX-", "XXXXXXX--XX--XXX-X-----XXXX---X-XXXXXX-X-----XXX--", "XXX---X--X--X--X-X--X----X---X---X--XXX-XX-XX----X", "-XXXX----XXXX--X*XXXXX-XXX-X-XXXXX-X-------XX-X-XX", "X--XXX----X---X-XX-X-X-XXXX-X---*X---X-X--X-XXXXXX", "--XXX-XX-XXXX-X--XX-X--XXX--XX---X-----X-XXXXX-XXX", "X-*-XX-XX-X--X-X-XXX--XXX---XX*---X--X-X-*XXX---XX", "XXXXX--XXXXX*XXX-*-X----X--**XXXX*XXX--X--X-XXX-XX", "--XXX---XX--XXX--X---*----X-X-XXX---XX-XXX-X-XXXX-", "-XX--XXX-X---X----X-XX-XX-X--XXXXX----X--XXX-X--XX", "-X-X-XX---X-XXX---*XX--XXXXX-X---XX--XX----XXX----", "XXXXX-X*XX--X---XXXX-*X----X-X-----X---XXX-X-X-XXX", "-XX---XXXXXXX-X--X----XXXX-X-X-XX--XXXXX-X--XX-XX-", "-XX--XX-XX-X-XXX----XX-XXXX-XXXX--XX-XXX--X-X---X-", "-X*----XX-XXX-X--XX------XX--X--X-XX--X--X-X-XXX-X", "---XXX-X--X-X-X-----X---X--X---XXXXX--X----X----XX", "XX--XXX--X-----XXX--XX-XX-XX-X--X-XXX-X--XXX--X-XX", "X--------XXX-XX-*X--X-X-XXXXXX-X-X---X--XXX-XXX*X-", "----XXXXXX-XXX*XX-X-X--X-X-X-XXXX-XXXXX-X-X--X-XXX", "X-XX-X-XX-XX-X-XX--X-XX-X---X---X--X-X-X-XXX-----X", "-XX-X---X-XX-X-XX-XX--X-XX--XXX--XX--X-XXXX--XX-X-", "XXXX-XX--X-----XXX--------X-XX--XXXX--X--X--------", "-XXX----XX--X-X--XXXX-X---X-X--------XX--X-XX--X--", "-----X-XX-X-XX-X-----X-XX--XXXXXXX--XX----X--X-XX-", "XX-XX-X--X-X-XXX-X-----X-XXXX-XX--XX---XXXXXXXX--X", "XX-X--X--X-XX----X---X---X-XX-X-X----XXXX---XXX---", "XXXXX---XX----XXX----XX-XXX-X---X---X-XXXX-----XXX", "XXXXXXX-XX*-X---X-XX--X-XXX---X-X---X-XXX-X--XX--X", "X*---*XXX-XX-XXXXXX-XXX--*---X--XXX--X--XXXX-X-X-X", "XXXXXXXX---XXX---*XXXXX-XX--X-X-XXXX--X------X---X", "-X-X--XX-----X--X-XX--X--X--*XXX-X---X--XX-XX--XX-", "X-X*XXX---X--XXXXXX-X-X--XX-X---XX-X-XXXX--X*--X--", "--X---XXXX---XX-X-X--X-------------X-----X--XXX--X", "-XXXX--XXXX-X-XX-X-X---X-X-XXX--X---X--X--XXXX----", "X-XX---XXXXXX-XX-X-XX--XX-X-XX----X-X-X--XX-X--X-X", "XXX--XXXX-XXX--X---XX--X-XXX--X--XX-----XXX-X-----", "--X-XXXXXXXXX---X--XXX-X-X--XXX---X---XX-XXXX-X--X", "XXXX--XX*-X-XX-X--X-X--X--XX-XXX-X*X----X--X-XXX-X", "XXXXXX--XXX-XX-X----X---X--XXXXX-XX-X-X--XX---XX--", "X--XX--XXX--X-----XXXX-XX-X-XX----X*X-X--XX--X*XXX", "-X--X----XXXX-X*XX--X-XXXX--XX-XXXXXX---XX-XXXX--X", "---XXXXXX--XX--X-XXX-XXXX--X*XXX---XX-X-XXXXX-X---"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> theMap = {"XXX----XXXXX-X----XX-----X-X----XXX--XXXX-XXXX-XXX", "--XXXXX--X---X-XX-XXXXX-----XXX-XXXX-X-X--XX--XXX-", "XXX-X-XX-XX-XXXXX---X-XX-X---X-XX-XX-X-X-X-X--X--X", "X-XXX--XXXX-XX--X------X---XX-X-XXXX---X-X-X--X-X-", "--X--X-X-XXXXXXXXX--XX--X------X-X-XXX-X---XXX-XXX", "XX-X---XX----XX-XXXX-X-XXXX-XX---XX-X---X--XXXXXX-", "----XXX-XXXXXX-X-X--X-XXXXXX-XX-------XXX---------", "-X-X-X---XX--XXXXX-X--XX--X-X-X-----XX*XXX-X---XX-", "X-X-XX--XX--X--XXXX-XX-X---XXX--X-XXX-XX-X---XXXXX", "XXX-XX--X-**--X-XX--X-XX-X-XXX------XXX-X--X----XX", "-XXXXX-X-X-X-XX--X---X---XX-X-XXXX-XXX-X--X-XXXXX-", "XX-XXXX--XXX--X-XX--X--X----X----X---X--XX---X-XX-", "XX-----X-X-X-X--X---X---X-XXXXXXXX-X-*XX-X--XXX--X", "---XX-XXXXX---X-X*--XX-XX*X--XX----XX-X---XX-XXX-X", "XX-X-XXX*-X--------XXXXXX--X--XXXX-XXX-XXX-X--XXX-", "---X-X---X-XX-*---XX---XX----XX---XXX----XXX-XX-XX", "-X-X--X-X-XX-XXXXXX-XXXX*XX-------X-X--X-X---XXX--", "-XX---X--XXXXX--X--XX-X-XX---XXXXXX---XX------X-X-", "XXX-X-XXXX--X---X-XXX-XX-X-XX*------X----X----XXXX", "XXX-XXXX--X----X-X-XXXX---XXXX--X--XXXX-X*X-XX-XX-", "X-X-XXXXXX-XXXX-----XX---XXX-X---X--X--X-XX-XX--XX", "XX------X-X-X--XXXXX-X-X--XXXXX-XXXX--X-X-XX--X---", "XX-XX-X--XXXX----X-X-*-X-*------*---X--X---X--XX-X", "X--X--X-XXXX--X------X-X-X--X---XX-X-XXX--XXX-X-XX", "X--X-XX--XX-X----X-X---XX--X---X-XX---XXXX-X---XXX", "----XX-XX----X-X--XXXX--XX-X-X--X-XXXX--X-X--X---X", "-XXX-X--XX-X-X-X-X---*--------XX-X-X*-XXXX-X--X---", "XX-X-X--XXXX-XXXX-X---XX--XXXX----X--XXX-XX------X", "--XX-X-XXXXXX--XX-X-XXX-XXXXX---XXX--X-X---X-X-XX@", "XX-X-XXXX-----XX-X-X--*-X-XXXX-XXX---X-XXXXXXX--XX", "XXXXX-X-XXX-X-X--XXXX-XXX-X-X-X-X--XX-X-X--X----XX", "--X-----X-XXXX-X--X-X-X-XXX-XX-X--X---XX-XX--XXXXX", "X-XX-X-X-XX-XXXXX------X---X-X--XX---X--XXXX-XX-XX", "X---XX-X-XXX-X-X-X-XXX---XXXXXX-X-----X--XX---XX--", "XXX--XXXXXX-X-X---X--XXX--XXXX-XX---X--X-X-X---XX-", "XXXX---X-X--XXXXXX--XX----X----X---X--XX-XXX--XXX-", "--XXXX--XXXXXXX---X---XX--X-XXX*-X-XX---XXXXX-XXX-", "--X--X-*-----X---X-----XX-----XXX--X--XXXX-XX-XXXX", "-X-X--XX-XXX-XXXX-X--XX--X--XXXX------X-XXXXX---XX", "X---XX-X-XX-XXXX-XXXXX--X-XXXXX---XXX-*X-XX-X-X--X", "X--XXXXX---XX-XXXXX--X-X-X-XXX--X-XX-XXX-X--X---XX", "XXXX-X-XX--X-XX----X--X-XXX--XXXXX-X----X--XX-X---", "--XXXX---X-XXXXXX-XXX-X-XXX----XXXXXXX--XX--XX-XXX", "X-XX--X--X----X--XX-X*XXX----X-XXXXXXXX-X-X-XX--X-", "XXXXXXX--X---XXXX--XX---X---XXXX--X-XX---X-X-X----", "----X---XX-X-------X-X--XXX--XX---XXX---XX--X-X--X", "--XXX-XX-X-X----XX-X---X---X--X--X---X-X-*X--X---X", "XXXXX-XX--XXX-XXXXXX-XXXX---XXXX-X---------XXXXXX-", "X---XXXXXX--XXX-X---XX-XXXX--XXX-XX-X-X-X---X--XX*", "------XXXXX---X----X---XX--X------XXX-XXX--XX-X-XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> theMap = {"X--XXXX--X-X-XXX---XXXXXXX---XXX-XX---XX---XXXXXX-", "--XXX-XX-X---XX----XX-X--X*X--XX----X-X-XXX-X-XX--", "--XXXX--XXXXX-----X*XXXX-XX-XXXX---XX---X-------X-", "@X----X-X-XXXX--XX-XX------XXXX----X-XXXXX-XXX--XX", "X--X--XX-XXX-X---XX-X--XXX-XX-X-XX-X------X-X-XXXX", "XX-XX--X-X-XX------X--X-XX--XXX-XX-XX-X-XXX-----X-", "--XX--XXXXX-XX--X-XX----X---XXXXX--XXX-X-X--X-XX-X", "X-XXXX---X--X--X-XX---X-X-XXX-XXX--XXX-X-X-XX-X--X", "XXXXXXXX---XXXX-XX-----X---XX-X-X--XX-XXXXX--XXX--", "----XX-X-XX----------XX--X--X-XX-X----XXX-XX------", "-X----*-XX--X-X--XXX--X-X*X-----XXXX--XXXX-XX-X-XX", "-X-XX-XXXXX-X--X----------X-X-XXXXX-XXX-X-X---X--X", "--XXX-X-XXX--X-----XX-*----XX-XXXXXX-X-XXX--X-XXXX", "---X---XX--X-----XXX-X-XX--XXXX-X--X--X--X-XXXX--X", "---XXXXXXXXX----XX-----XXX-XXXXXXXXX--XX-XXXX-XXXX", "XXX----X--X-XXXXXX-XXXX-X-X-X--X-X-X----X----X--XX", "-X--XX----XX--XX--X---XX---XX---X--XXX-X--XX------", "---XXXXX-XXX-XXX---XX-XX----X---XX----X*X----X-X--", "---XX-XX-X-X---XXXXX--XXX-X-X---XXX--X*--XX-XXXX--", "XXXX-X-X--X-X--XX--X-X-X-XX-XXX-XXXXX-X---XXX-X---", "XX-X--XX-X--XXX-X--X--XX---XX-X-XXX--X--XXXXX--X-X", "X----X*-XX----XX-X-X-XXXXXXX-XX--XXX--XX-XX-X-X-X*", "-XX--X-XXX-XX---X-XX-X----XXXX-X-----X--XX-X--X-X-", "X--X------X-X----X*X--X-XXX-*X---X---X-X---*XX---X", "XX-X--XXX-XXX-X-X-X---XX---X-X---X-X-XXXX-X---XXX-", "X----*XX---X*X---XXX-XXX-X--XXX------X---XX-X--X--", "XXX-XX-XX-XX-----XXX---XXXX-XXXXXXXX--X-XX-XX-XXX-", "-XXX---XX----X-X-X-XX-XXXXXXX-XXX--X-XXX-X*---XXX-", "XXX--XXX----X----X-XX--XX---XXX-X-X--X--XX*-XXX-X-", "--XXX----X-X-X--X----X-X-X-----XXX-XX-X*-XX--XX-XX", "X-XX-XXX---X-X-X-X----XXX--XX----X-XX-*---X-XXX-XX", "XXX-XXX-X-X-XXX--X--X-XX-X---XXX--XXXXXX--X-XXXX--", "--XX--X--X-X-X--XX----XXXXX--XX----*--X---X-X---X-", "--X-X--X-XXXXXX-XX---X----XXX-X-XX--X-XX-----X-X--", "X-X-XXX----XXXXXX-XX--XX-XX--X-XX-XX-XX*X-----XX*-", "XX-XXXXXXX--XX-XXXX-XX---X-X-XXX-XX-X-X-XX--XX---X", "----XXXX-X-XX-X---XX-XX--X-X--X--XXX-XX--X-X-----X", "X----XX---XX-XXX--------XX-XX-XXX-X---X--X-XX--X-X", "--XX-XXXXX-X--X--X-XXXXXX-X-XX-X----X--X-X----X--X", "X---X--XXXX--XXX-X--XXXXXX-XX-X-XXXXXX-X------X-X-", "---XXX-X-XXX---XX-----XXX--XX--X*XXX-X----XXXX-XXX", "XX---XXX---XX-XXXXXX-X--XX--X-X--X-----XXX--XXX-X-", "-XXX-*X----XX-XX--*XX----*-XX-X---XXXXX----X-X---X", "X--XXXXX---XX-X-XX-XX-----XXX--XX---XX--XX--XXX-X-", "XXX*XXX-X-XXXX--X-X-X*-XX--X--X-X-XXX-XXXXX--X----", "--X--X-X-XXXXX------X-X-X-XX-XX---X--XX-XX--X-XXX-", "XXX---XXXXX---X-XXXXX---X--X-XX--X-XX-XXXXX-XXX-X-", "X-XXX--X-XXX-XXXXX-X-XX-X----XX-X--XXX-----X*XX---", "-X-XXXXXX--X--X---XXXXX-XX----X--X-X--XX-X-X*X-XX-", "-XX-XXX-XX----XX-XXX-X--X--XX---XX---XXX-X--X--XX-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> theMap = {"X--X-XXX-X-X----XXX-XXX-XXXX-XXXXX-XX-XXXXXX--X--X", "X--X-XX--XX-XX-----X--X-X-X--X--X-XX--X-X-X----XXX", "X-X--X---XXXX--XX-XXX--XXXX----X-XX----XXX--XX---X", "XXXXX-X---XXX-X-X-X-X-XX----X---*-XXX--XXXX-XXXX--", "---X-X--X---XXXX--XX--XXXX--X---X-----X--X-XX-XXX-", "---X--XXXXX--XXX--------XX--X--X-X--XXXX----XX-XXX", "-XXXXXX--X----X-X-XXX-*X-X----X-XX-X-XXXXXX--X----", "----XXX--X-X-X-X--X--X-X-XX--XXXXXXXX--XXXXX-X--X-", "--X*-XX-XXX----XXX-XX--XXXX-X--X--X-X---XXXXXX--XX", "--X--X-XX-XX*-X*-XX--X-XX---X--X-XXX-XXX--XX-XXX-X", "XX----X---------X-XX---X--X--X-XXX----XX---X-----X", "-X--------X-X-X-XXX-X-X----X-XXX--XXXXX--X-XX--X--", "X--XXXX-X-XX-----XX-------X-XXX---X--XX-XXXX-X-X--", "XX-XX-XXXXXX-XXXXX--X----X-XX-XX-X-XXXX-XXX-XXXX-X", "XXXX--XX--X-XX---XXXX-X---XXX--X-X---XXXX----XXX--", "X-XX-XXXX---XXXXXX-X-X-X-XX---X--XX-X-------XXXX--", "--XX-XXX-X-XX-XX-XXX--XX--XXXXX---X-----XXXXXX----", "XXX--X-XX*-X-XXXXXXXXXX-----XXXXXX-X-X--XX---XXX-X", "-XXX-X------XX----XXX-X-X-X--XXXXX-XX--XXXXXXX-XXX", "XX--X---X--XX-X------XX----XXX--X-X-X-X--XXXX-XX-X", "XXXX-XXX--X--XX-*X-XX--X--XXX-X--X--XX-X-*X---X-XX", "XXXXX-XXXX-X-XXXXXX----X-XX--XXX--XX---XX-X-X--XX-", "XX-XX-XXX-*X--X-XX-XX-X--X---XXXXX-X-XX--X---X-X-X", "-X-XXXXX-XXXXX-------X-XX-----X---X--X--XXXXX-XX--", "--X-XXX*---X-XXX--XXX-X-X----XXXX-XXXXX*X-*XX---XX", "X-X-XX-XX---XX*-X-X-X-------X-XX-XXX--XXX-XX-X-XXX", "X---X--XX-XXXXXXX--X-XXXXXX-X*----X-X-X-XX-XXX-XXX", "X-X--XX-X-XX---XX-XXXXX-XX--X---XXXX-X-X--X-X-X---", "X-XXX-X-XX-------XX-X---X--X-X--X-XX-XX-X-XX--X-XX", "---XXXX--X--XXX---X-XXXX-X-----X---X----XX--XXXX--", "--XXXXX-XX--X-X-XXXXX-X----XXXXX---X-X---X-X--X---", "X--X-XXXXXX--XX---XXX----XXXXXX*--X-*----X-XX-X-X-", "-XXX-X---XX-XXXX-XXX-------XX---X----X--XX-XXXXXX-", "-----X-----XXX-X-XX-X---XX---X---X-----XXXX-X--X-X", "---XXXX--XX-X-XXX---X-X---X--X-XXX--XX--XX-XXXXXX-", "-X----X-X--X--XXXX----XXXX-X---X--XXXXXX-XX-X-X---", "--XX--X*-XX----X--X--XX-X-X-X--X--XX-X-XX-XX---XXX", "--XX--X---XXX-XX-X*XX-X----XX-XX--XXX---X--XXXXX--", "---XX------XXXX-X-XXX----XXX--XX-XXXX----X-XX--X--", "-XX-X---XXX--XXXXXXX-XXXXX-X-XXX--X-XX-XX-XX-X-XXX", "X-XXXXXXXXX-X---XX---XX--X-X-XX-X-X---X--X---X--X-", "XXX--X-XX--XX--X-X-X*-X-X-XXXXX--X*X-X-XXXXX--X-XX", "XXXXX-XX-XXXX-X-XX--XX----X--XXXX-XXXX-----X-XX--X", "---XX-XX-XX---X-X-XX----X-XX*XXX---X--XX--X-XXXX-X", "X-XX--*XXX-XX---XXX-XX-X-X-XXX---X-XX--X---XX----@", "-X-XXX-X-X-XX---X-X--XXX-X-X-----XXX----X-XX--XXXX", "XXX-----XXXX--X-X--XXXXX--XXX-XX---XX--X-XX-X-XX-X", "X-XXX-XX-XX-XX--XX-XXX---X-XX--XXX----XXXX-X-X----", "X-XXXX--X-XXXXXX-X-XX---XX---X--X---XX-XX-XX---XX-", "-X-X----XX--XX-XX----X--XX-XX*--X-X-X---XXX--XX*-X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> theMap = {"X@X-XXXX------XXXX-XXXXXX-X--XXX--XX--X--X-X-XX-XX", "X-X------XXXXX-X-X--XXX-XX------X---X-X-X--X-X-X-X", "-XXX-X-XX---X-X-X--X--X---XX----XXX--*XX-X---X--XX", "--X--XX--XXXX-X-XX---XX-XXXXXXX----XX--X--X-XX-XX-", "--XXXX--X-X-XX-X--XX--X-X-----X-X--X-----XXXX*-X-X", "XX-X-X*X--X-*X-XX--X--XX-X-XX-X-XXX-XX-XXXX--X----", "-X-X---X-X----X-XX-XX-XX--XX-*X*X-XX-X--XXX--XXXXX", "XXX---XXX---X-X--XX-X--X-X---X-X---X--X--XXXXX-XXX", "-XXX------XX---X-XX--X-XXX-XX--*-X--XX---X-X------", "X--XXXX-X---------XX------XX--XXXX--XXX----X-X-XXX", "X--*X--X---X--XXXXX--XX-X-X----XX---X-------X-X-XX", "XXXX-XX--X-----X-X-XX--XXX---X-X-X---XX*X-X-XX-X-X", "-X--XX-X-XXXXX---X-XX-XX----X---X--XXXX-XXXXXX-X--", "-XXX---X-XXXXXX-XX-XX----X---X-XX-XXX---X-XX-XXX--", "X---X-XX-XX--XXXXX--XX-XXXXXXXXXXX*X-XXXXX--XX-*XX", "-XX-X--X*XXX------XXXX-X---X-XX-XXXXXX-X--X-X---X-", "X---X-X--X----XX-X-XX-*X-X--XXX-X---XXXX-X---X-X--", "--XXX-XXX--X----XX-X--XX---X-XX-------XXX-X-X-X--X", "--XX-X-XX-XXX*X---XX---X--X---X-X--X*XX------X--X-", "--X---X-X*XXX-XX-X--XXX-XXXXXXX-XX---X-X-XX--XXXX-", "XX-X----X-XXX-XXX*X----X-X-XXX----XXXXX-X--*X-XX--", "X--X-X--XX-----XX---X--XXX-XX---XXXXXXXXX-XX-XX--X", "X-XXXXXXXX-X----XX---X---XXXX--XX--XX--XX-X-X-*-XX", "XX----X---XXXX-XXXXX--X-XX-X--X-X---X-X---XXX-X-XX", "XXXXX--XXX-X-XXXXXXXXX-X-XXXX--XXX-XX--XX-X--X---X", "X-----XX--XXXXXX-XXXXXXXX--X-XX-XX-XX--XXX-XXXX--X", "-X-X-X-----X---XX-X-----X*-XX-------X-X*-X---XXXX-", "XX*-----X-XXX-X---XX--XX--X--XXX--X---XXX--XXXXXXX", "-XX--XX*-X*XXXXXXXX---XX---XX-----XXXXXX-X--X-X-X-", "XXX----X---XXXXX---X-X---XXXX----XX-XXXXXXXX-XXXXX", "X--X-XXXXX--X-------XX-XX-X---X-XX------X-XX---*X-", "-X---XXX--X---XX-X-*X-*---X*--XXXXXXX-XXXXXX-XX--X", "-X-X*--X----XX----XX-X-XXX-XX-XX-X-X-X-X---X---X-X", "X---X-XX---X-XX-XX-X-XXXXX-X-X*-X-XXX--XXX-X--X-XX", "XXXX----XX--X--X-XXXXXXX-X-X--XXXXXXXXX-XXXXXXXXX-", "----X-X-XXXXX------XX--XX-X-XXXXXX-XX---XXXX----X-", "-XX-XXXX-X-X-XXXX-XX------XX--X-XX--X-X-X--X-X*-X-", "X----XXXX-XXXXX-XXX-XXXX-X--X-XX-X-XX--XX-XXX--XX-", "X-XX---X-X----X----XXXX-X----XX---XX-XX-X--X-XX-X-", "--X*X-X----XX-X-X-X--XXX-XXX-XX-X-X--XX--X-XX-XXXX", "X----XXX--X-XXXXXX--X-------X-X-XXXXXXX--XXX--X--X", "---XX---XX--X-X--XX--X---XXXX--XXXX-X---X---X--X--", "X--XX-XX-XX--X-X-X-XX-XXXX--XX-XX-XX-XXXX-XX-XX-XX", "--------X-XX---XXX--X-XXX-----XX-XX----*X--XX-X-XX", "--XXXXXX-XX--XXXX-X--X-XX------XXXX-X-X-XX--X*-XXX", "-X-XXXXXXX-XXX-XX-----XX-XX--X-X--X-X-X---X---XX-X", "XXXXXX-----XX--X--XX---XXX-X*--X-X--*XX--X-X------", "XXX-----X--XXXXXX--*------X--X--XX-X-X-XXX-X-XXXX-", "XXXX------XXXX-XXXXX--X--X---*XXXXX--XX-XX-X-X---X", "XXX-*--XXX-X-XX--X-X-----XXX-------XX-XX-----X----"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> theMap = {"X--X-X-XX--XXXXXXX-X--X-XX-----XXX--X--*-XX--X-X--", "XX---*--XXXXX----XXXX-X-XX-XX*XXXXXXXXXX-X-X--XX--", "--XXXXXXX--------X--X-X-X-X-XXXXXX---XXX--X---XX--", "XXXXXX-XXX-XXXXXX-X---X--X-X--X--XXXX-X-*X--X*XXXX", "--XXXX-X---X*-XXXX-XXX--X----XX---XX--X*XX----XXXX", "-XXX----XXX-X-XX-----------XXX-XXX---XX---XX---X-X", "--------XX--X-XXXX-XX----XXX-X------X--XXX---X----", "-XXX--XX--X----X--XXXXX-XX-XX-XX-X-X-X-XXXX-X-XX--", "XXXXX-------XXXXXXXXX-XXXX-XXX-----XXX-XXXX--XX-XX", "XXXX---X--XX---X--XX-X----X-XX-XX-XXXX---XX------X", "-XX-X---XXX-XXX-X---X--XXXXXXXXX--X-XX-XXX-XXXX---", "---XX-X-X--XXXX-XXX-X-XXXX--XX----X-XX--XXXXX-X-XX", "-X---XXX-XX-XX-X-XXX--X-XX-X-XXX-X-XX-XX---XX--XXX", "X-----XX-XXXXX-----XX--X--XX-X-*XXXXX*XX--XX-X---X", "X-*XX--XXXXX-------XX---X-XXX-XX--X---------XXX-X-", "-XXX--X-XX------XX---XXX-X----*XX-XX-XXXX--X--X-X-", "-X---XX-X-XXX----XXXX-XXX---XXX-----X---XXXXXXXX--", "X----X-X---X--X----X--XX--XXXX--XX----X-X---X---X-", "-X-X-X-X-X-XXXXXXX--XXXX-X--XXXX--X-X-XXXXXXXXXXXX", "XX-XX-XX-XXX----X--X---XX--X--X--X-----X----X--X-X", "*X--X--XX--X------XXXX--X-XX---X-XXXX-XXXXX-XXXXX-", "X-X*-X-X--X*---X-XXX--X*XX*X---X-X--XX-XX--XXX--X-", "-----XXX----X-X-X----XXX-X-XX--X-X-XX--X--XX-XXXXX", "-X-XXXXXX---XX-XXXX-X---X---XXX---X---X---X-X-X---", "XX-X--X-XX--X--XXXX--X---------X------X----XX---X-", "--XXX-*-XX-XX-X-X-*X--XX-X------XXXX-XXXXXXX-XX-X-", "X--XXX----X---XX-XXXXX---X-X--X-----*XX-XXXXX--X-X", "---X-XX-XXXXX--XXXX-XXXXXX-XXX-X-XX-X--X-XXX---X-X", "--X--X---XXX--X-X-XXX-*XXXX-----X--X-X-XXXXXXXX-X-", "X**X-----X-XX-X-X-XX-XX---XX-X---XXXXX--X-X-XXX-X-", "*XX-XXXXXXX-X---XXXXX-X-XXX-------X-XXXX--X-X-XXXX", "-XXX---XXX-XX----X--XXXXX-XXX--X-----X-XXXXX-X-XXX", "--X---XXX---XXXX--X-X---XX--X*XX-XX--XXX-XX-XX--X-", "X-----XX@---XX--XXX-XX-X--X-XXXXX-X-XX-X--XX-X-XX-", "XX-X-XXX-X-XX----XX-X-XXXXX--X-XX--X--X-XX--XX-X-X", "---XX-X-XX-XXX---XXXX--X-------------X---X-X--X-XX", "---XX-XXX--XXXX-X---X-X--X-X*----X-X-------X-XX---", "--XX---X-XX-------XX-XXX---XX----X-X-X-----XXXXX--", "--XX-X-XXX-XX-X-XXX*XXXX--XXXX-X--X----X-XXX*-XX--", "---X----X-X---X--XXXXXX--XXX-XXX--X-XXXX--X--XX-X-", "---X-X-X---XX--XXXX--X---X-XXXXXX-XX-X---XXX--X-X-", "X--X--X-X---XXX-XXXX-X-X--X-X-XX-X-XXX-X-XX-X--XXX", "-XXX---XX--XXX-X--X-XX-XX-X--X-X*----X*--X--XX--XX", "X--XX-X-XXXXXXX-XX--XXXXX----XX-X-XX----XX-X--X*X-", "X-XXX-XXXXX---XXX--X---XX--X-XX--X--XX--XXX*XX--XX", "XX-XX---XX-XXXX-XX-X--X-----------XXXX-X-----XXXXX", "XX-X-XX-*--X-XX--X-X---XXXX---X----XX-XXXX--XXXX-X", "X--*-XX---X-X---*X--*X-X-XXX-X-X-X-X--X-X-XX-XX---", "X--XX---XX----X-X--XX-XX---X-XXX-XX--XX-X----X-XX-", "X----X-----XX--XX-XXX-XXX---X-XXX-X-X--XXX---XXXXX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> theMap = {"XXXX-X-XX----*X---XXX-XX-XX-X-X---X-X----XX--XXX--", "-*XXX--XX--X-XX-X-X--XXX--X-X----X--X-----XX--XXX-", "---XX--------XX--X--X-XX--XX---X----XX--X-XX-*X-XX", "----XX-X----X-XX-XX---X---X---X-X-XXX--XXXX-XXXX-X", "-X-X--X-XXX-XXX--X-X-XX-X--XXXXX-XXX-X-XX--X-X-XX-", "--X-XXX-X--X-XXX--X--XX-XX---X*X----XX-X--XX-XX-XX", "--X-XX-X--XX----X--XX-X-X---XX-XXX-*XXXX-X--XX-X--", "XXX-XXX-XXXX-X-XX-XXXXXX-------X----X-XXXXXXXXX-X-", "-XXXXXX-XX-XXXXX--XX-X-----X---XXXX-X-XX-X-XX--XX-", "XXXX---X*-XX-X-XX-XXXX-XX-X-X-XX---XX-X-XX-X*XX-XX", "X-X--XXX-XXXXXX----XXX-XX--X-X-XXXX---X-X-XXXX-X-X", "XXXX-XX---X*---XX-XX-X----XX-XXX-*XX-X-XX-XX--X-X-", "--XX*----X--X-XXXXX-XXX-X--XX-----XX-X--X--X--XXX-", "XX-X-XXX-XX-X-XXXXXXXXXX--X-X---XXX-X----XXXX---XX", "--X---XXXXX-XX-*-XXX-XXXXXX-XX--XX-----X-XXX---X--", "XX-X--XXX-X--X-*XX-----XX--XX-X-XXX-XXXX*XXX--XXXX", "--XXXXXXX--X---X-----X-X--X--XXXX-XXXXX---X-X-XXX-", "-XXXX-X-XXX-X-X*XX-XXX-X-X*XXX-XX-XXX----------X-X", "--XXX-X*-X-X--XXXXXX---X--XXX------XX--X-XX--X-X--", "X*XXXX-------X-X--X-X-X-XX-XX-X--XXX--X-X--XX-XXX*", "XX-XXXX-X----XX--X--X-XXXX-X-X--X----XXXXX----X---", "X-XXX---XXXX----X------X-X---XXXX------XX-XX--XXXX", "-XXXX*--X----XXXXXX-XXX-XXX-X-X-XXX----XXX-XX--XXX", "----X--X-X*-XXX-X-X---X---XX--XXX-XX---XXX-XX-X---", "--X-XX-X--XXX--XXX-*XXX--X-------XX--XX-XX-X---X--", "X-X------X---X-X-----X--X-X--XX-X-X---X-X--XX-X-X-", "XXX-X---XXXXXX-X-X*-X-XXXXXXXXX--XXX--X-XX--XXXX-X", "XX-----X--XX-X-XXXX-X-X---XXXX-X-XX-X--XX-X-XXXX--", "-XX-XXXX----XX-X----XXX-XXX--XXXX---XXX--X---XX-XX", "X---XXXX--X-----XX-XX-XXX--X-X--X--X----XX--XX--X-", "XXX--X----XX-----X-X-XXXXX-XXX-*X-----X--X---X-XX-", "--XXX-----XXXX-X-XX---X--X-X---X-----X--XX--XXXX--", "XX-X-XX-X--XXX---X--X-XXX-X*XX--XX-X--XX---XX-X-XX", "@--X--X-X---X-XX-X--X--*--XX--XX-XXXX---XX-X---XX-", "-XX-XX--X-----XXXXXXXXX-XXXX-*---X--X-XXXXX-X---XX", "--XX-XXXXX-X---XXX-XX--X---*XX--X-XX---X-X-X----X-", "-XX---------XX----X----XX--X---X-----XXX-XX--X-X-X", "X-X-X--XX--XX--X-XX-----X-X-XXX-XX-----XX-XX--XX-X", "XXX-X---XXX-X-X-*---XXX---X-X--X-XX---XX-XX---XX--", "X-----XX-*XX--X--X---X----XXX--X--XXX-XXX-X----X--", "-XXXX-XX-XX*XX--XXX-XXX---XXX-XXX--X-XXX-X----XXXX", "-----XX-X-X-*X----X--X-XXX-XX-X*XX-XXXXX----X----X", "XXX--XXX-XX--XX-XXX-X--X-X--X-X*X-XX-X-XX-XX-XX-X-", "--XX-----XX*XXX--XXXXXX-XX--XX-X-----XXX--XXX-XXX-", "-XX---XXXX--X--XX-X---XXX-XXXXXXX--X-------------X", "XXX-XXX---X--X-X-X-X---*XXX-XXXXXXXX--X-XXXXX*XX--", "-X-X-X-XXX--X--*X-XXX-XXXXXX--X-XXX-XX---X---X---X", "X-*X*-X-XX---XXXX-XXX--X-XXX-XXXXXX--X-X-X-XX-X--X", "-X-XX---X---X--XXXX------XXX---X-X--X-XXX--XX---XX", "--XXX-XX-*-XX-XX-XX--XXXXX----XX-X-XX----X-X--XX--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> theMap = {"-XX---XXX-----XX---XXXX--X--X--XXX-X-XX-X-X-----X-", "-XXXX----XX--XX--XXX--X--X--X----XXX----X--X-XXXXX", "--XX-X--XXX-XX---XX--XXX-*--XX--XXXXXXXXX-X-XXX-XX", "XXXXX-X-X-X-XX-X-XXX-X-XXXX--*--X----X---XXXXX----", "X-XXXX---XX-XXXX-X---X--X---XXXXX--X-X-XX-XXXXXXXX", "-XX---XXXXX--XX---XX-XXX-X---X-XX--XXX-XX------XX-", "XX-XXX-X-X-X---X--XX---XX--XXXXXXXX-XX-XX---XX---X", "-*X-X-XX--X-X-XXX---X--X---X-XXXXXX-X-XX--XXX-XXX-", "-XXX*X-XX--*XX-----X--X-X-XX---XX----XXX-XX---X--X", "-XXX-XXXXX-X--X---XX--X-X-X---X-X-*XXXX---X---X--*", "--XXXX-X-X-XXX--X-XXXX--X---X--XX-X-X-XX-XXX-XXXXX", "--X-X-X---X--X-XXXXXX--XXX-XX-XXX-XXXX--X-X-XXX--X", "X-X-XXXXX-X--XXXXX--XX-X-XXX-X-X--XXX---XXX-----X-", "-XXX-X-XX--X-XXXX--X--XXXXXX--X-----X-X---X-XX-X--", "X--X-XXXXXX-X-X*XX-X-XX--XX------X---X--X--XX-XX-X", "X---X--XXX-X--XX*-XXX-XX--XX-XX-XX---XX----X-*XX--", "X--XXXX----X----X-X--XX-X---X--XX--XX-XX--XXXX-XX-", "-X-----XX--XXXX---X--XX-XX---X---X--XX-X-----XXX--", "----X-XXX-X---X-X--XX--XX-X--XX--XX-X-X--XXXX---X-", "XX---XX---X--X-XX-XXX-XXXX-XXX*-XXXXXX----X-----X-", "X-XX---XX--XX---XXX-X-X-XX----X-X-X-X-X-XX-X-XXXXX", "XXXX-----X-X--X-*-X-X--X-XXXX--XXXX--X--X-XXXXXXX-", "-XXX--X-X-X-X-X-X--X-XXXX-X--X-X-----XXXXX-X--X-X-", "---XXXX--XXXXX-XXXX---X---XXX-X-X--*-XX---X-XX--X-", "XXXX-X----X-XXXX-X--XX--XX-X---X--XX-XXX-X--X--X--", "X-XXXXXXXX-X-X-XXX-XX-X--X---XX-X------XXX-XXXXXX-", "--XXX-XX-XX-XXXX-XXXXXXXX-X-X-X-XX---X-XXX-----X--", "-----XX--X-X-XX--X--XXXX-XX--XX-X------XXX-XX--X-X", "X----X---X-XX---X----XX-X--X-X-XX--XXX-X-X--XXX-XX", "XX-XXXXX--XXXXXXXX-XXXXXXX--X-X-X--X-X--XX-X-X-X--", "XXX-*--X----XX-X--XX--XX-X-X-X--XXX--X--X-X-X--XXX", "--XX-X-XX----X---X-XXXXX---XX--XXXXXX-X--X--X-X-X-", "---X-X----XX-X---XX-X-XXXXXXXXX-XXX-XX--X--XX-XX--", "--XX--XXX--X*X-X-*XX--XX--XXXX-XX---XX*--XX-X----X", "----XXX--X---*-X---XXXXXX-XX--X---X-X----XXX---XX-", "-XX--X-XXX---X-X--X-X-X-X--X-XXX-X----X-XX-X-*-X--", "-X-XX-X-XXX-XXXX-X-XXXX*XX---X--X--X--X--XXXXXXXX-", "XXXX-----*-X--X--X--XX-XX-X-XX-X-X----X--------XX-", "XX---XXX----XXX--X-X--XX-XX----X-XX--XX--X-X--X-X-", "-X--XXX------X--XX-XX-XX--XXX-@-X-XX-X-XXX-XXXXX--", "XXX-XXX-XXX--XXXXXX-XX-XX-X--XXXXXXXX--XXXXX-X--XX", "--XXX--XX*X--X-XX--X-XXXX--X-X--X-*XXX----X-X----X", "XX-XX----XX---------XX-----X---X--X-X--X--XX---XX-", "--XXX---XXXXX----X---XX-XX---XXXX-X-XXXXX--X*-XX-X", "XX----------X-X-------XX-X---XX--XX-X-X--X-XXX-XXX", "--XXXX*XX--X--X-----X*-XX---XXX-X---X---XX-*-XX-X-", "-XX-XX-XX-XXX---XXXXX-XXXXX--XX-XXXX---X--X--X--XX", "-XX-XXX-----X-XX-XX-XX-X*X-XXX----XXXXXXX--XX-XX--", "XXX-X-X--XX-XX-XXXX--XXX-XX--X*XX-XX-X----XX---XX-", "XX-X--*XX-XX-XX--X------XXXXXX--X-XX-XXXXXXX--XXXX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> theMap = {"X---X--XXXXX-*X--XXXX--X--XX---X-XX--X---X-XXX-XX*", "-XXX-XX--XX-----XX*X---XXX-X-XXXXXXX-X-X------X-X-", "-X--XXXX----XXXXX-----X-X--XX-XXXX---X-X-X-XXXX--X", "-----X-XXX--X---XX-XX-X----XX-XX*XXXXX--X---X--XXX", "XXXX---XXXXXX-X-@XX-X---X-XX--X--X--X-----X--XX---", "X---XX-X----X----XXXXX---XXXXXX-XX-*--X-XXXXX--X--", "X-X--XX-XXXX-XXXX---X-XX--X*-X-*X-X-X---XX-XX---XX", "-X--X-XXX-*X-XXXXX-X-----XX-XXXXXXXXXX--X----X-XXX", "X-XXX-----XXX-XXXXXXX---XX--X--X-X-X--XX-XX--XXXX-", "X---X--XX--X--XXXXXX-XXXXXXX---X-X-X--X--XXX----XX", "X-XX--X---X--X-X--XXXX--XX-X-X-XX--X-XX--*X-X--XX-", "XXX-----*--XXX------XXXXXX-XXXX-X-X--X--X*X---*X--", "---XXX-XXX--XX---XXXXXXXXXX-XXXXX--XXXXX----XX--XX", "XXX-X-X-XX---X-XXXX----X-XX--XX-XX--X-X---X-X--X-X", "----XX-XXX----*-XX-X-----XX--X---XX--X-X-X-X---XXX", "X-X-X-X---X-X--X-X-X-X-XX-----XXXX------XX--XXX---", "X-----XXX-X---XX-----X-X--XX----XXX-X--X---XX-XXXX", "-XX-X-XXXX--------X-XX-XXX-X----X--XX--X-X----X-X-", "*-X-XX---XX---*---XXX--XXXX--XX-X-X----X-XX---XXX-", "XXX-XXXX-XXX---X-XXX-----X-X--X-XXXXX--X-X---XXXXX", "-XX-XXXXX----X--X---X-XXX----------XX---XXX-X-XXX-", "-X--XXX-XX--XXXXX-XXXXX-X-XXXX---X--X--XX---XX-X-X", "X-*X*X--XX----XXX--X---*X-X-XX----X---X-XXX-X--X--", "XXX------XX-XX--------X--X-XX---X---XXXXX*XX------", "X-X-XXX--XXXXX-XX-X-XXXXX-XXXXX---*X--XXXX--X---XX", "--X----XX-XX-X---X-XXX-X-X-XX-----X---X-----X-X--X", "X-----XXX----XXX--XXX-----XX----X--X--XX-XXXXX----", "-XX--X---X-X-X-X-X--X--XXX-XX-XX-X-X-X-X---XXX*X-X", "XX-XXXXXXX--X-X-XX-X---X-XX--XX--X--X-XXX--XX-X---", "--XXXX--------X--X-------XX*X-XX-X-XX--*X--X--X---", "-X-X--XX-X--XX-X-X--XXXX-XXX--X-XXXXXXX-X-XXXX-X-X", "XXXX--XXXXXXXXX-XX--XXX-X--X--XX------X---X--X---X", "-*-XXX--XX--X--X-XXX-X-XX-XXXXXXXXX-X-X-X---X-XX-X", "-X---*-XXXX--X--X----X----XXX---XXXX--XX-XXX-XX-X*", "-X-X-X*-XX-XXXX---XXXXXXXXXXX-X-X---X---X--XX----X", "X-XX-XXX-X---X*X--XX---XXXXXXXX-X-X-XX-XXX-XXX-X-X", "-X-X--XXX-X-XX-X-X*X--XX-XXXX-XXX--*X--X-X-X-XXXX-", "--X---X--XX-XX--XX--XXXXX-X----XX--XXXXX--XX-X---X", "X-X-X---X-XXX-X--XX--X*XX--X--XX--XX-X-XX---*X-X-X", "X-XX-XX-------X-XXXX--XXX-XXXX----X-X--X--X-XXX-X-", "X--X-XXX---XXX-XXXX---XXX--X-XX-XX---XX-XX-X-XXX-X", "XX-X-XX-XXX-X---XX--X-XX-XXXX-XX--XX-XXX---X-X--X-", "X-X-X--XXXX----*--X--X-----X----XXX-XX*--X-X-X-XX-", "XXX-X-*---XX--XXXXXX--X-X-X-X-----X---XX-XX--X-X--", "X--XX--XX---*XX--X-XXXX-XXX-X--------X-XX--X---X--", "XX-XXXX---XX---*-XXXX-XXXX-XX-X-X-XXX---XXXXXXXX--", "X--X---XX----X--X-X--XXX-X-X--XXXX---X--XX-X----XX", "XXXX*X-X-X*X----XX--XX---X-XX-------X-X-X--XX--XX-", "X--X-X--XX-X----XX---X*XX-X-X-X----X-XXX---X---X*-", "--XXXXXX-----X---XXX-----XX---X----X-XX-XX-X-XXXX-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> theMap = {"X--X---XX----X-XX---X--XXXXX*XX--X-X--X*XXX--XX-XX", "----XX----XX---XX--X--X-X-XX-XX-X-XXXXXXXX--X-X---", "--X-XXX--X--X--XXXX-X-XX--XXXX----XXXXX----XX--X-X", "X-X---XX-----XX-X-X--XXXXXX-XX-XXX--XX-XX----XX-X-", "--XXX--X------XX--XXX-XX--X-XX-XXXXX---X-X-XX-XXXX", "-------XXXX---X-XX-X----XX-XXXX-X-XXX-XX--*X---X-X", "X--XX-X--XX---XX---X--X--X--X-XXXX-----XXX--X--XX-", "-X---X-X----X--XXXXXXXX--XXXXXXXXX---X--XX-----X--", "-XX---XX-X-X-X--XXXX---X-X--XX---XXX-XXX-X-XX---X-", "X--X-X--X-X-XX---XX-XX--*X------X------XX-XXXX-X--", "-XXXXX-XX--XXXXXXXXX--------X-X-X----X----X-X-X-X-", "XXXXX-----XXX--XX-----XX-XXX--*------XXXX-X-X-----", "X----X---X-X--XX-XXXXXXX-X---XX--X-X----XXXX--X---", "XXX----X-XXX----XXXXXX--XX---X--X-------*XX-X----X", "XX-XXXX-XXXX-XX--X-XX--X-X-XXX--X--XX--X-X--X---X-", "XXX--X-XX--X---XX-----X-XXX-XXX--X-------XXX---X--", "-X-XX-XX----------X-XXX-XXXX--X--XX----X---XX-X-X-", "XX----X---X--XXX-XXXX-----XX-XXX---XXX---X-X*X--X-", "XXX-XX-X-XXX-X--------X--X-X--X-X-X---XXXX-X--XX-*", "-XXXXXX-X--X--X--XX-XXX-X-X-XX-XX--XXX--X*-XX-XX-X", "XX-------XX-XXXXX-X*--X---XX-XX----X-XXX-X-X-XX--X", "X*-X---X-X--X--XX*XX-XX--X-X-*--X-XX----X--X------", "----X-XXX-XX-X----XXXX-XXX-X-----XXX-X---XX-XXX--X", "XXXXXX--X-------XXXX---X-X-X-XX-X-XXXXX-X---XX-X--", "X--XX---XX-X-X-X-*X-XX--X-*X*--X--X-*XXXX-X-X-X-XX", "XX-XX-X-X-XXXXX-XX--XX-X---X--X-X-XXX-XX-*XX-XX--X", "XX---XXXXX---X-XX-XX-X--X----------XX-XX------XX-X", "-XX-X-X-XX--X--XXXXX---XXXX-------XXX--XXX-X-X-XX-", "-XXX-X--X---X--XXXX-X--XX--*XXX--X--XXXXX-XXXXXXX-", "---X-X-X-*X-*--X-X-X--XXX----X-X-XX-XXXXXXXX-XXXXX", "XXX-X-XXX-X-X--XXX--*XXX-XX--XX-XX--X-X--XX----XXX", "----XXXX-----XXX-XX--*XX-X-X-X--XXX-X--X--XX-X-XXX", "XXXX---XX---X--X-X------XXXXXX---X-XXXX--XXX--X-XX", "-XX-X--X--XXX-X-XXXXXX-XX-XXXX--X-XX---XXXXX-XX---", "-XXXX-XXXXX---XX--X-XX-X-----XXX-XXXX-X--X-XX-XX--", "-XX*X----XXX-X-XXX--XXXX---X---X-X--X-XXX*-XXXXXXX", "-XX-X-X--XXXX-X--XX-XXX--X--XXX-X----X--XX-XX--X--", "-XX---XX-XX----X---X-XXX-----XXX--X--X-XXXXXXXXX--", "XXXXX-XXXXXXX---XXXXX-XX------XX--X-X--XXXX-XXXX--", "XXX---X-XXXX-X-----X-X--X-XX-X-X--XX-X-X---X-----X", "---XXX*-X--XXXX---X---XX-XX-XXXXX--X-XX-XXX--X-XX-", "--X-X---XXXX-X-X-*-XXX-XXXXX--XXX--XXXX-X-X-X--XX-", "*XXX----X--X--X-X--XX-X-X-XX-XX-X---X---X-X------X", "X---X--X-XXXX--X--XX-XX--X-XXXXXX-----@XXX---XXXX-", "X-----X-X-XXX-XXXXXXX--X-X-X-X-XX-X-X-X-----X-X---", "X--X-----XXXX--XX---X---X-*--XXX--XXX-X--XX--X-X-X", "XX-----X--X-*-XXXXX-XXX-X---XX-XX-X--XXX--X--X--XX", "--X-XXXXX*XX-XX--XX-X-X--X--X-XXX--XXX-XX--XX-X---", "XX------XXXXX--XXXXX-XXXX--X-XX----X-------XX--XX-", "-X---XXX---XXXXX--XX---X-X---XX-X----X-X---X---XX-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> theMap = {"---X-X---*XXXX----X-XXX-XXXXX---X-----X-XX--X-----", "X-X-XX-XX----XXX---X--XXXX*XX-X-XX-X-X-X-X-XXXX--X", "X---XX-XX-X------X--XXXX-X--XXX-X----XXX-XX----X-X", "X-X-X-X------X*XX-----X-X--X--X-----X-XX--XXXXX-XX", "@--X-X-XXXXXXXX--XXX-XXX-XX-XX--XX--X--XX-X-XX-XX-", "--XXXX-XXXX-X-X-------XXXXX------X-XXXXX-XX-XX----", "---XX---XXXXX-X-X-X--X-X--XX-XX--XX-X-X*XXXXXX-XXX", "X--XX---XX-----X---------XX*X--XXXX-XXXXX-XX-XX--X", "XXX--X--XXXX--X-XXX-X--X-XX--X-X-XXX----XXX-X-XXX-", "X---XX--*X--XXX----X*-XXXXX-XXXXXX-XXX---XXX---X--", "--XXXX-X-XXXX---X*--XX----X-X-XX-X-XX----XXX----X-", "X--XX--X-X--XXX-XX--XXX----X---XX-XXX---XXXXX-X--X", "---XX-XXXXXXXX*-XX-X--X-XX*---XXX-XXX-XXX-XX-*----", "-XXX---X--XX-X--XX-X-XXX-X-X--*--X--X--XX-X--XX-XX", "X--X-XXX--XXX-X-XX--X-XXX-X-XXX-X-X-XXXX---XXX--X-", "--XX*--XXX--XX*X-XXXX-X-XX---XX--XX---X--X-XX-X-X-", "XXXXXX-X--*-XX-X-XXX--XX-XX-XX--X-XXXXX-XXXX---X--", "X--XXXXX-X-X-XX----X---X-XXX*XXX*---X-XXX-X---XX-X", "X*--X----X-----XXX-XX-XX---X-XXX--XXX-X-X-XX-XX*XX", "--X-XX-XX-XXXX-X-XXXXXX-XXX-----X-XXX--XX---X--X-X", "--X--X--X--XX--X-X-XXXX-X----X-X-X--X-X-XX-X*XX---", "XX-X--X------XXX----X---X-XXXX---X-X-XXX-XX*--XX-X", "X-X---X--XXX--XX-----XXXXX-X--XX-X--XX-XXXXXXX-XXX", "-XXXXXXXXX-XXXX--X-X--XXXX--X-XXX---XXXXX-XXX-XXXX", "X----XXX---XX-X---X------XX-X-X----XXX-X-XX-X-X-X-", "-X-X--XX--XX--X-X----X-------X-X-XXX-X---X*XXXXX-X", "-XXX-XXX---XX--X-XX---X----X-*XXX-XXXXX--X-XXX-XXX", "XXXXXX-X---XXX--XX---X--X--XX-XX-XXXXX-----XXXX-XX", "XXXX-X-X--XXX--XXXXXXX---X-XXX-X--XXXXXXX--X-X-X--", "XXXXX-X-XX-X-XXX---XX---X-XXX--X--XX----X-XXXXXX-X", "X--XX-XXX-X-XXXX--X-XX---X-*-XXX--XX-X-XXXX-----X-", "-XX--XXXXX---XX-X---X-X--X--XXXXX-----X-XX-XX-XXX-", "--X--X-----X-X-X-X-XXX-X---XXXXXX---X-XXXX-X-X-XX-", "--XXX-X--XXX----XX-XX------XXX--XXXX--X-XX-XX-XXX-", "-X-XX-XXX-XX---X-XX-X-X-X-XXXXX-*--XX-XX-XX--XXXXX", "X-XX--XX-X------XX-XXX-XX-X--XXXX----X--XXX---X-X-", "-X-X---X-X---*---XX--XX--X---XX-X----X--X-XXXX---X", "XX--X--XX-XXXXXX*XX-X--X-X-XX-X-XXX--XXX-X----X--X", "X--X--X-XXXXXX-*XX-XX------XX--XX-*--XX-XXXXX--XXX", "-----X-X-X-X--XXX--XX-XXXXX-----XXX-----XX-XX--XXX", "X-XXXXX-XXX----X---XX-X--XX--X----XXXX-XX--XXXX---", "----XXX-X-XX---XX---X-X--X-X-----X---XXX-X-X-XX-X-", "-XX--XXXX---XX-XXXXXX-XX-XX--XXXXXXX---X-XXX-X-XX-", "-X-X-XXX-X--XX--X---XXXXX-XXXX*---X-X----XX--XX--X", "X-X-XXXX-X-X---X---*X---X--XXXXXXXX----XXXXXXX-*-X", "---X-X-XX-XX-X----X-XXXXXX-X-X-XXXXX---X---X---X-X", "X--XX---XX---X-XX--X---X-------XXX*-X---X-XX--XXXX", "--XX-XX-X-XXX-X--X-X-X-XXX--XXX-X-XXXX-XXXX-X-XX--", "-X----X---XX-X-XXX-XX---XXX--XX*X---X--X--X-X-X--X", "X-X-X-X-X-----X-XXXX--XXX---X--XXX--X--XX-XX-XXXXX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> theMap = {"--*--XXX--XXX---X-XXX-XX-XXX-X-X-X----XX--X--X-XXX", "-X--X-*X--XX-X----XX--XXX-XX-XXXXXXX--X-X--X---XX-", "---XXX-XX----XX---XX---X-X-X--X-X--XX--XX-XXX--XXX", "-X-----XX----X---XXX-X--XXXX--X--XXXX-XXXX-X-X-XXX", "-XX-X--X---X--X---X-XXXX-X-X-X-XXX--X-XX-XXXXXX-X-", "X--X-XXX--X-XXXXXXXX---X-XXX--X-X--XXX-X*-*XXXX-X-", "-XX--XXX-XXXXXX-X-X--XX-XX------X---X-X-X-XXXXXXXX", "XX--XXXXXXX--X--*X-XXXXXXXXX--XXX---XX-X-XXXX-X-X-", "XXX-XX----XXX-X-XX-X------XX-X-X-XXX-----XXX--X--X", "-----X-X----XX-XXX---X*XX*---X-X-X-XXXXXX-XX--XX--", "-X-X-X------X-X-----XX----X---X-XXX-X--XX-XX-*-XXX", "---XXXX--XX-*X--X*----X-XXX--X----XXXXXXX-XXX-XXX-", "XXX-XX--XX-X*-----X--XX---XXX-X--XXX--X--XXXXX-XXX", "X-X--XXX-XXX-XXXXX--XXXXXX--X-XX-XX-XXX--XX-XX-X--", "XX-XXXX----XXX-X*--X-X---XXX-X-X-X-XX-XX----XXX---", "-----*XXX--XX-XXXX--XXX--*XXXX-X---XXXXX--X-XX-XXX", "XXXX-XXXX-XXX---X-XX-XX-XX--X--X----X------XX-XXXX", "----XX---X---X-X---XXXX-XX-X---X---XX----XX---XXX-", "XX-XX-XXX--XXXX-XX--X--XX-X--XXXX--X*-----XX---X-X", "--XX-XXX-XX-X-XX-X*XXX-X----XXX-X-XX-XX-XXX-XX--XX", "-XX-X---XXXX--X----XX-XXXX----X----XX-X-XXXXXX-XX-", "XXXX-X-XXXX-X-XXXXXXXX-X-XXX-XX-X---X--XX--X--X-X-", "XXXX-X--X---XXX--X-------XX--X---XX-----XXX----XX-", "----XXXXX-X---X-X--XXXX-XXXXXXXXX*XX--X-XXX--X--X-", "-X@X--X-XX--XX--XX-XX-X-X--------X-XX--X-X--XXX-XX", "XXXXXXXX-XXXX--X-X-X-XX-XXXX------X-X-XXXX*---X---", "X--XX----X-X-X-XX-X-------X---X-*XXXX---XX---X--X-", "-XX--X---X-X--X--X-*-*-XX--X-X--X-XX-----X--X-X-X-", "-X-XX--XX---X-XXXX---X-XXXXXX-X-X-XXX---X-X*--XX-X", "-XX*XX-XXX--X--XXXXX---X----XXXXXXXX--X-XX-X-XX-X-", "XX-XX-XX-X-X----X-XXX--X-------XXXX-X-X--X-----XXX", "-XXXX-X-X*-X-X-X-X-XXXX-XX--XXX--X-X--X--X-X-X--XX", "XX-XX-X----XX----X-XXXX---X---XX----X-XXXXXXX-X*X-", "-XX--X-XXX----XXXX--XX-X---XXXX--XXXX---XXXX---XXX", "XXXXX-X-X----X--XXX--XX----X--XXX---X-------X----X", "X--X-XX-XXXX--XX-X--X---X-XX-XX--X--XX-------X--XX", "---X--XXXX---X-XXXXXX--XXXX-X--XXX-XXXXX-X--X-X--X", "---X-X-XX-X-*----XXX--XXXXXX---X-XXXXXX-XX-XX---X-", "-XX---X-X----XXX----X-XXXX-X-XXXX-X-X-X-XX----XX-X", "X--X-X--X---X-X-X----X-----XX---X-XXXX--X-X---XXXX", "--XX--X-XX---X----XX-XX----XXX---XXXXX-X--X-------", "-XXXXXX-XX--XXX-X-X-X-X--X--XXX-XXXXXX-XX-XXX--X--", "XX-XX---XXX--XX---X--XXX--X--XXX*-XX--XX---XXXXXX-", "---XXXX--X*-X-XXXX-XX-XXX-XXXX----------XXX-X-XX--", "--X--XXX--X*XXX-XXXXXX---X------X-X--X--X--X-X----", "X-X-----X-X*X-XXXXX----X-X-X-XXXX-XXX---XXX-X----X", "-X----X-XXXX--XXX-X-XX--X-X-XX-XX-X---*X-*-XX--X--", "-XXXX--XX-X-X-XXX-X-XXXXXX---X-XX-*-X-X--XX----X-X", "--XXX---X-X--X-XXX-X-*--XXX--XX-X-XXXXX--XXX----XX", "-XXX-----X-X-X-X-X-XXXX--X-X-XX---XXX-XXX-X--X-X--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> theMap = {"-X-XXX-XXXX-X----XXXX-XXXX-*XXX-X-X-XXX-XX-XXXXX--", "XX----XXXXX---X--XX-X--XXXXXXXXX-XX-XXX-----XXX---", "X----X--XX---XXX-X----XX-XXX---X--X-X-X-XXXXX-X-XX", "XXX----X--XX-X--X-X--XX--X---X-X-XX-X*---X--XX--X-", "-X-X----X----XX-X--XX-X-XXX-X--XX--X--XX--X---X-X-", "-X-X-----XX---X-----X---X-XX-X-X--XX--X-X-XXXX--XX", "XX-XX-X----XXX-XXXX--XXXX-XX-XX--XX-----X--X-XX--X", "X------XXXXX--XXX-XXX---X--X----X--XXX-X-XX---X-XX", "XX-XXXXXXXXXXXX--X--X--XX--X----XX--X--XX--XXX-X-X", "---XXX-X---X-XX-XXXX-X-------X-X-X-X-XXX-XX---XX--", "-X--X-X-----XXX--XX-*X---X-X-X-XXXX-X-XX-X-XXXX---", "XXXXXXXX-*XXXXXXX-X--XXX-X---XXXX----XX--X-XX-XX-X", "XX-XX--X--XXXXX--XX-XXX--X-X--XXX-XXXXX--X-@-X-XX-", "-X-X--XXX-X--XX---XX------X--X-XX-X-X-----XXXX-X--", "XXXX*-X-XXXX--X-X----X-X-XX-X---X-XXX-X--XX-XXXX-*", "X-----XX--X--------XX-XXX---X-X--X-XXX---XXXX-X-X-", "X-X--X-XXXX-XXXXX--X-X---X--X----X--XXX-XXXXX-X-XX", "---XXXXX--XXXXX--XX-X---XX-X-XXXXX-------X-----X--", "-XX-X--X--XXX--X------XXX-XX--X---X--X-XXXXXXX--X-", "X-X--X---X-XX--X--X---XXXX-XXXXX----XX-XXXXX--XX-X", "X-X--XXXX--X--X----X-X----X--X-XX--X-X--XX---XXXX-", "--X--X-X-X-----X-X-X--XX--------XXXXXXX-XX-XXXXXXX", "X--X*--X-XX-X-XXX-------XX-XXXXX-X-X---X---X------", "-X---X-XXXXXX--XXX--X-XXX-X--X-X--X---XXX*-XXXXX-X", "---XXX-X--X-X--X-XXX**X--XX-X----XX--XXX--X-X--X-X", "XX----XX-XX-X--XXXXXXXXXXX----X-XX-X-XX--X----XX--", "-X-XX-XX---X-X-X---*-XX----XX-X--XX-XX-XX-X-X-XX-X", "-XXX---XX--XX-XXXXX-X-X-XX*X-X-X-XX-X-X-XX-XX-XXXX", "XX-XXX-XX-X-----XXXXXX-XXX--X--XXXX--XXXX-XX----XX", "------X-------XX-X--XX---X-XX-X--XXXX-X-X--X-X--X-", "XX-X-X-X-----X--XXXX-XX--X-X-XXX-X---X------XXXX-X", "---X-XX---XXX*XXX-X--X---X-X-XX-*-X---XX-XX-XX---X", "---XX-X---X---XXXXX-XXX-XX--XXX----XX---XX-X---X-X", "-XXXX--X-XXXX-XXXX--XXXX--XX------XX------X*XXX-XX", "X--XX-XX--X-------X-X-X--XXX---XX-X--X--X---XXXXXX", "XXX---XXXXXX-XX-XXX-X-----XX--X-XXX-X--XXXXX-X-XX-", "XXX-XXXX--X--XX--X--X----X--X-XXX-X-XX-XX-X-X--X--", "XX-XX-XXX-X-XX-XXX--X--X--X-X-X-X-X-X--X-XXX-X--XX", "XXX----XX---X---XXX----XXX---XX-XX-XXX--XX--X-XX--", "--X-XX----XX-XXXXX--X----X-XXXX--XXXX--XXX-X-XXX-X", "X-X---XX--X-----X--XX--XX--X---XX--XXXXX-X--XX--X-", "X--X--XX-X-XX--XXX-X-XXX---X--X-X-XX-X-XX-XXXXX-X-", "X--XXX*-XXX--X----X-X-X-X-XX-------X-XXX-----XXX*-", "X--XXX-XXX-XXX----XXX-XX-XXX--XXXX-XX-XX-X--XXXX--", "*XXX---X--XXXX-XX-X-XX-XX-X--X--XXX-X-X--XX-X--X--", "-XX-X-XX-X-X-X-X---X-----*XXX------XX-XXX--XXX--XX", "---X-X---XX-*-X-X-X-X---XXX-X-X--X---X-X-XXXX-X-X-", "XX--X-X---X-XX--X*X--X-XX-XX----X-X--X--X-X--X--XX", "X-X-X----X-XX-XXXX*-XXX-XXXX-XX--X-X-XXXXX-X--X---", "X----XX-X--X-----XX-X--X-X---X---XX-X-XX-X-XXXXXX-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> theMap = {"-XX---XX-XXXXX-XXXX-XX---XXXX-XX-X--XXXXX--X-XXXX-", "-XX--X-----X--XXXX---X---X----X---XXXX-X-XX-X-XX--", "XX-X---X--XXX-XX----XX-XXXXXXXX--*XX-*XXX-XXX-----", "X-XX-X*XXXX-X-XX-X-X------XXXX--X-XXX---XXX--X--XX", "XX-X---X--XXXXX-X*--XXXXXX-X-XX-XX-XXX*-X--XXXX---", "-X--X*XX-XX--X-XXXX---XXXXXXXX---X-X-X----X---XXXX", "XXX-XXX-X---XX-X--XX-XXX------XXX--XX-X-X-X-XX----", "XXXXXX-XXXXX--XX--XX-XXXXXX-XX--XXX-X-XX---X*-XX--", "XX-X----XX--X--X-X-X-XXX----XX-X---XXX--XX----X-XX", "X---X-X-X----XXX*XXX--XX----X*--X-XXXXX-XX*XXXX--X", "----XX---X------X-----X---X-XX-XXXXX--X-XX----X-XX", "X-XX-XXXXX-X-----XXX--XX-X--X----X--X--X-XX-X--XX-", "--X---XX------XX---X-XX-XXXX-XX-X-XXXX-X-X-XX---X-", "---X-X--X--XXX---*-XXX-X--XXX-X---*-X-XXXX-XX-XX--", "X---XX-X-XX-XX-X-XXX---XX-XX-X--------XXX-X-X---X-", "-X-XXX*-X-X-*X-XX----XXXX-XXXX--XXX-X--X--X---X-XX", "-XX-----XXX--X-----X-X-XXX-XXXXXXXX-XX-XX--XXXX---", "XX--X-X-X--XXXX-X-X*X-XX---*-X-XX-XX--XXX---*-X--X", "XX--XXXXX-XX--X-X---XXX-X--X-----X---XX---X-XXX-X*", "XX---XX--------X---XX--------X--XXX-XX------X--X-X", "XX-X--XXXX-X----X--XX--XX--XX-XX------X-XX-----XX-", "---XX---X---X--X-X-X-XXXXX-XX--X-XX-XXX-X---X---XX", "XXX----XX---XX--XXX--XXX-XX-XX-X-XXXXX-XX--X--XX--", "-X--X-XXX-X--XXXXX---X-X--XX-XXXXXXX--X--XXX*-X--X", "XX-X-X-XX---XXX-X-X-XX-X*---XXX--XX-XXXX--XXXX-X--", "--XXXX*--XXX-XX-X-XXX*-XXX--XXX---------XX----XX-X", "-X---X-XX-XX-XXXX-XX--X-X*-X---X---X-X--XXX-X-XX-X", "--XXX-XX---XX-X---XX--X--XX--X-X----X--X*--X-XX-XX", "-XX-XXX--X-X-XXXXX-X-XXXX-XX-X---X------X-XXXX--X-", "X-XX-X--XXXXXXX---XX--XXX-X---XX-----XXX-X-XXXXXX-", "X---X--XXXX--X-XX-X-X-X-----XXXXX--X-X-XX-XXXXX--X", "-XX--X-X--X----XX--XX--XX-X--XX--X-XXX-*--X@X----X", "-X-XX--XX-X----XX-XXX--XXXX-XX--X---X---XXX--X-X--", "--X-X----X-XXX-X--*--X------XX--X--*X---X----XXXX-", "---X-X-XX--XX-----X--XXXX-X--X-----X---XXXX-X----X", "X-X-XXXX--X------XX-XX-XX-X-X--X--XX-X--XX---XXXX-", "X---X-----X--XXXX-XX---XX---XX-XXX-X-X-XXX-XX-X-X-", "XX-X---X-XX-XX-X----X---*XXXXXXXXX-X-X--XX-XXX-X-X", "XX-X----XXX--X--X-X-X----X--XX-XXXXXXXXXXX-X----XX", "XX--XXXXXXX-X---XXX-----XX-XX-XXXX---XXX-X-X---XXX", "X--X-X--X-X-XX-X--X-X-XX-----XXXXXX--X---X--X-X-X-", "X--XXX---XX--X-XXX-XX-XX-----X---X--X--X---XXXXX-X", "-XX----X--XX-X-XX*-X-XXX-X-X-X--------X-------XX-X", "XXXXX-XX--XX-XXXX-XXX--X-X--XX---X--XX------X--XX-", "-X-X--*-XX-------X-X*---X-X*---XX-X--XXX---X-X-XXX", "XXXXXXXX----X--X--X----X-X--XX-XX--X--X*--XX----XX", "-------X-XXX--X---XX--XX--XXXXX-XX-X-XXX--XXX--XXX", "---X-XX---X---XX--XXX---X-----XXXX--XXXX--XX-X-X*-", "X-X--X-X--X-XX-XXX-XX-XXX-XXX-XXX--XX-XXX-X-----X-", "---XX-X--XXX-XX--XX-XX-X--X--XXX-X-X-XX---XXXX--XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> theMap = {"--X-X--XXXX---X----X-XXX-XXX-----X---XXXX--X--XXX-", "X-XX----XXX-X-X-X---X-X--X-*--XX-XXXX-XXXX--XXXX--", "XXX-XX--X*-XXXX-XX--*----XXX----X---X-XXXX--X-X-XX", "XXX-X---X--X--XXX-XXXXX--X--XXXX--X--XXX-XXXXX--*-", "---X-X----XX---X*XXXX----XXX-XX-----XXXX-XX-XX*XXX", "XXX--XXXXXX-X-X--X-X---X--X--XXX-XXXX-X-X-X----XX-", "X--XX-XX-X--XX----X------XXXXX-XXXX-X----X-X-XXX-X", "X-X---XXXX-XX-XXX--XXXXX--X--X---X-X-X-XXXXX-X-XXX", "X-XXX---XXXXXX-X-XX-XX---XX-XXX-XX-XX-X-X-X-X---XX", "-X-X--X--X-X-XX-XXXX-XXXXX--XXX-X-X-X-XX-XX-XXXXXX", "----X--X--XXX-XX---XX-X--X--XXX---*X---X--X-X--X-X", "-X-----XX-XXX-X-X----X-*-X-XX-X------XXX-X-XXXX---", "X-XXXX--X--XXXX-X--XX--XX----XXX----X--X-----XXXX-", "---XX-XX---XXXX-X-X-X-XX--XXX-XXX-X---X-X---X-X-XX", "-XXXX-X-X-X-XXX--XX-XXX--X---XX-XX-XX-XX-----X-X-X", "X--XX-XXX---XX---X-X--X---X-----X-XXX-X-XXXX*XX-XX", "X*XXX--XXXX--XXXXX-XXXXX-X-XXXX-X---X-XXX--*X-X-X-", "X-XXXX-X--X-XX--XX----X--XX----X-X---XXXX-----X-XX", "-XX-X-X-X-X----XXX--XX----XXXX--XXX--XXXXX--XX-X--", "XXXXXXX-X*XXX-X@XX-XX--XXXX---XX*XX--XXXX-XX-X----", "-X--XXXX-XXXX----XXXX-X-XX------X*X-X-XX--X--X-X-X", "--X-X-X-X--XXXX--X-X-----XX---XX--X-X---XX-X-----X", "X--XXX--X-X---X---X---X------XX-----X--XX----X---X", "--X--X-X-X--XXXXXXX-XX-XX---X-XX--X-XXXXXXXXX--XX-", "-X*---XXX--X-X--X-X--XX---X*X-X----XX--XXXXX-XX*XX", "-XXX--X-X---XXX-X-XX--XXX-X--XX-X-XX-XXX---X--X-XX", "XXXXXX*----XXXXX--X--X-XXX--XX-X--XXXXXX-XX-XX----", "XX-X-X-XX-XXX-XXX-X--X-XXXX--XXX-X-XX-XX----XXXX-X", "-X---X-X-XXXXXX-X--X--*X-X*XX-XX-X--X-XX--X-XXXXX-", "--XX--XX--XXX--XX-XXXX*XXXXXX-X-X-XX-XXX-XX-----XX", "-XX-X---X-X--X-X--X--X-XX-X-X---------X-X-X-X-XX-X", "XXX--XX----XXX--XXX--X---XX------XXX-XXXXX--X--X-X", "-X--XXX--XXXX-XX---X*X-XXXXX-XX--X--X-*-----XXXX-X", "--X-------X-X--X--*----XX----*X--XX-X-XXXX---XXX--", "-XXXXX-X--XX--X---XXXX-X--XXX**X--X-XXX-X---XXX-X-", "--X---X*XXXX--X-X--X---X-X-XX-XX-XX--*X-XX-X----XX", "--XX--X---X-X-----XX-X-XXX-----XX--XX---XX-XXXX-XX", "X--XXX--X---X-X--X--X-X-X---X--X--X-X---X-XX--XXX-", "--XXXXXX-X-X------XX--XXXX-XX-XX-XX---X-XXX-XXXX-X", "-X-X-XXXXXXX-X---XX---XXXXXX-XX-X-XX-----XXX-X--X-", "XXX---X--XX--X-X--XXXXX--XXXXX-X---X--XX--XX-*XX-X", "XXX------X---XX---XX--X---XXX-XXXX-X-XX--X*---X-XX", "---XXXXX---X--X---X--XX-XXXXXXX-X--XXXX---X-XXX--X", "XX-X--XX----XXX-X--XXXXXXXXXX-X--XXX--X---XX-X---X", "X---XX-X--XX-X------XXXX------XX--XX-X-XXX-XX-X-XX", "---XXXXXX---X-X-X--XXXX---*--X--XXX-X--XXXXXX-XXX-", "XXX-XX-XXXXXX-XXX--XXX-XXXXX-XXX--XXX-X--XXXXXX---", "-XXXX--XXX*-XXXXX-XXX-XX-X-----XX*XXXXXX-X--X----X", "--X--XX---X--X----XXX--XX-XXX----XXX-X---X-XXX-XX-", "X---XXXXX----XXX----*-X--XXX-*XXX--XXX-XX--XX-X-XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> theMap = {"--XX*-X--X-X-XX--XXX-*-XX*XX-X-X--X**-X--X-X--@X--", "XXX-XX--XX---XX----XXXX--XX----XX---X---X--X-XX--X", "--X-----------X-XXX-X-XXXXXXX-XX--X--X---X-XX-XXXX", "XX-XXX-X-XX-X-X-XX--XX-X-------X-XX--*X---XX---XX-", "XXXX-X-X-X-X-X*X--XXXXXXX-XX--X-XXX--XX-X--XXXX--X", "-*X---XX-XX--X---XXXXXXX-X-X--X--X--XX--X----X-X--", "---XX---X-XX--XXX-XXXX-X*-X----------X-XXX-XX-XXXX", "--*-X-XX-X-XXXX--X---XXX-XX---------XX--XXXX-XXXX-", "-XX-*XX---X-XX-XXX-XXXX---X--X--X----XX--XXX--X-XX", "-XXXXX-XX-X-XXX-XXXXXXXX----X-X---XXX-XX-X---XXX--", "XX*X-X--X---XXX---XX--XXXXX-X--XX-X----XXXXXX-XX--", "----X-X---X--XXX-X--X-*-XXXX-X--X*X----XX-X-X*X-XX", "XXXXX-X-X-XXX-X---X-X-X-X--XX-XX--X--X---XX--XX---", "--XXXX-X-XXXXX-----XX-XXX-----*X-XX---XX-X--*-XXX-", "-X--XX-XX*X--XXX-X-X---XX-XX-X-X---XXX---XXXXXX--X", "------------XXXX-X-X-XXX---X-X-XXXX-XXX-X---X-X---", "XXXX---X-XX-X-X-X---XX---XXX--XXX---X-XX-XX--XX-X-", "-----X-X-X-X-X*X--XXX--XXXXX-X---X*X--X-----XX-X-X", "--XXXXX--*----XXXXXX--XXXXX-X-XXXXXX--XXX-XXX-X---", "X-XX-X-X--XXX-X---X-X-XX---X--X-XXXXX---X-XX----XX", "--X---X*XXX-XX-----XXX---X-XX---XXXX-----XX*-X-XX-", "-XX-X--X---XXXX---XXX-X-XX--XX-XXXX--XX-X--XXXX-X-", "X-XX-XXXX-XXX-XXX--X-XX----*XXXX-X-XXX-----X-XX-XX", "XXXX--XXXXXX-----XXXXXXX-X-X-XXXX-X-XX-XX-X-XXX-X-", "-X--X--XXX--X-XXX-X--XX-X-X--XXXX-XX-X----X-X----X", "XXX-X-XX--XX------XX-X--X-----X-XXXXX-X--XX-XXXXX-", "XXXXX-XX-XX-*-XX-X--XXXXX----X--X-X-XXXXX--X-X*--X", "X--XXX--X------XXXXX-XXX----X-X--X-XX-X--XXXXXX--X", "----XXX-XXXX---X---XXXX-X-XX-XXXX--X-XXX--X-X-X-XX", "X--XX-XXXX-X---X-X-X-X---X*-XX-X--X-X--X---XXXXX-X", "X-XX-X-X--X-XXX-X----XX--XX---XXX-XXX--XXXX--XX---", "*-XXXX---XXXXX-XXXXX--X*XXXX-X--X---X--X--XXXXXXX-", "-XXXXXXXX------XXXXXX--XX--XX-X-XXXXX----XXX--X--X", "X-XXX-X--XXX-X-XXXXX-XX--X--X-XXXXXX--XX---XXX--XX", "-X--XXX---X--X-X-X--X--X--XX---XXXX-----XXX-XX----", "-XX--XXXXX-XXXXXX-XX-X-XXX-XXX-XX-X----X-X----X-X-", "-X--X-XXX-X--XX--X-X--X-X----XXX--X--XX-XXXX----X-", "-X-X-X-XXX-X-X----X-XXXX-X----XXXXX-XXX-X--XXX-X--", "X-XXXX--XX-XX-----X-XX--X-XX-XXX-XXX--XXX-----X-X-", "XXX-X--X--XXX-*XX--XXXXXX--X-XX-X-X*-XXXXXX-XXXXX-", "XXX-X-----XX----X---X-X--XXXX-XXXXX-XXXX-X-X-XXX--", "X----XXX----X-X-XXXXXXXX-X---XX-XXX-*XX--XXX--XX--", "XXXXX---XXX---X-X---XXX-X----XXX-X----XXXXX---XX-X", "X-XXXX--X-XX-XX*X-XXXX-----XXX-X-XX--X-XXXXX--XXX-", "X-X-XXXXX--XX-XX-XX--XX---XX---X-XX-XXX-X-X-X---X-", "---XX*XXX--XXX-X--X-XXX-----XXX-X-X-X--X---XX-XX--", "XX--X-X*XXXX-----XX-XXXX-X-X-XXXX-----X-X----X---X", "---XX-XX--------XXXXXX-X-X-XX--X-XXXX--XXX-----XX-", "-----X--XX-XXXXX-XXX-XX--X-XXX--X-X-XXX----XX-XX--", "-X-XXXXX--X-XXX-X-XX--XXXX--XX--XX-X-XXX-X-X-XX--X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> theMap = {"XXX-XX-XX---X-XXX-XXX-XX--XXXXX-XX--XXXXX-XX-X--XX", "XX-X-XXX--X**-XX-XXX-X--XXXXXX*XXXX-X-X-XX-XXX-XXX", "X---X--X--XXXX-XXXX--XX---XXX-XX----*XX-X---XXXXXX", "-XXXXXX--X-X-X-X-XX-X---X-X-----X--XXXXXX-XX--X-XX", "-XX--X---XXX-X-X--XX--X---XXXXXXX-X--XXXXXXX-X-XX-", "----XX-X--X---X---X--XXX-X---X-X-X-X----XXXXXX--XX", "----X--------XXX--XX-XXXX-XX--XX---X-XX-*XXXXXX--X", "-XX-XXX--X---X-X-----X----XX-XXXXXX----X--XXXXX-X-", "--XXXX-XX--X---X-XX-XX-XX---X--XXXX-X--XX---X-XX-X", "XXX--XXXX-XXXX-XX------X*X-XX-XX-XXX-X--XXXXXX--XX", "--------X--X----XXXX-X-X-XX-X-XXXX---XXX-X----X-XX", "---XXXXX------X---XXX--XXXX--X-XXX-X---X--X*X---XX", "----XXXXXXX-XXXXXXX-----XX-X-X--X-----XX--XXX-XX--", "XX-X-X--X--X---XX-------XX*-----X-XX-XX-X-X--X--XX", "XXXXX-X-X--XXX-X-XX-X-XXXXX-*XXXXX-X--XXX-XX-XXX-X", "X---XXX---X--XX--XXX-----X-X*-XXX-XXXXXX--X-X*XXX-", "XX-XX-XX----X*---X-X--XXX----XX-X-XX-X-----X-X-XX-", "-XXX---XX-X-XX-X--X-X----XX-----------XXXXX-X-X---", "X-X-XXXXX----X-X----XX*-XXXX--XX--X-X--X-XX-X-X--X", "-X-XX-X--X--XXXXXX--X-XXXXX-XXX---XXX--X-X---X-XXX", "X-X*---XXXX-X-XXXX-X-X---X-X--XX--XX---X---X-XX-X-", "--X--XX-X--XXX--X---XXXX--X---X---XX-XXXX--X--XX*X", "-X----XXX-XXX-X-------XXXX--XX-XX-X---X--XX----X--", "XXX-----XX-XXXX--X-X-*-X--X-------------X*XXXXX--X", "--X--X-X---X----X---X-XX--XXXX----X--XX----X--X--X", "X-X---XX-XXX-XXX-XXX--XX-X----XXX--X-X-XXX-XXX-XX-", "X-*XX-X------X----X-X--X-*XXXX-XX----XX--XXX-X*X-X", "----X---X-X----XX--XXXXX-X----XX-X-----X--XXX-XXXX", "-X-XX--X**X-XX-X-XX-X-X-X-----XX-XX--XX-X---X--X-X", "---XXXXXX----X-X--XXX---XXX-XXXX-X--X---X-------X-", "X-X-X-X-X-X-X---XX----X--XX---X@X---X--X--X-XX-XX-", "-XX---X---X-X---X-X--XXX-XX-XXX---XXX-X---XXXXX--X", "-XX-X----X---X-X-XX--*X-X-----XXX-XX--X-XXX-X---XX", "XXX--X--X---XX-XX-XX---XX-XX-XXXX-XXXXXXXXX--X-X-X", "XX--XXX-XX--XXX-X-XX--XXXX-X*XXXX----XX-XX--X-X--X", "X-XX-----XXX*XXX-----XX--X---X---X--X------X----X-", "XX-----XXX-XXXX-----XXXXX--X---X-XXX-X--XX-X-XXX-X", "XX-----XX-XX-XXX-----X--XXXXX-XXX---X---XXX--X-X-X", "--X--XXXX--XXXXXX--XX-XX-X--XX---XX--X-X-X-XXX----", "XX-XX-X--XX--X-X-X--XXX-XX-XX-X-XX--*-XXXXXXXXX--X", "-X---X-*--X-XX--XX--X-XXX-X---X---XXXX-X----X---X-", "X-XX-X--X-X-------X-XXXXXXXX-XXX---X-*X-X-XX-XX--X", "XXX-XX-XXXXXXX-XXX--XXX--------*XXX-XX-----XX---X-", "XX--XX-----X--XX-XXX-X-----XX-XX-XXX-XX--X--XXX--X", "--XX--XXXX-X-XX-XX-XX----XX-XXXXX--X-X---X-X-X-X--", "--X---X----*-X-X-X-XXX--XXXX----X-X------X-XX*XXX-", "--X-XX-XX-X-X--------XXXXXXX--X---X--XXX---X*XX---", "X---XXXX---X----X--XXXX-XXXX-XX--X-XXXXX-XXXXX-X--", "--XX----X--X-X-XX-X-*-----X--X--XX--XX--X-X-X-XX-X", "XXX---XXXX--*---X--XXX-X-----X-XXXX--XXX-X-X-XX-X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> theMap = {"-X-X----XXX-XX--X--X------XX-X---X---XXXXX-XX--XXX", "XXXX-XX--XX-X-X----XXXX------XX-XX-----XX-XX-X--XX", "XX---X----XX--X-X---X----XX-X*-XX--XX-X-XXXX-X-X-X", "*X-XX--*-XXXXXXXX-XX-XXXXX--XX-X-XX-XX-X*--XX----X", "X--X----X--XXXXX-*---X-X--XXXX---XXXXXXXX---X-X-X-", "-------XXXXXX-XXXXX-XX------X--XXXXXX-XX---X---XX-", "--XX--XX-XX---XX-----X--XXX--XX-XX--*--XX---X-----", "X--X---XXX-XXX-XX-XXXX-X--------X-*XXXXX--------XX", "-XX-XXX-XX--X--X-XX-XXX--X----XX-XXXX-X-X-X-X--XXX", "XX-X-X-XX-----X--X---XX-X---XX-XXX--XXXXXX*XXX-X*X", "X-XXX*XX*----XX-X---X-XX-X-X-XXXX-XXXX--XX-X---X--", "X--X----X-XXX--XXX----XXXXX--XXXX-X-XXXX-X----XX--", "--XX--X----X-----X-XX-X-XXX--X-X-XXX--XX-XXXX--XXX", "--X-X-XX--X--X-X-XXX-XX-X-X---X---X-X-X-X-XX-XXX-*", "-XX--------XXX-X--X-XXX-*XX-XXXX-XXX-X-XX-XX-XX---", "X-XX-XX-XXX--XXX-XX-XX--XXX-XXXX-XXX------X----XXX", "-XX--XX-XXX--X-XXX-X--X---X--XX---X--X-XXXX-XXXX-X", "XX-X-X-X-X--XX-XX-X-XX---X-X-X-X-XX--XX-*XX--XXXX-", "--XX-X-XXXX-XXXXX-XX--XX-XXX--X---X-X-X-X----X-X--", "XXX--XXX---X-XXX--X-XXX-XXX--XX----XXX---XXX-XX---", "-X--XX----XXX---XX--*XX-X-XXXX-XX-X-X---X---X--XXX", "XXX-X-X---X*-X-XX--XXXXX-X-X--X---X-XX----X--XXXX-", "XXX--XX-XXXXXXX--X----X--XXX--XXXXXXXX----XX--X-XX", "-XX-X--X-*XXX-X-X-XX-X-XXX--------XXX-XX-XXXXXX-X-", "*-XX----XXX--X------X----X---XXXXXX-X--X--XX-X----", "-XX------X*XX-XXX-X*-X-X-----X---XXXX-X*X-XXX-XXX-", "-X-XXXX--XX-X---X----XX-X-X-XX-----X--X--X--X-X---", "-X--XXXX-X*X-XX-XXX---*--XXXX-XX-**X-X-X---XX--XX-", "-X-X*X-X-X--XX---*XX--X-X-XXXX-X---X-XX-----*-XXXX", "-XXXXXX-X-X---XXX--XXXXX-XX---X-X-X--XXX-X--X*X--X", "---X-X-X*X--XXXX---XX-----XXXX--XX---XXXXXX---XXXX", "XXX-X---X-X-X--XX-X-X-X-X--XXXX--X--X--XX--X--XXX-", "X-XXX------XXXXXX--XXX-XX-XX-XX*XXXX-X--XXXXXXX--X", "XXXX-X-X--XXX--XX---X-XXXXXX----------X--XXX-XXX-X", "X--X---X-X--XXX-XX*---XX-XXXX--XXXXX-X-XX----XX-X-", "-XX-X-X----X--XXXX--XXXXXX-XXXXX--XX--X-X-X-XX-XXX", "----X--X--XX-XXX-------X*X---XX-XXX-XXX--XX-XXXX-X", "X----XX--XX-X--XXXX--X-X-X--XX-XXXXXX-XX-X---XXX--", "X-X-X---X--XX-X-XX----X--X-X-XX--XXX-XXXX-X-XX-X-X", "-X--XX--XXX--XX------X-X---X-X---XXX------XX--XXX-", "X--X--X-XX--XXX-XX---XX---X--XXXXX---XX----XXX--X-", "XX-XX-XXX-X---XXXXXXXXXX---XXX-XX-XXX-XX---XX-X-X-", "---X-XX--X--X--XXXX------X--XX*X---X-X-X-X---X-X--", "--X-X-XX-----X-XXX--XX--X--XXX-XXX-XXXXXXXXXXX--XX", "--XXXXX----X---XX---XXXXX-XXXXX--X-X-XXX*---X-XXX-", "XX--XXX-XX--X-X*----X-----XXX-X-XXXXXX-XX-X-X-----", "-------X-XXX--XXXXX-X---X-X-X--X-X-X-X-XXX----XX-X", "*XXX---X---XXX-----X-XX--X---XXXXX---X--X-----XXXX", "--XX--XXX-XX--X--X----X-X-X-------X--X-----X---XXX", "----X---XXX-X--*XX-XX-X@XXXXXX-XX-XXXXXXX-X-XXXXX-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> theMap = {"-XX-X-----X----X-XXXXXXXXX-X-X---XXXX---XX---XXXX-", "----XX----XX-XXX-XXX-XX--XXX-XXX-XX-XX--X-XXXXX---", "XX----XX-XX-XXXX-XXXXX--XXXXX-X---X--X--XXX-XX-X--", "--XXXX-X------XXXX*XXX--X----X-XX--XXXXX----XX-X--", "X-X---XXX--XX--X---X-XXX--XXXX--X--X---XX--XXXX-XX", "-XX-X--X-XXX-XX-X--XXX-X--XX-XX-X-X-X--X--X-XXXX-X", "-XX-X------X-XXXXXX-XXX--XX-XXXX-X----X----XX--XX-", "XXXXX-X-X-X------X--XXX--X-XXX-X---XX-X-X-XX---X-X", "-XXXX-XXX--X-XX----XXX-XX---X-X-X--XXXXX---XXX--X-", "--XXX-X-XX*XX-X--XXX-XX-XXX--X-X--X-XX-X-X--XX----", "*XXXXXXX----XX-X-X*XX-XXX-XX-X-X-X-X-X---XX-XX-XX*", "X-X---XXXXX--X---------X--XX-X--X-XX--XX--X-XX----", "--XX----X-XX-----X-X-XXXX------XX-------XXX---XX--", "--X-X-X---X-XXX-X-X*-X--XX-X-X-X-X----XX--XXX-----", "-XXXXXXX-X--XXXX-X-X-XX-X----X-X-X-X-X----X-X-XX*X", "X----XX----X--X-X--X--X-XXX-X---X-X-XX-X-XX-----XX", "-XX--X--X---XXX--XX--XXXXXX-X-X-XX--X-X----XX-X---", "-XX--X*-XX-----X--X-XXX-X-X----XXX-X--XX*XXX------", "--XXX---XXXX-X*X-X-XX--X-X-----XX-*XX--XX----XX---", "XX-XXXXX--XXX------*XX-X-XX-XXXXX-XXXXXXX--X--XX--", "---X---X--XX-XX*-----X-XXX--X--XXXXXXX-X-XX-----X-", "XXX-X-X--X-XXXX--XX-XX-XX--X-X----X-X---X-X---XX-X", "-X-------XX----X-XXX*XX-X-XX-X-XXXXXXX-X--XXXXXX*X", "X--XXX----X------X--X---X--XX-X---X--XXX-----XX---", "XXX--X-XX-X---X--X-X--XX-XXXXX-X-X-XX-X--XX-XX---X", "-X-XX-X-X-*--X-----X-X--XXX--X--------XX-X-X-XX*-X", "XXX--X-X-X--XX-X--XXXX-XX-X---X-X--XXXXX-X--X-X--*", "-XX-XX------X-XX--XXX---XX-XX---X@X-X-----XXX-----", "XX-X-X---XX--X--XX-XXXXXXXX-X-XXX-XXX--X--XXXX-X-X", "X-XX-XXX--XXXX-X--X-X---X--XXXX-XXXX-X-XXX-XX-----", "XXXXXX--XXX-XX-XXXX-XXXXX-XX--XX--X-XXX-XXXX-XXXXX", "-XX----XX-X-X-X-XXXXX---X--X-XXXX---XXXX---X---X--", "*--XX-X--X-XX-XXX-X-XX-X-XX------XX---XX-X---XX-XX", "-XXXX--X---XXX----X-XXX--XXX-X-XXX-X-X-XX*-**X--XX", "X-XXXX-XXXXX------X-XX-XXXX--X----XXXXXXX--X-X-X-X", "---XX--X--X-XX-*--XX-X-----X-XXXX-XXX-X----XXX-X-X", "XX---X--X--XX--XXX----XXXXX-X-----X-X-*XXXX-X*--X-", "--XXXXXXXX-*---XXXXXXXXXX-XX-XX-XX---X--X-X-X-XX--", "--X--X--XXXX-XX-------XXXXX-X--X-X-XXXXX-*---XX---", "XXX-XX-X------XXXXXX-X----XXXXXX-XXXXX-X-XXX-XXX--", "-----XX--X---X-XX-----XX---X-X-XX--XX--XX-X-X-X---", "X--XX----X--X-X--XXX-XXXX--X------XX-X----XX-X-X-X", "-X-XXX-X-X-XX----X--X-X----X-X--XX-XXX--XX-XXXXXX-", "*-X---XXXXX-XXX-XXXX-XXX---XX--X-XXX---X-X-XX---XX", "--XXXX--XXX-X--X-XXXX-XXX-XX-XXX-X-XXX---XX-X-X--X", "X-X-XXXXXXX-X--*XX---XX-XX-X--X--X-X-XX--X-X-XX-X*", "-XX-XXX--XXXX-XXXX-XXXXXX-X-XX---X-X--X--X----X-XX", "-XX---X-XXXXX-XXX-XX-X----XXX-X-XX-XX-XXXXX-XX--XX", "XXXXX---XXX-XXXXXXXXXX-XX-XX---XX-*-XX--XXXX--X--X", "-----XX-*-X-X*XX-XXX------X--XXXXX-X-XX-XXXX--X-XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> theMap = {"X-------XXXXXX-----X-----XX*-XXX-X--X-X---X-X-XXXX", "----X----XXXXXXX---X--XXX-X---X--X-X-XXXXXX-X-----", "XX--X---X-X--XXX-X-X----X-X---X-X--X-X--XXX-XXXXXX", "-X-XX--X-*-----X--X-X-----X---XX--XX-XXX--XXXXXX--", "XX-X--X-XX-X-X---XX--XX-X----X---XX-X-XXXXX--X----", "-X-X------XXX--X--XX--XX-X--X--X--X-XX--XXXXX--XX-", "X-X----XX-XX-X-X---XXX-X--XXXX-----X---XX--XX-XXXX", "X-X--XXX--XXXX-XXX---X-XXXXXXXXXX-*-XXX-X-XX-X-X-X", "X--XX-X-X--X----XX-XX--X-XXX--XXXX-X-XXX--X--XX---", "-X-XX--X---XX-X-XX---XX*XX-------XXXX--XX-XXXX-XX-", "XX-X-X--XX*-XXX---X-X---XXX-X-X-XXXXXXX-XX-XXXX---", "--XX-XXXXXX-------X-X-X-XXX-X----XX-X---XXX---XXXX", "--X*X-XXX--X-XX*X-X-XXXX-XX---XX*XXXX-X-XX-*XX-X-X", "-XX-*X-X-X--XXXX*X-X--X-X--X-X-XXXXXXXXX-X----XX--", "XXX-X--XXXX--X-X--X*--X-X--X-----XXXX-XXX-X-XX-XXX", "-XXX-X-X-XXX-X-XXX-X--X-X--XX--XX--X-XX----XX-XX-X", "-XX-X--X--XX------XX---X--XXX--X--X-X-XX-XX-X-XX--", "-X-XX-XX----XX-----*X-XX-X-XX-X---XXX--X-X-XXX-X-X", "-XX-XX-X-XX-X---*-XXXX----XX---X-X--XXX-X-XX-X--XX", "XXXXX---X-X--X--XX-X---XXXX--XXX-X-XX-XX--XX-X-X-X", "XXX-XXX-X--X-XXX-XXX----X-X----XX-XXX-XX--XXX--X--", "X--X---X-XXX--X-----XXXX-X-X--XX-X----XXXX---X--XX", "XX---X-X---X--XX--XXXXXX*-X--XXX-XX---X-XX-XX---@X", "--X--X*X-XX-X----XXX-XX-X-XXXX---X-XX-X--XXXX-XX-X", "X-XX-----------X-X--X---X--X---*X-*X--XX--X-----XX", "--X--XX-XXX--XXX-X-X-*-X-XXXX-X-----*----X-X----XX", "X---XXXX--XX-XXX-----X--------X-XX---X--XX--XX--XX", "XX----XX-X-XX----X--*-XXX-X-X--XXX-X--X-----X----X", "--XXX--XX---XXX----X--XXX-XX--X-X-*----XXXX-X-----", "-XXX-X-X---XX-------X---X-X---XXXX---X-X-XX--XXXX-", "-X----XXXXX--X-X--X-XX-X-XXXX---*X----X----XX-X-X-", "-XX---XX----XXXX--X--X-XXXX--XXX---XXXX--XX-XX---*", "XX-X-XXX-XX-XXX--XXX-XXX-X-XXX--*--XXXXXXX-X---X-X", "---X--X--XXXXXX-X-X-X-XXX--X-XX-XXXXX-XX-*X---X-X-", "-XXXXXX-X-X-------*X--XXXXXXXXX-X-X-XXX-XX-XXX--X-", "-----X----X-XXXX-XXX----------XX-X-XXXXX---XX-X--X", "XXX-XXX-X---*---X-XX--X-----XX-XXX-X-XXX-XXXX-XX-X", "X---XX-X-X-X-XX-X--X-X---X--XXX-XXXX-X-XXXXXX-----", "XXX-X-XXX---X----X--X*---XXXX----------X-XX-XXXXX-", "-X-X-X--XXXX-XXX-XX-X----XX----X--XX-*XXX-XXX-X-X-", "---X--X-X-X--X-----XX-XX-X---XX--X--XX-XX-X-X----X", "-X--X-X----------XXXX-XX-X--XXX--X------X-XX---X--", "-XX----XXXX-------X-X--XXX-XX--XX-XX-X--X-XXX--X--", "X*XX-XXX-X-*X--X--XX--X-XX-X-XXXXXXXXX-X-XXX*-*X-X", "---XXX------XX---X-X---X*-X-X--X-XXX-X-X---XX-X--X", "X-X-XX-XX--XXX-X-X-----------XXXX---XX-X--XXXXX-X-", "-XXX----X-XXXX---X-XX--XXXXX--XX---X--XXXXXXX-X---", "XXXXXXX*-XX-XX*-XXXX------XX-X-XXXXX--XXX-X---XX--", "XXXX--XX-X-XXXX----XX--X--X-XX-----X-X-XXXX--X*-XX", "XX----X-----XXX--XXXXXXX-X-------XX-XX--XX-X--XXXX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> theMap = {"*-XX---XXXXX---X-XX-XXXX-XX--XXX--XXX*XX--XXX--*-X", "X---X--XXXXXXXXX--X*XXXXXXXX--XXXX-X-XXXXX--XXX---", "-X-X-XX---X-----XXX----XXX-X-XX--X-XXX-X--X-XX-X--", "X-XX--X-X----X--X----X-XXX--X--X---XX-XXXX-X--X--X", "*X-XX-XXXXXXX--XXX--XXX--XXX--X-X-XXX-XXXX----XX-X", "XXX--XXX--X-XXXX-XX--XXX-X-XXX-X-XXX-X----X--XX--X", "X---XX-X--X-X---XX-X-XXX---XX-X--X--XXX--XX-XX-X-X", "XX--XXX--XXXXX-XXX---XX-X-XXX-X-*XXXXXX--XX-X---XX", "--XX----XX-X--XX-XX-XX---X-XX-X----X---XXX-X--X-X-", "X----XX--XX--XX---XXX-X-XXXX---XX-XX--XX-XX-*X-XX-", "-XXX-X-XXXXX-XX-X---XX--X-X--XX*-XXXXXXX-X-XXX-X*-", "X-----XX---XX--XXXX---XX-X---X----X-X----XXX--XXX-", "XXX-X-X---XXXXXXXX-XXXX--XXX-X-X--XXX-XXX-----XXX-", "XXX--XX--X-XX--XX-XX-XX------XXX-XX-XX---@X---X-X-", "-XX--X*XXXXXX-X--X-XXXXX-XX--X--*X-XXXX-XXX---XX-X", "---XXXX-X-XX-X---XX-X-----X-X---------X-XXXXXX-XXX", "X---X--X-XX---X----X--XX-X-----X--XX-XX-X--X-X-X-X", "XXXXX-XX-XX-X--XXX-XXX--X--X---XX----X---X-XX--XX-", "---XX-XXX-X----XXX-XXX--XX-XX-X-X---X--X-X------X-", "XXXXX---X-XXXXXXXX---XXX-XX--X-XX-X-X--X---X--XX-X", "XXX-XX---X-XXXXX-XXX-X-X----X--XXX--XX-XXX-X-X----", "-XXXX-X--X-X--XX-XXX--X-X*----X-XX--XX--XXXXX-XXXX", "XXXXX-XX---X**X-X-X-XXXXX-X-XX---XXXX-X---X-------", "----X-XX-*----XX-XX--X----XXX-X-XXX-XX-X--XXX--XX-", "-X-XXX-XXX-XX-XXX-----XX-XX-X-XXX-X-X-X-----*-X---", "--XXXXXX-----X--XX--XXXXXXXXX-X-X-X-X-X--X-X-X-X-X", "XXXX-X--XXX-X*------X-XX--XX-X--X---XX---X----X---", "-X-XXX-XX--X-XX--XX-XX--XX--X-X-X---XX----*XXXXX-X", "X------X---XX*X-XXXXXX-X--XX-X--------XXXXXX-X----", "-XX-XXXXXX----X-X---X-X--XX-XXX-----XX--X-XXX-X*XX", "X-XXX-X--X--XX-X-XXXX--XX--X-XX-XXX-XX*-X--X-X-XXX", "XXX--XXXX----XXXX-X*X--XX--XXXXX-XXX-X-XXX-XXX-X-X", "--XXX----XXXXX-X--X--XXX--XXX--XXX--XXX-X--X-X--X-", "X*--XX-----X--XX---X--X--XXX----XXX-XXXXX--X----XX", "X-X-X-XX-XXXX-X-X--XX-X--XXX-X-XX-*XX-X-XX--X--X--", "-X--X-----*XX*XX--X-X-XX--XX-XX-----XXXX-------XX-", "-XX-----XX-XX-X-XX-X*XX-X-------XXXXXX-XX-X-X----X", "XXX-X-X-X--X--X-XX-X--XX-X-X-XXX----X-X-*XXX--XX-X", "-XX--X-----X-X----XX--X--X---XX-X--XX----X-X--XXX-", "---X------X----XXXX-X--X-XX-X--XX----X-XX*---XX--X", "XXX--XX-X--XX---X---X-XXX----X-X--XXX-XX--X--XXX--", "XX-XX--X-XX-XXX-X-XX-X---X-XXX--*----X-*--XXX--X--", "X-X-X--X-X--X-X-----XXX---XXXXX-XXXX-XXX-X--X-X-XX", "XXXXX--XX-X---X-----XXXX--X-XX-X--X---XX-X--XX-XX-", "X---X---XXX-XXXXX---XX-XX-----XX-X---X-X-X-X-XXXX-", "X-X--X-XX-X--XXXX-XXX-X------X-XX---XXXX--XX-X-XX-", "-X--XX---X-X-X-X---XX-XXX-XXXXX-XX-XXX----X----XX-", "X--X---XXXXXX---XX-XX---XX-XXX--XX--XX--X-X-XX-XX-", "-----XXX--XX--XX-X-X-X-XX--XXX-XX-X--XXXX----X---X", "--XX---X-X-XX-XX-XX-XX-X----X---X---XXX-XX---XX-XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> theMap = {"XXX-XXXXX-X-----XX-X-X-XX-X-XX-----XX--XX--X-XX---", "XXX-----XX--XX---XX-X---X---XXXX---XX-X-XXX-XX-X--", "XXX*X--X-XXX--*--XX--X-XX-X-X*X*XX-XXXXX-X--X-X--X", "X*--X-XX--X-XXXXX-XX-XXXXX-XX--XXX-X--XXXX--XX----", "XXX------XXXX----XXX-XX--X--X--XXXXX-X-*------XX-X", "XXXXXXXXX------XX-XX---X-X--X-XX-X--X-X-XX---X-X-X", "--X-XX---XX--X---XX--XXXXX-XX--XX--XX--X-----X-XXX", "XX----XXXX-XXXXX-X-X---X-XX-XX-X-X--X-XXXX---XXX-X", "XX---X--XX-XXX-X-@X--X-XX-X-XX-X--X-XXXXX-XXXX-X--", "-X-X-XXXX---X---XXXX--X-X---X-----X-XXXX-----XX---", "-X--XXXXX--X-XX-XXX-----X---XXX--X-X------X-XX-X-X", "X-XXX---X-X-X-XX--X-X-XX-XX-X--X-XX-XX---XX-X--X--", "*X--X-XXX--X--X--XX--X-X-XX-XXXX--XX--X-X-X---XX-X", "X-XXX---XX-XX-X-XXXXX-XX-*XX-XXXXXXX--X-XX--XX-X--", "--XX-XXX-XX--XX-X-X--X-X-X-XX--X----X-X-X---XX-XXX", "-X--X--X-XXX------XX-X-X-X----X-XX-XXXXX-X-------X", "----XXX--X*-X---XX--X---XXXXX----XXXXXXX----X-XXXX", "-XXXX--XX-----XXXXX--------XXX--X-XX----X*--X-XXXX", "--X---XXXXXXXXXX-X--X-X--XX------XXXX--X-X-XX-XXX-", "X---XXX----------XXXXXXX-X--XX-X-XX---X-X-XXX---X-", "XXX---XX--XX-X--XXXXX--X-----X--XX-XXXXX--X-X----X", "X--XXXX-X-X-X--*X----XXXX---XX--XXXXX-XX-XXXX*--X-", "-XX---XX--XX-X--X-XXXXX--XXX-XX-XXXXX-XX-XXX--X-X-", "--XX--X---X--X-X-----X-XXXX--X-*-X-X---X----X--X-X", "--X----XX-X--XX--*X-XXX-X---XXXX-X-X-XXX-XXX-XXX-X", "XXX--X-*XX-XX-XXX----X-X-----XX--XX-XXXXXXX-XXXXXX", "XX-X-XX-XX-XXX--X---XX-XXXXX--X-X-X--XXX--XXXX*---", "XX---X-XXX-X-X-X------XXXXX-XX----XX-XX-*X-XXX-X-X", "*-XXXX*XX-XXX------X-X---------XXX-----X----X---X-", "X-X--X--XXXXX---XX-XX----XX--X--XX-XXX-X-X--XX-X--", "-XXX--X-X----------X-XXXX-X*-------X---X--XXXX-XX-", "-----X-XXX-X-X-X---X----XX----XXX-X-XXXX--X---X-X-", "XX----XX---XX----X-----XXXX--XXXXXX--X-X---XX-XXX-", "---XX--XXX-XXX-----X--X-XXXX--X-X--X---XX----X---X", "-X-*-X---XX----------XXXX--X--X--XX--X--XX-XXX--XX", "X-*XXX----X-X--X-XXX---XXXXX-XX--X-X---XXXX--X-X--", "--X-XXX-XXXXX---XX--XXXXX-XX----XX-X--------XXXXXX", "XXXXX-X--XXX-XX---XXX--X-----X---XX----X---XX--X-X", "X--XX-X-X--XXXXXX--XX-XX-X-*-XX-X-----X--*-----XXX", "--XXX-XX-XXX---XX--X-X--X-X-XX--XXX-X-X-XXX-XX--XX", "-XX-XXX--X-X---X-X--X-XX-XXXXX-----X-XX--XX---XX-X", "---X-XXXX-XX-X-X--XXXX------XX-XXXXX--XXXXX--XXX-X", "--X-XXX-X-XXX---X--XXX-XXXXX----X-XXXX--XXXXX-X-XX", "-XXXXX----X--XX--X-X----X-----X-X-X-X--XXXXXX*XX-X", "-XXX-X-X--XXXX-X----XX-X-*X---*----X-X--X-X-X-XX--", "X-XXX-XXX---X---XX-XXX-X-----X-*X-XXXXX*----XX----", "XXX-X-X-X--X--X--*XX--XX-XX--X----X-X--XX-X-XXX--X", "--XXX---XXXXXX--X-XX--X-XXX----X---XXXX-X-X-XXXXXX", "---XXX-XXX----X-XX---X-XX--XX----XXXXXXX-XXX------", "---X--X--X-XX--XXXXXX---X-XX-XXXX---XXXXX--X-X---X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> theMap = {"X--XXXX-X----XXXX--XXXXX---X---XXX--X-X-XX-XX--X-X", "X-XX-X--X-XXX--X--XX*XX-X-X-X-XXXXXXX--XXXXX-----X", "-X-XXX--X--X--XXX-XX-X--XXX-XXXX------X--X--XXX--X", "XXX-XXXXXX--XXXXX-XX---XX--X-X---X--XXXX---XXX-XX-", "----XXXX----X-X-X-------XXXXXX-XXX--XXX--XXXX----X", "--X*--X--X---X-X-XXX*X--X-XXXX-X-X--X-XX---X--XX--", "-XXXX---X-XX--X--*-X----X-X----XXXXX-*-XXX---X--XX", "XXX--X--X------X-----XXXXXXX-X--X-X----X---XXX-X-X", "-*--XXX*-X--XXX----*XX-XXX*--XX---XX-XX-----X--*X-", "XXXXX-XXX-XX-X-X-X--XX--X--X-X-XX----XX-X--X--XXX-", "X-X---XX-XXX-XXXXX----X-X-XX-X--XX-XXX-----XXX--XX", "--X-XX---XX---X-XX-XX--XX-XXX-XX-XX--XX--X-X--*XX-", "-X-------X*-XX---X----X---X-XX*X---X-XXXXXX--X----", "X-X-----XX--X-X-X----XX----XX-XX--X-X--X---X-XX---", "X-X---XX-XX--XX-XXX-XX---X---XX--XX--XX-----X--XXX", "XXXX--XXX---XX--XX--X-X-XXXXXX----XXXXXXXXXXX-XXX-", "-XX--X--XXX---XX-X----X----X-XXX-XXX-X--XX--XXX-X-", "X--X--XXXXXXXX-X-XX-XX--X--XXX*X-X-X-XXXX---XXX-XX", "X----XXX--XX-XX--X-X----X--XXX-X-XX----X----XX-XXX", "-XXXXX---XX----X-X-X--X--------XXX--X-*-*XXX----X-", "---X-X-XX-----X-----XX--XXXXX-XX---X-X-X-X--XX-X-X", "---*X-XX--X-----XXXXXX-XX-X-X-X-XX--X-------X--XX-", "XXXX-XXXXXXXXX-XXX-XX--X-X-XX-X-XX*-XX--X-XXXX--XX", "--XX--XX-X-X-XX--X---XXXXXXXXX-XX---X-X-XXXXXX-XX-", "-------XX----X-XX--XX-X-XX---X-X----X---XX----XXXX", "XXXX-XX-XX--XXXX----X-XX--XX--X----XX--XX--XXX-X-X", "X-XX--X--XX----X--X--X--X-XXXXXXX-X--XXXX-X-XX--X-", "---X-XX--X--X-XX-XXXX-XX----XXX-X-XXXXXXX----XX-XX", "-XXX-XXX-XX--XXXXXXXX-*X--X-XXX-X--X-X------X-X---", "--XXXXX---X-XXX---X-*-X-XX--X-XX*X--XXXXXX-X-X-XX-", "XXXX-X--XX--XXXXXX--XXXXXXXXX-----X----XX-X-XXXX-X", "-*--XX-X-XX--XXX*X--X----X---X-XXXX*XX-X-XXX--X---", "XXX------X-XX-X--XXX-XX-XXX-X-X---XX-XXX--XXX-XX--", "XX----XXX----X-X--X-XXX---XXX-X-XX---X--X-X-X-XX-X", "XXXX----XXXX--X----X--XX---XXXXXXXX---X-X--XX-X-XX", "*-XXX*-XXXX-XX------X---XX-XX-XXX-XX-X-X-XX-X-XXXX", "XX--X-X---X--X---X-XXX-X----X-X-X-XXXXX-XX-XXX--XX", "X----XX-XX-XX---XXXX--XX-X---X-X-XX*-------XX---XX", "X----X--XX----XXX---XX---X-XX-XXX-X-----X-X-XXX-X-", "*XX-XXXXX--XXXXXX--XX-X*-X----X-X-X---XX-X--X-XX--", "--X-X--XXXX-XX-XXXX-X-XX---X--XXX-----X--X-X--XXX-", "XX--X-XXXX-X-XXXX--X-XXX----X---X-X-XX-XXX--XX----", "---X--XXXX-X-XXX-X-XX---X-XXX-XX-X--XXX-XXX--XXX-X", "XX-XXXX-X--X---XXX-XX-XX--*X-----XX-XX-X-X--X-XXX-", "----XXX-----X-XXX-XX-X-X-XXX---X-XXX-----XXX---X--", "------X-X---X-XX-XXX--XX---X-XX-X-X--X--X---XXX---", "-X---XX-----XXX-X-*X--XXXXX-XXXXX*-------XXXXXX--X", "-X-XXXX----X---XXXXX-XXXXX-XX--XXX-X-XX-----XXX--X", "-X-X@--XX-XXX--XXX------XX-XXXXXXX--*-X--XXXXXX-XX", "XXX-X--XXX---X--XXX-X-XXX--XXXXX--X-XX--XX-XX-X-XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> theMap = {"XXXXXX-X----XXXXX-X-------XXXXX*-XXX-XXXXX--X--XX-", "X-XXX-*--XX-XXXXX----XX-XX------X-X-X-X----XX-XXX-", "-XXXX-XXX-XXXXXX-----XX*-X-XXXXX-X---XX--------X-X", "X--XX-X-----XX----X-X-X-XXXXXXXX---X--XXXXX--X-XX*", "-X-XXXX--X--XX-XXXX-X-XX-XX---X-XXX--X---------XXX", "X-X----XX-XXXXXXXX-X-XX--X-X-X--X---XXX-X-X-X-X-XX", "-X-XX-X-XX--X-X---XXX-X---X--X--XX-----X-X-X-X-XXX", "X-XX-X--XXX-XX--X-XX-X-X---X--XX--X-XXX-X-X-XXXXXX", "---X-XX--X-XXX---XX--XX--XX----X-X---XX-X-X-X-XXXX", "---XX-XXXXXX-X-X-X--XXX-X--XX----X--XXX-XXXXX--XX-", "X-XX---XX-X--X---X--X-XX--X--X--X-X-XX-X-X-X--X-X-", "--X-XX--X--XX---XX--X--X-X-X-XX-----XX----XX-X-X-X", "XXXX-----XX---X-XXXXXX-*X----XX----X-X------X--XXX", "XX----XX-X-X-X--X--X----XXX----XXXX-X-XXX-XX-X-XXX", "-X------XX-XXXXX--XX-X--X---XX-------X---X--X--X-X", "XXXXX---XXXXX--X-XX-XXX----X-X--XX-XXXX-XXX--X--X-", "-X--XXXX--XX-XX----X-XX-XXX--X-XXXXXX--X----XX-X-X", "X-XX-XX-X-XX-XX---X-XXXX--X---X-XXX-XXX-----XXXXXX", "---XX-XX-X-X-X--X-XX-X--XX---X-XXXX-XX-X-X----X-X-", "-XX---X-XXX---XXXXXX-XXX----XX-X-X-X-XXX---X--XX--", "---XX--XXX-X-XXX-*-X-X-X--XX--XX-X---X-X--X---XX--", "XXXXXXXXXXXXXXX-X----XXX---X-X-X-X--X-XXXX-XX---XX", "X-----X-XXX--X--XX-XXXXXX-XXXX-X-XXXXXX------X-X--", "--X--X-X-X------X-XX@--X-XX-X--X---X---X--X---XXX-", "-XX--XXX--X---XX-XXX----XX--X-XXX--X-XX-XX-XX--XX-", "-*-XXX-X-X-----X--XXXXXXXX-X-X-XXXXX--XX-X--XX--XX", "X-XXXX--X-XX--X-XXXXXX-----X-X----X-X--XX-XXXXXXX-", "XXX-------X--XXXXXX-XX*--XXXXXXX------X--XX-X--X-X", "--X--X-XXXX--X-------X-XX---XX-X--X-----XX-XXX-XX-", "X----XXXXX-X-X-X-X-XX-X---XX---X-XXXXXX-----X-X---", "XXXX-XXX-XX-X---XX--X-X-----X--XX----XX----X-XXX--", "XX-XX-----X-XX-*XXXX-----X--X-X-X-XX---XX---XXXX-*", "X-XX--X-----X-XXXXXX*-X-XX-X---XX-X-X--X------X-XX", "XX--XX--X--XXXXX--XX-X-XX----X-X--XX-X-X-X-X-X--XX", "--XX--XXXX-XX*XX--X-X--X-X-X-X-X-X----X--XX-XX---X", "----X-XX-XXX---X-XX----X-XXXX-XXXXXXX--XX-X-X--X--", "X---X-XX-XXXXXXX*X-XXX--X-X-XX--*XX--X-XXXXX-----X", "---XXXX---X-XXXXXX-X-X-X-XXX--X-XXX--X-X-X---XX-XX", "X--X-XX*---XX-X-X---X-X--XX------XXXXX*XXX-X-XXXXX", "---XX-X-X-XX------X-*X--X---XX---XXXXX------------", "-XX-XX----X-XXX---X-X--X-X-X------XX--X-X-X--XX---", "---XX-X--XXXXX-XX-XX-XX----X-XXXXXXX--X-X----X--XX", "X-----XXX-X-XX-X--X----X-XXXXX--XX----X--X-X--X--X", "XXX-X--X-X-XX*X--X---X-XXX-X-XXX-X-XXXXX----X--XXX", "---X-X---XXXXX-X-X-XX----X-XXXXXXX-X----XXX-X-X--X", "-*X---XX-*X--X---------X---X--X-X-X-X-XXXXXXXXX--X", "-X------X--------XX--------X-X-X-X--XXX-X---XXXXXX", "-X-XX-X-X*-XXXXX--X-X--X--X--XXXX--XX-X--X--------", "-X--X-X--X-XXX--X---X--X----XX-X-XXX-XXX-XXX-XXX-X", "--X--X-XX--XXXX-XX-XX-X-XX--X---XXX---X-X--X-XXXX-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> theMap = {"X----*X-XXX-X-X--X-XX-XX-XXX-X--X-XXXXXX--XXX--X--", "XX--X-X--XXXXX-XX-X-XXX-XXXX-X*X--XXXXXXXX-X-XXX--", "XXX-X-XX-X-----XX-X-X--XX---XXX-------XX---X--X-XX", "X-X----X--X----X--X-X-X-X-X-XXXXXXX--X-XX-X-----*X", "-----XXX----XX--X-X--X----X-X-XX----X---X----*-X--", "-*-XXX-XXXXXX--------XXX--X--XX-----XX------X-XX--", "XX-XXX--------X----XX---X---XX-X---XXXX---X----XXX", "-XX-----XXXXXXX--XXXXX-X--X-X--X--XX-X--XXX-XX-XX-", "-XX--X-X----X-*XX--X-XX-X--XX-X-X--XXX---XXXXXXXXX", "X-X-XX----XX---X--XX-X-X-X--X-X---XX-XXXX*-X----XX", "-XXX-X-XXX-XXX--XX-X-XX-----XXXX-X--XX-*X-----XXXX", "XX---X-X--XX-----X-----XXX-XXX-XX-XXX-X--X--XXX--X", "--X-*X-*-XXX-XX-X-X-X---X-XX--X--X-XXX-XX-------X-", "X---X-XX----XX*X--XX-*-X-X-XX---X-X-XX-XXX---X*X-X", "-X-XX-XXXXX-*--XXX-XXX------XX-XX--X--XX-X*XX--XXX", "X--XXX-XX--XXXXXX--XX-X-X-X-X-X-X-XXX-X-X-X--XX-X-", "-X-*--X--XX-XXX-XX--XX-X-X-X----X-X-XX-XX-X------X", "XXXX-XXXXXXX-X----X-XX-XXX-XXXX--X-XX--X---X--XX--", "XXX-XXXX----X--XX-XX-XX-XXX--XX--X--X-X---X-XX-X-X", "-XX-X--X--XXXX-X-X-X--XX-X-X--XX-X-XXX--XXX-----XX", "-XX-XXX---XXX----X-XX-------XX--X@--XXX----XXXX---", "---X----XXX-X-XXXXXXX--X--XX--XXXX-XXXX-X-XX-XXXXX", "-XX-XX--XXXXXXX--XX--XX----XX-XX-X-X--X--X-XX-----", "--X-XX-XXX-XXXXXX-XXXXX--XXXXX--XXX---X-X-X-XXXXXX", "---X---X-XXX-X-X-----XX--XXX-----XX--X---X----X-X-", "XXX------X--X----XXXX-X--X-X-XXX---X-X-X-X--*X---X", "------XX-XXX-X---XX--X--XXXX-X-XXX-XX--XXXXXX--XXX", "-X-X-X--XX-XX----XXXX-XX-X----X-XXXXX-X-X-XX-*-XX-", "X-XXX-X-XXXXXX-XXX-XXX--XXXX-X--XXXX-XXXX-X-X---XX", "XX-X--X--XXX-XXXXX--XX----XX-XX-X-XX--X-XX-XXXX-X-", "X-X-XX-XX----*--XX-XX--XXXX--XX-----X--X-XX--XXX-X", "X--X---X--X-X---X--XXX----XX---XXX--XX-X--X-XX----", "XX--XXX-XX-X*-XX-----XXXX--XX*X-XX-*-X---XX------X", "-XX----X---XXXX---XXXX-X-X----X-*X*-X-----X---X---", "XXX--X--X-XX---XX-X-----X-XXX*X-X-X-X-X--XXXX-XXX-", "---X----XXX-X-X-X--X---X-*--X--X-X------X-X----XX-", "-XXX-XX---XX-XX--X*XXX------X*X-XXX-X-X--XXX------", "X---X-XXXXXXX----XX---X-XXX-X--X--XXX-----XX-X-XX-", "X--*XXXXX---X----XXXX-----XX--XXXXX-X--X-X---XXXX-", "X----X-XXXX-X-X-XXXX--XX*---X-XXX--XX-----X-XX-XXX", "XXXX-X*------X-XXX-------XX--X--X--X-X-X--X-XX-XXX", "----XXXXXX-X---XXXX--X---*-X---XXXX--XXX-XXXXXX-XX", "----XX---XXX-X--------*-X-X-XXXXXXXXXX-XXX--X--X--", "XXX--XXX--XXXX-XX-XXX---XXXXXXX--XXX---X-XX-XX-X--", "X-X-XXXX-XXXX-XX-XXXX-X-X-XX---X------XX-XXX-X-XX-", "*X-X----X--X-X-X-XXX-X--*XX----XXXXX-X----X--X----", "-X-X-X-XXXXXX-X-XXXX-X-XXX-X--XXX-XXX--XX-X-XX---X", "--X-X-----X*--X--XXXX---X-X-X-XX-XXX-XXXXXX-XX-X-X", "XXX-XXX-X----X---------X--XXXXXXXX--XX--XX--X----X", "----X-*XXXX-XX-XX-X-XXXX-XXXXXXXX-X-XXX----XXX-X-X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> theMap = {"-X-X---X-XXXX---XXXX--X-X--X-X-X-X--X--X---X-X-XXX", "----X-XX-XXXXX--X--XXXXX-----XXXX-XX-X-X-XXX--X--X", "---X--X--XX----X-XX-----X--------XX-*--XX-XXXX-X-X", "-X----XXXXXXXX---XXXXXX--X--X----X-XXX-X-XXXX----X", "XX-XX---X-X*XXX--XXX--XX---XX-X-X-X--X---XXX-XX-X-", "XXX-X-XX-X-X-X--XXX-------XX---XX--X-*-XXX-XXXXX--", "-X-XXX-XXX-X-XXX-XX--XXX--XX--XX-XXX-XX-XX-X--XXX*", "X---X-XX-X--XX--X--XX-XXXX-X-X--X---X*-X-X-X-XXXXX", "-X--X-XX-XXXXXXX-X----*--XX--XX-X-XXX-XXX--X--XX-X", "-X-XXX--XXXX--X-XXX--XXX-X-X--X--X--XX-*XX-X--XX--", "-X--XXXX-XX-X--XX*XXXX---XX-XXX-X----XXX-X-XX*XXXX", "X-X*-XX---X--XX-X---X--XXXXX--XXX----X-X-X--XXXXXX", "-X--XXXX--XX-X--XXXXX-X--X-X--X-X--X---XXXX---XXX-", "XX---X--XXXXX-XXX----X-X--XX---X-X-*--XXXX-X--XXX-", "---X-XX-X-X--X-------X------XX-XXX-XX--X---XX--XXX", "-----X--X---X-X-X--XXX--X--XXX----X--X--X---XXXX--", "X-X-X-X--X--XXXX-XXX-XXXX-X-----XX--X--XX--X-X-X-X", "X--XX---X-X-X--X-*X------X*X-X---X-X-X--XXX--X--XX", "-XX--XXX---XX--X--XX-XX--X-X--*-XX-XXXX-X--XXXXX--", "X-X-----XXX-XXXX--XXXX-XX-XX-XX--X-X-XXXXXXX-XXX-X", "-X-X-----XXXXXX-XXXX-XXX-XX-X-XXX---XX-X-XXX---XXX", "X--X-X--X-X---XX--XXXX-X-XXXX--*XX---XXX-X*-XXX-*X", "------X*-X---X--X-X----XXX--XX----XX-X-X-XX-X--XXX", "-X-X-XXX--XXX-XXXX--X--X--X-XX--X--XXXXXX--X--XXX-", "--------X-XX------XX--X--XXX-X---X*XXX-XX---X-XXX-", "-X--X---XX-X-XXXXX------X-X-X-X--X-XXX--X---XX---X", "-X-XX--X-XXXX--X*---X---XX-XXXXX-X-----X---XXX-X-X", "XXXXX-XX---X-X-XX-X-XXXX--XX--X--XXX-XX-XXX-X--XX-", "XX-XXXX-XXX-X-----XX----X---XX--X-XX-XXX--XXXXX--X", "-XX--XXX--X----X-XX---XXX--X----XXXX-X----XXXX-XX-", "X-X---X-XXX--X-----XXX---X-XXX-X-X---X--XXXXX-X--X", "-XXX---XX--XXXX--XX--X--XXXX-X-XX-XXXX-X-XXXX-XXX-", "XX-XX--X----XXXXXXX-X-X---*XX-XX-XXX----X----X-XXX", "-XXXX-XXXXXX-X-X-XXXX--X-------X-X-X--XX-XX-X---XX", "----XX--X-------XXXXXX-XX-X-----XX-XX-----XX-XX--@", "--X-XX-XXX-XX---X--X-XXXXXXXX--XXX-XXXX-XXXX-XX-X-", "X--*X-XXX-XX-X-X----XX--XX-------XX-X-X---X-XX-X--", "*X-X-X---X-----X--XXXX---XXX--X-*XX-XX-XX---X--XXX", "X-X--X---XXXX-X--XX--X-X------XX-XX--XX-XXX---X--X", "X--X-XXX-*XX-X-X-XXXXXX-X-XXX-XX--*X----XX--XXX-XX", "-XX-X-X--------X--XXX-XXX-X--X-XX-XX-X--XX---*X---", "-----X--XXXX-X--X-XXX-XXX---X--XXXX-XX-XXXXXXX*---", "X-XX-X-X-XX-XXX--X------XX-X-XX--XX--X-XXXX--XXX--", "---X-X-XX-XX--X-XX-X-----X---X-X---X-XX--XXXX-XXX-", "X-X--X----XXXX-X-XX----XXX--X---X-XXX-X-XX-X-XX-X-", "XX-XX---X--X-XXX-XXXX--*X--XX----X----X----XXX*---", "XX-X-XX--X-XXX----XX-XX--X-XX-X*-XX----XXX--XX-X-X", "XXX----XX-X-XXXXXX-*-X---X-*XXXXXX---X--X--X-XXXXX", "-X--XXX--XX--X---X---XXX--X-XX--XXXX--XX-X-X-XXXX-", "-XXX---X-XX-X-XX*XXXX--XX--XXX-X-XX--X-X-X*-XXX---"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> theMap = {"XXX-X-X-X---*X-XX-X-X--X-X-X-X-XXXXXX---X-X-X-XXXX", "XXXXX--XXXX-X--X-XX-XX-X--XXXXXXX---X---XXX-X--XXX", "X---XXXXX*--XXXX----X--XX-XX-XXXXX--X--*X-XXX----X", "-XX--X------XX--XXXX----XXX--X-XXX-XX-XX---XXXXX--", "-XX-XXXXX---X------X--XXXXX-XX-XX-X-XXXX-XXXXXXX--", "X--XXXX----X-X------XXXX*XXX-X-----X--X----XX----X", "X-XX--------X--XX-XXXXXXX---XXX----XXX---X-XXX----", "XX-X---*XXXX---X---XXX--X-XXX--XXX---XX----XX--X-X", "-XX--*X---X-X-----X-XX-X----X----XX---X--X---XXXXX", "------X-X--XX-XXX-XXX-XX-X-XXXXXXXXXX-XXXX-XX-XX-X", "X--XXX--XXXXX-XX-XXXX--X-X-XXX-X---XXX-X--X--X-X--", "-X-X----X---XXXXX-X---*--XX----XXXXXX-XXXXXXX---X-", "X--XXX-XXXX-XXX---XXX--XXXX--X-X--XXXX-XXX-XXX-X-X", "X---XX---XXX-X--X--XX--X--X-XX----XX---X*XX-X-X---", "X-XX-XX-XXX-XX-X------X-X--XX--XX--XXX-X-----XX--X", "-XXX---X--XX---XX---X---XXXXX----XXXX--XX-XX-XXX--", "--XXXX-X---X-XX-XXXXX---X-X---X-X-XXXX-XXXX-XX----", "X---XXXX-------XX-X--XXXX--*---X--X--X-X-XX-X---X-", "X-XX---X-XX---XXXX--XXX-XXXX-XXXXXX-X-X-XXX------X", "-X-X-XXX-XX--X---X--X-XX--X*XXXX-XX----X-X----X-X-", "XX--XXXXXX-----*X-X----X-XX-X-X---*XXXX--X-XXX-X--", "XXXX---XX-X-X-X-X-XX--X-XX-X-X-X--XX-X-X--X-XXXX--", "-----X--X----X-X--X-XXXX-XXXXX---X--X*X--XXXX@-XXX", "-X--XX-X--X---*--X-XX-X-X---XXXX-X--X-X-X-XX---X-X", "XX-XX------X-XXXX-X--X-XXX---X-X-----X--XX--X-X---", "X---XX-XXXX-X-X--XXXX---XXX-XX---XX---------XXXX--", "-X-X-XX----XX-XX--X-X-X--X---XXXX-XXXX---X--X---XX", "--XX-X-X--X--XXXX-X--XXXX*X---XXXX---X----XX-X--X-", "XX-X-X--X--XXXXX---X---XX-X----X---X-X-X-X--X-X--X", "------X---XX-X------XX-X--XXXX-X-X-XXXXXX-XXXX----", "-----XX-XX---XXXXX-X-XXXXX-X-XX---X*-X--X----XXXX-", "-----X--X--------X---XXXX---XX-XX-X--XX-X-XXX--XXX", "-XXX-XX-X-XX-X--X-X-XX--XX-XX-X-X*XX-XXXX-X--X-XX-", "-------XXXX*-----X-XXX*X-X*--X---X---XX---XXX*X-X-", "-X--X--X-XXX-X---X----XX-XX--XXXXX--X--XX-XX--XXX-", "XX--X-X-----XX-XXXXXXXXXXX---X--X---X---XXXX-XX---", "-X-XXX-XXX---X--XXXX--X--X-X----XX-X---*-XXXX*--XX", "XX--X-X-X--XX-X--X---XX---XXXX-X--X-X-XX----XX-X-X", "XXX-XX-XXXXXXX-XX-X-X----X-XX---XX--X-------X-X--X", "X-XXX-----X----X--XXXX-XXX-X-XX-XXXX---X-X--X-XXXX", "--XXXXX-XXXX-X-X---X--XXXXXXXXXXX-XX*XX-*XXXXX----", "X*-XXX-XX-X-XXX--XX--------X-X--XXXX--X-XXXXX----X", "XX----XX--X---XX--X--XXXXX-XX-XXXXXX--X-XX--X-XXX-", "---X-XX-X-X-X-*XX-------X-XXXX--XX-----X-XXXX--X--", "--X--XXXX-XXXXXXX-----XX---XX-XX-X-X---XX-X-----X-", "X--XXXX---X--XX-----XX------XX-------XXX-X--X-X---", "--XXXX-X-X--XX-XXX-X----XX-XXX-X--XX-XX-X-X--XXX-X", "XXX-XXXX---X-XX---X---X-*X---XX--XXX--XXXX--X--XX-", "-XXXXXXX------XX-X--X-X-X-X-XX--X-X-X--XXX--X-X---", "-XXX-X-XXXX---X----X-XXX---X--X-XXX--XXX-XX--XX-X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> theMap = {"X----X-XX----X-----XXXX---XX-----X--XXX-XX--X-XXXX", "-*XX-XXX--XXXX--XXX----XXX-XXXXX-*X-X--XX---XXX-XX", "XX-XX-X--X--X--XX--------X-X---XXX-X--X-X--X--XXXX", "-X--------XX-X-XXXXX---X-X-XXXX-XXXXX*XXX-X-X----X", "X---XXXX--XXXXX---X-X----XXXX-X-XXX--XX-X--X-X-X-X", "X--XXX-XXXX--XXXX-X-----XXXX-XX-XX--XX--------X--X", "X--X-XX----XXXXX---XX----X---XX---X--X-X-XX-X-X---", "-X-X-X--X---X-X-X-XXX-----XXXXXXXXX---XXX-X-X--XXX", "X-XXXX-X----XX---XX-----XX--X-XX-XXX--*XXX---X-X--", "-X----X*-X--X--XXXXX-X-X-X-X-X----X-XXXX--XXXX-XX-", "X--X----XXX-X-X-XX-XXX-XXXX-XXXXX*X-X--XXXX-X---XX", "X-X-XXX--XX-----XX-XX--X--X--XX-XXX----X--XX-XXX-X", "X-X-X-XX-X---X--XXXX-XX-X----XX--------XXXX--XX-@-", "--XXX-X-X-XXXX-X-*-X---XX--X--XX-----X-X--X-X----X", "-X-XX-X-XXX-XXX----X---X---XXXXX*--X-X-XXXX-----XX", "X-XX-----X------XXX-X-X-XX---*--X-XX-X-X-X--XXXXXX", "X--X-XXXX-X-XX-XX----X--XXXXX---X---------XXX--XX-", "X--XXX-XX--XX-XX-X-------XXXX--X------XXX-XXXXXX-X", "-XX--X----XX-XX--XX--X-----XX-X-XXX--X----X--XX--X", "-X-XXX-XXX--X---XX-XXX-X-XXX----XXX--X-*-X---X-XXX", "XXX-X-*---XX-X----X-X-XX---XX-XXXX-X-X--X---X-X---", "--X-X-X---XXX-XX-*---X-*-XXX-X-XX-XX-XXX---X---XXX", "XX-XX-XX--X-*XXXXXX---XXX-----X--XX---X-XX---X-X--", "X--X----XXXXX-----XX----X--XXX-----XXX--XXXXXX-X--", "-*-X-X----XX-X-X--XX--X-XX--XXXXX--X-XX--X-XX-X-X-", "-X--XXX-XXXX----XXXXXXXXX-XX-XXX--XXXXX--XX------X", "-XXXX-X--XX--X----XX---X----XXXXX--XX--XXX--XX*XX-", "-X-X---XX--X---X-X------XXX-X-X---XXXXXXXX-X----XX", "XXXX-X--X--XX-X---XXX-XXX-XX-----XX--X-----XXX--XX", "---XXXXX-X-----XX-----X-XXXXX--X-----X--X-X-X-X-XX", "-X-*XXX------XXX-XXXX-XXX---X-XX-XX-XXXXXX-X--X---", "-X--XXX-X--X-XX--X-X--XX-XX---XXX---XXX-XX---X----", "--XX-XXXX-XXX--X-XX-X*--X--X--XXX-----XXXXXXXX---X", "----X--XXXXX-X-XX-X-XXXXXXXX-XXXX-X---XX-X----XX--", "X--X--X---XX-X-XXXX-----XXXXX-XX---X--X-----X----X", "---XXX---XX-----X-XX-X-X-XX-X-XXX-XX---XXXXX-X---X", "---XXX-XX-X----XXXXXX-XXX----X----X-XXX-XX-X---*-X", "X-XX--X-XX-XXXXXXX----X--X-XXX---X-X-X-X-----X-X--", "XXXXXX---X-X-X--XXXXXX-XX----XX-XXXX-XX----XXX--XX", "-X--XX-XX----XXX---XXXXX*-X-X--X--X-X-XX-X---*X---", "--XX-XX-XXX----XXXXX-XX-*X-X-XX-X----X-XXX--X--X--", "----XX-XXXX-XXXXXXXXX-XXXXX*XXXX----X--XX-X-X-*---", "-XXX----XX---XXX-XX-X-X-XX-*X-XXX-XX-X-XX-X---XXXX", "XX-XX-X-XXX-XXX-X-X--XX---------X--XX---X--XXX-XXX", "X-XXX--X-X--XX-XXXX-X--XX----XXXXXX-X--X---*XX-XXX", "X-XXX-XXXXXXXX--XXXXXX-X--X--X-XX--X---*-*--X-----", "XXX--XX-XX-X-----X----XX-XXX-XX--------XXXX---XXX-", "-X-XX--XXX*X--X-----X--X--XX---X-X-X-X-X-X-X-X-XXX", "X---X-X----X----X-X----XXXX-XX--XX---------XX--XXX", "-X--XXXX-XXX----XXX-X-------XXXXXX--XX-XXXXX-X-X-X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> theMap = {"X-X-XXX-X-*-XX-X--*------X--X-X--XX-X---XX-X-XX-XX", "-X-XX----X---XX-X-XX---X-XX---XX-X-X----XXXXX-X--X", "-XXX-X--X---XX--X--XX-XXXX--X-XX-X-X-X-X-XX-X--XXX", "-XXX--XX--XXX-X-XXXXXX--X-XX--XXXX--X--X--XXX---XX", "--XX---XX-XX--X----XXX-X------------X-----X--X*--X", "XXXX--XXX---XXX--XXX--X----*--X-XXXXX-*X--XX-XX---", "X---X--X-----X--X--XXX-X-XX--XX------XXXXXX*-XX---", "-XX-X-XX----X--XX-----X--X-X-XX--X-X---X-X-X-X---X", "XXX-XX-X--X----XXX--X---X----XX----XXXX--XX-XXX-XX", "X-X-XXXX-X---X--X-X-XX----XX-X--X--X-XXXXXXXX---X-", "-X---XX-X-X-X-XX--X--*-X-------X-XXXXX--X---XX---X", "XXXXX----XXX-X------X*---XX--XX---XX-X-X--XXX-----", "X-X-XXX--X----X-XXX--XXX-XX---*XXXX-XX--X---X-X--*", "--X---*X--XXX--X-XX-X--X---X-X-X-X*-X-X-XX-X-X-X--", "-XX-X-X-X-X-X-XX-XXX-X-X-----X-X---XX-XX---XXX-XX-", "XXX-X-XXX--XXX-XX----XX--X-XXX-X---XXX--XX-XX-X---", "-----XX--X-XX-X--X-X-X--X-------X-XX---XX-XX-X---X", "--XXX-X---XXXX-----XX-X-X*X-X--X---XXXX--XX-XXX-X-", "X--XXXXX--X--X*XX-X-------X-X-XX--XX-XX-XX--XXXX-X", "----X-XXXX-XXX--XXX-X-X---X*XXXXX-X---X----XXXX*XX", "XXX---X-XXXXX--X-X-X*-X-XX--XXX-XX-X--X-XX-XXX-XX-", "XXX--X-X--*XX--XX-XX--XX*-XX-XX------X--X--*---X--", "----X-----X----X-X-X-*X--XX--X-X--XX--X-XXX-X--XXX", "-----XXX---X----XXX-XXXX-X---XXX--XX---X----X----X", "-X-X--X-X--XX-X-X-X-XXXX-X-XXXX-XX-X-X----XXXXX-XX", "XXX*-XX----X-XXXX-XXX-X-XXX-*X---X-XXXX--XXXXXXX--", "X------X-XX-X-XX-XX--X*-X-XXXXXX---XXXX-X--XX-X--X", "-X-X---XXX-XX-X--X----XXX-XXX-X-X-X--X----X--*X-XX", "X--X--XX-XXX--XXXX-X---XXXX--*--X---XXX*XX-X-XXXXX", "-X--X-XXXX-XXX--X---X--XX-XXXX*------XX--X-----X--", "--X---X---XX-X-XXX-X*X--X---XXXX-XX-X-XX---X--XX--", "XX-X---XXXX--XX-X-X-X-XXX-----X--X------*XXX-XX-X-", "XXX---XXX--X-XXX----XX---X-X----XXX-X--XXXXX-XXX--", "XXXXX-XX-X----X-XX-X-XXXXXXXXXXX-XX-X---X--XXXXXXX", "-X--XX-X-X-XX--X-XXX*X-X--X-X--X--X-X--XX-----X-X-", "XX-XX---XX-X--XXXX-XXX--XXXX-X--X--X-X---XXXX---XX", "XX-X--X-XXX--XX-X-XX*XX-XX-X---X-X--XXX--X-XXX--XX", "--XXXXX--X---XX-XX-XX--XXX-X-X-X-------------X--XX", "X-XXXXX-----X-XX--------XX----XXX-X--XX---XX---X--", "--X--XX---X----X---XX-XX--X-X-*---X-X-X-----X----X", "XX-XX-XX-XX-XX-X---X-X-XXX--XX-X-X-X-X-X-XX---*---", "X-XX---X*XX--*XX-XX--XXXXXXX---XX--XXX*XX-X-XXX--X", "---XX-XXX-XXXXX---XXXXX@-XXX-XXXXXXX-XX-XXXXXXXX-X", "XXXX---XXXX-XXX-XX-XXX-XX----X-XX-XX-X-XX--XX-XXX-", "X--X--XX*-XXX----XXXXX-XXX-X-X*-XXX----X----X-XXX-", "-X*X-XXXXX-XXX--XX---XXX---X-XXXX--*----XXX-X---X-", "----X---XXXXXX-*X---XX--X-XX-XXX--X-X--XXXXX-X-X-X", "-X*--------X-XXXX---X--XXXX--XX---X-XXXX-XX---X-*X", "---X-X--X--XX---XXXX-XX-X---XX--XX*XXX--X-X--X----", "---XX----XX--XX-X-XX---X--X-X--XX----X----XXX-X-X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> theMap = {"-XX--XXX-XXX-XXXXX-X--XX-X-XXX-X---X-----XXXX-X-X*", "X---*-XXXX--X--XXXX-X-X-XX---XX------X--X--XXX-XX-", "--XX---X--X-XXX-XXXX-X----X----X---X--XX---XXX----", "X-----XXX-X--XXX-XXXXX----XXXX-X-X--X--XXXX-XX-XX-", "**---X---X-X--XXXXX-X-X-XXX---X-X---XX-X-X-X---XXX", "XXXX-XX-XX--X-XXX-X---XX----X--XXXX--XX-X-X-X-X--X", "-XXXXXXXXX--X----X-X-X-XX-X-X-XX-XXXX-*XX-XX-XX--X", "XXXX-X--XX-XX-X--XXXXXX-----X-X--XXXXXXXX-X-X-XXXX", "XXX-X--XX-XX-X*---XX-X-XXXX---XX--*XXX-X*XX--XXX--", "XXXXX-X--XX--XXXX--X-----XXX--X--XXXX---XXX-XXX---", "-*--X-XXXX--X--X-XX-X----X-XX--XX-XXXX--*-X-XXXX-X", "--XXX--X--X--X-XXX--XX-X-XXXXX--XX-XX-------X---XX", "-XXX--XXXX-----X---XX-XXX-X---X---X-XX-X-X-XX-X--X", "XX-XX-XXXX---X-*-XXXXXXX-X-X-----XXXXXXXXXX-XX--X-", "XX---X-X-X-XXXXX-XX---X-X-X-X-XXXX*---XX--X---X-X-", "-X-XXX-XX-X-X-X------X--X--XXXXX-XXXXXXX--XX-X--X*", "XXXX-XXX--*--XXX---X------X-XX-XXX------X---XXXXX-", "XX-XXX-X-*X----XX---X-X-----X--XX-X--XX----XX--X--", "-X-XXX--XX---XX-X--X-----X-X-------XX----XX-------", "----XXX--------XX--XXX-X-X-X--X------X---X--X--XXX", "XXX-XX-----X-X--XX-X----XX-XX--X--X---X-XXXX--XX-X", "--XXXXX--XXXXXXXX-XX-XXXX--X-X--XXXXXX--XXX---X-X-", "--XX-XXX--XX---X--XXX-X-----X----XXXXX-XXXXXXX-X--", "X-XXXX-X---*X---XXXX-XX--XXX-X--XX-X---X---X-X--XX", "-----XX--X-X---X--XX--XX-X-X----XXXXX-X---XXXX-X-X", "XX--XXXXX*XXXXXX--XX-XXX-X-XX-XX-XX--XX-X---XX-XXX", "--X----XXX-X-XXX-XX--XXX-XXXXXXXX--X--X--XX----X-X", "-X---X--X--XXX-XXX--X--XX--X----XX---*-XX*XX----XX", "-XX-X-X--XXX-X---XX-X-----X--XX-X-X-X-X-X-X----X-X", "--X-X--X-XXX-X--XXXX-X-XX-----X-X-X-XXX-X-X-X-XX--", "X-*-X----X---XXX-XX-XXXX--XX-XX-X-XX-XXXX-X-X-X-X-", "--XXXXX--X--XX-XX-X-X--X--X-X---XX--X-X--X-X--X--X", "--XX-XX---X--XX-X-XXX---X--X--X-XX------XX---X-X--", "--X--X--XX-X---X-XX-X---X-X--XX----XX--X--XXXXXX-X", "X-XX--X----XX-X----XXX-------X---XX--X-XXXX---X--X", "X--X-*X-X-----X-XXXXX--X-XX-XX---XX-XXX-XX--XXXXX*", "X-X-------X-XX----X---X---XXXX-X---XXX----X---XX-X", "*XX---X-X-X-X--X---XXX-X-XXX-XXX------X--XXX-XX*X-", "--XXXXX--XX--X-XXXXXX-XX-X-X--XX-XXX-----XXXXX----", "-X-----X-X-XXXXXX-XXX--X-XX--XX----X-XXXXX-XXX--X-", "XX-XX---XX----X-X---X-XXX-XX---@-X-X-X--XXXXXX--X*", "-X-XXX-X---XXXXX-X---XXXXXX-XXX-X------XXXX-XX-XXX", "---XX---X--XX---X------XX--XXXXX-XXXXX---XX-XXX-XX", "-X--------XXX--X-XXXXXXXXXXX-X---XXXXXXXXX--*-XX--", "-----XXXXXXXX-XXX--X--*X--XXXXXXXXXXX-XXXX-XX--X-X", "XXXXXXXX-XXX--X---X---X---X---XXX--XXX----*-XX--XX", "--X--X--XXXXXX-XX-----XX----XXXXXXXXXXX-XX-------X", "----XX-XX--X-XX-X--XXX----XXX-XX---XXXXX--X--X---X", "X-X--X-X----X---X---XX-X---XXX--XX-X-X----X-------", "X-XXX*-X--XXX-X---X---X-X-X-XX*X-X-XXX-X-X-X-X--X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> theMap = {"----X-XX--XXXXXX--XX-X--X-XX---XXX-X---XX----X--XX", "X-X-XXXXX---X-X-----XX-XX-----XX-X--X-X-X---------", "X-X-X----X-XXX-XXX*XX-X---XX--XXX-*XXXX--X--X*XX--", "-X-XX-XXXX--XX-XX-XXX--X-X--XX-----X--X-XX---X--XX", "X-XXXX-X----XX--XX-XX-X-XX-X--XXXXXX--XXXX-*--X-X-", "--X-X--XX-X*---X-X-X-XX*X-----X-XXX--XXXXX-XXXXX-X", "--XXXX----X-X---XXX-X-X*---X--XX-X-X---XX-XX-----X", "X--XXX-X-X-XXXX-X-XX-X-X-XXX--XX-X-X-XXXX------XXX", "---X--XX-X-XXX--X-X-XX--XXXXX---XX-X--XXXX-----X-X", "XX---XXXXXX-XXXXX--XXX-X-XXXXXX*XX-XX-XX--X-XXX---", "-----X*-X-*-X-X---X--XXX----XX--XX--X-XXXX*X------", "-@-XXXX-XX-XXX--XXX------XXXX------XX--X*--XX-X--X", "-X-XX-X--X----X-X-X----X---X--X---XXX--X-X-X---X--", "XX--X---X--X--X--XXX-----XXX--X-X--X-XX----X--X-XX", "-XXX-XXX----XXXX---X-X-XXX-XXX--XX--X-X--X-XXX-X--", "-XX-XXX-XX--X--X-X--XXX--X-X-*XXXX-XXXX--XXX------", "XXX--XX-XXXX-X-X-XXXXXX-X---XX----X-*X----X-XXXX--", "-XXX-X-X--XX-XXXX--X---XXXX--XX-XX--X-X-X---XXXXXX", "--XX-XXX-XX-X--XXX--XX-XX-XX-X-X-X-X-X------XX---X", "XX-X--XXXX-XX-X--XXX-XX-X-XXX-X-X---XX-X--XX-X*X--", "XX-X-X-X-X---X-XX--X-XX*XX-XXX-X--X--XXX---X-X-XX-", "XX--X-X--X-XXXXXX-XXX--XX-X-XX-XX*-X--XX---XXX---X", "XXX-X-X-XXXX-XX-XX--XX-X--X*X-XXX--X-XX-X----XX--X", "XXX--XXXXX-XX-X--X-XXXX----X-XXX-X----X---X-------", "-XXX-XX---XX-X-X-XXXXXX-XXXXXXXXXXX*XXX--XX-X-X-XX", "XXXXXXX-X---X--X--X--XXXXX-*-X-XXXXXXX---X--X-X-XX", "X-X-XX--XX--XX---XX--------XX-X-X---X--X-XXXX--XX-", "XX-XX-X---XX-XXXXX-XX------XX-X--X*X-XX-XXX-XXX--X", "XX-*XXX--X--X-XX-X--XX--XX-XX--XX-XX-X-XXX-XXXXXX-", "X-XXXXX-XX---XXX---X-X-X-X-X--XXX-XX---X-XXX-*XXX-", "XXX--XX-X-X--X-XXX-X---X-XXXX--XX-XX---XX--X-----X", "XX-XX-XXX--XXXXXX-X-X--XXX--X-X-X-XXX-XXXX-X-X-XXX", "-X--X--XXXXXXX------X--XX-X--X-XXX-X----X-X-XX-X--", "----X-X*XXX-X--X--XXXX-XX--X-X-X---XXXXXXXX--X--X-", "--XXX-X-XXXX-X--XX-X--X---X---XXX-------*-XX-X-XX-", "XX-X-X-X--XX-X---XXX----X-----X-X-XXX-X--X-X----X*", "XX-X-XXX--XX-X-X-XXX-XXXXXXXX----XX-XX-XX----XX-X-", "XXXXX-XXXXX-XX--X----XX-X---XXXX-XXX---X---XXXX--X", "XX--X--X--XX---------XXXXXX---X-X-X--XX---XX-X-X--", "X---XXXX--XX-*X-X--XXX-X--X-X--XXX-XXXX----XX--XX-", "--XXXX---XX-X-XXX--XXXX-X---*XX---XX-XXX--XX-XX*XX", "-----X----XX--X--XX-X--X--XXX---XX--X-X--XX-X-X-X-", "X--X-X------X---XXXXXXXXX-X-X--X--X-XX-XXX--X-X---", "XXXX--XX---XXXXXXXXX-X----XXX--XXX-XX-X---XXXX--X-", "--*---XXX-XXX-XXXX-XXXXXXXXXXXXXXX-X-XXX-X-XX-XXX-", "X-XXXX-----X--XX--X--X-XX-XXXX-XX--XXXX-X-XX-XX-XX", "-X--XX-XXXXX---XX--XXXX-XX--XXX-X-XXXXXXX-X------X", "-XXXXXX-X---X*----X*X-X-XX--X-X-----XX-XX----XX-XX", "X*XX-XXX-X---X--X-----X-XXX-X--X-X--X--X-X---X-XXX", "--XXXX--X-X-XXX-*X*-X--X---XX-XX-X-X-XXX--X-X--XXX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> theMap = {"XX----X--X---X-----XX-X--XXX---XX-----XXX-XXXX-XXX", "XXX-XXXX-XX-XX---XXX------XX------XXXX---X--XX--XX", "X-X-XX-X----X----X--X--XX-XXXX-XX*--XX--XXX-X-XXXX", "-XX--XXX-XXXXXX---X-XXXXX--X-XXX-X--XX-X----XX-X--", "X--XX-XX-XX--*X--X--XXX-X-X----X---XX--XXXX-X-X-X-", "-X-XX-XXX-X---X-XX--XXXXX--XX-XX-X----X-XX--X---XX", "-X-X-X--X-XX--XX-X*-XX--XXX--X-X--XXX--X-X-XXX-XXX", "--X-X--*----X---X-X---X-----X-X-XX---XX-X*XX--X--X", "---XXX---XXXX-X-X-X-XXX-XX-XX--XXXX-XX--XX----XXX-", "XXX--X-XXX-XX-XX-X-----X-XX-X-XXXX-XXX----X*---XX-", "--XX------X-X---XXX-XXX--XX-X--XXXXX----X-X--XX-XX", "XX--XXX---X--XXX-X-X-X-XXX--XXX--X-XX-XXX-XX-XX-X-", "------XX-X--X-XX-X-X----X-X----XX-XXX-X-XX-XX----*", "-XXX-X-X------X-X-XX--X-XXX-XXXX----XXXX---XX-XX--", "X--X---X-X-----XXXXX--XX-XXXXX----XXX--XX--XXXX-X-", "X--XXX-XX-X-XXX---*---XXX-X----X--XXXXXX-XXX-XXX--", "X----------XXXXX--X----X---X------X----X-X-X--X-X-", "XXXXX-X----X-XXXX-XXX-XXX--XX-XX-X----X-XX--X----X", "-X-XXXX-X-X-X----XX--X--X-X-X-----X--X*X-X-X-X---X", "----*-XXXXXXXXX---XXX------X--XX-XXX-X-XX-X-X--X-X", "--X--XXXX-X-XX-X-X-XXX-X--X---X-----XXX-XX--XX---X", "X-XX--XXXX---XXX-X-XXXX*X--XX-X--X-X-XX--XX---X-X-", "-XXXX--XXX--XX*--XXXXXXX-----X-X-XX*X--XX--XXX----", "-X*XX--XX----XX-XX-XX-XXXX-XXX-X-X-X-X--XX-XXX----", "XX--X-X-X---XX--*-X-X-X----X--XXX-X---X-X---XXXXX-", "-X---*--X-X----X---X-------X-----XX-X-XX-XXX--X---", "--X-X-X--XXXXX------X--X-XXXX---XX--X-XX-XX--XXX--", "--*-XXX-X-XX--X-------XXXX-XXX--X--X-X-X-X--XXX---", "--X-XX-XX--XXX--X--XXXXXX--XXX-X-XX-XX--X--XX-XX-X", "-X--XXX-X---X---X-*X-XXXXX-XX-X-X-X-*XXXX---XX----", "--X---XXX-X-XXXX---XXX-X-XX-X-----XX--XXXXXXXXXX--", "-XX----XXXXXX-X-XXXX--X-X*XXX--XX--XX---X-X-*XX-X-", "XX---XX-X--X---X--XX-XX-X-X-XXX-X-XXXXXXX--X-----X", "-X---X--X-XXXX-X-XXX--XXX--*--XX----XXXX-XXX-XX-XX", "-X-XXX-XX--XX*X*----XX---X-XXXX-*XX-XX-X-X-X-X-XXX", "--X----X-X----XX-X----X----X*---X-X-X---X---X-X*XX", "-XX-XX-XXX-XXX-XXX--X-XX-----XXXX-XXX----**X--XX--", "-X-XX---*--X-XX-X-----XX-XXX-X-XXX--X-X-XX-X-XX--X", "--X--XXX-X--X----XX--X---XX--X--XX-XX--XXX-----XXX", "-X--X-XXX-X-XXXXX--X----XXX--XX-X-X--X----XX-X--XX", "----XX-X--XX--XX-----X---XX------XXXXXX---X-X---X-", "X--X-X--XXXXX-XX--X------XXX-X-X-----XXX-XX----XX-", "---------X-XXXX-X--X--XX--XXXX--X----X--X--XXXXXX-", "XXXX-XXXX-X----XX-X----XXX-X-XXXX-XX-XXXXX--X-X--X", "X-XXXXX----XX-------------XX-X-X-XX--XXXX--X---XXX", "-XXXX-XX-X---X-X-X--*XXXXX*X--XXX--X----XXX--X*---", "X-X-XX-XXXX---XX-XX--X-X------X---XX-X-XX---X--XX-", "XX-X-XXXX--XX-XX--XXX--X-XX-X-XXX-XXXXXXXX-X--X-X-", "-X----XX-X-X--X-X-X-XXX-XX--X----X-X@X-X----XX--X-", "---XXXXX--XX-*X--X-XXXXXXX--XX-X-X--XX----X--*X--X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> theMap = {"X--XX-X----X-XXX-X-X---XX--XXX-XX-X-X-XX-X-X-XXXX-", "XXX-XX-----XXX-XX---X-XXX--X*-----XX-XXXXXX--X-XXX", "-----X-XX-XXXX---X-XXX--XXXXXX-X----XX-XXX-X-XXX--", "-XXXX-X-X-XX-XX-----XX--X--XXXXX-XXX-X-X--X--XX-X-", "X-*X----X--X-X-XXX--XXXXX-XXX-----X-XX-X-XX--XX-XX", "XXX--X--X-XXXX--X---X----X-X---XX--X-XX*-XX-X-X-XX", "XX-XX-XXXXXX-------X*X-XXXXXX--X-XX----X-XX--X-XX-", "--X-XXXXX-X-X--XXXX--*X-XX-X-X-XX-X-XX-----XX-----", "XX-XX-XX-XX-X--X-------X-XX-XXX-XXX--X-*XX--*---X-", "-XXX--XXX--XX--XX---XXX----X-X-----XX---X-X-X-XX--", "-XXX-X*XXX-X-XX--XXXXXX-X-XXX-XXX-X-----XXX--XXX-X", "--X-XXX--X--X-X--X-X--XX--*---XXX--XX---X-XXXXX-XX", "X-XXXX-X--XX--XXX-XX---XXXX---XX-X-X-X-X---XX-XXXX", "-XX-XX-----XXXXXX-X-X-X---------XXX-XX---X-XXXX--X", "XX--XX-XX--XX-----XXXXX---X----XXX-XX-X---X-X-X---", "--X-X---XXXXXXXX-XXX--X-X-XXX---XXX-XXXXXX-XXXXX-X", "X--X-X-X-X-X-X--XXX-XX-X---XX-X-XXX---X-X---X-X--X", "XX-XX--XXX-X-X---XXX-X-XXXX-X--X-XXX-X-X-XX--X-X--", "--X---X----XXXX----XX--XXX-X---XXXX-XXXX--XXXX-XXX", "-X-XXXXX-XX-X-----XX-----XXXXXXXX-XXX-X--X-X-X---X", "XX--X--XX-X--X-XXX---X---XXX--XXXX--XX---X-X--X-XX", "XX-X-X---X-X-X-----X-XXXXXX--X-XXX*XXX*----XXXXXX*", "X---XX----XXXXXX---X--X-X-XX-XX---X-X-X-XXXXXX-X--", "XXXXX-XXX--XXXXX-X--X-X--X--XX-X-X----X---XX----X-", "-XXXX-XXXXXXX--X--X--XXX-X----XXX--X-XX---XX-X--XX", "-X----XXXX-XX----XXXXXX---X--X--X-XX-XX-X------XX-", "-XX--X-XXXXXXX-X-XX-XX--*----X-------XXXXXX-X-----", "-X--X-----X---*-------X-X--XXX---XX---X--X--X-X-XX", "-XX-XX----X--XXXX----X--XX--XX-XX-X--XXXXX---XXXXX", "-XXXXX-X--X---X---XXX---XXX--X-X-X-*--XX-X-X-XXXXX", "-X-XX-X-X--XX--X--XX-X-X-X-XXXXX---X-XX-XXX-X--X--", "XXX-XXXX-X---X-X-X--*XXX-XX----XXX*X-X--X-XX-XXX-*", "-XXX-XX-X---XX-X-XXXX--XX-X-XX--X--X-X---XXX-X-XXX", "-XX-X-----X--XX--XXXXXXX-XX---X-XXXXX-X-X-X--X--XX", "--XX-X-XX--XX--XXXX---X-X--XXX-X--X--XX-X----XXX-X", "X-XX-X----X--XX-XX----X-X---XXX-*XXXXX-X-X-XXX--XX", "--XX-------XX--XX-X--X-X-X-XXX-XXXX-X--XXX-XXXX--X", "XXX--X-X----X-XX-X---XXX-X----X---X------X-X-X--XX", "XX----X-X-XXXXXX--XXXXX-XX--X-X--X------X-X-X--XXX", "X-X-XXX-XXX--X-XX-XXX----XX*X--X--XX--X---X-XX-XX-", "X-X------XXXXX--XX---X--XXX----XXX-X-XXX-X---XXXX-", "-XXX--X-XXX-XX-XX--XXX--XXX-XX--X--XX--XXX-XXX---X", "--X--X-XX-X---XXXX-XX--XXX-XXXXXX--X-XX----X---X-X", "X-XXX-XXX-XXX--X--XX--X---XXXX--X-X--XXX------X-X-", "XX-X--X-X-XX-----X-X--*XX-XX--XX-X---X-XXXX--XX--X", "---XX---XX--XX-*X---XX-X---XXX--X--XXX--X--X-XXXX-", "-X-X-XX--XX-XX-XX--XX-X---XX-X-X-XX-X-XX--X-XXX-X@", "X---XX-XXXXX---X--X--XXXX------XXX-XX-XX--XX--X---", "-XX--X-XXX-X-X-X-XX-X-XXXX-----XXX-XX-XX--XXXXXX--", "--XXX-X----XX-X-XXXX---X-X--X-XXX-X-X--XXXX-X-XX--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> theMap = {"X-X-------XX-XXXX-XXX---XXX-X-XXXXX--XXXXXXXXX---X", "X-------X-XX--XXXXX-----X--X--XXX-X--X--XXXXXXXXXX", "XX--XX-XX---XX-X*--XXXXXXX-XXXX-XXXXX*XXX----X--X-", "X----XX-X--XX-XXXX--X-XX-X-X--XX-X-X----XXXX-XX-XX", "--X-XXXX---XX*--X-X-XXX-XX-XX--XXX---X----XX----XX", "--XX-XX*X*X-----XXX-XXXXXXX-XX--X----X---X-XX--X-X", "X-X-X-X-*X-XXXX-X-X---XXX-X-X-X----XXXX-----X---XX", "XXXX-X-XXX--XXX-X----------XXXX-XX--X----*XXXX*-XX", "-X-------XXXXXXX-X--XXXX-XXX--X--X--X---X---XXXX--", "XX-X-XX--XX-X-XX---XXX--X-----XXXX--X-X-XX----XX-X", "--XXXX--X-X-X-----XXX-XXXX-X--X---X-X------X-X-X-X", "--XXX---X-XXXXXX-------XX-XX-XXXXXXXX--X-X--XXXXX-", "-*XXXXX-XX-XX--XX--XXXXX-X-XX-*-----------XX-XXXXX", "XXXXX-XXXXXX--XX--XXX-XX-XX-----XXXX-X-X---X-XXX-X", "-XX--XX-XXX-X-X--X---XX-X--X-XX----X---XXX--X---X-", "-X--XX--XX-X--XX--XX--X-X---X-X-XX--X-X---X-X-X-XX", "XX---*-XXXXX-X---X---XXX-XX---XX-X-XXX--XX-XX-XX--", "*---X-XXXXX------X---X-X-XXX-X-X-------X-XX--XX--X", "XXXXX---X-XX----X-XXX-X-XX-X-----XX--XXXX-X-----XX", "--XX-X-X---X--X-X-XX------X--XX--X-XXX-X-XXX-X--XX", "X-X-XX--XXX--X---XXX--*--XX-XX-XX-X----XXXX-X-XX--", "X-XX-X---X-XX---XX-X*X-X-XXX*--X--X--XXXXX-XX-X---", "X--X-XXXX-X----XX----------XXXXX---X-XX--X--XX--XX", "-XXXXX---XXXXX--X--XX--XXXXX-XXXXX-XXXXX-X-XX-XXXX", "-XXX--XX-XX--X---X-XX-X-XXXX-XXX*-X-X-----XX-XX-X-", "-X-XX-X--X--X-X----XXX-X-XX-XXXX--XX--X------XXXXX", "X---X-XX-XX--XXXX-XXXX--XXX-XX-X--XXX---XXX-----X-", "X-----X----X-X--XX--------XX-X------XX-X--X--X-X--", "X-XXX-X----XXXX---XXXXX---X---X-XXX-XXX--XX--*X-X-", "X-X-XX---XX--X-XXXXX-X---XX*XX--XXX-X-XXXXX----XXX", "-X----XX----X--XX-X-X-X-XXX---X--XX--X---XX-----XX", "X-XX-XXX-XXX-XXXX----X-X-X-X--XXXX-X---X--XX*XXXXX", "-X@X--X---*---X-X-X---X--X-X-X---XX--X-XXX--XXX---", "-XXXXX---X--XXXX*--XXX-XXXX---XXXXXX--XX-XX-XXX--X", "--XX-XX-----XX--XX-XXXX--X--X------X-XX--XXXX-XXX-", "X-XX-X-XXXX--X-X--X-----XXX-XX-X-XXX--XXX-X--X----", "XX-X-XX-XX-------XX---X-X-XX-----XX-*-XX---X------", "-XXX--X---X----X----X-XXXXXXX-X-X----XX-X--X--X-XX", "-XX------XXX--XX-XXX--XX-XX-XX-XX---X-----XXXX---X", "---XXX-XX--XX---XX-X-XXX---XX--X-XX-XXX--XXXX--X--", "XXXX--XXXXX-X----X--X-XXXXX-X--X-X*-X--XXX*X--XX-X", "----X-XX-X-XXX--X-XX--XXX---XXXX--XXX-X----X------", "XXXXX--X--XXX--X---X---XX----XX---XX--XX-X-X-XX-X-", "-XXXXXX-X-*X--XX--X-X--X-X-XXXXXXXXX-XX-X-XXXX-X--", "XX--XX---X----*-XX-XXX-XXXX---XX--XX--XX-X--X-XXXX", "XXX---X---X---X---X-X-X-X--X--X--XXX-XX-----XXXX--", "X-XX--XXX-XXXXXX-X-XX*--X--------X-X-----XXXX--X-X", "-XXX-X-X*-----X-XX--X-X-XX-X----XXX----XX-XX-XXX-X", "-X-XX*-X--X----------XXXXX--XXX-XX-X---XXXXXXX--X-", "XX*X--XX---XX-X-----XX----XX-XXX---XX---X-XXXXX--X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> theMap = {"X--XX-----X-XXXXXX-XX-XX--X-X-X-X-XX--X-XX-XXX-XXX", "--X--XX----X--XXXXXXXX----X--X*--*X----X-----XXX--", "-XX--X-X--X----XXXX-----X---XXXXXXX-XX--X--XXX----", "----XXX-X---X-----XX--X-XX-XX--X--X----X--XXXXXX-X", "XX-XXX-X-X-X-----X----XX----X-X-XX--X-X--X-X--XXXX", "------X-X-XXXXXX--XXXX--------X-XXX--XX---------X*", "*--X-X--XXX----------XX-X-X-XXX-X@XX----X--X-X----", "XX--X-X*-XX-XXX--XX----XX---*-X-X-X--X-X-X-XX----X", "-XXX-XXX-X-X--X-X-X-X--X-X----XX-X--XXXX-XX-XXX--X", "--XX--XXXXXXXXXX---XXX-XXXXX--X-XX---------XXXXX-X", "X-X--X-XX-X-XX-XXX--X-X--XX-XXXXXXX-XXXXX-X-XXXXX-", "XXXXXX---XX-XXX*--XX-X--XX------XX-XX-XX-X-XXXX--X", "---X-X--XXX-X---XX--XXXX-X-XX----XXX-X-----XXX--XX", "XX----XX-X--X-XX-X-X-----X-X-X---XXXXX--XXXXXXX-XX", "X-X--X--XXX-XXXX----XX-X-X-XX--XX-----X-X-X--X--XX", "XXXX-X-XXX-XXXX----X--X-XXXXX---XX--X-XX---XX*---X", "---X--X--X-XX--X-X--X-*-X---*X-X--XXX-XXX-XXXX----", "--XX-*--XX--XXX--X----XX--XX---X---X--XXX---X-X-XX", "X-X---X-------XX-X-X--X-XXXXX--X--X-----XXXXX-X---", "X--XXX-XX*--X---*-XX--X--XXX-X--X--XXX-X--*X--X-XX", "X-XXXX----XXXX----XXX-XX-X---X-XX--XX--X-**-XX-X--", "X-X-XX---XX-XX-XX*XX-X-XX------XXX---XX-XXXX-XXX--", "X-X--X----XXX-X*-X---XX---X-XX---X---*X-X----X---X", "----X-XXXXXXXXX-XXX-X*XX--X-X-----XXXXX--X-XXXX--X", "X---X-XXX---X-XX---X--XXX---XXXX---XXX-XX---X-X---", "-X-XX*-XXX-X-X----XX---XXX--XXXXXXX---X-XX-XXXXXX-", "--------XXXXXX-XX--X-X----X-XX--XXXX-XX-X-XX-XX-X-", "XX-X-X-XXX----XX--XX--X--X---XXX---X-XXX--XXX-XXXX", "---XXXX-XX-X-X-X-XXX-XX-XXXX--XX-X----X--XXX-XXX-X", "-X-X--X--XX-X--XX-X-XX---XXXXX-XXXX--X------XXXX-X", "----XXX-XX-XX*--X------XXXX--X-----X-----X---X-X--", "X-XX-XX--XXXX-----XX--X*-XX--XX-XXX-----X-XX--X--X", "XXX--X--XX-*---XX-X-X-X--XXXXXXX*-X-X--X----X-X--X", "--XXX---X--X--XXXX---X--XX-XX-X----XXX---X-XX--XX-", "XXX-X--X-XX-X--XX-XX-XX--XXXX--XX-XXX-*X-XXXX-X-X-", "---XX-XXX-XX-X---X-XXXX---X-XX--XXXXXX-X-X-XXXX---", "----X--X---X-X--X-X---*XX-X--*XX--XXX-XX--X-XXXXX*", "-X-X-X-XX--X---XX---XX---XX*------X-XX-XX-X--X-X--", "-XX---X-X-X---XXX*-XX-X--X--X--XXXX-XXX--XX-XX--X-", "XX-X-X--XX-X--XX---XX--XX-------XXX-X----*X-X-XXXX", "-X---XXX---X----X*-XX-X-XX--X-X-XXXXX--X--X-X-X*XX", "X-XX-X-X--X-X*---XX-X--XXXXX-X-X----X--X-X----X-X-", "-XX----XX-X---XXXXX-X-XXX-X---XX-------X*X-X---X--", "XX--X--X-XXX-XX-----X--X-X--XXXXX-XX----X-X-X--XX-", "-------X--XX-X-X--X-X--X--X-XXXX-X-XX--XXX-XX-X*--", "-XXXX--X--XXX-XXX-X--XXXX--XXXXX-XX-X-XXXXX--**X--", "-XX--X----X-XX-X-XXXX--X-XXXXX-X----XXX-XX-X-X-XXX", "XXX--XXX*-XX-X-X-----XX--*-XX-----X-X-XX--X-XXXX--", "X-XX--X-XXXX-X---X-X--X-XXX-X-X--XX-X-X-XXXX-X---X", "*-X-XX-X-XXX----XX-XX--XXX-XXXX-X------XXXXX-XXXX-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> theMap = {"-XXXX-X--X*XX-*----XXXXXX-X---X--XXXX--XXX--XX--XX", "-XXX-XX-X--X-XX---XXXX-XXXXX-X-XX-X-XXX-X-X--X-X-X", "-XXX--XXX-X-----X--XX-X-----X--XX----X-X-XXXXX---X", "XXX-X-X----XX-X--X---X-XX-XXX--XXXXXXX--X--X-X---X", "--XX-----------X-XXX-XX-XXX-X-XXXX------X-XXX--X-X", "X--XXX-X-X----X-X---X-X-----X---XX---XX--XXX-XX--X", "-XXX------X--XX-X--X-XX---XXX--XX-XX-XX-XX---X-XXX", "----XX-X*-X---XXX---X-X---XX-XX--XX-XXX--XX--XX---", "-XX-*X----X--XXX-X-XXX-X-XX-X-XX--XX--*X-XX--X-X-*", "X-XX--X-XXX-XX--X-----X-XXXXXX-XX-XXX-XXX-X---XX--", "XX-X-XXX--X----XXX-X--XX-X-X--XXXX----XX-X--X-XX--", "XXX---X-XX-X-X-------X---**X--X-X-XXX--XX-XX------", "X-XXXXX-X-XXX-XX-XXXX---XXX--X--XXX---XXXX-X-XX-X-", "-X-X--X-XXXXXXXX-X---XX-X-X*-XX-XXX-XXXX--X--XXXX-", "X---XXXX-X-XX-X----X------XX-X-X--XX---*-XXX------", "-X-XX-X-XX-X-X*--X-XX---X--X-XX--XX--XX-*-XX-X---X", "X--X-XX---XXXXXX-XX--XXX-------X-XX*--XXX*-XX--X-X", "XX-XX----X-XX-X-XXXXX--XX-X-XXX----XX-*XX-X-X-X-XX", "XXX-XXXXX-XXXXXX-X-X-XXX--XXX--XX-----X----XX-----", "-----XX----XX--X---XXXXXX-XXX--XXXXX-X-XXX----X-X-", "--X---XXXXX-XXXXX--XX--XXX----XXXXXXX---XXX---X---", "X-X-X--X-XXX-X--XX---XXXX-X--X----X----*XX----X---", "XX---X-XX-XXXXXXXXX--X---XX------X---X-XXX--XXXX--", "-X*-X---X-X--XX-XX-X-----XX---XXXXX----XX--XX-XX-X", "X--X-X-X--XXX*---XX------XXXXX--X-XXX*XX-X-XXXX-XX", "X--X------------XX----XXXXX-X--XX-X---X---X--XX---", "XX-X-X----X-X-XX------XXX--XX-X---XX--XXX-X-----X-", "-X--X-XX-X-----XXX--XX--X-XXX-XX-X-XXXXX---XX-----", "--XXX--XX-XXXXXXXXX-------XX-X-XX----XX-XXXX-X--X-", "---XXXX--X*-X-XXX--X-X-X-XX-X------XX-X--X-XXX-XXX", "-XXXX-XXXX-XX-X---XXXX-X-X---XXX----XX--XX----XXX-", "XXX--X-X--XX-X-X-XX--XXX----X-X-X-XXXX-X---X*-X-X-", "-X---XX-X--XX--X-XX--XXX-X-X--X-XX-XXXX---XXXXXX--", "-XX---XX----XXXXX--*XXX----XXXX---X-XXX---XXXX-XXX", "X--X--X-XXX------X-X--XXXXXXXX-XX--X--X-XXX--X--*-", "-XXXX--XX-X-X--XXX---X----X-XXXXXX-X--XXXXX-X-----", "X-XX-XX-XXXX-XXXX--XXX-XX--XX-XX---X----X-X--X-X-X", "XXXX--X--X-XX----X-XX--XX-XX-XX-X-X-XXXXXXXX-*X--X", "X-X--XX-@XX--XXX-XXXX--XXX-XXX-X-XXX-X-X-XXX*-X---", "XX----XX--XX---XXX-X--X-X-------X-XX-X-X---X--XXXX", "X--XXX-XXXX---XX-X-X-XXXXX--XXXXXXX-XX-XXXX---X--X", "XX------XXXX---XXX-----XX--X---XXXXXXXX----XXX---X", "X-X--XX------X-X--XXX--X-------XX---X----X--X-----", "X--XX------X---XX--XXX-----XXX-X--XXXXXXX--XX-X-XX", "-X-X-------XXXX--X---X-----X--XX-X-X-XXXX-X-XXXX--", "X-X-X--X--XXXXX----X-XXX--XX--XXXX-XXXXXXX-XXX--XX", "-X--XX*XX--X--X-XX--------X---X*X----XXXX-XX---XXX", "-XX--XXXX-X-X-XXXX-XX--XX-XXXX-XX---XX--XX--XXXXX*", "-----XXXXXX-*XX-----X-XXXXXXXX--X-X---X-X--XX-XXXX", "---XX-X-X----XXXXXXXX--X--XXXX-XX--X-XX--X--X---X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> theMap = {"XX-XXXX--XXXX-X--X-----X-X-XX--XX*XX-XX*-X-X-X-XXX", "XXX-XXX------XXXX-XX-X-X--XXXXX--XXX-----X-XXXX-XX", "XXXXX----X---X--XXX-X------XXX--XXX-X-X-X-XX-X-XX-", "XXX--X*XX-XX-X-XX-XX--XXXXX--XX*-X-X-XXX---XXXX--X", "--XX-----XXXXX-X-X-X-X--X--XX-XX-XXXXX-X-XXXX-X*--", "-X--X*XXXXXXX------XX--XXX------X-XX-XX-X*X--X--X-", "X-X-XX-X----X-XXX-X-X-XX-X----X---XXX-XXXX--XX-X-X", "XXXXX--XXX-XX--X-----X----XX--XX-X-XX*------XX-XXX", "X-*X----XXX--X-----X--XXX-X-X-X-X-X-XXXX---X--XX--", "XX--XXX-XX-XX----XXXXXX*---XXXXXXX-XX-X-X-XXXXXX-X", "XXX--XXXX-----XXX--XXX-X---X-X--XX--XX---X-X-XX-X-", "-X--XX-XXXX-XXXXXXX-X-XX----XX--X-XX-X---XX-X-*-XX", "-X--XX-*XXXXX--X-XXX-XXXXX-XX--X-X---X----X--X--X-", "XXXX-X-XXX------XXXX-X-X---X-X-XX-XXX-XX-XX---XX-X", "X--X-XX--X-X-X--X---XXX----X-XXX-XX--X--XX-X--XXX-", "--X--X-X-XXXX-X-XXX*-X-X-X--XX---XX-X-XXXX-X-XXX-X", "X-*X----XX-X--X-XXX-X-XXX-X--X-XXX-X-X---*-X-XX--X", "X-X--X-XX---X--XXX--X-X--XXXXX-XX-X-XX*---*-XX-XX-", "---X---XXX-XX-X-----XX-X-XX--XXX---X-XX-XX---X-X-X", "--X-XX-X-X---X---X-X-X---X-X-X---------X-XX--X-XXX", "--XXX--X-XXXXX-XX--X--XXX--X-X--X-X---X-X---X--XX-", "-XXXX----XXXXX---XX----X-XXX-X-----X--X-XXXXXX--XX", "XX-X-----XXXXX---X--X-XXXXXXX*XXX-X--XX-X--XXX-X--", "XXXX-X-X-XX--XX---X----X-X---X--XX-X*X---XXX--XX--", "X-XX*XX-XXX@X--XXX-XX-XX--X-XX-X-XXXX-X--X-X-XXXXX", "XX--XXXXXXXX-X-XX---XX--X---X-X-XX--XXX-X---XXXX--", "-X*X-X-XXXXXXX-X--XXXX--XX-X-X--XXXXX-XX-X-XXXX--X", "-X--XXX----XXXX-X--X--X-------XX-X-XX---XX-X-X-XX-", "XX-XX-XXXX--X--------XX--XXX--XXXX-----XXX-----XX-", "XXXX-XXX-X-X-XXXX--XXXXX-X----XXX-XX-X-X-X----X-X-", "X-XX-----X-XX--X--X-X-XX---XX-X-X------XX-XXXXX--X", "XXXXXXXX---XX-X-X-XXX--XXX-X*X-X-----X-X-X-XXXX---", "--X---XXX-XX------XX---X--X-X--X------XXX-XXXX-X-X", "---X-X*XXX-X--X-XXX-XX*X-X--XXXXXX-X-XXX-*-XX---X-", "X-XX---XXXXX-XX--X--XX-XX-X-X-XX-X--X-XXX-------X-", "-X--X-*X-*XXXXXX--XXX---XX--X---X-------X-XXXX----", "X----X-X---XXX-X--XXX-*X---XX--X--X-XX-XXX----X--X", "-XXXX--XXX-XX-X-XXX-X-X--XXXXX*XXX----X-XX-X--XXXX", "X-XX--XX--XX-XXXX--XX-X-XX-XX-X--XXXX----X-XXX-X-X", "--X-XXXXX--X*X-X--XX-XXXXXXXX--------XXXXXXX-XX---", "X-X-XX-XX--X-XXX-----XXXXXXXXXX-XX-----XXXX-XXX---", "XXX-X--XXX--X-XXX-X-XX-------X--XXXX-XX---X--XX--X", "---X----XXXX-X--XX-XX---XX-XXXX-XXX--X-X--X-XX-XX-", "X-X-XX--XX---X--X-XX*X--XXX-X-XXX---X-----XX---X-X", "XX-XXXXX-------X---XXXXX-X-X-XX----X----X---X-XX--", "--XXXXX-XX-XX--X-X--X-----XX-X-XX-XX*--X-XXXX-----", "XXXX----XX-XX-XX-XX--XX----X-X-XX--XX---X-X-XXXXX-", "XX-X--X--X--XX----XX--XXXX--XX-XX-XX-*-X-X--X---XX", "--XX--X-XXXXXXX-XX----X-X-X---X-X--X--XX-X--X-----", "-X-XX--XXX-XX-----XX-X-XXX-*XX-X-----X-X-X-X-XX---"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> theMap = {"-X-XXX--X-X-XX---XXXX-X-XX--X---X--X--XXXX---XX-X-", "--XXX--XXXX-X-XXXXX-X-XXX-XXX-XX-----XX-X-X-X-X-XX", "---XXX-XXXXX--X-X----XX---X----XX--X-X--XX-X--X-XX", "-XX--XX*X-XX-X-X----XXXXXX------XX--X--X---X----X-", "-XX---X----X----XX-XX-X--X---XX-X-XX-XX---X-XXX--X", "-XX-XXX-X-X-X---X--X--XXXX-XXX-XXX--XX--X-X-X-XXXX", "X-X-XXX---XXXXX--XX-X-X--XX-XXX--XXXXX-XXX---X-XX-", "--XX--X*--X---*XXX--X*---XXXX-X-XX-X---X-XX--X-XX-", "-XX-X-XXX-XXXXX----X--XX--X-XXXXX---XX-X--XX---XXX", "XX-X-XX-X---X-X-XX--XX----X---X-X--X-X-XXX-X-----X", "X--X---XX-X----X-XXXXX---XXX-X-X--X-X--X--XXX-XX--", "XX--XXXXX-XX-X---X-X-X-XXXX---XX---X----XX-XXX-X--", "X-X--X-XX-XX--XXXX-X--X--XX--X-X-XXX--XX-XXX--X-XX", "XX---X-XXX---X---X-XX--XX--X-X-XX-XX--XXXX--X-X--X", "---X-X-XX-XXXXX-XX---XXXXX--X-----X--X-XX-X-XX-XX-", "-X-XX---X-*-XXXXX-----X--XX-XXXXX--XXX-XXXXX-----X", "---X--X-XX--XXX-XX-X-X-XX-------XXXX-X--XXX---X-X-", "-X--X-XX--X-XXXX-XX-XX-X-X-X-X-XXX-X--XX-X-XX---X-", "--XX-----X-----XX----X-XXXXXXX---------X--X-X-X-X-", "X-XX--X-XX-XXX-XX-X----XXX-X-X-XX-XXX@XX-X-X*X---X", "XX*XXX-X---X-XXX---XXX-X--------X-XXX-XXXXX-XXXX-X", "XXXX-X---XXX-*X-XX-XX-XXXX---XX-XX--XXX-X----XXXXX", "-----XXX--XX--X--X---XX-XXXX--XX--X--X-X---X-X*X--", "X-XX-X---*-X-X---XXX--XX-XXX----X--X*----X---XX-X-", "X-X---*-X-X--X----------X---X--XXX-XX--X---*-----X", "-X---X----XX---X--X--X---X-XX----X-XXXX-X---X--X-X", "-X--XXX-X--X-XXX-X--XX----XXX-----XXXX----X-X---XX", "X-----X*-X--X--XX-X---XX--X----X-XXX----XXX----X-X", "-XX------XXXXXXXX----X-XX--XXX--XXXXX--X--X-X----X", "XX-XX-X-XXX--X--X------X-XX-X-X----X-XXX-XXX------", "--X--X--XX-XXX--X--XX-XXXX-XX-XXX-X-XX-X---XX-X---", "X--XXX-XXX-X-X---XXXX-XX-XXX-X*XXXXX-XX-XXX-XX--X-", "--X--X-XX--XXX-XXX---XX-X-XXX---X----X--X---------", "--X--X----X--XXX---XX-XXXXXXX--XXX-XXX-X---X---X-X", "XX---X-XX-X-X-X-X-XXX-XX--XX---XXX-X-XXX--*X------", "XX-XXX-*X-XX-XX-X---X-XXXX-X-XX---X--XXXX-X-X---X-", "-X-XX----XXX-X-XX-X--X-X-XXX-X-X-X-XX---XXXX-XXX--", "---X---XXXXXXX-XX-XX-*--XX-X--XXX--XX--X-XX-X--XXX", "--X-X-X-XX-----X-XXXXX*-X---XX-----X-X-X-X--X-XXX-", "XX-----XX---X-XXXX-XX--X--XXXX-X-X---XXX--XX-XXX-X", "-----X--------XX---X---XX---XX-XXX-XXX--X--X-X-X-X", "XX-X---XXXXXXXX-X-XXX--XX-X-XXX---XX-X-XX-XXX-X--X", "X--XXXX--X-XXXX-XXX-XX-X-XX--X-X-----XXXXXXX-X----", "XXXX--XX-------X-XX-X-X---X-X-X-XX-XXX-X-*-XXXX--X", "--XXXX-X-XXX-X-XX--------X---XX-XXXXXXXXX-X--XX-XX", "--X-XX--XXXXX-XX-XX-X-XXX--XXX---X-XXXX---X-X--XX-", "-XXXX----XXX----X-X--XXXXXXX-XX--X--X-X-XX---X-X--", "--XX------X-X-XXX---XX--X-XX---XXX--XX-X--------X-", "-X---XX--XXXXXXX--X--XXXXXXX-XXX-X----XXXXX-------", "---X-X---XXX--XXXXXXXX-XX-X-X-XXXXXXX----XXXXX--XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> theMap = {"-X-X*--XXXXXXXX--XX--XXXX-X-XX----X-----X--XX--XX-", "XX--X-XXXXXXXX---X--XX--X---X-X-X-XX--X-X-X-XXXXXX", "-X--X--XX--XXX-------XX-X-X--XXXXX-XXX---XXXX--XX-", "XXX---X--XXX--*-X--XX-X-XX*X-X---X---X--X-@X--X-X-", "-X-XXXX----XXXXXXXX----------XXXXXXX-XX-X-XXXXXXX-", "---X-XX-XXXXX-X--X--XXXXX-XXXX-XXX---X-XX--XXX--X-", "X-X-X-X------X-X-XXX-XXX----X-X-X----X-X--XXXX-X--", "X-X-XXXX-XXXX---X--XXXXX-----X--X--X---X---XXXXXXX", "X----XXX--X---X----XX-XX-X-X-XX-X--X---X-X--X-XXX-", "X-X-X--XXX-X--XXX-XXX---X-XX--XXXX---X-XX-X---XXX-", "XX-X----*-X----XX-XXX----*-XXX--XX-XXXXX--XX-XX-X-", "X--X-X-XXXXX-X-X---X--XX-XX--X-X--XX--XXXX-XXX--X-", "-*--XXXXX---XX---XX----XX-XXXXXX--XXXX--X----X----", "X-XXXX-XX-XXXXXX-XX--XXXXXX----X----X---X-XX-XX-X-", "-XXX-XX--X----XX--XXXXXXXXXXXX--XXX--XXX-XX--XXX--", "-XXXX--X-XX---XXX-XXX---*XX--X-X-XXXX---XXX-XXXXX-", "-----X-X----X--X-XX--X-X--X--XXXX--XX-XXX---XX-X--", "-X-----XX--XX------X-X--XX------XXXX----XX-*X-XXX-", "*--XXX------X-X--X---X-XXX--X-X-X-XXX--X------X-XX", "-X-X-XX--X---XX-----XX--*XX-X--XXXX-XX-XXXX-XX---X", "-X--XXX-XXXX-XX-XX--X*X-X--*X-XX-X-----X-X---XX--X", "X-X-X--XXXXXXX-XXXX---------XX-X-X-XX-XXX-X--X-X-X", "XXX-X--XXXXXX-X-*-XXX--X-XXXXXX-XXXX-XXXX-X---X-XX", "X-XXXXX-X--X-----XXXX-----XXXXX-X-X*-X--XXXXX--X-X", "-XX-X--X-X---*XX---X-X-XX-XX--XXXXX-X--XX-X*XX--X-", "XX-X--XX------XX----XX---XX-XX-X-XXX-X-------XXXX-", "XXX-XX-X-XX---XX--XXXXX-XXXX-X--XXX-*---XX-----X-X", "-X--X---XXXX----X-XX----XXX-X--------XX-X-XXX-X---", "-XXXXX-XX-XXXXX----XXX*--X--XXXXX-----X------XX-XX", "-X-X---XX-X---X-X-X---X-X-X-X-X---XXXX--X-XXX--XX*", "----XXX-XXXX----XX----XXXX-X-XXX-----X-X-XXXXX---X", "X*---XXX-X--XX----XX--XXX-XX-X-XXX*XX-X--XXX--X-XX", "--XX--XXX---X----X-X-X------X--X-----XXX-XXX---X--", "-XX---X-X-X-XX*-X--X-X-XX--XX---XXX--X-X--X----XXX", "XXX-X-XXX-XXXX----X--XXX--XXX-----X*XX-----X-----X", "X-X-*---X-X*XXX--XX-XXXXXX-XX-----XXX-X--X--X-X-XX", "---XX-XXX-XXX--X---XXXXX---X-----XXX----XXX--X--X-", "*XXX--X-XX--X----XXXXXX-X-XXX-XXX--XXXX---XX-XX-X-", "-X----XX--XX-X----XXXX--XXX----X-XX-X----XXX--X-XX", "X----XXXXXX-XXX--*-XXX-XXXX---XXXXXX--X---XX--XX--", "*----X-X-XXX-X---XX-XXXXXXX---XX-XXXX-XX--X-XXX---", "-X-XX--XX-X--XXX--XX-X---X*-XX-XX-XX-X-X-XXXXXXXXX", "---X-XXX---XX-X---X-X-----X-X--XX*----*-XX-XXXXX--", "X-XX-XXX---XX-XX-XX*-X-XX-X-XX-X-X-XX---XXX-XX----", "XXX-XXX--X--XXX*---X--X-*X--X-XX-X---XXXXXX-X-X--X", "XXXXXXX---XX-X---XX-XX-XX-X--XXX-XX-XXXXX--X---XXX", "XXX-XXXXX-X-XXX------X--XXXXXX--X---XX-X--XXX--X*X", "X-X-X-X-XX-XXX-X-X-X-X-X----XXX-----X-XXX--XXXXX--", "X----X-XX-XX--XX-XXXXX-X---X---XXX-X---X-XX---X-X-", "X*XX---X---XXXXX-X--X--XXXX----X-X-X---X---XX-X-X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> theMap = {"-X-X-XX--XX-X------XX-XXX---X-X-X---X-XXXXXXXXXX--", "X-X-X--XX-XX-XXX-*XXXX*------XXX-X---X-*-XXX-XX--X", "--XXX-X---X--X--X*-XX-XX--XX-XXX----X---XX--X*-X-X", "X-XXXX-X-X-*XX-XX-X----XXXX-XX---X-X--X-X-X-XX--X-", "X--XXX-XXXXX--X-*---XX-XXXX----XXX-X---X---X-X-XXX", "--XXXX-X--X-XXX--X-XXX-X-X-X*-XX------X--X---XX-X-", "--XX----XX--*X-XXXX-XXX--XXX---X--XXX-X-XX--XXX--X", "XX--X---XX*---X-X--X-X-XXXXXXX-XXX-XX-X*X----X----", "XX-XXX----X-XX--XX----------X-X*----XXX--X--XX--XX", "-XX-----XX-----XXXX--XX----X-XX--X--XX---XXXXXX-XX", "X--X*-----X-XX---X*-X-XXX-X-X-X---X---X----XXX-X-X", "X--X-X---X----X-X--X-XX--X---X*---X--X*X--X--X---X", "X-X--X-XXX--X-XX-X-XX---XX--X---*XXXX--X--X-X-X-XX", "--XX---XXX--XXXX-----X-XX--*---X-XXXXXX--X---XXXXX", "-XX--XX---X--X-X-XXX-X-XXXX-----XX---X-XXXXX---X-X", "X--XXXXX--XXXX-XX-X-XX--X-X-XX-XXX---XXXX---XXXXX-", "X-X---XXXXXXXXXXX--XX-X*XX-XX-XX-X-X-XXX--XXXX-XX-", "XXXX---XXXXXX-XX--XXXXXXX--X---X*X*-X-XX--X-XX-XX-", "---X-XX--X--XXXX*X--X--X----XXX-----X-----XX-XX-XX", "---XX--XX--XX-X-X-XX-X--X---XX--X-X-XX--X----*-XX-", "XX-XX-XX---XXX--XXX-XXX-XXX-X--XX-XX-XXXX-XX--XXXX", "XXXX-XX---X--X-XX-X-X-XX-XX-XXX-X--X---X-X-XXX-X--", "--*XXXXXX---XXX-X---X-XXX--XX-XXXX-----XX------X-X", "-X-X*XX-XXXXX-X-XX-*-XX-XX-XX-*-X-XXXXX-X--XX---X-", "XXX-X-------XXXX--X-XX--XXXXXX--X--XX-X--XX-XXXX--", "-XXXXXXXX--XXX--*-----XXXXX--X-X-X-X----XXX--X*---", "-X--XX---XX--X-X-XX-XXX--XX---X-X-XXX-XX---XXX--X-", "-*----X-X--X---X--X--XXXXXXXX--X--XXX-XX--X--X--X-", "-XX-XXXX--XX-X-X---X-XX---*X-XXXX*X---X------*X---", "X---X----XXX-XXXXXX--X--XXX-XX--*X-X--*-X-XXX---XX", "XX--XX-XXXXXX-XX--XX-X-----XX-XXX-XXXX-X-X-------X", "XX--XX-XX----XXXXX-X----X---X-----X*-XX---XX*XXXXX", "XX---XX--X-------XXX-X-X---X---XX-X--XX--XX--XX--X", "----XXX--X-XX-X--X--X-XXX-XXX---XX-XXX-X-XX--X----", "X--X------X-X-XXX--XXX--XXXXXXX--X-X-XX-X--XXX-XXX", "XX-X--X--X-X---XX--X-X---@-XXX-X-XXXXX-XXX-XX---X-", "----XX----X-XXX-XXXXX---X-XX-X-X----XXX--XX--XXX-X", "--X-XXXXXXX-XX--X-XXXX------X--XX--X*-XX-XX--XXXXX", "-X-*---------X--X--XX-X-XXXXXXX-XX-XX-X--XX-----X-", "X--XX--X--X-*-----X-XXX-XX--X--X-X---XX-XX-X-XX-XX", "-XXX--XXX-X--*XXXX--X-X-X-XX----X-X-XX--X---XX-XX-", "X-XX---XX-X---X-----XX--X--XX-X-XX----X---X-X-X-XX", "-X-X-X-XXX--X--XXX-XX---XXXX--X----X--X-XX*----XXX", "-XX-XXXXX-XXX--X--XXXXXX--X-XXX---X-XXXX-X-XXX-X-X", "--------X---X-XXX---X-X-X---*--XXX*XX-X----*----*-", "---X-XX--X-X----XX-XX--XX-X-X-XX-X-X--XXXXX--X----", "X---XX-XX----X--X*XX-XXX-X-X-XXX-XXX-X--X-XX-X-*-X", "X-XX-XXX-X---X-X----X---XXXX-XX-XX-X--X-X--X-XXXX-", "XX--X-XX-XXXX---XX-XXX-X-X-XXX--X-XX--X--XX--X---X", "X-X--X-X-XX-X---X-X-XX-X-XXXX-XXX-----XX-----XXX--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> theMap = {"--X-XXXX--X-X----X-X--*--X-XXXX-XX-X-XXX-XX-XX-XX-", "--XXXXX-XX--X-----*-X-X-XXX--XXXXX-X--X-XXX--X-XX-", "--------X---X--X--X---XXXXXXXX-----X-X-XX-XX---X-X", "--XX-XX--XXX--XXXX-XXX----XXXX---X--XXX--X-X--XXXX", "-X-XXXX-X*XXXXXXX-XXXX--X---X-----XX-XX--XX--X-XX-", "-X-*XXX--X---XX-XX--XXX---X-XXXXXXX---X--XX----X--", "--XX--X--X-X--X-XXXXXXX-----XXXXX-X-X-XX---XX--X-X", "XXX-XX-XXX--XXXXXX--X--X--XX-XXX-X-XXXXX--X-XX--X-", "-X-------XX--X-X--X-XX---X-X-XX-XXX-X----XXX-XXXX-", "---XXXX---XX--X-XXXX-XXX--XX-XXX--XX-XXXX-XXXXXX--", "----XXX--XXXX--X-----X--X-XX-*XX----XX--X-XXXXXXXX", "XXXX--XXXXXXXXXX-X-XXXX----XXXXX-XXX-X----X---XXXX", "XXXXXX--XXX-XX-X-XX-XX---X-X-X-XX-XX--XX---XXX--XX", "XX---X---X-XX-X-X-XX-X-X*-XXXX-XX----X--X-XX---XX-", "XXX-X-X--XX-XX--X-X--XX-XX--XXX---XX-XXX---X---XXX", "XX--X--X--X------X*-X--X---XX--XXX--XX--XXX---XXXX", "XXXXXX--X--X-X--X---*XXX----XX--X-----X-XX-XX-X---", "-X-XXXX--X----*XX-X-X--XXX----XXX---XXXXX-X---X--X", "--XXXXXX-X-XXXXXX-XX--X--XXXXXXXX--XXX--XX-XXXXX-X", "XXXX-X-XXX-----X--XX-XXXXX-X---XX-X--XX-XXXX--XX-X", "X-X-XXXX---*-X--XXX-XXXXXXXX---X--XXXX-XXXXX------", "X-X--XXXXX-X--X-XXX-XXX--XX---X--X-X-X-X--XXXX-XXX", "X-----X-XX-X-X-XXXXXX---XXXXX-X-XX-XXXX--XXXXX----", "XX-X--XX-XX---X-XXX------XXXXX-XXXX----XXX--XXXXX-", "X----X---XXX-X-X-X---X-X-X*X-X---X--XXXX---XX-X--X", "--XX--XXXX---XXXX-X----XXXX---XXXX-X--XX-------X--", "XX---X-XXXXX-----X--X-X---XX-X---X-XX---XXXX------", "XX*XX-----X--XX-----X--X-XX-XXX-----X--X--XX-----X", "XX--X-X--XXX-XXXXX-X---XXXXXXXXX-X--X*XX---XXX-XXX", "X--X--XXX-XX--X-XX-X-XXX-----XXX-XX-X-X--X-XX-X-X-", "XX-XX-XX-X-X--X*---XX---X--*-XX--X--X-XX--X-XX-X--", "X---X-XX---XX-X-X-XX---XXXX---X-XXXXXXXX--*--XXX--", "--XX-XX-X-XXXXXX-X-X-X----XXX-X-XX--XX-XXX-X---XX-", "XX--XX---XXX--X-XX----XX---XX-X-XX-X-XXX-*-XX-XXXX", "X--XX-------XX-XXX--X--XXX--X-XXXXX-XXX---XX-X-X-X", "X--X-XX-XXX-X-X--XXXXXX-X-XX--XX--X------X--X-X-X-", "X-XX-X-----X--X--XXXX-X--XXXXXXX-X---X-XXXXX-----X", "XX-XXX-XXXX-----XXX--X--X---XX-X--XXXX-XXX-X-XXX-X", "X--XX-X-X-----X-X-XX-XX*---X-X-X-X-X--XX--XX-X---X", "X-X--X-XX------XXXX-X-XX--XXX-XX-X---X-XXXXXXXXXXX", "--XX-X-XXX---XXXX---X--X--XX-X-X-X-X-X-XX-X-XXX-X-", "XX----XX-X*--X-XX---X-X-XX--X-*X--XXX----XXX---X-X", "XX---X--XXXXXX-------X-XX--XXXXXXXX-X-XX---X-XX-X-", "XX--X---X----XX-X-X-XX-XXXXXXXX---XX-X-X-X--XX-XXX", "--X-X-XXXX---XX--X----XX-XX-X-XXX-X-X--XX-X-XX---X", "XXX-X-X-X-X-X--X----XXX-X@XX-XXXXX-X-XXX---XX---XX", "--XXXX--X--X*X--X-X-----X-XX-XX--X-X-XX-----XX--X-", "X---*X-XX-XX--XX-XX-XXXX-X--X--X-X-X-X----XX-X-XX-", "XX-XX-X--XXXXXXXXXXXX--X-XXX--X---XX-X*XX-X-X--X--", "XX---XXXX--XX-X--XX------X-X-XX----XX--XXX-XX-XX--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> theMap = {"--X-X---X-XX--X--XXX--X-X------X-X-*---X--XX--X---", "X-XXXX--X*X-X--XXX-XX----XX-----XX--XXXXXX-X--XXXX", "--X-XX-X-X----XXX-XX--XXXXXXX---X------X*-XXX-X--X", "-X-XX-XX-XXX--XX--X-X-X--XXX--XXX-XX--X-X--XXXX-XX", "XX-X-X----X-----XXX-*XX--X-XX--XX-X-X--X---XXX---X", "XXXXX-*X--X-X-X-*-XXX--X-XXXX---XXX-X---X-*---X---", "---X--X-X----X----XXXX-X-XX-XX--XX-XXX-X--XXX-X-XX", "-X*---XXXXXXX*--XX-XX--X---XX-XXX--X-XX--XXX-X---*", "X--X----X----X--X------XX-X-XXXX-X-XXX----XX-XX--X", "XX--X--X-X--X-----X--XX--XXX--XXXXXXX-X---X--X-XX-", "--XX-X-X--X-XXX-XXXX------XX----XXX-X--X------XX--", "XX--X-XXXX-X-XX--XXX--XXXX---XXX-XX-XXXXX--X-X-X--", "--XX---X----XX-X-XXXXX---X--XXX-X--XXXX--XXX-XXX--", "--X----XXXX-XXX-X-XXX-----X--X--XX---------X--XX--", "X-X-X-XX-----XX--XXXXX-X-XXXXX--X--X--XX-X------XX", "XXX-X--XX-X-X---XX-XX-X----XX*X--X-X-X----XXX----X", "-X-X--X--XXXX--*XX-X-XX---XX-X--X--X-X-X--XX---XXX", "XXX-XX-XXX-----X---X-XXX--XXXXX-X-X-X--X-XX-----X-", "*X-XX-X-XXXXX-X---XX-X---------XXX-X-XX---X-X-X-XX", "------XXXXX-X-X-X--X------X--XX-XXXX-X--XXX---XXXX", "-XX-----XX--XXX-X-XXX-----X--X-XX-@X-X-X-XXXXXXXX-", "XX--X--XXXXX---XX---X------XX----XXX--XXXX-X--XX--", "XX-X-XXX---XXX-XX-XXXXX--XX--X------XX-XXX-XXX-XX-", "X---XX--XXX-----X--X-XX-XX------XXX-X----XXXX---X-", "-XXXX-XX-X-XX-XXX----X-XXX-----XXX--X---XX-XXXXXXX", "X-XXX--XXXXX---XXXX-XX--X-X---XX--XX----X-XX-XXXX-", "XXXX-X--X----X---X-XXX-----X---X-X---XX--X--XXX-XX", "X-X--XX-X----XX-XXXX-X-XX-XXXX-XXXX*XX-X-XXX--XX--", "--X-XXX--XXXXXX-X---*-XXX---XXX--X-XXXX-XXXX-X----", "X-X-XX--X--XX-X-XXX-XX-----X-X----XXXXXXXX-X----X-", "-XXX--XX---XXXXXXXX*-X-X--X--XXXXXX-X-X-XX--------", "X-X--XXXXX-X--XXXX-XXXX--XXX--XXX--X-X-XXXX-X--XXX", "XX-X--X-XXXXX-XXXXX-X-XXXX--XX-XX-XXXX--XX-X-X---X", "--X--X-XXX--X--X-XX--XX----X--X--X-XX-X--XX--X-XXX", "XXXXX---XX--X--XXX-X---X---X-XXXX-X-X--XX---XXXX-X", "*-XX---X--XX*X--XXX-X-XX----X--XX----XX-XXX--X-X-X", "-XX-X-----XXXXXXXXXX-XX-X-XXXX-XX*---X--XX-XXXX-XX", "------XXX---X--XXXXX--XXXXXX-X-X---XX--X-XXXXXX*XX", "X----X---X-XXXX--XXXXXXX---*XXX--XXX-X--*X-XX-X---", "X-----X-X--XXXXX--XXX---XXX-X-X---X----X*--X-X----", "XX-----------XXXX-XXX-X-X--X----XX--XXX-XX*X--XX--", "-X-X*X-X----X-XX-XX-XX-----XXXXXX-X-XXX-X--XX-XXXX", "X-XXX---X---XXX-XX-----X-----XX-XX----XX*-X--XX--X", "--XX--XX-XXX-X-XX--X---XXX-X-XX-X-XX-XXX--XX---XX-", "XX---X-X-X-X----X-XXX--X--XX-X--XX-------X---XX--X", "-X-XXX-XXXX-XXXXXX-XXX-X-X--XXXX----X-X---XXX---XX", "-X-X---XX-XX-X-XX-X--XXXX---X--X---XX-X--X-X-XX---", "-XXX---X--XX--XXX---XXX-----XXX--XXXX--X-X--X-X-X-", "XX-X---X----XX-X-X-XX-XXXXXXX-X*-X-X-XX------XXX-X", "XXX-XX--X----XX--XX--X-XXX-XXXXXX--XXX**XX-XX--*-X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> theMap = {"X---*--XXXXXXXX--X-X--XX---XX--X--XX---XXX-X---XXX", "XXXXXX-X-XX--XX-X-XXXX---XX--XXXXXXX--XX--X----X-X", "XXX-XXXX-XX-X--X--XXX@X--X--XX-XXX--X-XXXX----XX-X", "X-X----*X-XXX-XXX-X-------XX-X--XX---X-XXXXX-X--X-", "--X--X--X-XXX---X-XXX-X---X--X-X---X-XX-XXXX-X-XX-", "------X--X-X-X-XX----XXXXXXXXX--XXXXXXX-XX---X-XX-", "X--XX-X-XXX-X-X--X----XXXXX--X--X-X-X-X--X-----XXX", "-XX----XXXXX--XXX-X-XXX-XXXX-XX--XX-X--X-XX---*-X-", "--XXX---X*---XXXX--XXXXX-X--XX--X-XXX-----X-X-XXX-", "--X-XXX-X-X---XXX-XX-*X--XX--XXX--X-X-X-XX--X-XX-X", "-XXXX*X---X*X-X--XXX------XXX---X-X--XXX--XX-X-XXX", "---X-XX-X-X---XXXXXX-X-XX-XX---X--XXXXXXX---XX*--X", "-X-X-X--XXXX-X------X-XX----XX---X-XXXXXX--X---X--", "---XXXXXXX-X---X-X--X--XXX--X--X-X--X-X-XX-X-X-X-X", "X---------X-XX-XXXX-X-X--XX-X-XXX-X--XX-X-----X-XX", "-*XXX-X-XXXX-X-X-----XX---XXX-X-X-X-XXX---XX--X-XX", "X-XX-*X-XXX-X-X-XXX-X**XXX-X--X-X-X--XX--XX-------", "X-XXXXXX--X--XXXX-X-X--------X---X----XX---X*-X-X-", "XXX--XX-XX-------XX-XX-XXXXX-X--X-X-X-XX--XX--X---", "XX----X-----X--XX--XX-X-XXXXX-X-X-XX---XX----XXX-X", "--XXX------XX--XX-XX-XX---XXX-X-X-X-X-XXXXXXXXX-X-", "XXXXX--XX-XXXXX--X--X-X--X-XXX--X---------XXX-XX--", "-X--X--XX--XXX-XXX--XX------X-X-XX---X-XX----XXX--", "XXXX-X--X-XXX--X-XXXXXXXX-XXXXX-XXXX--X---X--X-XX-", "-XX--XX--X--XX---XX---XX--X-XXX----XXXXXX-XXXX-X--", "---XXXXX--X--XX-XXX-XX--X--X--XX-XX-XXXXX----X-X--", "XX----XXX----XX-XX-*--*-X-XXXX-XXXXXXXX-X-X---XX-X", "--X---XXX-XXXXXXXXXXXXX-XXXXXXX--XX--X-XX--X--XXX*", "-XX---X-X--X-XXXXX-X-----X-X--XXXXX-X-X-X---X--XXX", "X-X--*X-----X--X-----XX-X--X---XX-XX-XX-X-X--XXXXX", "-X--XXX----XX*------XX-XXX-X--X----XXX--X-XXXXXXXX", "--XX--XX-X----XX---XX-*-X----XX--X-X-XXXXXXX--X-X-", "XXX-XXXXXXXX---X-X-XXXXX--X---X-XX-XX-XX-XX--X-XX-", "-X-XXX--XXXX-X------XX--X*-------XXX-XXXXXX--XXX-X", "XX-XXX--XX-XXXXXX--X--X--XX---X-X-XX-----X--XX-XX-", "-X-XX--X------X-X--X-XXX------X-X--X-----X-X--X-X-", "XX---X-X---XX---XX-XX-XX---X-XX----XXX------X-X-XX", "-X--X-X-X--X----X-X---XX---X-X-XXXX--XX*---X--XX--", "XXX--X-XXXX---X-X--X-X---*X---X--X----XXXXXXXXX--X", "X-----XX-XXX--XXX---X-X------*--X--X-XX----*-X-XX-", "X--X--X--XXX--X--XXX--XX-XX-X--XX-X---XX-X-XX---X-", "------XX-XXXXXX-XXX---XX-X-X-XX*X-XXX--X--X--X-X-X", "X-X-XXX---X---XXXXXX*--X-XXXX-X-X--XXX---X-XX-XXX-", "XX-XX-X--XX----XX-----XXX-XXXX--XXXX-X--XX----X-X-", "-XX-XXXX-*X-X------XXX--*--XX---XXX----XXXXX-X----", "XXX--X----X*----XX--X-XX-----------XX--XX-XXX--XX-", "XXXXXXX-X--XX-X-XX----XX--X--XXXX--X--X-XX-XXX--X-", "---XXXX--X-X----X-X-X-X-XXXX---XXX--XX--XX-XX-X-X-", "----X---XX--XXXX-XX--X-X-XXXX----XXXXXXX-XX-X--XX-", "X-X-*-----XXX*X----XXX-XXXX------XX-X-X-----X--*-X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> theMap = {"XXXXX--XX--XX-XXX-X-XXX--XXXXX--*X----XXXX--X---XX", "XX----X-XX--X-XXX-----X-XXX--X----XXXXX*XX-XXXXXXX", "-X-X--X-XXX---X---XXXX--XX*XXXX---X---XX-XXX--XX--", "X--X----XX---XXXXX--XXX--X-XX----X-X-X--X-----X--X", "X--X-*XXXXXX-X--X----XXXXX-X--X--X--XX---XXX--XXXX", "-X--XXXXXXXX-XXXX-X---X---X---X-XX*-XX-X---X--X-XX", "--XX-X-X------XX-XXXX-X-X--XXX--XX-XXXX--X-XXX---X", "----XXX-X-X--X--X-XXX-X-XX--X--XXXX-X-XXX*-X-X-X-X", "---XXX-X--X-X-XX-XXX-X-XXX-X-XX--X-XXXXXXXX--X-XX-", "*-XX-X--X-X--XX------XX--X---X-X--X-X--XX------X--", "-X-XXXXX-X-XX-X----XX-XX---XX---X---X*--X--XXXXX--", "X-XXX---X--XXX--XX-XX------XXXXX-X-XX--X-XX------X", "X---X-X---X-*-XXXX-X-X-XXX--XXXXX--X--X--XX-XXX-X-", "-XX-XX--XXXXXX--X-*--X---X---X----XXXXX-X-X---X-X-", "X*--X-X---X-XX--XXX-XXXX--X*---XX-XX--XX-*------XX", "-XXX--X--X--X--XXX*X-X--XX--XX--X-XXXXX-------X--X", "XX--XX-XX-X-XX-X---XXX-XXX------XXXX------X*X-X-XX", "-X-X---XXXX---XXX-X----X--X-XXXX---X--XXX-X--XX*X-", "X-----XX---XX---XX-X--XX--XXXXXXXXX--XXXXXX-XX-XX-", "--XX*-X--X-XXX---X-XXXX----X------X-X-XXX-X-X-XX--", "--X--X-XX--XXX-XXXXXX-X--XXX-X----X*-*-X----XX--X-", "-X--X--XX-X-X--XXX-XXX-XX--X-X-XX-X--X-X--XX-X----", "--XXX-XX-X*-XX--X--X-X----X-X-XX-X-XXX---X--XX-XX-", "X----X-X--XXXX-X--XX@-X---X-X-XXXX---X----X---XXXX", "XXX-----X-X*-XX-X-----X-XXXX-----X--X-X-X-X-XXXX-X", "X-X-X-X-XX-XX--X--X--XXXX--XX-XXXX-XX----X-XX-X--X", "--*XXXX--X--X-X---X-X-XX-X*X*XXXX--XX----XXX-----X", "XXXXX-X--XXXX---XX--XXX-XX*-X*-X-X-X-XXX-XX--XXXXX", "XXXX-*-XX---XX-X-XXXXX-X-X--XX-XXX--X-XX-XXXXX-XX-", "XXX---X---XXX--X-XXXXXX----XXX-X--XXX-X----XX-X--*", "-XX----XXXXXX-X-XXX-X-X-X-X--X--XXXX-XXXX-XX----X-", "X--XXX-----X---XX--X-X--XX-XXX-X-X--XX-XX*X-XXX-XX", "XXX-XX-X-X-XXX---X--X-X-X*XXX---X-X--X---*X--X----", "--XX-X--X-*-X-XX-X--------X*XX--X-X-X-------X--XX-", "-X-X----X-X-XXX-X-X*-X---------XX-X---X--------X-*", "X-XX--X-XXXX----X-X*XX-XXX-XXXXX---XX-----X--XX-X-", "-X-XXXXX----X-XX-------X-X--XXX-XXXX--X--X-X-XXX-X", "X-XX--X-XX---X--XXX*-XXX--X-XXX-X--XXX-XX-X-XX-XX-", "XX----X---XX-X-X------XX-XX-XX-----XX-XX--XX--XXX-", "X-X---X-XXXXX-X-XXXX-X--X--X---XXXXXXX*-X--X-X--XX", "-X-XXX-XX-XX-----X-X-XX-X-X-XX-X--X-XXXXX-X--X-X--", "X-XX---XX---XX-X-XX-X-XX--X-XX--XXX-X-----XXX--XX-", "X*-X-XX--X--XX--X-XXXX--XXXX--XX-X-X-XXX-X----XXXX", "X-XX-X-X--XX--XXXXX--X-X---XX*--X-XXX-X-XX--X----X", "-XXXXXXXX-XXX-X--XXX--X--XXXX--XX-X-X*---X-X-XXX--", "X--X---XX-XX-X-X-X-X-XXXX---XXX-XXX-X-X-XXXX-X-XXX", "XX-XXX-XXX-X--XXXX--X--*X---XXXX--X--XX-X-X----X--", "--XX-------X-XX-XX-X--X-X-X----X-X---XXXXXX--X-X-X", "---XX--X--X---X-XXXX-X-X-X-----XXXX-X--X---XX-X-XX", "-X--XXXX-X*--X-X--X-X-XX--*----X---X-X--*XX--X-XXX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> theMap = {"-X--XXXXXXX-X--X----------X-X-XXXX--X-XX*--XX---X-", "-XX--*XXX-----XX--X---X-X--X--XX-X--XX-XXXX-----X*", "--XX-X---XXXXX-XX-X------XX-X-X*XX-XXXX--XX--XX---", "-X-X-XX-XX-X---X-X--X-X------XX-X-XX-XXX----X-----", "-X--XXXX-X---XXX-XX--X-XXX-XXXXXXX--X---XX----X--X", "X--XX-XX-XX---X-*--XXXX------XX*---X-XXX--X-X-X-XX", "X-X-X---X-XXX-XX---XX-XXXXXX-XX-X--XX-X-----X--X--", "XXX---X-X-XXX---XXX-XXXX--*XXXXXX---XX--XXX-XXX-XX", "X-X---XX-X-XXX-*-XX-XX-X--XX--X---X--X---XXXX--XXX", "XX--XX-XXXX-XXXX--X--X--XX-X--XX-XXX-XXXXX----X---", "-XXX-X--XXX---XXXX--X-XX-XXXXXXXXXXX-X--X--XX-----", "--X--X-XX--X-XX-XXXXX-X*-XXXXXXXX---X---XXXX---*--", "X--X---X---X-XXXX-XXX-XX-XX--@XXXXX-XX*XXX-----X-X", "-X--XXX--XXX-X-X--XX--XX-X---X--XX--X--X--XXXXXX--", "XX-XX-X---XXXXXX-XXX-XX-XX-X--X-X-XXXXXX-XX--XXXXX", "X-XX---X-----XX-X--X-X---XXXXXXX-X-X--X---XX-X--XX", "--XX--XXXXXX-XX---X----X-X-XXXXX-X-----X-*XXXXX-X-", "---X--XXX-X--X-XXXX--X-XXX-X---X-X-X-X-XXXXXXXX-X-", "X---X--X--X-X--X-XXXXX--X---XX-XXXXX--XXXXXX--XXXX", "-XXX--X*XXXX-X--X---X--X-XX-XXXX-XX---*--X------X-", "XXX-X---X----X-X--X------XX-X--XX-X-X-XXXXXX-XX-XX", "--XX-X-X-XX--XXXXXX-X*----X--XX--*XXXXXXX--XXXX--X", "--XX--XXXXXX--XXXXXX-XX--X-XXXXXX-XXX----XXX-XXX-X", "X-XXX-XXX-X--XXXXXX--X-XXXXXXXXXXXXXX-X---XXXX-XX*", "X------XX-XXX---X--XX----XX-XX--X----XX-XX*XX--X-X", "XXX---X--X-X--X--XXXX-XX--XX-----XX-X-XX-----XX*X-", "XXXX-XXXXXX---X-XX-XX---X-X-X-------X--XXX-X-----X", "-XX--X---X-X--X-XX-----X-XXX-X----XX-XXXXXXX-X--X-", "XXXX--XX--X-X---XX-XX-X--XXXX-XX-XX-X-XXXXX-XXXXX-", "----XXX-X-XX-X-XXX-X-X----XX-X-XXX---X--X-X---X--X", "XX-X-----XXXX-XXXXX---*---X-X-X--X---*XXXXXXXX---X", "X----X*XX-----X-X--X--------XX-X-XX---X--XX-XXX-XX", "X--X---XX-XXX*XXXX-XXX-*X-XX----X-X-X-XX-X---XX--X", "XXX--X--XXX--X-XXX-XX---X---XXXXXXX---XX-XX-X-XXX-", "X-X----X--X--*XX-X-X---X--X--XXX-XXX-X----------XX", "XX--X---XXX-X---*XXX-XXX*XXX*X-XX--XXXX-XXXXXX-X-X", "X--XXXXXX----XXX---X-X-X--XX---XX--XX-XXX-X---X---", "XX--XX-X-XX-XXX-X-XXXX*XXX----XX--XX-X*X--X-X-X-XX", "X-X-XX-X--XXXXXX-X-X--XXX-X-X*--X--XXXXXX-XXX--XX-", "X--X-X-XX-XX--X-X-XXX---X-X-X-X-XX-XX*-----XXXX-X-", "-XX----XXXXX-XXXX-X-XX--XX--XX--XXXXXX-X--*XXXXXXX", "-XXX--X-X--X--X------X---X-XXXXX-XX-XX---X-X--X-X-", "XXXXX--X-XX-XXX-XX-X--X--XX*-X-X-X-XXX-XX--XXXX-X-", "X-X-XX-XXXX--XX--XX----X--XX--X------X-X-X-XXX---X", "-XX-X-XX--X-XXX-X-*X---XXXX--X-X-X--XX-XX-XX-X-X-X", "XX-X-X------XX--XXXX---X-----X-X--XX--XXXXXXX-XX-X", "X--XX-XX-XX----X-XX-X-XXXXXXXX-X-XX-XX-XX---XX-XXX", "X--X-*-XXX---XXXX----XX-X-XXX--XX---XXXX---XXXX-XX", "XX---------XX---X---XX--X-XXXX-XXX-X---XX--X-X-XX-", "X-X---------XXX-XXXXX--X-XX-X--XX-X-X-XXX-XX-----X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> theMap = {"XX--XXX--XX-----XX---X----XXXXXXX------XX-X--XX---", "-XX-X-X-*X-X-XX-X-XXX--XXX-XXX--X-XXX-X-XXX--X-XXX", "XXX-XX------XX--XX--------XX-X*X-**XXX-X--XX-XXX--", "X--XX-X-XXX-X-----X-X*X-XXX--X-----XX-X-XXXXX-XXX-", "X--X-XX-X-X-X---XX-XXXXX-X-XXXXXXXXX-X-X--X------X", "--XXX-XXXXX-XX*X----X--X--XXX--XXX-XX--XXXXX--XXX-", "XXXX----XX-XX---XX--X-X---XX-X---X-XX-X-XXXXX-X-XX", "-XXX*-X--X-X-XXX*X----X--XX--X---XX-XX---X-X---XXX", "X--X-XX-XXXX------X--XX-XXX---X---X-XXXX-X-XX--X-X", "-X--XXXXXXX---X--X-XXXXX--XX-*XXX-XXXX---XX---X-XX", "XXXXX-X-X-XXXX--X-X-X---XXX-X-X------XXXXXXXX---XX", "X-X-X----XXXXXXX----XX-----XXX-XX-X------XXXX-----", "X---X-XXXX--X-X-XXXXX*X--X-X-XXX---X-X--XXX--X--XX", "-XXXXXXXXXXXXX-XXX*XX-X--XX---X--XX*XX---XXXX-XX--", "XXX-XXX-XX----X-XXXXX-XXXX----XX-XX---X-X--XX-----", "-X--XXXX-X*--XXXXX-XX-X-------XXXX--X-X-XXX--XXX-X", "XX-XXXXXX--*-XX--X---X--X-----XXX--XX-X--XXXX---X-", "X---XX-X-X--*--X--XXXXX-XX--X-X-X-XXXX--X-X--X-XX-", "X-XXX-X--X-----X-----XXXXXX-XXXX---X-X-X-X-XXXXX-X", "X-XXXX-XXX-X--X--XXXX-X--XX---X--X----XXX--X---X--", "XX-XX--XX-----XXX-XXXX-XX---X--XXX----XXX-XX-X-X--", "----XX-XXXXXXXXXX--XXXX-X-XX-X----XX--XXXXXX------", "--XXX-X---X-XX-X-XXX-XX-XXX-XXXX*XXX-XXX-X--X-XXX-", "X-------X----X--XX----XXX-XXX--X-X-XXX-X-X-XXX-X--", "-X----X-XX--X---X---XXXX--XX-X-XX---X---X-XX-X----", "X-X*X-X-XX-XX-----X-XXXXX--X-XX-XX-XX-X--X-X-X-XXX", "X*XX---X-X-X--XXX-------XXXXXX--XX--XXXXX----XXX-X", "XX--------XX-XX-XXX--X-X-XXX--X---X-XXX---X-X-XXXX", "X-XX-XX--X-----X--X-X-XX----X-*XX---X-X-XXXXXX**XX", "X-XX-XX-X---XX---X-*X-X-XXXX--X-X-XXX-XX-XX-X---X-", "-XXX*XXX*-X------XXX---XX-XX-X--XX-XX----X-X---X-X", "--X-XXXX-XXX-XXXX-XX-XXX--X---X--X----X-X--XXX-XXX", "-X---XX--XXX-XX-X-XX-X-X-X-X--X-------X---X-X---XX", "XX--XX-X-X-XX-X--X--XX--XX-XX-X--X-XXXXXXXXXXXXXXX", "X--X--*--X--*XXX--XXXX-X--X----XXX-X--X-XX-X--XXX-", "X-XXX-X-XXX--XXX-XXX---X---X--X-X-*X---XXX-X-XX@-X", "---X-X*-XXXXX---XX--XX-X----XXX-XX-XXXX-XX-X-XX--X", "X-X---X-X--*X--X-X-XXX-XXXX-XXXXX-XX----X-X-XX----", "-XX--X-XX------XXX-XX----X-X---X-XX-XXXXX-XX---X-X", "X---XX----X-XX--X---X-XX-XX----X-X-XXXX--XXX--X-XX", "---X-XX-XX---X----X-X-*-X--XX--X--X--XXX----XX----", "XXX----XX--XX--X----XX--X---X*--X-XX-*--XXX---X--X", "XXX-XXX*X-XX*XX-XXXX---XXXXX-X--XX--XXXXX-X-XXXXX-", "X---X-X-X---X--XXX-XX-XX-X---XXX-XX*-XXXXXXXXXXX--", "-XXXX*X-X---X-XX---X-----------XXXX--X-*X-XX-X-XXX", "-XXXXXX-XX-XX-X-XXXXXXXX---XXX-X*-X----XX--X----XX", "-X--X--X-X--XXX----XX-X-X--X-XXX-*XXX-X-XX-XXX-X-X", "--------X-XXX----XX-XXXX------X*XXX----X--XX--XXX-", "X-X-X---XXX-X--XX-X-X-X-XX*X*-XXX-XX---*--X-X-----", "X----XXX-X-X--XXXX-XXXXXX-XX--XX*XX--X-----XXXX-XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> theMap = {"-X-------X--X-XX--XX-XX*--X-XXXX-X-XX--XXX--X-X-X-", "--X-X--X-XX---XXX-XX-X-X--X---XXXXXX-X--X-X-XX---X", "X-XXX--------X-XX-XXXXX--XX--XXXX--X---XXXX--XXX--", "X-XXXX----XXX---X--X-X-XX--X-X-XXX-X-XX---XX--XXX-", "X-----XX-X-X----X------*X--X-XXXXX--X-XXXX-X-X-X--", "---XXX----XXX-X-XX-X-X-XXXX---XXXXXX--------XXX--X", "X-XX---X-XX--*-X---X--XXXXXX-XX-X--X--X-X-X---X--X", "X--XXX---X-XXX--XXXX--XX-XXX--X--XXX--XX--X--XX-XX", "---X-----XXXXXXXXX-X---XXX--XX--XX-X-XXX---XXX----", "--X-XX--XXXX-X--X-XX--XXX-X-X-X*-X--XXXXXXXX-*X-XX", "X-X--XX--X--XX-X--XXXXX---XXX-XX--X--XX-XX-X-XXXXX", "--X-*XX-XX-X--XX-XX-X-X-XXX-XX-X--XXX---XX--X-XX--", "XX--XXXXXX---XXXX--XX---XX--XXXX-X--X-XXXX--X--XXX", "--XX-X-X--XX-X-XX--XX-X--XXXXX--XX---X----XX--XXX-", "-X-X--X------X-XXXX---X-X-XX-X-----XX-X---X-X-XX-X", "-XXXX-------X-X-X----X--XXXXX-X---XXXX-XX-XXXXX--X", "XX---X-XX-X--X--XX--X----X----XXXXX--XX---XXX-XX--", "-XXXX-X-XXX-X--XX--X----X------X-XXXXXX-XXX----XXX", "-XX-XX-XXX-*X-XX---XX-XX--X-XX---XX----X*-X-XXX-X-", "--X-XXX--*XX--X-X--XXXXXXXXXX--X---XX--X--XX---X--", "XXXXXX-XX-XXX--X---X-XXXX-X-X-XX---X--XXXXX----X-X", "-X-XXXXX-XXX-X---XX-X---X--XX--XXXX---XX--X--X-X-X", "---XXXX-XXX--X-X-X-X-XX-XX--X--XX-XX--XXX-X-XXXX--", "-XX-XX--XX--XX-X--XX--XX----X--X-XXXX--XX-X--XXXXX", "X--X----X-X---XXX-XX--X-X-X-XX--XX--X-X-----X--XX-", "--*-X-XX-X*-X---XXXX-XXXXX-X---X--X-X-XX---XX-X---", "-X-XXXXX--XX--X-X-X--X----X--XX-X--X-X-XXX--X---XX", "XXX-XX-X*X--X-XX-----XX-XXXX-XX-XX---X--XXX-----XX", "XX--X-X*--X-XX-XXX---X---X--XX-X-X--XX-X---XX-*XX-", "X-----XX--X-XXXXXX--XXX-X-XXX-X--X---X-X-XX--XXXX-", "--XXXX--XX-X--XXX--X-*X-XX------X*XXX---XXXXX-XXX-", "-X-X*X-X*XX--XX--X-XXX-XX-XX--XXX-XX--XX-XXX-X----", "----X--X-XX-X-X-X------X-XXX-*XX--XX*-XX-XX---X---", "----XXX---X---X-XXX--XXX-XXX--X--XX----XXX-XX--X--", "XXXX-XX---XX---XX--X-XX-XX--XX-XX---XX---XXXXXXX--", "---XX--XX--XX-XXXXXXXX-X-X-X-X-XXXX-X--X--XX-X--X-", "--XXXXX---X--XX--X---X----X-XX---X-XX--XX-X*X-XXX-", "-XX-X-X-X---X--XX--XXX-*XX--X-X-XX--XX-X-XXXX---XX", "-------X-X--X*----XX-XXXXXX-X-X--X-X----------X-X-", "XX---XXXX-X--X--XX-XXXX-X-X--XXXXXXX--X-X--XXX-XX-", "X-XXXX-X*XX---XX-X--X--XXXX--XXXX-----X----X-X----", "XX-X-X-X---X---XXX-------X----XX--XXX--XXXXXX-XXXX", "--XX*XX--X-XXX-XXX-X-XXXX--X-X----X-XX-X---XXX-X-X", "---XX---XXXXXXX*XXXX--XXX-*-XX--XX-XX-X-XX-X--XX-X", "X-X-X----XX-X--X-X-XX-X-XX-X-XXXX-X-XXXX--X-XXXXXX", "X---X---X--XX-XXX--------X*--X----XX---XX*X-X---X-", "X-X---XXX-XXX-X--XX-X-XX-XXXXXXX-X@XX---XXX-X-XX-X", "--X------XX-XX---XXXX-X-XXXX-X--XXXXXXXX-X-----XX-", "X-XXX--X-----XX---X*-X---X-X-X--XX--X-XX-XXX-XX-XX", "XXXX--X--XX-XXXX-X---XX-XXXX-XX--XXXX-X---XX----XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> theMap = {"------XX---XXXX--XX-X---XX--XXXX---XX-X----X-X-XX-", "X----XXXX---X--XXX-XXX--XXX--XXX-X--X-X--X--X-XXX-", "---XX--X--*X-XX--X-X-XX-XX--XXXXX*X-XX------X----X", "----XX----X-----XXXXXXX-XX---------X----XX-X-X-X-X", "-----XXX-XX-X-X----XXXX-X-XX--X--XX-XX--XX----X-XX", "-X*XXX-XXX---XX--XXXXXXXXXXX--XXX---XXXXXXX-XX----", "XXXXX--XXX--XXX-X---XXX-XX-X-XX-X-XXXXXXXX--X--XX-", "-X----XXX-XX-XX--XXXXXXX-*-XXX--X--XX------X-X---X", "X-X--XXX-X-X-XX-XXXXX-XX-X--X---XXX-X----XX-XXXXX-", "X-X-X-X-X----X-X-XXX--XXXXX-XXX-XX------XXX--X-X--", "XX--XX-XX------X*-XX--XX--X--XXX--XX---X--X-XX-X-X", "X-X-X---XX--X-X-X--XX-XX-X-X-X--X--XX-XX-X-XX--XXX", "--XXX----XX*-XX-X-X-XXXXX-X-XXXX--X-X---X-X----*X-", "--XX-XXXXXX-X--XX--X--XX-X--*XX-----XX---XXXXXXXXX", "X-XXX-X-XX-X--XXX*XX-XX-XX---X*-X**XX---X-X-XXX-X-", "--XX-XXXXX-X---X-XXX-X--XXX-X-X---XX---X-XX-XX--X-", "---XX---XX--X-----X-XX--XX-X-X-X-XXXXX----XX---XX-", "-XX----XXXXX-XXXXXX---*X--XX-X-XX-X---X--X-X--XXXX", "X-X-X-XX-X--XX--X-X---XX----XXXXXX-XXXX--X-X-XXX--", "--XXXXX------X--X-XX-XXX--X--*XXXXXXXX---X--X-X-X-", "XX-XX-XXX-X-XXXX--------XXXX-X-X--XX---XXXXX-XX---", "X--X-XXXX----XX---XX-X-XXX--X-------XXX--XXXX-XX-X", "X----XXX-X-*XX--X-X-XX--X---XXX--X----X-X-----X--X", "-XXX----XX--XXX---XXX---X--X-XX-X-----XX-XXX--XXXX", "-XX-XXXXX----XXX-XXXX*XX-X-XXXXX--X-XX-XX-XXXX--X-", "XXX--XX-X-X------X--XXXXXX-XXXXX-X-X---XXXXX-XXXXX", "XXX-X-X-XXXXXX-X--XXX-XXXXXX-XX*--XX-XX--XXXX-X-X-", "X--X-XX-X-XXXXX------X-XXX-X--XXXXX---X-X-XXXX-X--", "XXX-XXXXXX-XX-X-XXXXX-XXXXX-XX-XXXXXX-XXX-XX---X-X", "-X---X--------X-----*--X-XXX-X----XX-XX-----XXX--X", "XXXX@XXX--X--XXXXXX---X--XXX-XX-----XXX-----X-XXX-", "XXX--XX---X---XX--XX--XX-XXXX--XXXX-XXXX-X-XX-X--X", "XX---XX------XX-XX-X-X*-XX*-XX-X-----XXXX---X-XXXX", "-X-X---XX-X--XXXX--XX-X-XXX-X---*--XX---XX--XX-X-X", "X-XX-XXXX--*-X------XX-XX-----XX----XX*-XX-*---X-X", "XX--XX-XXX--XXXX---XXXXXXX-X-XXX-XX-XXX-X--X*XX---", "-XXX---X-X-XX---XX-X*XXX*---X--X--XX--XXX-XX-X-*XX", "XXXXXX--XX-----*-XX----XX--XXXX-XX-------X--X--XX-", "---XXXXX-XXX-------XXXXX-X---XX--X-X-XXX---XXX----", "-XX-X--XX-XX-XXXX--X--X-X------X---XXXX-X-XX-XX-XX", "--XXX-X---XXX-X-XX--X--XXXX--X-X--XXXX--XXX--X--X-", "--X-X-X-X-X-X-XX-XXXX-X-X-X---XX-X--*XX-X-------XX", "--XX-XXXXX-XX*--------XXXX--XXXX--XX-X-X--XXX-X---", "-X-X-X----XX----XX---XXXX--X--XX-X-X--X-XX-X--X-XX", "X---XX-X-X-XXX*------XX-X-XX---X----XXX----XX-XX-X", "----X--X-XXXXXXXXX-XXX-XXX-X--X--XX---X------X-X-X", "-XXXXX-XX-X--XX---X---XXX-XXX-XXXX-X--XX--X---X---", "-----X-XXX---XX----XX-XXX-X---X--X--X-X--XXX---XX-", "--XX------XX---XXX-----XX--X-X-XXX-XXXXXX-XX--XX-X", "---XXX--XX-X-X--XXX-X*-XX-X--X------X-X-XXXXXXXX--"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> theMap = {"--X---XXXX----XX---X--XX--XXXXXXX-------XXXX-XX-X-", "---XX---X-X-XX--XX----X-X-XX--X-X*X--XX-XX-XX-XX-X", "-XXX--XX-X----X-X--XXX*X-XXXX---XX---XX-XXXXX--XXX", "-XXX------X--XXX---XXX-XXX--XX--X-XX-XX--X-X-XX-XX", "X---XXX--XXXX---XXX---XX-XX--X-------XX-*---XX---X", "X--XX--X-X-XXXX------XX-X-----X-XXX-X--X--X-----XX", "--X-*---X---X--XXX----X-XXX--X--X----XXXXX---XX-XX", "XX--XX---X---X-X--X---X-XXXX--X-XX----XXX-X-XX--X-", "---X---*-*-*----*-XXXXXXX-XXX-X--X-X-----X---X-XX-", "-XX-XXX--X-XXXXX-XXX*X--XXXX-X--X-XXXXX---X-----XX", "---X-XXX---XX----X-X-XXXX-X-XXX---X-----XXXX-XX---", "---XX-X----X-X*-X-X------XXXXXXX--XX---X--X-X---XX", "XX-X-XX-XX-X-XX-X--XXXXXX-XXX----X--XX---X----XXX-", "X--X-X-XX-X-XX--XXXXX-XX-XXXXX-XXX--X------X-XXX--", "--XX-XXXX---X-XX-XX----X--X-X-----X--XX-XX-X-X-XX-", "XXX--X---X-XX-XX-XXXX--XX-X-X--X*XXXXX-X-XX--XX--X", "XXXX--X*XX-X--XX--X--XX---XX*-XX----------X-XXX---", "*X-XX*XXXXX--XXX----XXX-X---X-XXXX---------XXX-XXX", "XXX-XX----XXXX-XXX-XXXX-XXX---XX---XX-X-XX--X-X*X-", "XXX--XX---XX----XX-X-X---XXX-X--XX--XX-------XX---", "-XX---XX-X---X---X----XX---XX*XX*-X-XXXXXXX-XX-X--", "X-XX-XXXXXXX-X-X-XXXXXX---XX----X-X---XXXXXXXXXX-X", "-X-X-XXX---XXXX-X--XX-X-XXX---X--X-XX-XX--X-X--XXX", "XXX-XX-XX-XXX-XX-XX-XXX---XX-X--X--XX-X-X-X-X-X-XX", "X--XX---XXX--X*---XX---X-XXX--X-----X---XX--X-X-X-", "X-XX-XX---X-XXXXXXX--X-XX-XX--XX-X-X-XX*----X--XXX", "X-XX-XXXX-X--XXXXX-X*XX--XX----XXX-XXX---XXXX----X", "--XX---XX-XX-XXXXX--XXXX--X-XX-X-----XXXX---X-X--X", "-XXX-X---XX--XXX-X-X-XX----XX*XX-XX-X-X-XX-X--X-*-", "-XX---XXXX-XXXX-X-X--XXX-X---X--X-----X-X---XXXX--", "XXXXX----XX--XX---X-XX-XX-XXXXXX--XX*---X-XXXXX-X-", "X---X--XX-XX--XXXXX-XX--XXX---XXX*X--XXX---X---XXX", "X--XX-XXXX-------XX--XX-XXXX-XX--X-X---X--XXX--X--", "X-XX-X-X--XX-XX--XX-XXX-XX-XX--X-X-X-XXXXXXXXX--XX", "X-XXX---XX-X-XXXXXX---XXXXX-XXX--XX--XXXX-X---X-X-", "------X-XXXX--XXX--XXX--X-X----XXX--*-XXX-X---XX--", "XX-XX-----XX-----X--XX-XX-X---XXXXX--X-XX-X---*XXX", "X--X--X---XX---XX--XX-X--X-X---XXXXX-X-X-X-X-X-X--", "X-XXXX-X--XX--*X-XXXXXXX-X------XX--XXX-XXX-XX-XX-", "*X-X---XXXXX--X----*XX-X-X-X-XXXX-X-XXXXX--XXXXXX-", "--X-X--X---XXX*-XXX-X---X--X--X------X--X-XXXX-X-X", "-X-X-X--XX----XX-X-X---X-X-XXXXXXXXXX-------XXX-X-", "---XXXX-XX-X-XX---XXX-X---X---X--XX--X-XX----X--X-", "---XX-XX-X-X-XX-XX-XXXXX-X-@XX---X-X-X-X-XX-X-XX-X", "-X-X--XX---XX---XXX-XX-X-----X-X------XXX-X-XXXXXX", "-X--XX-----XXX-X--XXX-XX--XXXX--XX--XX----X-XXX-XX", "-XXX---X---*XX-XXX----XXXX---XXX----XXX-XXX-XX-X-X", "X-XX--X-----XXXX--XX-X-X-----XXX-X-XX-XXXX---X*XX-", "----X-X---X--XXX--XX-XX-XX---XXX--XXXX---X-XX-X--X", "X--XXX-X-XX--*XX---XX--XXXXXXX--X-X-X----X--X*--X-"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> theMap = {"-XXXXXXX-XXX-XXXX--XX-XX-----XX--XXXXX--XXXXX-X--X", "-X---X-X---X--XXX---X-------XX-XX---XXX--XX-XX-XXX", "X-X*--XXX-XX--X--XX-X-X-X--XXX--X---XX-X-XXXXX*XXX", "---XX---X-X-XXX-XX-X--X--X--X---XX------X-XXXX----", "XX----XXX-X--XXX-XX---XXXX---X-X--*--X--XX-XX----X", "XX-XXXX-XXXXX-X--XX--XX-XX--XXX-X-X-X-X-XX-XXXXX-X", "XX---XXX-XXXXX--XX--XXXX-X--X---X-XXXXXX--X-XX-XX-", "XX-XX---XXX--X----XX-XX----X--XX---X--X-X--XX-XXX-", "X-------XXXX-X-XX--X-----XX---X-XXX-XX---XXX-X-X-X", "X------XX-XXXX-XX----XX-X-XXXXX-X---X*XXX----XX--X", "X---XX------XX*-----X-XX-X---XXX-X-XXX*---XX-XX-X-", "X-X-X---X-X---XX*X---X--XX--XX-X*XXXXX-X-XX-XXX---", "XXXXXX-X--X--XXXXXXX---XXX-X--XXX-X---XX--XX--X-XX", "--XXX---XX---X-XXXX--X-X--X--X-XX---X-XXXXX-X-X---", "-X---XXX--X---XX-XXXX-XX--X-X*--X-XX--X-XX----XX--", "-XX---XXXX-X*----XX-XXX*-XX-X-------XXX-X---XXX-X-", "-XXX---XXXXX-XXXXXXX--X-X-XX--X--X--XX--X-XXXX----", "X-X----XXX-XX--XX-X--X-XX--XXXX-XX--XX-X-X-*--X---", "XX-X-X-X-XXX--XXX-XX---X-X--XXX--X--XX-X-X-X-X--X-", "---XXXXX-XXXXX-X-----XX-XX-----X-XXX-X-XXX-X-XX---", "-XX-X--XXXX----X-XXXX--XXX-----X--X-X--X-X-X-XX---", "-X-X-X-X--X----X--XXX-XXX---XX-XX----X--XX---X-XXX", "X--XXX--X--X-X-XXX-XX----XX-XXXX-X-XXX--X-X-X-XXXX", "-----XX--X-X--X--XX---X------XXX--XXXX-X-XXXX---XX", "X-----X-XX-X--X---------X-X-X--XX---X---XX-X----X-", "XX----XXX-X-XXXXXXX-XX--X-XXXXXX------XXX-XX----X-", "XXX--XX--X---XX----XX--XXXXX-X--XX--X-X-X-XXX--X-X", "XXXX-X-XXXX----X---XXX---X-XX-XX-X--XX-X-XX---XX--", "-XX-X-XXXXXX-XX-XX-XX--------XX-X--XX--XXXXXXXX*XX", "XXXX--XX---XXX-X-XX-X--X-XX--XXXXX--X-X-XXXXX-X-X-", "-X-XX-*--X-X-*-XXXX-X-XXXXXXXXX-XXX--XXX---XXX--XX", "XX-X-X-XX-XXXXX-X---X---@--XXXX-X-------XXXXX-XXXX", "XX--XX--X--XXX-X---X--XXXX---XXX---X-XX-----X-X---", "--XXXXX-X--X-X-X-XX-XX-X----X-X-X-XXXXXXXXXXXX---X", "XXX---XX--XXXXXXX-X--X----X-XX----X----XXXXX-XX-XX", "X--XX---X---X--XXX-XX-X----X---X---XX--XX---X-XX--", "X--XXXX-X*X--XXXX-X-XX-XX-X-X--XXX-X-X--XXXX--X-XX", "X--XXX-X------X-XXXXXXX--XXX-X-X-X---X-XXX---XX---", "-------X--XXXX-XXX-XXXX--XX--XX-X---XXXXXXXX---XXX", "X-X--XXXXXX-*XXXXXX----X-X-X-X-----X-XX-X*-X-X--XX", "XXX-X--X---X---XX--X-XXX-X-X--X-XX--X---X-X-X--XXX", "--X-X*XXXXX-XX--XX-XX-XX-X-----XX-----X---XXX---X-", "XXX-X--X---X-XXX--X-X---------XXX-X-X-X-XX*X-X--X-", "XX----XXX-XX--XXXXXXXXX-X---X--X-XXX--X-XX-*X---XX", "X-XX-X-X*-XXX*XX-X-XX--X-XXX-XX---X--X--XXX-X--XX-", "XX--X-XXX--X-XX---X-X-X-----XX*-X--X-X----XX---XXX", "X----XXXX---XXXXX-X----XX-X-XXXXXXXXXXX------XXXX-", "XX-XX-X-X--XX-XX---X-XXX-X---XX---X-X-XX---X--X--X", "X*X-XX--XXXX-XXX-XXXX-X-*-X----XXX-X--XXX-------X-", "-*XXX-X-X----X-X-X-X--XXX---X-XX-X-XXX---X----X-XX"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> theMap = {"XX----XX-X-----X-X---XXXXX-----XX--XXX----XXXXXXXX", "--X-XX--XXXXX-X---XXXXX-X---XX-XXXX--X-X--X----X--", "-XX-X-XX-XX--XX-X---X*X--XXX--X--X-X--XX---X-XXX-X", "-X---XX*-----X-----XX--X-XXXX-XXX-X-XX---XX--X-X--", "-X--X*----X--XXX-X--X-*X-XXX---XXX--XXX-XX-X--X-X-", "-X-----XXXXXXXXXXX-XX-XX-----XXXX-XXXX--XXX--XXX--", "-X---X----X--X-XX-XXXX-XX--X-*---XXXX-XXX--X----X-", "-X-X-X-X--XX--X--XX-XXX-----XXXX-X----X-X-XX-----*", "--X--XXXXX-*X--X---XXXX-*X--X--X-XXXXX--X-XX-XXXXX", "X-XX---XX--XXX-*-----X-X--*XXX--X-X-X-X-XXX--XX-*X", "----X-XX-XX-XX--XX--X---------XX--X--XXX-XX--X-XXX", "X------XXXX--XX-X-X-*X----XXX-XX-X---XX---X-XXX-XX", "-X---XX--X-XXXXX--X--XX-X--X-*-XXXX---X--XXXX-XXX-", "X--X----XXXXXX---XX-X--X---XXX--XXX--X-X--XXX-XXXX", "@X-----X-XXXX-X-X---XX-X--X-XX---XX-XX---XXX--*---", "-X-XXXX-X-XX-XX----X------X-XX-X-X----*X-XXXX-X--X", "-X-XXXXXX----X-XXX-X-X-XXX---XXXX-XX----X-XXX----X", "X-X-X---XX---XXX--XXX-X---X--XX---X----XXX--X-XXX-", "X-X--X--X--XX--X-X*--XX--XXX-X-X---XX-XX--X---XXXX", "--X--X--X-X---XXXX--XX------X-X--XXXX-XX-X-X-XX-XX", "X----X--XX-X-XX-X---XXXXXXXX--X---XXXXX--X-X--XX--", "XXX-XX-X*---XXXXX-X-X--------X-X-XXX----X-X--*-X-X", "-XXX-XXX--*X---X-XXXX------XX---X---X---X-XX-XXXX-", "X--XXX-X--X-XX-XX---X-X-XX-XXXX*---XXX--XX-X-XX---", "----XXXX-------X-X----XXX-X---X-----X-XXXX--X---*-", "-X--X-X--X-XXXX-----XX-XX--XXX--X----X--X-X--XXXX-", "XX--X-XXX--XXXXXXX-XXX-X--X--XX-X--X*-X-XX--XXX-XX", "XXXXXX-XXX-XX---X-X-XXXX-X---XX---X-XXXXXXXXX--X-X", "XXXX------XXXX-XXXX-X-X--XXX-XXXXXXXXX--XXXX---XXX", "XX--X---X-X--X-X--XXX-X-XXX--XX-XX--X---*--X--XX--", "X---X--X-X---XXXX--*XX----X-X--X-X--XXX----XX--XX-", "XX--X--XX--XX-XX----XX-XX-X--X-XXX--X--X-XXX--XXX-", "----X*-XXX---X-XX----XXX-X--XX-XXX-XXXX--XXX-X--XX", "-XXXX----XX-XXX-XXX-XXXXX-XX-X----X-XX---X-X---X-X", "XXXXX--X-------XXXXXXX-X*-X---XX--X--X--X--XXX--XX", "X-XXX-XXX-XXX-XX-XXX--XXXXX-X----X-XX-XX---X---XXX", "XXX-X-X-X-XXXX-X---XXXXXX--X------XX--XXXXX----XXX", "X-XXXXXX-X-XXX----X--XXXX---XXXX-XX-XXXX-X-X-X-*-X", "--X-XX-X----XXX-XXX--XXXXX---X-X--XXX-XXX--XXXX-X-", "*-XX-XX-XX---X---XX----X-X---X----XX--X-X-X---X-XX", "--X-XXXXX-X-XX---XXX----X-XX-X--X-X-XX-X--XXX--X--", "X-XX-XXX--X---X--X-X-XXX--XX--X--XXX-X-X-XXX-X-XX-", "X-XXXXXXXX--XXX---X-X-X--XXX-X-----XX-----X-X-XXXX", "-X--XXX-X-X-**X-----X*-XX--XX---X-X-----X--X---XX-", "-X-X-X-XXXXXXXX*X-XXXX-X-X-X-X----X--XX------X-XXX", "-XXXX--XXX--X---X--X-X----XX--XX-X--XX-XX-X-XXX---", "-XX--X---XX-X-XXXXXX--X-X--XXX-XX--X----X--------X", "XX-XX-X-------XXX----XX--XXXX--X-XXX-XXXX----XXXX-", "XX-XXX--X-XXX-*X-X----X-XXXX--XXX--X-XX*XXX---XX--", "---X*X-XXXXXXXXX-X-XXX-XX-XX---XX--X--XXXX---XX--X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> theMap = {"@-------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> theMap = {"@X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X", "X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X------------------------------------------------X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "X------------------------------------------------X", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X-----------------------------------------------*X"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 3675;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> theMap = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "-----------@--------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "-----------------------------------*--------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> theMap = {"*-------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-", "--------------------------------------------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX@"};
    DesertWind* pObj = new DesertWind();
    clock_t start = clock();
    int result = pObj->daysNeeded(theMap);
    clock_t end = clock();
    delete pObj;
    int expected = 3675;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=305142&rd=4625&pm=1570
********************************************************************************
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
typedef vector<int> VI; typedef vector<VI> VVI;
typedef vector<string> VS; typedef vector<VS> VVS;
typedef vector<bool> VB; typedef vector<VB> VVB;
typedef vector<double> VD; typedef vector<VD> VVD;
#define guard(X) for(bool X=1;X;X=0)
#define for_up(X, L) for(int X=0;X<(L);X++)
#define for_down(X, L) for(int X=(L)-1;X>=0;X--)
#define for_range(X, L, H) guard(X##_fi)for(typeof(H)X=(L);X!=(H);++X,X##_fi=0)
#define for_each(X, C) for_range(X,(C).begin(),(C).end())
#define for_tok(X,D,S) guard(X##_fi)for(char*for_tok__s1=strdup((S).c_str()),*for_tok__s3;for_tok__s1;free(for_tok__s1),for_tok__s1=0)for(char*X=strtok_r(for_tok__s1,(D),&for_tok__s3);X;X=strtok_r(0,(D),&for_tok__s3),X##_fi=0)
#define for_tok_ws(X,S) for_tok(X," \n\t",S)
#define for_bool(X) for(bool X=0,__g=1;__g;__g=X=!X)
#define let(X,V) guard(__g)for(typeof(V)X=V;__g;__g=0)
 
int Y, X;
int t[60][60];
int gy, gx;
 
const int FAR = 1000000000;
 
struct DesertWind {
 
int daysNeeded(vector <string> theMap) {
  Y = theMap.size(); X = theMap[0].size();
  for (int i = 0; i < Y; i++) {
    for (int j = 0; j < X; j++) {
      t[i][j] = FAR;
      switch (theMap[i][j]) {
        case '*': t[i][j] = 0; break;
        case '@': theMap[i][j] = '-'; gy = i; gx = j; break;
      }
    }
  }
  int gen = 0;
  for (bool act = true; act; gen++) {
    act = false;
    for (int i = 0; i < Y; i++) {
      for (int j = 0; j < X; j++) {
        if (theMap[i][j] != '-') continue;
        int t1 = FAR, t2 = FAR;
        for (int ii = i - 1; ii <= i + 1; ii++) if (ii >= 0 && ii < Y) {
          for (int jj = j - 1; jj <= j + 1; jj++) if (jj >= 0 && jj < X && (ii != i || jj != j)) {
            if (theMap[ii][jj] == 'X') continue;
            if (t[ii][jj] < t1) {
              t2 = t1; t1 = t[ii][jj];
            } else if (t[ii][jj] < t2) {
              t2 = t[ii][jj];
            }
          }
        }
        t1 = min(3 + t1, 1 + t2);
        if (t1 < t[i][j]) {
          t[i][j] = t1;
          act = true;
        }
      }
    }
  }
  cout << gen << " relaxations\n";
  for (int i = 0; i < Y; i++) {
    for (int j = 0; j < X; j++) {
      cout << t[i][j] << ' ';
    }
    cout << '\n';
  }
  if (t[gy][gx] == 1000000000) return -1;
  return t[gy][gx];
}
 
};
 
 
// vim:ts=4:sw=4

********************************************************************************
*******************************************************************************/