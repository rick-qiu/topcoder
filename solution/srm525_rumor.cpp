/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11664
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

class Rumor {
public:
    int getMinimum(string knowledge, vector<string> graph);
};

int Rumor::getMinimum(string knowledge, vector<string> graph) {
    int ret;
    return ret;
}


int test0() {
    string knowledge = "YNN";
    vector<string> graph = {"NYN", "NNY", "NNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string knowledge = "YNNY";
    vector<string> graph = {"NYYN", "YNNY", "YNNY", "NYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YYYY";
    vector<string> graph = {"NYNN", "YNYN", "NYNY", "NNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string knowledge = "YYYYYN";
    vector<string> graph = {"NYYYYN", "YNYYYN", "YYNYYN", "YYYNYN", "YYYYNN", "NNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string knowledge = "NNNY";
    vector<string> graph = {"NNNN", "YNNN", "YNNN", "NYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNNNNNYYY";
    vector<string> graph = {"NYNNYNNYNN", "NNYNYNNNNY", "YYNNNYNNNN", "YNNNYNYNNN", "NNYNNYNNYN", "NNNNYNNNYY", "NYNYNYNNNN", "NNNNNNYNYY", "NNNYNNNYNY", "NYYNNNNYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string knowledge = "Y";
    vector<string> graph = {"N"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string knowledge = "YYYNNNN";
    vector<string> graph = {"NYYNNNN", "YNYNNNN", "YYNNNNN", "YYYNYYY", "YYYYNYY", "YYYYYNY", "YYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNYNYNN";
    vector<string> graph = {"NYYYYYNY", "YNYYYYYY", "YYNYYYYY", "YYYNYYYY", "YYYYNYNY", "YYYYYNYY", "YYYYYYNY", "YYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string knowledge = "NYNYYNN";
    vector<string> graph = {"NYYYYNN", "YNYYYNY", "YYNNYYY", "YNYNYYY", "YYYYNYY", "YYNYYNN", "YYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string knowledge = "NYYNNYNNYY";
    vector<string> graph = {"NYNYYNNYYY", "NNYYYYNNYY", "YYNYYNYNYY", "YNNNYNYNYY", "NYNYNNYYNN", "YNYYNNNYYN", "NYNYYNNYNN", "NYNYYYYNYN", "NYYYNYNYNN", "NYNNYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string knowledge = "YNYNNYN";
    vector<string> graph = {"NNYYYYY", "YNNYYYY", "YYNYYYY", "YYYNYYY", "NNYYNYY", "YYNNNNN", "YYNYYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YYYYNNNYNNYYNYNN";
    vector<string> graph = {"NNNNYNNYYNNYNNNN", "NNYNNNYNYYYNNNNN", "NNNNNNNYNNYNNNYY", "YYNNYNYYYNNYYNYN", "NYYYNNYNNNYYNYNN", "YNYNYNNNNYNYNYYY", "YYYNNNNNYNYYYNNY", "NNYYNYYNNNNYNYNN", "YNNNNNYNNNNNNNNN", "NNYNNNYNYNNYNYYY", "YYNYNNNYNNNNNYNY", "NNYNNYNYNYNNNYNN", "YNNNNNYNYYYYNYYN", "NYNNNNYNNYNNYNNY", "NYYNNYNNNYYNYNNN", "NNYNYNNNYNNYYYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string knowledge = "YYYYYYYYNNNNNNNN";
    vector<string> graph = {"NNNNNNNNYYNNNNNN", "NNNNNNNNNYYNNNNN", "NNNNNNNNNNYYNNNN", "NNNNNNNNNNNYYNNN", "NNNNNNNNNNNNYYNN", "NNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNYY", "NNNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YNNNYNYN";
    vector<string> graph = {"NYNNYNYN", "YNYNYYYY", "YYNYYYYY", "YNNNYNYY", "YYYNNNYN", "NYYYYNYN", "NNYNYYNN", "YNYYNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NYNNNYNY";
    vector<string> graph = {"NNNYNNNN", "YNYNNNNN", "NNNYNNYN", "NNNNNNNN", "NNNNNNYN", "NNYNYNNN", "NNNNNNNN", "YNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string knowledge = "YYYNNNNN";
    vector<string> graph = {"NNNYNNNN", "NNNYYNNN", "NNNNYYNN", "NNNNNNYN", "NNNNNNYY", "NNNNNNNY", "NNNNNNNN", "NNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YYYYNNNNNNN";
    vector<string> graph = {"NNNNYNNNNNN", "NNNNYYNNNNN", "NNNNNYYNNNN", "NNNNNNYYNNN", "NNNNNNNNYNN", "NNNNNNNNYYN", "NNNNNNNNNYY", "NNNNNNNNNNY", "NNNNNNNNNNN", "NNNNNNNNNNN", "NNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string knowledge = "YYYYYNNNNNNNNN";
    vector<string> graph = {"NNNNNYNNNNNNNN", "NNNNNYYNNNNNNN", "NNNNNNYYNNNNNN", "NNNNNNNYYNNNNN", "NNNNNNNNYYNNNN", "NNNNNNNNNNYNNN", "NNNNNNNNNNYYNN", "NNNNNNNNNNNYYN", "NNNNNNNNNNNNYY", "NNNNNNNNNNNNNY", "NNNNNNNNNNNNNN", "NNNNNNNNNNNNNN", "NNNNNNNNNNNNNN", "NNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string knowledge = "YNNNNNNNNNNNNNNN";
    vector<string> graph = {"NYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string knowledge = "YNN";
    vector<string> graph = {"NNN", "YNY", "YYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string knowledge = "YNNYNN";
    vector<string> graph = {"NNNYNN", "NNYNNN", "NYNNNN", "YNNNNN", "NNNNNY", "NNNNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string knowledge = "YNNNNNNNNNNNNNNN";
    vector<string> graph = {"NYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string knowledge = "YYNNNNNNNNNNNNNN";
    vector<string> graph = {"NNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string knowledge = "YYNNNNNNNNNNNNNN";
    vector<string> graph = {"NYYYNNNNNNNNNNNN", "YNYYNNNNNNNNNNNN", "YYNYYYNNNNNNNNNN", "YYYNYYNNNNNNNNNN", "YYYYNYYYNNNNNNNN", "YYYYYNYYNNNNNNNN", "YYYYYYNYYYNNNNNN", "YYYYYYYNYYNNNNNN", "YYYYYYYYNYYYNNNN", "YYYYYYYYYNYYNNNN", "YYYYYYYYYYNYYYNN", "YYYYYYYYYYYNYYNN", "YYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string knowledge = "YNNNNNNNNNNNNNNN";
    vector<string> graph = {"NYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYN", "YYYYYYYYYYYYYYNN", "YYYYYYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string knowledge = "NNNNNNNNNNNNNNNY";
    vector<string> graph = {"NYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYY", "YYYYYNYYYYYYYYYY", "YYYYYYNYYYYYYYYY", "YYYYYYYNYYYYYYYY", "YYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYY", "YYYYYYYYYYNYYYYY", "YYYYYYYYYYYNYYYY", "YYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string knowledge = "YYYYYYYYYNYYYYYY";
    vector<string> graph = {"NYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYY", "YYYYYNYYYYYYYYYY", "YYYYYYNYYYYYYYYY", "YYYYYYYNYYYYYYYY", "YYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYY", "YYYYYYYYYYNYYYYY", "YYYYYYYYYYYNYYYY", "YYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YYYYYYYYYNYYYYYY";
    vector<string> graph = {"NYYYYYYYYNYYYYYY", "YNYYYYYYYNYYYYYY", "YYNYYYYYYNYYYYYY", "YYYNYYYYYNYYYYYY", "YYYYNYYYYNYYYYYY", "YYYYYNYYYNYYYYYY", "YYYYYYNYYNYYYYYY", "YYYYYYYNYNYYYYYY", "YYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYY", "YYYYYYYYYNNYYYYY", "YYYYYYYYYNYNYYYY", "YYYYYYYYYNYYNYYY", "YYYYYYYYYNYYYNYY", "YYYYYYYYYNYYYYNY", "YYYYYYYYYNYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string knowledge = "YYYYYYYYNNNNNNNN";
    vector<string> graph = {"NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNYNN", "NNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNN", "YYYYYYYYNNNNNNNN", "YYYYYYYYNNNNNNNN", "YYYYYYYYNNNNNNNN", "YYYYYYYYNNNNNNNN", "YYYYYYYYNNNNNNNN", "YYYYYYYYNNNNNNNN", "YYYYYYYYNNNNNNNN", "YYYYYYYYNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string knowledge = "YYYYYNNNNNNNNNN";
    vector<string> graph = {"NNNNNYNNNNNNNNN", "NNNNNNYNNNNNNNN", "NNNNNNNYNNNNNNN", "NNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNN", "NNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNN", "NNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YNNNNNNNNNNNNNNY";
    vector<string> graph = {"NYNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNN", "NYNYNNNNNNNNNNNN", "NNYNYNNNNNNNNNNN", "NNNYNYNNNNNNNNNN", "NNNNYNYNNNNNNNNN", "NNNNNYNYNNNNNNNN", "NNNNNNYNYNNNNNNN", "NNNNNNNYNYNNNNNN", "NNNNNNNNYNYNNNNN", "NNNNNNNNNYNYNNNN", "NNNNNNNNNNYNYNNN", "NNNNNNNNNNNYNYNN", "NNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNYNY", "NNNNNNNNNNNNNNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string knowledge = "YNNNNNNNNNNNNNY";
    vector<string> graph = {"NYNNNNNNNNNNNNN", "YNYNNNNNNNNNNNN", "NYNYNNNNNNNNNNN", "NNYNYNNNNNNNNNN", "NNNYNYNNNNNNNNN", "NNNNYNYNNNNNNNN", "NNNNNYNYNNNNNNN", "NNNNNNYNYNNNNNN", "NNNNNNNYNYNNNNN", "NNNNNNNNYNYNNNN", "NNNNNNNNNYNYNNN", "NNNNNNNNNNYNYNN", "NNNNNNNNNNNYNYN", "NNNNNNNNNNNNYNY", "NNNNNNNNNNNNNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string knowledge = "YYYYYYYYYYYYYYYY";
    vector<string> graph = {"NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string knowledge = "NNNNNNYNNNNNNNNN";
    vector<string> graph = {"NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string knowledge = "YYYYNNNNNNNNNNNN";
    vector<string> graph = {"NNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string knowledge = "NNNY";
    vector<string> graph = {"NNYY", "YNNY", "YNNY", "YNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string knowledge = "YNNYNNNY";
    vector<string> graph = {"NNNNNYYN", "NNYNYNNY", "YYNYNYNY", "YNYNNNNY", "NNNYNYNN", "NNYYNNNN", "YYYYNYNN", "YNYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string knowledge = "NNNNNNYNYNYN";
    vector<string> graph = {"NYYYYNNYNYYN", "YNYYYNNYYYYY", "YYNYYYYNYYNY", "YYNNYYYYYYYY", "NYYNNYYYNYYY", "YNYYYNNNYYYY", "YYYYYYNYYNNN", "YYYYYYNNYYYY", "YYYYYNYYNNNY", "YYYNNYYYNNNY", "YNYYYYYYYYNY", "YYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string knowledge = "NYN";
    vector<string> graph = {"NYY", "YNY", "YYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string knowledge = "NNYNNNNYN";
    vector<string> graph = {"NNNNNNYNN", "NNNNNNNNY", "NYNNNNNNY", "YYYNNNNNY", "NYNNNNYNY", "YNNNNNNNY", "NNNNNNNNN", "NYYYYNNNN", "YNYNYNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string knowledge = "NYNNNNNNNNNNNYN";
    vector<string> graph = {"NNYNNYNNYYYNNYN", "NNNYYYNNNNNNNNY", "YNNNNNNNYNNYYNN", "NNNNYYYNYYNNNNN", "YNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNN", "NYNNYYNNNNNNNNN", "NYNYNNYNNNNNNYN", "NYNNNNNNNNNNYNN", "NNYNYNNYYNNNNNN", "NNNNNYNNYNNNNNN", "NYNNNNYYNNNNYNN", "NNNNNYNNNNNNNYN", "NNNYYYNNNNNNYNN", "NNYNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNYYNNNNNNN";
    vector<string> graph = {"NYYYYYYYYYYY", "YNYYYYYYYYYY", "YYNYYYYYYYYY", "YYYNYYYYYYYY", "YYYYNYYYYYYY", "YYYYYNYYYYYY", "YYYYYYNYYYYY", "YYYYYYYNYYYY", "YYYYYYYYNYYY", "YYYYYYYYYNYY", "YYYYYYYYYYNY", "YYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string knowledge = "NNNNNNYNNNNNNN";
    vector<string> graph = {"NNYYNYYYYYNNNY", "YNNYYYYNNYYNYY", "NNNYYYNYNYYNYN", "YYNNYYYNYNYYYN", "YYNNNYYNYYYNYY", "YNYNYNYYYYYYYN", "YYYYNYNYYYYNYY", "YYYYYNYNYYNYYY", "NYYYYNYYNYYYNN", "YNYYNYNYYNNYYN", "YYNYYNYYYNNYYY", "NYNYNNYYYYYNYY", "NNYYYYYYYYNNNY", "YYNYYYYNNYYYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string knowledge = "YNNNNNNNNNNNNNNN";
    vector<string> graph = {"NNYYYYYYYNYYYYYN", "YNYYNYYNNYYYYNYY", "YYNYYNYNNYYYYNNY", "YYYNYNNYNYYYYYYY", "YNYYNNYNYYNYNYYY", "YYYYYNYYYYYYYNNN", "NYYYYYNNYNYYYYYY", "YNNYNNYNNYNYNYYY", "YNNYYYYYNNNNYYYN", "YYYYYYYYYNYYYYNN", "YYNNYYYYYYNYYNNN", "YYYYYYYYYYYNYYYY", "NYYYYYYYYNNNNYNN", "YNYNYYYYYNYNNNYY", "YYYYNNYNYNYYYNNY", "NNYYYYYYYNYNYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NYYN";
    vector<string> graph = {"NNNN", "YNNY", "YNNY", "NNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string knowledge = "NNNYYN";
    vector<string> graph = {"NNNNNN", "NNNNNN", "YYNNNY", "NNYNNN", "NNNYNY", "YYNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string knowledge = "NNNNNYNY";
    vector<string> graph = {"NNYYNNNN", "NNYYYYNN", "NYNNNNNN", "NNNNNYNN", "YNNNNNNN", "NNNNNNYN", "NYNNNNNN", "NNNNYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string knowledge = "NNNNNNNNNNYNNYNN";
    vector<string> graph = {"NNNNYYNNNNNNNNNN", "NNNNYYNNNNNNNNNN", "NNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYN", "NNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNN", "NNNNNNNNNYNNNNNN", "NNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string knowledge = "NNNNNNNNYYNNNNNN";
    vector<string> graph = {"NYYYYYYYYYYYYYYY", "NNNYYYNYYYNNNNNN", "NYNYYYYYYYNNYNNY", "NYNNYYYYYYNNNNNY", "NYNNNYNYYYNNNNNY", "NNNNYNNYYYNNNNNN", "NYYYYYNYYYNNNYNY", "NYNNNYNNYYNNNNNN", "NNNNNYNNNYNNNNNN", "NNNNNNNYYNNNNNNN", "YYYYYYYYYYNYYYYY", "YYYYYYYYYYYNYYYY", "NYYYYYYYYYNYNYNY", "YYYYYYYYYYNNYNNY", "YYYYYYYYYYYYYYNY", "NYYYYYNYYYNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string knowledge = "NYNNNYNNNNYNNNNN";
    vector<string> graph = {"NYNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNN", "NYNYYYNYNYYYNNNY", "YNNNNNNYNNNNNYYN", "YNNYNNNNNYYNNNNN", "YYNNYNNYNNYYNNYN", "NNNNYYNYNNNNYYNN", "NNNYYNNNNNNNNNYN", "NYNYNYYYNYNYNYYY", "NNYNYYYYYNYYYYYY", "NNNYNNNNNNNNNNNN", "YNNYYYNYNNYNNNNN", "NNYYYNNNYNNNNYNY", "NNYYYNYNYNYYYNNY", "NNNYNYNYNNNNNNNN", "YYNNNYNNYNNYNNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string knowledge = "YYNYYNYNNNNNYNNN";
    vector<string> graph = {"NYNNNNYNNNNNYNNN", "YNNNYNNYNNNNNNNN", "YYNYYYYNNNNYYNNY", "YNNNYNYNNNNNNNNN", "YYNNNNYNNNNNYNNN", "NYNYNNYNNYYNNYNN", "YNNYYNNNNYNNNNNY", "YNYNYNNNYNNYNNYY", "YNNYNNNNNYNNNYYY", "NYYYNYYNNNYNNYNY", "YNYNYYYYYYNYNYNY", "NYYYYYNNYNNNYYYY", "NNNNNYYNNNNNNNNN", "NYYNNNNYYYNNNNNY", "NNNYYYNYNNYNYYNN", "NYNNNYYYYNNYYNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNNNNNNNNNYNNYN";
    vector<string> graph = {"NYYNNNYYNYNYYYYY", "YNYYYYNYNYYNNYYY", "NNNNNYYNYYNYYNYY", "NYYNYNYYYYYYYYYY", "NNYYNYYNYYYYYNYY", "NYYNYNYNYYNYYNYN", "YYYYYNNYYYYYYYYY", "YYYYYYYNYNYYNYNY", "NNYNNYNYNNNYYNYY", "YNNNYNYNYNNYNNYY", "NNYYYYYNYYNYNYNY", "NNYNYYNNYYNNYNNY", "NNYNYYYNNNNYNNYY", "YYYYYYYYYYYYYNNN", "NNNNNNYNNNNNNNNN", "NNYNYYYNYYNNYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string knowledge = "NYNNNNNNNNNNNYNN";
    vector<string> graph = {"NNYNNNNNNYNNNYNY", "YNYYYYYYYYYYYNYY", "NNNNNNNNNYNNNNNY", "NYYNNNYNYYNNNNYN", "NNNYNYYYNNNYYYNN", "NNYYYNYNYNNYNNYN", "YNNYNYNNYNNNNNNN", "NNNNNNNNNNYNNNNN", "YNYNNYNNNYYYYNNY", "NNNNNNNYYNYNYNNN", "NNNNYNNYYNNNNYYY", "NYYNNYNNYNNNNNYN", "NNNYNYNNNYNNNNYY", "YYYYYYYYYYYYYNYY", "YNYYYNNNNNNNNYNY", "NYNYNYNNYNYNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNYNNNNNNNNYNNN";
    vector<string> graph = {"NNNYNNYYYYYNYYYN", "NNYYYYNNNNYYYNNN", "YYNYYYNNYYYYYNNN", "NYYNYYNNYYYYYNNY", "YNYNNYNNYYNYYNNY", "NYNYYNNNYYYYYNNY", "YYYYNYNYYYYYNYYY", "YYYYYYYNNYYYNYYN", "NYYYYNNYNNYYYYNY", "YNYYYYNNYNYYYNYY", "YYNYNYNNNYNYYNNY", "YYYYYYYNYYYNYNNN", "YNNNNNNNNNNNNNNN", "NYYNYYYYNNYYYNYY", "YNYYNNYYYYYYYNNY", "YYNNYYNNYNYYYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string knowledge = "YYYYYYYYYYNYYYYY";
    vector<string> graph = {"NNNYYYNNNNNYNNNN", "YNYYNNNNNNYYNNNN", "YNNYYNNNYYNNYNNY", "YYYNYNNNNNNNNYNN", "YYYYNNNYYNNYNNYN", "NNYNYNYNYYNNYYNN", "YYNNNYNYNNYNNNYY", "NYNNYNNNNNNYNYYN", "NNNNNNYYNYNNYNNN", "NNYNNNYYNNNNYYNY", "NYNNYNYNYNNYYNYY", "NNNNNNYYNNNNYNYN", "NNYYYNNNNYNYNYYY", "NNYYYNNNYYNYNNNN", "NNYYNYYNYNNYNNNY", "YNNNYNNNNNNYYNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string knowledge = "YNYYNYNYNNNNYYYN";
    vector<string> graph = {"NYNNNNNNNNNNNNYN", "NNNNNNNNNYYNNYNY", "YNNNNNNNNNNNYYNN", "NNNNNNNNNYNYYNYN", "NNYNNNYYNNNNNNNN", "NNYYYNYNNNNNNNNN", "NNYNNYNNNNNNNYYN", "NYNNYYYNYNYNNYYY", "NNNNNNNNNNNNYNYN", "NNYNNNNNNNNYNNNY", "NNNYNNNNNNNYNNNY", "YNYNNNNNNNNNNNYN", "NNYNNYNNYNYYNNNN", "NNNYNNNNNYNNNNNN", "NNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string knowledge = "NNNNNNYNNNNNNNYN";
    vector<string> graph = {"NYYYYYYYYYYYYYYN", "NNYNYNYNNNNNNYYN", "NNNNNNYYNNNYNYYY", "YYYNYYYNYYYNYYYY", "NYNNNNYNNNNNNYNN", "YNYYYNYYYYYYYYYY", "NNNNNNNNNNNNNYYN", "NYNNYNYNNNNYNYYN", "YYNYYYYYNYYYYYYY", "YYYNYYYYYNYYYYYY", "YYYYYYYNYYNYYYYY", "NYYNNNYYYNNNNYYN", "YYYNYYNYYYYNNYYY", "NNNNYNYYNNNNNNYN", "NNNNYNYNNNNNNNNN", "YYYYYYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string knowledge = "NNYNNNNNNNNNNNYN";
    vector<string> graph = {"NNNNNNNYNNNNYNNY", "NNNNNYNNYNNNNNNN", "NNNNNNNYNNNNNNYN", "NNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNN", "NNNYNNYNNNNNNNNN", "NNNNNNNNNNYNNNYN", "NNNNNNNNNYYNNYNN", "NYNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNN", "YNYNNNNNNNNNNNNN", "NNNNYNNYYNNNYNYN", "NNNNNNNYNNNNNYNN", "NNNNNNNYNNNNNNYN", "NNNNNNNNNNNYNNNN", "NYNYNNYNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string knowledge = "NNNNYYNNNNNNNNNN";
    vector<string> graph = {"NNNNYYYNYNYNYNNN", "YNNYYYYNYYYYYNNY", "YYNYYYYYYYYYYYYY", "YYYNYYYNYYYYYNNY", "NNNNNYYNYNNNNNNN", "NNNNYNYNYNNNNNNN", "YNNNYYNNYNNNYNNN", "YYYYYYYNYYYYYYYY", "YNNNYYYNNNNNYNNN", "YYYYYYYNYNYYYNYY", "YYNNYYYNYNNYYNNY", "YYNYYYYNYNYNYNNY", "YNNNYYYNYNYNNNNY", "YYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYNY", "YNNNYYYNYNYYYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string knowledge = "NNNNNNNNYNYYNNNN";
    vector<string> graph = {"NNNYYYYYYYYYYNYN", "YNNNYYNNYYYYYYYN", "NNNYNNNNNYYYYNNY", "YNYNYNNNYYYYYYNY", "YYYYNYYYNYYYYYYY", "YYYYYNYYYYYNNYNY", "NYYYYNNYYYNYYNYN", "NNNYNNNNNYNNYNNN", "NNYNNNNYNNYYNNNN", "NYYNYNNYYNNNNYNN", "NNYNNNNNNNNYNNNY", "NNYNNNNYYNYNNNNY", "YNYYYNNYYYYNNYNY", "YNYYYYNYNNYYYNNN", "YNYYNYNYNYYNYNNN", "NNNYNNNYYYNYYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string knowledge = "NNNNNYNNYNYNNNNN";
    vector<string> graph = {"NYNNNYNNNYYYYNNN", "NNNNNNYNNNYYNYNN", "NYNNYNNNYYNNYNNY", "YYNNNNYYNYNNNNYN", "NNNNNNNNNNYYNYYN", "NNNNNNNNYNYNNYNY", "YNYYNYNYNNNNYNYN", "YNNYNNNNNNYYNNNN", "NNNNNYYYNNNNYYNY", "YYNYYNNYYNYNNYNY", "NNNNNNYYYNNNYYYY", "YYNNYNNYNYNNYNYN", "YNNYNYNNNNNYNNYN", "NNNNNNNYYNNNYNNN", "YNNNNNYYNNNYYNNY", "NNYNNYNNNNYNNYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNYNNNNNNNNNYNN";
    vector<string> graph = {"NYYNYNNNNYYYYNNN", "YNNNYYYNNNYNNNNY", "NNNNYNNNNYNNYNNY", "NNYNNNNYYNNNNYYY", "NNNYNYYNNNNYYNNN", "NNNNNNYNNNNNNNNN", "NYNNNNNNNYNYNNNN", "NYNYNNNNYNNYNNNN", "YNNNNNNNNYNYNNNN", "NNNYYNYNNNYYNNYN", "NNNYYNNNNNNNYYNN", "NNNNNNYNNYNNNNNN", "YNNYNYYYNNNYNNNN", "YNNNNNNNYNNNNNNN", "NNYNYNNNYNNNNNNN", "NNNNNNNYNNYNNYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string knowledge = "NNYNNYNNNNNNNNNN";
    vector<string> graph = {"NYNNNYYNNNNNNYNN", "YNYYNYYYNNNNNNNN", "YNNNNYNNNNNNNNNN", "NNYNNYYNNNYYNNNY", "NYNNNNYYNNYNYNYN", "YNNNNNNNNNNNNYNN", "NNYNNYNYNNYNYYYY", "YYNNNNYNYYYNYNNY", "NNYYNYNYNYYYYYNY", "YNYYYYYYYNYYNYNY", "YYYYYNNNNNNYNYYN", "NYNYYYNYYNNNNNYN", "YYNYYNYYNNYNNNYY", "NNYYNYYNNNYNNNNN", "YYNYNYNNNYYNYYNY", "NYYYYNYYYYYYYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string knowledge = "NNNNYNNNNNNYNNNN";
    vector<string> graph = {"NYYNYYYYNYYYYNYY", "YNYNYYYYNYYYYNYY", "NYNYYYYYNYYYYYNY", "NYYNYNYNNYYYYYYN", "YYYNNNNNNYNYYYYY", "YYYYYNYYNYNYYYYN", "YYYYYYNNNNNNNYNN", "YNYYNYYNYNYYYYYY", "NYYYNYYYNYYYYYYY", "YNNNNYNYYNNYNYYY", "YYYYYYYYYNNYYYYY", "YNNYYYYYNNYNYNNN", "NNYYNYYYNNYYNYNY", "YYYYYYYYYYNYYNNY", "YYYYYNYYNYYNNYNY", "NYYYYNNYYYYYNNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string knowledge = "NNYNNYNNNNNNNN";
    vector<string> graph = {"NYYYYYYYYYYYYY", "NNYNYYNNNYYNYY", "NNNNYYNNNYNNNN", "YYYNYYYYYYYYYY", "NYYNNYNNNYNNNN", "NYYNNNNNNNNNNN", "YYYNYYNNNYYNYY", "YYYNYYYNNYYYYY", "YYYYYYYYNYYYYY", "NYYNYYYNNNNNNN", "NYYNYYYYNYNYYY", "YYYYYYYYYYYNYY", "NYYNYYYNNYYNNY", "NYYNYYYNNYYNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string knowledge = "YNNNY";
    vector<string> graph = {"NYYYY", "YNYYY", "YYNYY", "YYYNY", "YYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string knowledge = "NNYNNNY";
    vector<string> graph = {"NYYYYYY", "YNYYYYY", "NNNNYYY", "YYYNYYY", "NNYYNYY", "YYYYYNY", "NNYYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNNNNNYNNNNNNNN";
    vector<string> graph = {"NYYYNYYYYNYYYYNN", "NNNYNNNYYNNNYYNN", "NYNYNYYYYNYYYYNN", "NYNNNNNYYNNNYYNN", "YYYYNYYYYYYYYYYY", "NYNYNNYYYNNYYYNN", "NYNYNNNYYNNNYYNN", "NNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNYNN", "YYYYYYYYYNYYYYYY", "NYYYNYYYYNNYYYNN", "NYNYNNYYYNNNYYNN", "NNNNNNNYYNNNNYNN", "NNNNNNNYNNNNNNNN", "YYYYNYYYYNYYYYNN", "YYYYYYYYYNYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string knowledge = "NNYNNNNNNNNNNYNN";
    vector<string> graph = {"NYYYYYYYNYYYNYYY", "NNNYNNYYYYNNNYNY", "NNNNNNNNNNNNNYNN", "NNYNYNNYYYNNNYYY", "NNYNNNYYYNNNNYYY", "NYYYNNYNYYYNNYYY", "NNNNNNNNYNNNNYNN", "NNYYYNYNYNNNNYYY", "NNYNNNYNNNNNNYYN", "NYNYNNNYYNNNYYYY", "NYYYNNYYYYNYNNYY", "YYYYYYNYYYYNNYYN", "NYYNYNYNYYNYNYNY", "NNYNNNYNNNNNNNNN", "NNYNNNYNYNNNNYNY", "NNYNYNYNYNNNNYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string knowledge = "NNNYYYNNNNNNNNNY";
    vector<string> graph = {"NNNYNNNNNNNNNYNY", "YNNNYYYNYYYYYYYY", "NYNYNYYNYYYNYYYN", "YNNNYNNNNNNNYYNY", "NNNYNYNNNNNNNNNN", "NNNYNNNNNNNNNNNY", "YYYNYNNYYYYYYYYN", "NNYYNNNNYYNYNYYY", "NNYNYYNYNNNNYNNY", "YNYNNYNYYNYYYYNN", "YNNNYNNNYNNNYYNY", "YNYYNNYYYYYNNYNN", "YNNYYNNNNNYNNYNY", "NNNNYYNNNNYNYNNY", "YYNNNYYYYYYNYYNY", "NNNYNNNNNNYNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YNNNYYYNNYYYNYNN";
    vector<string> graph = {"NNNNNNNNNYYNNYNN", "NNYYYNNYYYYYYYYY", "NNNNYYNYNYNNNNYY", "NNNNNNYYYYNNNNNY", "YNNNNYNNNYNYNNNN", "NNNNNNYNNYYNNNNN", "NNNNNNNNNNNYNNNN", "YYNNNYYNYNNNYYNN", "YNNYNYYNNYYYYNNY", "NNNNNYNNNNNYNYNN", "NNNNYNNNNNNYNYNN", "YYNNYYYNNYNNNNNN", "YYYYNYYNYNYNNNYY", "YNNNNYNNNNYYNNNN", "YYNNNNYYYYNYNYNN", "YNYNNYYNNYYNNYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string knowledge = "YYNNNNNNNNNNNYN";
    vector<string> graph = {"NNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNN", "YYNNYYYNYYYYYYY", "YYNNYNNYNNYYYNN", "NYNYNYNNYYYYNNN", "YNNYNNYNYYNYNNN", "NYNNNNNNNYNNNNN", "NNNYYNYNNNNYNYN", "NYNNYNYYNNYYNYN", "YYNNNNNNYNNYNYN", "NYNNYNNNNYNNNYN", "YYNNYNYNNYYNNYN", "YNNYNYNYNYYYNNN", "YNNNNNYNNNNYNNN", "NYYNYYYYNYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string knowledge = "NNNNNNNNNYNNYNY";
    vector<string> graph = {"NNYNNNNNYYYYNNY", "YNYNNYNYYYNNYNN", "YNNNNNNNNYNNYNY", "NYYNYNYYYYNYNYY", "YYYYNYYYNYYYNYN", "YNYNNNNYYYYYYNY", "YYYNNYNYYYYNYNN", "NYYNNYYNYYNYYNY", "NYYNNNNNNYYYNNY", "NNYNNNNNNNYNYNY", "YYYNNNNNNNNNYNY", "YYYNNNYNYYYNNNY", "YNNNNNNNNYNNNNY", "YYYNNYNYNYYYNNN", "NNNNNNNNNYNNYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string knowledge = "NYNNNNYNNNYNNNNN";
    vector<string> graph = {"NYYYYYYYYYYYYNYY", "NNNNNNYNNNYNNNNN", "YYNYYYNNYYYYNYYY", "NYNNYNYYNNYNNNYN", "NYNYNNYYNNYNNNYN", "YYYYYNYYYYYYYYNY", "NNNNNNNNNNYNNNYN", "NYNYYNYNNNYNNNYN", "NYYYYYYNNYYNYYYY", "YYYNNYYYYNNYYYYY", "NYNYYNYYNNNNNNNN", "YYYYYNNYYYNNYYYY", "YYNNYYYYYYNYNYYY", "YNNYNYYYYYYYYNYY", "YNYYYNYYNNYNNNNN", "YNYNYYYYYYYYNYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string knowledge = "NNNNNNNNNYNNNNNN";
    vector<string> graph = {"NYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYY", "YYYYYNYYYYYYYYYY", "YYYYYYNYYYYYYYYY", "YYYYYYYNYYYYYYYY", "YYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYY", "YYYYYYYYYYNYYYYY", "YYYYYYYYYYYNYYYY", "YYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string knowledge = "NYNNNNNYYNNNNNNN";
    vector<string> graph = {"NNYYYYYYYYYYYYNY", "NNYNNYNNYNNNYNYN", "NYNNNNYYYNNNNNYN", "NYYNNYYYNNYNYYYY", "YNYNNYNYYNNYYYYY", "NYYNNNNYYNNNYNYY", "NYYYNYNYYNYYNYYY", "NNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNY", "NYNYNYYYYNYNYNYY", "NNYYNYNYNNNNYYNY", "NYYYNYNYYNNNYNNY", "NYYNNYNYYNNNNYYY", "NNYYNYYYYNYNYNYN", "NYYNNYNYYNNNYNNY", "NYYYNYNYNNYYYNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string knowledge = "NNNNNNNNNNNNNYNN";
    vector<string> graph = {"NYYNYYNYNYYYNYYY", "NNYNNNNNNNNYNYNN", "NYNNYNNNNNNNNYNN", "YYYNYYNYYYYYNYYY", "NYYNNNNNNNYYNYNN", "YYYYYNNYNYYYYYYY", "YYYYYYNYYYYYYYYY", "NYYNYNNNNYYYNYYY", "YYYYYYYYNYYYYYYY", "YYYYYNNYNNYYNYYY", "NYYNYNNYNNNYNYYN", "NYYNYNNNNNNNNYYN", "YYYYYYYYYYYYNYYY", "NNYNNNNNNNNNNNNN", "NYYNYNNNNNYYNYNY", "YYYNYNNYNNYYNYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string knowledge = "NNYYNYNNNYYNNNYN";
    vector<string> graph = {"NYYNYYYYYYYYNYYN", "NNYNYYNYYYYNYNYN", "NYNYNYNYNYYNNNYY", "NNNNNYNNNYNNYNYN", "NYYNNYNYNYYNNNYY", "NNYNNNNNYYYNNNYN", "YYYYYYNYYYYYYYYN", "NYYYYYNNYNYYYNYY", "NYYYYYNYNNYNYNYY", "NNYYNYNNNNYNNNYN", "NNYYYYNNNYNNNNYN", "NYYYYYNNYNYNYNYY", "NYYNYYNYYYYNNNYY", "YYYYYYYYYYYYYNYY", "NNYYNYNNNYYNNNNN", "NYYYYYNYYYYNYNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string knowledge = "NNYYNNNNNNYNNNYN";
    vector<string> graph = {"NNYYNNNNNYYYYNYY", "YNYYYYYYYYYYYYYY", "NNNYNNNNNNYYNNYN", "NNYNNNNNNNYNYNYY", "YYYYNYYYYYYYYYYY", "YNYYNNNYYYYYYNYY", "YYYYYYNYYYYYYYYY", "YNYYNYNNYYYYYNYY", "YNYYNYNYNYYYYNYY", "YNYYNYNYYNYYYNYY", "NNYYNNNNNNNNNNYN", "YNYYNYNYYNYNYNYY", "YNYYNNNNNNYYNNYY", "YYYYYYYYYYYYYNYY", "YNYYNNNNNNYNNNNN", "YNYYNNNNNNYYYNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string knowledge = "YNNYNYNNYYYNYYYY";
    vector<string> graph = {"NNNYYYNNYYYNNYNY", "NNNYYYYNYYYYNNYY", "YYNYYYYYYYYNNNYY", "YNNNNYNNYYYNYNYY", "YNNYNYNNYYYYNYYY", "NNNYNNNNYYYYYNYN", "YNNYYYNNYYYYYYYY", "YYYYYYYNYNYNYYYY", "YNNYNYNNNYYNYYYN", "YNNYNNNNYNYNYNYN", "YNNYNYYNNYNNYYYY", "YNNYNYYYYYYNYNYY", "YNNYNYNNYNYNNYNY", "YNNYNYNNYNYNYNYY", "YNNYNNNNYNYNYYNY", "YNNNNYNNYNYNYYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string knowledge = "NNNNNNNNYNNNNNNN";
    vector<string> graph = {"NYNYYNNYYNNNYNNN", "YNNNYNNYYNNNNNNN", "YYNYYYYYYYNNYYYN", "YYNNYNNYYNNNYNYN", "NYNYNNNNYNNNYNNN", "YYYYYNYYYYYNYYYN", "YYYYYYNYYNNNYNYN", "YYNYYNYNYNNNYNNN", "NYNNNNNNNNNNNNNN", "YYYYYYYYYNNNYYYN", "YYYYYYYYYYNYYYYY", "YYYYYYYYYYYNYYYY", "YYNYYNNYYNNNNNNN", "YYYYYYYYYYNYYNYN", "YYNYYNYYYYNNYYNN", "YYYYYYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string knowledge = "NNNNNNYNNNNNNNNN";
    vector<string> graph = {"NNYYYYYNYYYNYNNN", "YNYYYYYNYYYYYNYY", "YNNYYYYNYNYNYNNN", "NNYNYYYNYNNNNNNN", "NNYYNYYNYYNNNNNN", "NNNYYNYNYNNNNNNN", "NNNNNNNNYNNNNNNN", "YYYYYYYNYYYYYYYY", "NNYNNYYNNNNNNNNN", "YNYYYYYNYNYYYNYN", "YNYYYYYNYYNNYNNN", "YYYYYYYYYYYNYNYN", "YYYYYYYNYYYNNNNN", "YYYYYYYYYYYYYNYY", "YYYYYYYNYYYYYNNN", "YYYYYYYYYYYYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string knowledge = "NNNNNNNYYNNNNN";
    vector<string> graph = {"NNYYYYYYYYYYNY", "YNYYYYYYYYYYYY", "NNNNYNYYYYYYNY", "YNYNYYYYYYYYNY", "NNYNNNYYYYYNNY", "YNYYYNYYYYYYNY", "NNYNYYNYYYYYNY", "NNNNYNNNYYNNNN", "NNNNNNNYNNNNNY", "NNNNYNNYYNNNNY", "NNYNYNYYYYNYNY", "YNYYYNYYYYYNNY", "YYYYYYYYYYYYNY", "NNNNYNNYYYNYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string knowledge = "YNN";
    vector<string> graph = {"NYN", "YNY", "YYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNYYN";
    vector<string> graph = {"NYYYYY", "YNYYYY", "YYNYYY", "NNNNYN", "NNNYNN", "YYYYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string knowledge = "YYN";
    vector<string> graph = {"NNY", "NNY", "NNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string knowledge = "NYNY";
    vector<string> graph = {"NNNN", "YNYN", "NNNN", "YNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string knowledge = "NNNNNNNNNNYNYNNN";
    vector<string> graph = {"NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNYYY", "NNNNNNNNNNNNNNNN", "YYYYYYYYYYNYNYYY", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string knowledge = "YNYNNNYNNYYNNYYY";
    vector<string> graph = {"NNNYNNNYNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNYNNNNNNYNNNN", "NNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NYNNNNNNYNNNNNNN", "NYNNNNNYNNNNNNNN", "NNNNNNNNNNNYYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string knowledge = "NNYYYYYNYNNNYNNY";
    vector<string> graph = {"NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNYN", "NYNNNNNNNNYNNNNN", "YYNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNN", "NNNNNNNNNNNYNNYN", "NNNNNNNNNNNNNNNN", "NNNNNNNYNNNYNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YYNNNNYNNNYYYYNY";
    vector<string> graph = {"NNNNNYNYNNNNNNNN", "NNNNYYNNYNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNYN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNN", "NNYNNNNNNNNNNNYN", "NNNYNNNNNYNNNNNN", "NNYNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNN", "NNNYNNNNYNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNYNYNYYNYNYNNYY";
    vector<string> graph = {"NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNN", "NYNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNN", "NNNYNYNNNNNNNNNN", "YNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNN", "NNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNN", "YYNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string knowledge = "YNNYNYNYYYYNYNNN";
    vector<string> graph = {"NNNNYNYNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NYNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNY", "NNNNNNNNNNNNNYYN", "NNYNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNYNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNYNYYNYYNNYYNY";
    vector<string> graph = {"NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYN", "NNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNN", "NYYNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNNN", "NNNNNNNYNNYNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNYNNNYNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string knowledge = "YNNYYYNN";
    vector<string> graph = {"NYYNNNNY", "NNNNNNNN", "NNNNNNNN", "NYNNNNYY", "NYYNNNYN", "NNYNNNYY", "NNNNNNNN", "NNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string knowledge = "NYNNYNYYYYYNNNYN";
    vector<string> graph = {"NNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNY", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNYNNNNNNNYYNNN", "NNNNNNNNNNNNNNNN", "YNYNNYNNNNNNNNNN", "NNNYNNNNNNNYNNNY", "YNYNNNNNNNNNNYNN", "NNNNNNNNNNNYYNNY", "NNYNNYNNNNNNNYNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "YNNNNYNNNNNNNYNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string knowledge = "NNYYNYYNNNNYNN";
    vector<string> graph = {"NNNNNNNNNNNNNN", "NNNNNNNNNNNNNN", "NYNNYNNNYYYNNN", "NNNNYNNYYNNNYY", "NNNNNNNNNNNNNN", "YYNNYNNYNNYNNY", "YYNNNNNNNYNNNY", "NNNNNNNNNNNNNN", "NNNNNNNNNNNNNN", "NNNNNNNNNNNNNN", "NNNNNNNNNNNNNN", "YNNNNNNYNNYNYN", "NNNNNNNNNNNNNN", "NNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string knowledge = "NNNNNNYNYNYNNYY";
    vector<string> graph = {"NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NYYYNYNYNYNNNNN", "NNNNNNNNNNNNNNN", "YNYNNYNNNYNYNNN", "NNNNNNNNNNNNNNN", "NYNNYNNYNYNNYNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "YNYYYNNYNNNNNNN", "NYNYNYNNNNNYYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string knowledge = "YYYYYNNYNYNYNYYN";
    vector<string> graph = {"NNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNN", "NNNNNYNNNNYNNNNN", "NNNNNYYNNNNNNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string knowledge = "YYNNNY";
    vector<string> graph = {"NNYYYN", "NNYYNN", "NNNNNN", "NNNNNN", "NNNNNN", "NNNYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YNNYNYYNYNNYY";
    vector<string> graph = {"NYNNNNNNNYYNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NYYNNNNYNNNNN", "NNNNNNNNNNNNN", "NNNNYNNYNNNNN", "NYYNNNNNNYNNN", "NNNNNNNNNNNNN", "NNNNYNNNNNYNN", "NNNNNNNNNNNNN", "NNNNNNNNNNNNN", "NNYNNNNYNNNNN", "NNNNYNNNNYYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string knowledge = "NNNNYYYNNYYYYYN";
    vector<string> graph = {"NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "YNYNNNNYNNNNNNN", "NYNYNNNNNNNNNNN", "NYYYNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "YYYNNNNNNNNNNNN", "NNNYNNNNNNNNNNY", "YNNNNNNYYNNNNNN", "NNNNNNNNYNNNNNY", "NNNNNNNYYNNNNNY", "NNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "NNNNNNNYYY";
    vector<string> graph = {"NYNNYNNYNN", "NNYNYNNNNY", "YYNNNYNNNN", "YNNNYNYNNN", "NNYNNYNNYN", "NNNNYNNNYY", "NYNYNYNNNN", "NNNNNNYNYY", "NNNYNNNYNY", "NYYNNNNYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YNNNNNNNNNNNNNNN";
    vector<string> graph = {"NYNYNNNNNYNNNNNN", "NNNNYNNNNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNYNNNNYNNNNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNYNNNNYNNN", "NNNNNNNNYYNNYNNN", "YNNNNNNNNYNNYNNN", "NNYNNNNYNNNYYNNN", "NNNYYNNNNYNNNYNN", "NNNNYYNNNNYNNNNN", "NNNNNNYYNNNNNNNN", "NNNNNNNYYYNNNNYN", "NNNNNNNNNYYYNYNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string knowledge = "YYNNN";
    vector<string> graph = {"NNYNN", "NNYNN", "NNNYY", "NNNNN", "NNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string knowledge = "YNNNNNNNNNNNNNNN";
    vector<string> graph = {"NYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string knowledge = "NNNNYYNNYNYNNYYN";
    vector<string> graph = {"NNYNYYNYNYYYNNYY", "NNYNNNYNNNNNNNNN", "NNNYNNNYNNYYYNYN", "NYNNNNNNNNNNNYNY", "NNNYNNYNYNNNNYNY", "NYNNYNNNYNYNNNNN", "YNYNNNNNNNYNNNNN", "NNYNNNYNYNNNYYNY", "NNNYYNYYNNNNNNNN", "NNYNNNYNYNNNNNNN", "NNNNNNNYNYNYYNNY", "NYNYNYNNNYNNNNNN", "NNNNNYNNYNYNNYNN", "NYNYNNNNNNYNNNYY", "NYNNNNNNYYYNYYNN", "NYNNYNNNNYNYYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string knowledge = "YYYNNN";
    vector<string> graph = {"NNNYYN", "NNNNYY", "NNNYNY", "NNNNNN", "NNNNNN", "NNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string knowledge = "YNNNNNNNNNNNNNNN";
    vector<string> graph = {"NYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string knowledge = "YYYNNN";
    vector<string> graph = {"NNNYNY", "NNNYYN", "NNNNYY", "NNNNNN", "NNNNNN", "NNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
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
    string knowledge = "YNN";
    vector<string> graph = {"NYN", "NNY", "YYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string knowledge = "NNNYNYNNNNNNYNNN";
    vector<string> graph = {"NYNNNNNNYNNNNNNN", "NNNYNNNNYNYYNYNN", "YNNYNNNNNNNNNNYN", "NNNNYYNYNNNNNYYN", "NYNNNNNNNNNNYYYY", "NNNNNNNNNYYYYYNN", "YYNNNYNNYNNYNNYY", "NNNNNNNNNNNYNYNN", "NNNNNNNNNNYNYYNY", "YNNYYYNNNNNNYNNN", "YYNYYYNNNNNYYNYN", "NNNNNNYNNYYNNNNN", "NYNNYNYYNYYYNNNN", "YNNYNNNNYNNNYNNN", "NNNYNNYNNNNNNNNN", "NNNNNYYNNYNNNYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string knowledge = "YYNNNN";
    vector<string> graph = {"NNYNNN", "NNYNNN", "NNNYYN", "NNNNNY", "NNNNNY", "NNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string knowledge = "NYYNNNYNNNYN";
    vector<string> graph = {"NNNNNNNNNNNN", "NNNYNNNNNNNN", "NNNYNNNNNNNN", "YNNNYNNNNNNN", "NNNNNNNNNNNN", "NNNNYNNNNNNN", "NNNNNYNYNNNN", "NNNNNNNNYNNN", "NNNNNNNNNNNN", "NNNNNNNNYNNN", "NNNNNNNNNYNY", "YNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string knowledge = "YYNN";
    vector<string> graph = {"NNYN", "NNYN", "NNNY", "NNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string knowledge = "YYYYYYYYYYYYYYYY";
    vector<string> graph = {"NNNNNYYNNNYYNNNN", "NNYNYYYNNNNNNNNN", "NYNYYYNNNNNNNNNN", "YYNNNYNYNNNNNNNN", "YYYNNNNYNNNNNNNN", "YNNYYNNYNNNNNNNN", "YYNNNNNNNYNNNYNN", "NNYNNYYNYNNNNNNN", "YNYYYNNNNNNNNNNN", "NYNNYYYNNNNNNNNN", "YNYYYNNNNNNNNNNN", "YNNNNYYYNNNNNNNN", "YYNNYYNNNNNNNNNN", "YNYYYNNNNNNNNNNN", "NYNYYYNNNNNNNNNN", "YNYYNYNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string knowledge = "YNNYNN";
    vector<string> graph = {"NYNNNN", "NNYNNN", "NNNNNN", "NNNNYN", "NNNNNY", "NNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string knowledge = "YNNNNNNNNNNNNNNN";
    vector<string> graph = {"NYYNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNN", "NNNYYNNNNNNNNNNN", "NNNNNYYNNNNNNNNN", "NNNNNYYNNNNNNNNN", "NNNNNNNYYNNNNNNN", "NNNNNNNYYNNNNNNN", "NNNNNNNNNYYNNNNN", "NNNNNNNNNYYNNNNN", "NNNNNNNNNNNYYNNN", "NNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string knowledge = "YYYNNN";
    vector<string> graph = {"NNNYYN", "NNNYNY", "NNNNYY", "NNNNNN", "NNNNNN", "NNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string knowledge = "NNNNNNNNNYNNNNNN";
    vector<string> graph = {"NYNNNNNNNNNYNNNN", "NNNNNNNNNNYNNYNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNN", "YNNNYNNNNNNNNNNN", "NNNYNYNNNNNNNNNN", "NNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NNYNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string knowledge = "YNN";
    vector<string> graph = {"NYY", "NNN", "NNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string knowledge = "NYYNNY";
    vector<string> graph = {"NNNNNN", "YNNYNN", "YNNNYN", "NNNNNN", "NNNNNN", "NNNYYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string knowledge = "YYNNN";
    vector<string> graph = {"NNNYN", "NNYNN", "NNNYN", "NNNNY", "NNNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string knowledge = "NNNYNNNNNNNNNNNN";
    vector<string> graph = {"NNNNYNNNNNNNYNYN", "NNNNNNNNNNYNYNNN", "NNNNNYNNYNYNYNNN", "NNNNNNNNNNNNNNNY", "NNYNNYNYYNNNNNNN", "NNNNNNYNNNNNNNNY", "NYNNNYNNNNYNNYNN", "NNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNN", "NYNYNNYNNNYNNYNN", "NNYYNNNNNNNNNNNY", "NNNNYNNNNYNNNNNN", "NNNNNNNYNNNNNNNN", "NNNNNNYNNNNYNNNN", "NNYYNYNNYNNNYNNY", "NNNNYNNNNNNNYNNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string knowledge = "NNNYY";
    vector<string> graph = {"NNNNN", "YNNNN", "YNNNN", "NYYNN", "NYYNN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string knowledge = "YNYNYN";
    vector<string> graph = {"NYNNNY", "YNYNNN", "NYNYNN", "NNYNYN", "NNNYNY", "YNNNYN"};
    Rumor* pObj = new Rumor();
    clock_t start = clock();
    int result = pObj->getMinimum(knowledge, graph);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21468741&rd=14550&pm=11664
********************************************************************************
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <vector>
 
using namespace std;
 
class Rumor {
    public:
        int getMinimum( string knowledge, vector <string> graph );
};
 
int Rumor::getMinimum( string knowledge, vector <string> graph ) {
    int n = knowledge.size(), ans = 1000;
    for (int pr = 0; pr < (1 << n); pr++) {
      int a[n], b[n];
      for (int i = 0; i < n; i++)
        a[i] = b[i] = (knowledge[i] == 'Y');
      int res = 0, ok = 0;
      while (true) {
        ok = 1;
        /*
        printf("step %d:", res);
        for (int i = 0; i < n; i++)
          printf(" (%d%d)", a[i], b[i]);
        printf("\n");
        */
        for (int i = 0; i < n && ok; i++)
          if (!a[i] || !b[i])
            ok = 0;
        if (ok)
          break;
        res++;
        int ch = 0;
        for (int i = 0; i < n; i++) {
          int spread = -1;
          if (a[i] == 1 && b[i] != 1)
            spread = 0;
          if (a[i] != 1 && b[i] == 1)
            spread = 1;
          if (a[i] == 1 && b[i] == 1)
            spread = ((pr >> i) & 1);
          if (spread == -1)
            continue;
          ch = 1;
          assert((spread == 0 ? a : b)[i] == 1);
          (spread == 0 ? a : b)[i]++;
          for (int j = 0; j < n; j++)
            if (graph[i][j] == 'Y' && (spread == 0 ? a : b)[j] == 0)
              (spread == 0 ? a : b)[j] = -1;
        }
        for (int i = 0; i < n; i++)
          a[i] = abs(a[i]), b[i] = abs(b[i]);
        if (!ch)
          break;
      }
      // printf("pr = %d, ok = %d, res = %d\n", pr, ok, res);
      if (ok)
          ans = min(ans, res);
    }
    if (ans == 1000)
      ans = -1;
    return ans;
}
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/