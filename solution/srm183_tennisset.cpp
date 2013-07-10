/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2339
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

class TennisSet {
public:
    string firstSet(vector<string> points);
};

string TennisSet::firstSet(vector<string> points) {
    string ret;
    return ret;
}


int test0() {
    vector<string> points = {"SSSSSSSSSSSSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "2-1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> points = {"SS", "SRSS", "RRRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "2-0";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> points = {"SSSSRRRRSSSSRR", "RRSSSSRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "R"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "6-0";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> points = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "313-312";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> points = {"SSSRRRRSSRRRRRSSSSRRRRSSSSRRRRSSSRRRSRSRSRS", "R", "SRSRSRSRSRSRSRSRS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-5";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> points = {"R"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-0";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> points = {"RSRSRSRSRSRSRSRS", "RSRSRSRSRSRSRSRS", "RSRSRSRSRSRSRSRS", "RSRSRSRSRSRSRSRS", "RSRSRSRSRSRSRSRS", "RSRSRSRSRSRSRSRS", "RSRSRSRSRSRSRSRS", "RSRSRSRSRSRSRSRS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-0";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> points = {"R", "R", "R", "R", "R", "R", "R"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> points = {"SRRSRSRSRSRSRRRRSSSRSRSRSRSRSRSRSSRSRSS", "SRSRSRSRSSSSRSRRRRRSSRSRSRS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "1-4";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> points = {"RSRRSSRSSSSRSRRRSSRSRSRRSRSSRRSSSRSRSRSRS", "SRSRRSRRRRRSSSSRSRRRSS", "SRRRSRRSRSSRSRRRSRSRSRRSRS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "6-0";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> points = {"SRSRSRSRSRSRSRSRSRSRRSSRRSSRRSSRRSSRRSSRRSSRRSSRRS", "SRSRSRSRSRSRSRSRSRSRSRRSSRRSSRRSSRRSSRRSSRRSSRRSSR", "RSSRSRSRSRSRSRSRSRSRSRSRRSSRRSSRRSSRRSSRRSSRRSSRRS", "SRRSSR", "RR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-1";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> points = {"SRSRSRSRSRSRSRSRSRSRRSSRRSSRRSSRRSSRRSSRRSSRRS", "SRSRSRSRSRSRSRSRSRSRRSSRRSSRRSSRRSSRRSSRRSSRRS", "SRSRSRSRSRSRSRSRSRSRRSSRRSSRRSSRRSSRRSSRRSSRRS", "RRS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> points = {"SSSSRRRRSSSSRRRRSSSSRRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "6-0";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> points = {"RRRRSSSSRRRRSSSSRRRRSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-6";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> points = {"SRRSRRRSRRSRSSSSSRRSSSRRSSSSRRRSRSSSRSRRRSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "5-2";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> points = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "88-87";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> points = {"SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "RRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "8-9";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> points = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSRRRRSSSSRRRRSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "11-9";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> points = {"SRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSRSR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-0";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> points = {"SSSSSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "1-1";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> points = {"SSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSS", "SSSSRRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "16-14";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> points = {"SRSRSRSRSRSRSSSSSSSSSSSSSSSSSSSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "3-3";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> points = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSRRRRSSSSRRRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "16-17";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> points = {"SSSRRRSSRRRRRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "2-0";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> points = {"RRRRSSSSRRRRSSSSRRRRSSSSRRRRSSSSRRRRSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-6";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> points = {"SSRRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-1";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> points = {"SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "RRRR", "SSSS", "RRRR", "SSSS", "RRRR", "SSSS", "RRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "9-7";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> points = {"SRSRSRSRSRSRSRSRSRSRSRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-1";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> points = {"SSSRRRRRSSSSRSRRSRSSSRRRRRSSSSRSRRSR", "SSSRRRRRSSSSSSSSRRRRSSSSSSSSRRRRSSSSRRRR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "6-8";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> points = {"SSSSSSSS", "SSSSSSSS", "SSSSSSSS", "SSSSSSSS", "SSSSSSSS", "SSSSSSSS", "SSSSRRRRSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "8-6";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> points = {"SSSRS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "1-0";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> points = {"SRSRSRSRSR"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "0-0";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> points = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "20-20";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> points = {"SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS", "SSSS"};
    TennisSet* pObj = new TennisSet();
    clock_t start = clock();
    string result = pObj->firstSet(points);
    clock_t end = clock();
    delete pObj;
    string expected = "10-10";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=4735&pm=2339
********************************************************************************
/*
 *   Don't even try to understand.
 */
 /*
 *    Seriously, my code is _intentionally_ this ugly!
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue> 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define si size()
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
typedef vector<string> vs;
typedef long long ii;
typedef long long i64;
typedef long long intint;
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
 
string lltos (long long i) {stringstream s; s << i; return s.str();}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) {
    if (i) os << ", ";
    os << temp[i];
  }
  os << "}";
  return os;
}
//int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
ii gcd(ii a, ii b) {if (a == 0 || b == 0) return max(a,b); if (b % a == 0) return a; return gcd(b%a, a);}
 
//------------------------------------------------------//
int g[2],pt[2],s;
class TennisSet {
  public:
  string firstSet(vector <string> p) {
    for (int i = 0; i < p.si; i++) {
      for (int j = 0; j < p[i].si; j++) {
        if (p[i][j] == 'S') pt[s]++;
        else pt[1-s]++;
        if (pt[0] >= 4 && pt[0]-pt[1] >= 2) {g[0]++; pt[0]=pt[1]=0; s=1-s;}
        else if (pt[1] >= 4 && pt[1]-pt[0] >= 2) {g[1]++; pt[0]=pt[1]=0; s = 1-s;}
        
        if ((g[0] >= 6 && g[0]-g[1] >= 2) || (g[1] >= 6 && g[1]-g[0] >= 2)) {
          stringstream S; S << g[0] << "-" << g[1]; return S.str();
        }
      }
    }
    stringstream S; S << g[0] << "-" << g[1]; return S.str();
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/