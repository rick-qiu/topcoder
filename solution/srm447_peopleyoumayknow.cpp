/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10580
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

class PeopleYouMayKnow {
public:
    int maximalScore(vector<string> friends, int person1, int person2);
};

int PeopleYouMayKnow::maximalScore(vector<string> friends, int person1, int person2) {
    int ret;
    return ret;
}


int test0() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> friends = {"NNYY", "NNYN", "YYNY", "YNYN"};
    int person1 = 1;
    int person2 = 3;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NNNYYNNNNYNNNYNNYNYNNNYN", "NNNNNYNNNNNNNNNYYNNNYNNN", "NNNNNNNYNNNNYYNNYNNYNNNY", "YNNNNYNNNNNNNNNNNYYYNNNN", "YNNNNNNNNNNNNNYYYNNNNNYY", "NYNYNNYYNNNNYNYNNNNNNNYN", "NNNNNYNNNYYNYYNNYYNNNNNY", "NNYNNYNNYNNNNNNNNNNYNNNY", "NNNNNNNYNNYNYNYNNNNYNNYN", "YNNNNNYNNNNNYYNNNNYNYNNN", "NNNNNNYNYNNNNYNNYNNNNNYN", "NNNNNNNNNNNNNNNYNNNYNYNN", "NNYNNYYNYYNNNYNYYNYNYNNN", "YNYNNNYNNYYNYNNNNNNNNYNN", "NNNNYYNNYNNNNNNNYNNNNNNY", "NYNNYNNNNNNYYNNNYYNYNNNN", "YYYNYNYNNNYNYNYYNYNNYNNN", "NNNYNNYNNNNNNNNYYNNNYNNY", "YNNYNNNNNYNNYNNNNNNNNNNY", "NNYYNNNYYNNYNNNYNNNNNYNN", "NYNNNNNNNYNNYNNNYYNNNNYN", "NNNNNNNNNNNYNYNNNNNYNNYY", "YNNNYYNNYNYNNNNNNNNNYYNN", "NNYNYNYYNNNNNNYNNYYNNYNN"};
    int person1 = 8;
    int person2 = 15;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> friends = {"NYNYNNNNYNYNYNYYNYNYYYNYNNNNNYYYYYYNYYYN", "YNNYYYNYNYYYNYNYYNYYYNYNNYNNNYYYYYYNNYNY", "NNNNYYYNNNYYNNNNNNNYYYYYNNNNNNNNNNYYYNNN", "YYNNNNYNNYYYNNNYYYYNYNNNYYYNYNYYNYNYYYYY", "NYYNNYYNNNNNNYYYNYYNNNNNYYNNNYYNYYYYNYNN", "NYYNYNYYYNYYNNNNYYNNNYYYNYNYYYYYYNNYNYNN", "NNYYYYNNYNNNYYNNNNYNNNYYYYNYNNYYYNYYNYYN", "NYNNNYNNYNYNYNYNYYNYNNNYYYNNNYNYYNNNYNNY", "YNNNNYYYNYNNNYYYNYNNYNNNYYNNYNNYYYYNNYNY", "NYNYNNNNYNNYNNYNNYNNYNYYNNNNNYNYNNYNYYYN", "YYYYNYNYNNNNNYNNYYNYNYYNYNYYNNYNYYYYNYYY", "NYYYNYNNNYNNYNNYYNYYYNNNYNNNYYYNYNYNNNYY", "YNNNNNYYNNNYNNNNNNYNYNNYNYNYYNYYYNNYYYNY", "NYNNYNYNYNYNNNNYYNNYNNYNYNNYNNNNNYNNYYYN", "YNNNYNNYYYNNNNNNYNYNYYYYYYYNNYNNNNYNNNNN", "YYNYYNNNYNNYNYNNYNNNYYNYYYNNYYNYYNYYNYYY", "NYNYNYNYNNYYNYYYNNNYNNNYNYNNYNYNYNNYYYNN", "YNNYYYNYYYYNNNNNNNNYYNYNYYNNYYYNNNNYNNYN", "NYNYYNYNNNNYYNYNNNNNYYNNYYYYNYYNYNYNNNYN", "YYYNNNNYNNYYNYNNYYNNNYNYNYNYYNYNYNYYNYNN", "YYYYNNNNYYNYYNYYNYYNNYYYYNYYNNNNYYYNYYNY", "YNYNNYNNNNYNNNYYNNYYYNNNYYYNNYYYYYNYNYYN", "NYYNNYYNNYYNNYYNNYNNYNNYYNNYYNYYNYNNNYNN", "YNYNNYYYNYNNYNYYYNNYYNYNYNYNNNNNNNNYYNYY", "NNNYYNYYYNYYNYYYNYYNYYYYNYYYYNYYNYYYYNNN", "NYNYYYYYYNNNYNYYYYYYNYNNYNYYNNYYNYYNYYYN", "NNNYNNNNNNYNNNYNNNYNYYNYYYNYNYNYYNYYNYNY", "NNNNNYYNNNYNYYNNNNYYYNYNYYYNYYNNYNYYNYYN", "NNNYNYNNYNNYYNNYYYNYNNYNYNNYNYNNNYNNYNNY", "YYNNYYNYNYNYNNYYNYYNNYNNNNYYYNNYNYNNNYNY", "YYNYYYYNNNYYYNNNYYYYNYYNYYNNNNNYNYNYYYYN", "YYNYNYYYYYNNYNNYNNNNNYYNYYYNNYYNNNNYYNYN", "YYNNYYYYYNYYYNNYYNYYYYNNNNYYNNNNNYYYNYNY", "YYNYYNNNYNYNNYNNNNNNYYYNYYNNYYYNYNNYNNNN", "YYYNYNYNYYYYNNYYNNYYYNNNYYYYNNNNYNNYNYYY", "NNYYYYYNNNYNYNNYYYNYNYNYYNYYNNYYYYYNNYYY", "YNYYNNNYNYNNYYNNYNNNYNNYYYNNYNYYNNNNNNYY", "YYNYYYYNYYYNYYNYYNNYYYYNNYYYNYYNYNYYNNNN", "YNNYNNYNNYYYNYNYNYYNNYNYNYNYNNYYNNYYYNNY", "NYNYNNNYYNYYYNNYNNNNYNNYNNYNYYNNYNYYYNYN"};
    int person1 = 7;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> friends = {"NYNNNYNYYNYYNYYNYNYYYYYNNNNYNNYNNYY", "YNYNYNNNYYNYYNYNNNYYNNNYYNNNNYYNYNN", "NYNNNYYYYYYNNNNYNNNYYNNNNYNYYNYYYNN", "NNNNYNNNNNYNYNNNNYNYNYNNYYYYNYNYNNY", "NYNYNYNNYYYYYNNYNNNNYNNNNNNYNNYNNYY", "YNYNYNNYNNNNNNYYNNYYNNNNNNYYNNNYNNN", "NNYNNNNNNYYNNNYNNYNNNNYNNNNNNYYYNNN", "YNYNNYNNNNYYNYYNNYYYNYNNNNNYYYYYYNY", "YYYNYNNNNYYNNYYNNYYYYNNNYNYNNNYNYYN", "NYYNYNYNYNYNNYNYNYNNYYNYNYYYYNYYNNY", "YNYYYNYYYYNYNYNNNNYYNYNYNNNNYNNNYYN", "YYNNYNNYNNYNYNYYYYNNYNYNNYYNNYNNNNN", "NYNYYNNNNNNYNNYYNYYYYYNYNYNYYYYNNNY", "YNNNNNNYYYYNNNNNNNNNYNYYNNYYYNYNYNY", "YYNNNYYYYNNYYNNNYNYYNYNNYNYNNNYNYYN", "NNYNYYNNNYNYYNNNNYYYNNNNYNNYYYNNYNY", "YNNNNNNNNNNYNNYNNNYNNNNYNYNYYYYNYYN", "NNNYNNYYYYNYYNNYNNNNNNYYYNYYYYYNYYN", "YYNNNYNYYNYNYNYYYNNNYNYNYYYYYNNYNYY", "YYYYNYNYYNYNYNYYNNNNNNYNYYNYNYYYNNY", "YNYNYNNNYYNYYYNNNNYNNNNYNNYYYNYNNYN", "YNNYNNNYNYYNYNYNNNNNNNNYNNYNYYNYNNY", "YNNNNNYNNNNYNYNNNYYYNNNNNYYYYYNNYYN", "NYNNNNNNNYYNYYNNYYNNYYNNNNYYYYYNNNN", "NYNYNNNNYNNNNNYYNYYYNNNNNYNYYNYYNNN", "NNYYNNNNNYNYYNNNYNYYNNYNYNYYNNNNNNY", "NNNYNYNNYYNYNYYNNYYNYYYYNYNYNYNYNNY", "YNYYYYNYNYNNYYNYYYYYYNYYYYYNNYYYNNY", "NNYNNNNYNYYNYYNYYYYNYYYYYNNNNNNNNNY", "NYNYNNYYNNNYYNNYYYNYNYYYNNYYNNNYNNY", "YYYNYNYYYYNNYYYNYYNYYNNYYNNYNNNNYNY", "NNYYNYYYNYNNNNNNNNYYNYNNYNYYNYNNNNN", "NYYNNNNYYNYNNYYYYYNNNNYNNNNNNNYNNYY", "YNNNYNNNYNYNNNYNYYYNYNYNNNNNNNNNYNN", "YNNYYNNYNYNNYYNYNNYYNYNNNYYYYYYNYNN"};
    int person1 = 0;
    int person2 = 12;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> friends = {"NN", "NN"};
    int person1 = 1;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NNYYNNYYNYNNNNNNYNYYNNYNNYNNYN", "NNNNNNNYNNNNNNYNYYNNNYYYYNYNYN", "YNNNNNNNNNNYNNNYNYNNNYYNNNYNNY", "YNNNNNNNNNNYNYNYNNNNNNNNNNNNYN", "NNNNNNNYNNYNNYYNNYYNYYNNNNNNNY", "NNNNNNNNNYNYYNYNNYYNYNYNNYYYNN", "YNNNNNNYNNYNNNNNNNNYNNNYNYNYNN", "YYNNYNYNNNNNNNYNYNNNNNYNNYYNNY", "NNNNNNNNNYNNNNNNYNNNNNNYNNNNNN", "YNNNNYNNYNNNYYNNYYNNNYYYNYNNNN", "NNNNYNYNNNNNNYNYNNYYYNYNNNYNNN", "NNYYNYNNNNNNNNYNYNYNYNNNNNNNYY", "NNNNNYNNNYNNNNNNNNNYNNNYNNNYYN", "NNNYYNNNNYYNNNNNNNYNNNNNNNNNNN", "NYNNYYNYNNNYNNNYNYYNNNNYNYYYNN", "NNYYNNNNNNYNNNYNNNYNNNNNYNNNNN", "YYNNNNNYYYNYNNNNNYNYYNNNYNNYNY", "NYYNYYNNNYNNNNYNYNNNNNYYNNYNYN", "YNNNYYNNNNYYNYYYNNNYNNNNNNYNNN", "YNNNNNYNNNYNYNNNYNYNNYYYYNNNNN", "NNNNYYNNNNYYNNNNYNNNNNYNNNYNYN", "NYYNYNNNNYNNNNNNNNNYNNYYYNNNYN", "YYYNNYNYNYYNNNNNNYNYYYNNNNYNNN", "NYNNNNYNYYNNYNYNNYNYNYNNNNNNYN", "NYNNNNNNNNNNNNNYYNNYNYNNNYYYNN", "YNNNNYYYNYNNNNYNNNNNNNNNYNYYYY", "NYYNNYNYNNYNNNYNNYYNYNYNYYNNNN", "NNNNNYYNNNNNYNYNYNNNNNNNYYNNYN", "YYNYNNNNNNNYYNNNNYNNYYNYNYNYNN", "NNYNYNNYNNNYNNNNYNNNNNNNNYNNNN"};
    int person1 = 16;
    int person2 = 25;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> friends = {"NYYYYYYNYNYYYYNNYNYYYY", "YNYNNYYNNNYYYYNYYYYNYY", "YYNYNNNYYYYYNNYYYYYYYY", "YNYNYYYYYYYYYYNYYYYYNY", "YNNYNYNYYYYNNYYNNYNYNY", "YYNYYNYYYYYYYYYYYYNYYN", "YYNYNYNNYYNNNYYNNYYYNN", "NNYYYYNNYNNYYYYYYYNYNY", "YNYYYYYYNNNYYYYYNNNYYY", "NNYYYYYNNNYYNYYYYYNYYY", "YYYYYYNNNYNNYYYYYNYYYY", "YYYYNYNYYYNNYNYYNYYYYY", "YYNYNYNYYNYYNYYYNYYNYY", "YYNYYYYYYYYNYNYYYYYYNY", "NNYNYYYYYYYYYYNYYYYYYY", "NYYYNYNYYYYYYYYNYYNYYN", "YYYYNYNYNYYNNYYYNNNNYN", "NYYYYYYYNYNYYYYYNNYNNN", "YYYYNNYNNNYYYYYNNYNYYY", "YNYYYYYYYYYYNYYYNNYNYY", "YYYNNYNNYYYYYNYYYNYYNY", "YYYYYNNYYYYYYYYNNNYYYN"};
    int person1 = 11;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> friends = {"NYNNNNNYNNYYNN", "YNNYNYYNNNNYNN", "NNNNYNNNNNNNYN", "NYNNYNNNNNNNYN", "NNYYNNNNNNNNNN", "NYNNNNNNNNNNNN", "NYNNNNNNNNNNNN", "YNNNNNNNYNYNNY", "NNNNNNNYNNNNNN", "NNNNNNNNNNYNNN", "YNNNNNNYNYNNNN", "YYNNNNNNNNNNNY", "NNYYNNNNNNNNNN", "NNNNNNNYNNNYNN"};
    int person1 = 9;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYNN", "YYYNYYYYYYYYYYYY", "YYYYNYYYYYNYYYYY", "YYYYYNYYYYYYYYYY", "YYYYYYNYYYNNYYYY", "YYYYYYYNNYNYNYYY", "YYYYYYYNNYYYNYYN", "YYYYYYYYYNYYYYYY", "YYYYNYNNYYNYYYYY", "YYYYYYNYYYYNYYYY", "YYYYYYYNNYYYNYYY", "YYYYYYYYYYYYYNYY", "YYNYYYYYYYYYYYNY", "YYNYYYYYNYYYYYYN"};
    int person1 = 7;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> friends = {"NYYYYYYNYYYYNYYYYYYNYYYYYYNYY", "YNYYYYYYYYYYYYYYYYYNYYYYYNYYY", "YYNYNYYYYYYYYYYYYYYNYYNYYYNYY", "YYYNYYYYNYNYYYYYYYYYYYYNYYYYY", "YYNYNNNYYYYYYYYYYYYYYYYYYYYYY", "YYYYNNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYNYYYYYYYYYNYYYYYYYYYYYY", "NYYYYYYNYYNYYYYYNYNYYYYYYYYYY", "YYYNYYYYNYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYNYYYNYYNYYNYYYYYYNYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYNYY", "NYYYYYYYYYYYNYYNYYNYYYYYYYYYY", "YYYYYYYYYYNYYNYYYYYNNYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYNYYYYYYYNYYYNY", "YYYYYYNNYYYYYYYYNNYYYYYYYYYNY", "YYYYYYYYYYYYYYYYNNYYYYYYYYYYY", "YYYYYYYNYYYYNYYYYYNYYYNYYYYYY", "NNNYYYYYYYYYYNYYYYYNYYYYYYYYY", "YYYYYYYYYYNYYNYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYNYYY", "YYNYYYYYYYYYYYYYYYNYYYNYYYYYY", "YYYNYYYYYYYYYYYNYYYYYYYNNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNNYYYY", "YNYYYYYYYYYYYYYYYYYYYNYYYNNYY", "NYNYYYYYNYYNYYYYYYYYYYYYYNNYY", "YYYYYYYYYYYYYYYNNYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 8;
    int person2 = 26;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> friends = {"NYYYYNYNN", "YNYYYYYNY", "YYNNNYYYY", "YYNNYYYYN", "YYNYNYYYY", "NYYYYNNYY", "YYYYYNNNY", "NNYYYYNNY", "NYYNYYYYN"};
    int person1 = 0;
    int person2 = 5;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> friends = {"NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN"};
    int person1 = 19;
    int person2 = 9;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> friends = {"NNYYYNYYYNYNYYYYYYYYNYYNY", "NNNYNYNYYYYYYYYYYNYNYYYYY", "YNNYYYYYNYNYNNNYYNYNYYYYN", "YYYNNYYYYYYYNYYYNYYYYNNYN", "YNYNNYNYYYNYNYNYYNYYYNYYY", "NYYYYNNYYNNYYYNYYYYNYYYYN", "YNYYNNNYNNYNNYNYNYNNYYNYY", "YYYYYYYNNYYYNNNYYYYYNYYYY", "YYNYYYNNNYNYYYNYYNNNYYNYY", "NYYYYNNYYNYYYNYYYNYYYYYYY", "YYNYNNYYNYNYYYYNYYNYYYNYN", "NYYYYYNYYYYNYYYYNYYYYYNYY", "YYNNNYNNYYYYNYYYYYYYNYNNY", "YYNYYYYNYNYYYNYNNNYNNYYYN", "YYNYNNNNNYYYYYNYYYNYYYYYY", "YYYYYYYYYYNYYNYNYYYYYNYYY", "YYYNYYNYYYYNYNYYNYNYYYYYY", "YNNYNYYYNNYYYNYYYNNNYYYYY", "YYYYYYNYNYNYYYNYNNNYYYYYY", "YNNYYNNYNYYYYNYYYNYNYYYNY", "NYYYYYYNYYYYNNYYYYYYNNYYY", "YYYNNYYYYYYYYYYNYYYYNNYYY", "YYYNYYNYNYNNNYYYYYYYYYNYY", "NYYYYYYYYYYYNYYYYYYNYYYNN", "YYNNYNYYYYNYYNYYYYYYYYYNN"};
    int person1 = 20;
    int person2 = 13;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> friends = {"NNYNNNNNYYNNYNYN", "NNNYYYYNNNNYYYNN", "YNNNYYYNNNNNNYYY", "NYNNNNNYNYNNNNNN", "NYYNNYNNYNNYNYYN", "NYYNYNNYNNNYNNNN", "NYYNNNNNYNYNNYYY", "NNNYNYNNNNNNNYYY", "YNNNYNYNNNYNNYNY", "YNNYNNNNNNNYYNNN", "NNNNNNYNYNNYNNYY", "NYNNYYNNNYYNYNNN", "YYNNNNNNNYNYNNNY", "NYYNYNYYYNNNNNYY", "YNYNYNYYNNYNNYNY", "NNYNNNYYYNYNYYYN"};
    int person1 = 8;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> friends = {"NNNY", "NNNN", "NNNY", "YNYN"};
    int person1 = 2;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYYNNYYNYNYYNYNYNNYYYYNNN", "YNNYNNNNYYNNNYYYNYNYNYYYN", "YNNNYNYYYNNYYNYYYNNYYYYNY", "NYNNYNYNNYNYYYNYYYYYNYNYN", "NNYYNYYYNNNYYYNYNYNYNYYYY", "YNNNYNNYNNYNYYYNNNNNNNYYY", "YNYYYNNNYNNNYYNNYYNNYYYNN", "NNYNYYNNYNYNNNYNYNYYNNNYY", "YYYNNNYYNNYYNYYYYYYNYYYNN", "NYNYNNNNNNNYYNYNNNNNNYNNY", "YNNNNYNYYNNYNYYNYNNNYNNNY", "YNYYYNNNYYYNYNNNYYNYNNNYY", "NNYYYYYNNYNYNNYYNYNYYYYYN", "YYNYYYYNYNYNNNNYNNYYYYYNY", "NYYNNYNYYYYNYNNNNNNYYYYYN", "YYYYYNNNYNNNYYNNNYNNYYNNY", "NNYYNNYYYNYYNNNNNNYYNNYNN", "NYNYYNYNYNNYYNNYNNYYNNNNY", "YNNYNNNYYNNNNYNNYYNNNYYNY", "YYYYYNNYNNNYYYYNYYNNNNNYY", "YNYNNNYNYNYNYYYYNNNNNYYYN", "YYYYYNYNYYNNYYYYNNYNYNYYN", "NYYNYYYNYNNNYYYNYNYNYYNYN", "NYNYYYNYNNNYYNYNNNNYYYYNN", "NNYNYYNYNYYYNYNYNYYYNNNNN"};
    int person1 = 10;
    int person2 = 15;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> friends = {"NNNNNNNYYNNNN", "NNYNYNNNNNYNN", "NYNNNNNNNYNNN", "NNNNYNNYYNNYN", "NYNYNNNNNNYNN", "NNNNNNNYNYYNY", "NNNNNNNNNNYNN", "YNNYNYNNYNNNN", "YNNYNNNYNYNNN", "NNYNNYNNYNNNN", "NYNNYYYNNNNYN", "NNNYNNNNNNYNN", "NNNNNYNNNNNNN"};
    int person1 = 0;
    int person2 = 3;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYYYYYYYYYYYYNYYYNYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYNYYYY", "YYNYYYYYYYYYNYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYNYYYYYYYNY", "YYYYYYNYYYYYYYYYYYYNYYYYYY", "YYYYYYYNYYYYYYNYYYYYYYYYYY", "YYYYYYYYNYYYYNYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYNYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYNY", "YYNYYYYYYYYYNYYYYYYYYYYYYY", "NYYYYYYYNYYYYNYYYYYYYYYYYY", "YYYYYYYNYYNYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYNYYYYYYYYYYNYYYYYYYYY", "NYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYNYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYY", "YNYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYNYYYYYNYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 17;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> friends = {"NNYYYNNNYNNNYNYNNNNNNNNNNNNYNYNNNNNNNYN", "NNNYNNNNNNNNNYNNYYNNNNNNNNNNYNNYNNNNYYY", "YNNYNNYNNNNNNNNYNNYYYNNYNNNNNYNNNNNYYYN", "YYYNNNNYNNNNNYNNNNNNNNNYYNNNYNNYNNNNNYY", "YNNNNNNNYNNYYNNNYNNYNYNNYNNNNNNNNNNNNNY", "NNNNNNNYYNYYNYNNNNNNYNNNNNNNNYNNYNYYNNN", "NNYNNNNNNNNNNNNYYNYYNYYNNNNNNNNNYNNNNNN", "NNNYNYNNYYNNNNYYNNYNNNNNNNNNYYNNNYNYYNY", "YNNNYYNYNYNNNNNYYNNNNNNNNYNNNNYYNNYNNNN", "NNNNNNNYYNYNYNYNNYNNYNNNNNNNNNYNYNYNNNN", "NNNNNYNNNYNNYNYNNNNNNNNNNNNNYYYNNNYNNNN", "NNNNYYNNNNNNNYNYYYYNNYYNYNNYNNNYNNNYNNY", "YNNNYNNNNYYNNYNYNNYNNYYNNNNNNNYYNNNNNNN", "NYNYNYNNNNNYYNNYNNYNNYYNNYYNNNYNNNNNYNY", "YNNNNNNYNYYNNNNNYNYNNNNYNNNNNNNNNNNYNNN", "NNYNNNYYYNNYYYNNNNYNNNNNNNNNNNNNNNNNNYY", "NYNNYNYNYNNYNNYNNNNYNYYNYNYNYYNNNNNYNNN", "NYNNNNNNNYNYNNNNNNNNYNNNNNYNNYYYNNNNYNN", "NNYNNNYYNNNYYYYYNNNNNNYNYNNNNNYYNYYNNNY", "NNYNYNYNNNNNNNNNYNNNNNYYNNNNYYNNYNNYYYY", "NNYNNYNNNYNNNNNNNYNNNNYNNNNNNNYNNYNNNNY", "NNNNYNYNNNNYYYNNYNNNNNYNNNNNYNNNNNNNNYN", "NNNNNNYNNNNYYYNNYNYYYYNYYYNYNNNYNNNNNNN", "NNYYNNNNNNNNNNYNNNNYNNYNYNNNNNNYNNNNNYN", "NNNYYNNNNNNYNNNNYNYNNNYYNNNNNNYYNNNNNYN", "NNNNNNNNYNNNNYNNNNNNNNYNNNNNYNYYNNNNNNY", "NNNNNNNNNNNNNYNNYYNNNNNNNNNYNNNNYNNNNNY", "YNNNNNNNNNNYNNNNNNNNNNYNNNYNNNNNYNNYNNN", "NYNYNNNYNNYNNNNNYNNYNYNNNYNNNYNYNNYYYNY", "YNYNNYNYNNYNNNNNYYNYNNNNNNNNYNYNNNNNNNN", "NNNNNNNNYYYNYYNNNYYNYNNNYYNNNYNYNYYNNNN", "NYNYNNNNYNNYYNNNNYYNNNYYYYNNYNYNNNNYNNN", "NNNNNYYNNYNNNNNNNNNYNNNNNNYYNNNNNNYNYNN", "NNNNNNNYNNNNNNNNNNYNYNNNNNNNNNYNNNYNNNN", "NNNNNYNNYYYNNNNNNNYNNNNNNNNNYNYNYYNNNNN", "NNYNNYNYNNNYNNYNYNNYNNNNNNNYYNNYNNNNNNN", "NYYNNNNYNNNNNYNNNYNYNNNNNNNNYNNNYNNNNNY", "YYYYNNNNNNNNNNNYNNNYNYNYYNNNNNNNNNNNNNN", "NYNYYNNYNNNYNYNYNNYYYNNNNYYNYNNNNNNNYNN"};
    int person1 = 14;
    int person2 = 17;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> friends = {"NNYNNNNYYYYYNYYNNNNYNNNNYNNN", "NNYYYNNYNYNNYNYNNNYNNYNYYNYY", "YYNNNYNNNNNNYYYYYYNNNYNYYYYN", "NYNNYNNYYYYNYYNYNYYNNNNNYNNN", "NYNYNYNYYNYNNNYYNYNYNNNNNNNY", "NNYNYNNYNNNNYYNNNYNNYYYNNNNY", "NNNNNNNYNYYYYYNYYNYYYYNNNNYY", "YYNYYYYNNNNYNNNNNYYNNNNYYYYN", "YNNYYNNNNYNYYNYNYNNYYNYYNYYN", "YYNYNNYNYNYYNNYNYYYYYNNNYYYN", "YNNYYNYNNYNNNNYNNYYYYNNNYNNY", "YNNNNNYYYYNNNNNNYYNYNNNNNYYY", "NYYYNYYNYNNNNNNYNNYYYNNNYNYY", "YNYYNYYNNNNNNNYYNNYNYNNNYNNN", "YYYNYNNNYYYNNYNNNNNYNNYNYNYY", "NNYYYNYNNNNNYYNNYNNNNNYNNNNN", "NNYNNNYNYYNYNNNYNYYYNYYNNNNN", "NNYYYYNYNYYYNNNNYNNYNYNNNNNY", "NYNYNNYYNYYNYYNNYNNYYYYYNYYN", "YNNNYNYNYYYYYNYNYYYNNNYNNNYN", "NNNNNYYNYYYNYYNNNNYNNYNNYYNN", "NYYNNYYNNNNNNNNNYYYNYNYYYYNN", "NNNNNYNNYNNNNNYYYNYYNYNNYNYN", "NYYNNNNYYNNNNNNNNNYNNYNNNNYN", "YYYYNNNYNYYNYYYNNNNNYYYNNNYN", "NNYNNNNYYYNYNNNNNNYNYYNNNNNN", "NYYNNNYYYYNYYNYNNNYYNNYYYNNY", "NYNNYYYNNNYYYNYNNYNNNNNNNNYN"};
    int person1 = 25;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> friends = {"NNNNNNYNN", "NNNNNNNYN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "YNNNNNNNN", "NYNNNNNNN", "NNNNNNNNN"};
    int person1 = 2;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> friends = {"NNNNNNNNYNYNNNNN", "NNNNNYNNNNNYNNNN", "NNNYNNYYYNNNNNYN", "NNYNNNNYNNNNNNNN", "NNNNNYNNNNYYNNNY", "NYNNYNNYNNNNNNYN", "NNYNNNNNNNNNNNNN", "NNYYNYNNYNNNNNNN", "YNYNNNNYNNYNNNNY", "NNNNNNNNNNNYNYNY", "YNNNYNNNYNNNYNNN", "NYNNYNNNNYNNNNNY", "NNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNYN", "NNYNNYNNNNNNNYNY", "NNNNYNNNYYNYNNYN"};
    int person1 = 2;
    int person2 = 13;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> friends = {"NYYYYYNYNYYNYYYNYNNNYYYYYNYYYYNN", "YNYNYNYYNNYNYYYYNYYNYYYYYYYNYYYY", "YYNYYYYYYYNNNYYYNYNYNYYNNNNYNYNY", "YNYNYYYNYYNNYYYYYYYYNYYYYYYYYYNY", "YYYYNYYNYNNYYNYYYYYYNYYYYYNNYNNY", "YNYYYNYNYYNYNYNNYYYYNYYYYYNYNNYY", "NYYYYYNNYNYYNYNYYYNYYYYYYYYNYYYY", "YYYNNNNNYYYYYNYYYYYNYYYYYYYNNYNY", "NNYYYYYYNYYYYYYYYYYNYYNYYYNYYYYY", "YNYYNYNYYNYYYYYNNYYYNNNYYYNNYYYY", "YYNNNNYYYYNYNYYYNYNYYYNYYYYYYYNY", "NNNNYYYYYYYNYYYNYYNYNYNYYYYYNYYY", "YYNYYNNYYYNYNNYNNYNNYNYYYYYYYNNY", "YYYYNYYNYYYYNNYNYNYNYYYNYYYNYYYN", "YYYYYNNYYYYYYYNYYYNNNYYYYYYYYYYY", "NYYYYNYYYNYNNNYNYYYYYYYYYYYYYNNY", "YNNYYYYYYNNYNYYYNYNNYYYYYNYYYYNN", "NYYYYYYYYYYYYNYYYNYYNYNYYYYYYNYY", "NYNYYYNYYYNNNYNYNYNYNYYNYYYYYYNY", "NNYYYYYNNYYYNNNYNYYNYYYNNYYNYNYN", "YYNNNNYYYNYNYYNYYNNYNYYYYNYYNYNN", "YYYYYYYYYNYYNYYYYYYYYNYYYYYNYNNY", "YYYYYYYYNNNNYYYYYNYYYYNYNYYNNNYY", "YYNYYYYYYYYYYNYYYYNNYYYNYYNYYYYY", "YYNYYYYYYYYYYYYYYYYNYYNYNYYNYNYY", "NYNYYYYYYYYYYYYYNYYYNYYYYNYYYYNY", "YYNYNNYYNNYYYYYYYYYYYYYNYYNYYNYY", "YNYYNYNNYNYYYNYYYYYNYNNYNYYNYYNY", "YYNYYNYNYYYNYYYYYYYYNYNYYYYYNYYY", "YYYYNNYYYYYYNYYNYNYNYNNYNYNYYNNY", "NYNNNYYNYYNYNYYNNYNYNNYYYNYNYNNY", "NYYYYYYYYYYYYNYYNYYNNYYYYYYYYYYN"};
    int person1 = 11;
    int person2 = 15;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> friends = {"NYYYYYYNYYYYNNYNYNNYYYYY", "YNYYYYYNYNYYYYYNNYYYYYNN", "YYNNNYNNYNYNYNYNYYYNYNNY", "YYNNNNNYYNYNYNYNYNNNYYNY", "YYNNNYYYNYYYYNYYYNNNNYYN", "YYYNYNYYYYNYYNNNYYNNYYYY", "YYNNYYNYYYYYNNNNYYYNYNNN", "NNNYYYYNYNYNNNYYYNYYYNYN", "YYYYNYYYNNYNNNYYYYNYNYYN", "YNNNYYYNNNNNYYNYYNNYYYNN", "YYYYYNYYYNNNYNYNNNYNYYYY", "YYNNYYYNNNNNYNYYYYNYNYYY", "NYYYYYNNNYYYNNYYYYNNYYYY", "NYNNNNNNNYNNNNYYYYYYYYYY", "YYYYYNNYYNYYYYNYNYNNYYYY", "NNNNYNNYYYNYYYYNNYNYYYYY", "YNYYYYYYYYNYYYNNNYYNYNYY", "NYYNNYYNYNNYYYYYYNYYNYYY", "NYYNNNYYNNYNNYNNYYNYYYYN", "YYNNNNNYYYNYNYNYNYYNYYNY", "YYYYNYYYNYYNYYYYYNYYNYYN", "YYNYYYNNYYYYYYYYNYYYYNYY", "YNNNYYNYYNYYYYYYYYYNYYNY", "YNYYNYNNNNYYYYYYYYNYNYYN"};
    int person1 = 2;
    int person2 = 21;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYNYYYYYYYYNYYYYYYYYYYYNYYYYYYYYNYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYNYYYYYNYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYN", "YYYYYYYYYYYNYNYYYYYNYYNYYYNYYYYYYYYYYYYY", "YYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYNNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYNNYYYYNYYYYYYYYYYYNYYYYYYYYYYNY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYN"};
    int person1 = 1;
    int person2 = 24;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> friends = {"NYYNYYYYYYYYYYNNN", "YNYYNYYNNYYNYYYYY", "YYNNNNNNNYYNYYNYN", "NYNNYYYNYNNYYYYYN", "YNNYNYYYYYNYYYYNY", "YYNYYNYNYYNYYYYYN", "YYNYYYNNYYYYYNYYY", "YNNNYNNNYNYNYNYYN", "YNNYYYYYNYNYNNYNY", "YYYNYYYNYNYNYYYYN", "YYYNNNYYNYNNNYYNN", "YNNYYYYNYNNNYNNYN", "YYYYYYYYNYNYNNYYN", "YYYYYYNNNYYNNNYNN", "NYNYYYYYYYYNYYNNN", "NYYYNYYYNYNYYNNNY", "NYNNYNYNYNNNNNNYN"};
    int person1 = 11;
    int person2 = 16;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> friends = {"NYNYYYYNYYNYNNYYNYN", "YNYYNNYYYYYNYNYYYYY", "NYNYNYYNNYNNNYNYYNN", "YYYNYNYYYNYYNYYNNYY", "YNNYNYNYYYNYNYYNYNY", "YNYNYNYYNYYNNNNYNYN", "YYYYNYNNYYNYYYNNNYN", "NYNYYYNNYYNYYYNNNNY", "YYNYYNYYNYNYNYNYYNY", "YYYNYYYYYNYNNYYYYYN", "NYNYNYNNNYNYNNNNYYY", "YNNYYNYYYNYNYYNNYNY", "NYNNNNYYNNNYNYNYYNN", "NNYYYNYYYYNYYNYNNYN", "YYNYYNNNNYNNNYNYNNY", "YYYNNYNNYYNNYNYNYYY", "NYYNYNNNYYYYYNNYNNY", "YYNYNYYNNYYNNYNYNNY", "NYNYYNNYYNYYNNYYYYN"};
    int person1 = 17;
    int person2 = 14;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> friends = {"NYYYNYY", "YNYYNYN", "YYNNYYN", "YYNNYYY", "NNYYNYY", "YYYYYNY", "YNNYYYN"};
    int person1 = 3;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> friends = {"NNNN", "NNNN", "NNNN", "NNNN"};
    int person1 = 2;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYNYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYNYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 9;
    int person2 = 16;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> friends = {"NYNNNNYNNNYN", "YNYNNNNYNNYN", "NYNNNNNYNYYY", "NNNNNYYYNNYY", "NNNNNYNNNYNN", "NNNYYNYNYNNY", "YNNYNYNNNYYN", "NYYYNNNNNYNY", "NNNNNYNNNNNY", "NNYNYNYYNNNN", "YYYYNNYNNNNN", "NNYYNYNYYNNN"};
    int person1 = 4;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NN", "NN"};
    int person1 = 1;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> friends = {"NYNYYYNYYNYYYYYYYYNYYYYYYYYNNYYYYNYNYNY", "YNNYYYYYNYNNYYYYNNYYNYYYNYYYYYYYNYYYNYY", "NNNNYYYYYYYYYNYNYYNYYNYYYYYYYNYYYYYYNNY", "YYNNYNYYYYYYYYYYNYYYYYYYYYNYYYNNYYYYYYY", "YYYYNYYYYYYNNYYYYNYYNNYYYYYNNYYYYYYYYYY", "YYYNYNNYYYYYYNYYNYYNYYYYYNNYYYYYYYYYNYY", "NYYYYNNYNYNYYYYYNYYYYYYYYYYYYYYYNYNYYYY", "YYYYYYYNYYNNYNYYYYNYYYYNYNNYYNYYYYYYYNN", "YNYYYYNYNYYYYNYYYYYYYYYYYYYNNYYYYYYNYNY", "NYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYNYYNNYNY", "YNYYYYNNYYNYNYYYYYYYYYYYYYYYNYYYNYYYYYY", "YNYYNYYNYYYNYYYYNYYYYYYYNYYNYYYYYYYYNYN", "YYYYNYYYYYNYNYYYNYYYYYYYYYYYYYYYNYYYNNN", "YYNYYNYNNYYYYNYYYYYNYYYYYYNYYNYYYYYYYYN", "YYYYYYYYYYYYYYNYYYYNYYYYYNYNYYYYYYYYYYY", "YYNYYYYYYYYYYYYNYYYYYNYYNYYYYYYYYYYNYYY", "YNYNYNNYYYYNNYYYNYYYYYYYYYYYYYYYYYYYYYN", "YNYYNYYYYYYYYYYYYNYYYNYYYNYYYNNNYYYYYYY", "NYNYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYY", "YYYYYNYYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYNY", "YNYYNYYYYYYYYYYYYYYYNYYYNYNYYNYNYNYYYYY", "YYNYNYYYYYYYYYYNYNYYYNYYNYYYNYYYNYNYYNY", "YYYYYYYYYNYYYYYYYYYYYYNNYNYYYYYYNYYYNYY", "YYYYYYYNYYYYYYYYYYYYYYNNYNYYNYYYNYNYYYN", "YNYYYYYYYYYNYYYNYYYYNNYYNYYNYYYYYYYYYNY", "YYYYYNYNYYYYYYNYYNYYYYNNYNYYNYYYYYYYYYY", "YYYNYNYNYYYYYNYYYYYYNYYYYYNYNYYYNYYYYYN", "NYYYNYYYNYYNYYNYYYYYYYYYNYYNYYNNYNYNYYN", "NYYYNYYYNYNYYYYYYYYYYNYNYNNYNYYYYYYNYYY", "YYNYYYYNYYYYYNYYYNYYNYYYYYYYYNNYYYYYYYY", "YYYNYYYYYYYYYYYYYNYYYYYYYYYNYNNYYYNNYYY", "YYYNYYYYYNYYYYYYYNYYNYYYYYYNYYYNYYYYYYY", "YNYYYYNYYYNYNYYYYYYYYNNNYYNYYYYYNYYYYNY", "NYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYNNYYNY", "YYYYYYNYYNYYYYYYYYNYYNYNYYYYYYNYYNNYYYY", "NYYYYYYYNNYYYYYNYYYYYYYYYYYNNYNYYYYNYYY", "YNNYYNYYYYYNNYYYYYYYYYNYYYYYYYYYYYYYNYY", "NYNYYYYNNNYYNYYYYYYNYNYYNYYYYYYYNNYYYNY", "YYYYYYYNYYYNNNYYNYYYYYYNYYNNYYYYYYYYYYN"};
    int person1 = 37;
    int person2 = 12;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> friends = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int person1 = 3;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> friends = {"NYYYNYNYYYYNNNYYNYNYYYYYNYYYYYNNYY", "YNYYYYYYNNNYNYYYYYYYYNNYYNNYYNNYNY", "YYNYYNYYYNYYYYNYYYNYNYNYNYYNNYYYNY", "YYYNNNYYNNNYYNYYNYNYYNNNYYNNNNNYYY", "NYYNNNNYNNYYYNYYYYYYNNNNNNYYNYYNYY", "YYNNNNYYYYNYYYYYYNYYNYNNNNYNNYYYYN", "NYYYNYNNYYNYNYYYNYYYYYYYNNYNYNNYNN", "YYYYYYNNNNYNYNYYNYNYYYNNYYNYYYYYYN", "YNYNNYYNNYYYNNYNYYYYYYNNYNYNNYNNYY", "YNNNNYYNYNNYNYYNYYYNNNNYNNNNYNNYYY", "YNYNYNNYYNNYNYYYYNNNNNYNYYNYNNYYYY", "NYYYYYYNYYYNYYNYYYYYYYNYYYNYYNNYYY", "NNYYYYNYNNNYNYYNNNYYNNYNNYYNNNNNNN", "NYYNNYYNNYYYYNYYNNYYYYNYYYNYYYNNNY", "YYNYYYYYYYYNYYNNYYYNYNNYNYYYYYNYYN", "YYYYYYYYNNYYNYNNNNNNNNNNNNYYYNYNNN", "NYYNYYNNYYYYNNYNNNNYNYYYYNNYYNYNYY", "YYYYYNYYYYNYNNYNNNNYNYNYYNYNYNNNYN", "NYNNYYYNYYNYYYYNNNNNNYNYNYNYYYYYNY", "YYYYYYYYYNNYYYNNYYNNNNYNYYYYYNNNNY", "YYNYNNYYYNNYNYYNNNNNNYNNNYYYYNYYNY", "YNYNNYYYYNNYNYNNYYYNYNYNNYNYNYNYNY", "YNNNNNYNNNYNYNNNYNNYNYNNYYYNNNNYNY", "YYYNNNYNNYNYNYYNYYYNNNNNNNYNYNYNYN", "NYNYNNNYYNYYNYNNYYNYNNYNNNNNYNYNYY", "YNYYNNNYNNYYYYYNNNYYYYYNNNNYNYNYNN", "YNYNYYYNYNNNYNYYNYNYYNYYNNNNYNYYNY", "YYNNYNNYNNYYNYYYYNYYYYNNNYNNYNYYYY", "YYNNNNYYNYNYNYYYYYYYYNNYYNYYNYYNYY", "YNYNYYNYYNNNNYYNNNYNNYNNNYNNYNNNNY", "NNYNYYNYNNYNNNNYYNYNYNNYYNYYYNNNYY", "NYYYNYYYNYYYNNYNNNYNYYYNNYYYNNNNYN", "YNNYYYNYYYYYNNYNYYNNNNNYYNNYYNYYNY", "YYYYYNNNYYYYNYNNYNYYYYYNYNYYYYYNYN"};
    int person1 = 30;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> friends = {"NYNYNYY", "YNYYYYY", "NYNNYYY", "YYNNNYY", "NYYNNYY", "YYYYYNY", "YYYYYYN"};
    int person1 = 3;
    int person2 = 4;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNNYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYNYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYNYYYNYNYYYYYYYYYYYYYYY", "NYYYYYYYYYYYYNYYNYYYNYYYYYYYYYNYYYYYYNYY", "YYYYYYYYYYYYYYYYYNYYYYYYYNYNYYYYNYYYYYYY", "YYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYNYYYN", "YYYYYYYYYYYYYYYYYYYNYYNNYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYNYYYNYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYNYYYYNYYYYYYYYNY", "YYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYNYYYNYYYYYYYYY", "YYYYYYYYYYYNYYYYYNYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYNYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 19;
    int person2 = 26;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> friends = {"NNNNNNYNNYNYY", "NNYNYYNNNNNNY", "NYNNNNNNNYYYN", "NNNNYNNYNNYYN", "NYNYNNYYNNYNN", "NYNNNNYNNNNYN", "YNNNYYNYNYYNY", "NNNYYNYNNNNNN", "NNNNNNNNNYNNY", "YNYNNNYNYNNNN", "NNYYYNYNNNNNY", "YNYYNYNNNNNNN", "YYNNNNYNYNYNN"};
    int person1 = 8;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYYNNNYNNYYNNNNNNNNNNNNYNNNNNNNYNYYNNN", "YNNNYYNYNNYNNNNNNNNNNNNNNYNNNNNNNNYNNN", "YNNNNNNNNNNYNYYNNNYNNYNNYNYYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNYYYNYNNNYYNNN", "NYNNNNNNNNNNNYYNNYNNNNNNNNNYNNNNNNNNNN", "NYNNNNNYNNYNNNNYNNNYNNNNNNNNNNNNYNNNYN", "YNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNYNYNNY", "NYNNNYNNNNNNNNYYNNYYYNNNNNNNNNNNNYNNNN", "NNNNNNNNNYYNNNNNNNNYYYNNNNNNNNNYYYNNNN", "YNNNNNNNYNNYNNYNNYNNYYNNNNNNYNNNNYNNNN", "YYNNNYNNYNNNNNYNNNNNYNNNNYNYNNNYNNNNYY", "NNYNNNNNNYNNNYNYNNYYNNNNYNNNNNYNNNNNNY", "NNNNNNYNNNNNNNNYNNNNNYNYNNNYYNYNNNNNYN", "NNYNYNNNNNNYNNNNYYNNNNYNNNNNNNNNYNNNYN", "NNYNYNNYNYYNNNNNNYYYYYNNNNNNNNNNNNNNNN", "NNNNNYNYNNNYYNNNNYYNNYNNYNNNYNYYNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNYYYYNNNNNNYNYNNY", "NNNNYNNNNYNNNYYYNNNNNNYYNNNNNNNYNNNNNN", "NNYNNNNYNNNYNNYYNNNNNNYNNNNNNNNNNNNNNN", "NNNNNYNYYNNYNNYNNNNNNYYNNYNYNYNNNYNNNN", "NNNNNNNYYYYNNNYNNNNNNNNYNNNNNNNYNNNNNN", "NNYNNNYNYYNNYNYYNNNYNNYNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNYNNYYYYNYNNNYNNYNNNYNNNYN", "YNNYNNNNNNNNYNNNYYNNYNNNNYNYNNNNNNNNNN", "NNYNNNNNNNNYNNNYYNNNNNNNNNNNNNNNNNNNNY", "NYNYNNNNNNYNNNNNYNNYNNYYNNNYNYNNNNNNNN", "NNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYY", "NNYYYNNNNNYNYNNNNNNYNYNYNYNNNNNNNNNNYN", "NNNNNNNNNYNNYNNYNNNNNNYNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNYNNNNNYNNYNYNNNNYNN", "NNNNNNNNNNNYYNNYNNNNNYNNNNNNNYNNNNNNNN", "YNNNNNNNYNYNNNNYNYNNYNNNNNNNNNNNYNNYNN", "NNYNNYYNYNNNNYNNYNNNNNYNNNYNNNNYNNNNNN", "YNNYNNNYYYNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YYNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYNNNNNN", "NNNNNYNNNNYNYYNNNNNNNNYNNNYYNNNNNNNNNN", "NNNNNNYNNNYYNNNNYNNNNNNNYNYNNNNNNNNNNN"};
    int person1 = 6;
    int person2 = 27;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> friends = {"NYNNNNNNNYY", "YNNNNNYNNYN", "NNNNNNNYNNN", "NNNNNYNNNNY", "NNNNNYNYYNN", "NNNYYNNNNNN", "NYNNNNNNNNN", "NNYNYNNNNYN", "NNNNYNNNNNN", "YYNNNNNYNNY", "YNNYNNNNNYN"};
    int person1 = 2;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYNYYNNNNYNNNNNNYNYNYYYYNNNNN", "YNNNYNYYNNNNYNNNNNNNNYYYNNNNY", "NNNNNNNNYNNNNNNNNYNNNNYYNNNYN", "YNNNNNNNNYNYYNYNNNNNNNYNYNNNN", "YYNNNYNYYNYNNNNNNYYNYNNYYYYYY", "NNNNYNNNYNNNNYNNYYYYYNNNYNYNN", "NYNNNNNNNYNYNYYNNNNNNNNNYYNYY", "NYNNYNNNYNNYYNYNNNNYYNYYNNYYN", "NNYNYYNYNYNNNNYYYNNNNYNYNYYNN", "YNNYNNYNYNNNNNNNYNNNNNNYNNNYY", "NNNNYNNNNNNNNYNNNYNNNYNNNNYNN", "NNNYNNYYNNNNNYYYNNNNNYNYNYNYY", "NYNYNNNYNNNNNNYNNYYYYNNYYYNYN", "NNNNNYYNNNYYNNYYYNNNNNNNNNNYN", "NNNYNNYYYNNYYYNYNYNYNNNNNYNNY", "NNNNNNNNYNNYNYYNYNYYNNNYYYNNN", "YNNNNYNNYYNNNYNYNYYNNNYNNNNYY", "NNYNYYNNNNYNYNYNYNNNNYNNYYYYN", "YNNNYYNNNNNNYNNYYNNNYYYYNNNYY", "NNNNNYNYNNNNYNYYNNNNNYNYYNYNY", "YNNNYYNYNNNNYNNNNNYNNNNYNNNNY", "YYNNNNNNYNYYNNNNNYYYNNYNNYYNY", "YYYYNNNYNNNNNNNNYNYNNYNNYNNNN", "YYYNYNNYYYNYYNNYNNYYYNNNNNNNN", "NNNYYYYNNNNNYNNYNYNYNNYNNNNYY", "NNNNYNYNYNNYYNYYNYNNNYNNNNNNN", "NNNNYYNYYNYNNNNNNYNYNYNNNNNNY", "NNYNYNYYNYNYYYNNYYYNNNNNYNNNN", "NYNNYNYNNYNYNNYNYNYYYYNNYNYNN"};
    int person1 = 6;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> friends = {"NYYNN", "YNYYN", "YYNYY", "NYYNN", "NNYNN"};
    int person1 = 3;
    int person2 = 4;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYNNYYYNYYNYNNNNNNNNYNYNN", "YNNNYNYNYNNYYNYNNNNNNNYNN", "NNNNYNYNYNNNNYNNNYNYNNYYN", "NNNNNNYNNYNNYNNNNNNYYYNYN", "YYYNNNYYYNNYNNYYYNYYNNNNY", "YNNNNNYNNNYYNYNNYNNYNNNNY", "YYYYYYNNNNNYYNNNNNNYNNNNY", "NNNNYNNNYYYNYNYNNNNYNNNNY", "YYYNYNNYNNNNNYNYNYNNNNNYY", "YNNYNNNYNNNNNYNYNYNNNYNYN", "NNNNNYNYNNNNNNNYYNYNYYNYY", "YYNNYYYNNNNNNYNYNNNYNNNNY", "NYNYNNYYNNNNNYYYNYNYNYYNN", "NNYNNYNNYYNYYNNYNNNNNYNNN", "NYNNYNNYNNNNYNNNYYNYYNNNN", "NNNNYNNNYYYYYYNNYNNNYYNNN", "NNNNYYNNNNYNNNYYNNNNNNNYN", "NNYNNNNNYYNNYNYNNNYNNYYNN", "NNNNYNNNNNYNNNNNNYNYNNNNN", "NNYYYYYYNNNYYNYNNNYNNNNNN", "YNNYNNNNNNYNNNYYNNNNNYYNN", "NNNYNNNNNYYNYYNYNYNNYNNNN", "YYYNNNNNNNNNYNNNNYNNYNNYN", "NNYYNNNNYYYNNNNNYNNNNNYNN", "NNNNYYYYYNYYNNNNNNNNNNNNN"};
    int person1 = 18;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NNNNNNNNNYYNNNYNNYNYNNNNNYNYNYNNN", "NNNNYNYNNNNNNNYYNNNNNNNYNYNYNNNNN", "NNNNNYNNNNNNYNYNNNYNYNYNYNNNNNNNN", "NNNNNNNNNYNYNNYNYNNNNNNYNNNYNNNNN", "NYNNNNYNNNYYNNYNYNNNNNYNNNNNNNYNY", "NNYNNNYYNNNYNNYNNNYYNNNNNYNNYNNNY", "NYNNYYNNNNNNNNYYNNYNYNNNNNNYNNNNY", "NNNNNYNNNNNNYNYNYNNNNNNNNYNNNYYNN", "NNNNNNNNNNNYYNNNNNNYNNNYNNNYYNNNY", "YNNYNNNNNNNYNNYYNNNNNNNNYNNNNNYNN", "YNNNYNNNNNNNNNNNNYYYNNNNNNNNYYNNN", "NNNYYYNNYYNNNYNYNNNNNYNNNNNNNNNNN", "NNYNNNNYYNNNNYYYNNYYYNNNNNNNNNYNN", "NNNNNNNNNNNYYNNNYNYNNNNYNYNYNNNNN", "YYYYYYYYNYNNYNNNYNNNNYNNNNYNYNYNN", "NYNNNNYNNYNYYNNNYNNNNNNNNNYNYNYNN", "NNNYYNNYNNNNNYYYNNNNNYNNYNNNYNNNY", "YNNNNNNNNNYNNNNNNNYNNNNNNNYNYNNNN", "NNYNNYYNNNYNYYNNNYNNNNNYYNNNYYYNY", "YNNNNYNNYNYNYNNNNNNNNNNYYNNYNYNNY", "NNYNNNYNNNNNYNNNNNNNNYNNNNYNNYNNN", "NNNNNNNNNNNYNNYNYNNNYNYNNYNNNNNNN", "NNYNYNNNNNNNNNNNNNNNNYNNNNNYNNNYY", "NYNYNNNNYNNNNYNNNNYYNNNNNNNNNNNYY", "NNYNNNNNNYNNNNNNYNYYNNNNNNNYNYNYN", "YYNNNYNYNNNNNYNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNYNNYNNNNNNYYNNNN", "YYNYNNYNYNNNNYNNNNNYNNYNYNYNNNNNN", "NNNNNYNNYNYNNNYYYYYNNNNNNNYNNYYNY", "YNNNNNNYNNYNNNNNNNYYYNNNYNNNYNYNN", "NNNNYNNYNYNNYNYYNNYNNNNNNNNNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNYYYNNNNNNNY", "NNNNYYYNYNNNNNNNYNYYNNYYNNNNYNYYN"};
    int person1 = 13;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> friends = {"NYYNNNNYNYNNYNNYNYNYNNYYYNN", "YNNYNNNYYYYNNNNNYNNNNNNNNYN", "YNNNNNNNYYNNNNYNYYYYNNNNYNN", "NYNNNYNNYNNNNYNNNNNYNYNYYYN", "NNNNNNNNYNNNYNNNNYNNNNYYNYN", "NNNYNNNYNNNNNNNNNNYNYNYNNNN", "NNNNNNNNNYNNNYNNNNNNNYYNYNY", "YYNNNYNNYNNNYNNYNNNYNNYYYNY", "NYYYYNNYNYYNYYNYYNYNNNNNNNN", "YYYNNNYNYNNYYNNNYNNNNYNNNYN", "NYNNNNNNYNNNNNNNYYNNYNNNYYN", "NNNNNNNNNYNNNYNYYNNYNNYNYYY", "YNNNYNNYYYNNNYNNNYYYNYYYNNN", "NNNYNNYNYNNYYNNYNNNYYYYNNYY", "NNYNNNNNNNNNNNNNNNYNNYNYNNN", "YNNNNNNYYNNYNYNNNYYNNYNYNYY", "NYYNNNNNYYYYNNNNNNNNNYNNNYN", "YNYNYNNNNNYNYNNYNNYNNNNNNYN", "NNYNNYNNYNNNYNYYNYNYYNYYNNY", "YNYYNNNYNNNYYYNNNNYNNNNYNYN", "NNNNNYNNNNYNNYNNNNYNNNNNYNN", "NNNYNNYNNYNNYYYYYNNNNNYYNYY", "YNNNYYYYNNNYYYNNNNYNNYNNYNN", "YNNYYNNYNNNNYNYYNNYYNYNNNYN", "YNYYNNYYNNYYNNNNNNNNYNYNNNN", "NYNYYNNNNYYYNYNYYYNYNYNYNNN", "NNNNNNYYNNNYNYNYNNYNNYNNNNN"};
    int person1 = 7;
    int person2 = 17;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> friends = {"NYNYYYYYYYYYYYYYYYYYYYNYYNY", "YNNYYYYYYNYYYYYYNYYNYYYYYYY", "NNNNYYYYYYYYYYYYYYYYNYYYYYY", "YYNNYYYNYYYYYYYYYYYYYYYNYYY", "YYYYNYYYYYYYYYNYYYYYNYNYYYY", "YYYYYNYYYYNYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYNYNYY", "YYYNYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYY", "YNYYYYYYYNYYYNYYYYYYYYYYYYY", "YYYYYNYYYYNNYYYNNYYYYYYYYYY", "YYYYYYYYYYNNNYYYYNYNYYNYNYY", "YYYYYYYYYYYNNYYNNYYNYYNYYYY", "YYYYYYYYYNYYYNYYYYYNYYNYNYY", "YYYYNYYYYYYYYYNYYYYYYYYYNYY", "YYYYYYYYYYNYNYYNYNYYNYYYYYY", "YNYYYYYYYYNYNYYYNYYYYYYYYYY", "YYYYYYYYYYYNYYYNYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYY", "YNYYYYYYYYYNNNYYYYYNYNYNYYY", "YYNYNYYYYYYYYYYNYYYYNYYYNYY", "YYYYYYYYYYYYYYYYYYYNYNYYYYY", "NYYYNYNYYYYNNNYYYYYYYYNNYYY", "YYYNYYYYYYYYYYYYYYYNYYNNYYY", "YYYYYYNYYYYNYNNYYYYYNYYYNYN", "NYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYNYN"};
    int person1 = 3;
    int person2 = 23;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYNNYYYNYYNYYYNYNNYYYYY", "YNNYYYYYYYYYNYYYYYYYYYN", "NNNYYNYNNYYYYYYYYYYYYYY", "NYYNNYNYNYYYYNNNYYYYYNY", "YYYNNNYNYNNYYYNYNNYYYYY", "YYNYNNYNYYNYYYNNYYYYNYY", "YYYNYYNYYNNYYNYYNYNNYYY", "NYNYNNYNYYYYNYYYYYYYYYY", "YYNNYYYYNYNYYYYYNYNYYNY", "YYYYNYNYYNYYYYYYYYYYYYY", "NYYYNNNYNYNNYNNYYNNYNYN", "YYYYYYYYYYNNNYYYYYYYYYY", "YNYYYYYNYYYNNYYYYYYNNYY", "YYYNYYNYYYNYYNYYYYYNYNY", "NYYNNNYYYYNYYYNYNYNYYNY", "YYYNYNYYYYYYYYYNNYYYNYY", "NYYYNYNYNYYYYYNNNYYYNYY", "NYYYNYYYYYNYYYYYYNYYYYY", "YYYYYYNYNYNYYYNYYYNYYYY", "YYYYYYNYYYYYNNYYYYYNYYY", "YYYYYNYYYYNYNYYNNYYYNYN", "YYYNYYYYNYYYYNNYYYYYYNY", "YNYYYYYYYYNYYYYYYYYYNYN"};
    int person1 = 14;
    int person2 = 16;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> friends = {"NNNNNNNNYYYNNNNNNYYNYNNNNNNNNNNNNYYNYN", "NNYNNYNYNNYYNYNNYNYNYNYYYNNNNNNNYNNNNY", "NYNNYNNYNNNNNYNNNNNNNNNNYNNYYNNNNYNYNY", "NNNNYYNNNYNYNYNNNNYNYNNNNNNNNYNNNNYYNY", "NNYYNYNNNYYNNYNNNNNYNNNYNNNNNNNNNNNNNN", "NYNYYNYYYYNNYYNNNYNYNNYNNNNYNNNNNNNNNY", "NNNNNYNYNNNNYYNNNYNNNYNNNYNYYNNNNNNYYY", "NYYNNYYNNNNNNNNNNNNNYYNNNYYNYNYNYNNNNN", "YNNNNYNNNYNNNNNNYNNNNYYNYNNNNNNNNNNYNY", "YNNYYYNNYNNNNNNNYNNYYNNYNNNNNYNNNNYYNN", "YYNNYNNNNNNNNNYNNNNYNNNNNNNNNNNNNYNNNN", "NYNYNNNNNNNNNYNNNYNNNNNYNYYNNYYYNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNYNNYNYYNNNNNNYNY", "NYYYYYYNNNNYNNNNNNNNYNNNNNNYNNNNNYYYNN", "NNNNNNNNNNYNNNNNYNNYNNNNYNYNNYNNNYNNYY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNYYNN", "NYNNNNNNYYNNNNYYNNYNNNYNYYNNNNNNYNNYNN", "YNNNNYYNNNNYNNNNNNNNNNYYNYNNNNNNNNYNYN", "YYNYNNNNNNNNNNNNYNNNNNNYNNNNNNNYNYNYNN", "NNNNYYNNNYYNNNYNNNNNNNNYYNNYNNNNNYYNYN", "YYNYNNNYNYNNNYNNNNNNNNNNYNNNNNNNNNNNNY", "NNNNNNYYYNNNNNNNNNNNNNNYNNNNNYNNNYNYNN", "NYNNNYNNYNNNYNNNYYNNNNNNNYNNNNNNNNNNNY", "NYNNYNNNNYNYNNNNNYYYNYNNNNNYYYYYNNYYNN", "NYYNNNNNYNNNNNYNYNNYYNNNNNNYNNYNNNYYNY", "NNNNNNYYNNNYYNNNYYNNNNYNNNYYNYNYNYNYYN", "NNNNNNNYNNNYNNYNNNNNNNNNNYNNYYNYNNNNNN", "NNYNNYYNNNNNYYNNNNNYNNNYYYNNNNNNYYNNNN", "NNYNNNYYNNNNYNNNNNNNNNNYNNYNNYYYNNYNNN", "NNNYNNNNNYNYNNYYNNNNNYNYNYYNYNNYNNNYNN", "NNNNNNNYNNNYNNNNNNNNNNNYYNNNYNNYNNNYNN", "NNNNNNNNNNNYNNNNNNYNNNNYNYYNYYYNYNNNNN", "NYNNNNNYNNNNNNNNYNNNNNNNNNNYNNNYNYNYNY", "YNYNNNNNNNYNNYYNNNYYNYNNNYNYNNNNYNNNYN", "YNNYNNNNNYNNNYNYNYNYNNNYYNNNYNNNNNNNNY", "NNYYNNYNYYNNYYNYYNYNNYNYYYNNNYYNYNNNNN", "YNNNNNYNNNNNNNYNNYNYNNNNNYNNNNNNNYNNNY", "NYYYNYYNYNNNYNYNNNNNYNYNYNNNNNNNYNYNYN"};
    int person1 = 32;
    int person2 = 19;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> friends = {"NNNNYNNNNYNNYNYYNNNNNNN", "NNYNNNNNNYNNNNNNNNNYNNN", "NYNNYNNNYNYNNNNNNYNNNNN", "NNNNNYNNNNNNYNNNNNNNNNN", "YNYNNNNNYNNNNYNNNNNNNNN", "NNNYNNNNYNNNNNNYNNNNNNN", "NNNNNNNNNYNYNNNNNYYNNNY", "NNNNNNNNNNNNNNYNNNNNNNN", "NNYNYYNNNNNNYNNNNNNNNNN", "YYNNNNYNNNNNNYYNNNNNNNN", "NNYNNNNNNNNNYYNNNNNNNNN", "NNNNNNYNNNNNNNNNNYNYNNN", "YNNYNNNNYNYNNNNYNNNNNNY", "NNNNYNNNNYYNNNNNNNNNNNN", "YNNNNNNYNYNNNNNNYNYNNNN", "YNNNNYNNNNNNYNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNYNNNNYNNNNNNYNNNY", "NNNNNNYNNNNNNNYNNYNNNNN", "NYNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNNNYNNNNYNNNNN"};
    int person1 = 12;
    int person2 = 13;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NN", "NN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NN", "NN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> friends = {"NYNN", "YNYN", "NYNY", "NNYN"};
    int person1 = 0;
    int person2 = 3;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> friends = {"NYNYYYN", "YNYNNYY", "NYNNNNY", "YNNNNNN", "YNNNNYN", "YYNNYNY", "NYYNNYN"};
    int person1 = 2;
    int person2 = 3;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYYYYNNNN", "YNNNNYYYN", "YNNNNNNYN", "YNNNNNNYN", "YNNNNNNNY", "NYNNNNNNY", "NYNNNNNNY", "NYYYNNNNY", "NNNNYYYYN"};
    int person1 = 8;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYNYYYYYNYYYYNYYYYYYYYYYY", "YNNNYYYYNNYNYYNNYYNYYNYYYYNNNYYYYNNYNNYY", "YNNYYNYYYYYYNYYYNYYYYYYYYYYYYNYYNYNYNNYY", "YNYNYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNNYYYYYYYYYYYYYYNYNYYYNYYYYYYNYYYY", "YYYNYYNNYYYYYYNYYYYYYYYYYYYYYYNYYYNYYYNY", "YNYYYYYYNNYYYYYYYYYYYYYYYNYYYYNYYNYYYYYY", "YNYYYYYYNNYYNYYYYYYYYYYYYYYYYNYYNYNNYYYN", "YYYYYYYYYYNYYYYYYYYYNYYYYYYNYYYYYYYYYYYY", "YNYYYYYYYYYNYYYYYNYYYYNYYYYYYYYYYYYYYYYY", "YYNYNYYYYNYYNYYYYNYYYYYNYYYYYYYYYYNYNYNY", "YYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYNYYYYYYNY", "YNYYYYYNYYYYYYNYYYYYYNYYNYYYYYYYYYNYYYNY", "YNYYYYYYYYYYYYYNNYYYYYYYYNYYYYYYYYYYYYNN", "YYNYYYYYYYYYYYYNNYYYYYYNYYYYYYYYYYYYYNNY", "NYYYYYYYYYYNNYYYYNYYNNYYYYNYYNYYYNYYYYNY", "YNYYYYYYYYYYYNYYYYNYYYYYYNYYYYNNYYYYYYNY", "YYYYYYYYYYYYYYYYYYYNNYYNYYYNYYYYNYYYYYYY", "YYYYYYYYYYNYYYYYYNYNNNYYYYYYYYYYYYYYYYYY", "YNYNYYYYYYYYYYNYYNYYNNYYNYNYYYYYYNYNYYYY", "YYYYYYNYYYYNYYYYYYYYYYNYYYNNYYYYYNYYYYYY", "NYYYYYYYYYYYNYYYNYYNYYYNYYYNNYYNYNYYYNYN", "YYYYYYNYYYYYYYNYYYYYYNYYNYNYYYYYYNYYYYYY", "YYYYYYYYNYYYYYYNYYNYYYYYYNYYYNYYNYYYYYNN", "YNYYYYYYYYYYYYYYYNYYYNNYNYNYYYYNYYYYYYYY", "YNYYYYYYYYNYYYYYYYYNYYNNYYYNNYYYYNYNYYYN", "NNYYYYNYYYYYYYYYYYYYYYYNYYYNNYNNYYYYYNYY", "YYNYYYYYYNYYYYYYYNYYYYYYYNYYYNYYYYNNYYYY", "YYYYYYYNNYYYYYYYYYNYYYYYYYYYNYNYYYYYYNYY", "YYYYYYYYYYYYYNYYYYNYYYYNYYNYNYYNYNYYYYYY", "YYNYYYYYYNYYYYYYYYYNYYYYYNYYYYYYNYYYYYYY", "YNYYYYYYNYYYYYYYYNYYYNNNNYYNYYYNYNNYYYNY", "YNNYYYYNYNYYNYNYYYYYYYYYYYYYYNYYYNNYNYYY", "YYYYYYNYYNYYYYYYYYYYYNYYYYYNYNYYYYYNNYNY", "YNNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNNNYYY", "YNNYYYYYYYYYYYYYNYYYYYYNYYYYNYNYYYYYYNYY", "YYYYYYYNYYYYNNNNNNNYYYYYYNYYYYYYYNYNYYNY", "YYYYYYYYYNYYYYYNYYYYYYYNYNYNYYYYYYYYYYYN"};
    int person1 = 1;
    int person2 = 15;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> friends = {"NYYNYYNYYYYNYYNYYYYYYYYNYNYYNYYYYNYYNYYY", "YNNYYNYYYYYYNYYYNYNNYYYYYYYYYNYYYNNYYNNN", "YNNYNNNNYYNYYYYYYNYNYNYNNYYYYYNYYYNYYNYN", "NYYNYYYNNYYYYYYYYNYYYYNYYYYYYYYYNYNYYNNN", "YYNYNNNYYYYYNNNYYNYYYYNYNYYYNNYYYYNYNYNY", "YNNYNNNNYYYNYYYNNYYNYYNYYYYNYNYYYYYYYNYY", "NYNYNNNYYNYNYYYNYYNYYNNYNYYYNYYYYYYYYYYY", "YYNNYNYNNYYNYNNYYYNYNYYYNYYYYYYYYNYYNNNY", "YYYNYYYNNNYYYYNNYNYYNYNNNYYYNYYYYYYYYYYN", "YYYYYYNYNNYYNYYYYYNNYYYYYYNYNNYYNYYYYYYY", "YYNYYYYYYYNYYYYYYYYYNYNYYYNNYYYNYYYYYNYY", "NYYYYNNNYYYNYYYYYNYYYNYNYNNYYNYNNYYNYYYY", "YNYYNYYYYNYYNYYNYYYYNYYYNNYYNYYYYNYNNNYY", "YYYYNYYNYYYYYNYNYNYYYYYYYYNYNYYYYNYYNYYY", "NYYYNYYNNYYYYYNYNYYNYYYNYYNYYYYNYYYYNNYY", "YYYYYNNYNYYYNNYNYYYYYNNYYYYNYNYYNNNNYYNY", "YNYYYNYYYYYYYYNYNNNNYYNYYYYNYYNNYNYYNYYN", "YYNNNYYYNYYNYNYYNNYYNNNNNNYYYYYYYNYYYYYY", "YNYYYYNNYNYYYYYYNYNNYNNYYYYYYNNYYNNYYYYN", "YNNYYNYYYNYYYYNYNYNNYNYNYYNYYYYNYYYYYYYN", "YYYYYYYNNYNYNYYYYNYYNYYYYYYNNNNNNNNNYYNY", "YYNYYYNYYYYNYYYNYNNNYNYNYNYYNYNNYNNYYYYN", "YYYNNNNYNYNYYYYNNNNYYYNYYYYYNYYYYYYYNYNY", "NYNYYYYYNYYNYYNYYNYNYNYNYYYNYNYYYYYYYYYY", "YYNYNYNNNYYYNYYYYNYYYYYYNYNYNYYYYNYYYYNY", "NYYYYYYYYYYNNYYYYNYYYNYYYNYNYYNNYYYYYYNN", "YYYYYYYYYNNNYNNYYYYNYYYYNYNYNYYYYYYYYNYY", "YYYYYNYYYYNYYYYNNYYYNYYNYNYNYNYYYYYNYYYY", "NYYYNYNYNNYYNNYYYYYYNNNYNYNYNYNYNNNYNYYY", "YNYYNNYYYNYNYYYNYYNYNYYNYYYNYNYYYYNYYYNY", "YYNYYYYYYYYYYYYYNYNYNNYYYNYYNYNYYYYYNNNY", "YYYYYYYYYYNNYYNYNYYNNNYYYNYYYYYNYYYYNYYY", "YYYNYYYYYNYNYYYNYYYYNYYYYYYYNYYYNNYNYNYY", "NNYYYYYNYYYYNNYNNNNYNNYYNYYYNYYYNNNNYYNY", "YNNNNYYYYYYYYYYNYYNYNNYYYYYYNNYYYNNYYNYN", "YYYYYYYYYYYNNYYNYYYYNYYYYYYNYYYYNNYNYYYY", "NYYYNYYNYYYYNNNYNYYYYYNYYYYYNYNNYYYYNYNY", "YNNNYNYNYYNYNYNYYYYYYYYYYYNYYYNYNYNYYNYN", "YNYNNYYNYYYYYYYNYYYYNYNYNNYYYNNYYNYYNYNY", "YNNNYYYYNYYYYYYYNYNNYNYYYNYYYYYYYYNYYNYN"};
    int person1 = 26;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> friends = {"NYYYNYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYNYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYNYYYYYYYYNYYYYYYNYYYYYYYYYYYNY", "YNYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYNYYYNYYYYYYYYYYYYYNYYNYYYYYYNYYYYYYY", "YYYYYNYYNYYYNYYYYYYYNYYNYNYYYYYYYNYYYYYY", "YYYYYYNYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYNNNNYNYYYYYYYYYNNNNNNYNYNNNNYNNYYYNNY", "YYYYYYYYYNYYYYYYYYYNNYNYYYYYYYYYYNYNYYYY", "NYNYYYYYYYNYYYYYYYYYYYYNNYYYYYYNYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYNYYYNYNNYNYYYNYY", "YYYYYNYYYYYYNYYYYYYYYYNYYNNYYYYYNYYYYNYN", "YYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNNNYYYYYYYYYYYYYNYYNYYYYYYY", "YYYYYYYYYYYYYYNNYYYYYYYYYYYYYNYYYYYYYYNY", "YNYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYNYNYYYYYYYYYYYYYNYYYYYYY", "YYNYYYYYNNYYYYYYYYYNYYYYYYYYYYYYYYYYNYYY", "YYYYYNNYNNYYYYYYYYYYNYNYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYNYYYNNYYNYYYYYYYNYNYYYNYYYYYYNYYYYYY", "YYYYYNYYNYNYYYYYYYYYYYYNYNYYNYNYYYNYYYYY", "YYYYYYYYYYNNYYYYYYYYYYYYNYYNYYYYYYYYYYNY", "YYYYNNYYNYYYNYYYYYYYYYYNYNYYYNYYYYYYYYYN", "YYNYYYYYYYYYNYYYYYYYYYNYYYNNYNYYYYNYYYNY", "YYYYYYYYNYYYYYYYYYYYYYYYNYNNYYYYYYYYYYYY", "YYYYYYYYNYYNYYYYYYYYYYYNYYYYNYYYYYYYYYYY", "YYYYYYYYNYYYYYNNYYYYYYYYYNNYYNYNNYYYYNYY", "YYYYYYYYNYYNYYYYYYYYYYYNYYYYYYNYYYYYYNYY", "YYYYYYYYYYNNYYYYYYYYYYYYYYYYYNYNYYYYYYYY", "YYYYNYYYNYYYNYNYNYNYYYYYYYYYYNYYNYYNYYYY", "YYYYYNYYNNYNYYYYYYYYYYNYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYNYYNYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYNYYNY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYNY", "YYYYYYYYNYYNNYYYYYYYYYYYYYYYYNNYYYNYYNYY", "YYNYYYYYNYYYYYYNYYYYYYYYNYNYYYYYYYYNNYNN", "YYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYNN"};
    int person1 = 38;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> friends = {"NNYNNNNNYNNNNNNNNYNNNNYNYNNNNNYNNNNNNNNN", "NNNNYNNNNYNNNNNNNNYNNNNNNNYNNYYNNYNNYNNN", "YNNYYYNNNYNNNYNYNNYNNNYNYYNYNYYNNYNNYYNN", "NNYNNNYNNNNNNYNNNNYNNNNNNNNNYNYNYNNNNYNN", "NYYNNNNYNYNNYNYNNNYNNNNYYYNNNNYNNNNNNNNN", "NNYNNNYNNYYNNNNNYNNYNYNYNNNNNNYNNYYYYNNN", "NNNYNYNNNNNNNYYNNNYNNNNNNNNNNNYYNYNNNYNN", "NNNNYNNNYNYNNNNNNNYNNNYNNYYNNNYNNNNYNNYN", "YNNNNNNYNNNNNNYNNNYNNNNYNNNNYNYNNYNYNNNN", "NYYNYYNNNNYYNNNNNNNNNNYNYYNNNNYNNNYNNYNN", "NNNNNYNYNYNNYNNNNNYNNNNNNNNYNYYNNNNNYNNN", "NNNNNNNNNYNNNNYYNNYYNNYYNNYNNNYNNNYNNNNN", "NNNNYNNNNNYNNNNNNYYNNNNNNNYYNNYNNNNYNNYN", "NNYYNNYNNNNNNNNNNNNNNNNNNNNYNNYNYYNNNNNN", "NNNNYNYNYNNYNNNNNNYYYYYNNNYYNNYYNYYNNNNN", "NNYNNNNNNNNYNNNNNNNYNNNNYYNNNNYNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNYNYNNNYNNYYNNNNNNNNN", "YNNNNNNNNNNNYNNNNNNNNNYYNNNNNNYYNNNYNNNN", "NYYYYNYYYNYYYNYNNNNYYNNNYYNYYNNYNYYNYYNN", "NNNNNYNNNNNYNNYYNNYNNNNNNNNNNYYNYYNNNNNY", "NNNNNNNNNNNNNNYNYNYNNNYNNYNNYNYNYYYNYYNN", "NNNNNYNNNNNNNNYNNNNNNNNNYNNNYNYYYYNNNNYN", "YNYNNNNYNYNYNNYNYYNNYNNNNYYNYYYNNNNYNNNN", "NNNNYYNNYNNYNNNNNYNNNNNNYNNNYYYNYNYNYNYN", "YNYNYNNNNYNNNNNYNNYNNYNYNYYNNNYNNNNNNYYY", "NNYNYNNYNYNNNNNYNNYNYNYNYNYYNNYNNNNYNNNY", "NYNNNNNYNNNYYNYNYNNNNNYNYYNYNYYNNNNNNNNY", "NNYNNNNNNNYNYYYNNNYNNNNNNYYNNNYNNNNNNNNY", "NNNYNNNNYNNNNNNNNNYNYYYYNNNNNNYNNNNYNNNN", "NYYNNNNNNNYNNNNNYNNYNNYYNNYNNNYYYNNNYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYNYYYYY", "NNNNNNYNNNNNNNYNNYYNNYNNNNNNNYYNYYNYNYNN", "NNNYNNNNNNNNNYNNNNNYYYNYNNNNNYYYNNNNYNNY", "NYYNNYYNYNNNNYYNNNYYYYNNNNNNNNYYNNNNNNNN", "NNNNNYNNNYNYNNYNNNYNYNNYNNNNNNNNNNNNNNNN", "NNNNNYNYYNNNYNNNNYNNNNYNNYNNYNYYNNNNYNNN", "NYYNNYNNNNYNNNNYNNYNYNNYNNNNNYYNYNNYNNNN", "NNYYNNYNNYNNNNNNNNYNYNNNYNNNNYYYNNNNNNNN", "NNNNNNNYNNNNYNNNNNNNNYNYYNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNYYYYNYYNYNNNNNNN"};
    int person1 = 18;
    int person2 = 30;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> friends = {"NNNNNYYYYNYYYNNYYYYYNYYNNNNYYYNNYNNYYNNY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYNYYYYYYYYYYYYYYYNYYYNYYYYYNYYYYYYYYYYY", "NYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYNYYYY", "YYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYNY", "NYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYNYNYYYYYYYYYYYN", "YYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYNNYYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "NYYYYNYNYYNYNYYNNNNNYYNYYNYYNYYYYYYNYYYN", "NYYYNYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYY", "NYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 25;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> friends = {"NNNNNNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNYYNNNNNNNNNNNNY", "NNNNNNYNNNNNNNYNNNNNNNYNYNNYNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNY", "NNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNY", "YYYYYYNYYYYYYNYYNNYYNYNYYYYYNNYYYYYYNYYN", "NNNNNNYNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNYYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNYNNYNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNY", "NNNYNYYNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNY", "NNNYNNNNNNNYNYNNNNNNNNNYNNNNNNNNNNNNNNNY", "NNNNNNYYNNNNNNNYNNNNNNYNNNNNNNNNNNNNNYNN", "NNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNY", "NNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYN", "YNYNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNYY", "NNNYNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNY", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNY", "NNNNNNYNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNYNNNNNNNYYNNNNNNNNNNNNY", "YNYYYYNNNNNYYYYNYYNNYYYNYNYYYYYYYYYNYNYN"};
    int person1 = 39;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> friends = {"NNNYNNNYYYYNNNNYYNNYNNYYNNNNYYNNNYYNNNNN", "NNNYYYNNNNNYNNNNNNNNYNNYNNNYYNNNNNYNNYYY", "NNNYNYNNNNNNYNNYNYNNNYNYNNNNYNYYNNNNYNNN", "YYYNYYNNNNNYNNNNNNNNYNNNYNNNNYNYNNYNYNNN", "NYNYNNYYYYNNNNNNNNYNNYNYYNNNYNYNNNNYNNYY", "NYYYNNNYNYNNYNNYYYNYYNYNNNYYYYNNYNNYYYNY", "NNNNYNNYNNNYNNNNNNNNNNNYNNNNNYNNNNYNNNNN", "YNNNYYYNNNNNYNYNNNNYNYYYNNNNNNNNNNNYNYNN", "YNNNYNNNNYYNNYNNNYNNNYNYNNNNNNYNYYNNYNYN", "YNNNYYNNYNNNNNYYNNYNNNYYNNYYNNNYNNYNNNNN", "YNNNNNNNYNNYNYNYNNNYNNNYYNNNNYNYYNNYNNNN", "NYNYNNYNNNYNYNNNYNNNNNNYYNNYNNNNNNNNNYNN", "NNYNNYNYNNNYNNNNNNNYNNYNNYNNNNYYNNNNNNNN", "NNNNNNNNYNYNNNNNNNYNNNYYNNNNNNYNNYNNNYNY", "NNNNNNNYNYNNNNNNNNNNYNNYNYYNNNNYNYNNNNYN", "YNYNNYNNNYYNNNNNNNNNYNYYNYNYNYYNNNNYYNYN", "YNNNNYNNNNNYNNNNNYNYNNYNNNNNNNNNNNYYNYNN", "NNYNNYNNYNNNNNNNYNNNNNNYNNNNNNNNYYNNNYNN", "NNNNYNNNNYNNNYNNNNNNNNNYNYNNNYYNNNNNYNYN", "YNNNNYNYNNYNYNNNYNNNNYYYNNNNYNYNNNNNYNYN", "NYNYNYNNNNNNNNYYNNNNNNYYNNNNYNNNYNNNNNNN", "NNYNYNNYYNNNNNNNNNNYNNNYNNNNNNNNNNYNYNNY", "YNNNNYNYNYNNYYNYYNNYYNNYYNYYYNYNNNNYYNNN", "YYYNYNYYYYYYNYYYNYYYYYYNYYYYNYYYYYYYYYYY", "NNNYYNNNNNYYNNNNNNNNNNYYNNNNYNNYNNNNNNNN", "NNNNNNNNNNNNYNYYNNYNNNNYNNNYNNYNYNYNNNNN", "NNNNNYNNNYNNNNYNNNNNNNYYNNNNNNNNNNNYNNNY", "NYNNNYNNNYNYNNNYNNNNNNYYNYNNNYNYYYNNYNNN", "YYYNYYNNNNNNNNNNNNNYYNYNYNNNNNNNNYNYNNNN", "YNNYNYYNNNYNNNNYNNYNNNNYNNNYNNNYNNYNYNNY", "NNYNYNNNYNNNYYNYNNYYNNYYNYNNNNNYYNNNNYNN", "NNYYNNNNNYYNYNYNNNNNNNNYYNNYNYYNNNNNNNNN", "NNNNNYNNYNYNNNNNNYNNYNNYNYNYNNYNNNNYNNNY", "YNNNNNNNYNNNNYYNNYNNNNNYNNNYYNNNNNNNNNNN", "YYNYNNYNNYNNNNNNYNNNNYNYNYNNNYNNNNNYNNNN", "NNNNYYNYNNYNNNNYYNNNNNYYNNYNYNNNYNYNNNNN", "NNYYNYNNYNNNNNNYNNYYNYYYNNNYNYNNNNNNNNNY", "NYNNNYNYNNNYNYNNYYNNNNNYNNNNNNYNNNNNNNNN", "NYNNYNNNYNNNNNYYNNYYNNNYNNNNNNNNNNNNNNNY", "NYNNYYNNNNNNNYNNNNNNNYNYNNYNNYNNYNNNYNYN"};
    int person1 = 23;
    int person2 = 5;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> friends = {"NNNNNNYNNNYYNYNNNNNYYNNNNYYNYNYNYNYYYNNY", "NNYNNNYNYNYYYYNNNNYNNNNYYYYNNNYYNNYYNYNY", "NYNNYNYYNYNYYNYNYNYNYYNNYNNNNNYNYNNNNNNY", "NNNNNYYYNNNNYYNNYYYNYNNYNNYYNNYYNNNNYNNN", "NNYNNNYNNNNNNYYYYYYNYYNNYNNNNNYYYNYNYNNY", "NNNYNNYYYYYYNNNYNYNYYYNYNNNYNYYYYYNNNYNN", "YYYYYYNNYNYYYYNYNYYYYYYNYYNYYYYNNYYYYNNY", "NNYYNYNNNYNNNYNNNNYNYYYYYNNNNYNNNYYNYYYN", "NYNNNYYNNNYYYNYNNNYNNYYYNNNNNYNYNNYNNNNN", "NNYNNYNYNNYYNYYNNYNYNNNYYYYNNNNYNNNYYNNN", "YYNNNYYNYYNNNNNNYNNNNYNYNYNNNYYYYNNNNYNN", "YYYNNYYNYYNNNYNNNNYNYNNNNNYNNYYNYYYNNYNN", "NYYYNNYNYNNNNYYYNNNNYNNYNNNNYYNYNNYYYNNY", "YYNYYNYYNYNYYNNNNYYYNNNYYYNNYNYNYYYYYNYN", "NNYNYNNNYYNNYNNNNYNNNNNYNNYNNYNYYYNYYNNN", "NNNNYYYNNNNNYNNNNNNNYYYYNNYYNNNNNNNNNYYN", "NNYYYNNNNNYNNNNNNNNNYYNYNNNNNNYNYYNYNNYY", "NNNYYYYNNYNNNYYNNNNNNNNYNNNNYNNNYYYNNNYN", "NYYYYNYYYNNYNYNNNNNYNNNNNNNYNYYNNNNYYNNN", "YNNNNYYNNYNNNYNNNNYNNNNNNNNYNNYNYNNYYYYN", "YNYYYYYYNNNYYNNYYNNNNNNNNYNYYNYNNYNYYNYY", "NNYNYYYYYNYNNNNYYNNNNNYNNYYNYNNYNNYYNYNN", "NNNNNNYYYNNNNNNYNNNNNYNNNNYNNNNNYNYNNNNN", "NYNYNYNYYYYNYYYYYYNNNNNNNYYNNNYYYYNNNYYY", "NYYNYNYYNYNNNYNNNNNNNNNNNNNYYNYNYYNNYYNY", "YYNNNNYNNYYNNYNNNNNNYYNYNNNYNNNYYNNNNNYN", "YYNYNNNNNYNYNNYYNNNNNYYYNNNNNNYYYNNYYNYN", "NNNYNYYNNNNNNNNYNNYYYNNNYYNNNNNNYNNNNNNY", "YNNNNNYNNNNNYYNNNYNNYYNNYNNNNNNYNYYNNNYN", "NNNNNYYYYNYYYNYNNNYNNNNNNNNNNNNNNNNNYYYN", "YYYYYYYNNNYYNYNNYNYYYNNYYNYNNNNYYNYYNNNY", "NYNYYYNNYYYNYNYNNNNNNYNYNYYNYNYNNNYNNYNN", "YNYNYYNNNNYYNYYNYYNYNNYYYYYYNNYNNYNNNNNN", "NNNNNYYYNNNYNYYNYYNNYNNYYNNNYNNNYNYYYNNY", "YYNNYNYYYNNYYYNNNYNNNYYNNNNNYNYYNYNYNYNN", "YYNNNNYNNYNNYYYNYNYYYYNNNNYNNNYNNYYNYNNY", "YNNYYNYYNYNNYYYNNNYYYNNNYNYNNYNNNYNYNNYN", "NYNNNYNYNNYYNNNYNNNYNYNYYNNNNYNYNNYNNNYY", "NNNNNNNYNNNNNYNYYYNYYNNYNYYNYYNNNNNNYYNN", "YYYNYNYNNNNNYNNNYNNNYNNYYNNYNNYNNYNYNYNN"};
    int person1 = 23;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> friends = {"NNNNYNYNYNYNNYNNNYNNNNYNNYNYNNNNNNNYYNNN", "NNNYNNNYYNNYNYNNNYNNYNYNYYNYNYNYNNYNYNNN", "NNNNYNNNNNNNNNNNNNNNNYYYNYYYNNYNYNNNYNNN", "NYNNNNNNNYNYNNYYYYNYYNYNNNNNYNYYNYNYNNNN", "YNYNNNNNNNNNNNYNNYYNNNYYNYYNNYNNNYYNYYYY", "NNNNNNNYNYNYNNNYYNNNNNNNYYYYYNNYYNNNYNYN", "YNNNNNNNNYYNNYNNYNNNNNNNNYNNNNNNYNYNYNNN", "NYNNNYNNNYYNNNNNNNNYNNYNYNYNNNYNYNYNYNNN", "YYNNNNNNNNNNNNYYYYNYNYYNNYYYNNYNNNNYYYNN", "NNNYNYYYNNNNYNNNNYYYYNYNNNYNYYNYYNNNNYYY", "YNNNNNYYNNNNYYNNYNNNNYYNYNNNNNYNNNNNNYNN", "NYNYNYNNNNNNNNNNNYNNYYYNYNNNYYNNNNNYNNNN", "NNNNNNNNNYYNNYYNNNNNNYYNNYNNNNYNNYNNYYNN", "YYNNNNYNNNYNYNYNNNYNYNNNNYNNNNNYNYNYYNNY", "NNNYYNNNYNNNYYNYNNNNYNYYYYNYYNNYNNNNNNNN", "NNNYNYNNYNNNNNYNNNNNNNYNNNNNYNNNNYYNYNNN", "NNNYNYYNYNYNNNNNNNYYNNYNYYYNYNNNYNNNYYNN", "YYNYYNNNYYNYNNNNNNNNNNYYNNYNNYNNNNYNNNNN", "NNNNYNNNNYNNNYNNYNNYNNYNNNNYNYNYYYNNYNNY", "NNNYNNNYYYNNNNNNYNYNNNNNNYNYNNYNNNNNYNNN", "NYNYNNNNNYNYNYYNNNNNNNYNNYYNYNNNNNNNYNNN", "NNYNNNNNYNYYYNNNNNNNNNYYNNNYNNNNNNNYNNNN", "YYYYYNNYYYYYYNYYYYYNYYNYYYYYYYYYYYYYNYYY", "NNYNYNNNNNNNNNYNNYNNNYYNNNYNNNNNNNNYYNYN", "NYNNNYNYNNYYNNYNYNNNNNYNNYNYNYYNNNNYYYNN", "YYYNYYYNYNNNYYYNYNNYYNYNYNYNNNYYYNNNYNYN", "NNYNYYNYYYNNNNNNYYNNYNYYNYNNNNNNYNYNNNNN", "YYYNNYNNYNNNNNYNNNYYNYYNYNNNNYNNNYYNYYYN", "NNNYNYNNNYNYNNYYYNNNYNYNNNNNNYYYNNNYYYNN", "NYNNYNNNNYNYNNNNNYYNNNYNYNNYYNNYNNNNYNNN", "NNYYNNNYYNYNYNNNNNNYNNYNYYNNYNNNYNNYNNNY", "NYNYNYNNNYNNNYYNNNYNNNYNNYNNYYNNYNYNNYNN", "NNYNNYYYNYNNNNNNYNYNNNYNNYYNNNYYNYNYNNNY", "NNNYYNNNNNNNYYNYNNYNNNYNNNNYNNNNYNNNNNNN", "NYNNYNYYNNNNNNNYNYNNNNYNNNYYNNNYNNNYNNYN", "YNNYNNNNYNNYNYNNNNNNNYYYYNNNYNYNYNYNNNNN", "YYYNYYYYYNNNYYNYYNYYYNNYYYNYYYNNNNNNNYNY", "NNNNYNNNYYYNYNNNYNNNNNYNYNNYYNNYNNNNYNNY", "NNNNYYNNNYNNNNNNNNNNNNYYNYNYNNNNNNYNNNNY", "NNNNYNNNNYNNNYNNNNYNNNYNNNNNNNYNYNNNYYYN"};
    int person1 = 36;
    int person2 = 22;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> friends = {"NYYYYNNNNYYNNNYYYYNNNNYYNYNYNYYYYYYYYNNY", "YNYYNYYYNYYYNYYNYNNYNYNNYYNNYYYNYNNNYNYN", "YYNNYNYNYNNNNYYYYNYYNYYYYYYYNNYNYYYYNNYN", "YYNNYYYNYYYNNNNNYYYYNNYNNYYYYYYYYYNNYYYN", "YNYYNYNYYYNNNNNYYNYYNNNNYYNYYYYYNYNYYNNY", "NYNYYNNYYYYYNYYYNNNNYYYNNYNYYNYYYYYNNYNY", "NYYYNNNNYNNNNYYNYYNYYNYNYYNYNYNYNYYNYYNN", "NYNNYYNNYNNYNYNYYYNYYNYYNNYNYYNYNNYYNYNN", "NNYYYYYYNNNYYYNNNYYYYYYYNYYNNYYYYNYYYNYN", "YYNYYYNNNNYYNYYYYYYYNYNNNNNNYYNNNNYYYNYY", "YYNYNYNNNYNYNYNYYYNNYYYYYYNYYYYNYYYNNYYY", "NYNNNYNYYYYNYYNYYNYNYYYYNNNYYYNYNYYNYYNY", "NNNNNNNNYNNYNNYYYYYNYNNYYYYNYYNYNYNYYNNN", "NYYNNYYYYYYYNNNYYNNYYYYYNYNYYNYYYNYYYNNY", "YYYNNYYNNYNNYNNYYNYYYNNNNYYYYNYNYNYYYNYN", "YNYNYYNYNYYYYYYNNNYYNYNYYYYNNNYYNYYYYNNY", "YYYYYNYYNYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYY", "YNNYNNYYYYYNYNNNYNNNYNNYNYYYNYNNYYYYNYYY", "NNYYYNNNYYNYYNYYYNNYYYNNNYYYYNNYNYNNYYYN", "NYYYYNYYYYNNNYYYYNYNNNYYNNNYNYNYYNYYNNNY", "NNNNNYYYYNYYYYYNYYYNNYYYNNYYYNYYYNNNNYYN", "NYYNNYNNYYYYNYNYNNYNYNYNNNNYNNNNNNNNNNYN", "YNYYNYYYYNYYNYNNYNNYYYNYYYNYNYNYYNNYYYYN", "YNYNNNNYYNYYYYNYYYNYYNYNNNYYNYYYYYNYYYYN", "NYYNYNYNNNYNYNNYYNNNNNYNNYYYYYYYNYNNYYNN", "YYYYYYYNYNYNYYYYYYYNNNYNYNNYYNYNYNNYYYNN", "NNYYNNNYYNNNYNYYYYYNYNNYYNNNNNYYYNNYYYYN", "YNYYYYYNNNYYNYYNYYYYYYYYYYNNYNYYNYYNNYYN", "NYNYYYNYNYYYYYYNYNYNYNNNYYNYNYNYYYNNNYYN", "YYNYYNYYYYYYYNNNYYNYNNYYYNNNYNYYYYNNYNNN", "YYYYYYNNYNYNNYYYYNNNYNNYYYYYNYNYNYYYNYYN", "YNNYYYYYYNNYYYNYYNYYYNYYYNYYYYYNYNYYYYNN", "YYYYNYNNYNYNNYYNYYNYYNYYNYYNYYNYNNYNYYNY", "YNYYYYYNNNYYYNNYYYYNNNNYYNNYYYYNNNYYNNYY", "YNYNNYYYYYYYNYYYYYNYNNNNNNNYNNYYYYNNNYNY", "YNYNYNNYYYNNYYYYYYNYNNYYNYYNNNYYNYNNNYYY", "YYNYYNYNYYNYYYYYYNYNNNYYYYYNNYNYYNNNNYYY", "NNNYNYYYNNYYNNNNYYYNYNYYYYYYYNYYYNYYYNNY", "NYYYNNNNYYYNNNYNYYYNYYYYNNYYYNYNNYNYYNNN", "YNNNYYNNNYYYNYNYYYNYNNNNNNNNNNNNYYYYYYNN"};
    int person1 = 21;
    int person2 = 16;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> friends = {"NNNYYYNYNNYYYYNYNNNYNNNYYYYYNNYNYNYYNNYN", "NNYYYYNYYYYNYYYYNYYYYNYYYNYNYNYNYYNYYYYY", "NYNYYYNNYYNNYYNYYYYYNNYYYYNYNNYNNYYYYYNN", "YYYNYNYNNYYYYNYYYYYNYNYNYYNYYYNNNNNYYYNN", "YYYYNYYNYYYNYNNNNYYYYNYYNYYNYNYNNYYNYYYN", "YYYNYNNNNYYNYNYYYYYYYNYNYYYYYYNNNNYNYYNY", "NNNYYNNYNYYYNNYNNYYNNYNNYYYNYYNYYNNYYNYY", "YYNNNNYNYYYNYYNYYYNNYYNYYYYYYYYYYNYNYNYY", "NYYNYNNYNYNYYYNYYYYNYYNYYYNYYYYNNYYYYYYY", "NYYYYYYYYNYYYYNYYYYYNNYYYYYYNYYYYYYYYYNY", "YYNYYYYYNYNNNYNYNNYNNYYYNNYYYYYNYNYNNNYY", "YNNYNNYNYYNNYYNYYNYNNNYYNYNYYNNYYYNNNYYY", "YYYYYYNYYYNYNNYYYYYYYNYYNNYNYYYYYYYNYYYY", "YYYNNNNYYYYYNNNNNYNYYYNYYYNNYNYYNNYYNNNY", "NYNYNYYNNNNNYNNYYNNNNNYNNYNYYYYYYNNNYNYY", "YYYYNYNYYYYYYNYNYYNYYNNNNYYYYNYNYNYYYYNY", "NNYYNYNYYYNYYNYYNYYYYNYYNYYYNYYYYNYNYNYY", "NYYYYYYYYYNNYYNYYNYNYNNYYYNNNNNYYNNYYYYN", "NYYYYYYNYYYYYNNNYYNNYNYYYYYNYYYNNNYYYNNY", "YYYNYYNNNYNNYYNYYNNNNYYYYYYNYYYYYYYYYYYN", "NYNYYYNYYNNNYYNYYYYNNNYYNYYYYNYYNYNNNNNY", "NNNNNNYYYNYNNYNNNNNYNNNNYYYYYNNNNNYYYNNN", "NYYYYYNNNYYYYNYNYNYYYNNYYNYYYNYNYYYYNYNY", "YYYNYNNYYYYYYYNNYYYYYNYNYYNYNYYYYNYYYYYY", "YYYYNYYYYYNNNYNNNYYYNYYYNNYYYYYYNNNYNYNY", "YNYYYYYYYYNYNYYYYYYYYYNYNNYYNYYYNYYYYYNY", "YYNNYYYYNYYNYNNYYNYYYYYNYYNNYYYYYYYNYYYY", "YNYYNYNYYYYYNNYYYNNNYYYYYYNNYNNYYYNNNYNN", "NYNYYYYYYNYYYYYYNNYYYYYNYNYYNNYYNYYYNYNN", "NNNYNYYYYYYNYNYNYNYYNNNYYYYNNNYNYYNNYYNY", "YYYNYNNYYYYNYYYYYNYYYNYYYYYNYYNNYNYYYYYN", "NNNNNNYYNYNYYYYNYYNYYNNYYYYYYNNNYYYYYYNN", "YYNNNNYYNYYYYNYYYYNYNNYYNNYYNYYYNYYYNYYY", "NYYNYNNNYYNYYNNNNNNYYNYNNYYYYYNYYNYYYNYN", "YNYNYYNYYYYNYYNYYNYYNYYYNYYNYNYYYYNNYYNY", "YYYYNNYNYYNNNYNYNYYYNYYYYYNNYNYYYYNNYNYN", "NYYYYYYYYYNNYNYYYYYYNYNYNYYNNYYYNYYYNYNY", "NYYYYYNNYYNYYNNYNYNYNNYYYYYYYYYYYNYNYNYY", "YYNNYNYYYNYYYNYNYYNYNNNYNNYNNNYNYYNYNYNY", "NYNNNYYYYYYYYYYYYNYNYNYYYYYNNYNNYNYNYYYN"};
    int person1 = 21;
    int person2 = 12;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> friends = {"NYNNNNYNNNNNNNNNNNNNNNNNYNNYYYNNNNNYYYNN", "YNYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYNYYN", "NYNNNNNNYNNYNNNNYYNNNNYYNNYNNYNNNNNNNNNN", "NYNNYNNNNNYYNNNNYNYNNNNNYNNNNNNNNNNNNNNN", "NYNYNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYY", "NYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNY", "YYNNNNNYYNNNYNNYNNNNNYNYNYNNYNYNNYNNNNNY", "NYNNNNYNNNNNNNNNNYNYNNNNNNYYNYNNYNNNNNNN", "NYYNYNYNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NYNNNNNNNNNNYNNYNYNNNNNNNNNNYYYNNNNNNNNY", "NYNYNNNNNNNYYNYYNYNYNNNNNNNNNNYNNNNNNYNN", "NYYYNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNYNNYYNNNNYNNYNNNYNNNNNNNYNNYNNNNNY", "NYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYNNNYNNNNYNNNNNNNNNNNNNNNNNNYNNNNYNNNNY", "NYNNNNYNNYYNYNNNNNYNNNNNYNYNNNNYNYNNNNNN", "NYYYNNNNNNNNNNNNNYYNNNNNNNYNNNYNNNNNNNNY", "NYYNNNNYNYYNNNNNYNNNNNNNNNNNNNNNNNYYNYNN", "NYNYNNNNNNNNYNNYYNNNNYNNNNNNNYNNNNYNNNNY", "NYNNNNNYNNYNNNNNNNNNNNNNNNNNYNYYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNNYNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNY", "NYYNNNNNNNNNYNNNNNNNNNNNYNYNYNNYNNYNNNYY", "NNYNNNYNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNY", "YNNYNNNNNNNNNNNYNNNNNNYNNNYNNYNNNNNYYNNY", "NYNNYNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNYNN", "NYYNNNNYNNNNNNNYYNNNNNYYYNNNYNNNNNNNNYNY", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNN", "YYNNNNYNYYNNNNNNNNNYNNYNNYYNNNNNNNNNNYNY", "YYYNNNNYYYNNNNYNNNYNNNNNYNNNNNNNNNYNNNNY", "NYNNNNYNNYYYYNNNYNNYNNNNNNNNNNNNNYNNNYNN", "NYNNNNNNNNNNNNNYNNNYNNYNNNNNNNNNYNNNNNNY", "NYNNNNNYNNNNNNNNNNNNYNNYNNNYNNNYNNNNNNNY", "NYNNNYYNNNNNYNNYNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNNNNNNNNYNNYYNNNYNNNNYNYNNNNNNNNYY", "YYNNNNNNNNNNNNNNNYNNNNNNYYNNNNNNNNNNNYNY", "YNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNY", "YYNNNNNNNNYNNNNNNYNNNNNNNYYNYNYNNNNYNNNY", "NYNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNN", "NNNNYYYNNYNNYNYNYNYNNYYYYNYNYYNYYNYYYYNN"};
    int person1 = 1;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYNYYYYNNNNYYYNYYYYYNYNYYNYNYYNNYYYYYNYN", "YNNYYNNYYYYYNYYNYNYNNYNNNYNYYYYYNYYNNYYY", "NNNNYNNNNYYYNYYYNNYYYYNYYYYNYNYNNNYYNNYY", "YYNNNNYYYNYYNYNYYNYYYNYYYYNNYNYYYNNNYYYY", "YYYNNYNNNNYNNYYYYYNNNYYYNYYNNYYNNYNYYYYN", "YNNNYNNYYYYYYYNYYYYYYNYYNNNYYYYNYYYYNYNY", "YNNYNNNYYNYYYNYNYNYNYYYYYYYYYNNYYNNYNYYN", "NYNYNYYNYYYNNYNYNYYYNYNYNYYNYYYNNYYNYNNN", "NYNYNYYYNYNYYNYYNYYYYNYYYNYNYYYNYNYYNYYY", "NYYNNYNYYNYYNYYNYYNYYYNYNYYYNYYYYYNYYYNN", "NYYYYYYYNYNYNNYYYNYYYYYYYYYYYNYYNYYYNYYY", "YYYYNYYNYYYNYYNYNYNYYNYNYYYYNYYYYYYYYNYN", "YNNNNYYNYNNYNNYNYYYYNYNYYYYYYNYNYYNNYNYY", "YYYYYYNYNYNYNNNNYYYNNYYNYNNYYYNNYYNYYYNY", "NYYNYNYNYYYNYNNYNYYYYNYYNYNYYYYNNYNYNNNY", "YNYYYYNYYNYYNNYNYNNYNNYYNYNNNYYYYYYYYYYY", "YYNYYYYNNYYNYYNYNYYNYYYNYYYNNYYNNYNYYYNY", "YNNNYYNYYYNYYYYNYNYNNYNYNYNYNYYYNNYYNYYN", "YYYYNYYYYNYNYYYNYYNYYYYYYYYYYNNNYYYYYYYN", "YNYYNYNYYYYYYNYYNNYNNNNYYYYYYNNYYYNYNYYY", "NNYYNYYNYYYYNNYNYNYNNNYNNNNNYNNYYNYNYYYY", "YYYNYNYYNYYNYYNNYYYNNNYYNNYNYNNNNYYYYNNN", "NNNYYYYNYNYYNYYYYNYNYYNYYNYYNYYNNYYYYYYN", "YNYYYYYYYYYNYNYYNYYYNYYNYYNNYNNYYYNNYYNN", "YNYYNNYNYNYYYYNNYNYYNNYYNYYYYNYNYYYYNNNN", "NYYYYNYYNYYYYNYYYYYYNNNYYNYYYNYNYYNYYYYN", "YNYNYNYYYYYYYNNNYNYYNYYNYYNNYYYYNNNYYYYN", "NYNNNYYNNYYYYYYNNYYYNNYNYYNNYYYYYYNNNNNN", "YYYYNYYYYNYNYYYNNNYYYYNYYYYYNNYYYYYYYYYY", "YYNNYYNYYYNYNYYYYYNNNNYNNNYYNNYYYNNYYNNN", "NYYYYYNYYYYYYNYYYYNNNNYNYYYYYYNYYYYYNYNN", "NYNYNNYNNYYYNNNYNYNYYNNYNNYYYYYNNNYNNNYN", "YNNYNYYNYYNYYYNYNNYYYNNYYYNYYYYNNYYYYYNY", "YYNNYYNYNYYYYYYYYNYYNYYYYYNYYNYNYNNYYNYY", "YYYNNYNYYNYYNNNYNYYNYYYNYNNNYNYYYNNYYYYN", "YNYNYYYNYYYYNYYYYYYYNYYNYYYNYYYNYYYNYNNN", "YNNYYNNYNYNYYYNYYNYNYYYYNYYNYYNNYYYYNYNN", "NYNYYYYNYYYNNYNYYYYYYNYYNYYNYNYNYNYNYNNY", "YYYYYNYNYNYYYNNYNYYYYNYNNYYNYNNYNYYNNNNN", "NYYYNYNNYNYNYYYYYNNYYNNNNNNNYNNNYYNNNYNN"};
    int person1 = 29;
    int person2 = 28;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> friends = {"NNNNNNNYYNYYNNNYNNNNNYNNNNNNYYYNNNNNNNYN", "NNNNNNNNNNYNNYNNNNNNNNNYNNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNNN", "NNNNNNNNNYNNNNNNYNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNNYYNNNNNNNYNNNNNNNYNNNNNNYNNYNNNNYN", "NNNNNNNNNNYNYNNNNNNNNNNNNYNNNNNNNNYNNNNN", "NNNNYNNNNNNYNNNNNNYNNYNNYNNNNNYYNNNNNNYY", "YNNNYNNNNNYNNNNNNYNYNNYNNNNNNNYNNNNNNNNN", "YNNNNNNNNNYNNNYNNYNNNYYNNNNNNYYNNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNYNNNNNYNNNNYNNNN", "YYNNNYNYYYNYYNYYNYNYYYYYYYYNNNNYYNYNYNYY", "YNNNNNYNNNYNNNNNYNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNYNNNNYNNNNYNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNNNNNYYN", "NNNNNNNNYNYNNNNNYNNNNNNNNNNYNNNNNNNNNNYN", "YNNNYNNNNNYNYNNNNYNNNNNNNNYNNNYNNNNNNNNN", "NNNYNNNNNNNYNNYNNNNNNNNYNNNNNNYNNNNNNNNN", "NNNNNNNYYNYNNNNYNNNNNNYNNYNNYNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNYNYNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNYNNNNNNNYNYNNYNNNNYNYNNYYNNNNN", "NNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNYNNN", "YNNNNNYNYNYNNNNNNNYNNNNNNNNNYNNYNNNNYYNN", "NNNNNNNYYNYNNNNNNYNNNNNNNNNNNNNNNNNYNNNN", "NYNNYNNNNNYNNNNNYNNYNNNNNNNYNNYNNNNYNNYN", "NNNNNNYNNYYNNNNNNNNNNNNNNNNNYNYNNNNNYNNN", "NNNNNYNNNNYNNNNNNYNNNNNNNNNYNNYNNNNNNNNN", "NNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNYYNNNNNNNNYNYNNNNYNNNYNNYYN", "YYNNNNNNNNNNNYNNNYNYNYNNYNNNNNYNNNNNNNNN", "YYNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNYNYYNN", "YNYYYNYYYYNYYYNYYNYYNNNYYYNYYYNYYYYYNYYY", "NNNNNNYNNNYNNNNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNYNNYNN", "NNYNYNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNYNNNNNNNYNYYNYNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNYYNNYNNNYNNNNNNNNN", "NNYNNNNNNNYNNNNNNNNNYYNNYNYNNYNNNNNNNNNN", "NNNYNNNNNNNYNYNNNNNNNYNNNNNYNYYNYNNNNNNN", "YNNNYNYNNNYNNYYNNNNNNNNYNNNYNNYNNNNNNNNY", "NNNNNNYNNNYNNNNNNYNNNNNNNNNNNNYNNNNNNNYN"};
    int person1 = 10;
    int person2 = 30;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> friends = {"NNYNYYNYYNNYYYNNYNYYYYYYYNNYNYNYYNYNYYYY", "NNYYYYYNYNYNYNYNYYYYYYYNNNNYYNNYYYYNYYYY", "YYNNYYYNYYNYNYNNYYYYNNYYNYYYNYNYNYYYYYNY", "NYNNYNYNNYNYNNNNYNYYYYYYYYYYYYNNNYNYNNNY", "YYYYNYNYYYYNYYNYYYYNYNYYYYYYNYYYNNYNNYNY", "YYYNYNYNYYNNYYNYYNYNYYNNNNYYNYNNYYNYYNYY", "NYYYNYNYYNNYNYNYNYYYNYYNNNYYNYNNYYNYYYYY", "YNNNYNYNNNYYYYNYYYNNYYYNYNYNYYNNYNYNYNYY", "YYYNYYYNNYNYNYYNYYYNNYNYYYNNYYYNYYYYNYYY", "NNYYYYNNYNYNYYNNYYYYYYYYYNYYYNYYYNYNNYYY", "NYNNYNNYNYNYYYYYYNYYYNNNNYNYNYNYYYNNYNNY", "YNYYNNYYYNYNYYNYYYNYYYYYYNYNNYYYNNNYNNNY", "YYNNYYNYNYYYNNYYYYYNYNNNYYYYYNNYYYNNNNYY", "YNYNYYYYYYYYNNNYYNNYYNYNNNNYYYYYYNNYYYNN", "NYNNNNNNYNYNYNNYYYYYYNYYYNYNNYNNYYNYNNNY", "NNNNYYYYNNYYYYYNNYYNNYYNYYYNNYYYNNNYYYYN", "YYYYYYNYYYYYYYYNNYYNYYYYYNYYNYNNYYYYNYYN", "NYYNYNYYYYNYYNYYYNYYNYYNYNYNNYYYYNYYNYYY", "YYYYYYYNYYYNYNYYYYNYYYYNNYYYNYYYNYYNYYYY", "YYYYNNYNNYYYNYYNNYYNYNNYYYYYYYYYYYYYYYNY", "YYNYYYNYNYYYYYYNYNYYNYYYNYYNNNYYYYYYNYNY", "YYNYNYYYYYNYNNNYYYYNYNNYNYYYYYYYNNNNYNNY", "YYYYYNYYNYNYNYYYYYYNYNNNYYNNYYNYYYYYYNNY", "YNYYYNNNYYNYNNYNYNNYYYNNYYYYNYYYYYNYNNYY", "YNNYYNNYYYNYYNYYYYNYNNYYNYYYYNNNYYNNNYYY", "NNYYYNNNYNYNYNNYNNYYYYYYYNYYNYNYYYNNNYYY", "NNYYYYYYNYNYYNYYYYYYYYNYYYNNYYYYYYYNYNYN", "YYYYYYYNNYYNYYNNYNYYNYNYYYNNNYNNYYYYYNNY", "NYNYNNNYYYNNYYNNNNNYNYYNYNYNNYYNYYNNNNYY", "YNYYYYYYYNYYNYYYYYYYNYYYNYYYYNYYYYYYYYYN", "NNNNYNNNYYNYNYNYNYYYYYNYNNYNYYNYNYNNYNNY", "YYYNYNNNNYYYYYNYNYYYYYYYNYYNNYYNNYNYYYNY", "YYNNNYYYYYYNYYYNYYNYYNYYYYYYYYNNNYYYNNYY", "NYYYNYYNYNYNYNYNYNYYYNYYYYYYYYYYYNYNNNNY", "YYYNYNNYYYNNNNNNYYYYYNYNNNYYNYNNYYNYYYYY", "NNYYNYYNYNNYNYYYYYNYYNYYNNNYNYNYYNYNNYNY", "YYYNNYYYNNYNNYNYNNYYNYYNNNYYNYYYNNYNNYNY", "YYYNYNYNYYNNNYNYYYYYYNNNYYNNNYNYNNYYYNNY", "YYNNNYYYYYNNYNNYYYYNNNNYYYYNYYNNYNYNNNNY", "YYYYYYYYYYYYYNYNNYYYYYYYYYNYYNYYYYYYYYYN"};
    int person1 = 39;
    int person2 = 29;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> friends = {"NYNNYNNYYNYYNNNYNNNNNNNNYNNNNYNNNYNNNNNN", "YNNNNNNYYNNNNNNNNYNYNNNNNNNNNNNYNYNYYYYN", "NNNNNNNNNNNYNNNYNNYNNNNNNNYYNNNNYYNNNYNN", "NNNNNNNNYYYYNNNNNNNNNNNNNNYNYNNNYNNNNNNN", "YNNNNYNNNNNNNNNYNNYYNYNNNNNNNNYYYNYYYNNN", "NNNNYNNNNNNYNNNNNYNNYYYNNNNNNYNNYYNNNNNY", "NNNNNNNNYNNYNNNNNNNNNNYNNNNYNNNYYNNNNYNN", "YYNNNNNNYNNNNNNYNNNNNYNNNYNNNNNNNNNNNNNN", "YYNYNNYYNNYNYNYNYYYYYNNYYYYNYNNYNNYYYYNN", "NNNYNNNNNNYNNNNNNNNNNNNNYNNYNNNNYNNYYNNN", "YNNYNNNNYYNNYNNNNNNNNNNNNNYNYYNNNNNNYNYN", "YNYYNYYNNNNNNNNYNNNNNYNYYYYYNNNYYNNYNYNN", "NNNNNNNNYNYNNYNNYNYNNNNNNYNYYYNNYNNNNYNN", "NNNNNNNNNNNNYNYNNNNNYNNNNNNNNNNNYNNYNYNN", "NNNNNNNNYNNNNYNNNNNNNNYNNNNNNNNYNNNNNNYN", "YNYNYNNYNNNYNNNNNNYNYYNNNNYYYNNNYNYNNNNN", "NNNNNNNNYNNNYNNNNNNNNNYNYNNNYYNYNNNYNNNY", "NYNNNYNNYNNNNNNNNNNYNNNYYNYNNNNYYNYNNYNY", "NNYNYNNNYNNNYNNYNNNNNNNNNNNYNNNNNNNYNNNN", "NYNNYNNNYNNNNNNNNYNNYNYYNYNNNNNNNYYNNYYY", "NNNNNYNNYNNNNYNYNNNYNYYNYNYNNNNYNYNNNNNN", "NNNNYYNYNNNYNNNYNNNNYNNNNNYYNNYYYYYYNNNN", "NNNNNYYNNNNNNNYNYNNYYNNNNYYNNYNNYNNNNYYN", "NNNNNNNNYNNYNNNNNYNYNNNNNNNNNNYNNNNYNNNN", "YNNNNNNNYYNYNNNNYYNNYNNNNYNNNNNYYNNNNNNN", "NNNNNNNYYNNYYNNNNNNYNNYNYNNNNNNNYNNYNNYN", "NNYYNNNNYNYYNNNYNYNNYYYNNNNNYNYNNNNNYNNN", "NNYNNNYNNYNYYNNYNNYNNYNNNNNNYNYNYNNNYNNY", "NNNYNNNNYNYNYNNYYNNNNNNNNNYYNNNYNNNNYNNN", "YNNNNYNNNNYNYNNNYNNNNNYNNNNNNNNNYNNYNYNY", "NNNNYNNNNNNNNNNNNNNNNYNYNNYYNNNNYNYNYNYN", "NYNNYNYNYNNYNNYNYYNNYYNNYNNNYNNNNNNNNNNN", "NNYYYYYNNYNYYYNYNYNNNYYNYYNYNYYNNYYYNNYY", "YYYNNYNNNNNNNNNNNNNYYYNNNNNNNNNNYNNYNNYN", "NNNNYNNNYNNNNNNYNYNYNYNNNNNNNNYNYNNNYYYY", "NYNNYNNNYYNYNYNNYNYNNYNYNYNNNYNNYYNNNNNY", "NYNNYNNNYYYNNNNNNNNNNNNNNNYYYNYNNNYNNYNY", "NYYNNNYNYNNYYYNNNYNYNNYNNNNNNYNNNNYNYNYN", "NYNNNNNNNNYNNNYNNNNYNNYNNYNNNNYNYYYNNYNN", "NNNNNYNNNNNNNNNNYYNYNNNNNNNYNYNNYNYYYNNN"};
    int person1 = 8;
    int person2 = 32;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> friends = {"NYYYYYYYYYYYYNYYYNYYYYYYNYYYYNYYYYYYYYYY", "YNYNYNYYYNYYYYYYYNYYYYYYYYYYYYNYYYNYNYYY", "YYNYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYNY", "YNYNYNNNYNNYYYYYYNNNYYYYYYYYYYYNYYYYYYYY", "YYYYNNNYYNNNYNYYYYYYYYYNNNYYNYYYYYNYYYYY", "YNYNNNNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYNNNNYYYNYNYNYYYYNYYYYNYYYYYYNYYYNYYNY", "YYYNYYYNYYYYYYYYYYYYYYYNYNNYYYYYYYYNYYYY", "YYYYYYYYNNNYYNYYYYYNNYNYYYNYYYYNYYNYNNNY", "YNNNNYYYNNYYYYYYYNYYYYNYYYYYYYNYYYNNYYYY", "YYYNNYNYNYNYNYYNYYYYYYYYYYNNYYYYYNYYNYYY", "YYYYNYYYYYYNYYNYYYYYNYYYYYNYYYYYYNYYYYYY", "YYYYYYNYYYNYNYYNYYYYYYYYYYYYYYNYYYYYYNYY", "NYYYNYYYNYYYYNYYYYYYYYYNYYNYYYYYYYNNYNYN", "YYYYYYNYYYYNYYNYYYYNYNNYYYYYYNYYYNYYYYNY", "YYYYYYYYYYNYNYYNNNNYYYYYYNNYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYNNYYYYNYYNYYYNYNYYYYYYYYN", "NNYNYYYYYNYYYYYNYNYYYYYYYYYNNYNYYYNYNYNN", "YYYNYYYYYYYYYYYNYYNNNYYYYYYYYYNYYYYNYYNY", "YYYNYYNYNYYYYYNYYYNNYYYYYYYYYNYNYNYYYNYY", "YYYYYYYYNYYNYYYYYYNYNNYNYYYYNYYYYYNNNYNY", "YYNYYYYYYYYYYYNYNYYYNNNYYNYNYYYYYYYYYYNY", "YYYYYYYYNNYYYYNYYYYYYNNYYYYYNNYNYYYYNYYN", "YYYYNYYNYYYYYNYYYYYYNYYNYYYYNYYNNYYNYYYY", "NYYYNYNYYYYYYYYYNYYYYYYYNNYYYYYYYNYNNYNN", "YYYYNYYNYYYYYYYNYYYYYNYYNNYYYYNYYYYYYNYY", "YYYYYYYNNYNNYNYNYYYYYYYYYYNYNYNYNNYNYYNY", "YYYYYYYYYYNYYYYYYNYYYNYYYYYNYYYNYYYYYYNY", "YYYYNYYYYYYYYYYYNNYYNYNNYYNYNYYNNYYYYYNY", "NYYYYNYYYYYYYYNYYYYNYYNYYYYYYNYYNYYNYYYY", "YNYYYYYYYNYYNYYYNNNYYYYYYNNYYYNYYYYYYNYN", "YYYNYYNYNYYYYYYYYYYNYYNNYYYNNYYNYYYYYYYN", "YYYYYYYYYYYYYYYYYYYYYYYNYYNYNNYYNNYYYYYN", "YYYYYYYYYYNNYYNYYYYNYYYYNYNYYYYYNNYYYNNY", "YNYYNYYYNNYYYNYYYNYYNYYYYYYYYYYYYYNYYYYY", "YYYYYYNNYNYYYNYYYYNYNYYNNYNYYNYYYYYNYYYN", "YNYYYYYYNYNYYYYYYNYYNYNYNYYYYYYYYYYYNNYY", "YYYYYYYYNYYYNNYYYYYNYYYYYNYYYYNYYNYYNNYY", "YYNYYYNYNYYYYYNNYNNYNNYYNYNNNYYYYNYYYYNY", "YYYYYYYYYYYYYNYYNNYYYYNYNYYYYYNNNYYNYYYN"};
    int person1 = 9;
    int person2 = 35;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYNNYYYNYYYYYYNYNYYYNYYNY", "YNNYYYYYNYNNNYYYYYYYYYYNYNYYYNYYYYNNNYNN", "YNNYYYYYYYYYYYYYYYYYYNNNYYYNYYYYYYYNYNYY", "YYYNYYYYYYYYYYNYYYNNYYNYYYYYYYYYYYYYYYYY", "YYYYNYNYNNNYYYNYYYYYYYYYYYNYYYNYNYYYYYYY", "YYYYYNYYNYYYNYYYNYYYYYYYYYNYYYYNYYYYYYYY", "YYYYNYNNYYYYYYYYYNYNYYYYNYYYYNYYNYNYYNNY", "YYYYYYNNNYNYYYYYYYYYYYYYYYYYYYYYYYNYYNYY", "YNYYNNYNNNYYNNYNYYNNYNNNNNYNYYYNYNYYNYYN", "YYYYNYYYNNYYNYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YNYYNYYNYYNYYYYNYYYYYNNYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYNYYYNNYNNYYNYYYYYYYYYYYYYYYNY", "YNYYYNYYNNYYNNYNYYNYNYYYNYNYYYYYYYYNNYNY", "YYYYYYYYNYYYNNYYYYYYYYYYYYYYYYYNYYNYYYYY", "YYYNNYYYYYYYYYNYYYNYYYYNYYYYYNYYYYNYYYYY", "YYYYYYYYNYNNNYYNYNYYYNYNYYNYYYYYYNYYYYNY", "YYYYYNYYYYYNYYYYNNYYYYNYYYYYYYYYNNNYYYYY", "NYYYYYNYYYYYYYYNNNYNNNYYNYYYYNYYYYYYYYYY", "NYYNYYYYNYYNNYNYYYNYYYYYYYYNYYYYYNYYYYYN", "YYYNYYNYNYYNYYYYYNYNYYYYYYYYYYYYNYYNYYYY", "YYYYYYYYYYYYNYYYYNYYNYNYYNYYYNYYYNYNYNYY", "YYNYYYYYNYNYYYYNYNYYYNYYYYNYYYNNYYNNYYYY", "NYNNYYYYNYNNYYYYNYYYNYNYYYNYYNNYNYNNYNNY", "YNNYYYYYNYYYYYNNYYYYYYYNYYYYYYYNYYNYYYYY", "YYYYYYNYNYYYNYYYYNYYYYYYNYYYNYYYNNYYYNYY", "YNYYYYYYNYYYYYYYYYYYNYYYYNYYYYYNYYYYYYYY", "YYYYNNYYYYYYNYYNYYYYYNNYYYNYNYYYNYYYYYNY", "YYNYYYYYNYYYYYYYYYNYYYYYYYYNYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYNYNYNYYYYYYYNY", "NNYYYYNYYNYYYYNYYNYYNYNYYYYYYNYYNYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYNNYYYYYNYNYYYYYYNYY", "NYYYYNYYNYYYYNYYYYYYYNYNYNYNYYYNYYYYYYYY", "YYYYNYNYYYYYYYYYNYYNYYNYNYNYYNYYNYYYYYYY", "YYYYYYYYNYYYYYYNNYNYNYYYNYYYYYYYYNNNYYNY", "YNYYYYNNYYYYYNNYNYYYYNNNYYYYYYYYYNNYNYNY", "NNNYYYYYYYYYNYYYYYYNNNNYYYYYYYYYYNYNYYYY", "YNYYYYYYNYYYNYYYYYYYYYYYYYYYYYYYYYNYNYYN", "YYNYYYNNYYYYYYYYYYYYNYNYNYYYYYNYYYYYYNYY", "NNYYYYNYYYYNNYYNYYYYYYNYYYNYNYYYYNNYYYNY", "YNYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYN"};
    int person1 = 22;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> friends = {"NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNYNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNNYNNYNNYNNNNYY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNYNNYNNNNNNNNYNYNNNNNNYYNNNYNNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNYNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNNYNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNN", "YYYYYYYYYYYYYYYYYYNYNNYYYYYNYYYYYNYYYNYN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNYNNNNNYYYNNNNNNNNNYNNNNNNNN"};
    int person1 = 33;
    int person2 = 21;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> friends = {"NNNNNNYNNNNNNYNNNNNNYNNNNYNYYNNNYNNNNNNN", "NNYNNNNNNYYNNYNNYNNNNYNNNYNNNNNNNNYNNNNN", "NYNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNNNNNNYNYYNNYNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNYNYNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNYNNNNNNNYYNNNNNNNNNN", "YNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNYYNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNN", "NNYYNNNYNNNNNYNNYNNNYNNYNNNNYYNNNNYNYNNN", "YYYYNNYNNNYNYNYNNNYYNNYNYYNYNNNYNYYNYYYY", "NNNNNNNNNNYNNYNNNNNNYNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNYNNNNNNNYNNYNNNNYNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNY", "NNNNYNNNNNNNNYNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNYNNNNNYNNNNNNNNNNNNNNNN", "YNNNYYNYYYNYYNYYYYYNNYNYNNYYYYYYYNYYNNYN", "NYNNNNNNNNNNNNNYNNYNYNNNNNNNNNNNNYNYNNNN", "NNNNYNNNNNNYNYNNNNNNNNNNNNNNNNYNNNNNNNYN", "NNNNNNNNNNNNYNNNYNNYYNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YNNYNNNNNNNNNYNNNNNNYNNNNNNNYNNNNNNNNNNN", "YNNNNYNNNNNNYNYNYNNNYNNNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNNNYNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNYNNYNNNNYNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNYYNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNYNNNNNNYNYNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNN"};
    int person1 = 20;
    int person2 = 13;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> friends = {"NNNYYNYNYYNYYNYNNNNYNNNNNNNYNNNNNNNYNYNN", "NNNNNNYNYYYNNNNNNNNNNNNNNNNYNYNNNNYNNNNN", "NNNNNNNNNYNNNYNNYNNNNNNNYNNNNYNNNNNNYNNY", "YNNNNNNNNNYYNYYNNNYNNYNNNNYNNYNNNNNNNYYN", "YNNNNNNNNNNYNNNNNNNNNNNNYNNNNYNNNYYNYNNY", "NNNNNNNNYNNNNNNNNYNNYYNNNNYYYYYNNNNNNNNY", "YYNNNNNNNYYNNNNNNYYNNNNNYYNNNYNNNNYYYNNN", "NNNNNNNNYNNYYNNYNNYNNYNYNNNNNYYNYNYNNNNN", "YYNNNYNYNNYNNNNNNNYNNNYYNNNNYYYNNNYYYNYN", "YYYNNNYNNNNNYNNNNNYNNNNNNYNNYYNNNNNNNYNN", "NYNYNNYNYNNYNYYYNNNYNNNNNYNYYYNYNYYYNYNN", "YNNYYNNYNNYNNYNNYNNYYNYNNNNYYNNNYNNYYNNN", "YNNNNNNYNYNNNNNNNNNNNNNNNNNNNYNNYNNNNNNY", "NNYYNNNNNNYYNNYNYNNNNNNYYYNNYYNNYNYNNYYN", "YNNYNNNNNNYNNYNNNYNNNNNYYNNNNYNNNNNNNNYN", "NNNNNNNYNNYNNNNNYNNNNYNNNYYNNYNNYNYNNYYN", "NNYNNNNNNNNYNYNYNYYNYYNYNNNYNYNYNYNNYNNN", "NNNNNYYNNNNNNNYNYNNNNYYYNNNNYYYYNNNNNNNN", "NNNYNNYYYYNNNNNNYNNYYYNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNYYNNNNNNYNNYNNNYYNNYYNNNNNNNNY", "NNNNNYNNNNNYNNNNYNYNNNNNNNNNNYNNNNNYNNNN", "NNNYNYNYNNNNNNNYYYYYNNYYNNNNNYYYNNYNNNNN", "NNNNNNNNYNNYNNNNNYNNNYNNNNNYNNNNNYNNYNNN", "NNNNNNNYYNNNNYYNYYNNNYNNNYNNNYNYYNNNNNYN", "NNYNYNYNNNNNNYYNNNNNNNNNNNYNYYNNYNNNNNNN", "NNNNNNYNNYYNNYNYNNNYNNNYNNNYYYNYNNNNNNNN", "NNNYNYNNNNNNNNNYNNNYNNNNYNNNYYNNNNYYNNNN", "YYNNNYNNNNYYNNNNYNNNNNYNNYNNNYNNYNNNNYYN", "NNNNNYNNYYYYNYNNNYNNNNNNYYYNNYNNYNNNNNYN", "NYYYYYYYYYYNYYYYYYYYYYNYYYYYYNYYYYYYYYYY", "NNNNNYNYYNNNNNNNNYNYNYNNNNNNNYNNNNNYYNNN", "NNNNNNNNNNYNNNNNYYNNNYNYNYNNNYNNYNNNYYNY", "NNNNNNNYNNNYYYNYNNNNNNNYYNNYYYNYNNNNNNNN", "NNNNYNNNNNYNNNNNYNNNNNYNNNNNNYNNNNNYNNNY", "NYNNYNYYYNYNNYNYNNNNNYNNNNYNNYNNNNNNYNNY", "YNNNNNYNYNYYNNNNNNNNYNNNNNYNNYYNNYNNNYYN", "NNYNYNYNYNNYNNNNYNNNNNYNNNNNNYYYNNYNNYNY", "YNNYNNNNNYYNNYNYNNNNNNNNNNNYNYNYNNNYYNNN", "NNNYNNNNYNNNNYYYNNNNNNNYNNNYYYNNNNNYNNNN", "NNYNYYNNNNNNYNNNNNNYNNNNNNNNNYNYNYYNYNNN"};
    int person1 = 29;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> friends = {"NNYNNNNNNNNNYNNYYNNNNNYNNNNNYNNNNNNNNNNY", "NNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNYNNNNNYNNNYNNNNNNNNNNYYNNNNNYNYNNNY", "NNNNYNYNNYNNNNNNNNNNNNNNNNNNNNNNYNNYYNNY", "NNNYNNNYNNNNNYNNYNNNNNNNNNNNNNNNYNYYNNYN", "NNYNNNYNNNNNNNNNYYNNNNYNNNYNNYNNNNNNNNNN", "NNNYNYNYNNNNNNNNNNNNNYYNNYNNYYNNYNNNYNNY", "NNNNYNYNNYYNYNNYNNNNNNNNNNNNNNNNNNNNYNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNYNNYNY", "NNNYNNNYNNNNNNNNNNNYNNNNNNYNNYNYNNYNNYNY", "NNNNNNNYNNNNNNNNNNYYNYYYNYNYNNNYYYNNNNNY", "NNYNNNNNNNNNNNYNYNNNNYNNNNYYNYNNNYNNNNNY", "YNNNNNNYNNNNNNYNNNNNNNYNNNYNYNNNYNNNYNYY", "NNNNYNNNNNNNNNNYNNYNYNNNNNNNNNNNNYYYNNNY", "NYNNNNNNNNNYYNNNNNNNYNNYNNNNNNNNNNYYNNNY", "YNYNNNNYNNNNNYNNYNYNNNNNNNYNNNNYNNNYNNNN", "YYNNYYNNNNNYNNNYNNYNYYNNNNYYYNNYNYYYYYYN", "NNNNNYNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNYNY", "NNNNNNNNNNYNNYNYYYNNNNNNYNYNNNYYNNNNYNNY", "NNNNNNNNYYYNNNNNNNNNNNYNYNNNYNYNNNYNNNNY", "NNNNNNNNNNNNNYYNYNNNNYNNYYNNNNNNNYNNNNNN", "NNNNNNYNNNYYNNNNYNNNYNNNNNNNNYNYNNNNNYNY", "YNNNNYYNNNYNYNNNNNNYNNNNNNYYNNNNYNNNNNNY", "NNNNNNNNNNYNNNYNNNNNNNNNNNNNYNNNYNNNNYNY", "NNNNNNNNNNNNNNNNNNYYYNNNNNNYYYNNNNNNNNNY", "NNNNNNYNYNYNNNNNNNNNYNNNNNNNNNYNNNNNYNNY", "NNYNNYNNNYNYYNNYYNYNNNYNNNNNNNNNNNNNNNNY", "NNYNNNNNNNYYNNNNYNNNNNYNYNNNNNYNYYNNNNYN", "YNNNNNYNNNNNYNNNYNNYNNNYYNNNNNNYYNNNNNNN", "NNNNNYYNNYNYNNNNNNNNNYNNYNNNNNNNNYYYYNNY", "NNNNNNNNNNNNNNNNNYYYNNNNNYNYNNNNNYNNNYNY", "NYNNNNNNNYYNNNNYYNYNNYNNNNNNYNNNYNNNNNYN", "NNNYYNYNNNYNYNNNNNNNNNYYNNNYYNNYNNNNYNNY", "NNYNNNNNNNYYNYNNYNNNYNNNNNNYNYYNNNNNNNYY", "NNNNYNNNYYNNNYYNYNNYNNNNNNNNNYNNNNNNNYNN", "NNYYYNNNNNNNNYYYYNNNNNNNNNNNNYNNNNNNNNNY", "NNNYNNYYNNNNYNNNYNYNNNNNNYNNNYNNYNNNNNNN", "NNNNNNNNYYNNNNNNYYNNNYNYNNNNNNYNNNYNNNYN", "NNNNYNNNNNNNYNNNYNNNNNNNNNNYNNNYNYNNNYNN", "YNYYNNYYYYYYYYYNNYYYNYYYYYYNNYYNYYNYNNNN"};
    int person1 = 39;
    int person2 = 16;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> friends = {"NYYNYYYYYNYYYYYYNNYYYNNYNYNYNNYYYNNYYNYY", "YNYNYNNYYYNYYYYNYNYYYNNYYYNYYNNNYYYYYNYY", "YYNYYNNYYYNYYYYNYNNNNNYNYYNYYNYNNNNNYYYY", "NNYNYYNYYYYYYYNYYNYYNYNYNYYYYYNYNNNNYYNN", "YYYYNNYYYYNNYNNYNNYNYNYYYNYYNNYNYYYYYNYY", "YNNYNNYYNYNYYNYYNYYYNNYYYYNNNYNYNNYNYYYY", "YNNNYYNYYYYYNYYNNNNNYYYNYYYYNYYNYYNYYNYY", "YYYYYYYNYYYYYNYNYNYYYNNYNNYNYNNYYYYNYYNN", "YYYYYNYYNYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYN", "NYYYYYYYYNYNYYYNNNYNNNYYYNYNYYNYYYNNYNNY", "YNNYNNYYYYNYYNYYYNNYYNYNYNYYYYYYNYNYNYNY", "YYYYNYYYYNYNYYYYYYNNNYYNNYNYYNYYYYYYYYYY", "YYYYYYNYYYYYNYYYYNYNYYYYYYYYYYYYYYYYYNNY", "YYYYNNYNYYNYYNYNNNNYYNYYYNYNNYYYNNYYYYNY", "YYYNNYYYYYYYYYNYYNYNNNYYYYNYYYYYNYNYYNNY", "YNNYYYNNYNYYYNYNNYNNNYNYYNNYYNYYNYNNYYYN", "NYYYNNNYYNYYYNYNNNYNYNYYYNYNYYNYNNYNYYYY", "NNNNNYNNNNNYNNNYNNNNYYNNNNNYNNNNNNNNYNNY", "YYNYYYNYYYNNYNYNYNNYYNYNNYYYYYYYYNYYYYYY", "YYNYNYNYYNYNNYNNNNYNNYYYNYYYNYNNYNYYYYNY", "YYNNYNYYYNYNYYNNYYYNNYYNYYYYNYYYYYYYYYYY", "NNNYNNYNYNNYYNNYNYNYYNNNNNYYNNYYNYYNYYYN", "NNYNYYYNYYYYYYYNYNYYYNNYYYNNNYYYYYNNYNYY", "YYNYYYNYYYNNYYYYYNNYNNYNYYYYYNNNYYYNYNNY", "NYYNYYYNYYYNYYYYYNNNYNYYNYYYYYYYYYNYNYYY", "YYYYNYYNYNNYYNYNNNYYYNYYYNNYYNNYYYYNNNNY", "NNNYYNYYYYYNYYNNYNYYYYNYYNNNYNNNNNNYYYYY", "YYYYYNYNNNYYYNYYNYYYYYNYYYNNNNYYYYYYYYYN", "NYYYNNNYYYYYYNYYYNYNNNNYYYYNNYYNNYNYNNNY", "NNNYNYYNYYYNYYYNYNYYYNYNYNNNYNYNNYNYYYYN", "YNYNYNYNYNYYYYYYNNYNYYYNYNNYYYNYYYNNYYYY", "YNNYNYNYYYYYYYYYYNYNYYYNYYNYNNYNNNNYNNYY", "YYNNYNYYYYNYYNNNNNYYYNYYYYNYNNYNNYNYYNYN", "NYNNYNYYYYYYYNYYNNNNYYYYYYNYYYYNYNNYYYYY", "NYNNYYNYYNNYYYNNYNYYYYNYNYNYNNNNNNNYYYYY", "YYNNYNYNYNYYYYYNNNYYYNNNYNYYYYNYYYYNYNNY", "YYYYYYYYYYNYYYYYYYYYYYYYNNYYNYYNYYYYNYYY", "NNYYNYNYYNYYNYNYYNYYYYNNYNYYNYYNNYYNYNNN", "YYYNYYYNYNNYNNNYYNYNYYYNYNYYNYYYYYYNYNNY", "YYYNYYYNNYYYYYYNYYYYYNYYYYYNYNYYNYYYYNYN"};
    int person1 = 8;
    int person2 = 17;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> friends = {"NYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYNNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "NYNYYNYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYN", "YYYNYNYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYNNNNNYNNNNYNNNNNNNNNNNYNNNYNYNYNNYN", "YNYYYNNYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYY", "YYYYYNYNYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYY", "YNNYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYNYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYNYYYYYYY", "YYYYYNYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYNYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYNNYYYYYYNYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYNYYYYNYNYYYYYYYYYNYYYYYNYYYYNY", "YYYNYNYYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYY", "YYYYYNNNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYY", "YYNYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYY", "YYYNYNYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYNYYYYYYYNNYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYNNYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYY", "YYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYY", "YNYYYNYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYNYYY", "YYYYYNYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYNYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNY", "YYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 17;
    int person2 = 5;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> friends = {"NYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYNY", "YNYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYNNNYYY", "YYNYYYYYNYYYYYNNYYNYNYYYYYYYYNNYYYYNYYYY", "YYYNYNYYYYYYNYNYNYYYYYYYYNYYYNYYYYNYYYYY", "YYYYNYYYYYYNYYYYYYYNYYYYYYYYYYNYYYYYYYYY", "YYYNYNNYYYYYYYYYYNYYNYYYYYYYYYYYNYNNNYYY", "YYYYYNNYYYYNYYYNYYNYYYYYYNNYYYYYYYYYYYYY", "YYYYYYYNYNYNYYYYYYNYNYNYYYYNYYYYNYYYNNYY", "YYNYYYYYNYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYY", "NYYYYYYNYNYNYYYYYYYYYYNYYYYYYYYYYYYYYYYN", "YYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYNYNNYNYNYYYNYYYYYYYYYYYYYNYNYYYYYNYY", "YYYNYYYYYYYYNYYYYYYYYYYYNYYYYNNYYYYYYYNY", "YYYYYYYYNYYYYNNYYYYYYYYYYYYYNYYYYYYYYYYY", "YYNNYYYYYYYYYNNYYYYYYNYYYYYYYYNYYYYYYNNY", "YYNYYYNYYYYNYYYNNYYNYYNYYYYYNYYYYNNYYYYY", "YNYNYYYYYYYYYYYNNYYYYNNYYYYYYNYNYYYYNYNY", "YYYYYNYYYYYYYYYYYNYYYYYYYYNYYNYYYYYYYYYN", "YYNYYYNNYYYYYYYYYYNYYYYYYYYYYNYYYYYYYNYY", "YYYYNYYYYYNYYYYNYYYNYYNYYYNYYYYYYYNYYYYY", "YYNYYNYNYYYYYYYYYYYYNYYNYYYYYNYYYYYYYYNN", "YYYYYYYYYYYYYYNYNYYYYNYYYYYYNYNYYYYYYYYY", "YYYYYYYNYNYYYYYNNYYNYYNYNNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYNYNYYYNYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYNYNYYYYNYYYNNNYYYY", "YYYNYYNYYYYYYYYYYYYYYYNNYNYYYYYYYYYYYYYY", "YNYYYYNYYYYYYYYYYNYNYYYYYYNYYNYNYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYNYYNYYYNYYYYY", "YYYYYYYYNYYYYNYNYYYYYNYYYYYYNNYNYYYYYYYY", "YYNNYYYYYYYNNYYYNNNYNYYNNYNYNNNYNYNNNYYY", "YYNYNYYYYYYYNYNYYYYYYNYYYYYNYNNYYYNYYNYY", "NYYYYYYYYYYNYYYYNYYYYYYYYYNYNYYNYYYYYYYN", "YYYYYNYNYYYYYYYYYYYYYYYYYYYYYNYYNYYYYNYY", "YYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYNYYYYNY", "YNYNYNYYYYYYYYYNYYYNYYYYNYYNYNNYYYNYNYNY", "YNNYYNYYYYYYYYYYYYYYYYYYNYYYYNYYYYYNNYYY", "YNYYYNYNYYYYYYYYNYYYYYYYYYYYYNYYYYNNNYYY", "YYYYYYYNYYYNYYNYYYNYYYYYYYYYYYNYNYYYYNNY", "NYYYYYYYYYYYNYNYNYYYNYYYYYYYYYYYYNNYYNNY", "YYYYYYYYYNYYYYYYYNYYNYYYYYYYYYYNYYYYYYYN"};
    int person1 = 11;
    int person2 = 29;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> friends = {"NYYYYYYYYYYYYNYYYYYYYYYYYYYNYNYYYYYYYNYY", "YNYYYYYYYYYYYNYYNYYYYYNYYYNYYYYYYNYYYYYY", "YYNNYNYYYYYYYYYYYYNYYYNNYYYNYYYYYNYYYYYY", "YYNNYNYYNNYNYYYNYYNYYYYYYYYNNYYYYYYYNYNY", "YYYYNYYYYYYYNYYYYYYYYYYNNYNYYYNYYYYYYYYY", "YYNNYNYYYNNYYYNYYYNYYYYYYYYNNYYYYYYYYYYN", "YYYYYYNYYYNYYYYYYNNYNYNYYYYYYYYYYYNYNYYN", "YYYYYYYNYYYYYNYYNYYYYYNYNYYYYYYNNYYYNNYY", "YYYNYYYYNNNYYYYYYYNYYYYYYYYYNYYNYYYYYYYY", "YYYNYNYYNNYYNYYYYYNYYYYYYNYYYYYYYYYYYYYN", "YYYYYNNYNYNYYYYNYYNYYYYYYYYYYYYYNNYYYYYN", "YYYNYYYYYYYNYYYYYNYYYYNYNYNYYYYYYYYYYYYY", "YYYYNYYYYNYYNYYYYYYYYNYYYYNYYYYNYNYYYYYN", "NNYYYYYNYYYYYNYNYYYYYNYYNYYYYYYYYYYNYYYY", "YYYYYNYYYYYYYYNYYYNYYYYYYYYYYYYYYYNYNYYY", "YYYNYYYYYYNYYNYNYYYYYYYYYYYYNYYYYYYYYYYY", "YNYYYYYNYYYYYYYYNYYYYYYYYNYYYYYYYYYNYNNY", "YYYYYYNYYYYNYYYYYNYYYYYYYYYYYYYYYYNYYNYY", "YYNNYNNYNNNYYYNYYYNYYYYYNYNNYYNYNNNNNNYN", "YYYYYYYYYYYYYYYYYYYNYNYYNYNYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYNYNYYYY", "YYYYYYYYYYYYNNYYYYYNYNYNNNYYYYYNNNYNNYYY", "YNNYYYNNYYYNYYYYYYYYYYNNYYYYYYYYYYYYYYYY", "YYNYNYYYYYYYYYYYYYYYYNNNYYYNYYNYYYYYYYNY", "YYYYNYYNYYYNYNYYYYNNYNYYNYYYYYYNYYYYNYYN", "YYYYYYYYYNYYYYYYNYYYYNYYYNYYYYNYNYYNYYYY", "YNYYNYYYYYYNNYYYYYNNYYYYYYNYYYYYNYNYNNYY", "NYNNYNYYYYYYYYYYYYNYYYYNYYYNYYYYYYYYYYYN", "YYYNYNYYNYYYYYYNYYYYYYYYYYYYNNYYYYNYYNYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYNYYNYYYY", "YYYYNYYYYYYYYYYYYYNYYYYNYNYYYYNYNNNYYYYY", "YYYYYYYNNYYYNYYYYYYYYNYYNYYYYYYNNYNYNYYY", "YYYYYYYNYYNYYYYYYYNYYNYYYNNYYNNNNYYYYYYY", "YNNYYYYYYYNYNYYYYYNYNNYYYYYYYYNYYNYYYYYY", "YYYYYYNYYYYYYYNYYNNYYYYYYYNYNYNNYYNYYYYY", "YYYYYYYYYYYYYNYYNYNYNNYYYNYYYNYYYYYNYYYY", "YYYNYYNNYYYYYYNYYYNYYNYYNYNYYYYNYYYYNYYY", "NYYYYYYNYYYYYYYYNNNYYYYYYYNYNYYYYYYYYNNY", "YYYNYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYNNY", "YYYYYNNYYNNYNYYYYYNYYYYYNYYNYYYYYYYYYYYN"};
    int person1 = 18;
    int person2 = 35;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> friends = {"NNNNNYNNNNNNNYYNNNNYYNNYNYNYNYNNNNYNNYYN", "NNNNYNNNYYNNNNYYNNNNNNNYNYNNNNNNNNNNNYYN", "NNNNNNNYNNYNNNNYNNNNNNYNNNNYNNNNNNNNNYYN", "NNNNNYNNNNNNNYNYNNNNNYNNNNNYNNNNNYNNNNYN", "NYNNNNNYNNNNYNYNYYNNNNNNYNNNYYNYYNNNNNYY", "YNNYNNYNNYNNNYNNNYYNNNYYNNYYNNNNNNNNNNYY", "NNNNNYNNNYYYNNYNYNNNYNNYYNNYYNNNYNNNNNYN", "NNYNYNNNNNYNNNNYNNNNYNYNNNNNYYNYNYNNNYYN", "NYNNNNNNNYNNNYNNYNNNNNYNNNYYNNNNNNNNNYYN", "NYNNNYYNYNNNNYNNNNNNNNNYNYNNNYNNYNYNYNYN", "NNYNNNYYNNNNNNNNNNNNNNNNNNNNNYNNNYNNYYYN", "NNNNNNYNNNNNNNNNNNYNNNYNYNNYNNNNYNNNNYYY", "NNNNYNNNNNNNNNNYNYNNNNNYYNYYYNYNNNYNNNYN", "YNNYNYNNYYNNNNNNNNNNNNNNNNNYNNNYNNNNYYYN", "YYNNYNYNNNNNNNNYNNNNYYNNNNNYNNYNNYNNNNYY", "NYYYNNNYNNNNYNYNNYNNNYNNNYNNYNNNYNYNNYYY", "NNNNYNYNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYN", "NNNNYYNNNNNNYNNYNNYNYYNNNYYYNYNNYNNYNNYN", "NNNNNYNNNNNYNNNNNYNNYYNNNNNNNNNNNNNNNYYN", "YNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNYYNNNYNYN", "YNNNNNYYNNNNNNYNNYYNNNNNNYNYNNNNNNNYNYYN", "NNNYNNNNNNNNNNYYNYYNNNYYNNYYNNNYNNNYYNYN", "NNYNNYNYYNNYNNNNYNNNNYNYNNNNNNNNNNNYYNYN", "YYNNNYYNNYNNYNNNNNNNNYYNNNNYNNNNNYNYNYYN", "NNNNYNYNNNNYYNNNNNNYNNNNNNNYNNNYNNNNNNYN", "YYNNNNNNNYNNNNNYNYNYYNNNNNYNNYYNYNNYNNYN", "NNNNNYNNYNNNYNNNNYNNNYNNNYNNNNYNNNNNNNYN", "YNYYNYYNYNNYYYYNNYNNYYNYYNNNNYYYNYYYYNNY", "NNNNYNYYNNNNYNNYNNNNNNNNNNNNNNYNNNNYNYYY", "YNNNYNNYNYYNNNNNNYNYNNNNNYNYNNYNNNYNNNYN", "NNNNNNNNNNNNYNYNNNNNNNNNNYYYYYNNYYNYNNYN", "NNNNYNNYNNNNNYNNNNNYNYNNYNNYNNNNNNYNNNYN", "NNNNYNYNNYNYNNNYNYNYNNNNNYNNNNYNNYNYNYYN", "NNNYNNNYNNYNNNYNNNNNNNNYNNNYNNYNYNNYYNYN", "YNNNNNNNNYNNYNNYNNNNNNNNNNNYNYNYNNNNNYNN", "NNNNNNNNNNNNNNNNNYNNYYYYNYNYYNYNYYNNYNYN", "NNNNNNNNNYYNNYNNNNNYNYYNNNNYNNNNNYNYNNYN", "YYYNNNNYYNYYNYNYNNYNYNNYNNNNYNNNYNYNNNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYNY", "NNNNYYNNNNNYNNYYNNNNNNNNNNNYYNNNNNNNNYYN"};
    int person1 = 38;
    int person2 = 27;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> friends = {"NYYYYYYYYYYYNYYNYNYYNYYYNYYNYYYYNYYYYYYY", "YNYYYNYYYYYYYYYYYYYYNYNYYYYNYYYYYNYYYYYY", "YYNYYYYYYYNYYYYNYYYYYYYYYYNYNYYYYNYYYYYY", "YYYNYYYYYYYNYYYYYYYNNYYYYYYYYYYYYYNYYYYY", "YYYYNNYYNYYYYYYYYYYYYYNYYYYYYNYNYNYYYYYN", "YNYYNNYYYYNYNYYYYYYNNYNNYNYNYYYNNYNNYNYN", "YYYYYYNNYYYNYYYNNYYYNYYYYYYYYNYYYYYYYYYY", "YYYYYYNNYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYNYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYY", "YYYYYYYYYNYYYYYNYYYYYNYYYYYYYNYYYNYYYYYY", "YYNYYNYYYYNYYYNYNYYYNYNYNYYYNYYNYNYNYYYN", "YYYNYYNYYYYNYYYYYNYYYYYYNYNYYYYYYYYYYYYY", "NYYYYNYNYYYYNYYNYYYYYYYYNNYYNYYNNYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYNYYNYNYNYYYYNYNYYYY", "YYYYYYYYYYNYYYNYNNYYYYYNYYNNYYYYYYYYYYYY", "NYNYYYNYYNYYNYYNYYYYYYYYYNYYNYNYYNNYNYYY", "YYYYYYNYYYNYYYNYNYNYYYYYYYNYYYYNNYYNNNYY", "NYYYYYYYYYYNYYNYYNYYYYYNNYNYYYYNYNYYYNYN", "YYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYNYYYYN", "YYYNYNYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYNN", "NNYNYNNYYYNYYYYYYYYYNYNYNNNYYYYYNNYYYYYY", "YYYYYYYYNNYYYNYYYYYNYNYYYYYYYYYNNYNYYYYY", "YNYYNNYYYYNYYYYYYYYYNYNYYYYYYNYYNYYNYYNY", "YYYYYNYYYYYYYYNYYNYYYYYNYYNYYNYYYYYYYNYY", "NYYYYYYYYYNNNNYYYNYYNYYYNYNNYYYYNYYYYYYY", "YYYYYNYYYYYYNYYNYYYYNYYYYNYYNYYYNYYYYNYY", "YYNYYYYYYYYNYNNYNNYYNYYNNYNYYYNNYYYNYYYN", "NNYYYNYYYYYYYYNYYYYYYYYYNYYNNYYYYYYNYYYY", "YYNYYYYYYYNYNNYNYYYYYYYYYNYNNYYNYYNNYYNY", "YYYYNYNYYNYYYYYYYYYYYYNNYYYYYNYYNNNYYNYY", "YYYYYYYNYYYYYYYNYYYYYYYYYYNYYYNYYYYNYYYY", "YYYYNNYYYYNYNYYYNNYYYNYYYYNYNYYNYYYYNYYY", "NYYYYNYYYYYYNYYYNYYYNNNYNNYYYNYYNYYYYNYN", "YNNYNYYYYNNYYNYNYNYYNYYYYYYYYNYYYNNNYNYY", "YYYNYNYYYYYYYYYNYYNYYNYYYYYYNNYYYNNYNYYY", "YYYYYNYYYYNYYNYYNYYYYYNYYYNNNYNYYNYNYYYN", "YYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYNYYNYNYNN", "YYYYYNYYNYYYYYYYNNYYYYYNYNYYYNYYNNYYYNYY", "YYYYYYYYYYYYYYYYYYYNYYNYYYYYNYYYYYYYNYNY", "YYYYNNYYYYNYYYYYYNNNYYYYYYNYYYYYNYYNNYYN"};
    int person1 = 5;
    int person2 = 34;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> friends = {"NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNYNNNNNNNNNNYNNNNNYNNYNNNN", "NNNNNYNYNNNYNNNNNNNNNNNNYNNNNNYNNNYYNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NYYNYNYNYYNNYYYYNYYYNNYYYNYYYYYNYYNYYYNN", "NNNNNYNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNYYNNYYYNYNNYNYYYYNYYNYYYYYNYNYNNYNNNYY", "NNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNYNNNNNYNNNNNNYNNNNNNNNYNNNNNNNNYYNN", "NNNNNYNNNNNNYNNNNNNNNNNNNYNNNNYNNNNNNNNN", "NYNNNYNNNNNYNNNNNNYNNNYNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNYNYNYNNNNNYNNNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNYNYNNNNNNYNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYYNNNNNNNNNNNNNNNYNNYNNNNNNNNN", "NNYNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNYNNYNYNYNNNNYNNNNNNNNNNNNN", "NYNNNYNYNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNYNYNNNNNNYNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNYNNNNNNNNYNNNNNNNNYNNNNNNNNNYNNNNNY", "YNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NYYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNN"};
    int person1 = 5;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> friends = {"NYYYYNYYYYYYYYYNYNYNYYYYYNYYYYYNNYYYYYYY", "YNYYYYNYYYYYYYYNYYYNYYNNYYYYYYYYYYYYYNYY", "YYNYYYYYYYYYYNYYYYYYYYYYNYYYYNYYYYYYYYYY", "YYYNYYYYYYYNYYYYYYYYYYYYYYYYYNYNYYYYYNYY", "YYYYNNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYNNYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYN", "YNYYYYNYYNYYYYYNYNYNYYYYYYYYYYNYYYYYYYYY", "YYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYN", "YYYYYYYYNYYYYYYNYYYYNNYYYYYYYYYYYYYYYYNN", "YYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYNYNYYNYYNNNYNYNNYNNNNYYYYYYNYN", "YYYNYYYYYYYNYYYNYYYNYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYNYYYYNYYNYYYYYYYYYYYNYYYYYYY", "YYNYYYYYYYYYYNYNNYYNNYNYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYNNYNYYYYYYYYNYNYYYYYYYYYYY", "NNYYYNNNNYNNYNNNYNYYYNYYYYNYYYYNYYYYYYNY", "YYYYYYYYYYYYYNYYNYYYNYYYYYNNYYYYNYYYYYYN", "NYYYYYNYYYYYNYNNYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "NNYYYYNYYYNNYNYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYNYNNYYNYYYNYYYYYYYYYYNYYYYYYNY", "YYYYYYYYNYYNYYYNYYYYYNYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYNYYNYYYYYYYYNNYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYNYY", "YYNYYNYYYYNYYYYYYYYYYYYYNYYYYNYYYYYYYYYY", "NYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYNYYYYYNYY", "YYYYYYYYYYYYYYNNNYYYYYYYYYNYYYYYYYYYNYYY", "YYYYYYYYYYNYYYYYNYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYNYYYNYYYYYYYYYYYYYNYYYYYYYNYYY", "YYNNYYYYYYNYYYYYYYYYYYYYNYYYYNYNYYYYYYYY", "YYYYYYNYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "NYYNYYYYYYYYYYYNYYYYNYYYYNYYYNYNNYYYYYNY", "NYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYNNYNYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYNYYY", "YNYNYYYYYYNYYYYYYYYYYYYNYNYYYYYYYYYYYNYY", "YYYYYYYYNYYYYNYNYYYYNYYYYYYYYYYNNYYYYYNY", "YYYYYNYNNYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 10;
    int person2 = 15;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> friends = {"NYYYYYYYNYYYYYNYYYYYYYYYYNNYNYYYNYYYYYYY", "YNNYYYYYYYYYYNYNNNYYYYYYYYYYNYYYYYYNYYNY", "YNNYNNYYNNNYYNNYYNYNNNYYNYYNYNNYNYNYNNNY", "YYYNYYYYYNNYYYYYYYYYYNYYNYYYYYYYNNYYYYYY", "YYNYNYNYYYYNYYYNNYYYNYNYYYYYYNYYYYYNYYYY", "YYNYYNYNYYNYYNYYYYYYNYYYYNYYNYYYYYYYYYNY", "YYYYNYNYYYYYYYNYYYNYNYYYNYYYYYYYNYYYYYYN", "YYYYYNYNYYYYYYNYYYYYYYYYNYYNNYYYNYYYYYYY", "NYNYYYYYNYYYNYNYYYNYNYYNYYYYYYYYYYYYYNYN", "YYNNYYYYYNNNYYYNNYYYYYYYYYYYNYYYYYYYYYYY", "YYNNYNYYYNNYYYNYNYYYYYYNYYNYNYYYYYYYNYYY", "YYYYNYYYYNYNYYYYYYYNYYNYYNNYNYYYNYYNYYYY", "YYYYYYYYNYYYNYYYNYNNYYYYYNYYYYYYNNYYNYYY", "YNNYYNYYYYYYYNNYYNYYYYYYYYNYNYYYYYYYYYYY", "NYNYYYNNNYNYYNNYYYYYYYNNNYYYYYYYYYYYNNYY", "YNYYNYYYYNYYYYYNYYYYYYYNYNNYYYNNNYNYYYNY", "YNYYNYYYYNNYNYYYNYNYYYYNYNYYYYYYNNYYYNNY", "YNNYYYYYYYYYYNYYYNYYYYYNNYNNYYNNYNYYNNYY", "YYYYYYNYNYYYNYYYNYNNNNYYYYYYNYYNNYYYYNYN", "YYNYYYYYYYYNNYYYYYNNYYYYYNYNYYYYYYNYNYYY", "YYNYNNNYNYYYYYYYYYNYNNNYYYYYYYYYYNNNNNNY", "YYNNYYYYYYYYYYYYYYNYNNYYYNYYYYNYYYYYYYYY", "YYYYNYYYYYYNYYNYYYYYNYNYYNYYYYYYNYYYYNNN", "YYYYYYYYNYNYYYNNNNYYYYYNYYYYYNYYNYYYNNYY", "YYNNYYNNYYYYYYNYYNYYYYYYNYYYYYYYYYYNYYYY", "NYYYYNYYYYYNNYYNNYYNYNNYYNYYYYNNNYNYNNYY", "NYYYYYYYYYNNYNYNYNYYYYYYYYNYYYYYNYNYYYYY", "YYNYYYYNYYYYYYYYYNYNYYYYYYYNNYYYYNYNYYYY", "NNYYYNYNYNNNYNYYYYNYYYYYYYYNNYYYNYYYYYYN", "YYNYNYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYNYY", "YYNYYYYYYYYYYYYNYNYYYNYYYNYYYYNNYYYYYYYY", "YYYYYYYYYYYYYYYNYNNYYYYYYNYYYYNNNYYYNYYY", "NYNNYYNNYYYNNYYNNYNYYYNNYNNYNYYNNNYNYYYN", "YYYNYYYYYYYYNYYYNNYYNYYYYYYNYYYYNNNYYYNY", "YYNYYYYYYYYYYYYNYYYNNYYYYNNYYYYYYNNYYNYY", "YNYYNYYYYYYNYYYYYYYYNYYYNYYNYYYYNYYNYYYY", "YYNYYYYYYYNYNYNYYNYNNYYNYNYYYYYNYYYYNYYY", "YYNYYYYYNYYYYYNYNNNYNYNNYNYYYNYYYYNYYNYY", "YNNYYNYYYYYYYYYNNYYYNYNYYYYYYYYYYNYYYYNN", "YYYYYYNYNYYYYYYYYYNYYYNYYYYYNYYYNYYYYYNN"};
    int person1 = 32;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYY", "YYNYYYYYYYYYYNYYYNYYYYYNYYYYYYNYYYNYYYNY", "YYYNNYYNYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYY", "YYYNNYYYYYYYYYYYYYYYYYYYYNYYYYNYNYYYYNYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYY", "YYYYYYNYYYYYYNYYYYYYYYYYYYNYYYNYYYYYYYYY", "YYYNYYYNYYYYYYYYYYYNYYYYYYYYYYNYYYYNYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYNYYNYYYYYYYYYYYNYYYYYNYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYNY", "YYYYYYYYYYYNNYYNYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYNYNNYYYYYYYNYYYYYYYYYNYYNYNYYYY", "YYNYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYNYYYNYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYNYNYYYYYYYYYYYNYYYYYYYYY", "YYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYNYNYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYNYYYYNYYYYYNYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYNNYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNNYYYYYYYYNYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYY", "YYYYYYYYYNYYYYYYYYYNYYYYNYYNYYNYYYYYYNYY", "YNYYNYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYNYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYNYYYYYY", "NNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNNNYNNNYN", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNNYYNYYYYY", "YYYNNNYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYNYYYYYYYNNYYNYYYYYY", "YYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYNYYYYY", "YYYYYYYNYYYYNYYYYYYYYYYYYYYYYYNYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYY", "YYYYNYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYNYY", "YYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYN"};
    int person1 = 30;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> friends = {"NNNYYNNYYNNYYNNYYNNNNYYNNYNNNNNNNYNNNNNN", "NNNNNNYNNYYNNYNYYYNNYYNNYNNNNNYNNNYNNYNY", "NNNYNYNYNYNNNYNYYYNNYNNNYNNNNNNNNNNYYNNY", "YNYNNNNNNYYYNNNYNNNNYNNNYNNYYNNYNNNNNNNY", "YNNNNYYNNNNNNNNYNNYNNNNNYYNYNYNYNNNNNNNN", "NNYNYNYNNYNNNNNYNNYNNYYNYYNNNNNYYNNNNNNY", "NYNNYYNYNYNYNNNNYYNYYNYNNNYNNNNYNYNNNYYY", "YNYNNNYNNNNNYNYNNNNNYYYNNNNNNNNYNNYYNNNY", "YNNNNNNNNYNNNNNYYYNNNNYNNYNNYYYYNNNYNNNY", "NYYYNYYNYNYNYNYNYYNNNNYNYYYNNYYYYYYYYNNN", "NYNYNNNNNYNYNYYNNNNYYYNNNNNYNNYYNNYYNNYN", "YNNYNNYNNNYNYNNNNNNYNNNNNYNNNYYNNNNYNNNY", "YNNNNNNYNYNYNNNNYYNNNNNNNYYNYNNNNNYNNNYY", "NYYNNNNNNNYNNNNNNNNNYYNNNNYNYYNNYNNNNYNN", "NNNNNNNYNYYNNNNNYNYYNNNNYYYYYNNNNNNNYNYN", "YYYYYYNNYNNNNNNNNNNNNNYYYYNNNNNYYNNNNNNN", "YYYNNNYNYYNNYNYNNNYNNNYYNYYNNNNNYNNNNNYN", "NYYNNNYNYYNNYNNNNNNNNYNNYYNNNNNYYNYNYYNY", "NNNNYYNNNNNNNNYNYNNNYNYNYNNNYNNYNNYYYNNN", "NNNNNNYNNNYYNNYNNNNNNNYNYYNNNYNNNNNNYNYN", "NYYYNNYYNNYNNYNNNNYNNNNYYNYYNNYYNNNYYNNY", "YYNNNYNYNNYNNYNNNYNNNNYNNYNYYYNYNYNNYNYN", "YNNNNYYYYYNNNNNYYNYYNYNYNYYNNYNNNNNNNYNN", "NNNNNNNNNNNNNNNYYNNNYNYNNNNNNNNNNNNNNYYN", "NYYYYYNNNYNNNNYYNYYYYNNNNNNNNNNNYNYNNYNY", "YNNNYYNNYYNYYNYYYYNYNYYNNNNNYYNNYYYNNYYN", "NNNNNNYNNYNNYYYNYNNNYNYNNNNYNYYNYNNYYNYY", "NNNYYNNNNNYNNNYNNNNNYYNNNNYNNNYNYYNNNYYN", "NNNYNNNNYNNNYYYNNNYNNYNNNYNNNYNNNNNNNNNN", "NNNNYNNNYYNYNYNNNNNYNYYNNYYNYNNYYNYNNNNY", "NYNNNNNNYYYYNNNNNNNNYNNNNNYYNNNNNYYNNNNN", "NNNYYYYYYYYNNNNYNYYNYYNNNNNNNYNNYNNNNYYN", "NNNNNYNNNYNNNYNYYYNNNNNNYYYYNYNYNNYNNYYN", "YNNNNNYNNYNNNNNNNNNNNYNNNYNYNNYNNNNNNNNN", "NYNNNNNYNYYNYNNNNYYNNNNNYYNNNYYNYNNNNNNN", "NNYNNNNYYYYYNNNNNNYNYNNNNNYNNNNNNNNNYNNY", "NNYNNNNNNYNNNNYNNYYYYYNNNNYNNNNNNNNYNYNN", "NYNNNNYNNNNNNYNNNYNNNNYYYYNYNNNYYNNNYNNY", "NNNNNNYNNNYNYNYNYNNYNYNYNYYYNNNYYNNNNNNN", "NYYYNYYYYNNYYNNNNYNNYNNNYNYNNYNNNNNYNYNN"};
    int person1 = 20;
    int person2 = 25;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> friends = {"NYYNNYNYYYNYYYYYYYYYYYNYYNYYYYNYYNNYYYNN", "YNYYYNYNYYYYYNYYYYYYNYYYYYYNYYNYYYYNYNYY", "YYNYYYYYYYYNYYYNYNYYNNYYYYYYNYYNYYNYNNNY", "NYYNYNYNNNNYYYNNNNNYYYYYNNNNNNNYYNNYNNNY", "NYYYNNYYYNYNYYYYYNYYNYNNYYYYYYNNNYYNYNYY", "YNYNNNYYYYYYYYNYYYYYYYNNNNNYYYYYYYYYYYYY", "NYYYYYNYYYYYYYYYYYYYYNYYNNYYYYYNNYYYYNNY", "YNYNYYYNYYYYNYYNYYYYYYYYYYNYYNYYNYNYYYYY", "YYYNYYYYNNNYYYYYYYYYYYYYYNYYYYYNYNYYYYYY", "YYYNNYYYNNYNYYYYYYNYYYNYNYNYYYYNYYYYYYYY", "NYYNYYYYNYNYYYYYNYYYYNYYNNNYYYYYNYNYYYYY", "YYNYNYYYYNYNYYNYNYYYNNNYYYNYYYNNYYYYNNNY", "YYYYYYYNYYYYNYYYNYNYYYYYYYYYYYYYNYYYYNYY", "YNYYYYYYYYYYYNNNYYYNYNYNYYYNNYYYNYYYNNYN", "YYYNYNYYYYYNYNNYYYNNYYNYYNYNYYYYNYYNYYNN", "YYNNYYYNYYYYYNYNNNYYNNYYNYYYYNNYYYYYYYYY", "YYYNYYYYYYNNNYYNNYNYYYYYYYYYYNNYYNYYYYNY", "YYNNNYYYYYYYYYYNYNYYYYYYYYYYNYYYNYYNYYYY", "YYYNYYYYYNYYNYNYNYNYYNYYYNYYYYYYYYNYYYNN", "YYYYYYYYYYYYYNNYYYYNNYYNYNYYYNYYYYNYYNYY", "YNNYNYYYYYYNYYYNYYYNNYYYYYYYYYYYYYYYYNNY", "YYNYYYNYYYNNYNYNYYNYYNYYYYYNYYYYYYNNYNNN", "NYYYNNYYYNYNYYNYYYYYYYNNYNNYYYYYYYNNYNNY", "YYYYNNYYYYYYYNYYYYYNYYNNYYNYYYYYNYYYYNNY", "YYYNYNNYYNNYYYYNYYYYYYYYNYNYYYNYYYYNYYNY", "NYYNYNNYNYNYYYNYYYNNYYNYYNYYNYYYYYYYNYNN", "YYYNYNYNYNNNYYYYYYYYYYNNNYNYYNYYNYNYYYYN", "YNYNYYYYYYYYYNNYYYYYYNYYYYYNNYYYYYYYYYYN", "YYNNYYYYYYYYYNYYYNYYYYYYYNYNNYNNYYYNNYYY", "YYYNYYYNYYYYYYYNNYYNYYYYYYNYYNYYYYYNNYYN", "NNYNNYYYYYYNYYYNNYYYYYYYNYYYNYNYYYYNNYYY", "YYNYNYNYNNYNYYYYYYYYYYYYYYYYNYYNYYYYYNNY", "YYYYNYNNYYNYNNNYYNYYYYYNYYNYYYYYNYYYYNYN", "NYYNYYYYNYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYY", "NYNNYYYNYYNYYYYYYYNNYNNYYYNYYYYYYYNYNYYY", "YNYYNYYYYYYYYYNYYNYYYNNYNYYYNNNYYYYNYNNY", "YYNNYYYYYYYNYNYYYYYYYYYYYNYYNNNYYYNYNYYY", "YNNNNYNYYYYNNNYYYYYNNNNNYYYYYYYNNYYNYNYN", "NYNNYYNYYYYNYYNYNYNYNNNNNNYYYYYNYYYNYYNY", "NYYYYYYYYYYYYNNYYYNYYNYYYNNNYNYYNYYYYNYN"};
    int person1 = 3;
    int person2 = 37;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> friends = {"NNNNNNYNNYNNNNNNNNNNYNNYYNNNNYNNNYYNNYNY", "NNNYNNYNNYNNNYNNYNNNYYNNYNNNYNNNYNNNNNYN", "NNNNYNNNNNNNNNNNNNNNYNNYNNNNNNNNYYNYNNYN", "NYNNNNNYNNNNNNNNYNYNNYYYNNNYNNNNNNYYNNYN", "NNYNNYNNNNNNNYNNNNNNNYYYNNNNYNYNYNNNNYNY", "NNNNYNYNNYNNNNNNYNYNYYNNYNNYNYYNNNYNNNNN", "YYNNNYNYNNNNNNNYNYYNNNYNNNNNNNNNYNNNNYNN", "NNNYNNYNNNNNNNYNYNYNYNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNYYNNNNNNYYNNNNNNNYNN", "YYNNNYNNNNNNNYNNNNNNYNNNNYNNYYNNNYYNNNYY", "NNNNNNNNNNNYNNNYNNNNYNNNNNNNYYNYNNNNNNYN", "NNNNNNNNNNYNNNYYYYNNNNYNNYNYNNNYYNNNYYYN", "NNNNNNNNNNNNNYNYNYNNYYNYNNNNYNNNNNNYNNYY", "NYNNYNNNYYNNYNNNYNYNNYYNNNNNNYNNYNNNNNNN", "NNNNNNNYNNNYNNNYNNNNNYYNNYNNNYNNNNNYYNNN", "NNNNNNYNNNYYYNYNNYNNNNYNYNNYNNNNNNNYNNNY", "NYNYNYNYNNNYNYNNNNNNNNYYNNNNNNNNNYNYNNNN", "NNNNNNYNNNNYYNNYNNNYYNNNNYYYNYNNNNNNNNNN", "NNNYNYYYNNNNNYNNNNNNNNYNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNYNNNNNNNNYNNYNNNNNNN", "YYYNNYNYYYYNYNNNNYNYNNNYNYYYYNNNYNYYNYYN", "NYNYYYNNYNNNYYYNNNNNNNYNNNNNNYNNYYYYNYNY", "NNNYYNYNNNNYNYYYYNYNNYNNYNNNNYYYNYNNYNNY", "YNYYYNNNNNNNYNNNYNNNYNNNNNNNNNNYNNYNYNNN", "YYNNNYNNNNNNNNNYNNNNNNYNNYNNNNNNNNNYYYNN", "NNNNNNNNNYNYNNYNNYNNYNNNYNNYYNNYNNYNYNNN", "NNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNYNNNNNNN", "NNNYNYNNNNNYNNNYNYNNYNNNNYNNNNNYNNNNNYYN", "NYNNYNNNYYYNYNNNNNYNYNNNNYNNNYNYYNNYNNNN", "YNNNNYNNYYYNNYYNNYNYNYYNNNNNYNNNYNNYYNNY", "NNNNYYNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNNNNYNNYYNNNNNNNNNNYYNYNYYNNNNYYYYYNN", "NYYNYNYNNNNYNYNNNNNYYYNNNNYNYYYNNNNYYNNN", "YNYNNNNNNYNNNNNNYNNNNYYNNNNNNNNYNNNNNYNN", "YNNYNYNNNYNNNNNNNNNNYYNYNYNNNNNYNNNNNNYN", "NNYYNNNNNNNNYNYYYNNNYYNNYNNNYYNYYNNNNNNY", "NNNNNNNNNNNYNNYNNNNNNNYYYYNNNYNYYNNNNNNN", "YNNNYNYNYNNYNNNNNNNNYYNNYNNYNNNYNYNNNNYN", "NYYYNNNNNYYYYNNNNNNNYNNNNNNYNNNNNNYNNYNN", "YNNNYNNNNYNNYNNYNNNNNYYNNNNNNYNNNNNYNNNN"};
    int person1 = 20;
    int person2 = 22;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> friends = {"NYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNYNN", "YNNNNNYNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYNYNNNNNNNYNNNYNNNNYNNNNYNNYNNNY", "NNNNNNNNNYNNYNNNNNNNNNNNYNNYYNNNNNNNNYNN", "NNYNNNNYYNNNNYNYNNYNNNNYNNNNNYNNYNNYNNNN", "NNNNNNNNNNYNNNNNNNNNNNYYNYYYNNNNYNNNNNNN", "NYNNNNNYYNNNYYYNYNNNNNNYNNYNNNNNNNNNNNNN", "NNNNYNYNNNNNYNYNNNNNNNNYNNNYNNYNNNNNYNNN", "NYYNYNYNNNNNNNNNNYNNNNNNYNNNYNNYYNYNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNY", "NNYNNYNNNNNNYNNYNNNNNNNYYNNNNNNYNYNNYYNN", "NNNNNNNNNNNNNYNYNNNNYNNYNNYYYYNNYYNNNNYY", "NYNYNNYYNNYNNYNNNNNNYNNNYNNYYNNNNNNNNNNN", "NNNNYNYNNNNYYNNNYYNNNNNNNNNYNNYNNNYNYNNY", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNY", "NNNNYNNNNNYYNNNNNNNNNNYNNNNNNYYNYNNYNNNN", "NNNNNNYNNNNNNYNNNNNNNNNNYNNNNNYNYNNNNYNN", "NNNNNNNNYNNNNYNNNNNNNYNNNNNNYYNNYNNNNYNN", "NNYNYNNNNNNNNNNNNNNNYYNNYNNNYNYNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYYNNNYY", "NNNNNNNNNNNYYNNNNNYNNNNYNNNNNNNYNNNYNYNN", "NNNNNNNNNNNNNNNNNYYNNNYNYNNNYYNNYYNNNNNN", "YNYNNYNNNNNNNNNYNNNNNYNNNNNNYNNNYNNYYYNY", "NNNNYYYYNNYYNNNNNNNNYNNNYNNNNYNNYYNNNNNN", "NNNYNNNNYNYNYNNNYNYNNYNYNNYNNYNNNYNNNYNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNYNYNNYNYYNNYN", "NNNNNYYNNNNYNNNNNNNNNNNNYNNNNNNNYNNNNYNN", "NNYYNYNYNYNYYYNNNNNNNNNNNYNNNNNNNNYNNNNY", "NNNYNNNNYNNYYNNNNYYNNYYNNNNNNNNNNYNYNYYN", "NNNNYNNNNNNYNNNYNYNNNYNYYYNNNNNNYYNNNNYN", "NNNNNNNYNNNNNYNYYNYYNNNNNNNNNNNNYNNYNNNN", "NNNNNNNNYNYNNNNNNNNNYNNNNNNNNNNNYYNYNYNY", "YNYNYYNNYYNYNNYYYYYYNYYYNYYNNYYYNYYYYYYY", "NNNNNNNNNNYYNNNNNNNYNYNYYNNNYYNYYNNNNNNY", "NNNNNNNNYNNNNYNNNNNYNNNNNYNYNNNNYNNNNYNN", "NNYNYNNNNNNNNNNYNNNNYNYNNYNNYNYYYNNNNNYY", "NNNNNNNYNNYNNYNNNNNNNNYNNNNNNNNNYNNNNNNY", "YNNYNNNNYNYNNNNNYYNNYNYNYNYNYNNYYNYNNNNY", "NNNNNNNNNNNYNNNNNNNYNNNNNYNNYYNNYNNYNNNN", "NNYNNNNNNYNYNYYNNNNYNNYNNNNYNNNYYYNYYYNN"};
    int person1 = 12;
    int person2 = 32;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> friends = {"NYNNYNNNYYYYNNNNNNYYYNNYYYYNYYYNYYYNNYNY", "YNYYYNYYYYYNYYYNNNYNYYYYNNYYNYNYNYYYYYYY", "NYNYYYNYNNNNYYYNNNNNYNNYYNYYYNYYYYNYYYYN", "NYYNYYYYYNYYYNYYYYNNYYNYNNYYYNYYNNNYYYYY", "YYYYNYYNYNYNNYNNYYYNNYYYNYYYYYYNNYYNYYNY", "NNYYYNNNNYNYNYYYYNYNNNYYYNYNNNYYYYYYYNYN", "NYNYYNNNYYYNYNYYYYYNNYYNNYYNYNYYYYYYYYNY", "NYYYNNNNYYYYYYYYNNYYYYYNYNNYYYNNYNYNYNYN", "YYNYYNYYNYYYYYNNYYYYYNNNYNYNYYYNNYYYNNYY", "YYNNNYYYYNYYYNYYYYYYNYYYNNYYNNNYYYYYYNYN", "YYNYYNYYYYNYYYNNNYYYYNYNYNNNNYNNYYNYNNYN", "YNNYNYNYYYYNYNNYNNNYYYYYYYNYNYYNYYNYYNNY", "NYYYNNYYYYYYNYYNYYYYYYYNNYYYYYYNNYYYNYNN", "NYYNYYNYYNYNYNYNNNNNNNYYYNNNYYYYYYYYYNYY", "NYYYNYYYNYNNYYNYNYYNNYYNYNNYYYYNYNNYNYYY", "NNNYNYYYNYNYNNYNYYYNYYYYYNYYYNYNNYYNYYYY", "NNNYYYYNYYNNYNNYNNYNYYYNYNNYYYYYYYYYYYYY", "NNNYYNYNYYYNYNYYNNNYYNYYNNYYYYYYYNYYYYYY", "YYNNYYYYYYYNYNYYYNNNYYNYYNYYNYYNYYYYNYYY", "YNNNNNNYYYYYYNNNNYNNYNYYYNNYNNNNNYNYYYYY", "YYYYNNNYYNYYYNNYYYYYNYYYNNNYNYYYYNNNYYYY", "NYNYYNYYNYNYYNYYYNYNYNNNYNYYNYYNNYYYNNYN", "NYNNYYYYNYYYYYYYYYNYYNNNNYNYYYYYNNNYYYNY", "YYYYYYNNNYNYNYNYNYYYYNNNYNYYYYYYYYNYYYYN", "YNYNNYNYYNYYNYYYYNYYNYNYNNYYYYYYNYYNYYYY", "YNNNYNYNNNNYYNNNNNNNNNYNNNNNNYNYNNNNNNNN", "YYYYYYYNYYNNYNNYNYYNNYNYYNNNNYYYNYNNNYYY", "NYYYYNNYNYNYYNYYYYYYYYYYYNNNNNNYYYYYNYYN", "YNYYYNYYYNNNYYYYYYNNNNYYYNNNNYYNNYNYYYYY", "YYNNYNNYYNYYYYYNYYYNYYYYYYYNYNYYNYYYNYNN", "YNYYYYYNYNNYYYYYYYYNYYYYYNYNYYNNYYNYNYYN", "NYYYNYYNNYNNNYNNYYNNYNYYYYYYNYNNNNYYYYNN", "YNYNNYYYNYYYNYYNYYYNYNNYNNNYNNYNNYYYYYYN", "YYYNYYYNYYYYYYNYYNYYNYNYYNYYYYYNYNNYYNYY", "YYNNYYYYYYNNYYNYYYYNNYNNYNNYNYNYYNNNNNYN", "NYYYNYYNYYYYYYYNYYYYNYYYNNNYYYYYYYNNYNYY", "NYYYYYYYNYNYNYNYYYNYYNYYYNNNYNNYYYNYNNYY", "YYYYYNYNNNNNYNYYYYYYYNYYYNYYYYYYYNNNNNYY", "NYYYNYNYYYYNNYYYYYYYYYNYYNYYYNYNYYYYYYNY", "YYNYYNYNYNNYNYYYYYYYYNYNYNYNYNNNNYNYYYYN"};
    int person1 = 38;
    int person2 = 25;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> friends = {"NNYNNYNYYYYNNYNYYNNNYNNNNNNNNYYYYNNYNYYY", "NNNNYYYYNYNNYYYNNNYYYYNNYNYNNYYNNNNYYYNN", "YNNNYNNYNNNYNNYNYYNNYNYYYNNYNNNNNYNNYYYY", "NNNNYYYNYYYYYNYYYYYNNNYYYYNNYYYNNNYYNYYN", "NYYYNYYNNNYYNNNNYNNNNNNNYYYNNNYYNNYYNNYN", "YYNYYNYNNYNYYNNNNNYNNNYNNYYNNYNNNNNNNYYN", "NYNYYYNYNNNYYNYYYNYYYNNYNNNYNYNYYNNYNNNY", "YYYNNNYNYYNYYYYYNYYNYYNYYNNYYYYYNNYNNYYN", "YNNYNNNYNNYYNYYNNYNNNNNNNNYNYNNNYNNNYYNY", "YYNYNYNYNNYNNYYYYYNYYNYNNNYNYNNYYNNYNYYN", "YNNYYNNNYYNYNNNYNNYYNYYYNYNYNYNNYNNYYYYY", "NNYYYYYYYNYNNYNNNYYNNNYYYNNNNNNNYNNYNNNY", "NYNYNYYYNNNNNYYYYNNNYNNNYNYYNYNNYNNYYNNN", "YYNNNNNYYYNYYNNNNNYYYYYYNNNYNNNNNNYNNNNY", "NYYYNNYYYYNNYNNYYNNNNNNYNNNNYYYNYNYYNNYN", "YNNYNNYYNYYNYNYNNYNNYNYNYNYNNYNNNNNYNNNN", "YNYYYNYNNYNNYNYNNYYYYYNYNYYYNYNNYYNNNNNY", "NNYYNNNYYYNYNNNYYNYNYNNNNNYYNYYNYYNYYYNN", "NYNYNYYYNNYYNYNNYYNYYNNNYNNNYYNNYYNNNNNY", "NYNNNNYNNYYNNYNNYNYNNYNYYYYYYYYYYNNNNYYN", "YYYNNNYYNYNNYYNYYYYNNYNYNNNNNYNNYYYYYNNY", "NYNNNNNYNNYNNYNNYNNYYNNNNNNNNNYYNYNYNYNY", "NNYYNYNNNYYYNYNYNNNNNNNNNYNNNNNYNYNNNNNN", "NNYYNNYYNNYYNYYNYNNYYNNNNNNYNNYNNNNNYNYY", "NYYYYNNYNNNYYNNYNNYYNNNNNNNYYYYYNNNYYYYN", "NNNYYYNNNNYNNNNNYNNYNNYNNNYNNNNNYYNYYNNY", "NYNNYYNNYYNNYNNYYYNYNNNNNYNNYYNYNNYNYYYY", "NNYNNNYYNNYNYYNNYYNYNNNYYNNNYYYNNYYNNYNN", "NNNYNNNYYYNNNNYNNNYYNNNNYNYYNYNYNNNNNYNN", "YYNYNYYYNNYNYNYYYYYYYNNNYNYYYNNNYYNYNNYY", "YYNYYNNYNNNNNNYNNYNYNYNYYNNYNNNYNNYYYNNY", "YNNNYNYYNYNNNNNNNNNYNYYNYNYNYNYNYNNYNYNY", "YNNNNNYNYYYYYNYNYYYYYNNNNYNNNYNYNNNYYNNY", "NNYNNNNNNNNNNNNNYYYNYYYNNYNYNYNNNNNNNNYY", "NNNYYNNYNNNNNYYNNNNNYNNNNNYYNNYNNNNNNNNY", "YYNYYNYNNYYYYNYYNYNNYYNNYYNNNYYYYNNNYNNN", "NYYNNNNNYNYNYNNNNYNNYNNYYYYNNNYNYNNYNYYN", "YYYYNYNYYYYNNNNNNYNYNYNNYNYYYNNYNNNNYNYY", "YNYYYYNYNYYNNNYNNNNYNNNYYNYNNYNNNYNNYYNY", "YNYNNNYNYNYYNYNNYNYNYYNYNYYNNYYYYYYNNYYN"};
    int person1 = 7;
    int person2 = 25;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYNNYNYYYYYYYYYNYNNNYNYYNYYNNYYYNYYYNYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYNYYYYYYYYNYYYYYYYNYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYNYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYNYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYY", "YYYYYNYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNNYYNYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYNYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYY", "NNYYNNNNNNNNNNNYNYYYNYNNYNNNYNNNYNNNYNNN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYNYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYN"};
    int person1 = 5;
    int person2 = 27;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> friends = {"NYNNNNNNNNNYNNNYYYNNNNNNNNNNNYNNNYNNNNNN", "YNNNYNYNYNNNNNYYNYYYYYYNYYNNNNYNNNYYNYYY", "NNNYYNYNNYNYYYYYYYYYYYYYYNYNNYYNYNYYNYYY", "NNYNNNNNNYNNYNYYYYYNNYYYYYNNNYYNNNNNNYYY", "NYYNNNNNYYNNYYNNYNNYYYNNNNYNNNNNNNYYNYYN", "NNNNNNYNNYYYNYYYNNYNNYNNNYYNYNNNYYYNNYNN", "NYYNNYNNNYNYYYYYYYYNYNYYYNYYYYNYNNNNYNYY", "NNNNNNNNYYYYYNYYYYYYYNNNNYNNNNNYYYYYYNNY", "NYNNYNNYNYNNNYNNYNYNYNYYNYYYYYNNYNNYYNNY", "NNYYYYYYYNYNYYYNNNYYYYYYYYYYYNYYYNYYYYYY", "NNNNNYNYNYNYYNNYNYNYYYNYNYYYNYYNYNYNYYNY", "YNYNNYYYNNYNYNNNYYYYYNNNNNYYNYYNYYYNNYNY", "NNYYYNYYNYYYNYYNNYNNYYYNNYYNNNYYYYNYYNNY", "NNYNYYYNYYNNYNNNYYNYYYYYNNYNYYYYNYYYYYNY", "NYYYNYYYNYNNYNNYNYNYNYNNYNYNNYNNYNYYYNYY", "YYYYNYYYNNYNNNYNNNYYNNNNYNYNNYYYYYYYNYYN", "YNYYYNYYYNNYNYNNNNNYYNNNNYYNNYNYNYYNYYNY", "YYYYNNYYNNYYYYYNNNYNYNYYYYNYNNNNNNNYYYYY", "NYYYNYYYYYNYNNNYNYNNYNYYYNYYYNYYYYYYNYNN", "NYYNYNNYNYYYNYYYYNNNNNYYNNNYYYNYNYNNNNYY", "NYYNYNYYYYYYYYNNYYYNNYNNYYYYNYNYYYYYYNNY", "NYYYYYNNNYYNYYYNNNNNYNYNYNYYNYNNNNYYYYNN", "NYYYNNYNYYNNYYNNNYYYNYNYNYYYYYYYYYYNNYNN", "NNYYNNYNYYYNNYNNNYYYNNYNYYYYYNNNYYNNYYNY", "NYYYNNYNNYNNNNYYNYYNYYNYNNNYYYNYYYNYYYNY", "NYNYNYNYYYYNYNNNYYNNYNYYNNYNYNYNYYYYNNYN", "NNYNYYYNYYYYYYYYYNYNYYYYNYNYYYYNYNYYNYNN", "NNNNNNYNYYYYNNNNNYYYYYYYYNYNYYNYNYYNYNYN", "NNNNNYYNYYNNNYNNNNYYNNYYYYYYNNNYNYNYYYYY", "YNYYNNYNYNYYNYYYYNNYYYYNYNYYNNNYYYNNYNNY", "NYYYNNNNNYYYYYNYNNYNNNYNNYYNNNNNNYNYYNYN", "NNNNNNYYNYNNYYNYYNYYYNYNYNNYYYNNYYNYYNYY", "NNYNNYNYYYYYYNYYNNYNYNYYYYYNNYNYNYYYYNYY", "YNNNNYNYNNNYYYNYYNYYYNYYYYNYYYYYYNYNYYNN", "NYYNYYNYNYYYNYYYYNYNYYYNNYYYNNNNYYNYYYYN", "NYYNYNNYYYNNYYYYNYYNYYNNYYYNYNYYYNYNYYYN", "NNNNNNYYYYYNYYYNYYNNYYNYYNNYYYYYYYYYNYNY", "NYYYYYNNNYYYNYNYYYYNNYYYYNYNYNNNNYYYYNNY", "NYYYYNYNNYNNNNYYNYNYNNNNNYNYYNYYYNYYNNNN", "NYYYNNYYYYYYYYYNYYNYYNNYYNNNYYNYYNNNYYNN"};
    int person1 = 9;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> friends = {"NYYNYYYYYYYYNNYNYYYYNNYYYYYYYYYYYNYYYYYY", "YNYYYYYYYYYYYYNNYYYYYYNYYYNYYYYYNYNYNYYN", "YYNYYYYYYNYYYYYYYYYYNYNYYYYNYYYYYNNYYYNY", "NYYNYYYNYNYYNYYNYYYYNNYYYYYYYYYYYYYYNNYY", "YYYYNNYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYN", "YYYYNNYYYYYYYYYNYYYYYYNYYYYNYYYNNNYYYYYY", "YYYYYYNYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYNYYYNYYYYYNYYYYYNYNYNYYYYYYNYYYNYYYYY", "YYYYYYYYNYYYNYYNYYYYNYNYYNYYYYYYNYYYYYYY", "YYNNYYNYYNYYNYYYYYYYYYNYNYYYYYNYYYYNYNYY", "YYYYNYYYYYNYYYYYYYYNYNYYYYYYNNYNYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYNNYYYYYYNYYYNYYYYYYY", "NYYNYYYYNNYYNYNYYYYYNNYNYNNYNYYYYNNYYYYY", "NYYYYYYNYYYYYNYYYYNYYYNYYYYYNYYYNNNYYYYY", "YNYYYYYYYYYYNYNYYYYYYNYYYYYYYYYNYYYYYNYY", "NNYNYNYYNYYYYYYNYYYYYYNNNYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYNNYYNNYYYYYNYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYNNYYYNYYYYYYYYNYYNYYYYYY", "YYYYYYYYYYYYYNYYYYNYYNYYNYYYYYYYYYNYYYYY", "YYYYYYYNYYNYYYYYYYYNYNYYYNYYYNYYYYYYYYYY", "NYNNYYYYNYYNNYYYNYYYNNYYYYYYYNYNNYYYYYYY", "NYYNYYYNYYNNNYNYNNNNNNNYNYNNNYNNNNNNNNNN", "YNNYNNNYNNYYYNYNYYYYYNNNYNYYYNYYYYYYYYYY", "YYYYYYYNYYYYNYYNYYYYYYNNYYYYYYNYYYYYYNYY", "YYYYYYYYYNYYYYYNYYNYYNYYNYYNNYYYYYYYYYYY", "YYYYYYYYNYYYNYYYYYYNYYNYYNYYYYYYNYYYYYYY", "YNYYYYYYYYYYNYYYYYYYYNYYYYNYYNNNYYYYYNYY", "YYNYYNYYYYYYYYYYNYYYYNYYNYYNYNYYYYNYYYYY", "YYYYYYYYYYNNNNYYYYYYYNYYNYYYNYYYYYNNYYYY", "YYYYYYYYYYNYYYYYYYYNNYNYYYNNYNYNNYNYYNNY", "YYYYYYYNYNYYYYYYYNYYYNYNYYNYYYNYYYYYYYYY", "YYYYYNYYYYNYYYNYYYYYNNYYYYNYYNYNNYYYYYYN", "YNYYYNYYNYYNYNYYYYYYNNYYYNYYYNYNNYYYYYYY", "NYNYYNYYYYYYNNYYYNYYYNYYYYYYYYYYYNYYYYYY", "YNNYYYYNYYYYNNYNYYNYYNYYYYYNNNYYYYNYYYYY", "YYYYYYYYYNYYYYYYYYYYYNYYYYYYNYYYYYYNYYYY", "YNYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYY", "YYYNYYYYYNYYYYNYNYYYYNYNYYNYYNYYYYYYYNYY", "YYNYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYNY", "YNYYNYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYN"};
    int person1 = 21;
    int person2 = 22;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> friends = {"NNYYYYNNNYYNNNNYNYYNNNYNNNYYNNYYYNYNNNNY", "NNYNNYNYNNYYYYYYNNNNNNNNYNYNNNNYYNNNYNNN", "YYNNNNYNNNNNNNYNYYNNYNNYYYNYNYNNNYNNYNYY", "YNNNYNNNNNNNNYNNYNNNNNYNYNYNYYNNYYYYYNYN", "YNNYNNNYYNYYNYNNNYYYYYYYYNYNNNNYYNNNNYNN", "YYNNNNNYNNNNNNYNNNYYYYYNYNYYNYYYYNNYYNYY", "NNYNNNNNNYYNNNNYNNNNNNNNYNNNNNNNYNNYYYYY", "NYNNYYNNNNNNYNNNYYNYNYNNNNYYYNNNYNYNYNNY", "NNNNYNNNNNNNYNNNNYNNNYYNNNYYYNNNYNNYYYNY", "YNNNNNYNNNYNYNNYYNYNNYNYNNYNNYYYYNNNYYNN", "YYNNYNYNNYNNNYNYNYYYYNNNYNYYYYNNYNYNYYYY", "NYNNYNNNNNNNNYNYNNYNNYNYYNYNYYNYYYNNNYNY", "NYNNNNNYYYNNNNNNNNNNYNYYYNNYYYYYYNYYNYNN", "NYNYYNNNNNYYNNYYYYYYYYYNYNYYYNNNYYYYYYNY", "NYYNNYNNNNNNNYNYNNNYYNNNYNYYNNNNYYNNNYYN", "YYNNNNYNNYYYNYYNNYNNYNYYYNYNYYNYYYYNYNNN", "NNYYNNNYNYNNNYNNNYNNNYYYNNYNNNYYYYNNNNNN", "YNYNYNNYYNYNNYNYYNYYNYYYYNNYYNNYYNYYYNNY", "YNNNYYNNNYYYNYNNNYNYNNNYNYNNYYNNNYNNYYNN", "NNNNYYNYNNYNNYYNNYYNNNNYNNYNNYNNYYNNYYNN", "NNYNYYNNNNYNYYYYNNNNNNYNNYNNNNNNNYYNNNNN", "NNNNYYNYYYNYNYNNYYNNNNYNYNYYYNYYYYNYNNYN", "YNNYYYNNYNNNYYNYYYNNYYNYNNNNYNYYYYNYYYNN", "NNYNYNNNNYNYYNNYYYYYNNYNNNYYYYYYYNNYNYNN", "NYYYYYYNNNYYYYYYNYNNNYNNNNNYNYNYYNNNNNYN", "NNYNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNNNNNNNN", "YYNYYYNYYYYYNYYYYNNYNYNYNNNNNNYYYNNNNNYY", "YNYNNYNYYNYNYYYNNYNNNYNYYNNNNNNYYNNYNNYN", "NNNYNNNYYNYYYYNYNYYNNYYYNYNNNNYYNNYNNNNY", "NNYYNYNNNYYYYNNYNNYYNNNYYNNNNNYNYNNNYNYN", "YNNNNYNNNYNNYNNNYNNNNYYYNNYNYYNNYYYNNNYY", "YYNNYYNNNYNYYNNYYYNNNYYYYNYYYNNNYNNYYYYY", "YYNYYYYYYYYYYYYYYYNYNYYYYNYYNYYYNYYYYYYY", "NNYYNNNNNNNYNYYYYNYYYYYNNNNNNNYNYNNYNNNY", "YNNYNNNYNNYNYYNYNYNNYNNNNNNNYNYNYNNYNNNY", "NNNYNYYNYNNNYYNNNYNNNYYYNNNYNNNYYYYNYNYN", "NYYYNYYYYYYNNYNYNYYYNNYNNNNNNYNYYNNYNNNN", "NNNNYNYNYYYYYYYNNNYYNNYYNNNNNNNYYNNNNNNN", "NNYYNYYNNNYNNNYNNNNNNYNNYNYYNYYYYNNYNNNY", "YNYNNYYYYNYYNYNNNYNNNNNNNNYNYNYYYYYNNNYN"};
    int person1 = 32;
    int person2 = 25;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> friends = {"NNYYYYYYYYYYNNYYYYNYYYYNYYNNYYNNYNYYNYYY", "NNYYYYNYYYNNYYNYYYYYYYNYYNYNYYYYNYYNYYYY", "YYNYYYNYYNYNYYYNYYNYYYNYYYNNYNYYYNNYYYYY", "YYYNYYYYYYYYYNYNYYYYNYYYYNYYNYYYNNYYYNYN", "YYYYNNNYYYNYYYYYNNYYYNNNYYYNYYYYYNNYYYYY", "YYYYNNNYYYNYYNYYYYYYYNYNNYNNNNNYNYNYNNNY", "YNNYNNNYYNYNYYNYYYYYYYNYYYYNNYYNYYYYYNYY", "YYYYYYYNYYYYYYYYYYYYNNYYYNNNNYNNYYYYYYYY", "YYYYYYYYNNYYNYYYNYYYYYYYNYNNYYYYNNYYYYNY", "YYNYYYNYNNNYYNYYYYYYNYYYYYNYNNYYYYNYYYNN", "YNYYNNYYYNNNYNYYYYNYNNYYYYYNYYYNYYYNNYYY", "YNNYYYNYYYNNYNYYYNNYYYYYNYYYYYYNNYNYYYYN", "NYYYYYYYNYYYNNNYNYYYNYYYNNYNNYYYNNYYYYNY", "NYYNYNYYYNNNNNYYYNYYYYYYYYYNYYYYYYNYYYNY", "YNYYYYNYYYYYNYNNYYYYYYYYNYYNYNNYYNYYYYYY", "YYNNYYYYYYYYYYNNYYNYYYYYNYYNNYYNNYYYYNYY", "YYYYNYYYNYYYNYYYNYYYNYYYYYNNYYYYYYYYNNYY", "YYYYNYYYYYYNYNYYYNYYYYYNNNNYYYYYYYNYYNYN", "NYNYYYYYYYNNYYYNYYNYNYYNNNYYYYYNNYYYYNYN", "YYYYYYYYYYYYYYYYYYYNYYYYYYNNYNNNNYYNNNNY", "YYYNYYYNYNNYNYYYNYNYNYYYYYYYYYYNYNYYNYYN", "YYYYNNYNYYNYYYYYYYYYYNYYYYNNNNNYYYNYYYNY", "YNNYNYNYYYYYYYYYYYYYYYNYNYYNNYYNNNYYYNNY", "NYYYNNYYYYYYYYYYYNNYYYYNYYNNYYYYYNYYNYYY", "YYYYYNYYNYYNNYNNYNNYYYNYNYNYYYYYYNYYYYYN", "YNYNYYYNYYYYNYYYYNNYYYYYYNNYNNYNNYYYYYYN", "NYNYYNYNNNYYYYYYNNYNYNYNNNNNYYYYNYYYYYYY", "NNNYNNNNNYNYNNNNNYYNYNNNYYNNNNYNNYYNYNNN", "YYYNYNNNYNYYNYYNYYYYYNNYYNYNNNYYNYNYYYYY", "YYNYYNYYYNYYYYNYYYYNYNYYYNYNNNNYNNYNYYYY", "NYYYYNYNYYYYYYNYYYYNYNYYYYYYYNNYNYYYYYYN", "NYYYYYNNYYNNYYYNYYNNNYNYYNYNYYYNYYYNYYNY", "YNYNYNYYNYYNNYYNYYNNYYNYYNNNNNNYNYYYYYYY", "NYNNNYYYNYYYNYNYYYYYNYNNNYYYYNYYYNYYYYYN", "YYNYNNYYYNYNYNYYYNYYYNYYYYYYNYYYYYNYYYYN", "YNYYYYYYYYNYYYYYYYYNYYYYYYYNYNYNYYYNYYYY", "NYYYYNYYYYNYYYYYNYYNNYYNYYYYYYYYYYYYNNYN", "YYYNYNNYYYYYYYYNNNNNYYNYYYYNYYYYYYYYNNYY", "YYYYYNYYNNYYNNYYYYYNYNNYYYYNYYYNYYYYYYNY", "YYYNYYYYYNYNYYYYYNNYNYYYNNYNYYNYYNNYNYYN"};
    int person1 = 27;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> friends = {"NNNNNNNNNNNNNNNNNNYNNNYNNNNNYYNNNNNNNNNN", "NNNNNYNNNNYNYNNNYNYNNNNNNNYYNYNNNNNNNNNN", "NNNNNNNNNNNNYNNYYNYNNNYNNNYNNYYNNNNNNNNN", "NNNNNNNNNYYNNYYNNNYYNNNNNYNYNNYNNNNNNNNN", "NNNNNYNNNNNNNNYYNYYYNNYNNNNYNNYNYYNNNNNY", "NYNNYNNNNYNNNNYNYNYYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNYNNNNNNNYNYNNNNYNNNNNNYNNNNNYN", "NNNNNNYNNNYNYNNYNNYYNNNYNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNYNYNNNNNNYYNNNNYNNNNNNNNNNNYNYNNNNNNN", "NYNYNNYYNNNNNNNNYYYYNNYNNNYNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNYNNNN", "NYYNNNNYNYNYNNNNNNNNNNNNNYYNNNNNNYYNYNNN", "NNNYNNNNNYNNNNNNNNYYNNNNNNNYNNNNNNYNNNNN", "NNNYYYNNNNNNNNNNNNYYNYNNNNNNYNNNYNNYYNNN", "NNYNYNNYNNNNNNNNYNYNYNNYNNNNNNNYYNNNNNNY", "NYYNNYNNYNYNNNNYNYYNYYNNNYYNNNYNNNYNNNNN", "NNNNYNNNNNYNNNNNYNYNNNNNNNNNNNNNNYNNNYYN", "YYYYYYYYYYYNNYYYYYNYYYYYYYNYYYYYYYYNYYYY", "NNNYYYNYNNYNNYYNNNYNNNNNNNYNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNYYNYNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNYNYNNNNNNNYNNNNNNNNYYNNN", "YNYNYNNNNNYNNNNNNNYNNNNNNNNYNNNNYNYNNNNY", "NNNNNNNYNNNNNNNYNNYNYNNNNYYNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNYNN", "NNNYNNYNNNNNYNNNYNYNYNNYNNNNNNYNNNNYNNNN", "NYYNNNNNNNYYYNNNYNNYNYNYNNNNNNNNNNNNNYNN", "NYNYYNNNNNNNNYNNNNYNNNYNNNNNNYNNNNYNNYNN", "YNNNNYNNNNNNNNYNNNYYNNNNNNNNNYNNYNNNNNNN", "YYYNNNNYNNNNNNNNNNYNNNNNYNNYYNNNNYNNYNNN", "NNYYYNNNNYNNNNNNYNYNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNYNNYNN", "NNNNYNYNNYNNNNYYNNYNNNYNNNNNYNNNNNNNNNNN", "NNNNYNNNNNNNYNNNNYYNNNNNNNNNNYNNNNNNNYNN", "NNNNNNNNNNNNYYNNYNYNNNYNNNNYNNNYNNNNNNNN", "NNNNNNNNNNYYNNYNNNNNNYNNNYNNNNNNNNNNYYNN", "NNNNNNNNNNNNYNYNNNYNNYNYNNNNNYNNNNNYNNNY", "NNNNNNNNNNNNNNNNNYYNNNNNYNYYNNNYNYNYNNNN", "NNNNNNYNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNYNNYNNNYNNNNNNNNNNNNNYNNN"};
    int person1 = 18;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> friends = {"NNNNNNNNNNNYNNNNYNYYNNNNYNNNYNNNNNNNNNNN", "NNYNNNNNNYYNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNYNNNNNYNYNNNYYNNYNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNYYNNNNYNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNYYNYYNNNNNNNN", "NNNNNNNNNYNYNNNYYNYNYNNYNNNNNNNNNYYNNNNY", "NNNNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNN", "NNNNYNNNNYNNNNNNNYYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNYNNYNNNYNNNYNNNNNNNNYNNNNNYNYNN", "NYNNNYNYYNNYNNNNNYNNNNYNNNNNNYNNNNNYYNNN", "NYNYNNNNNNNNNNNYNNYNNYNNYNNNNNYYNNNNNYNN", "YNNNNYNNNYNNNNNNYYYNNNNNNNNNNNYNNNYNNYNN", "NYNNNNNNYNNNNNNNNNYYNNNNNNNNNNYNNNNNYNNN", "NNNNNNNNNNNNNNNNYNYNYYYNNNYNNNNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNNNNYYNNNNYNNNN", "YNYNNYNNYNNYNYNNNNYNYNNNNNNYNNNYYNNNNNNN", "NNNNNNNYNYNYNNNNNNNNYNNYNNNNNYNNNNNNNNNN", "YNNNYYYYNNYYYYYNYNNNNNYNYYNNYNNYYYYNYNYY", "YNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNYNNNNYNNYYNNNNNNNNNNNYNNNNNNNNNY", "NNNNNNYNNNYNNYNNNNNNNNNNNNNNNYNNNNYYNNNN", "NNYNNNNNNYNNNYNNNNYNNNNNNYNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNNNNN", "YNYNNNNNNNYNNNYNNNYNNNNNNYNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNYNYNNNNNNNYNNYYNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNYN", "NNNNYNNNNNNNNNNNYNNNNNNNNNNNNYYNNNYNNNYN", "YNYNYNNNNNNNNNNNNNYNNNNNYNNNNNNYNNNNYNNY", "NYYYNNNNYYNNNNNYNYNYYYNYNNYYNNYNNNNYNYNN", "NNNYYNNNNNYYYNNYNNNNNNNNNNNYNYNNYNNNNNNY", "NNNNYNNNNNYNNYNNYNYNNNNNNNNNYNNNNNNNYNNN", "NNYNNNNNNNNNNNYNYNYNNNYNNYNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNYNNNNYNNNNNNNNNNYNNNNN", "NNNNNYNNNNNYNNNNNNYNNYNNNNNYNNNNNYNNNYNN", "NNNYNNNNYYNNNNNYNNNNNYNNNYNNNYNNNNNNNNNY", "NNNNNNNNNYNNYNNNNNYNNNNNNYNNYNNYNNNNNNYY", "NNNNNNNYYNYYNYNNNNNNNNNNNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNYYNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNYNYNNNNNNNYNYNNNNYYNNN"};
    int person1 = 18;
    int person2 = 29;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYY", "YNNYYYNYYNYYYYYYYYNYNNYYYYYYYYNYYYYNYYYY", "NYYNNNYNNYNNNNNNNNYNNNNNNNNNNNYNNNNYNNNN", "YYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYN"};
    int person1 = 21;
    int person2 = 20;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> friends = {"NYNYNYYNYYNNYYNNNYYYYYNYYYYNNNNYYYYYYNNN", "YNYNYYYYNNNYYYNYNNYYNYYYNYYNYYYYNYNYNYNY", "NYNYYNYYNYYYNNNNYYNYNNYYNYYNYNYYNYYYNYYY", "YNYNNNYYYYNYYYNNYYNNNNYNYYNYNNNYYNNNYYNY", "NYYNNNNYNYYYNYYYNYNYNYYNNNNNYYYNYNYYNNYY", "YYNNNNYNYYYYYNNYNYYNYYNYYYYYNNYYYYNYYYYY", "YYYYNYNNNYYYYYNNYNYNNYNYYYYYYYYYYNYYYYYY", "NYYYYNNNYYYNNYYNNYYYNNYNNNYYYNYYNYNNYNNY", "YNNYNYNYNNYNYNYNNYNNNYYYYYNNYNYYNYNYNYYY", "YNYYYYYYNNYYYYNYYNYYYYYYNNYNYYYNYYYYNNYY", "NNYNYYYYYYNNYNNNNNNYYNNYYYYYYYNNYNYNNYNY", "NYYYYYYNNYNNNNNYYYYYYYNNNNYYYNYYYYYNYNYN", "YYNYNYYNYYYNNYNYYNNNNYYYNYNNYYNNNYYYNNYY", "YYNYYNYYNYNNYNNYYYYNNNYNYNYNYNYYYNYNYNNN", "NNNNYNNYYNNNNNNYNYNYYNYNNNNNNNNNNYNNNNNN", "NYNNYYNNNYNYYYYNYYYNYNNYYNNYYNNNNNNNNYNY", "NNYYNNYNNYNYYYNYNNYYYNYYNNYYYNNNYYYYYYNN", "YNYYYYNYYNNYNYYYNNYNNYNYNNNNNYYYNYYYNYNN", "YYNNNYYYNYNYNYNYYYNNNYYNYNYNYYNYYYYYYYNY", "YYYNYNNYNYYYNNYNYNNNYYNYNNNYYNNNNYYYYNYY", "YNNNNYNNNYYYNNYYYNNYNYYNNYNNNYYYNNYYNNYY", "YYNNYYYNYYNYYNNNNYYYYNNYYYNYYNYYYNNYNNNY", "NYYYYNNYYYNNYYYNYNYNYNNYNNYYNYYYNNYYNYYY", "YYYNNYYNYYYNYNNYYYNYNYYNNNNYYNYYYNYNNYNY", "YNNYNYYNYNYNNYNYNNYNNYNNNYNYNYYYNNNYYYYN", "YYYYNYYNYNYNYNNNNNNNYYNNYNYYYNNYNYYNNYYY", "YYYNNYYYNYYYNYNNYNYNNNYNNYNYNNYYNNNYYYYN", "NNNYNYYYNNYYNNNYYNNYNYYYYYYNYYYNNYYNNNNY", "NYYNYNYYYYYYYYNYYNYYNYNYNYNYNYNYNYYYNNYY", "NYNNYNYNNYYNYNNNNYYNYNYNYNNYYNYNNNNYYNNN", "NYYNYYYYYYNYNYNNNYNNYYYYYNYYNYNNNNNYNYNN", "YYYYNYYYYNNYNYNNNYYNYYYYYYYNYNNNYNYYNYYN", "YNNYYYYNNYYYNYNNYNYNNYNYNNNNNNNYNYNYYYNN", "YYYNNYNYYYNYYNYNYYYYNNNNNYNYYNNNYNNYYYYY", "YNYNYNYNNYYYYYNNYYYYYNYYNYNYYNNYNNNYNNYY", "YYYNYYYNYYNNYNNNYYYYYYYNYNYNYYYYYYYNYNYN", "YNNYNYYYNNNYNYNNYNYYNNNNYNYNNYNNYYNYNNYY", "NYYYNYYNYNYNNNNYYYYNNNYYYYYNNNYYYYNNNNYY", "NNYNYYYNYYNYYNNNNNNYYNYNYYYNYNNYNYYYYYNY", "NYYYYYYYYYYNYNNYNNYYYYYYNYNYYNNNNYYNYYYN"};
    int person1 = 6;
    int person2 = 14;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> friends = {"NYNYYNYYYYNNNYYYYYYNYYYYYYYNYYYYYYYYNYYY", "YNNYYYYYNNYYYYYYYYYNYYYYNYYYYYNNYYYYNNYY", "NNNNYYNYYYYYYYYNNYNNYYYYYNYYYYYNYNYYYNYY", "YYNNYYYYNYNYYYYYYNNYYYNYYYYYYYYYYYYNNYYY", "YYYYNYYYYYYNYYYYYYYNNYYNYYYNYNYYYYNNNYYY", "NYYYYNNYNNNNNNYYYYNYYNYYYYYNYYYYYYNYNYYY", "YYNYYNNNYYNNYNNYNYYNYNYNYNNYYYYNYYYYYYYY", "YYYYYYNNYYYYYYNNNYYYNNYYYYYYNYYYYYYNNNYN", "YNYNYNYYNYYYYYNYNNNYYYYNYYNYYYYYNYNYNYNY", "YNYYYNYYYNYYYYNYYNYYYYNYYNYYYYYYNYYNYYYY", "NYYNYNNYYYNYYYYYYNYNYYYYYYYNNYYYNYYYNYYN", "NYYYNNNYYYYNYNYYYNYNYYNYNYNYNYNYNYYYNNYN", "NYYYYNYYYYYYNNYYYYYNNNYNNYYYYNYYNYYYNYYN", "YYYYYNNYYYYNNNYYYYYYYYYYNNNYYYYYYYYYYYYN", "YYYYYYNNNNYYYYNYNNYYYYYYYNYYYNNNYYYNYYYN", "YYNYYYYNYYYYYYYNYYYYYYYYYNYNYNYYNYNYYYNN", "YYNYYYNNNYYYYYNYNYYYYYYYYYYYYYNYNYYNNYYY", "YYYNYYYYNNNNYYNYYNYYYYYYYYNYYYYYYYYNNYYY", "YYNNYNYYNYYYYYYYYYNNYYYNNNYYYNYYYYYYYNNY", "NNNYNYNYYYNNNYYYYYNNYYYNYYYYYYNYNNYNNNNY", "YYYYNYYNYYYYNYYYYYYYNYYYYNYYYYNYYYYYYYYY", "YYYYYNNNYYYYNYYYYYYYYNYYYNYYNYYYYYNYYYYY", "YYYNYYYYYNYNYYYYYYYYYYNYYNYYYYNNYNNYYYYY", "YYYYNYNYNYYYNYYYYYNNYYYNYNNYNYNYYYNYYNYY", "YNYYYYYYYYYNNNYYYYNYYYYYNNYNYYNNYYNYYYYY", "YYNYYYNYYNYYYNNNYYNYNNNNNNNNYNNYNNYNNYNN", "YYYYYYNYNYYNYNYYYNYYYYYNYNNYYNYNYYYYYYNY", "NYYYNNYYYYNYYYYNYYYYYYYYNNYNYNNNYYYYYYYN", "YYYYYYYNYYNNYYYYYYYYYNYNYYYYNYNNYYYYNNNY", "YYYYNYYYYYYYNYNNYYNYYYYYYNNNYNYYYNNYYYYN", "YNYYYYYYYYYNYYNYNYYNNYNNNNYNNYNYNYNNYNYY", "YNNYYYNYYYYYYYNYYYYYYYNYNYNNNYYNYYYYNYYY", "YYYYYYYYNNNNNYYNNYYNYYYYYNYYYYNYNNYYYYNY", "YYNYYYYYYYYYYYYYYYYNYYNYYNYYYNYYNNYNYYNN", "YYYYNNYYNYYYYYYNYYYYYNNNNYYYYNNYYYNNNYYY", "YYYNNYYNYNYYYYNYNNYNYYYYYNYYYYNYYNNNYYNY", "NNYNNNYNNYNNNYYYNNYNYYYYYNYYNYYNYYNYNNYY", "YNNYYYYNYYYNYYYYYYNNYYYNYYYYNYNYYYYYNNYN", "YYYYYYYYNYYYYYYNYYNNYYYYYNNYNYYYNNYNYYNN", "YYYYYYYNYYNNNNNNYYYYYYYYYNYNYNYYYNYYYNNN"};
    int person1 = 36;
    int person2 = 25;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> friends = {"NYYNYNNYYYYYYNYYNNNYNYNYNYYNYNYYYYYYYNNY", "YNNYYYNYYNNYYNNYYYNYNYNNYYYYNYNYNNYYYNNY", "YNNYYYNYYYNNNYYNNYNNNYYYNYNNYNNYYNNYYYNY", "NYYNNYNNYYYYNNYYYNNNNYNYNYNNNNNYNNNYNYYN", "YYYNNYYYYNNYYYNNNYNYYYYNNYNNNNYYNNNNYNYN", "NYYYYNNYNNYNYYYNNYNNNYNNYYYYNYYYNYYNYYYY", "NNNNYNNYYNNYNYYYYNNNNYNYYYNNNYYYNYYNNNYN", "YYYNYYYNYNNYYNNNNYNYNYYYNNNNYYYNYYYNYNYY", "YYYYYNYYNYNYYYYNNYNNYYNYYNYYYNNYYYYYYNNN", "YNYYNNNNYNNNNNNNYYNYYYYYYNYNYYYYNYNYYNNY", "YNNYNYNNNNNNYYYNYNNYNYYYYYNYNYYNNNYYYNYY", "YYNYYNYYYNNNYYYNYYNYNYNYYYNNNYYYYYNYNNNN", "YYNNYYNYYNYYNYNYNYNNNYYYYYNNYYYYNNYNNYNN", "NNYNYYYNYNYYYNYNYNYNYNYNNNYNNYYNNNNYYNYN", "YNYYNYYNYNYYNYNNYYNYYYYYYYYYYNNNNNYNYNNY", "YYNYNNYNNNNNYNNNYYNNNYNNNYYYNYNNYYNYNYYN", "NYNYNNYNNYYYNYYYNNNYNYYYYYYYNNNYNYNYYNYY", "NYYNYYNYYYNYYNYYNNNYNYNNNNNNYYNYYNYYYYNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNYNNYNYYYNNYNYYNNYYYYNNNYNNYYYYYYYNYY", "NNNNYNNNYYNNNYYNNNNYNYYNNNYYYNYYNNNNYYYN", "YYYYYYYYYYYYYNYYYYNYYNYYYYYYYYYYYYYYYYYY", "NNYNYNNYNYYNYYYNYNNYYYNYYNYYNNNNYNYNYNYY", "YNYYNNYYYYYYYNYNYNNYNYYNNYYNNYYYNNNNYNYY", "NYNNNYYNYYYYYNYNYNNNNYYNNNNYNNYYYYNYYYYY", "YYYYYYYNNNYYYNYYYNNNNYNYNNYYNNYYNYYYNNNN", "YYNNNYNNYYNNNYYYYNNNYYYYNYNNNYYNYNYNNNYY", "NYNNNYNNYNYNNNYYYNNYYYYNYYNNNYNYNYNNNNNN", "YNYNNNNYYYNNYNYNNYNNYYNNNNNNNNYYYNNNYNYN", "NYNNNYYYNYYYYYNYNYNNNYNYNNYYNNNYNYYYYYNN", "YNNNYYYYNYYYYYNNNNNYYYNYYYYNYNNYNYNNYYYY", "YYYYYYYNYYNYYNNNYYNYYYNYYYNYYYYNYYYYYYYY", "YNYNNNNYYNNYNNNYNYNYNYYNYNYNYNNYNYNNYYYY", "YNNNNYYYYYNYNNNYYNNYNYNNYYNYNYYYYNYYYYYN", "YYNNNYYYYNYNYNYNNYNYNYYNNYYNNYNYNYNYYYYY", "YYYYNNNNYYYYNYNYYYNYNYNNYYNNNYNYNYYNYYYY", "YYYNYYNYYYYNNYYNYYNYYYYYYNNNYYYYYYYYNNNY", "NNYYNYNNNNNNYNNYNYNNYYNNYNNNNYYYYYYYNNNN", "NNNYYYYYNNYNNYNYYNNYYYYYYNYNYNYYYYYYNNNN", "YYYNNYNYNYYNNNYNYNNYNYYYYNYNNNYYYNYYYNNN"};
    int person1 = 21;
    int person2 = 18;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> friends = {"NNNNYNNNYNNYNNYYNNYNNNNNYNNNYNNYNNNNNNNY", "NNYYYYNYNNNYNYNNNNYNNNNYYNNNNYNYYNNNNNYY", "NYNYYYNNNNNNYYNYNNYYYYNYNNYYNYNNYYYNNNYN", "NYYNNYNNYYNNNYNNNNYNNYYYYNYNNYYNNYYNYNNN", "YYYNNNNYYNNNNNYYYNYNNNNNNYYNNNNYYYYNNNYY", "NYYYNNNNYYYYNYNNYNYNNYNYYNYYYYNNYYNYYNNY", "NNNNNNNNYYNYNYYNNNYYNYYYYNNNNYNNYYNYNYNN", "NYNNYNNNNNYNYNNNYNYNYNNYNNYNNYNYNNYNNNNN", "YNNYYYYNNNNNYYNNNNYYYNYNNNNYYYYNNNNYYYNN", "NNNYNYYNNNNNNNYYYNYNNNYYYNNNNYNNNYNYNNNY", "NNNNNYNYNNNNYNYYYNYNYYYYNNNNYNNYYNNYYNNN", "YYNNNYYNNNNNYNNYNNYYYNNYNNNNYYNNNNNNYYNN", "NNYNNNNYYNYYNNYYNNYYNYYNNYNNYYYYNNYNYNYN", "NYYYNYYNYNNNNNNNNNYNYYYNYNYYYNYNNNYNNNYY", "YNNNYNYNNYYNYNNNYNYNNNYYNYYNNNNYNNNNNYYY", "YNYNYNNNNYYYYNNNYNYNNNYNYNYNYNNYYYYYNYNY", "NNNNYYNYNYYNNNYYNNYNNYNNNNNYYNYNNNNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYY", "NNYNNNYNYNNYYNNNNNYNNYNYNYNNNNNNYYNNYNNY", "NNYNNNNYYNYYNYNNNNYNNNNNYNYNNYYNNNNNYNYY", "NNYYNYYNNNYNYYNNYNYYNNNYYNYYNNNNYYYYYNYY", "NNNYNNYNYYYNYYYYNNYNNNNYNNNNNNNNYNYYYNYY", "NYYYNYYYNYYYNNYNNNYYNYYNYYYYYNNNNYYNYNYN", "YYNYNYYNNYNNNYNYNNYNYYNYNNNNNNYNYNYYYYYY", "NNNNYNNNNNNNYNYNNNYYNNNYNNYNYNNYYNNYYNNY", "NNYYYYNYNNNNNYYYNNYNYYNYNYNNYYYYYNYNNNYN", "NNYNNYNNYNNNNYNNYNYNNYNYNNNNNYNNNNNNNNNN", "YNNNNYNNYNYYYYNYYNYNNNNYNYYNNYNNNNNYYNNN", "NYYYNYYYYYNYYNNNNNYNYNNNNNYYYNYYNNYNYNYN", "NNNYNNNNYNNNYYNNYNYNYNNNYNYNNYNNYNYYYYNY", "YYNNYNNYNNYNYNYYNNYNNNNNNYYNNYNNNNYYYYNN", "NYYNYYYNNNYNNNNYNNYYNYYNYYYNNNYNNYNYYYNY", "NNYYYYYNNYNNNNNYNNYYNYNYNNNNNNNNYNYNNYNN", "NNYYYNNYNNNNYYNYNNYNNYYYYNYNNYYYNYNNNYNY", "NNNNNYYNYYYNNNNYYNYNNYYNYYNNYNYYYNNNNNYN", "NNNYNYNNYNYYYNNNYNYYYYYYYYNNYYYYYNNNNNNN", "NNNNNNYNYNNYNNYYNNYNNNNNYNNNNNYYYYYNNNYN", "NYYNYNNNNNNNYYYNNNYNYYYYYNYNNYNNNNNYNYNN", "YYNNYYNNNYNNNYYYYNYYYYYNYYNNNNYNYNYNNNNN"};
    int person1 = 17;
    int person2 = 18;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> friends = {"NYNNNYNNNNNNYNNNYNNNNNNNNNNNNNYNYNYYNNNN", "YNNNNNNNNYNNNNNNNYNNNNYYYNNYNNNNYNNNNNNN", "NNNYNNNYNNNNNYNYNNYNNNNNNNNNYYYNNNNNYYNY", "NNYNNNNNYNNNNNNNNNNNNNYNNNNYNNYNNNNNNYNN", "NNNNNYNNNNYNNNYYNNNNNNYNYYNNNNNYYYNNYNNN", "YNNNYNNNNNYNNYYNNNNNNNNYYYNYNNNNNNNYYNNN", "NNNNNNNNNNNNNNNYNNNNYNNNNNNNNNYNNYNNNNNN", "NNYNNNNNNNNYNNNNNNNNNNYNNNNNNNYNYNNNNNYY", "NNNYNNNNNNNNNNNNNYNNNNNYNNNNNNYNNYNNNNNN", "NYNNNNNNNNNNNNNNYNNNNNNNNNYYYNYNNNNNNNNN", "NNNNYYNNNNNNNNYNNNNNNNNNYNYNNYNNNNYNNNNY", "NNNNNNNYNNNNNNYNNNNNNNYNNNNNNYYNNNNNYNNN", "YNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNYNYNYNN", "NNYNNYNNNNNNNNNNYNNNNNYNYNNNNYNYNNNNNNNN", "NNNNYYNNNNYYNNNNNNNNNYYNNNNYYNYNYNNYNNNN", "NNYNYNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNN", "YNNNNNNNNYNNNYNNNNYNNNNNNNNYNYYNNNYNNNNN", "NYNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNY", "NNYNNNNNNNNNYNNNYNNNNNNNYNYNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYYYNNYNNNNNNNYYYNN", "NNNNNNYNNNNNNNNNNNNNNNYNYNNYNNNNNNYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNYYNNYNNNYNYYNNNNYYNNNYNNNNNNNNNNNYYNN", "NYNNNYNNYNNNNNNNNNNYNNNNNNYYNYYNNNYNNYNN", "NYNNYYNNNNYNNYNYNNYYYYYNNYNNYYNYNNYYYYNN", "NNNNYYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYYNN", "NNNNNNNNNYYNNNNNNNYNNNNYNNNNNNYYNNNNNYNY", "NYNYNYNNNYNNNNYNYNNYYNNYNNNNNNYNNNYNNNNN", "NNYNNNNNNYNNNNYNNNNNNNNNYNNNNNNNNNNNNNNY", "NNYNNNNNNNYYNYNYYNNNNNNYYNNNNNNYNNYNNYNN", "YNYYNNYYYYNYYNYNYYNNNNNYNNYYNNNNYYNNNNYY", "NNNNYNNNNNNNNYNNNNNNNNNNYNYNNYNNNNYNNNNN", "YYNNYNNYNNNNNNYNNNNNNNNNNNNNNNYNNNNYNNNN", "NNNNYNYNYNNNYNNNNNYNNNNNNNNNNNYNNNNNNNYN", "YNNNNNNNNNYNNNNNYNNNYNNYYNNYNYNYNNNNNYNN", "YNNNNYNNNNNNYNYNNNNYNNNNYNNNNNNNYNNNNNYN", "NNYNYYNNNNNYNNNNNNNYNNYNYYNNNNNNNNNNNNNN", "NNYYNNNNNNNNYNNNNNNYNNYYYYYNNYNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNYNNNN", "NNYNNNNYNNYNNNNNNYNNNNNNNNYNYNYNNNNNNNNN"};
    int person1 = 30;
    int person2 = 24;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> friends = {"NYYNYNYNNYNNNYYNNNNNNNYNYYYYNNYYYYNYNNNY", "YNYNYYYYNNNYYNYNNYNYNYNYYNNYYNNNNYYYNNYN", "YYNNYYNYNNNNNYNNNYYNNNNYNYYYYNYNNNNNNNNN", "NNNNNYNYNNYYYNNNYYYYYYNYYNNYNNNNYYYNNNYY", "YYYNNNNYNYYYYNNNYNNNNYNYYYYYNNNYYNYYNNNN", "NYYYNNYNYYYYNYNNYNNYNNNYYYYYYNNNYNYYNYNN", "YYNNNYNYYNYNNNYNYNYNYYNNYNNNNNYYNNYNNNYN", "NYYYYNYNYYNYNYYYNNYYYYNYNYYNNNNNYYNNYNNY", "NNNNNYYYNNYNNNNYNNNNNNYYNNNYNNNYYYNYYNYY", "YNNNYYNYNNYNYYYYYNYNYYNNNNYNYYYNNNYYNYNY", "NNNYYYYNYYNNNYNYYNYNYNNNNNYNYNNYYNNYYYNY", "NYNYYYNYNNNNNYYYNYNYNNYNNNNNNYYNYNNYYYYN", "NYNYYNNNNYNNNNYYNYYNNNNNYYNYYNNNNYYNYNYN", "YNYNNYNYNYYYNNNYNYYYNNNNNNYNYYNYNNNNYNNN", "YYNNNNYYNYNYYNNNNYNNNNNNNYNYNYNNYYNYNYYY", "NNNNNNNYYYYYYYNNYYNNNYNYYYYNNNYYYYYNYYNN", "NNNYYYYNNYYNNNNYNNNYNYNNYNYNYNYNNYYNYNNY", "NYYYNNNNNNNYYYYYNNNNYNYYNNNNNYYNNNYNNNYY", "NNYYNNYYNYYNYYNNNNNNNNNYNYYNNYYYYYYNNYNN", "NYNYNYNYNNNYNYNNYNNNNNNYYNNYYNNYYYNNYNYN", "NNNYNNYYNYYNNNNNNYNNNNNNYYYYNNNYYYYYNNNN", "NYNYYNYYNYNNNNNYYNNNNNNNYYYNYNNNYYNNNYNN", "YNNNNNNNYNNYNNNNNYNNNNNNNYNYNNNNYNYYNNYY", "NYYYYYNYYNNNNNNYNYYYNNNNNNYYNNNNYNYYYNNN", "YYNYYYYNNNNNYNNYYNNYYYNNNNYYNNYYNYNNNNNN", "YNYNYYNYNNNNYNYYNNYNYYYNNNNNNNNNNNYNNYYY", "YNYNYYNYNYYNNYNYYNYNYYNYYNNYYYNYNYNNNNNN", "YYYYYYNNYNNNYNYNNNNYYNYYYNYNYNYYNYNNNYNN", "NYYNNYNNNYYNYYNNYNNYNYNNNNYYNNNNYYYNYNNY", "NNNNNNNNNYNYNYYNNYYNNNNNNNYNNNNNYNNYNNNN", "YNYNNNYNNYNYNNNYYYYNNNNNYNNYNNNNNNYNNNYY", "YNNNYNYNYNYNNYNYNNYYYNNNYNYYNNNNNNYNYYNY", "YNNYYYNYYNYYNNYYNNYYYYYYNNNNYYNNNNNNNNYY", "YYNYNNNYYNNNYNYYYNYYYYNNYNYYYNNNNNYNYYNY", "NYNYYYYNNYNNYNNYYYYNYNYYNYNNYNYYNYNNYNYN", "YYNNYYNNYYYYNNYNNNNNYNYYNNNNNYNNNNNNNNYY", "NNNNNNNYYNYYYYNYYNNYNNNYNNNNYNNYNYYNNNYY", "NNNNNYNNNYYYNNYYNNYNNYNNNYNYNNNYNYNNNNYN", "NYNYNNYNYNNYYNYNNYNYNNYNNYNNNNYNYNYYYYNY", "YNNYNNNYYYYNNNYNYYNNNNYNNYNNYNYYYYNYYNYN"};
    int person1 = 38;
    int person2 = 26;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> friends = {"NNNYNNNNYNYYYYNYNNNNNYYYNYYNYNYYYYYNYNYN", "NNNYYNNYNNNNNYNNNYYNNNYNYYNNNNNNYNNYYNNN", "NNNYYYNNYNNYNYNNNNYNNYYYYYYNNNNNYNNYNYNN", "YYYNYYYYYYYYNYYNNYYYYNYNYYYYYNYYYNYYNYYY", "NYYYNYNYNYYYYYNYNNYNYNNNNNYNNYYYYNNYYYYY", "NNYYYNYYYYYYNYNNNNYYNYYYNNYNNYNNNYNYNYYY", "NNNYNYNYYNYNNNNNNYNYNNYNYNYYYYNYNNNYNNNY", "NYNYYYYNNNNNNYNNNNNYNNYNYNNNNYYNYYYNNNYN", "YNYYNYYNNNNYYYYYNNYYNYNNNYYYNYYYNYNNYNNY", "NNNYYYNNNNYYYYNYNNNNNYNYNYYNYYYYNYYYYNNY", "YNNYYYYNNYNYYYYYNYNYNYNNNYYNYYYNNNNYYNNY", "YNYYYYNNYYYNNNNNNNYNNYYNNYYYYNYYYYYNYYYN", "YNNNYNNNYYYNNNNNYYYYYNYNYNNNNNYYYYYNNYNY", "YYYYYYNYYYYNNNYYNYNYYYYYYNNNYNNYNYYYNYNN", "NNNYNNNNYNYNNYNNNNNNNYNYYYNYNNYYYNNYNNNY", "YNNNYNNNYYYNNYNNYNNYYYYNNNNNYYNYNNYYYNYN", "NNNNNNNNNNNNYNNYNNNNNYNYNNNNNYNNNYNNYNNN", "NYNYNNYNNNYNYYNNNNYYYNNNNYNYNYNNNNYNNYNN", "NYYYYYNNYNNYYNNNNYNNYNYNNYYYYNYYNNYYYNNY", "NNNYNYYYYNYNYYNYNYNNNYYYNYNNNYNNYNYNYYNN", "NNNYYNNNNNNNYYNYNYYNNYNYYNYYYNYYYNNYYYNY", "YNYNNYNNYYYYNYYYYNNYYNYYYYYNNNNYYYYNYNNY", "YYYYNYYYNNNYYYNYNNYYNYNYNYYNYNYYNNNYNYNN", "YNYNNYNNNYNNNYYNYNNYYYYNYNNYNNNYNNYNNNNN", "NYYYNNYYNNNNYYYNNNNNYYNYNYNNNYYNYYNNNNYY", "YYYYNNNNYYYYNNYNNYYYNYYNYNYNYNYYNNYNNYYN", "YNYYYYYNYYYYNNNNNNYNYYYNNYNNYNYYYNYYYNYY", "NNNYNNYNYNNYNNYNNYYNYNNYNNNNYNNNYNNNYYNY", "YNNYNNYNNYYYNYNYNNYNYNYNNYYYNNYNYYYYNNYN", "NNNNYYYYYYYNNNNYYYNYNNNNYNNNNNYNYYYNYYNN", "YNNYYNNYYYYYYNYNNNYNYNYNYYYNYYNNYNNYYNNY", "YNNYYNYNYYNYYYYYNNYNYYYYNYYNNNNNNYYYYNYN", "YYYYYNNYNNNYYNYNNNNYYYNNYNYYYYYNNNNNYNNN", "YNNNNYNYYYNYYYNNYNNNNYNNYNNNYYNYNNNNNYYY", "YNNYNNNYNYNYYYNYNYYYNYNYNYYNYYNYNNNNNYNY", "NYYYYYYNNYYNNYYYNNYNYNYNNNYNYNYYNNNNNYNY", "YYNNYNNNYYYYNNNYYNYYYYNNNNYYNYYYYNNNNYYY", "NNYYYYNNNNNYYYNNNYNYYNYNNYNYNYNNNYYYYNYY", "YNNYYYNYNNNYNNNYNNNNNNNNYYYNYNNYNYNNYYNN", "NNNYYYYNYYYNYNYNNNYNYYNNYNYYNNYNNYYYYYNN"};
    int person1 = 16;
    int person2 = 3;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> friends = {"NYYYNYYYNYNNNYYYYNYYYNYYNYNNNYNYNNNYNYYY", "YNNNNNNYNNNNNYNNYNNNNNNNYNNNYYYYNYNNNNNN", "YNNYNNYYYNYNNYYYNYYNYYYNNNNNYYYNYYYNYNYN", "YNYNYNNNYYNNNNNYNNNNNYYYNNNNNYNYNNNYNNNY", "NNNYNYNNNNNNNNYNNYNYNYNNNNNYNNNNNYYNNNYN", "YNNNYNNYNNNNNNNYNNNNNNNNNYNNNNNYNYNNYNNN", "YNYNNNNNNNNNNNYYNYYNNNYNNYNNNYNNNNNNNYNN", "YYYNNYNNYNNNNNNNNNNYYYNNNNNNNYNYYYNNNNYN", "NNYYNNNYNYNNNNNNNNNNNNNNNNNYYNYNNYNNNNNN", "YNNYNNNNYNNNNNYYNYNYNNYYNNYNNYNNYNNNNNNN", "NNYNNNNNNNNYNNNYNNNNNNNNNYYYYNYYNNNYYNYY", "NNNNNNNNNNYNNNNNNYNNNYYNYNNYYNNYNNYNNYNN", "NNNNNNNNNNNNNNNNYYYYNNNNYYNYNNNNNNNNYNNN", "YYYNNNNNNNNNNNNNYNNNYNNYYNNNNNNNYNNYYNYY", "YNYNYNYNNYNNNNNYNNNNYNNNNNNNYYNYNYNNNYNN", "YNYYNYYNNYYNNNYNYNNNNNNNNNYNNYNYNYNNNNNY", "YYNNNNNNNNNNYYNYNYNNNYYNNNYNYYYNNNNNYNNN", "NNYNYNYNNYNYYNNNYNYNNNNYNNNYNNYNNNNNNNYY", "YNYNNNYNNNNNYNNNNYNNNNNNYNNNYNNNNNNYYNNN", "YNNNYNNYNYNNYNNNNNNNNYNNNNYNNNNYYYYNNNNN", "YNYNNNNYNNNNNYYNNNNNNNNNNYYNNNYNYNNNYYYY", "NNYYYNNYNNNYNNNNYNNYNNNNYYNYNNNNYNNNNNNN", "YNYYNNYNNYNYNNNNYNNNNNNYNNNNYNNYNYNNNYNN", "YNNYNNNNNYNNNYNNNYNNNNYNNYNNYNNNYNNNNNNN", "NYNNNNNNNNNYYYNNNNYNNYNNNNNYNNNNNYNNNNNN", "YNNNNYYNNNYNYNNNNNNNYYNYNNNNYNNNYYNNNNNN", "NNNNNNNNNYYNNNNYYNNYYNNNNNNYNYNNNYYNNNNN", "NNNNYNNNYNYYYNNNNYNNNYNNYNYNYNYNYYYNYNNN", "NYYNNNNNYNYYNNYNYNYNNNYYNYNYNYNNNYNNNYNN", "YYYYNNYYNYNNNNYYYNNNNNNNNNYNYNNNNNNNNNNN", "NYYNNNNNYNYNNNNNYYNNYNNNNNNYNNNNNNNNNYNN", "YYNYNYNYNNYYNNYYNNNYNNYNNNNNNNNNNYYNYNYN", "NNYNNNNYNYNNNYNNNNNYYYNYNYNYNNNNNNNNYYNY", "NYYNYYNYYNNNNNYYNNNYNNYNYYYYYNNYNNYNNNYN", "NNYNYNNNNNNYNNNNNNNYNNNNNNYYNNNYNYNYYNNN", "YNNYNNNNNNYNNYNNNNYNNNNNNNNNNNNNNNYNYYNY", "NNYNNYNNNNYNYYNNYNYNYNNNNNNYNNNYYNYYNNYN", "YNNNNNYNNNNYNNYNNNNNYNYNNNNNYNYNYNNYNNNN", "YNYNYNNYNNYNNYNNNYNNYNNNNNNNNNNYNYNNYNNN", "YNNYNNNNNNYNNYNYNYNNYNNNNNNNNNNNYNNYNNNN"};
    int person1 = 0;
    int person2 = 27;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> friends = {"NYNYYYYYYYNNNNYNYYYNYYNNYYYYNYNNNYNYYNYN", "YNNYNNYNNNNYYYNYNNNNNNYNYYYNNYNYYNNNNNYY", "NNNNNYYNYNNYNYYYYYNYYNYYYYNNYYYNYYYNNYYY", "YYNNYYYNYNNNNYYYYYYNYYYYYNYYNNYYNYYYYNYY", "YNNYNNYYYYNYYNNNNYNNYNNNNNYYNYNYNYNYNNNN", "YNYYNNYNYNYYYYYYYYYNYYYNNYYNYYNYYNYNNYYY", "YYYYYYNYNYYYYYYNNYNNYYYYYYNYYYYYNYYNYYNY", "YNNNYNYNYYYYNYNNYYYNYYYYYYYNYYYYNYYNYNNY", "YNYYYYNYNNYYYNNNYNYYNNYYNNNYYNNYNNNNYNYY", "YNNNYNYYNNYYYNYYNNYYYNYYYYNYYNNYNNYNNYNY", "NNNNNYYYYYNNNYYYYNYNNYYNYYNYNYNYYNYYYYNY", "NYYNYYYYYYNNNNYYNYYYYYYYNYYYYNYNNNNYYNNY", "NYNNYYYNYYNNNYYYYNNYYNNYNYYYNYYYNYNNNNNY", "NYYYNYYYNNYNYNYYYNNYYNYYYYNYYNYNYYYNYNNY", "YNYYNYYNNYYYYYNYNNNYNYYNYNNYNYYYYYNYNYYY", "NYYYNYNNNYYYYYYNNYNYNNYYYNNNYNYNYYYYYYNY", "YNYYNYNYYNYNYYNNNYNYYNYYYNYNYYYYYYYYNYYN", "YNYYYYYYNNNYNNNYYNNNNYYNNYYNYYYYNNNYYNYY", "YNNYNYNYYYYYNNNNNNNYNYYYYYNYNNNYYNNYYYNY", "NNYNNNNNYYNYYYYYYNYNYYYYYYNYNYYYYYYYNYYY", "YNYYYYYYNYNYYYNNYNNYNNNYYYYNNNYYNYYYYYNY", "YNNYNYYYNNYYNNYNNYYYNNYNYYYYNNYYYYYYYNNY", "NYYYNYYYYYYYNYYYYYYYNYNYNNYNYNYNYYYYNYNN", "NNYYNNYYYYNYYYNYYNYYYNYNNNNYYYYNYNNYNYNY", "YYYYNNYYNYYNNYYYYNYYYYNNNNYNYYNYYNYNYYNY", "YYYNNYYYNYYYYYNNNYYYYYNNNNNYNYNNYYNYNYNN", "YYNYYYNYNNNYYNNNYYNNYYYNYNNYNYYNNNYNYYNY", "YNNYYNYNYYYYYYYNNNYYNYNYNYYNNNNNNYYNYNYY", "NNYNNYYYYYNYNYNYYYNNNNYYYNNNNYYYYYNYYNYY", "YYYNYYYYNNYNYNYNYYNYNNNYYYYNYNNNNYYYNNNY", "NNYYNNYYNNNYYYYYYYNYYYYYNNYNYNNYYNNYYNNN", "NYNYYYYYYYYNYNYNYYYYYYNNYNNNYNYNNYNNYYYY", "NYYNNYNNNNYNNYYYYNYYNYYYYYNNYNYNNNYNYYYY", "YNYYYNYYNNNNYYYYYNNYYYYNNYNYYYNYNNNNNYYN", "NNYYNYYYNYYNNYNYYNNYYYYNYNYYNYNNYNNYNYNN", "YNNYYNNNNNYYNNYYYYYYYYYYNYNNYYYNNNYNYNYY", "YNNYNNYYYNYYNYNYNYYNYYNNYNYYYNYYYNNYNYYY", "NNYNNYYNNYYNNNYYYNYYYNYYYYYNNNNYYYYNYNNY", "YYYYNYNNYNNNNNYNYYNYNNNNNNNYYNNYYYNYYNNY", "NYYYNYYYYYYYYYYYNYYYYYNYYNYYYYNYYNNYYYYN"};
    int person1 = 4;
    int person2 = 32;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> friends = {"NNYYNYNYNNYYYNNNYNNNNYYNNYNNNNNNNYNYNNNN", "NNNNNNYNYNYYNNNNYYNNNNYNNNNNNNNYYNNYNYYY", "YNNYYNNYYNNNYNYNNNNNYNNNYNNNNYNNNNYNNYNN", "YNYNNYNNNNNNNNYNYNNNYNNYYNNNNNNNNYNNNNNN", "NNYNNYNNYNNNNNNYNYNNNNYNYNYYNNNNNYNNNNYY", "YNNYYNYNYYNYYYYYYYYYYYYYNYYYYYYYNNYYYNYY", "NYNNNYNNNNNNNNYNYYNNNYNNYNNNNNYNNNNNNNYY", "YNYNNNNNNNNNYYNNNNNNNNYNNNNNNNNNYNNNNYYN", "NYYNYYNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYNYN", "NNNNNYNNNNNNYNYNYNNNNNNNNNNNNNNNYNYNNNYY", "YYNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNYNNNYYY", "YYNNNYNNNNNNYNYNYNYYYNNYNNNNNYYNYYYNYNNN", "YNYNNYNYNYNYNNNYNYNNNNNNYNYNYNNNNNNYNNYN", "NNNNNYNYNNYNNNNNNNNNYNNNNNYNYNNNNYNYYNYN", "NNYYNYYNNYNYNNNNNYNNNNNNNNNNNNYNYNYNNNYY", "NNNNYYNNNNNNYNNNYNNNNNYYNNNYNNNYYNNNNNNN", "YYNYNYYNNYNYNNNYNYNYNNNYNNYNYNNNNNNNYNNN", "NYNNYYYNNNNNYNYNYNNNNNNYNYNNNYYNNNYNYNNN", "NNNNNYNNNNNYNNNNNNNNNNYNNNNNNNNYNNYNNNYN", "NNNNNYNNNNNYNNNNYNNNNNNNNYNNYYNNNYNYNNNY", "NNYYNYNNNNNYNYNNNNNNNYNNNNNNNNNNNNNNNNYN", "YNNNNYYNNNNNNNNNNNNNYNNNNNNNYYNNNNNNNNNN", "YYNNYYNYNNYNNNNYNNYNNNNNNYNNNNYNNNNNNNNN", "NNNYNYNNNNNYNNNYYYNNNNNNNNNNYNNNYNNNNNNN", "NNYYYNYNNNNNYNNNNNNNNNNNNNNNNNNNYNNNYYNN", "YNNNNYNNNNNNNNNNNYNYNNYNNNNNNNNYYNNNNNNY", "NNNNYYNNNNNNYYNNYNNNNNNNNNNNNNNYNYNNYNNY", "NNNNYYNNNNNNNNNYNNNNNNNNNNNNNYNYNNNYYNNN", "NNNNNYNNYNNNYYNNYNNYNYNYNNNNNNNNYNNNNNNN", "NNYNNYNNYNNYNNNNNYNYNYNNNNNYNNNNYYNYYNNN", "NNNNNYYNNNNYNNYNNYNNNNYNNNNNNNNNNNYYNNNN", "NYNNNYNNNNNNNNNYNNYNNNNNNYYYNNNNNNYNYNNN", "NYNNNNNYNYNYNNYYNNNNNNNYYYNNYYNNNYYYNYNN", "YNNYYNNNNNYYNYNNNNNYNNNNNNYNNYNNYNNNNYNN", "NNYNNYNNNYNYNNYNNYYNNNNNNNNNNNYYYNNNNNNN", "YYNNNYNNNNNNYYNNNNNYNNNNNNNYNYYNYNNNNNNN", "NNNNNYNNYNNYNYNNYYNNNNNNYNYYNYNYNNNNNNNN", "NYYNNNNYNNYNNNNNNNNNNNNNYNNNNNNNYYNNNNNN", "NYNNYYYYYYYNYYYNNNYNYNNNNNNNNNNNNNNNNNNN", "NYNNYYYNNYYNNNYNNNNYNNNNNYYNNNNNNNNNNNNN"};
    int person1 = 5;
    int person2 = 37;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> friends = {"NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNYYYYNYYYNYNNYYNYNYYNNNNNYYYNYYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNYYYYNNNNNYNNNYNNYNNYNYNNYYYYYNNNYNNYYY", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN"};
    int person1 = 6;
    int person2 = 17;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NNNNYNNNNNNNYNYNYYNNNNNYYYYNYYNYYYNNNNYY", "NNYYYYNNNYNNNNYNYYNNNYYYYYYYNNNNYYYNNNYY", "NYNNNNYNNNYNNYNNYYYNNYNNNYYYYYNYNNNYNYNY", "NYNNNNYNNYYNNNYNNNNNYNNNYYNNYYNNYYYNYNNN", "YYNNNYNYYYYNYNNYNNNNYNYNNYNYNNNYNYNNYNNY", "NYNNYNNNNNYNYNNNNNYNYNNNNYYYYNNYYNYNNYNY", "NNYYNNNNYYNYYYNYYYNNNNNYNYYYYYNNNNNYNYNY", "NNNNYNNNYNYYNNNNYNNYNYNNYNNYNNYNYYYYYNNY", "NNNNYNYYNYNNNYYNNYYNNNYNNYYNNYNYYNNYYYNN", "NYNYYNYNYNNNYYNNYYNYNYNNYNYYNYYNNYYNYNNN", "NNYYYYNYNNNYYNNYNYYNNYYNNYNNNNYNNNYYYNYY", "NNNNNNYYNNYNNNYYNNNNNYYNYYNNYNYNYNNNNYNY", "YNNNYYYNNYYNNNNNYYYYNNYNNNNYYNNNNYNYYYNY", "NNYNNNYNYYNNNNNYYYNNYNNYNYNYNNNNNNYNNNNY", "YYNYNNNNYNNYNNNYYNNYYNYNNNYNYNNYNYNNNYYY", "NNNNYNYNNNYYNYYNNYNNNNYYNYYYNNYYNNNYYYNN", "YYYNNNYYNYNNYYYNNYNNYNNYNYNYYYNNNNNNNNNY", "YYYNNNYNYYYNYYNYYNNYNYYYYNYNNYNYNNNNYYNN", "NNYNNYNNYNYNYNNNNNNNNNYNNYNNNYNNNNYNYYYY", "NNNNNNNYNYNNYNYNNYNNNNNYNNNNNNNNNNNNYNYN", "NNNYYYNNNNNNNYYNYNNNNYNYYYNYYYNNYNNNNYNN", "NYYNNNNYNYYYNNNNNYNNYNNYYYNYNYNNNNYNNYYN", "NYNNYNNNYNYYYNYYNYYNNNNNNYNNNNYYYYYYYYYY", "YYNNNNYNNNNNNYNYYYNYYYNNNNNNYNNYNNYNNYYN", "YYNYNNNYNYNYNNNNNYNNYYNNNYYNNNNNYYNNYNNN", "YYYYYYYNYNYYNYNYYNYNYYYNYNYYYYYYYYYYNYNY", "YYYNNYYNYYNNNNYYNYNNNNNNYYNYNNNNYYYNNNYN", "NYYNYYYYNYNNYYNYYNNNYYNNNYYNNNYNNYYNNYYY", "YNYYNYYNNNNYYNYNYNNNYNNYNYNNNYNNNNYNNYNN", "YNYYNNYNYYNNNNNNYYYNYYNNNYNNYNYYNNYYNNNN", "NNNNNNNYNYYYNNNYNNNNNNYNNYNYNYNYNYYNYNYN", "YNYNYYNNYNNNNNYYNYNNNNYYNYNNNYYNNYNYYNNN", "YYNYNYNYYNNYNNNNNNNNYNYNYYYNNNNNNYYNNNYY", "YYNYYNNYNYNNYNYNNNNNNNYNYYYYNNYYYNYNYYYY", "NYNYNYNYNYYNNYNNNNYNNYYYNYYYYYYNYYNNNYNN", "NNYNNNYYYNYNYNNYNNNNNNYNNYNNNYNYNNNNYNYN", "NNNYYNNYYYYNYNNYNYYYNNYNYNNNNNYYNYNYNNYN", "NNYNNYYNYNNYYNYYNYYNYYYYNYNYYNNNNYYNNNNY", "YYNNNNNNNNYNNNYNNNYYNYYYNNYYNNYNYYNYYNNN", "YYYNYYYYNNYYYYYNYNYNNNYNNYNYNNNNYYNNNYNN"};
    int person1 = 19;
    int person2 = 25;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> friends = {"NYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YNNYNNNNNNNNNNNYNNNYYNNNNNYNYNNNYNNNNNNY", "YNNNNYNNNNYYYNNNNNYNNNYNNYNYYNNNYNYYNNNN", "YYNNNNYNYNNNNNNNNNNNNNNNYYNNNYNNNNNNNNYY", "YNNNNNNNNNNYYNYYNNNYNNYYYNNNNYNNYYNNNNYN", "YNYNNNNNYNNNYNNYNYNNYNNYYNYNNYYYNNNYNNNY", "YNNYNNNYNNNNNNNNYYNNNNNNNNNNNYNNNNNNNYNN", "YNNNNNYNNNNNNNNYNNNNNYNYNYNNNNNNYNYYNYNY", "YNNYNYNNNNNNNYYNNNNNNNYNYNYYNYNNYYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNYNYNYYNNNYNNYNYNYYNYYNNNNNNY", "YNYNYNNNNNNNNNYNNYNNYYNNNNNNYNNNNNNYNYNN", "YNYNYYNNNNYNNYYYYNNNNYNNYNNNNNNYYYYYYYYN", "YNNNNNNNYNNNYNYNNNNYYNYNYYNNNNYNYNNNNNNN", "YNNNYNNNYNYYYYNYNNNNNNNYNYNNNYNNNNYNNNYY", "YYNNYYNYNNNNYNYNYYNNNNYNYNYNYNYNYNYNNNNN", "YNNNNNYNNNYNYNNYNYYNNYNNYNYNNNNNNNNYNNNN", "YNNNNYYNNNYYNNNYYNNNYNNNNNYNYNNNNNNNYNNY", "YNYNNNNNNNNNNNNNYNNYNYYNNNNNNYNNNNYNNNNN", "YYNNYNNNNNNNNYNNNNYNNYYNNNNNYNNNYYNYYNNY", "YYNNNYNNNNNYNYNNNYNNNNNNNNNNYNNNNNNYYNYN", "NNNNNNNYNYYYYNNNYNYYNNNNNNNYNNYNNNNNNNNN", "YNYNYNNNYNNNNYNYNNYYNNNYNNNYYNNYYNNNNNNN", "YNNNYYNYNNNNNNYNNNNNNNYNNYNNYNNNNNNNNNYN", "YNNYYYNNYNYNYYNYYNNNNNNNNNNYNNNYNYNNYNYN", "YNYYNNNYNNNNNYYNNNNNNNNYNNNYNNYYNNNNNYNY", "YYNNNYNNYNYNNNNYYYNNNNNNNNNNNNNYNNNNNNNN", "YNYNNNNNYNNNNNNNNNNNNYYNYYNNYNYYNNYNNYNN", "YYYNNNNNNNYYNNNYNYNYYNYYNNNYNNYNNYNYNYNN", "YNNYYYYNYNYNNNYNNNYNNNNNNNNNNNNYNYNNNNNY", "YNNNNYNNNNNNNYNYNNNNNYNNNYNYYNNNNNNYYNNN", "YNNNNYNNNNYNYNNNNNNNNNYNYYYYNYNNNNYNNNYN", "YYYNYNNYYNYNYYNYNNNYNNYNNNNNNNNNNNYNNNYN", "YNNNYNNNYNNNYNNNNNNYNNNNYNNNYYNNNNNNNYNN", "YNYNNNNYNNNNYNYYNNYNNNNNNNNYNNNYYNNNNYNN", "YNYNNYNYNNNYYNNNYNNYYNNNNNNNYNYNNNNNNYNN", "YNNNNNNNNNNNYNNNNYNYYNNNYNNNNNYNNNNNNYNY", "YNNNNNYYNNNYYNNNNNNNNNNNNYNYYNNNNYYYYNYY", "YNNYYNNNNNNNYNYNNNNNYNNYYNNNNNNYYNNNNYNN", "YYNYNYNYYNYNNNYNNYNYNNNNNYNNNYNNNNNNYYNN"};
    int person1 = 0;
    int person2 = 9;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> friends = {"NYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "NYNNNNNNNYNNNNNNYNNNYYNNYYNNNNYYNNNYNNNN", "YYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNNYNYYYYNYYYYYYNYYYNNYYNNYYYYNNYYYNYYYY", "YYNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYY", "YNNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 4;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> friends = {"NYYYNYYYYYYYYYYYYYYNYYYYYNYYYNYYYNYYYYYY", "YNYYYYNNYYYNYYYNYYYYYYYYYNYYYYYYYNYYYYYY", "YYNYYNYNYYYYYYNYNYYNYYYYYYNYYYYYNYYNYYNY", "YYYNYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYNNYYYY", "NYYYNYNYYYNYYYNYNYNYYYYNYNYYNYYYYYNYNNYY", "YYNYYNYYYNYYYNYYYYYYYYYYNYYYYYYYYNYYYYYY", "YNYYNYNYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYNYY", "YNNYYYYNYNYYYNYYNNYYYYYYYYYYYYNYNYYYNYYY", "YYYYYYYYNNYYYYYNYNYYYYYYYNNYYYYNYNYYYYYY", "YYYYYNYNNNYYYYYYNYYYYYYNYYYYYNYYYYNYYYYY", "YYYYNYYYYYNYNYNYNNYYYYYNNNYYYYNYNYYYYYYY", "YNYYYYYYYYYNYNYYYYYYYNYYYNYYNYYYYNYYYYNN", "YYYYYYYYYYNYNYYNNYYYYYYYYYYYYYYNNYYYNYNY", "YYYYYNYNYYYNYNYNNNYYYYYYYYYNYYYYYYYYYYNY", "YYNYNYYYYYNYYYNYNYYYYYNYNYYYYYYYYYYYYNYY", "YNYYYYYYNYYYNNYNYYYYNYNYYYYYYYYYYNYYNYYY", "YYNNNYYNYNNYNNNYNYYYYYYYYYYNNNYNYNYNNYYY", "YYYYYYYNNYNYYNYYYNYYYYYYYYYYYYYYYNNNYYYY", "YYYYNYYYYYYYYYYYYYNNYNYYYNYYYYYYYNYYNYYN", "NYNYYYYYYYYYYYYYYYNNYYYYYYYYYNYYYNYYYYNY", "YYYYYYYYYYYYYYYNYYYYNYYYYYYNYYYNYNYYYYYN", "YYYNYYYYYYYNYYYYYYNYYNYYYYYYYYNYYNYNYYYY", "YYYYYYNYYYYYYYNNYYYYYYNYYYYYYYNYYNYNNNYY", "YYYYNYYYYNNYYYYYYYYYYYYNYYYYYYYYYNNYYNYY", "YYYYYNYYYYNYYYNYYYYYYYYYNYNNYYNYNNYYYYYY", "NNYYNYYYNYNNYYYYYYNYYYYYYNYYNYNYYNYNYYYY", "YYNYYYYYNYYYYYYYYYYYYYYYNYNYYYYYYNYYYYYY", "YYYYYYYYYYYYYNYYNYYYNYYYNYYNNYNYNYNYYYYY", "YYYYNYYYYYYNYYYYNYYYYYYYYNYNNYYYNYYYYYYY", "NYYYYYYYYNYYYYYYNYYNYYYYYYYYYNYYNYYYYYNY", "YYYYYYYNYYNYYYYYYYYYYNNYNNYNYYNYYNYYYYYY", "YYYYYYYYNYYYNYYYNYYYNYYYYYYYYYYNYYYYYYYN", "YYNYYYYNYYNYNYYYYYYYYYYYNYYNNNYYNNYYYYYY", "NNYYYNNYNYYNYYYNNNNNNNNNNNNYYYNYNNNYYNNN", "YYYNNYYYYNYYYYYYYNYYYYYNYYYNYYYYYNNNYYNN", "YYNNYYYYYYYYYYYYNNYYYNNYYNYYYYYYYYNNYYYY", "YYYYNYYNYYYYNYYNNYNYYYNYYYYYYYYYYYYYNYYY", "YYYYNYNYYYYYYYNYYYYYYYNNYYYYYYYYYNYYYNYY", "YYNYYYYYYYYNNNYYYYYNYYYYYYYYYNYYYNNYYYNY", "YYYYYYYYYYYNYYYYYYNYNYYYYYYYYYYNYNNYYYYN"};
    int person1 = 16;
    int person2 = 33;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> friends = {"NYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYNNYYNYY", "YNNYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYY", "YNNYNYNNNNYYYYNNYNNYNYNNYNYNYYYNNNYNYYYN", "YYYNYYYYYYYYNYNYYYYYYNYYYYYYYYYYYYYYYYYY", "YYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYNNYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYY", "YYNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYNYYNYNYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYY", "YYNYYNYYNYYNYYYNYNYYYYYYNYYYYYYNYYYYYYYN", "YYNYYYYYYNYYNYYNYYYYYYNYYYYYYYYYYYYYYNYY", "YYYYYYYYYYNYYYNYYYYYYNYYYYYYYYYYYYYYYYYN", "YYYYYYYYNYYNYYNYYNNYYYYYYYYYYNYYYYYYYYYY", "YYYNYYYYYNYYNNNYYYYYYNYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYNNNYYYYYYYYYYNYYYNYYYYYYYYYY", "NYNNYNYYYYNNNNNYNYYNYNYYNYNYNNNYYYNYNNNY", "YYNYYYYYNNYYYYYNYYYYYYYNNNYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYNYNYYYYYYYYYYNYYYYYYYYYYYN", "YYNYYYYYNYYNYYYYYNYYYYYYYYYYNYYYYYYYYYYY", "YYNYYYYYYYYNYYYYYYNNYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYNNYYYYYYYYYYNNYYYYYYYY", "YYNYYYYNYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYY", "YYYNYYYYYYNYNYNYYYYYYNYYYYYYYYYNNNYYYYYN", "YYNYYYYYYNYYYYYYYYYYYYNYYYYYYYYNNYYYYYYY", "YNNYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYNNYYYYYYYYNYYYYNYYYYYNYYYY", "YYNYYYYYYYYYNNYNYYYYYYYYYNYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYNYYYYYNYYYYYNYYYYYYYYYYYNY", "NYNYYYYNYYYYYYYYNYNYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYNYYYYYYYYYYNYYYYYYYYYYY", "YYYYYNYYYYYNYNNYYYYYYYYYNYYYYNYYYYYNYYYY", "YYYYYYYYYYYYYYNYYYYNYYYYYYYYYYNYYYYYYYYY", "YYNYYYYYNYYYYYYYYYYNYNNYYYYYYYYNYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYNNYYYYYYYYYNYYYNYYY", "NYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYY", "NYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYNYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYNYYY", "NYYYYYYYYNYYYYNYYYYYYYYYYNYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYNY", "YYNYYYYYNYNYYYYYNYYYYNYYYYYYYYYYYYYYYYYN"};
    int person1 = 14;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> friends = {"NYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYNYNYYNYYNNNNNYNNYYYYYNNNYNNNYYNYNYY", "NYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNYNNNNYNNNNNYNNNNNNNNYNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNYNNNNNNNNNNNNNNYNNNYNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNYNYNYNNYNNYNYYYNYYNNNNNYYYNYYYNNYNYNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNYNNNNNYYNNNNNNNNYNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNY", "NYNNYNNNNNNNNNNNNNNNNYNNNNNYNNNNNYNNNNYN", "NNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYNYNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNYNNN", "NYNYNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNYNNNN", "NYNNNNNNNNYNNNNNNNNNNNNNNYNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNYNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNN"};
    int person1 = 1;
    int person2 = 14;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> friends = {"NYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YNYYYNYYYYYYYYYNYYYYYYYYYNYYYYNYYNYYYYYY", "YYNYYNYYYYYYNYYYYYYYYYYYYNNYYYYYYYYYNYYY", "YYYNYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYY", "YYYYNNYYYYYNYYYYYYYYNNYYYYYYYYYNYYYNNYYY", "NNNYNNNNNYYNNYYNNYNNYYYNYYYYNNYYYYNYYNYY", "YYYNYNNYYNNYYNNYYNYYNNNYNNNNYYNNNNYNNYNN", "YYYYYNYNYYYYNYNYYYYYYYYYYYYYYYYNYNYYYYYY", "YYYYYNYYNYYYYYYYYYYYNNYYNYNYYYYYNYYYYYYY", "YYYYYYNYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYNYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYNNYYYYYNYNYYYNYNYNYYYYYYYYYNYYYYYYYN", "YYNYYNYNYYYYNYYYNYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYNYYYYNYNYYYYYYYYYYYYYYYYYYYYYYNNYY", "YYYYYYNNYYYYYYNYYNNNYYYYYYYYYYYYYYYYYYYY", "YNYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYNYYYYYYNYYYNYYYYYYYNYNYYYYYYYYYYYYY", "YYYYYYNYYYYNYYNYYNYYYYYYYYYYYNYYYYYYYYNY", "YYYYYNYYYYYYYYNYYYNYYYNYYYYYYYYYYNYYNYYY", "YYYYYNYYYYYNYYNYYYYNYYYYYYYYYYYNYYYYYYYY", "YYYYNYNYNYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYY", "YYYYNYNYNYYNYYYYYYYYYNYYYNYYYYYNYYYYYYYY", "YYYYYYNYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYY", "NYYYYNYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYY", "YYYNYYNYNYNYYYYYNYYYYYYYNYYNYYYYYYYYYYYY", "YNNYYYNYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYNYY", "YYNYYYNYNYYYYYYYNYYYYYYYYYNYYYYNYYYNYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYNYYNYYYYYYYNNYYY", "YYYYYNYYYYYYNYYYYYYYYYYYYYYYNYYYNYYYYYYY", "YYYYYNYYYNYYYYYYYNYYYYYYYYYYYNYYYYYYYYYY", "YNYYYYNYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYY", "YYYYNYNNYYYNYYYYYYYNYNYYYYNYYYYNYYYYYYYY", "YYYYYYNYNYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYY", "YNYYYYNNYYYYYYYYYYNYYYYYYYYYYYYYYNYNYYYN", "YYYYYNYYYYYYYYYNYYYYNYYYYYYYYYYYYYNYYYYY", "YYYYNYNYYYYYYYYYYYYYYYYYYYNNYYYYYNYNYYYY", "YYNYNYNYYYYYYNYYYYNYYYYYYYYNYYYYYYYYNYYY", "YYYNYNYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYNYY", "YYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYN"};
    int person1 = 5;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> friends = {"NNYNYYNYNNYYYNNYNNNYYNYNNNYYYYYYNYNYNYNN", "NNYNNYNYNYYYNYYNNYNNYYNNYYNNNNYNYYYYNNNN", "YYNYYYNNNNYYNYYYYYYYNYNNYNYNNYNNYYYYYNNN", "NNYNNNYYNNYNNNNNNYNYNYNNNNYNNYYNYYYNYNNN", "YNYNNNYYYYYNNNYNYNYYNNYYNNNNNNNYYNNNNYNN", "YYYNNNNYNNNNNNNYYYNYNNNNNYYYYYNYNYNNYYNY", "NNNYYNNNNNYYYYNNYNNYYYNNNNYYNNNYYYNYNNNY", "YYNYYYNNYYYYYYYYNNNYYNNYYNNNNNYNNNYYNYYN", "NNNNYNNYNNYNNYYYYNNNNNNNYYYNNYNNNNYYYNYY", "NYNNYNNYNNYYYYNYYYNYNYYNNNNYNNNNYYYNYYYY", "YYYYYNYYYYNNYNNNNYNNYNYYYYYNYNNYNNNYYNNY", "YYYNNNYYNYNNYNNYYYYYYYYYNNNYNYNNYNYNNNYN", "YNNNNNYYNYYYNNYYYNNNYNYYNYNYNNNYYNNYNNNN", "NYYNNNYYYYNNNNYYYNYNNYNYNYYYNYNNYYYNNNYY", "NYYNYNNYYNNNYYNYNYNNNYYNYYYNYYNNYNYYYYYY", "YNYNNYNYYYNYYYYNNYNYYYYNNNYYYYYYNNNNNYYN", "NNYNYYYNYYNYYYNNNYNYYYNYYYYNNYNYNYNNYYYN", "NYYYNYNNNYYYNNYYYNNNYNNNNYNNNNNNNYYNYNNN", "NNYNYNNNNNNYNYNNNNNYNNNNNYYNYYNYNNNYYYNY", "YNYYYYYYNYNYNNNYYNYNNYNNYNNNNYNNYNYYYNYY", "YYNNNNYYNNYYYNNYYYNNNNYYNNNYYYYNNYYYNYYN", "NYYYNNYNNYNYNYYYYNNYNNYNYNNYNNYNYYYNNNNN", "YNNNYNNNNYYYYNYYNNNNYYNYYYNYNNYNYNYNNNYY", "NNNNYNNYNNYYYYNNYNNNYNYNNNYYNYYYNYNNNNYN", "NYYNNNNYYNYNNNYNYNNYNYYNNYYYYNNYYNNNNNNN", "NYNNNYNNYNYNYYYNYYYNNNYNYNNNYNNYNNNNYYNN", "YNYYNYYNYNYNNYYYYNYNNNNYYNNYNNYYNNNNNYNY", "YNNNNYYNNYNYYYNYNNNNYYYYYNYNYYYNNNYYYYNN", "YNNNNYNNNNYNNNYYNNYNYNNNYYNYNYYYNNNYNNNY", "YNYYNYNNYNNYNYYYYNYYYNNYNNNYYNNNYYYYYNYY", "YYNYNNNYNNNNNNNYNNNNYYYYNNYYYNNYNNNYYYYN", "YNNNYYYNNNYNYNNYYNYNNNNYYYYNYNYNNYNYYYYN", "NYYYYNYNNYNYYYYNNNNYNYYNYNNNNYNNNYYNYYNY", "YYYYNYYNNYNNNYNNYYNNYYNYNNNNNYNYYNNNNNYY", "NYYYNNNYYYNYNYYNNYNYYYYNNNNYNYNNYNNNNNNY", "YYYNNNYYYNYNYNYNNNYYYNNNNNNYYYYYNNNNYNNY", "NNYYNYNNYYYNNNYNYYYYNNNNNYNYNYYYYNNYNNYY", "YNNNYYNYNYNNNNYYYNYNYNNNNYYYNNYYYNNNNNYY", "NNNNNNNYYYNYNYYYYNNYYNYYNNNNNYYYNYNNYYNY", "NNNNNYYNYYYNNYYNNNYYNNYNNNYNYYNNYYYYYYYN"};
    int person1 = 31;
    int person2 = 34;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> friends = {"NYNNNNNNYNNYNNNNNNNNNNNYNNYNYNNNYNNYYNNY", "YNYYYNYNNYNNNNNNYNNNNNNNNNNNNNNYYNNYNNNN", "NYNNNYNYYNNYYNNNYYNNNNNNNYNYYNNYNYNNNNNN", "NYNNNYYNNNNNNNNYNNYNNNYYNNNNNNNNNYYYYNNY", "NYNNNYNNNNYYYYNNNNYNYYNNNNNNYNYYYNNNNYYN", "NNYYYNNNNNNYNNNYNNNYNYNNYNNYNNNNNNNNNNNY", "NYNYNNNYNYYNYNYYYYNNYNYYYNYNNNYNNNNNNNYY", "NNYNNNYNNNNNNNYYNNNNNNNNNNYNNNYNNNYYNNYN", "YNYNNNNNNNNYNNNNNNNNNNNNYNNYNNNNNYYNNNNY", "NYNNNNYNNNNNYNYNNNNNNYNNNNNNNNYNNNYNNNNN", "NNNNYNYNNNNNYYYNYYNNNNYNNYNYNNNNNNNYNNNN", "YNYNYYNNYNNNNYNNNNYYNYNNNYNYYYNYYYYYYYNN", "NNYNYNYNNYYNNNYNNYNNNNNNNNNNNNNNYNNNNYYN", "NNNNYNNNNNYYNNNNNNYNNYNNNNNNNNNYNNYNNNNN", "NNNNNNYYNYYNYNNNYYNNNNNNYYNNNNNNYNYNNNNN", "NNNYNYYYNNNNNNNNNYNNNNYNNNYNNNYYNNYYNYNN", "NYYNNNYNNNYNNNYNNNYYNNNNNNYNNYNNNNYNNYYY", "NNYNNNYNNNYNYNYYNNNYNNNYNNYNNNNNYNNNYNYN", "NNNYYNNNNNNYNYNNYNNYYNNYNNNNYNNNNNYYYNNN", "NNNNNYNNNNNYNNNNYYYNNNNNYNNNNNNNNYNNYYNN", "NNNNYNYNNNNNNNNNNNYNNNNNNYNNNNNNYNNNNYYN", "NNNNYYNNNYNYNYNNNNNNNNNNYNNNNYNNYNNNNNNN", "NNNYNNYNNNYNNNNYNNNNNNNNNNYNNNNNYNNNNNNN", "YNNYNNYNNNNNNNNNNYYNNNNNNNNYNYYNYYNYNNNY", "NNNNNYYNYNNNNNYNNNNYNYNNNYYYYNNYYNNNYNNN", "NNYNNNNNNNYYNNYNNNNNYNNNYNNYNNNNNNNNYNYN", "YNNNNNYYNNNNNNNYYYNNNNYNYNNNNNNNYNNNNNNN", "NNYNNYNNYNYYNNNNNNNNNNNYYYNNYYYNNNNNNNNN", "YNYNYNNNNNNYNNNNNNYNNNNNYNNYNNYNYYNNNNNY", "NNNNNNNNNNNYNNNNYNNNNYNYNNNYNNNNYYNNNNNN", "NNNNYNYYNYNNNNNYNNNNNNNYNNNYYNNNNNNYYYYN", "NYYNYNNNNNNYNYNYNNNNNNNNYNNNNNNNYYNNNYNN", "YYNNYNNNNNNYYNYNNYNNYYYYYNYNYYNYNNNYYNNN", "NNYYNNNNYNNYNNNNNNNYNNNYNNNNYYNYNNNNNNYN", "NNNYNNNYYYNYNYYYYNYNNNNNNNNNNNNNNNNNNYNY", "YYNYNNNYNNYYNNNYNNYNNNNYNNNNNNYNYNNNNNYN", "YNNYNNNNNNNYNNNNNYYYNNNNYYNNNNYNYNNNNNNN", "NNNNYNNNNNNYYNNYYNNYYNNNNNNNNNYYNNYNNNYN", "NNNNYNYYNNNNYNNNYYNNYNNNNYNNNNYNNYNYNYNN", "YNNYNYYNYNNNNNNNYNNNNNNYNNNNYNNNNNYNNNNN"};
    int person1 = 6;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> friends = {"NYYYYYYYYYYNYYYYYYNYYYYNYYYYNNYNYNYYNYNN", "YNYNYNYNYYNYYYYNYYYYNYNNYNYYNYNYYYYYYYYY", "YYNYYNNYYYYYNNYYYYNYNYYNYYYYNNNNYNYYYNYY", "YNYNYYYYYNYNYYYYNNYNYYYNYYNYYNNYYYYYYYNY", "YYYYNYNNNNYYYYNYYNYYYNNYNYYNYYYYYYYYYYNY", "YNNYYNNNYNNNYNNYYYYYNNYNYYNYNNNYYYNNYYNY", "YYNYNNNYNYYYNYNYYYYNYYNYYYYYYYNYNYNYYYYY", "YNYYNNYNYYYYYYYYYNYNYNYYYYNYNYYYYYYYYNYN", "YYYYNYNYNYNYYYNYYYNYNYNNYNYYYYYNYYYYYYNY", "YYYNNNYYYNYYYYYNYNNYYYYYYYNYYYYYNNYYYNYN", "YNYYYNYYNYNYYNYNNNYYYYYYNYYNYNNYYYNYYYYY", "NYYNYNYYYYYNYYYYNYNYYYYYNYNYYYYNYYNNYYYN", "YYNYYYNYYYYYNYYNYNYNYYYNYYYNYNNYYNYYYYNY", "YYNYYNYYYYNYYNYYYYYNYYYYYYYNYYYNNNYYYYYY", "YYYYNNNYNYYYYYNYNNYYYYYNNNYNNNYNYNNYYNYY", "YNYYYYYYYNNYNYYNYNNYNNNYNYYNYYYYYYYYYNNN", "YYYNYYYYYYNNYYNYNYYYYNYYYNYYYYYYYYYYYNNY", "YYYNNYYNYNNYNYNNYNYYYYYYNYYNYYYYYYNYYYNY", "NYNYYYYYNNYNYYYNYYNYYYNYNYYYYYNNYYNYYYNY", "YYYNYYNNYYYYNNYYYYYNNYNNNYYYYYYYNYNNYYNY", "YNNYYNYYNYYYYYYNYYYNNNNYNYYNYYYYNYYYYNYY", "YYYYNNYNYYYYYYYNNYYYNNYYYYNYYNYYYYYNYYYN", "YNYYNYNYNYYYYYYNYYNNNYNYNYYYNNNNYYYYYYNY", "NNNNYNYYNYYYNYNYYYYNYYYNYNNYYNNNYYYNYYYY", "YYYYNYYYYYNNYYNNYNNNNYNYNYNNYYYNYYNYYNNY", "YNYYYYYYNYYYYYNYNYYYYYYNYNYNYNNYYNYNNYNN", "YYYNYNYNYNYNYYYYYYYYYNYNNYNYNYYNYYYYNYYN", "YYYYNYYYYYNYNNNNYNYYNYYYNNYNYNYNYNYYYYNY", "NNNYYNYNYYYYYYNYYYYYYYNYYYNYNNNYNYYYYNYY", "NYNNYNYYYYNYNYNYYYYYYNNNYNYNNNYYNYYNYYYY", "YNNNYNNYYYNYNYYYYYNYYYNNYNYYNYNYYYYYNNYY", "NYNYYYYYNYYNYNNYYYNYYYNNNYNNYYYNYYYNYYNY", "YYYYYYNYYNYYYNYYYYYNNYYYYYYYNNYYNNNNNYNY", "NYNYYYYYYNYYNNNYYYYYYYYYYNYNYYYYNNNNYNNY", "YYYYYNNYYYNNYYNYYNNNYYYYNYYYYYYYNNNYNYYY", "YYYYYNYYYYYNYYYYYYYNYNYNYNYYYNYNNNYNYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYNNYYYNYNYNYNYNY", "YYNYYYYNYNYYYYNNNYYYNYYYNYYYNYNYYNYYYNNY", "NYYNNNYYNYYYNYYNNNNNYYNYNNYNYYYNNNYYNNNN", "NYYYYYYNYNYNYYYNYYYYYNYYYNNYYYYYYYYYYYNN"};
    int person1 = 5;
    int person2 = 38;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> friends = {"NYYYYYYNYYYYYYYYYNYNYYYYYYYYNYYYYYYNYYYY", "YNYYYNNNYYYNYYYYYYNYYYYNYYYYYYNNYNYYNYNY", "YYNYNYYNYNYYYNYYYNYNYYYYNYYYYYNYYYNYNYYY", "YYYNYNYYNYYNYNYYYNYNYYNYYYYYYYYYYNYYNNYY", "YYNYNYNNYYYYYYYNYYNYYYNYYYYYNYYYYYNYYYYY", "YNYNYNYYNYYYYYYYNYYNNYNYYYYNYNNNYNYYYYYY", "YNYYNYNYNYNNNYNNYNNNNYNNYYNYNYNYYYYNYYNN", "NNNYNYYNYYYYYYYYNYYNYYYYYYNYYNYYYYYYYYYY", "YYYNYNNYNYYYYYYYYYNYYYNYYYYNYYYYYYYNYYNY", "YYNYYYYYYNNYYNNYYNYNYYYNYYNNYYYYYYYYYYYN", "YYYYYYNYYNNNYYNYYYYYYNNYNYYNNYNNYYNYYYYY", "YNYNYYNYYYNNYYNYYNYYYYNYNNYYYYYNYYNYNYYY", "YYYYYYNYYYYYNYYYNNYYYYYYYNYYNNYYYNYYYYNN", "YYNNYYYYYNYYYNYYNYYNNYYYNYYNNYNYYNYYYYYY", "YYYYYYNYYNNNYYNYYNNYYYYNYYNYYYYYYYYYYYYY", "YYYYNYNYYYYYYYYNYYYYYYYYYYYYYYYYNYYNYNYY", "YYYYYNYNYYYYNNYYNYYNYYYYYYNNNYYNNYYYNYYY", "NYNNYYNYYNYNNYNYYNYYYYNYYYYYYNYNYYYNYNYY", "YNYYNYNYNYYYYYNYYYNYNYNNYNYYYYYNYYYNYYYN", "NYNNYNNNYNYYYNYYNYYNYNYYNNYNYNYNNNNYNNYY", "YYYYYNNYYYYYYNYYYYNYNYYYNYYYYYYYNYYYYNYY", "YYYYYYYYYYNYYYYYYYYNYNYYYYYYYNNNYYYNNYNY", "YYYNNNNYNYNNYYYYYNNYYYNYNYYYYYYYYYYYYYNY", "YNYYYYNYYNYYYYNYYYNYYYYNYYNYYYYNNYYYYYYY", "YYNYYYYYYYNNYNYYYYYNNYNYNYYYYNNYYYYYYYYY", "YYYYYYYYYYYNNYYYYYNNYYYYYNNYNYYYYYYNYNYY", "YYYYYYNNYNYYYYNYNYYYYYYNYNNNNYYYYNYNYYYY", "YYYYYNYYNNNYYNYYNYYNYYYYYYNNNYYYYYYYYYNY", "NYYYNYNYYYNYNNYYNYYYYYYYYNNNNNYYYYNYYYNY", "YYYYYNYNYYYYNYYYYNYNYNYYNYYYNNYYYNNYYYYY", "YNNYYNNYYYNYYNYYYYYYYNYYNYYYYYNYYYNNYYNY", "YNYYYNYYYYNNYYYYNNNNYNYNYYYYYYYNYNYYYYYY", "YYYYYYYYYYYYYYYNNYYNNYYNYYYYYYYYNYYYYYYN", "YNYNYNYYYYYYNNYYYYYNYYYYYYNYYNYNYNNYYYYY", "YYNYNYYYYYNNYYYYYYYNYYYYYYYYNNNYYNNYYYYY", "NYYYYYNYNYYYYYYNYNNYYNYYYNNYYYNYYYYNNNNY", "YNNNYYYYYYYNYYYYNYYNYNYYYYYYYYYYYYYNNYYY", "YYYNYYYYYYYYYYYNYNYNNYYYYNYYYYYYYYYNYNNY", "YNYYYYNYNYYYNYYYYYYYYNNYYYYNNYNYYYYNYNNY", "YYYYYYNYYNYYNYYYYYNYYYYYYYYYYYYYNYYYYYYN"};
    int person1 = 19;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> friends = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNYNYYYYNYNNYNNNYNNYNNYYYNYNYYNNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYYNNNYNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNYNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNYNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNYNYNNYNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNYNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "YYNNNYYYNYNNNNYNYYNYYYNYYNYYNNNYNYNNNYYN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int person1 = 36;
    int person2 = 3;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> friends = {"NYNYNYYNNYYNNNNYNNNNNYNNNNNYYYNYNNNNNNYN", "YNYNNYYYYYNYNYYYNNNNYNNNNNYYNYNYNYYYNYNN", "NYNNNNYYYYYNNYNNNYYYYYNNYYNNNNNYYNYNYNYY", "YNNNYYNNYYYYNYNYNYNYNNYYNYYNYNYNNYYYYNYY", "NNNYNYNYYNNNYNNYNNNYYYYNNYNYNYNNNYYNNNYY", "YYNYYNYNNYYNYYNYYNNYNNNNYYYNYYNYYNNYNNYY", "YYYNNYNYNYYNYNNYNNNNYNYNNYNNYYYNYNNYYNNN", "NYYNYNYNYNYNNYNNNNYYYNYYNNNNYYNNNYNYNYYN", "NYYYYNNYNYNNYNYNNNYYNNNYYNYYNNNNYNYNNYNN", "YYYYNYYNYNNNNNYNNYNYNYNNNNNYYYYNNYYNNYNN", "YNYYNYYYNNNNNYYNNNNNNYYYNNNYNYNYYNYNNYNY", "NYNYNNNNNNNNYNYNNYYYNNYYYYNNYNNYYNYYNYYN", "NNNNYYYNYNNYNYNNNYNNNNNNYNNYNYNYNYYYNNYN", "NYYYNYNYNNYNYNNNYYNNNYNNYYNYNNNNNYNYYNYY", "NYNNNNNNYYYYNNNYYYYNYNNYYNYYYYYNNNYYYNNY", "YYNYYYYNNNNNNNYNNYNYNYYNYYYYNNNNNYNNYNNN", "NNNNNYNNNNNNNYYNNYNYNNYYNYNNNYYNYYYNNYNN", "NNYYNNNNNYNYYYYYYNYNYYNYNNYNNNNNYNYNYYNN", "NNYNNNNYYNNYNNYNNYNNYYYYNNNYNNYNNYYNYYNN", "NNYYYYNYYYNYNNNYYNNNYNYNYNYNNNNNNNNYYNYY", "NYYNYNYYNNNNNNYNNYYYNNYNNYNNNNNYYNYYNNNY", "YNYNYNNNNYYNNYNYNYYNNNYYNNNYNNNYNYNNNNNN", "NNNYYNYYNNYYNNNYYNYYYYNNYYYYNNNYYNNNNNYN", "NNNYNNNYYNYYNNYNYYYNNYNNNNYYYYYYNNNYYYNN", "NNYNNYNNYNNYYYYYNNNYNNYNNNYYNNYNNNYNYNYY", "NNYYYYYNNNNYNYNYYNNNYNYNNNYYYNNNNNYYNNYN", "NYNYNYNNYNNNNNYYNYNYNNYYYYNYNYNYYYNYNYNN", "YYNNYNNNYYYNYYYYNNYNNYYYYYYNYNNYYNNNNNYN", "YNNYNYYYNYNYNNYNNNNNNNNYNYNYNYYYNNNNYYYY", "YYNNYYYYNYYNYNYNYNNNNNNYNNYNYNNNNNYYYNNN", "NNNYNNYNNYNNNNYNYNYNNNNYYNNNYNNYNNYNYNNY", "YYYNNYNNNNYYYNNNNNNNYYYYNNYYYNYNYYNYNNYN", "NNYNNYYNYNYYNNNNYYNNYNYNNNYYNNNYNNYYNYNN", "NYNYYNNYNYNNYYNYYNYNNYNNNNYNNNNYNNYYYNYN", "NYYYYNNNYYYYYNYNYYYNYNNNYYNNNYYNYYNNNNYN", "NYNYNYYYNNNYYYYNNNNYYNNYNYYNNYNYYYNNNYNN", "NNYYNNYNNNNNNYYYNYYYNNNYYNNNYYYNNYNNNNNY", "NYNNNNNYYYYYNNNNYYYNNNNYNNYNYNNNYNNYNNNY", "YNYYYYNYNNNYYYNNNNNYNNYNYYNYYNNYNYYNNNNN", "NNYYYYNNNNYNNYYNNNNYYNNNYNNNYNYNNNNNYYNN"};
    int person1 = 18;
    int person2 = 5;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> friends = {"NYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYY", "YYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYNYNYNYYN", "YYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYNYYNYYYYYYYNYYYYYYY", "YYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYNYYYYYYY", "YYYYYYNYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYNYYYYNNYYYNNYYYYYYNYYYYYNYNNNYNYYNNYYN", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYNNYYYYYYYNYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYNYYYYYYNYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYNNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYNYYYYYYY", "YNYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYNYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYNY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNNYYYYYYY", "YNYNNNNYYNNNYNNNNNNNYNNNNNYNYYYNNNNYYNNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYNYYYYYYYYYNYNYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNNYYY", "YYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYNNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYNY", "YYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 13;
    int person2 = 32;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> friends = {"NNYYYNYNYNNNYNNNNNNNYNNNYNYNYNNNNNNYNNNY", "NNYNNYYYNNNYNNYYNYNNYYNNNYNYNNNNNNYNNNYN", "YYNNNNYNNNNNNNYNNNNNNNNNYYNNYNNNYNNNNNNY", "YNNNNYYNNYNYNNNYNNNNYYNNYNYNNNNNNNYYNNNN", "YNNNNNNNYYYNNNNNNNNYNNNYNNYYYYNNNNYNNNNY", "NYNYNNNNYNYNNYYYNNYNNYYYNNNNNYNNNNNNNYNN", "YYYYNNNYNNNYYNNNNNYNNNNYNNYYNYNNNNYYNNYY", "NYNNNNYNNYYYNNYNNYNYYYYYNNNNNNYYNNNNNYNN", "YNNNYYNNNNNYYNNNYYNNNYNNYNYNNYNNYNNNNNNY", "NNNYYNNYNNNYNNYNNNYNNNNNYYNNNYNYYNNNNNYN", "NNNNYYNYNNNNNNYNNNNNNNNNNNNNNNNNYNNNYNNN", "NYNYNNYYYYNNNNYNNYNNNNNNNYNNNNNNNYNNYYNN", "YNNNNNYNYNNNNNNNNNNYNNNYNNYNNYYNNNNNNNNN", "NNNNNYNNNNNNNNYNYNNNNNNYNNNNNNNYNYYNNNNN", "NYYNNYNYNYYYNYNYYNNNYYYYYNNYNYNNNNNYYNNY", "NYNYNYNNNNNNNNYNNYYNYYNNYYNYNNYNYYNNNNNN", "NNNNNNNNYNNNNYYNNNNYNNNNNNNNNNNYNNYNYYNN", "NYNNNNNYYNNYNNNYNNNNNNNNNYYNYNNNNNNYNNNN", "NNNNNYYNNYNNNNNYNNNNYNNNNNYNNNNYYYNNYNYN", "NNNNYNNYNNNNYNNNYNNNNNNYYNYYYYNNNNYNNNNY", "YYNYNNNYNNNNNNYYNNYNNNNNNNNNNNNNNNNNYNNY", "NYNYNYNYYNNNNNYYNNNNNNNNNNNNNNNYNNNNNYNN", "NNNNNYNYNNNNNNYNNNNNNNNNYNNNNNYNYYYNNYNN", "NNNNYYYYNNNNYYYNNNNYNNNNYYNNNNNNNYNNYNYN", "YNYYNNNNYYNNNNYYNNNYNNYYNNNYNNYYYNYNNNNN", "NYYNNNNNNYNYNNNYNYNNNNNYNNYNYYNNYYNNNNNY", "YNNYYNYNYNNNYNNNNYYYNNNNNYNNYNYYYYYNNYYN", "NYNNYNYNNNNNNNYYNNNYNNNNYNNNNNNNYNNNNYNN", "YNYNYNNNNNNNNNNNNYNYNNNNNYYNNYNYNNNNYNNN", "NNNNYYYNYYNNYNYNNNNYNNNNNYNNYNNNNNNNNNYN", "NNNNNNNYNNNNYNNYNNNNNNYNYNYNNNNNNNNNNYNN", "NNNNNNNYNYNNNYNNYNYNNYNNYNYNYNNNYYNNNYYN", "NNYNNNNNYYYNNNNYNNYNNNYNYYYYNNNYNNYNNNNN", "NNNNNNNNNNNYNYNYNNYNNNYYNYYNNNNYNNYYNNYN", "NYNYYNYNNNNNNYNNYNNYNNYNYNYNNNNNYYNYYNNN", "YNNYNNYNNNNNNNYNNYNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNNNYYNNYNYNYNYNNYNNNNYNNNNNYNNNYY", "NNNNNYNYNNNYNNNNYNNNNYYNNNYYNNYYNNNNNNNN", "NYNNNNYNNYNNNNNNNNYNNNNYNNYNNYNYNYNNYNNN", "YNYNYNYNYNNNNNYNNNNYYNNNNYNNNNNNNNNNYNNN"};
    int person1 = 14;
    int person2 = 26;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> friends = {"NNYNNNNNNNYNNNNNNNNNNYNNNNYNNNNNNNNNNNNN", "NNYYYNYNYNYYYNYNNYNNYNYYYNNYYYNYNNYYNYNN", "YYNNNNNYNYNYNNNNNNYYNNNNNNNNNNNNYYNNNNNN", "NYNNNNNNNNNNNNNNNNYNYNNNYNNYNNNNYNNNNNNY", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNNNYYNNNYYNNNN", "NYNNNNNYNNNYNNNNNNNNNNYYYNNNNNNNYNNNNNNN", "NNYNNNYNNNNYYNNNNNNNNYNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNYNNNYNNYNNNNNNNNNNNNNNNNYYN", "NNYNNNNNNNNNNYNNNNYNNYNNNNNNNNNNNNYNNNYN", "YYNNNNNNNNNNNNNNNYNNNNYNNNYNNNNNNYNNYNNN", "NYYNYNYYNNNNNYYNNNNNNNNYNNNNNYNYNNNNNNNY", "NYNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYYNYNNNYYNYNNYNNNYNNNNYYYNNNNNNN", "NYNNNNNNNNNYNNNNNYNNNNYNNNYYNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNNNNNYYNNYNNNNNNYNYNNNNN", "NNNNNNNNNNNNYYNNNNNNNYNNNNNNNNNNNYNNNNNN", "NYNNNNNNYNYNNNYNNNNYNNNNNNNNNNNYNNNNNNNY", "NNYYNNNNNYNNNYNNNNNNYYNNNNNYYNYYNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNYNNYYNNNNNNNYNNNNNN", "NYNYNYNNYNNNNNNNNNYNNNNYNNNYNNYYNNYNNYNN", "YNNNNYNYNYNNNYNYYNYYNNNNNYYNNNYNYYNNYNYY", "NYNNNNYNNNYNNNYYNNNNNNNNNNYNYNNNNNNNNYNN", "NYNNNNYNNNNYNNNNNNNNYNNNNNNNNNNNNNNYNNNN", "NYNYNNYNNNNNNNNNNNNYNNNNNYNYNNNNNNNYNNNN", "NNNNNNNNNNNNNYNYNNNYNYNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNYNNNNNNYYNNNNNNNYNNNNNYYYN", "NYNYNNNNNNNNNNYNNNYNYNNNYNNNNNNNYNNNNNYY", "NYNNYNNNNNNNNNNNNNYNNNYNNNNNNNYNNNNNNNNN", "NYNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNYNYYNNNNYNYNNNNNNNNNYN", "NYNNNNNNNNNYNYNNNYYNYNNNNNNNNNNNNNNNYNNN", "NNYYNNYYNNNNNYNYNNNNNYNNNNNYNNNNNYNNNNYY", "NNYNNNNNNNYNNNNNYNNYNYNNNNNNNNNNYNNNYNNN", "NYNNNYNNNYNNNNNYNNNNYNNNNNNNNNNNNNNYNYNN", "NYNNYYNNNNNNNNNNNNNNNNNYYNNNNNNNNNYNNNNY", "NNNNNNNNNNYNYNNNNNNNNYNNNNYNNNNYNYNNNNNN", "NYNNNNNNYNNNNNYNNNNNYNYNNNYNNNNNNNYNNNNN", "NNNNNNNNYYNNNNNNNNNNNYNNNNYYNNYNYNNNNNNN", "NNNYNNNNNNNYNNNNNYNNNYNNNNNYNNNNYNNYNNNN"};
    int person1 = 21;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> friends = {"NNNNNNNNNNNNNNYNNNYYNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNYNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNNNY", "NNYYYYYNYNYYNYNNNNYNYNNYNYYNNNNNNYNNYNYY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNYNNNNYNYYYYNNNYYNYNNYYYYYYNYYNYNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNN", "NNNNNNNYNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNYNNNNY", "YNNNNYNNYNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNN", "NNNYNNYNYNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN"};
    int person1 = 19;
    int person2 = 9;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> friends = {"NNNNNNYNYNYNNYNNYYYNYNNYNNYNYNNNYNNNYYYY", "NNNYNYYNYNYYNYNNNNNNYYYYNNYYNYNNNNNNNNYY", "NNNNNYYNYYYNNYNNNNYNYYYNYYYYYYNNNNYYYYNN", "NYNNNNYNNYYNYNNNNNNYNNYYYYNNNNYNNNNNNNYY", "NNNNNYNYYNNNNYNYNNNYNNNNNNNNYNNNNNNYYNYY", "NYYNYNNNNYNYNNYNNNNYYNYNYYNNNNYNNYYNYYNY", "YYYYNNNNNNNYYYNNNNNNNYNNYNNNYNNNYYNYYNYY", "NNNNYNNNYYYNNNNNNYYNYYNNNYYNNNNNYNYNNYNN", "YYYNYNNYNYNNNNNYNNNYNYNNNYNNNNYYYNNNYNYY", "NNYYNYNYYNYNNYNYNYYNNYNYNNYNYNNNNYYYYNNY", "YYYYNNNYNYNYYNNNNNNNNYNNNYNNNNNYYNYNNNNN", "NYNNNYYNNNYNYYYYNNNNYYNNNNNYYNNNNNNYNYYY", "NNNYNNYNNNYYNNNYNYNNNNNNNNYNNNNNNNYYNNNN", "YYYNYNYNNYNYNNNNYNNYNNYNYNNNNYNNNYNYNNYN", "NNNNNYNNNNNYNNNNNNNNNYYYNNNNYNYYNNNNNYYN", "NNNNYNNNYYNYYNNNNNYNYNNNNNYNNNYNYNYNYYNN", "YNNNNNNNNNNNNYNNNNNYNNNYNNNNYNNNYYYNNNNY", "YNNNNNNYNYNNYNNNNNYNYYYYYYNYNYYNNNNNNNYN", "YNYNNNNYNYNNNNNYNYNNNNYNNNNNNNNNNYNNNNYY", "NNNYYYNNYNNNNYNNYNNNNYYNNYNYNYYYYNNNYYYY", "YYYNNYNYNNNYNNNYNYNNNNNYNNYNNNYNYYNNYYYN", "NYYNNNYYYYYYNNYNNYNYNNYYNNNNYNNNNYYYYYNN", "NYYYNYNNNNNNNYYNNYYYNYNNNNNNNYYNNYYNNYNN", "YYNYNNNNNYNNNNYNYYNNYYNNYNNYNNNNYNYYNYNN", "NNYYNYYNNNNNNYNNNYNNNNNYNYNYNNNNYNYYNYNN", "NNYYNYNYYNYNNNNNNYNYNNNNYNNYNNYYNYNNNNYN", "YYYNNNNYNYNNYNNYNNNNYNNNNNNYNYNNYNYYNNNN", "NYYNNNNNNNNYNNNNNYNYNNNYYYYNNYYYYYNNNNYN", "YNYNYNYNNYNYNNYNYNNNNYNNNNNNNNYNYNNYNNYY", "NYYNNNNNNNNNNYNNNYNYNNYNNNYYNNNNYNYNNYNN", "NNNYNYNNYNNNNNYYNYNYYNYNNYNYYNNNNNYYNNNY", "NNNNNNNNYNYNNNYNNNNYNNNNNYNYNNNNNNNNYYYY", "YNNNNNYYYNYNNNNYYNNYYNNYYNYYYYNNNYYNYNNN", "NNNNNYYNNYNNNYNNYNYNYYYNNYNYNNNNYNYNNNNN", "NNYNNYNYNYYNYNNYYNNNNYYYYNYNNYYNYYNNNYNY", "NNYNYNYNNYNYYYNNNNNNNYNYYNYNYNYNNNNNNNYY", "YNYNYYYNYYNNNNNYNNNYYYNNNNNNNNNYYNNNNNYY", "YNYNNYNYNNNYNNYYNNNYYYYYYNNNNYNYNNYNNNNN", "YYNYYNYNYNNYNYYNNYYYYNNNNYNYYNNYNNNYYNNN", "YYNYYYYNYYNYNNNNYNYYNNNNNNNNYNYYNNYYYNNN"};
    int person1 = 34;
    int person2 = 38;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> friends = {"NYNYYNNYNYNNYYYYYYNYYYYYNNYYNYYNNNNNYNYN", "YNYNYYYYNYNNYYYYNYNYNNYYYYNNNNNNYNNNNNYN", "NYNYYNYYYNNNYYYYYYYYNNYNYNYNYYYNNNNNYYYN", "YNYNYYNNNNNYYNYNNNNYYYYNNNNYNNNNNNNNYYYN", "YYYYNNNYNNNYNNNNNYYYNNYNYYYYYYYYNNNNYYNY", "NYNYNNYNYNYYNNYYYYNYYYYYNNYNYNNYYYNNYYNY", "NYYNNYNYYYNNYYYYYYYNYYNYYNYYYYYNYNNNYNYN", "YYYNYNYNYYYNYYNNNNYYYNYNNYYYNNNNYNNYYNYN", "NNYNNYYYNNNNNYYNNYYNYNYYYYYNNYNNYNNYNNYY", "YYNNNNYYNNNYYNNNNNNYNNYYYNNYNYYYNNNNNYYY", "NNNNNYNYNNNYYNNNNYYNNNNYYNYYNNNYNYNNNYNY", "NNNYYYNNNYYNYNYYNYNYYYNNNYNNNYNYNYYNNNYY", "YYYYNNYYNYYYNNYYNNNYYYNYNNNYYNNNNNNNNYNY", "YYYNNNYYYNNNNNNNYNYNNNYYYNYYYNYNYNNYYYNN", "YYYYNYYNYNNYYNNYNYYYYNNYNNYYNNYNNNNYNYYN", "YYYNNYYNNNNYYNYNYNNNNYNNYYNYNYYNNYYYNNNN", "YNYNNYYNNNNNNYNYNYYYNNNYYYNNNNNYYNYNNNYN", "YYYNYYYNYNYYNNYNYNNNYYNYNNYNNYYYNNYNNNNY", "NNYNYNYYYNYNNYYNYNNYYYYNYNNNNYNNNYYYYYYN", "YYYYYYNYNYNYYNYNYNYNYYNNYNNNYNNYYYYYNNNY", "YNNYNYYYYNNYYNYNNYYYNYNYNYNYYNYNYNNYNNNY", "YNNYNYYNNNNYYNNYNYYYYNNYYNNNYYYYYNYYNYYY", "YYYYYYNYYYNNNYNNNNYNNNNYNYYNNNNYNNNNNYYY", "YYNNNYYNYYYNYYYNYYNNYYYNYNNYYYNNYNYYYNYN", "NYYNYNYNYYYNNYNYYNYYNYNYNYYNYNYNNYYNNNNN", "NYNNYNNYYNNYNNNYYNNNYNYNYNYNNNYYNNNNNYYY", "YNYNYYYYYNYNNYYNNYNNNNYNYYNNNNNYYYYNYYYN", "YNNYYNYYNYYNYYYYNNNNYNNYNNNNNYYYNNYNNNNY", "NNYNYYYNNNNNYYNNNNNYYYNYYNNNNYYYNYNNNNNN", "YNYNYNYNYYNYNNNYNYYNNYNYNNNYYNNNNNNYYYYY", "YNYNYNYNNYNNNYYYNYNNYYNNYYNYYNNYNNYYYYNY", "NNNNYYNNNYYYNNNNYYNYNYYNNYYYYNYNYYYNNNYY", "NYNNNYYYYNNNNYNNYNNYYYNYNNYNNNNYNYYYNNYN", "NNNNNYNNNNYYNNNYNNYYNNNNYNYNYNNYYNNNNNNN", "NNNNNNNNNNNYNNNYYYYYNYNYYNYYNNYYYNNYNYYY", "NNNNNNNYYNNNNYYYNNYYYYNYNNNNNYYNYNYNYNYN", "YNYYYYYYNNNNNYNNNNYNNNNYNNYNNYYNNNNYNNYY", "NNYYYYNNNYYNYYYNNNYNNYYNNYYNNYYNNNYNNNNN", "YYYYNNYYYYNYNNYNYNYNNYYYNYYNNYNYYNYYYNNN", "NNNNYYNNYYYYYNNNNYNYYYYNNYNYNYYYNNYNYNNN"};
    int person1 = 13;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> friends = {"NYNYYNYYYYYNNYYYNNYYYYYYYYYYNYYYNNYYYYYY", "YNNYYYYYNYNYYYNYYYYYYYYNYYYYYYYYYYNYYYYY", "NNNYYNYNYYYYYYYYYYYYYYYNYNNYYYNYYYYNYYYY", "YYYNYNNYYYYYYYYYYYYYYYNNYYNYNYNNYYYYYYYN", "YYYYNYNYNYYYNNYYYYYYNNNYNYYYNYYYYYYYYYNN", "NYNNYNNYNYYYYYYNYYYYYNYNYYYYYYYYNYYYNNNY", "YYYNNNNYYYYNNNYNYYYNYYYYYYYYYNYYNYNYNYYN", "YYNYYYYNYYYYNYYYYNYYYYYYYYYNYYYYNYYYYYYY", "YNYYNNYYNYNYNYYYYYNYYNYYNNYYYYYYYYNYYYYN", "YYYYYYYYYNYYNYYYYYYYYYYYYYYYYYYYYYNYYNYY", "YNYYYYYYNYNYNYYYYYYYNYYYYYYYNNYYYYYYYYYY", "NYYYYYNYYYYNYYNYYYYYYYYNNNYYNYYYNYNNYNYY", "NYYYNYNNNNNYNYNYYNYNYYYNYYYNYNNNNYYYYYNN", "YYYYNYNYYYYYYNYNNYYYYYYNYNYYYYYYYYYYYYYY", "YNYYYYYYYYYNNYNYYNYYNYYYYYYYNYNYYYYYYNYN", "YYYYYNNYYYYYYNYNNYYNNYNNYYNYYYYYYNNYNYYY", "NYYYYYYYYYYYYNYNNYYYYNYNNYNNYYYYNYYYYYYY", "NYYYYYYNYYYYNYNYYNYYNNYYYYYYYNNYYNYYYYNY", "YYYYYYYYNYYYYYYYYYNYNNYNYYYYYYYYNYYYYYYY", "YYYYYYNYYYYYNYYNYYYNYYYYYYYYYYYYYNYYYNYY", "YYYYNYYYYYNYYYNNYNNYNYYNYYYYYYYNYYYYNNNN", "YYYYNNYYNYYYYYYYNNNYYNYNYYNYYNYYYYYYYYYY", "YYYNNYYYYYYYYYYNYYYYYYNNYYYYNYYYNYYNYYYN", "YNNNYNYYYYYNNNYNNYNYNNNNNNNYNYYYYNNNNNYY", "YYYYNYYYNYYNYYYYNYYYYYYNNYNYYYNYYNYYNYNY", "YYNYYYYYNYYNYNYYYYYYYYYNYNYNYYYNYYYYYYYY", "YYNNYYYYYYYYYYYNNYYYYNYNNYNNNYYNYNYYYYYN", "YYYYYYYNYYYYNYYYNYYYYYYYYNNNYYYYYNNYNYYY", "NYYNNYYYYYNNYYNYYYYYYYNNYYNYNNYYYNYYNYYY", "YYYYYYNYYYNYNYYYYNYYYNYYYYYYNNYYYYNNYYYY", "YYNNYYYYYYYYNYNYYNYYYYYYNYYYYYNYNYNNYNYY", "YYYNYYYYYYYYNYYYYYYYNYYYYNNYYYYNYYYYYYYY", "NYYYYNNNYYYNNYYYNYNYYYNYYYYYYYNYNYYYYNYY", "NYYYYYYYYYYYYYYNYNYNYYYNNYNNNYYYYNYNNNNY", "YNYYYYNYNNYNYYYNYYYYYYYNYYYNYNNYYYNYYYNY", "YYNYYYYYYYYNYYYYYYYYYYNNYYYYYNNYYNYNYYYY", "YYYYYNNYYYYYYYYNYYYYNYYNNYYNNYYYYNYYNYYY", "YYYYYNYYYNYNYYNYYYYNNYYNYYYYYYNYNNYYYNYY", "YYYYNNYYYYYYNYYYYNYYNYYYNYYYYYYYYNNYYYNY", "YYYNNYNYNYYYNYNYYYYYNYNYYYNYYYYYYYYYYYYN"};
    int person1 = 12;
    int person2 = 23;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> friends = {"NNNNNNNNYNNYYNNNNNYNNNNYNNYYNNNNYYYNYYYY", "NNYNYNNYNNYYNNYYNYYNNNNYNNYNYNNNYNYYYYYY", "NYNYNNNNYYYYNNYYYYNYNNYNYNNNNNYNNYYNNNYN", "NNYNNYYNNNNNNYNNNNNNNNNNYYNNYNYYYNNYYYNN", "NYNNNNNNNNNNYNYNNYNNNYNNNYNNYNNNNNYYYYNN", "NNNYNNNNNNYYYNNYNYNNNYNNNNYNNNYYNNYNYYNN", "NNNYNNNYNYYYNNYYYNNYYYNNNYYNNNYYYNNYNNNN", "NYNNNNYNNYNNNNNNNYYYNYYNNNYNYNYNYNNNNNNN", "YNYNNNNNNYNNNYYNYNNNYNYYYYYYYNNNNYYNNNYN", "NNYNNNYYYNYYNNNNNNNYYNYYNNNNNNNYNYNYNYYY", "NYYNNYYNNYNNNNNNYYNYNYYYNYNNNNYNNNNNYNYY", "YYYNNYYNNYNNYYNNYNYNYNNYYNYNYNNNNNNNYNNN", "YNNNYYNNNNNYNNNNNYNNNNYNNNYYYYNNNYYYYNNN", "NNNYNNNNYNNYNNNNYNNNYNNNNNYNYNNNNNYYYNYN", "NYYNYNYNYNNNNNNYNYNNNYYNYYYYNYNYYNNYNNNY", "NYYNNYYNNNNNNNYNNNNYNNYYNYNNYYYNNNNYNNNN", "NNYNNNYNYNYYNYNNNNNYYNNNYNNYNYYNNYNNYYNN", "NYYNYYNYNNYNYNYNNNNNNNYNYYNYNYNYNYYNNYNN", "YYNNNNNYNNNYNNNNNNNYNNNYYYNNYNNNNYYYYYNN", "NNYNNNYYNYYNNNNYYNYNYYYYYYYYYYYNNYNNNNNY", "NNNNNNYNYYNYNYNNYNNYNNYNNYNNNYNNYNNYNYYN", "NNNNYYYYNNYNNNYNNNNYNNNYNNNNNNYNNNNNYNNY", "NNYNNNNYYYYNYNYYNYNYYNNNYYYYYNNNNNYNYNYN", "YYNNNNNNYYYYNNNYNNYYNYNNNNYYNNNYNYYNNYNN", "NNYYNNNNYNNYNNYNYYYYNNYNNNYNYNNNNNYNNNNN", "NNNYYNYNYNYNNNYYNYYYYNYNNNYNNYNNYYNNYNYN", "YYNNNYYYYNNYYYYNNNNYNNYYYYNNNNYNNNNNNNYN", "YNNNNNNNYNNNYNYNYYNYNNYYNNNNYNYNYNYNNNYY", "NYNYYNNYYNNYYYNYNNYYNNYNYNNYNYNYNNYNYYNY", "NNNNNNNNNNNNYNYYYYNYYNNNNYNNYNYYYNYNNYYN", "NNYYNYYYNNYNNNNYYNNYNYNNNNYYNYNYYNNNNYNN", "NNNYNYYNNYNNNNYNNYNNNNNYNNNNYYYNNNNYNNNY", "YYNYNNYYNNNNNNYNNNNNYNNNNYNYNYYNNYNNNNNN", "YNYNNNNNYYNNYNNNYYYYNNNYNYNNNNNNYNYYNNNN", "YYYNYYNNYNNNYYNNNYYNNNYYYNNYYYNNNYNNYYYY", "NYNYYNYNNYNNYYYYNNYNYNNNNNNNNNNYNYNNNNNN", "YYNYYYNNNNYYYYNNYNYNNYYNNYNNYNNNNNYNNNNN", "YYNYYYNNNYNNNNNNYYYNYNNYNNNNYYYNNNYNNNYY", "YYYNNNNNYYYNNYNNNNNNYNYNNYYYNYNNNNYNNYNY", "YYNNNNNNNYYNNNYNNNNYNYNNNNNYYNNYNNYNNYYN"};
    int person1 = 6;
    int person2 = 34;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> friends = {"NNNNNYNYNNNNYNYNNNNNNNYNNYNYNNNYNYNNNYNY", "NNNNYYYYNNYYNNNNNYYNYNYNYYNNNNYNNYNNYNNY", "NNNYYNYNNNYNNYNNNYYYYYYNNYNNYNYNNYYNNNNY", "NNYNNNYYNYNNYNYYYNYYYYYYNYNYNNNNYYYNYNNY", "NYYNNNYNNYNNNNNNYNYYNNYYNYNNYYYNYNYNYYYY", "YYNNNNNYYNNNNNNYNYNNNYNYNYNNNNYYYNYYYNNN", "NYYYYNNNNNYNNYNNYYNYNNYNNYNYYNYNNYNYNYNN", "YYNYNYNNYYNNYYNYNYNNNNYYYYNNNYYYYNNNYNNN", "NNNNNYNYNNYNYNNNNNNNNNYNNNNYNNNYNNNNYNNN", "NNNYYNNYNNNNYYYNYYYNYNNNYYYYNNYNYNNNNNNY", "NYYNNNYNYNNNNNYNYYYNNYNNYYNYYYYNNYYNYYNN", "NYNNNNNNNNNNNNNYNYNNNNNYYNNYYNNNNYYNNYYN", "YNNYNNNYYYNNNNNNNYNYNNYYNNNNNNNNNYNNNNYN", "NNYNNNYYNYNNNNYNYNNYNNNYYNYNNNYNNNNNYYNY", "YNNYNNNNNYYNNYNYNNNNNNNYNNNYYNNNNNNNNNYN", "NNNYNYNYNNNYNNYNNNNNYNNYYNNNNNNYNNYNYYYN", "NNNYYNYNNYYNNYNNNNNNYYYNNYYYYYNNNNNNYYNY", "NYYNNYYYNYYYYNNNNNNNNNYYNNNYNNYYNYNYNYYY", "NYYYYNNNNYYNNNNNNNNNNNYYNYYNYNNYNNNYNNYN", "NNYYYNYNNNNNYYNNNNNNYYNYNNYNYYYNNNNNNNNY", "NYYYNNNNNYNNNNNYYNNYNNNYNYYNYNYNNNNYNYYN", "NNYYNYNNNNYNNNNNYNNYNNNYNNYYYYNNNNYNYNNY", "YYYYYNYYYNNNYNNNYYYNNNNNNNYYNNNNYNNNYNYN", "NNNYYYNYNNNYYYYYNYYYYYNNNYYNNYNNYNNYNYNN", "NYNNNNNYNYYYNYNYNNNNNNNNNYNNNYYYYNYNNNYY", "YYYYYYYYNYYNNNNNYNYNYNNYYNNYNYYNNNYNNNNY", "NNNNNNNNNYNNNYNNYNYYYYYYNNNNYYYNNYYNYYYN", "YNNYNNYNYYYYNNYNYYNNNYYNNYNNYNNYYNYNNYYN", "NNYNYNYNNNYYNNYNYNYYYYNNNNYYNNNNNYYYNYYY", "NNNNYNNYNNYNNNNNYNNYNYNYYYYNNNYNNYNNNNYN", "NYYNYYYYNYYNNYNNNYNYYNNNYYYNNYNNYYNNYNNY", "YNNNNYNYYNNNNNNYNYYNNNNNYNNYNNNNYNNYYNNY", "NNNYYYNYNYNNNNNNNNNNNNYYYNNYNNYYNNNNNNYN", "YYYYNNYNNNYYYNNNNYNNNNNNNNYNYYYNNNNNNYNN", "NNYYYYNNNNYYNNNYNNNNNYNNYYYYYNNNNNNYYNYN", "NNNNNYYNNNNNNNNNNYYNYNNYNNNNYNNYNNYNYNYN", "NYNYYYNYYNYNNYNYYNNNNYYNNNYNNNYYNNYYNNNN", "YNNNYNYNNNYYNYNYYYNNYNNYNNYYYNNNNYNNNNNY", "NNNNYNNNNNNYYNYYNYYNYNYNYNYYYYNNYNYYNNNN", "YYYYYNNNNYNNNYNNYYNYNYNNYYNNYNYYNNNNNYNN"};
    int person1 = 28;
    int person2 = 7;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> friends = {"NYNNYYYNYYNNNYNYYNYNNYYYNNYNNNNNNYYYYYNY", "YNYYYNYYYNYYNNYYYNNYYYYYNYYNNNYNYNNYNYNN", "NYNYNNYYNYYNYYNYNYNYYNYNYYYNYYNNNNYNNYYN", "NYYNNYNYNNNYYYNYYYYYNNNNNYNYYYNYNYNNYNNN", "YYNNNNNYYNYYNNYNYNYYYNYYNNYYYYNNYNYYNNNN", "YNNYNNYYNYNNNNNNNYYYNNYNYNNYYYNNYYNNYYNN", "YYYNNYNYYNNNYNYYNYYNNYYNNYYNNYNNYYYYYYYY", "NYYYYYYNNYYYYNNYYYYNYYYNNYNYNYNNYYNNYYNN", "YYNNYNYNNNYNNYYYNYYNYYNNYYNNNYNNNYNNNYNN", "YNYNNYNYNNYNNYNYNYYYYYYNYYYYNYNNNYYYNNYN", "NYYNYNNYYYNNNYYNNNNNNYYNYNNNYYYNNNNNYYNN", "NYNYYNNYNNNNYNNYYYNNYNNNNNYYYYNNYYNYYNYN", "NNYYNNYYNNNYNYYYYYNYYNYNNYYYYNYNNYNNNNNY", "YNYYNNNNYYYNYNNYYYYYYNNNNYYYYYYNNNNYNYNY", "NYNNYNYNYNYNYNNYYNNNYNYNNNYNNYYYYNNNYYYN", "YYYYNNYYYYNYYYYNNYYYNYYYNNNNNNNYNYNNNYNN", "YYNYYNNYNNNYYYYNNNNNNYNYYYYYNNNYNNNNNYNY", "NNYYNYYYYYNYYYNYNNNNYNNNNNYYNNYNNYNYYNYN", "YNNYYYYYYYNNNYNYNNNNYYNNNNYYYNNNNYYNNNYY", "NYYYYYNNNYNNYYNYNNNNNYYNNNYYYYYYNNNNYYYY", "NYYNYNNYYYNYYYYNNYYNNYNNNYYYNNNNNYYYYYNN", "YYNNNNYYYYYNNNNYYNYYYNYYNYYNYYNNYYNYYYNY", "YYYNYYYYNYYNYNYYNNNYNYNYNNNYYNNYYYNNNNNN", "YYNNYNNNNNNNNNNYYNNNNYYNNNNYYYNNYNNYYYNY", "NNYNNYNNYYYNNNNNYNNNNNNNNNYYNYYNYNNNNYNN", "NYYYNNYYYYNNYYNNYNNNYYNNNNNNYNYYNNNNNNYN", "YYYNYNYNNYNYYYYNYYYYYYNNYNNYNNYYNYYYNNNY", "NNNYYYNYNYNYYYNNYYYYYNYYYNYNNYYYNNYNNYNN", "NNYYYYNNNNYYYYNNNNYYNYYYNYNNNYYNNNNNYNNN", "NNYYYYYYYYYYNYYNNNNYNYNYYNNYYNNYNYYNNNNY", "NYNNNNNNNNYNYYYNNYNYNNNNYYYYYNNNNNYNYYYY", "NNNYNNNNNNNNNNYYYNNYNNYNNYYYNYNNYNNYNYNY", "NYNNYYYYNNNYNNYNNNNNNYYYYNNNNNNYNYYNYNYN", "YNNYNYYYYYNYYNNYNYYNYYYNNNYNNYNNYNNYNNNN", "YNYNYNYNNYNNNNNNNNYNYNNNNNYYNYYNYNNYYYYN", "YYNNYNYNNYNYNYNNNYNNYYNYNNYNNNNYNYYNNYYN", "YNNYNYYYNNYYNNYNNYNYYYNYNNNNYNYNYNYNNNNN", "YYYNNYYYYNYNNYYYYNNYYYNYYNNYNNYYNNYYNNYY", "NNYNNNYNNYNYNNYNNYYYNNNNNYNNNNYNYNYYNYNN", "YNNNNNYNNNNNYYNNYNYYNYNYNNYNNYYYNNNNNYNN"};
    int person1 = 32;
    int person2 = 13;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> friends = {"NNNNNNNYYNNNNNYYNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNYYYNNNNNYNNNNY", "NNNNNNNNNNNNNNNYNNYYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNYNNNNNNN", "NYNNNNNNNNNNNNNYNNNNNNNYNYNYNNNNYNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNYNN", "NNNNNNNNNNNYNYNYNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNYYNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNYYNNNNNNYYNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNYNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNNNNNYNNNYNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNYNNN", "YNYNYNYNYYNYYNYNYNYYYNNYYYNYYYNNYNYYNYYY", "NNNNNNNNYNNNNNNYNYNNNNNNYNNNNNNNNNNNYNNN", "NNNNNNNNNNYNNNNNYNNNNNNNNYYNYNNNNNNNNNYN", "NNYNNNNNNNYNYNNYNNNYNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNYNNNYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNYNYNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNYNNNNNNNYNNNNYNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNYN", "NNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNYNNYNYNNN", "NNNNYNNNNNYNNNNYNYNNNNNNNNNNNNNNNNNNNNNN", "NYNYNYNYNNYNNYNNNYNNNYYNNNNNNNYYNYNNYNNN", "NYNYYNNNNNNNNNNYNNNNNNNNNNNNNNYNYNNNNNNN", "NYNNNNNNNNYNNNNYNYNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNYYNNNNNNNNNNNN", "YNNNNNNNYNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNN", "NNNYYNNNNNNNNNNYNNNNNNNYNNNYNNNNNNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNNNYNNNNNNNNNYNNY", "NYNNNYNNNNNNNNNYNNYNNNNNYNNNNYNYNNNNNNNN", "NNNNYNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNYNYNNNNNNNYNYNNNNNNYNNNNNN", "NNNNNYNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNYNNNNNYNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNYNNNNNN"};
    int person1 = 15;
    int person2 = 26;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> friends = {"NYYYNYYYYYNYYYYYYYYYYYYYYYNYYYYNYYYYYYYY", "YNYYYYNYYNYYYYNYYYYYYNYYYNYYYYYYYYYYYYYY", "YYNYNNYYYYYNNYYYYYNYYYYYYYNYYYYNYYYYYYYN", "YYYNNYYYYYYYYYYYYYNYYYYYYYYYNYNYYYYNYYYY", "NYNNNNYNNNYYNNNYYYYNYNNYNYNYNNNYNYYNYYNY", "YYNYNNYYYYYYYYYYYYYYYYNYNYYYYYYYNYYNYYNY", "YNYYYYNYYYYYYNNNYYYYYNYYYYYNYYYYYYNYYYYY", "YYYYNYYNYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYNYYYNYYYYYYYNYYNYYYYYYYYNYYYYYYYYYYY", "YNYYNYYYYNYYYYYYYYYYYYYYYYYNYYYYYNYYYYYY", "NYYYYYYYYYNYYYYYYYYYYNYNYNNYYYYYYYYYYYYN", "YYNYYYYYYYYNYYYYYYYYYNYYYYYYYNYYYNYNYYYY", "YYNYNYYYYYYYNYYYYYYYYYNYYYYYYNYYNNYYYYNY", "YYYYNYNYYYYYYNYYYYNYYYYYYYYYYNYYNYYYNYYY", "YNYYNYNYYYYYYYNYYYNYYYYYYYYYNYYYYYYYYYYY", "YYYYYYNNYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYNYYYYNYYYYYYYYYYNYNYYNYY", "YYYYYYYYYYYYYYYYYNYYYNYYNYYYYYYYYYYYYYYY", "YYNNYYYYYYYYYNNYYYNYYNNYYYYYNYYNYYYNYYNY", "YYYYNYYYNYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNNYYYYNYYYYNYYYYYYYY", "YNYYNYNYYYNNYYYNNNNYNNYNYNYNYYYNYNNYNNYN", "YYYYNNYYYYYYNYYYYYNYYYNYYYYYYYYYYYYYYYYN", "YYYYYYYYYYNYYYYYYYYYYNYNYYYYYYNYYYYYYYYY", "YYYYNNYYYYYYYYYYYNYNYYYYNYYYYYYYYYYYYYYY", "YNYYYYYYYYNYYYYYYYYYYNYYYNYYYYNNYYYYYYYY", "NYNYNYYYYYNYYYYYYYYYNYYYYYNYYYYYYYYYYYNY", "YYYYYYNYYNYYYYYYYYYYYNYYYYYNYYYYYYYYYYYN", "YYYNNYYYNYYYYYNYYYNYYYYYYYYYNYYYYYNYYYNY", "YYYYNYYYYYYNNNYYYYYYYYYYYYYYYNNYNNYYYYYY", "YYYNNYYYYYYYYYYYYYYYYYYNYNYYYNNYYYYYNYYY", "NYNYYYYNYYYYYYYYYYNYNNYYYNYYYYYNYNYNYYYN", "YYYYNNYYYYYYNNYYNYYYYYYYYYYYYNYYNYYYYYYN", "YYYYYYYYYNYNNYYYYYYYYNYYYYYYYNYNYNYYYYYY", "YYYYYYNYYYYYYYYYNYYYYNYYYYYYNYYYYYNYYYYY", "YYYNNNYYYYYNYYYYYYNYYYYYYYYYYYYNYYYNYYYY", "YYYYYYYYYYYYYNYYYYYYYNYYYYYYYYNYYYYYNYNN", "YYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYNYY", "YYYYNNYYYYYYNYYYYYNYYYYYYYNYNYYYYYYYNYNY", "YYNYYYYYYYNYYYYYYYYYYNNYYYYNYYYNNYYYNYYN"};
    int person1 = 4;
    int person2 = 21;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> friends = {"NNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNYNNNNNNNNNYNNNYNYNNNNNNYNNNNNNNNNNNYNN", "YYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNYN", "NNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNN", "YNNYYNNYYNNNNNYNYYYYNNNYNNNNNYNNYYYNNYYY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNYNNNYNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNYYNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNYNNNNNNYNNNNYNNNNNNNNN", "NNNNNNNNYNNNYNNNNNYNNNYNNNNNNNNYNNNNNNNN", "NYYNNNYNNYYYNYNYNNNNYYYNYYYYYNYYNNNYYNNN", "NNNNNNNNNYNNYNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNYNNNYNNNNNNYYNNNNNNNNNNYNNNNNNNN", "NYNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNYNNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNYNYNNNNNNNNNYNNNNYNYNNNYNNNYNYNNNNNNN", "NNNNNNNNNNNNYNNYNNNYNYNNNNNNNNYNNNNNNYNY", "NNNNNNNNNYNNYNNNNNNNYNNNNYNNNNNNNNNNYNNN", "NNNNNNNNNNNYYNNNNNNYNNNNNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNYNNNNNNNNNNYNNNNNNNNNNNYNYNN", "NYNNNNNNNNYNYNNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNYNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNYNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNYNYNNNNNNYYNNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNYYNNYNNNNNNNNNNNYNNNNNNNNNNNY", "NNYNNYYNNNNNNNYNNNNYNNYNNNNYYNNNNNYNNNYN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNYNNNNYNNNNNNNYNN", "YNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNNNNNN", "YYNNYYNNNNNNNNNNNNNNYNNNYNNNYNNNNNNYNNNN", "NNYNNYNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNYNYNNNNNNNNNNYNNNNNNNN"};
    int person1 = 5;
    int person2 = 12;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> friends = {"NNYYYYYYYNYYYYYYYYYYNNNYYNNYNYNNNYYYYNYY", "NNNYYYYYNNYNNNYNYYYNYYNYNYYNYYYYYNNYNNYN", "YNNNYYYYNYNNYYYNYYYYYNYYYYNYYNYYYYYYYYYN", "YYNNNYYYYYYYYNYYYYYYNNYNYNNNNYYNNYYYYNYY", "YYYNNYYNYYNYYNYNYNYYNNNNYNYYYNYYYNYYYNNY", "YYYYYNYYYNYNYYYYYNNNNYYYYYYNYYYYYNYYYNYY", "YYYYYYNYYNYYNYNNYYYNNYNNYNNNYYYNNNYYNNYY", "YYYYNYYNNYYYYNYYYYNYYNYYYYYYYNYNYYNYYYYN", "YNNYYYYNNYNYYYYNNNYYNYYNYYYNYYYYYYYNYYNY", "NNYYYNNYYNNYYNYYYNYYNYYNYYNYYYYNYNYYNNYY", "YYNYNYYYNNNYYYNYYYNYYYNNNYYYYYNYNNYYYYYN", "YNNYYNYYYYYNYYYNYNYNYYNNYYNYYYNYYYYYNYYN", "YNYYYYNYYYYYNNYYYYYYNYYNNNYNYYYYYYYNYNYY", "YNYNNYYNYNYYNNYYYYNNYYYNNYYNYYNNYYYYYYYN", "YYYYYYNYYYNYYYNNYYNNYYNYYNYNYYYYNYYYYYYN", "YNNYNYNYNYYNYYNNYNNYNYNYYYYYYYNNYYYYYYYY", "YYYYYYYYNYYYYYYYNYYYNNYNYYNNYYNYYYYYYNNY", "YYYYNNYYNNYNYYYNYNNYYYYNNNYYYNYYNNNYNNYN", "YYYYYNYNYYNYYNNNYNNNNNYYNNYYYYNYYYYYNNYY", "YNYYYNNYYYYNYNNYYYNNYNNYYNYNNYYYNYYYYYYN", "NYYNNNNYNNYYNYYNNYNYNYYNNNNNYYNNYNYNNYYN", "NYNNNYYNYYYYYYYYNYNNYNYYYYYYYYNYYYNYYYYN", "NNYYNYNYYYNNYYNNYYYNYYNYYYYYYYNNYNYYYYNN", "YYYNNYNYNNNNNNYYNNYYNYYNYYYNNNYYNYYYYYNY", "YNYYYYYYYYNYNNYYYNNYNYYYNYYNYNNYNYYYYYYY", "NYYNNYNYYYYYNYNYYNNNNYYYYNYNNNYYYNYYNYYY", "NYNNYYNYYNYNYYYYNYYYNYYYYYNYYYYNYYNYYYYY", "YNYNYNNYNYYYNNNYNYYNNYYNNNYNYYNYNNNNYYYY", "NYYNYYYYYYYYYYYYYYYNYYYNYNYYNYYYYYYNYYNN", "YYNYNYYNYYYYYYYYYNYYYYYNNNYYYNNNYYYNYNYN", "NYYYYYYYYYNNYNYNNYNYNNNYNYYNYNNYYNNNYYNY", "NYYNYYNNYNYYYNYNYYYYNYNYYYNYYNYNNYYYNYNY", "NYYNYYNYYYNYYYNYYNYNYYYNNYYNYYYNNYYYYYYN", "YNYYNNNYYNNYYYYYYNYYNYNYYNYNYYNYYNYYYYYY", "YNYYYYYNYYYYYYYYYNYYYNYYYYNNYYNYYYNNYYNN", "YYYYYYYYNYYYNYYYYYYYNYYYYYYNNNNYYYNNYYYY", "YNYYYYNYYNYNYYYYYNNYNYYYYNYYYYYNYYYYNYYY", "NNYNNNNYYNYYNYYYNNNYYYYYYYYYYNYYYYYYYNYN", "YYYYNYYYNYYYYYYYNYYYYYNNYYYYNYNNYYNYYYNN", "YNNYYYYNYYNNYNNYYNYNNNNYYYYYNNYYNYNYYNNN"};
    int person1 = 39;
    int person2 = 20;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> friends = {"NYYYYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "NYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYNNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYNNYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNNYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYY", "NNNNYYNYNNYNYNYYYNYNYYNNNYNNNNNYNYYYYNNY", "YYYYYYYYYYYNYYYYYYYYNYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNNYYYYYYNYYYYYYYYYY", "YYYYNNYNYYNYNYNNNYNNNNNYYNYYYYYNYNNNNYYN", "YYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYN", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYNYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYN"};
    int person1 = 22;
    int person2 = 19;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> friends = {"NYNYNNYYYYNNYNNNNYNNNNNNNYYNNNYNYNNNNNYY", "YNYYNNYYYYYNNYYNNNNNNYYYYYNYNYYNNNNNYNNN", "NYNYYNNNNNYYYYYNNNYNNNNYYNNYYNYYYNNYNNYN", "YYYNYYNNYYNNNNYYNYNNNNNYYYNYNYYYNNYYNNNN", "NNYYNNYNNNYYYYYNYNNNYYYYYYNNYYNYYNYNNNYY", "NNNYNNYNYNNYYNNYYNNYNYNNYYYNNYYNYNNYYNYN", "YYNNYYNNNYNNNYNNNNNNYYYNNNYNNNNYNYNNNNNY", "YYNNNNNNYNNNNYNNNNYNYYNYYYNYNYNYYYNYNYYN", "YYNYNYNYNYNYNNNNNYNNYNYYNYYYNNNNNYYNNNNN", "YYNYNNYNYNNNNYYYYNYNNNNYYYNNYNYNNYNYYYNY", "NYYNYNNNNNNNYYNNNYYNYYYNYYNNYNNNYYYNYNNY", "NNYNYYNNYNNNYYYNNNNYNNNNYNNNNYYNNYNNNYYY", "YNYNYYNNNNYYNNNYNYNNYYNYYYNNYNNYNNYNNNYN", "NYYNYNYYNYYYNNNYNNYNNNNYNNYNNYYYNYYNYNNN", "NYYYYNNNNYNYNNNNNNNYNNNYNNNNNNYNNNNNNNNY", "NNNYNYNNNYNNYYNNNNNYNNNNNYNNNNYNYYNNNNNY", "NNNNYYNNNYNNNNNNNYYNNYNNNYNYNYYNYNYYYNNY", "YNNYNNNNYNYNYNNNYNNNYNYNNNYNNNNYYNNNNNYY", "NNYNNNNYNYYNNYNNYNNYYNYYYYNYYNNYYNYNYNYY", "NNNNNYNNNNNYNNYYNNYNNNNYYNYNNNYYNNYNYNNY", "NNNNYNYYYNYNYNNNNYYNNYNYYYNYNYNNNYYNNNNY", "NYNNYYYYNNYNYNNNYNNNYNYNYYNYNNNYNNNNNNNN", "NYNNYNYNYNYNNNNNNYYNNYNNNNNYNNYYNYNNYNNY", "NYYYYNNYYYNNYYYNNNYYYNNNYNYNNYNYYYNNYNYN", "NYYYYYNYNYYYYNNNNNYYYYNYNNNYYNNYNYNYYNNY", "YYNYYYNYYYYNYNNYYNYNYYNNNNNYYNNYNNYNNNNY", "YNNNNYYNYNNNNYNNNYNYNNNYNNNYNYYNYNNYYNYY", "NYYYNNNYYNNNNNNNYNYNYYYNYYYNYYNYYNYYYYYN", "NNYNYNNNNYYNYNNNNNYNNNNNYYNYNYYYYYNNYNYN", "NYNYYYNYNNNYNYNNYNNNYNNYNNYYYNNNNYNNNNNN", "YYYYNYNNNYNYNYYYYNNYNNYNNNYNYNNYYNNYYYYN", "NNYYYNYYNNNNYYNNNYYYNYYYYYNYYNYNYYYYYYNN", "YNYNYYNYNNYNNNNYYYYNNNNYNNYYYNYYNNNYNNNN", "NNNNNNYYYYYYNYNYNNNNYNYYYNNNYYNYNNNYYNYY", "NNNYYNNNYNYNYYNNYNYYYNNNNYNYNNNYNNNYNYYY", "NNYYNYNYNYNNNNNNYNNNNNNNYNYYNNYYYYYNNNYN", "NYNNNYNNNYYNNYNNYNYYNNYYYNYYYNYYNYNNNYYY", "NNNNNNNYNYNYNNNNNNNNNNNNNNNYNNYYNNYNYNNY", "YNYNYYNYNNNYYNNNNYYNNNNYNNYYYNYNNYYYYNNY", "YNNNYNYNNYYYNNYYYYYYYNYNYYYNNNNNNYYNYYYN"};
    int person1 = 30;
    int person2 = 20;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> friends = {"NYYYYYNNYNNNYYYYYYNNNYYYYYNNYYYNYYNYNYYY", "YNYYYYNYYYYYYNNNNYNYYYYYNYYYNYYYYNNNYYNY", "YYNNYNNYYNNYYYNYYYNYYYNYNYYYYYNNYYYYNYYY", "YYNNYNYYNYYNYNNNYYYYNYNNYYYYNYYYYYYYYNNY", "YYYYNYNYNYYYYNYNNYYNNNYYYYNNNYYYYYYYNNYY", "YYNNYNNYYNYYYNNNNNYYYYYYYNYYNNYYYYYNYYNY", "NNNYNNNYYNNNNNYYYYNYYYNYYNYNNYNNYNYNYYYY", "NYYYYYYNNYYYNYNYNNNYYNYYNNYYYNYYYYNYYYYN", "YYYNNYYNNYYNYYNNYYYYYYYNYYYYNYYYYYYYYYNY", "NYNYYNNYYNYYYYYYNNYYNYYYNNYNNYYNNYNYNNYY", "NYNYYYNYYYNYYYYYYYYYNNYNYNYNYNYNYYNYYYYY", "NYYNYYNYNYYNYYNNNYYYYYYNYYYYYYYNNYNNNYYY", "YYYYYYNNYYYYNNNYYYYNYYYYNYYYYYNNYYYYYYYY", "YNYNNNNYYYYYNNYYYNNYYYYNYNYNYNYYYYNYNNNY", "YNNNYNYNNYYNNYNYNYYNYYNYNYYNYYNNYYYYNYNN", "YNYNNNYYNYYNYYYNYYNNYYYYNYYNYNYYYYNYYNYY", "YNYYNNYNYNYNYYNYNYNYNYYYNNYYYYYYNYYYYNYN", "YYYYYNYNYNYYYNYYYNYYNYYNYNYNYYYYYNYNNYYY", "NNNYYYNNYYYYYNYNNYNYYYNYNYYNYNNYYYNNYNYY", "NYYYNYYYYYYYNYNNYYYNYYYYNNNYNYNNNYYYNYNY", "NYYNNYYYYNNYYYYYNNYYNYYYYNYNYYYYYNNYYYYN", "YYYYNYYNYYNYYYYYYYYYYNYYYYYNNYYYYNYNYYYY", "YYNNYYNYYYYYYYNYYYNYYYNYYNYYYYNYNYNNYYYY", "YYYNYYYYNYNNYNYYYNYYYYYNYNYNYNYYYYYYYYNY", "YNNYYYYNYNYYNYNNNYNNYYYYNYNYYYYYYYYNNNYY", "YYYYYNNNYNNYYNYYNNYNNYNNYNYNNYYYYYYYYNNY", "NYYYNYYYYYYYYYYYYYYNYYYYNYNNNYNYNYYYYYYY", "NYYYNYNYYNNYYNNNYNNYNNYNYNNNNNYYNNNNYNYY", "YNYNNNNYNNYYYYYYYYYNYNYYYNNNNNYNNNYYYYYY", "YYYYYNYNYYNYYNYNYYNYYYYNYYYNNNYYNYYNYYYY", "YYNYYYNYYYYYNYNYYYNNYYNYYYNYYYNYNYNYYNNN", "NYNYYYNYYNNNNYNYYYYNYYYYYYYYNYYNYNNNYYNY", "YYYYYYYYYNYNYYYYNYYNYYNYYYNNNNNYNYNNNNNY", "YNYYYYNYYYYYYYYYYNYYNNYYYYYNNYYNYNYYYYYY", "NNYYYYYNYNNNYNYNYYNYNYNYYYYNYYNNNYNNYYYY", "YNYYYNNYYYYNYYYYYNNYYNNYNYYNYNYNNYNNYYNY", "NYNYNYYYYNYNYNNYYNYNYYYYNYYYYYYYNYYYNYYN", "YYYNNYYYYNYYYNYNNYNYYYYYNNYNYYNYNYYYYNYY", "YNYNYNYYNYYYYNNYYYYNYYYNYNYYYYNNNYYNYYNY", "YYYYYYYNYYYYYYNYNYYYNYYYYYYYYYNYYYYYNYYN"};
    int person1 = 14;
    int person2 = 27;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> friends = {"NYNNNNNYNYNNNNNNNNNNNNNYYNNNNNNNNNNNNYYN", "YNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNYNNNNYY", "NYNNNNNNNYNNNNYNNNNNYNNNYNNNNNNYNNNNNYNN", "NNNNNYNNNNYNNNNNNNNNNYYNNNNNYNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNYNNYNNNNNNNYNNNNNYNNYNN", "NNNYNNNNYNYNNYYNNNNNNYNNNNNNNNNYNNYNNYNN", "NNNNNNNNYNNNNNNNNNNNNNNNNYNYNNNNNYNNNYNN", "YNNNNNNNNNNNNNNNNNNNYNYNNNNNNYNYNNNYNYNN", "NNNNNYYNNNNNNNNNNNNYNYNNNNNNYNNNNNNYNNYY", "YNYNNNNNNNNYNNNNNYNNNYNNNNNNNNNNNNNYNNNY", "NNNYNYNNNNNNNYNNNYYNNNNNNNYYNNNNNNYYNYNN", "NNNNNNNNNYNNNYNNNNNNNNYNNNNNYNYYNNYYYNYY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNYNYNNNYNYNNY", "NNNNNYNNNNYYNNNNNNNNNYYYNNNYNNNNYNNNNNNY", "NNYNNYNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNYNNYNNYYN", "NNNNNNNNNNNNNNYNNYNYNNYNNNNNNYYNNNNNNYYN", "NNNNYNNNNYYNNNNNYNNNNNNNNNNYNNNNNNNYNNNY", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNYNNYNN", "NNNNNNNNYNNNNNNYYNNNNNNNYNNNNNNNNNNNNNNY", "NNYNYNNYNNNNYNNNNNNNNNYNNYYYYYNNNNNYNYNN", "NNNYNYNNYYNNNYNNNNYNNNNNNNYNNYYNYNNNNYNN", "NNNYNNNYNNNYNYNNYNNNYNNNYNYNNNNNNYYYNNNY", "YNNNNNNNNNNNNYNNNNNNNNNNNNYNNNYNNYNYNNNY", "YYYNNNNNNNNNNNNYNNNYNNYNNYYNNNYNNNYNYNNY", "NNNNNNYNNNNNNNNNNNNNYNNNYNNNNNNYNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNYYYYYNNNNNNYNNNNNNNY", "NNNNNNYNNNYNNYNNNYNNYNNNNNNNNYNNNNYNNYYN", "NNNYYNNNYNNYYNNNNNNNYNNNNNNNNNYNNYNNYNNY", "NNNNNNNYNNNNNNNNYNNNYYNNNNNYNNYNYYNNNYNN", "NNNNNNNNNNNYYNYNYNNNNYNYYNNNYYNNNNNNNNNY", "NYYNNYNYNNNYNNNYNNNNNNNNNYYNNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNNNNNYNNNNNNNYNNNNNNNNNY", "NYNNNNYNNNNNNNNNNNNNNNYYNNNNYYNNNNNNNNNY", "NNNNYYNNNNYYYNNYNNYNNNYNYNNYNNNNNNNNNNNY", "NNNNNNNYYYYYNNNNNYNNYNYYNNNNNNNNNNNNYNNY", "NNNNNNNNNNNYYNNNNNNNNNNNYNNNYNNNNNNYNYNN", "YNYYYYYYNNYNNNNYYNYNYYNNNYNYNYNYNNNNYNNN", "YYNYNNNNYNNYNNNYYNNNNNNNNNNYNNNNNNNNNNNY", "NYNNNNNNYYNYYYYNNYNYNNYYYNYNYNYNYYYYNNYN"};
    int person1 = 37;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> friends = {"NNNNNNYNNNNNNYNYNNNNNNNNNYYYNNNYNYNNNNNY", "NNNNNYNYNNYNNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNYNNNNNNYNNNNNYNNYNNYNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNNN", "NNYNNNNNNNNNNNNYNYNNYNNYNNYNNNYYNNNNNNNN", "NYYNNNNNNNNNNYNYNNNNNNNNNYNNNYNNNNNNNNNN", "YNNYNNNYNNNNNYNNNNNYNNNNNYNNYNNNNNNNNNNN", "NYNNNNYNNNYYNYNNYNYNNNNNNYNNYNNNNNNNYNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYYNNYNNNNNNNNYNNYNYNNNNNNY", "NYNNNNNYNNNNNNNNNNYYNNNNNNNNNNYNYNNNNNNN", "NNYNNNNYYNNNNNNNNNNNYYNNYNNNNNYYNNNNYNNN", "NNNNNNNNYNNNNYNNNNNYNNNYNNNNNYNNNNNNNNYN", "YYNNNYYYNNNNYNYNYYNYYYYNYNNNYYNYYYYYYNYN", "NYNNNNNNNYNNNYNYNNNNNNYNNNNNNYNNNNNNNNNN", "YNNNYYNNNYNNNNYNNNYNNNYNNNNNNNYYNNYNNNNN", "NNNNNNNYNNNNNYNNNYNNNNNNNNNNYYNNNNNNYYNN", "NNNNYNNNNNNNNYNNYNNNNYNNNNNNNNNNNNYYYNNN", "NNYNNNNYNYYNNNNYNNNYNNNNNNYNNNYNNNNNNNNY", "NNNNNNYNNNYNYYNNNNYNYNNNNNNYNNNYNNNNNNNN", "NNNNYNNNNNNYNYNNNNNYNNNNNNNNNNNNNNYYYNNY", "NNNNNNNNNNNYNYNNNYNNNNNNNYNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYYYNNNNNNNNNYNNNNNNNNNYNNYN", "NNNNYNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNYNYNNNNNNNNNNNNYNNNNNNNNNYNYN", "YNNNNYYYNNNNNNNNNNNNNYYNNNYNNNYNNNNNNNNY", "YNNNYNNNNNNNNNNNNNYNNNNNYYNNNNYNNNNNNNNN", "YNYNNNNNNYNNNNNNNNNYNNNNNNNNNNYNNNNNNNNN", "NNNYNNYYNNNNNYNNYNNNNYNNNNNNNNNNYNNNYNNN", "NNNNNYNNNNNNYYYNYNNNNNNNNNNNNNNNYNNNNNNN", "NNYYYNNNYYYYNNNYNNYNNNNYNYYYNNNNNNNNNYNY", "YNNNYNNNNNNYNYNYNNNYNNNNNNNNNNNNNNNYNNYN", "NNNNNNNNNYYNNYNNNNNNNNNNNNNNYYNNNNNNNNNN", "YNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNYNN", "NNNNNNNNNNNNNYNYNYNNYNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNYNNNYNNYNYNNNNNNNNYNNNNNNNN", "NNNNNNNYNNNYNYNNYYNNYNNNYNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNYNNNNYN", "NNNNNNNNNNNNYYNNNNNNNNYNYNNNNNNYNNNNNYNN", "YNNNNNNNNYNNNNNNNNYNYNNNNYNNNNYNNNNNNNNN"};
    int person1 = 30;
    int person2 = 13;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> friends = {"NNYYYNYNNNYYYYYYNYNYNYNYNNYYNNNYYYNNNYYY", "NNYYYYYYYYYYYYYNYYYYYYNYYNYYYYYYYYYYYYYY", "YYNYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYNNYYYNYYYYYYYYYYNYYYYYYYYYNYYYYYYYNYN", "YYYNNYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYY", "NYYYYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYNYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "NYYYYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYNYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "NYYYYYYNYNYYYYYYYYYNNYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYNYYYYYYNYYYYYYNNYYYNYNYYYYYNYY", "YYYYYYYYYYYNYYYYYNYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYNNYY", "YYYYYYYYYYYYYNNYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYNNYYYYYYYYYYYYYYNNYYYYYYYYY", "YNYYYYYYYYYYYYYNYNYYYYYYYYYYNNYYYYYYYYYY", "NYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYNNYYYNYNYYYYYYYNNYYNYYYNYYYNYY", "NYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYNYYYYYYYYYNYYYYYYYYYNYYYYYYYYYY", "NYYYYYYYYNYYYYYYYYYYNYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYY", "NNYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYNYYNYYYYYYYYYY", "NYYYYYYYYYNYYYYYYYYYYYYYNYYYYYNYYYYYYYYY", "NNYYYNYYYYNYYYYYYNYYYYYYYNYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYNYYYYYNYYNYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYN", "NYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYYYNYYY", "NYNNNYNYYYNNNNNNYNYNYNYNYYNNYNYNNNYYYNNN", "NYYYYYYYYYYYYYNYYYYYNYYYNYYYYYNYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYNYYYYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "NYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "NYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYYYNYYY", "YYYNYYYYYYNYNYYYNNYYYYYYYYYYYNYYYYYYYNNY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYNNY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 29;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> friends = {"NYYNYYNYYNYYNNYNYYNYNYYNYYYYNNNNNYYYYYNN", "YNNNYYYYNNYNNNYNYYYNNYNNYNYYNYYYNNNNNNYN", "YNNYNYNYNYNYNYYNNYNNYYYYYNNYYNNYNNYYNNNY", "NNYNYNYYYNYNYNNYNNNYYNYYYYNYNNYNYNYYYNNN", "YYNYNNNYNYYYYNNYYYYYNNYNNYYNYYNYYNYYNYNY", "YYYNNNYYYYYNYNNNYNYNYYYNNNYNYNYYYYNNYYNY", "NYNYNYNYNNYNYNYNNYNNYYYYNNYYYNYNYYNNYNNN", "YYYYYYYNYNNYYYYNNNNNNNYYYYYYNYNNNYNNNYNY", "YNNYNYNYNYYYNNYYYYYNNNYNNYNNYNYYYNYYYNNY", "NNYNYYNNYNYNNYNYNYYNNYNYYNYYYYNNYNYNYYYN", "YYNYYYYNYYNYNYYNNYYYYYYYNNYNNNYNYNNYNNNN", "YNYNYNNYYNYNNNYNYYYYYNNYNNYYNYYNYYNNYNYN", "NNNYYYYYNNNNNYYYNYYNYNNNYNNNNYYNNNNNYNYN", "NNYNNNNYNYYNYNNYYYYYYNNNNNYYNNYNYYYYNYYY", "YYYNNNYYYNYYYNNNYNYNYYNYYYNNYYNNNYYYNNYN", "NNNYYNNNYYNNYYNNYNNYNYNNNNNNNYYNNYNYYYYN", "YYNNYYNNYNNYNYYYNYYYYYYYYYYNYNNYYNNNYNNN", "YYYNYNYNYYYYYYNNYNYYYNNNNYNNYNYYYNYNYYYN", "NYNNYYNNYYYYYYYNYYNNYYYYYNNYNYNNNYNYNNNY", "YNNYYNNNNNYYNYNYYYNNYNYNNNYNYNNNNYYNNNNY", "NNYYNYYNNNYYYYYNYYYYNYNNYNYNYNNNNNNNYYYN", "YYYNNYYNNYYNNNYYYNYNYNYNNNYNNNYYNYYYYNNY", "YNYYYYYYYNYNNNNNYNYYNYNNNYNYNNYNYNNNYNNY", "NNYYNNYYNYYYNNYNYNYNNNNNNYYYNYNNYNNNYYYN", "YYYYNNNYNYNNYNYNYNYNYNNNNNNYYNNYNNNYNYYY", "YNNYYNNYYNNNNNYNYYNNNNYYNNNYYNNNNNYNYYNN", "YYNNYYYYNYYYNYNNYNNYYYNYNNNYYNYNNNYYYYYY", "YYYYNNYYNYNYNYNNNNYNNNYYYYYNYYYYYYYNYYNN", "NNYNYYYNYYNNNNYNYYNYYNNNYYYYNNYNNYYYNYYN", "NYNNYNNYNYNYYNYYNNYNNNNYNNNYNNNNNNNYNNYN", "NYNYNYYNYNYYYYNYNYNNNYYNNNYYYNNYYYNNYNNY", "NYYNYYNNYNNNNNNNYYNNNYNNYNNYNNYNYYNNYNYY", "NNNYYYYNYYYYNYNNYYNNNNYYNNNYNNYYNYNNNYNY", "YNNNNYYYNNNYNYYYNNYYNYNNNNNYYNYYYNNNYNYY", "YNYYYNNNYYNNNYYNNYNYNYNNNYYYYNNNNNNNYNYY", "YNYYYNNNYNYNNYYYNNYNNYNNYNYNYYNNNNNNNYYN", "YNNYNYYNYYNYYNNYYYNNYYYYNYYYNNYYNYYNNYNN", "YNNNYYNYNYNNNYNYNYNNYNNYYYYYYNNNYNNYYNYN", "NYNNNNNNNYNYYYYYNYNNYNNYYNYNYYNYNYYYNYNN", "NNYNYYNYYNNNNYNNNNYYNYYNYNYNNNYYYYYNNNNN"};
    int person1 = 22;
    int person2 = 38;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> friends = {"NYNNYNNNNNNYNNNYNNNYNYYNNNYNNNNNNNNYNNNY", "YNNNYYNNYYYNYYNNNNNNYNNNYNNNNNYNYNYNYNYN", "NNNYNNNNYNNNYNNYYNYNNYNNYYNNNNYNNYNYYNNY", "NNYNNYYNYYNYNNYYNNNYYYNNNYNNNNNYNNNYYNNN", "YYNNNNNYYYYNYYYNNYNYYYYNYNYNYNNYNYNNNNNN", "NYNYNNNNNNNNYYNYNNNYNNYNNNNNNNNNNYYNNNNN", "NNNYNNNNNNNYNNYNNNNNYYNNNNYNYYYNYYNYNNYY", "NNNNYNNNNYNYYNNNYNNNYNNYNNNNYNNYNNYYYNYN", "NYYYYNNNNNNYNYNNNNYYYNNNNYYNNNNNNNYYNNNN", "NYNYYNNYNNNYNNNNNNNNNYNNNNNNNYNNNNNNNNYY", "NYNNYNNNNNNNNYYYYNNYNNNYNNNNNYNNNYYNNNNY", "YNNYNNYYYYNNNNNNNYYNNNNYYYNNNNNNNNYNNNNN", "NYYNYYNYNNNNNNNNNNYNNNNNNNNNNNNNNNYYNNYN", "NYNNYYNNYNYNNNYNNNYYNYNNYNNNNNNNYNNNNNYN", "NNNYYNYNNNYNNYNYNNYNNYYNYYNYYNNNNNNNYNNN", "YNYYNYNNNNYNNNYNNYNYNNNNNNYNNNNNNNYYNYNY", "NNYNNNNYNNYNNNNNNYYYNNNNNNYNNNYYYNYYYNYN", "NNNNYNNNNNNYNNNYYNNNNNNNNYNYNNNNNYYYNNNN", "NNYNNNNNYNNYYYYNYNNNNYYYNNYNYNYYYNNYNNNN", "YNNYYYNNYNYNNYNYYNNNNYNNNNYNYYNNNNNNNNNN", "NYNYYNYYYNNNNNNNNNNNNNYNNYNYNNYNYYYYNNNN", "YNYYYNYNNYNNNYYNNNYYNNYYNYNNYYYNNYNYNYNN", "YNNNYYNNNNNNNNYNNNYNYYNYNNNNNYNNNYNNNYNN", "NNNNNNNYNNYYNNNNNNYNNYYNYNNNNNYNNNNNNYYN", "NYYNYNNNNNNYNYYNNNNNNNNYNNNNYYYNNYYNNNNN", "NNYYNNNNYNNYNNYNNYNNYYNNNNNNNNNYNNNNNNNY", "YNNNYNYNYNNNNNNYYNYYNNNNNNNNYNNNNNYYNNNY", "NNNNNNNNNNNNNNYNNYNNYNNNNNNNNNNNNNYNNNNN", "NNNNYNYYNNNNNNYNNNYYNYNNYNYNNYNNNNNNYYNY", "NNNNNNYNNYYNNNNNNNNYNYYNYNNNYNYYNYNNYNYN", "NYYNNNYNNNNNNNNNYNYNYYNYYNNNNYNNNNNNNNNY", "NNNYYNNYNNNNNNNNYNYNNNNNNYNNNYNNNYYNYNNN", "NYNNNNYNNNNNNYNNYNYNYNNNNNNNNNNNNNYNYNNN", "NNYNYYYNNNYNNNNNNYNNYYYNYNNNNYNYNNNNNNNN", "NYNNNYNYYNYYYNNYYYNNYNNNYNYYNNNYYNNNYNYY", "YNYYNNYYYNNNYNNYYYYNYYNNNNYNNNNNNNNNYYNY", "NYYYNNNYNNNNNNYNYNNNNNNNNNNNYYNYYNYYNNYN", "NNNNNNNNNNNNNNNYNNNNNYYYNNNNYNNNNNNYNNNN", "NYNNNNYYNYNNYYNNYNNNNNNYNNNNNYNNNNYNYNNN", "YNYNNNYNNYYNNNNYNNNNNNNNNYYNYNYNNNYYNNNN"};
    int person1 = 21;
    int person2 = 34;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> friends = {"NNYNNYNYYYNNNYNYNYNNYNYYYYNYYNYYNYYNNNNN", "NNYYYYNYYNYNYYYNNYYYYYYYNNNYNNNNYNYYYNNY", "YYNNNNYYYYYNNNYNYYYYNYYNNNNNYYNYYYYYNNYN", "NYNNYNNYNYYYYYNNYYNNYYNYNYNYYNYYYYYYYYNY", "NYNYNYYNYYYYNNYNNYYNNYNYNNNYYYNYNNYNYNNY", "YYNNYNYYYNYYYNYNYYNYYNNYYNYNNNNNNNNYNNNY", "NNYNYYNNNNYYNNYYNYYYYYNNYYNNNYYNYNNNYYNY", "YYYYNYNNYYYYYNNNYYNNYYYYYYYYYYYNYNYYNNNY", "YYYNYYNYNYYYNNYYNYNNNYNNYYNYYYYNYNYYNNYY", "YNYYYNNYYNNNNYYNYYYYYYNYNYYNNNYYNYYNNYNN", "NYYYYYYYYNNYNYNYNYNYYYYYYYYNYYNYYNNYYYNN", "NNNYYYYYYNYNYNYYYNYYYNNYNYYYYYYNYYNYYYYN", "NYNYNYNYNNNYNYNNNYNNNNYYNYYNYYYNNNYNYNYN", "YYNYNNNNNYYNYNNYYNNYYYYYNNYNNNNYNYNYNYNY", "NYYNYYYNYYNYNNNYNYYYYNYNNYYYYYNNNYNYYNYN", "YNNNNNYNYNYYNYYNNYYNNNYNNNNYYNYYYYNNNYYN", "NNYYNYNYNYNYNYNNNYYYNYYNYYYYYNNYYYYYYYYN", "YYYYYYYYYYYNYNYYYNYNYYNYNNNNYYNYYYNNNNYY", "NYYNYNYNNYNYNNYYYYNYNNYYYYYNNYNYNNNNYYYN", "NYYNNYYNNYYYNYYNYNYNYNNYNYYNYYYYNYYNYYNY", "YYNYNYYYNYYYNYYNNYNYNYNNYYNYYNNYYYYYNYYN", "NYYYYNYYYYYNNYNNYYNNYNNYYNYYYYYNYNYNYYNN", "YYYNNNNYNNYNYYYYYNYNNNNYYYYYYYYYNNYNNNNY", "YYNYYYNYNYYYYYNNNYYYNYYNNYYYYYNYYNNNNNYY", "YNNNNYYYYNYNNNNNYNYNYYYNNNYYYNNNYNNYNNYY", "YNNYNNYYYYYYYNYNYNYYYNYYNNYNYYNYNYYYNNYN", "NNNNNYNYNYYYYYYNYNYYNYYYYYNNYYYNYYNNYYYN", "YYNYYNNYYNNYNNYYYNNNYYYYYNNNYYYYYNYNNNYY", "YNYYYNNYYNYYYNYYYYNYYYYYYYYYNNNYYYNYNYNY", "NNYNYNYYYNYYYNYNNYYYNYYYNYYYNNYYYYYYYYNN", "YNNYNNYYYYNYYNNYNNNYNYYNNNYYNYNYYYYNNYYY", "YNYYYNNNNYYNNYNYYYYYYNYYNYNYYYYNNNNYNNNY", "NYYYNNYYYNYYNNNYYYNNYYNYYNYYYYYNNYNNYNYN", "YNYYNNNNNYNYNYYYYYNYYNNNNYYNYYYNYNYNNYNY", "YYYYYNNYYYNNYNNNYNNYYYYNNYNYNYYNNYNYNYYY", "NYYYNYNYYNYYNYYNYNNNYNNNYYNNYYNYNNYNYYNN", "NYNYYNYNNNYYYNYNYNYYNYNNNNYNNYNNYNNYNYYY", "NNNYNNYNNYYYNYNYYNYYYYNNNNYNYYYNNYYYYNYN", "NNYNNNNNYNNYYNYYYYYNYNNYYYYYNNYNYNYNYYNN", "NYNYYYYYYNNNNYNNNYNYNNYYYNNYYNYYNYYNYNNN"};
    int person1 = 0;
    int person2 = 36;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> friends = {"NYYNYYYYNYYYNYYNYYNYNNYYYYYNNYYYYYYNYYNN", "YNYYYNYNYYYYYYNYYNNNYNYYYYYNYYYYYYYYYYYY", "YYNYYNYYYNYNNYYNYYYYYNYYYNNNYYYYNYNYYYYY", "NYYNNNYNYYYYYNYYYYNYNNNYYYYNYYNNYYNYNNNN", "YYYNNYYYYYYNNYYNYYYYNNNNYYNYYYYYNNNNNYYY", "YNNNYNNYYNYNNYNNNNYYYYYYYYNYNNNYYYYYYYNY", "YYYYYNNYYNYNNNYNYNYNNYYYNNNYNYYYYYYNYYNY", "YNYNYYYNNNNYNYYNNYNNYNNNYYYNNNNNNYYNYYYY", "NYYYYYYNNNYYYNNYYYYYYNYNYNYYYYYNNNYNNNYN", "YYNYYNNNNNNYYNYYYYNNYYNYYNNYYNYNYNYNNNNN", "YYYYYYYNYNNYNNYYNYYYYYYNNNYYNNYNNNNNNYYY", "YYNYNNNYYYYNNYYNYNNYYYYYYYYNYYYYNNYYYNNY", "NYNYNNNNYYNNNYYYNYYYYYNYYYYYYNYYYYNYYNYY", "YYYNYYNYNNNYYNYNYNYNYYNYNNYNNYYYYYNYYNNY", "YNYYYNYYNYYYYYNNYYYYYYYYYYNNNYNYYYYYNYYY", "NYNYNNNNYYYNYNNNYNYYNYYYNNNYYYYYYNNYNNNN", "YYYYYNYNYYNYNYYYNNYNNNYYYNNYYYYYYYNYNYNN", "YNYYYNNYYYYNYNYNNNYYYYYYNNYNYNYNYYYNYYNY", "NNYNYYYNYNYNYYYYYYNNYYYNYYYNNYYNYYNYYNYY", "YNYYYYNNYNYYYNYYNYNNYYYYYYYYYYNNYYNYNNNY", "NYYNNYNYYYYYYYYNNYYYNNNYYYYYNNYNYNYYYYNY", "NNNNNYYNNYYYYYYYNYYYNNYYNYYYYYYNNYYYYYYN", "YYYNNYYNYNYYNNYYYYYYNYNNYNYYNYYNYNNYYNYY", "YYYYNYYNNYNYYYYYYYNYYYNNYNNYYYYNYNNYNYNY", "YYYYYYNYYYNYYNYNYNYYYNYYNYYNYNYYYYNNYNYY", "YYNYYYNYNNNYYNYNNNYYYYNNYNYNNYNYYNYNYYNN", "YYNYNNNYYNYYYYNNNYYYYYYNYYNNNYYYYYYNNNYN", "NNNNYYYNYYYNYNNYYNNYYYYYNNNNYNYNNNNYNNNY", "NYYYYNNNYYNYYNNYYYNYNYNYYNNYNNYYYYYNYYYY", "YYYYYNYNYNNYNYYYYNYYNYYYNYYNNNYYYNNNNNNY", "YYYNYNYNYYYYYYNYYYYNYYYYYNYYYYNYYYYYYYNN", "YYYNYYYNNNNYYYYYYNNNNNNNYYYNYYYNNYYYYYYN", "YYNYNYYNNYNNYYYYYYYYYNYYYYYNYYYNNNYYYYYY", "YYYYNYYYNNNNYYYNYYYYNYNNYNYNYNYYNNNYYYYN", "YYNNNYYYYYNYNNYNNYNNYYNNNYYNYNYYYNNYYYYY", "NYYYNYNNNNNYYYYYYNYYYYYYNNNYNNYYYYYNYNNN", "YYYNNYYYNNNYYYNNNYYNYYYNYYNNYNYYYYYYNNNY", "YYYNYYYYNNYNNNYNYYNNYYNYNYNNYNYYYYYNNNNN", "NYYNYNNYYNYNYNYNNNYNNYYNYNYNYNNYYYYNNNNN", "NYYNYYYYNNYYYYYNNYYYYNYYYNNYYYNNYNYNYNNN"};
    int person1 = 7;
    int person2 = 15;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> friends = {"NYYNYNNNYNNNYNNNYYNYNNYNYNNNNNYNNYYNYNNN", "YNNNNNYNNYYNYNYNNYNNYNYNYNNYNYNNNNNNNYYY", "YNNNYNNNNNNNNYYYNNNYYNYNNNNNYNYNYYNYYYNY", "NNNNYNNYNNYNNNNNNNYNYNNNNNNNNYNNNNNNYYYN", "YNYYNNNNNNYNNNNYNNNYNYYNNNNNNYNYNYYNNNNN", "NNNNNNNNNNYNNNYNNNYNNYYYNNNNYYNYYYNNNNYY", "NYNNNNNYNNNYYNYYNYYYYNNYNYNNNNYYNNNNYYNY", "NNNYNNYNNYNNNNNNNYNNNNNYNNNNYNYNNYNNNNNN", "YNNNNNNNNNNNYNNNYNYYNNNNNNNYYNYNNYNNYYNY", "NYNNNNNYNNYNNYNNNNNNNNNYNNNNNNNYNYNNNNNN", "NYNYYYNNNYNYNNNYYNNYYNYNNYNNYYNYYNYYNNNY", "NNNNNNYNNNYNNNYNNNYYNNNNNYYNNNNNNNNYNNNN", "YYNNNNYNYNNNNNNNNNYNYYYYNNNNYNYNNNNYNYNN", "NNYNNNNNNYNNNNNNNYNNNYNYYNYNNNYNNNYNNNNY", "NYYNNYYNNNNYNNNNYNNNYNNNNNNNYNYYNYNNNNNN", "NNYNYNYNNNYNNNNNNNNNNYNYNNNNNNNNNNNYNNYN", "YNNNNNNNYNYNNNYNNYYNNNNNNNYNYNNNNNNNYNNN", "YYNNNNYYNNNNNYNNYNNNYYNNNYNNNNYYNYNNNNNN", "NNNYNYYNYNNYYNNNYNNNNNYYNNNNNYYYYNNYNYNY", "YNYNYNYNYNYYNNNNNNNNNYNNNNNNNNNNYYNNNNYN", "NYYYNNYNNNYNYNYNNYNNNYYNYYYNNNNNYNNYNYNN", "NNNNYYNNNNNNYYNYNYNYYNYNNNNNNNYNNYNNNNNN", "YYYNYYNNNNYNYNNNNNYNYYNYNNNNYYNNNYNNNYNN", "NNNNNYYYNYNNYYNYNNYNNNYNNNNNNNYNNNNNNNNN", "YYNNNNNNNNNNNYNNNNNNYNNNNYNNNNYNYNYNNNNN", "NNNNNNYNNNYYNNNNNYNNYNNNYNNYNNNNNNNNNYYY", "NNNNNNNNNNNYNYNNYNNNYNNNNNNNNYYYYNYYNNYN", "NYNNNNNNYNNNNNNNNNNNNNNNNYNNYYYNYNYYNNNY", "NNYNNYNYYNYNYNYNYNNNNNYNNNNYNYNNNNNYYNNN", "NYNYYYNNNNYNNNNNNNYNNNYNNNYYYNNNNNYNYYNN", "YNYNNNYYYNNNYYYNNYYNNYNYYNYYNNNNNYNNYYYN", "NNNNYYYNNYYNNNYNNYYNNNNNNNYNNNNNNNYNNNNY", "NNYNNYNNNNYNNNNNNNYYYNNNYNYYNNNNNNYNNNNY", "YNYNYYNYYYNNNNYNNYNYNYYNNNNNNNYNNNNNNNNN", "YNNNYNNNNNYNNYNNNNNNNNNNYNYYNYNYYNNNYNNN", "NNYNNNNNNNYYYNNYNNYNYNNNNNYYYNNNNNNNNYYN", "YNYYNNYNYNNNNNNNYNNNNNNNNNNNYYYNNNYNNNYN", "NYYYNNYNYNNNYNNNNNYNYNYNNYNNNYYNNNNYNNNN", "NYNYNYNNNNNNNNNYNNNYNNNNNYYNNNYNNNNYYNNN", "NYYNNYYNYNYNNYNNNNYNNNNNNYNYNNNYYNNNNNNN"};
    int person1 = 10;
    int person2 = 30;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> friends = {"NYYYNNNNYYYYYNNYYNYYNYYYYYNYYYNYYNYYNYYY", "YNYYYNNNNYYYYYNNYYYNYYNYNNNNNNNYNYYNYYNY", "YYNYYYNYNYYYYYNYYYNYYYNYNYYYYYYNNYNNYNYN", "YYYNYYNNYYNYYYNYYYYYYYNNNYYYNNNYYNNYYNYN", "NYYYNYNNNNNYNYYYNNNNNNNNYYNYYYNNYYNNYNYN", "NNYYYNNYNYYNYNNYNYYYNNYNYNYYNYNNYNNYNYNN", "NNNNNNNYYYNNNYYNYNYNYNNNNYNNNYYYYYYNYYNY", "NNYNNYYNNYNYYYYYYYNYYYYNYNYYNYYYNYNNYNYY", "YNNYNNYNNNYNYYNYNYYYNYNNNNYNYNYYNYYYYNYN", "YYYYNYYYNNYYYNYYYYYYYYYYYYYNYNYYYYNNYNNY", "YYYNNYNNYYNYYNYYYNNYYYNNYNYNNYYYNNNNYYNY", "YYYYYNNYNYYNYYYYYYNNYYNYYNYNYYYYYYYNYYYY", "YYYYNYNYYYYYNNNYYYNYYYNYYNYNNYYNYNNYNYYN", "NYYYYNYYYNNYNNNYYYYYYNYNYYNNNYYYYYYNYYYN", "NNNNYNYYNYYYNNNNNNYYYYYYYNNNNYYNYNYYNNNN", "YNYYYYNYYYYYYYNNNYNYNYYYYNYYYNYYYYNYNYYY", "YYYYNNYYNYYYYYNNNYNYYNYNNYYNYNYNYNYNYYNY", "NYYYNYNYYYNYYYNYYNNNNNNNYYYYYYNNNYNYNYYY", "YYNYNYYNYYNNNYYNNNNYNYNNYNNNYYYYYYNYYYYY", "YNYYNYNYYYYNYYYYYNYNYYYYNNNYYYNNYNNNNYNY", "NYYYNNYYNYYYYYYNYNNYNYYYYYYNYYNNYYYNYNYY", "YYYYNNNYYYYYYNYYNNYYYNNYYNNYYYYNYYYNNYYY", "YNNNNYNYNYNNNYYYYNNYYNNYNYYYYNYYNYNNYNYN", "YYYNNNNNNYNYYNYYNNNYYYYNYYYYYNYYYYYNYNYY", "YNNNYYNYNYYYYYYYNYYNYYNYNNYYYYNYNYNNYNNN", "YNYYYNYNNYNNNYNNYYNNYNYYNNYYNNNYNYYYNYYN", "NNYYNYNYYYYYYNNYYYNNYNYYYYNNNYYYNNNYYYNY", "YNYYYYNYNNNNNNNYNYNYNYYYYYNNYYNNYNNYNYYY", "YNYNYNNNYYNYNNNYYYYYYYYYYNNYNNYNNYYYYYNY", "YNYNYYYYNNYYYYYNNYYYYYNNYNYYNNYYYYNYNNYN", "NNYNNNYYYYYYYYYYYNYNNYYYNNYNYYNYYYYNYYNY", "YYNYNNYYYYYYNYNYNNYNNNYYYYYNNYYNYYYYNNNN", "YNNYYYYNNYNYYYYYYNYYYYNYNNNYNYYYNYNYNNYN", "NYYNYNYYYYNYNYNYNYYNYYYYYYNNYYYYYNYNNYNY", "YYNNNNYNYNNYNYYNYNNNYYNYNYNNYNYYNYNNYNYY", "YNNYNYNNYNNNYNYYNYYNNNNNNYYYYYNYYNNNYYYY", "NYYYYNYYYYYYNYNNYNYNYNYYYNYNYNYNNNYYNNNN", "YYNNNYYNNNYYYYNYYYYYNYNNNYYYYNYNNYNYNNNY", "YNYYYNNYYNNYYYNYNYYNYYYYNYNYNYNNYNYYNNNY", "YYNNNNYYNYYYNNNYYYYYYYNYNNYYYNYNNYYYNYYN"};
    int person1 = 5;
    int person2 = 34;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> friends = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNYYYYNNNNYYYNYYNNYNYNYYNYYNNNNNYYNNNYNY", "YYNNNNYYYYNNNYNNYYNYNYNNYNNYYYYYNNYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN"};
    int person1 = 35;
    int person2 = 36;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> friends = {"NNYNNYYYNNYYYYYYYYYYYYNNNNNNNYNNNYNYNYYN", "NNYNYYNYNYYNNNNYNYNNYYYNNYYYNYNYNYNNNNNY", "YYNYNYNNNYYYNYYYNYYYYYYYNYYNYYYYNNYNNNNN", "NNYNYYYYYYYYYYNNNNYYNYYYYNYNYYYYYYNYNYYN", "NYNYNNYYNYNYNNNYYYNNYYYNNNNNYYNNYYNYYYNN", "YYYYNNYYYNNYYYNNNYYYYYYYNNNYNNYYNYYYNNNN", "YNNYYYNYYNYYNYNNNYYYYYYNNYYYNYNNYYNYYNYY", "YYNYYYYNNYYYYYYYNNYYNNYYYNYYNYNYYNNYYYYN", "NNNYNYYNNYNNYNNYNNYYYYNNYNYNYYNYNYNNNYNY", "NYYYYNNYYNNNYYNYYYYYNNYYNYYYNNNYYYYYYYNY", "YYYYNNYYNNNNYYNNYNNYYYYNYNYYYYYNYNYNNNNY", "YNYYYYYYNNNNNYNYYNYYNYYYYYYNYNNYYYYNYNYY", "YNNYNYNYYYYNNNYNYNNNYYYYYYNNYNYNYYYYYNYN", "YNYYNYYYNYYYNNYYNNNYNYNYYNYNYYYYYYYNYYNY", "YNYNNNNYNNNNYYNYYYNYNNNYNYYYNYYYNYYYYYYY", "YYYNYNNYYYNYNYYNYNYYYYYYYYYNYYNNNNYNYNYN", "YNNNYNNNNYYYYNYYNYYYYNYNNNYNYNNYYYNNYYYN", "YYYNYYYNNYNNNNYNYNYYNNNYNNNYYYYNNYYNNYNN", "YNYYNYYYYYNYNNNYYYNYNNYNNNNNNYYYYYYYYYYN", "YNYYNYYYYYYYNYYYYYYNYNNYNYNYYNYYYYNYYYYN", "YYYNYYYNYNYNYNNYYNNYNYYYYNYYYNNYNYNYNNYY", "YYYYYYYNYNYYYYNYNNNNYNNYYNYYYYYYNNNYNNNN", "NYYYYYYYNYYYYNNYYNYNYNNNYNYNNYYYNYNNNYNY", "NNYYNYNYNYNYYYYYNYNYYYNNNYNYNYYNNYYNYYYN", "NNNYNNNYYNYYYYNYNNNNYYYNNYYNNNNYYNNYYNYY", "NYYNNNYNNYNYYNYYNNNYNNNYYNNYYYNNYNYYYNYN", "NYYYNNYYYYYYNYYYYNNNYYYNYNNNYYYYYYNNYYYY", "NYNNNYYYNYYNNNYNNYNYYYNYNYNNYNYNYNYNYNYY", "NNYYYNNNYNYYYYNYYYNYYYNNNYYYNYNYNNNNNNYN", "YYYYYNYYYNYNNYYYNYYNNYYYNYYNYNYYNNYNYNYY", "NNYYNYNNNNYNYYYNNYYYNYYYNNYYNYNYNNNNYYNN", "NYYYNYNYYYNYNYYNYNYYYYYNYNYNYYYNNNNNYNYY", "NNNYYNYYNYYYYYNNYNYYNNNNYYYYNNNNNYNNNYNY", "YYNYYYYNYYNYYYYNYYYYYNYYNNYNNNNNYNYYNNYY", "NNYNNYNNNYYYYYYYNYYNNNNYNYNYNYNNNYNYYYYN", "YNNYYYYYNYNNYNYNNNYYYYNNYYNNNNNNNYYNNYNN", "NNNNYNYYNYNYYYYYYNYYNNNYYYYYNYYYNNYNNYYY", "YNNYYNNYYYNNNYYNYYYYNNYYNNYNNNYNYNYYYNYY", "YNNYNNYYNNNYYNYYYNYYYNNYYYYYYYNYNYYNYYNN", "NYNNNNYNYYYYNYYNNNNNYNYNYNYYNYNYYYNNYYNN"};
    int person1 = 24;
    int person2 = 17;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> friends = {"NNNNNYNNNNYNNYNNYNNYNNNNNNNNNYNYYYNYNYNN", "NNYNNNNYYNYYYNNYYNYYNNNYYYNYNNNNNYYYNNNN", "NYNNNYYNNNNNNNNYYYNNNYNYYYNNNYYNNNYNYNYY", "NNNNNYYNNNNNNYNYYYNNNYNYNNNYNNNNNNYNNYNN", "NNNNNNYNYNNYNNNYYYYYYNYNYYNNNNNNNYYYNYNN", "YNYYNNNNYYNYNNYNNNNYYNYYNYNYNNNNYYNNNNNN", "NNYYYNNYNNNYYYNNYNNYYNNYNNNYNNNNNNYNNYYN", "NYNNNNYNYNNNNNNNYYYYNNNNNNYYNNNYNNYNNYYY", "NYNNYYNYNNYYNNNNNNNYNNYNYYYNNYYNNNNNYYYN", "NNNNNYNNNNNNNYNNYYNNNYYNNNNYNNNNNNNNYYNN", "YYNNNNNNYNNNNNYNYYNNNYNNNNNNNYNNNYYNYNYY", "NYNNYYYNYNNNNNNNYNNYNNNYYNYNNYYYNNYNYYNN", "NYNNNNYNNNNNNNNYNYNNNYNNNNNNYYYYNNNNYNNN", "YNNYNNYNNYNNNNYNNYNYNNYNNNNYNNNNNNNYNYNY", "NNNNNYNNNNYNNYNYNNNYNNNYYYYNYNNYNYNYNYNN", "NYYYYNNNNNNNYNYNNNNNNYNNNYNNYNNNNYNYNYNY", "YYYYYNYYNYYYNNNNNNNYYNYNYYYNNNNNNNNYNNYN", "NNYYYNNYNYYNYYNNNNYNNYYNNYNNYNNNNNNNNNNN", "NYNNYNNYNNNNNNNNNYNYNNYNNNNYYNNYNYNNNNYY", "YYNNYYYYYNNYNYYNYNYNNNYYNYNNNYNNYYNNNYNN", "NNNNYYYNNNNNNNNNYNNNNYYYNYNNYNNNNNNNNNNY", "NNYYNNNNNYYNYNNYNYNNYNNNYNYYYNYYNNYYYNYY", "NNNNYYNNYYNNNYNNYYYYYNNNNNNNYYNYYNNNNNNN", "NYYYNYYNNNNYNNYNNNNYYNNNYYYNYNNYYNNYNNNN", "NYYNYNNNYNNYNNYNYNNNNYNYNYNYNNNYNNNYNYNY", "NYYNYYNNYNNNNNYYYYNYYNNYYNYNYNNNYYNNYNNN", "NNNNNNNYYNNYNNYNYNNNNYNYNYNNNNNNYNNNNNNN", "NYNYNYYYNYNNNYNNNNYNNYNNYNNNYYNNNYNNNYYN", "NNNNNNNNNNNNYNYYNYYNYYYYNYNYNNNNNNNNNYNY", "YNYNNNNNYNYYYNNNNNNYNNYNNNNYNNNYNYNYYYNN", "NNYNNNNNYNNYYNNNNNNNNYNNNNNNNNNYYYNYNYYN", "YNNNNNNYNNNYYNYNNNYNNYYYYNNNNYYNNNNNNNYN", "YNNNNYNNNNNNNNNNNNNYNNYYNYYNNNYNNNYNYNYY", "YYNNYYNNNNYNNNYYNNYYNNNNNYNYNYYNNNYYNNYN", "NYYYYNYYNNYYNNNNNNNNNYNNNNNNNNNNYYNNYNYN", "YYNNYNNNNNNNNYYYYNNNNYNYYNNNNYYNNYNNYNYN", "NNYNNNNNYYYYYNNNNNNNNYNNNYNNNYNNYNYYNYNY", "YNNYYNYYYYNYNYYYNNNYNNNNYNNYYYYNNNNNYNNY", "NNYNNNYYYNYNNNNNYNYNNYNNNNNYNNYYYYYYNNNN", "NNYNNNNYNNYNNYNYNNYNYYNNYNNNYNNNYNNNYYNN"};
    int person1 = 19;
    int person2 = 21;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> friends = {"NNNNNNYNNNNNYNNYNNNNNNNNNNYYNYNNNNNNNNNN", "NNNNNNNNYYYNNNNNYNYNYNNNNYNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNYNNNNNYNNNNNNYNNNYNNNNNN", "NNNNNNNNYYYNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNYNYYNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNNNNNNNNNYYNNNNNNNNYNNN", "YNNNYNNYNNYNNYNYYNYYNYYNYYNNYNNNYNYYNYNY", "NNNNNNYNNNNNNNYNNYNNNNNNYNNNNNNNNNNNNNNN", "NYNYNNNNNYYNNNYNYNNNYNNNNNNNNNNNNNNNNNNN", "NYYYNYNNYNNYYNYNNYNNYNNYNNYYNYYYNYNNYNYN", "NYNYNNYNYNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNYNNNNNNYYNYNNNNNYNNNNNNYNNNNNNN", "NNNNNYYNNNNNNNYNNNNNNNNNYNNNNNNNNYNNNNNN", "NNNNYNNYYYYNNYNNNNYYNNNNNNNNNNNNNNNNNNNN", "YNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNYNN", "NYYNNNYNYNNNYNNNNNYNNNNNNNYYNYNNNNNNNNNN", "NNNNNNNYNYNNYNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NYNNNNYNNNNNNNYYYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNYYNYNNNNNNNNNNNNNYYNNYNYNNNYN", "NYNNNNNNYYNNNNNNNNNNNYNNNYNYNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNYNNYNNNNYNNYNNNNNNNN", "NNYNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNYYNYN", "NNNYYNYYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYNYNNNNNYNNNNNNNYNNNNNNNNNNNYYNNNNYN", "YNNNNYNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNYNNNYYNNNNNYNNNYNNNNNNNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNN", "YYYNNNNNNYNYNNNNYNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNYNNNNNNNYNNNNNNNYYN", "NNNNNNYNNNNNYNNNNNNYNNNNNYNNNNNNNNNYYNYN", "NNYNNNNNNYNNNYNNNYNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNYNNNYYNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNYNNNNNNNYNNNNNNNNYNNNNNNN", "NNNNNYNNNYNNNNNNNNNNNNNYNNNNNNNNYNNNNNYY", "NNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNNYNYYYNNNYYYNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN"};
    int person1 = 6;
    int person2 = 9;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYNYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYY", "YNNNNYYYYYYYNNYYNYNYNNYNYYNNNYYNNYNNNNNY", "YYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNYYYYY", "NYYYYNNNNNNNYYNNYNYNNYNYNNYYYNNYYNNYYYYN", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYN"};
    int person1 = 34;
    int person2 = 20;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> friends = {"NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNNYYNNNNNNYYNYYNYNNYYYYYNNNNYYNNNYNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NYYNNYYYYNYNNYNNYNYYNNNNNYYYYNNYYNNYNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN"};
    int person1 = 33;
    int person2 = 9;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> friends = {"NYNYYYN", "YNYNNYY", "NYNNNNY", "YNNNNNN", "YNNNNYN", "YYNNYNY", "NYYNNYN"};
    int person1 = 2;
    int person2 = 3;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> friends = {"NYNYYYYYYYNNNYYYNNNYYNYNNNYNYYYNYNNNYNNN", "YNNNYNNNYYYNNYNNYYYNNNYYNYYNYNYYNYYNYNNY", "NNNYNNNYNNNNYYYNNNNYNNYNNYYYYYNNYYNYNYNN", "YNYNNYYYNYNYYYNNNYNYYNNNYNNNNNNNNYYNYYNN", "YYNNNNYNYNNNYYNYYYYNYYNYYYNYYYNYYNNNNYNY", "YNNYNNNNNYNNNNYNNYNYYNYYYYYNNNNYNYNNYYNY", "YNNYYNNNNNNNYNYNNYYNNYYYNYNYNYNYNYYYNYNY", "YNYYNNNNYNNNNYNYYYNYNNNYNNYYNYNNNYYNNYYY", "YYNNYNNYNNYNYNNNNYNNYNYNYNNNNNNNYYYYNYNY", "YYNYNYNNNNYYYYNNNYYYYYYNNYNNNYYYYNYYNNNN", "NYNNNNNNYYNYNNYYNNNNYYYYNYNYYNYNYYNNNNYY", "NNNYNNNNNYYNYNNYYYYNNNNNNNNYYNNNYYNNYNNY", "NNYYYNYNYYNYNNYNNYYYNNYYYYYYYYNNYNYYNYYN", "YYYYYNNYNYNNNNYNYYNNYNNYNYYNNYYYYYYYNNYY", "YNYNNYYNNNYNYYNYNNYYNNYNYYNNYYNNNYNYYNNY", "YNNNYNNYNNYYNNYNNYYYNYYYNYNYYYNNNYYNYYYN", "NYNNYNNYNNNYNYNNNYNYYYNNYNYNYYNYNNNNYYNN", "NYNYYYYYYYNYYYNYYNYYYNYNNYNNNYNNNYYNNYYY", "NYNNYNYNNYNYYNYYNYNNYYNNYYYYNYYNYYNNNYYY", "YNYYNYNYNYNNYNYYYYNNYYNNNYYYNYNNNYYNYYNN", "YNNYYYNNYYYNNYNNYYYYNNYNYNNYYNNNNYYNNNNN", "NNNNYNYNNYYNNNNYYNYYNNYNNYNYNNYYYNNYNNYY", "YYYNNYYNYYYNYNYYNYNNYYNYYYNNNYYNYYNNNYNN", "NYNNYYYYNNYNYYNYNNNNNNYNNNYNNNNNYNNYNYYY", "NNNYYYNNYNNNYNYNYNYNYNYNNNYYNNYNNYNNNNNN", "NYYNYYYNNYYNYYYYNYYYNYYNNNNYYYYNNNYYNYNN", "YYYNNYNYNNNNYYNNYNYYNNNYYNNYNNNNYYNYNYNY", "NNYNYNYYNNYYYNNYNNYYYYNNYYYNYYYNYNYNYNNY", "YYYNYNNNNNYYYNYYYNNNYNNNNYNYNNYNYNNNNNYY", "YNYNYNYYNYNNYYYYYYYYNNYNNYNYNNNYYNYNNNNN", "YYNNNNNNNYYNNYNNNNYNNYYNYYNYYNNYYYNYNNNY", "NYNNYYYNNYNNNYNNYNNNNYNNNNNNNYYNYYYYNYNY", "YNYNYNNNYYYYYYNNNNYNNYYYNNYYYYYYNYNNYNNN", "NYYYNYYYYNYYNYYYNYYYYNYNYNYNNNYYYNNYNNYN", "NYNYNNYYYYNNYYNYNYNYYNNNNYNYNYNYNNNNYYNN", "NNYNNNYNYYNNYYYNNNNNNYNYNYYNNNYYNYNNYYNY", "YYNYNYNNNNNYNNYYYNNYNNNNNNNYNNNNYNYYNNYY", "NNYYYYYYYNNNYNNYYYYYNNYYNYYNNNNYNNYYNNYN", "NNNNNNNYNNYNYYNYNYYNNYNYNNNNYNNNNYNNYYNY", "NYNNYYYYYNYYNYYNNYYNNYNYNNYYYNYYNNNYYNYN"};
    int person1 = 37;
    int person2 = 9;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> friends = {"NYYYYNN", "YNNNNYY", "YNNNNYY", "YNNNNYY", "YNNNNYY", "NYYYYNY", "NYYYYYN"};
    int person1 = 0;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> friends = {"NYYYYNNNN", "YNNNNYNNN", "YNNNNNYNN", "YNNNNNNYN", "YNNNNYYYN", "NYNNYNNNY", "NNYNYNNNY", "NNNYYNNNY", "NNNNNYYYN"};
    int person1 = 0;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NNYYYNNYYNYYNYNNYYNYYYYNYYNYNNNNNYYYNNNN", "NNNNNYYNNYNNYNYYNNYNNNNYNNYNYYYYYNNNYYYY", "YNNNNYYYYYYNNNYYYYNNNYYNYYYYNYNYYNYNNYNN", "YNNNYYYYNNNNYYYNNNNYYNNNNYYYNYNYNNYNYYYN", "YNNYNYYNYYNNYNNYNYNNNYNYNYYNYYNNYNYYYNNY", "NYYYYNNYNYNNNNNNNYYYNYNYNYYYYYNYNYNYYNYN", "NYYYYNNNNYYNYNYNYYYYYNYNYNYYNNNYYNNYNNYY", "YNYYNYNNYYNNYNYNNNNNNYNYNNYNYNNNYNNYYYYY", "YNYNYNNYNNYYYNYYYNYYNNYYNNNYYNYNYYYYNYNY", "NYYNYYYYNNNYYNYYNYYYYYNYNNNYNNYNYYNNYNNN", "YNYNNNYNYNNNNNYYNNYYNYNYNNNYNYNYYYYNNYNY", "YNNNNNNNYYNNNYNNYNNNYYNYNYYYYNNYNYYNYYNY", "NYNYYNYYYYNNNNNYNNYNYNNNYNNYYYYNNNYYYYNY", "YNNYNNNNNNNYNNYYYNYNYYNYNNYNNYYNNYYNNYNN", "NYYYNNYYYYYNNYNNNNNNYYYNNYNNNNNNYNYYYYNY", "NYYNYNNNYYYNYYNNYNNNNNYNYNYNNYNNYYYYNNNY", "YNYNNNYNYNNYNYNYNYYYNNYYYNNNNYYNNNYYYYYY", "YNYNYYYNNYNNNNNNYNYYYYNYNYNYYYYNYNYNNYNN", "NYNNNYYNYYYNYYNNYYNYNYYNNYNNNNYYNNYYNNYY", "YNNYNYYNYYYNNNNNYYYNNNYNNYNYYNNYNNNNYNNY", "YNNYNNYNNYNYYYYNNYNNNYNYYYNNYYYYYNNNYYYN", "YNYNYYNYNYYYNYYNNYYNYNYNYYYYNYYNYNNYYNYY", "YNYNNNYNYNNNNNYYYNYYNYNNYNYYNYYYYYNNNYNY", "NYNNYYNYYYYYNYNNYYNNYNNNNNYNNNNNNNYYNNNN", "YNYNNNYNNNNNYNNYYNNNYYYNNNNNYNYNYYNYNNNN", "YNYYYYNNNNNYNNYNNYYYYYNNNNNYYYNYNNYYYYNN", "NYYYYYYYNNNYNYNYNNNNNYYYNNNYNYYNNYNYYNYN", "YNYYNYYNYYYYYNNNNYNYNYYNNYYNNYNNNYYNYNYY", "NYNNYYNYYNNYYNNNNYNYYNNNYYNNNYYYNYNYYNYN", "NYYYYYNNNNYNYYNYYYNNYYYNNYYYYNYYYNYYYYYN", "NYNNNNNNYYNNYYNNYYYNYYYNYNYNYYNNNYNNNNYN", "NYYYNYYNNNYYNNNNNNYYYNYNNYNNYYNNNNNNNNNN", "NYYNYNYYYYYNNNYYNYNNYYYNYNNNNYNNNYNNNYYN", "YNNNNYNNYYYYNYNYNNNNNNYNYNYYYNYNYNNYYYYY", "YNYYYNNNYNYYYYYYYYYNNNNYNYNYNYNNNNNYNNNN", "YNNNYYYYYNNNYNYYYNYNNYNYYYYNYYNNNYYNNYYN", "NYNYYYNYNYNYYNYNYNNYYYNNNYYYYYNNNYNNNNYN", "NYYYNNNYYNYYYYYNYYNNYNYNNYNNNYNNYYNYNNNY", "NYNYNYYYNNNNNNNNYNYNYYNNNNYYYYYNYYNYYNNY", "NYNNYNYYYNYYYNYYYNYYNYYNNNNYNNNNNYNNNYYN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> friends = {"NNNYNYNYYNNNNNNNNYYYNNNNNYYYYNNYNNNYNNNN", "NNNNYYNNYNNNNNNNNNNNYNYNNYYNNNYNYYNNNNYY", "NNNYNNYNNYYYNNNNYNYYNYYYYNYNYNNNNNNYNNYN", "YNYNNNNYNNYNNNNNYNYYNYNNNNNYNNNYYNYYNYNY", "NYNNNNYYYYYYNYNNYYNYNNNNYYNNNYNNNYYNYYYY", "YYNNNNYNNNNNNNYNNYNNYNNNNYNNNYNNNYNYYNYY", "NNYNYYNNNNYNYYNNNNYNYNNNNNYNNNNNNYYNNYYN", "YNNYYNNNYNNNNNNNNYYNYNYNNYYYYNNNNNNNNNNN", "YYNNYNNYNYYYNYNNNNNYYYNYYYNYYNYYNNYNYNNY", "NNYNYNNNYNYYNNNNYYNYYNYYNNNNNYNYYYNNYNNY", "NNYYYNYNYYNNNYNNYNNNYNYNYYNYYNNNYNNYNNNN", "NNYNYNNNYYNNNNNYNNNYNYNNNYNNNYYNNYNNNYNN", "NNNNNNYNNNNNNNYNNYNYNNNYYNYYNNNNNYYYNYNY", "NNNNYNYNYNYNNNYNNYYYYNYNNNNNNYNYYNYNNNNN", "NNNNNYNNNNNNYYNNYNYNNNNNNNYNNNNNNNYNYNYN", "NNNNNNNNNNNYNNNNYNNYNNYNYYNNNYNYNNYNNNNN", "NNYYYNNNNYYNNNYYNYYNYNNNYYYNYYNNYNNNYNYN", "YNNNYYNYNYNNYYNNYNNNYYYYNNNNYNYNNYYYYYYY", "YNYYNNYYNNNNNYYNYNNNNNNNNNYYNYYNNYNNYYNY", "YNYYYNNNYYNYYYNYNNNNYNNYNNNNNNNYNNNYNNNN", "NYNNNYYYYYYNNYNNYYNYNNNNYYNNYNNNYYNNYYNY", "NNYYNNNNYNNYNNNNNYNNNNYYYNYYYNYNNYNNYNYN", "NYYNNNNYNYYNNYNYNYNNNYNYNNNNNNNNNNNNYNYN", "NNYNNNNNYYNNYNNNNYNYNYYNYNYNNNNYYYNNYNNY", "NNYNYNNNYNYNYNNYYNNNYYNYNYNNNNNYNYYNNYYY", "YYNNYYNYYNYYNNNYYNNNYNNNYNNNYNYNYNNNNNNY", "YYYNNNYYNNNNYNYNYNYNNYNYNNNNNNYNNNNNNNNY", "YNNYNNNYYNYNYNNNNNYNNYNNNNNNNNYNYYNNNNYN", "YNYNNNNYYNYNNNNNYYNNYYNNNYNNNYYNNYYYNNYN", "NNNNYYNNNYNYNYNYYNYNNNNNNNNNYNYYNYYYNNNY", "NYNNNNNNYNNYNNNNNYYNNYNNNYYYYYNYNNNNNNYY", "YNNYNNNNYYNNNYNYNNNYNNNYYNNNNYYNYNNNYNYN", "NYNYNNNNNYYNNYNNYNNNYNNYNYNYNNNYNYNYNYNY", "NYNNYYYNNYNYYNNNNYYNYYNYYNNYYYNNYNNNYYNN", "NNNYYNYNYNNNYYYYNYNNNNNNYNNNYYNNNNNYNYNN", "YNYYNYNNNNYNYNNNNYNYNNNNNNNNYYNNYNYNNYNN", "NNNNYYNNYYNNNNYNYYYNYYYYNNNNNNNYNYNNNYYY", "NNNYYNYNNNNYYNNNNYYNYNNNYNNNNNNNYYYYYNYY", "NYYNYYYNNNNNNNYNYYNNNYYNYNNYYNYYNNNNYYNN", "NYNYYYNNYYNNYNNNNYYNYNNYYYYNNYYNYNNNYYNN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> friends = {"NYNYNNN", "YNYNNYN", "NYNYNNY", "YNYNYNN", "NNNYNYN", "NYNNYNY", "NNYNNYN"};
    int person1 = 0;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYYYYYYYYYNNNNN", "YNNNNNNNNNYNNNN", "YNNNNNNNNNYNNNN", "YNNNNNNNNNNYNNN", "YNNNNNNNNNNYNNN", "YNNNNNNNNNYYYYN", "YNNNNNNNNNNNYNN", "YNNNNNNNNNNNYNN", "YNNNNNNNNNNNNYN", "YNNNNNNNNNNNNYN", "NYYNNYNNNNNNNNY", "NNNYYYNNNNNNNNY", "NNNNNYYYNNNNNNY", "NNNNNYNNYYNNNNY", "NNNNNNNNNNYYYYN"};
    int person1 = 0;
    int person2 = 14;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NYYYNNNN", "YNNNYYYN", "YNNNNNYN", "YNNNNNYN", "NYNNNNNY", "NYNNNNNY", "NYYYNNNY", "NNNNYYYN"};
    int person1 = 0;
    int person2 = 7;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 39;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> friends = {"NYNYNYNYN", "YNYNYNYNN", "NYNYNNNNY", "YNYNNNNNN", "NYNNNYNNY", "YNNNYNNNN", "NYNNNNNYY", "YNNNNNYNN", "NNYNYNYNN"};
    int person1 = 0;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> friends = {"NYNYNYNY", "YNYNNNNN", "NYNNYNYN", "YNNNYNYN", "NNYYNYNN", "YNNNYNNN", "NNYYNNNY", "YNNNNNYN"};
    int person1 = 0;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> friends = {"NYYYYNNNN", "YNNNNYYYN", "YNNNNYNNN", "YNNNNNYNN", "YNNNNNNYN", "NYYNNNNNY", "NYNYNNNNY", "NYNNYNNNY", "NNNNNYYYN"};
    int person1 = 0;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNYNNYYNYNYYYNYYYNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNYYNNNNYYYYNNYYNNN", "YNNNNNNNNNNNNNNNNNNNNNYYNNYYNNNNNNYYNNNN", "YNNNNNNNNNNNNNNNNNNNYYNYNYNNYNNNNYNNYYNN", "YNNNNNNNNNNNNNNNNNNNNNNNYYNYYYYYNNYYYNNN", "YNNNNNNNNNNNNNNNNNNNNYNNNNNNYYYYYNNNNNYN", "YNNNNNNNNNNNNNNNNNNNYNNNYNNYYYNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYYNYYYNN", "YNNNNNNNNNNNNNNNNNNNNYNNNYNNNYNNYYYNYNNN", "YNNNNNNNNNNNNNNNNNNNNNYNYYNNNYNNNNYNYYYN", "YNNNNNNNNNNNNNNNNNNNNNYNYYYYYNYYYNNYYNNN", "YNNNNNNNNNNNNNNNNNNNYNNNYYNNYNNNNYYYNNYN", "YNNNNNNNNNNNNNNNNNNNNNYNNNYYYYYYYNNNNYYN", "YNNNNNNNNNNNNNNNNNNNNYYYNYNNNNNNNYNYYNNN", "YNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNYYYYYYN", "YNNNNNNNNNNNNNNNNNNNNYYNNNNYYNNNNYNNYNYN", "YNNNNNNNNNNNNNNNNNNNYNYNNNYYYNNNYNYNNNNN", "YNNNNNNNNNNNNNNNNNNNNYNNNNYNYNNYNNNYYNYN", "YNNNNNNNNNNNNNNNNNNNNNYYNYNNYYNYYNYNNYNN", "NYNNYNNYNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNY", "NNNNYNYNNYNNNNYNYNYNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNYYNYYNYYNYNNNNNNNNNNNNNNNNNNNY", "NYYYYNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNY", "NYYNNYNYNNYYYNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNYYNNNYYYYNYNNNNYNNNNNNNNNNNNNNNNNNNY", "NYNYNNNNNNNYNYNNNYYNNNNNNNNNNNNNNNNNNNNY", "NNNYNYNYNNNYNYNNYYNNNNNNNNNNNNNNNNNNNNNY", "NYNNYYYYYNNYYYNNYYYYNNNNNNNNNNNNNNNNNNNY", "NYYNNYYYNYYNNYNNNNNYNNNNNNNNNNNNNNNNNNNY", "NYYNNYYNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNYYNNNNYNYNYNNYYNNNNNNNNNNNNNNNNNNNY", "NYYNNNYNYYNYNYNNNYNYNNNNNNNNNNNNNNNNNNNY", "NYNNYNNNYYNNYNYYYNNNNNNNNNNNNNNNNNNNNNNY", "NYNYNYNNNYYNYNNYNYNYNNNNNNNNNNNNNNNNNNNY", "NNYYNYNNYNNYYNYYNNYNNNNNNNNNNNNNNNNNNNNY", "NNYNYYNNYYYYNNYYYNYNNNNNNNNNNNNNNNNNNNNY", "NNNNYNNNYNYNNYNYNNNYNNNNNNNNNNNNNNNNNNNY", "NNNNNNYYNNYNYYNYYNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> friends = {"NYYYNNNNN", "YNNNNYYYN", "YNNNNNNYN", "YNNNNNNYN", "NNNNNNNNN", "NYNNNNNNY", "NYNNNNNNY", "NYYYNNNNY", "NNNNNYYYN"};
    int person1 = 8;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
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
    vector<string> friends = {"NNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYNYYYYYYY", "NNYYYYYNYNYYNYYYYYNYYNYYYNYYYYYYYNYYYYYY", "YYNYYYYYYYYYYYNYNYYYYYYNYYYYYYYYYYYYYYYY", "YYYNYNYNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYNNYYNYYYNYYYYYNYYYYYNYYNYNYYYYYYYYYY", "YYYNNNYYNNYYYNYNYYYYYYYYYYYYYYNYYYYNYYYY", "YYYYYYNYYYYYYYYYYYYYYYNYYNYYYYYNYYYYYYYN", "YNYNYYYNYNYYYYYYYYYYYYNYYNYYYYYNYYYYYNYY", "YYYYNNYYNYYYYYYYYYYYYYYNYYYYYYYYYYYNYYYY", "YNYYYNYNYNYYYYYYYYYYYYNYYYYYNYYYYNYNYYYY", "YYYYYYYYYYNYYNYYYYYYYYYNYYYNYYYYYYYYYNYN", "YYYYYYYYYYYNYYYYYYYYYYYYNYYNYYYNYNYNNYYN", "YNYYNYYYYYYYNYNYYYYYYYYYNNYYYYYYYYYYYYYY", "YYYYYNYYYYNYYNYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYNYNYYYYYYYYNYNYYYYYYYYNYYNNY", "NYYYYNYYYYYYYYYNNYNYYYYYYYYYYYYYNYYYYNYY", "YYNYYYYYYYYYYYYNNYYYYYYNYYYYYNYYNYNYNYYY", "YYYYYYYYYYYYYYYYYNNYYYYYYYNYYYYYYYYYYYYY", "YNYYNYYYYYYYYYYNYNNYYYYYYYYYYYYYYYYYYYYN", "YYYYYYYYYYYYYYYYYYYNYNYYYYYNYYYYNYYNYNYY", "YYYYYYYYYYYYYYYYYYYYNYYYYNYYYYYYNYYNYYYY", "YNYYYYYYYYYYYYYYYYYNYNYYYNYYYNYYYYYYYYNY", "YYYYYYNNYNYYYNYYYYYYYYNYYYYYYYYYNYYYYNNY", "YYNYYYYYNYNYYYNYNYYYYYYNYYYYYYYYNYYNYYYY", "YYYYNYYYYYYNNYYYYYYYYYYYNYNYYYYYNYYYYYNY", "YNYYYYNNYYYYNYNYYYYYNNYYYNYNYYYYYNYNNYYY", "YYYYYYYYYYYYYYYYYNYYYYYYNYNYYYNNYYYYYYNY", "YYYNNYYYYYNNYYYYYYYNYYYYYNYNYYYYYNNYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYYYNYYYYNYYYYYYYNYYYYYYNYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYNYYYNYNYYYYYYY", "YYYYYYNNYYYNYYYYYYYYYYYYYYNYYYYNYYYYNYNY", "NYYYYYYYYYYYYYYNNYYNNYNNNYYYYYNYNNYYYYNY", "YNYYYYYYYNYNYYYYYYYYYYYYYNYNYYYYNNYYYYYY", "YYYYYYYYYYYYYYNYNYYYYYYYYYYNYYYYYYNNYYNY", "YYYYYNYYNNYNYYYYYYYNNYYNYNYYYYYYYYNNYNYY", "YYYYYYYYYYYNYYYYNYYYYYYYYNYYYNYNYYYYNYYY", "YYYYYYYNYYNYYYNNYYYNYYNYYYYYYYYYYYYNYNYY", "YYYYYYYYYYYYYYNYYYYYYNNYNYNYYYYNNYNYYYNY", "YYYYYYNYYYNNYYYYYYNYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 37;
    int person2 = 10;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> friends = {"NYNNN", "YNYNN", "NYNYN", "NNYNY", "NNNYN"};
    int person1 = 0;
    int person2 = 4;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YNYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YYNYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YYYNYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YYYYNYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YYYYYNYYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YYYYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> friends = {"NNYNYYYNNYYYNYYNYYNYYYYYYYNYYYYYNYNNYYNN", "NNYYNNYYYNNNYNYYNYYNYYNYYYYNYYNYYYYYNYYY", "YYNNYNNNNYYYNNNYNNNYYNYNNNNYYYNYYNNYNYNN", "NYNNYNYNNNNNNYNYYYYNYNNYNYNYNNNNNNNYNNNY", "YNYYNYNNNNYNNNNYNNNYNNNNNNNYNNYNNYNNYYNN", "YNNNYNNYNYYNNNNYNNNNNNNNNNNNYNYNYNNYYYYN", "YYNYNNNNYNYYNNNNNNNYNYYNNNNNNNNYNYNNYYNN", "NYNNNYNNYNNNNYNYYNNNNNNYNNNYNYYYNNNNYNNN", "NYNNNNYYNNNNYNYNNNNNNNNYNNNNNNNNNNNNYNNY", "YNYNNYNNNNNNNYNNNNYNNNNYNYYYNNNYYNNNNYNN", "YNYNYYYNNNNNNYYNNYYNNYYYNYYNYYNNNYYYYNYY", "YNYNNNYNNNNNNNNNYYNNYYNNNYNNNYNNNNYNNNYY", "NYNNNNNNYNNNNYNNNYNNNNNNYNYNNYNNNYNYNNYN", "YNNYNNNYNYYNYNNNNNNNNNNNYYNNNYNYYNNNNNNY", "YYNNNNNNYNYNNNNNYNYNNNNYNYNYNYNYNYNNNNNN", "NYYYYYNYNNNNNNNNNYNNYNNYNNNYYNNNNNNYNNYY", "YNNYNNNYNNNYNNYNNNNNNNYNNNNYYNNNNNNYNYNN", "YYNYNNNNNNYYYNNYNNNNNNYNYNYYYNYYNYNNNNNY", "NYNYNNNNNYYNNNYNNNNNNNYYNNNNNNNNYYNNNNNN", "YNYNYNYNNNNNNNNNNNNNNNNNYNNYYNYNNNNNYYYN", "YYYYNNNNNNNYNNNYNNNNNYYNNNYYYNYNNNNNNNNY", "YYNNNNYNNNYYNNNNNNNNYNNNNNNNNNYYNNNNNNYN", "YNYNNNYNNNYNNNNNYYYNYNNYYYNYNNYYYYNNYYYN", "YYNYNNNYYYYNNNYYNNYNNNYNYNNYNNNYYYNNNNYN", "YYNNNNNNNNNNYYNNNYNYNNYYNYNYNNNYYNNYNNNN", "YYNYNNNNNYYYNYYNNNNNNNYNYNNYNNYNNNNNNYNY", "NYNNNNNNNYYNYNNNNYNNYNNNNNNNNYNYNNNNYNNN", "YNYYYNNYNYNNNNYYYYNYYNYYYYNNNYNNNNNNNYYY", "YYYNNYNNNNYNNNNYYYNYYNNNNNNNNNYNNYYNNYNN", "YYYNNNNYNNYYYYYNNNNNNNNNNNYYNNNYYYNNYNNY", "YNNNYYNYNNNNNNNNNYNYYYYNNYNNYNNNNNNNNNNN", "YYYNNNYYNYNNNYYNNYNNNYYYYNYNNYNNNNNNYNYN", "NYYNNYNNNYNNNYNNNNYNNNYYYNNNNYNNNYNNNNYN", "YYNNYNYNNNYNYNYNNYYNNNYYNNNNYYNNYNNYNNYY", "NYNNNNNNNNYYNNNNNNNNNNNNNNNNYNNNNNNNNYNN", "NYYYNYNNNNYNYNNYYNNNNNNNYNNNNNNNNYNNNNNN", "YNNNYYYYYNYNNNNNNNNYNNYNNNYNNYNYNNNNNNNN", "YYYNYYYNNYNNNNNNYNNYNNYNNYNYYNNNNNYNNNNN", "NYNNNYNNNNYYYNNYNNNYNYYYNNNYNNNYYYNNNNNN", "NYNYNNNNYNYYNYNYNYNNYNNNNYNYNYNNNYNNNNNN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> friends = {"NYNNNY", "YNYNNN", "NYNYNN", "NNYNYN", "NNNYNY", "YNNNYN"};
    int person1 = 0;
    int person2 = 4;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> friends = {"NYYYYYNNNNNNNNNNN", "YNNNNNYNNNNYNNNNN", "YNNNNNNYNNNNYNNNN", "YNNNNNNNYNNNNYNNN", "YNNNNNNNNYNNNNYNN", "YNNNNNNNNNYNNNNNN", "NYNNNNNNNNNYNNNNN", "NNYNNNNNNNNNYNNNN", "NNNYNNNNNNNNNYNNN", "NNNNYNNNNNNNNNYNN", "NNNNNYNNNNNNNNNYN", "NYNNNNYNNNNNNNNNY", "NNYNNNNYNNNNNNNNY", "NNNYNNNNYNNNNNNNY", "NNNNYNNNNYNNNNNNY", "NNNNNNNNNNYNNNNNY", "NNNNNNNNNNNYYYYYN"};
    int person1 = 0;
    int person2 = 16;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> friends = {"NYNNNNNNNNNN", "YNYNNNNNNNNN", "NYNYNNNNNNNN", "NNYNYNNNNNNN", "NNNYNYNNNNNN", "NNNNYNYNNNNN", "NNNNNYNYNNNN", "NNNNNNYNYNNN", "NNNNNNNYNYNN", "NNNNNNNNYNYN", "NNNNNNNNNYNY", "NNNNNNNNNNYN"};
    int person1 = 0;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> friends = {"NYYNNYNNNNNYYYYYYYNYNYNNYNNYNNYYNYNYNYYY", "YNNYYNYYNYYYNYNNYYYYYYNNYNNNNNNNNNYNYNNN", "YNNYYNYYNNNNNNYNNYNYYNNNYYYYYNNNYNYNYYNN", "NYYNNYYYYNNNYNYYYNYNNNYNNNYYYYYYYYYYYNYN", "NYYNNNNNNYNNYNYNYNYNYYYNNYNNNNYNYNNYNYYN", "YNNYNNNNNYYNYNYYYNYYNYNYYNYYNNYNNNYYNYYY", "NYYYNNNYYYNYNNNNNNNYYNYYNNNNNYNYNYYNNYNN", "NYYYNNYNNYNNNNYYYNNNYNNYYYYNNYYNNNYYYNYY", "NNNYNNYNNYYNYNYNNYYNNYNYYNYNNYYNYYNYNNYY", "NYNNYYYYYNYYNYYYYNYYYYNNYNNYNNYNYNYYYYYN", "NYNNNYNNYYNNNYYNYNNNYNNNYYYNYNNYNYYNNNYY", "YYNNNNYNNYNNNYNNNNYYNYNYYNNNNNNYYNYYNYYN", "YNNYYYNNYNNNNYNNYNNYYNYYYYNYNYYYNYYYYNNN", "YYNNNNNNNYYYYNNNNYNYNNNYYYNNYYNNNYNYYNNN", "YNYYYYNYYYYNNNNNYNNYYNNNYNNYNNNYNYNYYNNY", "YNNYNYNYNYNNNNNNNNYYYNYYYNYNNNYNYYYYNNNN", "YYNYYYNYNYYNYNYNNNNYYYYYNNNNYNYNYNYNNYYY", "YYYNNNNNYNNNNYNNNNNNYYNYNYNYYYNNNYNYNYNY", "NYNYYYNNYYNYNNNYNNNNNNYYNNNYNYYYYYNNYNYN", "YYYNNYYNNYNYYYYYYNNNYYYYYYYNNYYNNNNNYYNY", "NYYNYNYYNYYNYNYYYYNYNYYYYYNYNYNNYYYYYYNN", "YYNNYYNNYYNYNNNNYYNYYNNYYNNYYYNYNNYNYNNY", "NNNYYNYNNNNNYNNYYNYYYNNNYYYYNNYYNNNYNYNY", "NNNNNYYYYNNYYYNYYYYYYYNNYNNNYNNYYYNNYNYY", "YYYNNYNYYYYYYYYYNNNYYYYYNNYYNYNNNYYNYNYY", "NNYNYNNYNNYNYYNNNYNYYNYNNNYYNNYYNYYYYYNY", "NNYYNYNYYNYNNNNYNNNYNNYNYYNNYYYYYNNYNYNN", "YNYYNYNNNYNNYNYNNYYNYYYNYYNNYNYNNNYYNYYY", "NNYYNNNNNNYNNYNNYYNNNYNYNNYYNNYNYYNNNYYY", "NNNYNNYYYNNNYYNNNYYYYYNNYNYNNNNNNNYYYYNN", "YNNYYYNYYYNNYNNYYNYYNNYNNYYYYNNYNNYNYYYN", "YNNYNNYNNNYYYNYNNNYNNYYYNYYNNNYNNNYNYYYN", "NNYYYNNNYYNYNNNYYNYNYNNYNNYNYNNNNYNYNNNY", "YNNYNNYNYNYNYYYYNYYNYNNYYYNNYNNNYNYNNNYN", "NYYYNYYYNYYYYNNYYNNNYYNNYYNYNYYYNYNYYYYY", "YNNYYYNYYYNYYYYYNYNNYNYNNYYYNYNNYNYNNYYY", "NYYYNNNYNYNNYYYNNNYYYYNYYYNNNYYYNNYNNNYY", "YNYNYYYNNYNYNNNNYYNYYNYNNYYYYYYYNNYYNNNY", "YNNYYYNYYYYYNNNNYNYNNNNYYNNYYNYYNYYYYNNY", "YNNNNYNYYNYNNNYNYYNYNYYYYYNYYNNNYNYYYYYN"};
    int person1 = 0;
    int person2 = 4;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> friends = {"NYNYYYYNNYYNYNYYNNNNNYNYYNNNYYYYNNNYYYNY", "YNNYYYYNYNNYNYNYNNYNNNYYYNYNYNYYYNYNYNYN", "NNNNYNYNNNNNYYNYNNNNYNNNNYYNNNYYYNYNNNYN", "YYNNNYYYNYNYYYYYYYYYYNYYNYNYYNNYNYYYNNNY", "YYYNNNYNYNYNYYYYNNNYNYNNNNNYNYYYYYNNYYNY", "YYNYNNYNYNYYYYYNNYYNYNNYYYNNNNNNNYYYNNYN", "YYYYYYNYNYNYNNYYNNYNNNYYYNNYNNYYNNNNYNYY", "NNNYNNYNYNNYNNNNNYNNNNNYNNNNNYYNNYYYYNYN", "NYNNYYNYNNYYYYNYYYNNYNNNNNNNNNYYNYNYNNNY", "YNNYNNYNNNYNNNYNYYNYYYYYNYYNYYNYNNNNNNYN", "YNNNYYNNYYNYNNNNNNYYNYNNNYNNNNYYYNNYNNYY", "NYNYNYYYYNYNYNNYNNYNYYYYNYYNNYNNNNNYNNNY", "YNYYYYNNYNNYNNNNNNNYNYYYNNNYNNYNNNYYNYYY", "NYYYYYNNYNNNNNYYNNYNNYNYYNNNYNNNYNNNNNYY", "YNNYYYYNNYNNNYNYYNNYNYYNYYYNYNYYNYYNYYYY", "YYYYYNYNYNNYNYYNYNNYYYYNNYYNYNNNYYNNYNNY", "NNNYNNNNYYNNNNYYNYYYYNYNYYNNNNYNNYNNNNNN", "NNNYNYNYYYNNNNNNYNNNNNYNNYNYNYYYYNNNYNNN", "NYNYNYYNNNYYNYNNYNNYNYYNYYNYYNNNNNNYNNYY", "NNNYYNNNNYYNYNYYYNYNYYYNYYYNYYYYYNYNYYNY", "NNYYNYNNYYNYNNNYYNNYNNNYNNYYYYNNYYYYYNNY", "YNNNYNNNNYYYYYYYNNYYNNYYNNNNYYYYYNYYYYYY", "NYNYNNYNNYNYYNYYYYYYNYNNNNNYYNNNYYNNNNNY", "YYNYNYYYNYNYYYNNNNNNYYNNNNNYYYNNNYYYYNYY", "YYNNNYYNNNNNNYYNYNYYNNNNNYNNNNYYYNYYNYYY", "NNYYNYNNNYYYNNYYYYYYNNNNYNNYNYNYNNNYNYNN", "NYYNNNNNNYNYNNYYNNNYYNNNNNNYNYYNNYYYNYNY", "NNNYYNYNNNNNYNNNNYYNYNYYNYYNNNNYNYYYYYYN", "YYNYNNNNNYNNNYYYNNYYYYYYNNNNNYYNNYNYYNNN", "YNNNYNNYNYNYNNNNNYNYYYNYNYYNYNNYYYYYYNYY", "YYYNYNYYYNYNYNYNYYNYNYNNYNYNYNNNNYYNYYYN", "YYYYYNYNYYYNNNYNNYNYNYNNYYNYNYNNYNYYNYYN", "NYYNYNNNNNYNNYNYNYNYYYYNYNNNNYNYNNYNNYNN", "NNNYYYNYYNNNNNYYYNNNYNYYNNYYYYYNNNNYYNNN", "NYYYNYNYNNNNYNYNNNNYYYNYYNYYNYYYYNNYNNYN", "YNNYNYNYYNYYYNNNNNYNYYNYYYYYYYNYNYYNNNYY", "YYNNYNYYNNNNNNYYNYNYYYNYNNNYYYYNNYNNNNNY", "YNNNYNNNNNNNYNYNNNNYNYNNYYYYNNYYYNNNNNNY", "NYYNNYYYNYYNYYYNNNYNNYNYYNNYNYYYNNYYNNNN", "YNNYYNYNYNYYYYYYNNYYYYYYYNYNNYNNNNNYYYNN"};
    int person1 = 13;
    int person2 = 27;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> friends = {"NYYYYNNNN", "YNNNNYNNN", "YNNNNYYYN", "YNNNNNYNN", "YNNNNNNYN", "NYYNNNNNY", "NNYYNNNNY", "NNYNYNNNY", "NNNNNYYYN"};
    int person1 = 0;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> friends = {"NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> friends = {"NYYYYNNNN", "YNNNNYYYN", "YNNNNNNYN", "YNNNNNNYN", "YNNNNNNNY", "NYNNNNNNY", "NYNNNNNNY", "NYYYNNNNY", "NNNNYYYYN"};
    int person1 = 8;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> friends = {"NYYYYYYYNNNNN", "YNNNNNNNYNNNN", "YNNNNNNNNYNNN", "YNNNNNNNNNYNN", "YNNNNNNNYYYYN", "YNNNNNNNNNNYN", "YNNNNNNNNNNNN", "YNNNNNNNNNNNN", "NYNNYNNNNNNNY", "NNYNYNNNNNNNY", "NNNYYNNNNNNNY", "NNNNYYNNNNNNY", "NNNNNNNNYYYYN"};
    int person1 = 0;
    int person2 = 12;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> friends = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN"};
    int person1 = 0;
    int person2 = 37;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> friends = {"NNYYYNN", "NNNNNYY", "YNNNNYN", "YNNNNYY", "YNNNNNY", "NYYYNNN", "NYNYYNN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> friends = {"NNNYYYN", "NNNYNYN", "NNNNYYN", "YYNNNNY", "YNYNNNY", "YYYNNNN", "NNNYYNN"};
    int person1 = 5;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> friends = {"NYNYNY", "YNYNYN", "NYNYNY", "YNYNYN", "NYNYNN", "YNYNNN"};
    int person1 = 4;
    int person2 = 5;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> friends = {"NYYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    int person1 = 7;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> friends = {"NYNNYN", "YNYNNY", "NYNYYN", "NNYNNY", "YNYNNN", "NYNYNN"};
    int person1 = 0;
    int person2 = 3;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> friends = {"NNYYYYNYYYYYYYYNYYNNYYYYYYYYNYYNNYNNYYYN", "NNYYNNYNYNYYNYNYNYYYNYNYYNYNYYNYYYYYYNYY", "YYNYYNNNNNNNYNYNNYYNYYNNYNNNNYNNNNNYNNNY", "YYYNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNYYNNY", "YNYNNYNYNYNNNNNYNNNNNNYNNNNNNNNNNNNYNNNN", "YNNNYNYNNNYYNNYNNYNNNNNNNNNNNYNNYYNNNNNY", "NYNNNYNYNNNNNNYNYNYNNNNNNNNNNNNYNNNNNNYN", "YNNNYNYNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNYNN", "YYNNNNNNNNNNNNNNYNNNYYNNNNNNNNYNNNNNNNNN", "YNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYYNN", "YYNNNYNNNNNNNYNNNNNYNNYNNNNNNNNYNYYNNNNY", "YYNNNYNNNNNNYNNYNNYYNNNNNNYYNYNNNNYNNNNN", "YNYNNNNNNNNYNNNNNNNNYNNYNYYYNYNYNNNNNNNN", "YYNNNNNNNNYNNNNYYNNNNNNNNNNNNNNNNNNYNNYN", "YNYNNYYNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNN", "NYNNYNNNNNNYNYNNNNNNNNNNYNNNYYNNNNYNNNNN", "YNNNNNYNYNNNNYYNNNYYNNNNNNNNYNNNNYNNNNNN", "YYYNNYNNNNNNNNNNNNNNNNNNNNNNYNYNNNYNNNNN", "NYYYNNYNNNNYNNNNYNNNNNNNNNNYYNNNNYNNNYYN", "NYNNNNNNNNYYNNNNYNNNYNNNYNYNNNNYNNNNNNYN", "YNYNNNNNYNNNYNNNNNNYNYNNNNNNNYNNNNNNNNNN", "YYYYNNNNYNNNNNNNNNNNYNNYYYNNNNNYNNNNNYYN", "YNNNYNNNNYYNNNNNNNNNNNNNYNNNNNNNYNNNNNNN", "YYNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNYYNNNNN", "YYYNNNNNNNNNNNNYNNNYNYYNNNNNYNNNNYNNNYNN", "YNNNNNNNNNNNYNNNNNNNNYNNNNNNNYNNYNYYNYNN", "YYNNNNNNNNNYYNNNNNNYNNNYNNNNYNNNNNNNNNNN", "YNNNNNNYNNNYYNNNNNYNNNNNNNNNNYNNNNNNNNNY", "NYNNNNNNNYNNNNNYYYYNNNNNYNYNNNNNNYNNYNNN", "YYYNNYNNNNNYYNNYNNNNYNNNNYNYNNNNNYYNNNNN", "YNNNNNNNYNNNNNYNNYNNNNNNNNNNNNNNYNNNNNNY", "NYNNNNYNNNYNYNNNNNNYNYNNNNNNNNNNNNNYNNNN", "NYNNNYNYNNNNNNNNNNNNNNYNNYNNNNYNNNNNNNYY", "YYNNNYNNNNYNNNNNYNYNNNNYYNNNYYNNNNNNNYNN", "NYNNNNNNNNYYNNNYNYNNNNNYNYNNNYNNNNNNNNNN", "NYYYYNNNNNNNNYNNNNNNNNNNNYNNNNNYNNNNNNNN", "YYNYNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNYNY", "YNNNNNNYNYNNNNNNNNYNNYNNYYNNNNNNNYNNYNNY", "YYNNNNYNNNNNNYNNNNYYNYNNNNNNNNNNYNNNNNNN", "NYYYNYNNNNYNNNNNNNNNNNNNNNNYNNYNYNNNYYNN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> friends = {"NYNYN", "YNYNN", "NYNYN", "YNYNY", "NNNYN"};
    int person1 = 0;
    int person2 = 4;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> friends = {"NNNYYNN", "NNNYYNY", "NNNYNNY", "YYYNNNN", "YYNNNYN", "NNNNYNY", "NYYNNYN"};
    int person1 = 0;
    int person2 = 6;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> friends = {"NYYYYYYNNYNNNYNN", "YNYNYYNNYYNYNNNN", "YYNYNNNYNNNYNYYN", "YNYNYYYYYNYYYNYY", "YYNYNYNYNYNYYNNY", "YYNYYNYYYYYYNNNY", "YNNYNYNNNYYYYYNY", "NNYYYYNNNYYYYNNN", "NYNYNYNNNYYNYNNN", "YYNNYYYYYNNYNYYN", "NNNYNYYYYNNNYYNN", "NYYYYYYYNYNNNNYN", "NNNYYNYYYNYNNNYN", "YNYNNNYNNYYNNNYY", "NNYYNNNNNYNYYYNY", "NNNYYYYNNNNNNYYN"};
    int person1 = 2;
    int person2 = 15;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> friends = {"NNYNNY", "NNNYYN", "YNNYYN", "NYYNNY", "NYYNNN", "YNNYNN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> friends = {"NNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNYNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNYYNNNYNNYNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYNNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNYNYYNNYNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNYNYYNYNYNNYNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYYNYN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNYYYYNNNYNNNYYNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNYYNYN", "NNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNYNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNYYNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNY", "YYNYNYYNNYNNNNYNYNNNNNNNNNNNNNNNNNNNNNNY", "YNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNY", "NYNNYYYNYNNNNYNYNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNY", "YNYYYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNYYNNYNYNNNNYNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYNN"};
    int person1 = 38;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> friends = {"NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> friends = {"NYYYYNNNN", "YNNNYYYYN", "YNNNYNNYN", "YNNNYNNYN", "YYYYNYYYY", "NYNNYNNNY", "NYNNYNNNY", "NYYYYNNNY", "NNNNYYYYN"};
    int person1 = 8;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> friends = {"NNYYYNN", "NNNNNYY", "YNNNNYY", "YNNNNYN", "YNNNNNY", "NYYYNNN", "NYYNYNN"};
    int person1 = 0;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> friends = {"NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "YNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN"};
    int person1 = 0;
    int person2 = 39;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> friends = {"NNNYYY", "NNNNNY", "NNNYYY", "YNYNNN", "YNYNNN", "YYYNNN"};
    int person1 = 4;
    int person2 = 1;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> friends = {"NNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYN", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYNNNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYN", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYN", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYN", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNN", "NYYYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYYYNN"};
    int person1 = 39;
    int person2 = 0;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> friends = {"NYN", "YNY", "NYN"};
    int person1 = 0;
    int person2 = 2;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> friends = {"NYNNNYYYYNNNYNN", "YNNNNYNNNNYNNNN", "NNNNNYNNNNYNNNN", "NNNNNNNNNNYNNNN", "NNNNNNYYYNYNNNN", "YYYNNNNNNNYNNNN", "YNNNYNNNNYNNNNN", "YNNNYNNNNNNNNNN", "YNNNYNNNNYNNNNN", "NNNNNNYNYNYNNNN", "NYYYYYNNNYNNNNY", "NNNNNNNNNNNNNNN", "YNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNY", "NNNNNNNNNNYNNYN"};
    int person1 = 0;
    int person2 = 10;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> friends = {"NNNNYYYYN", "NNNNYNNYN", "NNNNNYNYN", "NNNNNNYYN", "YYNNNNNNY", "YNYNNNNNY", "YNNYNNNNY", "YYYYNNNNN", "NNNNYYYNN"};
    int person1 = 7;
    int person2 = 8;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> friends = {"NYYYYYNNNNNN", "YNNNNNYYYNNN", "YNNNNNYYYNNN", "YNNNNNNNNYYN", "YNNNNNNNNYYN", "YNNNNNNNNYYN", "NYYNNNNNNNNY", "NYYNNNNNNNNY", "NYYNNNNNNNNY", "NNNYYYNNNNNY", "NNNYYYNNNNNY", "NNNNNNYYYYYN"};
    int person1 = 0;
    int person2 = 11;
    PeopleYouMayKnow* pObj = new PeopleYouMayKnow();
    clock_t start = clock();
    int result = pObj->maximalScore(friends, person1, person2);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20315020&rd=13901&pm=10580
********************************************************************************
#include <string> 
#include <vector> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <algorithm> 
#include <queue> 
#include <map> 
#include <set> 
#include <iostream> 
#include <sstream> 
#include <numeric> 
using namespace std; 
typedef long long ll; 
typedef pair<int,int> pii; 
#define F0(i,n) for (i = 0; i < n; i++) 
#define F1(i,n) for (i = 1; i <= n; i++) 
#define SZ(x) ((int)x.size()) 
const double eps = 1e-8; 
const double pi = acos(-1.0); 
const int inf = 1000000009; 
int i, j, k, m, n, l; 
int v[101]; 
int ans; 
 
const int N = 101; 
int x[N], y[N], V[N]; 
int d[N][N]; 
 
int rec(int i) { 
  V[i] = 1; 
  for (int j = 1; j <= n; j++) if (d[i][j]) { 
    if (y[j] == 0 || (V[y[j]] == 0 && rec(y[j]))) { 
      x[i] = j; 
      y[j] = i; 
      return 1; 
    } 
  } 
  return 0; 
} 
 
 
 
struct PeopleYouMayKnow {  
int maximalScore(vector <string> f, int p1, int p2) {  
  n = SZ(f); 
  F0(i,n) v[i] = 0; 
  v[p1] = v[p2] = 1; 
  ans = 0; 
 
  F0(i,n) if (!v[i] && f[p1][i] == 'Y' && f[p2][i] == 'Y') { ans++; v[i] = 1; } 
 
  vector<int> v1, v2; 
  F0(i,n) if (!v[i] && f[p1][i] == 'Y') { v1.push_back(i); v[i] = 1; } 
  F0(i,n) if (!v[i] && f[p2][i] == 'Y') { v2.push_back(i); v[i] = 1; } 
   
  m = SZ(v1); 
  n = SZ(v2); 
 
  memset(d, 0, sizeof(d)); 
  F0(i,m) F0(j,n) d[i+1][j+1] = (f[v1[i]][v2[j]] == 'Y'); 
 
  k = 0; 
  memset(x, 0, sizeof(x)); 
  memset(y, 0, sizeof(y)); 
  F1(i,m) if (x[i] == 0) { 
    for (j = 1; j <= m; j++) V[j] = 0; 
    k += rec(i); 
  } 
  ans += k; 
 
  return ans; 
}   
  
};  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/