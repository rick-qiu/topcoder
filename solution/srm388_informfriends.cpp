/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8473
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

class InformFriends {
public:
    int maximumGroups(vector<string> friends);
};

int InformFriends::maximumGroups(vector<string> friends) {
    int ret;
    return ret;
}


int test0() {
    vector<string> friends = {"NYYN", "YNYY", "YYNY", "NYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NYYN", "YNYN", "YYNN", "NNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NYNNNY", "YNYNNN", "NYNYNN", "NNYNYN", "NNNYNY", "YNNNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> friends = {"NYNY", "YNYN", "NYNY", "YNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"N"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> friends = {"NY", "YN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NN", "NN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> friends = {"NYNN", "YNNN", "NNNY", "NNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> friends = {"NYYNNNNNNNN", "YNYNNNNNNNN", "YYNYYNNNNNY", "NNYNYNNNNNN", "NNYYNNNNNNN", "NNNNNNYYNNN", "NNNNNYNYNNN", "NNNNNYYNYYY", "NNNNNNNYNYN", "NNNNNNNYYNN", "NNYNNNNYNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> friends = {"NYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYY", "YYNYYYYYYYYYYYY", "YYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYY", "YYYYYNYYYYYYYYY", "YYYYYYNYYYYYYYY", "YYYYYYYNYYYYYYY", "YYYYYYYYNYYYYYY", "YYYYYYYYYNYYYYY", "YYYYYYYYYYNYYYY", "YYYYYYYYYYYNYYY", "YYYYYYYYYYYYNYY", "YYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> friends = {"NYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYY", "YYNYYYYYYYYYYYY", "YYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYY", "YYYYYNYYYYYYYYY", "YYYYYYNYYYYYYYY", "YYYYYYYNYYYYYYY", "YYYYYYYYNYYYYYY", "YYYYYYYYYNYYYYY", "YYYYYYYYYYNYYYY", "YYYYYYYYYYYNYYY", "YYYYYYYYYYYYNYY", "YYYYYYYYYYYYYNN", "YYYYYYYYYYYYYNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> friends = {"NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NYNNNNNNNNNNNNN", "YNYNNNNNNNNNNNN", "NYNYNNNNNNNNNNN", "NNYNYNNNNNNNNNN", "NNNYNYNNNNNNNNN", "NNNNYNYNNNNNNNN", "NNNNNYNYNNNNNNN", "NNNNNNYNYNNNNNN", "NNNNNNNYNYNNNNN", "NNNNNNNNYNYNNNN", "NNNNNNNNNYNYNNN", "NNNNNNNNNNYNYNN", "NNNNNNNNNNNYNYN", "NNNNNNNNNNNNYNY", "NNNNNNNNNNNNNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NYNNNNNNNNNNNNY", "YNYNNNNNNNNNNNN", "NYNYNNNNNNNNNNN", "NNYNYNNNNNNNNNN", "NNNYNYNNNNNNNNN", "NNNNYNYNNNNNNNN", "NNNNNYNYNNNNNNN", "NNNNNNYNYNNNNNN", "NNNNNNNYNYNNNNN", "NNNNNNNNYNYNNNN", "NNNNNNNNNYNYNNN", "NNNNNNNNNNYNYNN", "NNNNNNNNNNNYNYN", "NNNNNNNNNNNNYNY", "YNNNNNNNNNNNNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> friends = {"NYNNYNYNNNYYYNN", "YNNNYYNYNNNYYNN", "NNNNYYNNYNYNNNY", "NNNNNNYYNNNNYNY", "YYYNNYYNNNYNYYY", "NYYNYNYNNNNYNNY", "YNNYYYNNYYYNYNN", "NYNYNNNNYNYNNYN", "NNYNNNYYNNNYYNN", "NNNNNNYNNNYNNNN", "YNYNYNYYNYNNYYN", "YYNNNYNNYNNNYNN", "YYNYYNYNYNYYNYN", "NNNNYNNYNNYNYNN", "NNYYYYNNNNNNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> friends = {"NNNNNNYNNNNNYNN", "NNNNNNYYNYYYNNN", "NNNYNNNNNNNNYNY", "NNYNNNNNNNNNNYN", "NNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNN", "YYNNNNNNYYNNNNN", "NYNNNNNNYNNNNNN", "NNNNNNYYNNNNNNN", "NYNNNNYNNNNNNYN", "NYNNNNNNNNNYNNN", "NYNNNNNNNNYNNNN", "YNYNYNNNNNNNNNN", "NNNYNNNNNYNNNNN", "NNYNNNNNNNNNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NYYYYYYYNNNNNNN", "YNYYYYYYNNNNNNN", "YYNYYYYYNNNNNNN", "YYYNYYYYNNNNNNN", "YYYYNYYYNNNNNNN", "YYYYYNYYNNNNNNN", "YYYYYYNYNNNNNNN", "YYYYYYYNYYYYYYY", "NNNNNNNYNYYYYYY", "NNNNNNNYYNYYYYY", "NNNNNNNYYYNYYYY", "NNNNNNNYYYYNYYY", "NNNNNNNYYYYYNYY", "NNNNNNNYYYYYYNY", "NNNNNNNYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> friends = {"NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "YYYYYYYNYYYYYYY", "YYYYYYYYNNNNNNN", "YYYYYYYYNNNNNNN", "YYYYYYYYNNNNNNN", "YYYYYYYYNNNNNNN", "YYYYYYYYNNNNNNN", "YYYYYYYYNNNNNNN", "YYYYYYYYNNNNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> friends = {"NYYYNYYYYYYYYYN", "YNYYYYYYYYYYYYY", "YYNYYYYYYYYYYYY", "YYYNYYYYYYNYYYY", "NYYYNNYYYYYYYYY", "YYYYNNYYNYYYYYY", "YYYYYYNYYYYYYNY", "YYYYYYYNNNYYNYY", "YYYYYNYNNYNNYYY", "YYYYYYYNYNYNNYY", "YYYNYYYYNYNYYNN", "YYYYYYYYNNYNYYN", "YYYYYYYNYNYYNYY", "YYYYYYNYYYNYYNY", "NYYYYYYYYYNNYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> friends = {"NNYYYYYYYYYYYYY", "NNYYYYYYYYYYYYY", "YYNNYYYYYYYYYYY", "YYNNYYYYYYYYYYY", "YYYYNNYYYYYYYYY", "YYYYNNYYYYYYYYY", "YYYYYYNNYYYYYYY", "YYYYYYNNYYYYYYY", "YYYYYYYYNNYYYYY", "YYYYYYYYNNYYYYY", "YYYYYYYYYYNNYYY", "YYYYYYYYYYNNYYY", "YYYYYYYYYYYYNNY", "YYYYYYYYYYYYNNY", "YYYYYYYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> friends = {"NYYYYNYYYNYNNNN", "YNYNYYNNYNNYNNN", "YYNYNYYNNNYYYYN", "YNYNYNNNNNNNNYY", "YYNYNNNYYYNYNNN", "NYYNNNYNYYYNNNN", "YNYNNYNNNYNYYYY", "YNNNYNNNNNYNYYN", "YYNNYYNNNYNYYNN", "NNNNYYYNYNNNYYN", "YNYNNYNYNNNNYNN", "NYYNYNYNYNNNYYN", "NNYNNNYYYYYYNNN", "NNYYNNYYNYNYNNY", "NNNYNNYNNNNNNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> friends = {"NYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNY", "NYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNY", "NYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNY", "NYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNY", "NYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNY", "NYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNY", "NYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNY", "NYNYNYNYNYNYNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> friends = {"NYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYY", "YYNYYYYYYYYYYYY", "YYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYY", "YYYYYNYYYYYYYYY", "YYYYYYNYYYYYYYY", "YYYYYYYNYYYYYYY", "YYYYYYYYNYYYYYY", "YYYYYYYYYNYYYYY", "YYYYYYYYYYNYYYY", "YYYYYYYYYYYNYYY", "YYYYYYYYYYYYNYY", "YYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> friends = {"NYYNYYNYNYNYNYY", "YNYYNYNYNYYNYNN", "YYNNYNNYNNNYNYN", "NYNNNNYYYYYNNYY", "YNYNNNNNYNYNYNY", "YYNNNNYYYYYYYYY", "NNNYNYNYYYNNYYN", "YYYYNYYNNNNNNNN", "NNNYYYYNNYYNYNY", "YYNYNYYNYNNYYNN", "NYNYYYNNYNNYYNY", "YNYNNYNNNYYNNYY", "NYNNYYYNYYYNNYN", "YNYYNYYNNNNYYNY", "YNNYYYNNYNYYNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> friends = {"NNYYYYNYNYYNNNN", "NNNYYNYYNNNYNNN", "YNNNYNNNNYNNYYY", "YYNNNYNYYNNNNYY", "YYYNNYNYNNYYYYN", "YNNYYNNYYYYNYNN", "NYNNNNNNYYNYYYN", "YYNYYYNNNNNNNNY", "NNNYNYYNNNYNNNY", "YNYNNYYNNNNYYYY", "YNNNYYNNYNNYNNN", "NYNNYNYNNYYNNYN", "NNYNYYYNNYNNNYY", "NNYYYNYNNYNYYNN", "NNYYNNNYYYNNYNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> friends = {"NYYYNYNNYNNYNNY", "YNNNNNYNYYNNYNY", "YNNNNYYYNNNNNYN", "YNNNNNNYYYYYYYY", "NNNNNNNYYNYYYNN", "YNYNNNNNNYYYNYY", "NYYNNNNNYYYYYNN", "NNYYYNNNYYNNYYN", "YYNYYNYYNNYNNNY", "NYNYNYYYNNNYNYN", "NNNYYYYNYNNYYYN", "YNNYYYYNNYYNYNN", "NYNYYNYYNNYYNYN", "NNYYNYNYNYYNYNN", "YYNYNYNNYNNNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> friends = {"NYYYYNNYYYYYYYY", "YNYNYYYYYYYYYYY", "YYNYYYYNYYYYYYN", "YNYNYYYNYYYYYYY", "YYYYNYYYYYYNYYY", "NYYYYNYYYYYYYYY", "NYYYYYNYYYYYYYY", "YYNNYYYNYYYYYYY", "YYYYYYYYNYNYYYY", "YYYYYYYYYNYYYYY", "YYYYYYYYNYNYNYY", "YYYYNYYYYYYNYYY", "YYYYYYYYYYNYNYY", "YYYYYYYYYYYYYNY", "YYNYYYYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> friends = {"NYYYYYYYYYYYYYN", "YNYYYYYYYYYYYYY", "YYNYYYYYYYYYYYY", "YYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYY", "YYYYYNYYYYYYYYY", "YYYYYYNYYYYYYYY", "YYYYYYYNYYYYYYY", "YYYYYYYYNYYYYYY", "YYYYYYYYYNYYYYY", "YYYYYYYYYYNYYYY", "YYYYYYYYYYYNYYY", "YYYYYYYYYYYYNYY", "YYYYYYYYYYYYYNY", "NYYYYYYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> friends = {"NYYNNYNNYNYNYNY", "YNYNYNNYNNNYNYN", "YYNNNNYYNNYYYNY", "NNNNYNNNYNYYNNN", "NYNYNNNNYYYNYNN", "YNNNNNNYNYNYYYN", "NNYNNNNYNYNNYNN", "NYYNNYYNNYYNNNY", "YNNYYNNNNNNNYYN", "NNNNYYYYNNYNNNN", "YNYYYNNYNYNYNNY", "NYYYNYNNNNYNYNN", "YNYNYYYNYNNYNYN", "NYNNNYNNYNNNYNN", "YNYNNNNYNNYNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NYYYYYNYYNYNYYN", "YNNYNNNYYNNYYYY", "YNNNNNYNNYNNNYY", "YYNNNNNYYNNYNYN", "YNNNNYNNNYNNNYN", "YNNNYNYYYNYYYNY", "NNYNNYNNYNNNYYY", "YYNYNYNNYYYNNYN", "YYNYNYYYNNNNYNY", "NNYNYNNYNNNYNYY", "YNNNNYNYNNNYYYN", "NYNYNYNNNYYNYNY", "YYNNNYYNYNYYNNN", "YYYYYNYYNYYNNNN", "NYYNNYYNYYNYNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> friends = {"NNYNYNYY", "NNYNYNYN", "YYNYNNNN", "NNYNYNYN", "YYNYNNYN", "NNNNNNNY", "YYNYYNNY", "YNNNNYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> friends = {"NYYNNNN", "YNNYYNN", "YNNNNYN", "NYNNNNN", "NYNNNNY", "NNYNNNN", "NNNNYNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> friends = {"NNNNNYNYYNNYNNY", "NNNNYNYNNNYNYNN", "NNNNYYYNNNYYYNY", "NNNNNYYNNNNNNNN", "NYYNNYNNNNNNNNN", "YNYYYNNYNNNYNNN", "NYYYNNNNYNNNYYY", "YNNNNYNNNYNNNNN", "YNNNNNYNNNNNNYN", "NNNNNNNYNNNNNYY", "NYYNNNNNNNNNYNY", "YNYNNYNNNNNNNNY", "NYYNNNYNNNYNNNY", "NNNNNNYNYYNNNNY", "YNYNNNYNNYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> friends = {"NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "NNNNNNNYYYYYYYY", "YYYYYYYNNNNNNNN", "YYYYYYYNNNNNNNN", "YYYYYYYNNNNNNNN", "YYYYYYYNNNNNNNN", "YYYYYYYNNNNNNNN", "YYYYYYYNNNNNNNN", "YYYYYYYNNNNNNNN", "YYYYYYYNNNNNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> friends = {"NNNN", "NNNN", "NNNN", "NNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NYYNYNNNYNYNNYN", "YNNNYNNYNYYYNYN", "YNNYYNNYNYNYYYN", "NNYNYYYNNNNNNYN", "YYYYNNNNNYNNNNN", "NNNYNNNNNYNNYYN", "NNNYNNNYYNNNNNY", "NYYNNNYNNYYNNNY", "YNNNNNYNNYNNNNY", "NYYNYYNYYNNNNYN", "YYNNNNNYNNNYNNN", "NYYNNNNNNNYNNNN", "NNYNNYNNNNNNNNN", "YYYYNYNNNYNNNNN", "NNNNNNYYYNNNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> friends = {"NYYYYNNYYYYYYYY", "YNYYYYYYYYYYYYY", "YYNYYYYYYYYYYYY", "YYYNYYYYYYYYYYY", "YYYYNYYYYYYYYYY", "NYYYYNYYYYYYYYY", "NYYYYYNYYYYYYYY", "YYYYYYYNYYYYYYY", "YYYYYYYYNYYYYYY", "YYYYYYYYYNYYYYY", "YYYYYYYYYYNYYYY", "YYYYYYYYYYYNYYY", "YYYYYYYYYYYYNYY", "YYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> friends = {"NYYNNYNNNNNYYYY", "YNYYYNYNYNNYNNY", "YYNNNYYNYNYNYYY", "NYNNNYYNYYNYYYN", "NYNNNYNNYYYYYYN", "YNYYYNNYNNNNNNN", "NYYYNNNNNYNYNNN", "NNNNNYNNYYNYYNN", "NYYYYNNYNNNNNYN", "NNNYYNYYNNNYNYY", "NNYNYNNNNNNNNNY", "YYNYYNYYNYNNYYY", "YNYYYNNYNNNYNYN", "YNYYYNNNYYNYYNN", "YYYNNNNNNYYYNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> friends = {"NYNYYYYYNN", "YNNNYNYYYY", "NNNNYYYYYY", "YNNNYYNYYY", "YYYYNYYYYY", "YNYYYNYYYY", "YYYNYYNYYY", "YYYYYYYNYY", "NYYYYYYYNY", "NYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> friends = {"NYYNYYYYYYYYYYY", "YNYNYYYYYYYYYYY", "YYNNYYYYYYYYYYY", "NNNNNNNNNNNNNNN", "YYYNNYYYYYYYYYY", "YYYNYNYYYYYYYYY", "YYYNYYNYYYYYYYY", "YYYNYYYNYYYYYYY", "YYYNYYYYNYYYYYY", "YYYNYYYYYNYYYYY", "YYYNYYYYYYNYYYY", "YYYNYYYYYYYNYYY", "YYYNYYYYYYYYNYY", "YYYNYYYYYYYYYNY", "YYYNYYYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> friends = {"NYYNYYNYYYYYNYY", "YNYYYNYNNYYYYNY", "YYNYYNYYYNNYYYN", "NYYNYYNYNYNNYYY", "YYYYNYNYYNNYYNN", "YNNYYNYYYNYYYNY", "NYYNNYNYNYYYYNY", "YNYYYYYNNNNYYNY", "YNYNYYNNNNYYYNY", "YYNYNNYNNNYYNYY", "YYNNNYYNYYNYYYY", "YYYNYYYYYYYNYNY", "NYYYYYYYYNYYNYN", "YNYYNNNNNYYNYNN", "YYNYNYYYYYYYNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> friends = {"NYYYNYYYNYYYYYY", "YNYYYYYYYYYYYNN", "YYNYYYYYNYYNYYY", "YYYNYYYYNYYYYYY", "NYYYNYNYYYYNNYN", "YYYYYNYYYYYYYYY", "YYYYNYNYNYYYYYY", "YYYYYYYNNNYNYYN", "NYNNYYNNNYYYYYN", "YYYYYYYNYNNYYYY", "YYYYYYYYYNNYYYY", "YYNYNYYNYYYNYYY", "YYYYNYYYYYYYNYN", "YNYYYYYYYYYYYNY", "YNYYNYYNNYYYNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> friends = {"NYYY", "YNYY", "YYNN", "YYNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> friends = {"NYYYNYYYNYYYYY", "YNNYYYYYYYYNYY", "YNNYNYYYYYYYYY", "YYYNYYYYYNYNYN", "NYNYNYYYYYYNYY", "YYYYYNNNYNNNNY", "YYYYYNNNYYYYYY", "YYYYYNNNYNYNNY", "NYYYYYYYNYYYYY", "YYYNYNYNYNNYYY", "YYYYYNYYYNNNYN", "YNYNNNYNYYNNYY", "YYYYYNYNYYYYNY", "YYYNYYYYYYNYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> friends = {"NYYYYYNYNYYNNYN", "YNNNNNYYYYNYYNN", "YNNNYYNNNYNNNNN", "YNNNNYYNYYNNYYY", "YNYNNNYYNNYYNYY", "YNYYNNNNYYYNYNN", "NYNYYNNNNYNNYNN", "YYNNYNNNYNNYYNY", "NYNYNYNYNNNYNNY", "YYYYNYYNNNNNYYY", "YNNNYYNNNNNYYNY", "NYNNYNNYYNYNYNN", "NYNYNYYYNYYYNNY", "YNNYYNNNNYNNNNY", "NNNYYNNYYYYNYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> friends = {"NYNNNNNNNNNNNNY", "YNYNNNNNNNNNNNN", "NYNYNNNNNNNNNNN", "NNYNYNNNNNNNNNN", "NNNYNYNNNNNNNNN", "NNNNYNYNNNNNNNN", "NNNNNYNYNNNNNNN", "NNNNNNYNYNNNNNN", "NNNNNNNYNYNNNNN", "NNNNNNNNYNYNNNN", "NNNNNNNNNYNYNNN", "NNNNNNNNNNYNYNN", "NNNNNNNNNNNYNYN", "NNNNNNNNNNNNYNY", "YNNNNNNNNNNNNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> friends = {"N"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
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
    vector<string> friends = {"NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> friends = {"NYYYYYYYYYYYYYY", "YNYYYYYYYYYYYNY", "YYNNYYYYYYYYYYY", "YYNNYYYYYYYYYNY", "YYYYNYYYYYYYYYY", "YYYYYNYYYYYYYYY", "YYYYYYNYYYYYYYY", "YYYYYYYNYYYYYYY", "YYYYYYYYNYYYYYY", "YYYYYYYYYNYYYYY", "YYYYYYYYYYNYYYY", "YYYYYYYYYYYNYYY", "YYYYYYYYYYYYNYY", "YNYNYYYYYYYYYNY", "YYYYYYYYYYYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> friends = {"NNNNNYNNYNYNNYN", "NNNNNNNNNNNNYNN", "NNNNYNNNNNYYYNN", "NNNNYNYNNYNNYYN", "NNYYNYYNNYYYNYY", "YNNNYNNNNNYNYNY", "NNNYYNNYNNNNNNN", "NNNNNNYNYYNNNNN", "YNNNNNNYNNNYYNN", "NNNYYNNYNNNNYYN", "YNYNYYNNNNNYYYN", "NNYNYNNNYNYNNYY", "NYYYNYNNYYYNNYN", "YNNYYNNNNYYYYNY", "NNNNYYNNNNNYNYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> friends = {"NYYNYYYYYNNYYYN", "YNYYNYNYNNYYYNY", "YYNYYYNNYYYYNYY", "NYYNYYYYNNYNYNN", "YNYYNYYYYYNYYNN", "YYYYYNNNYNYYYYY", "YNNYYNNYNYYNYYY", "YYNYYNYNYYNYNYY", "YNYNYYNYNYYNNYN", "NNYNYNYYYNYYYYN", "NYYYNYYNYYNYNNY", "YYYNYYNYNYYNYYY", "YYNYYYYNNYNYNYY", "YNYNNYYYYYNYYNY", "NYYNNYYYNNYYYYN"};
    InformFriends* pObj = new InformFriends();
    clock_t start = clock();
    int result = pObj->maximumGroups(friends);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8472826&rd=11122&pm=8473
********************************************************************************
#include<iostream>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<string>
#include<list>
#include<deque>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<utility>
#include<sstream>
#include<cstring>
#include<numeric>
using namespace std;
 
#define FOR(I,A,B) for(int I=(A);I<=(B);I++)
#define REP(I,N) for(int I=0;I<(N);I++)
#define ALL(X) (X).begin(),(X).end()
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef long long ll;
typedef vector<string> VS;
#define SIZE(x) ((int)(x).size())
 
 
VS t;
int n;
bool db[1<<16];
bool c[16];
int tab[1<<16];
 
class InformFriends
{
  public:
  int maximumGroups(vector <string> friends)
  {
    t=friends; n=t.size();
    REP(mask,(1<<n))
    {
      REP(i,n) c[i]=0;
      REP(i,n) if (mask&(1<<i)) c[i]=1;
      REP(j,n) if (!c[j]) REP(i,n) if ((mask&(1<<i)) && t[i][j]=='Y') c[j]=1;
      bool ok=1;
      REP(j,n) if (!c[j]) ok=0;
      db[mask]=ok;
    }
    REP(mask,(1<<n))
    {
      tab[mask]=0;
      int m0=mask;
      while (m0>=0)
      {
        if (db[m0]) tab[mask]=max(tab[mask],tab[mask^m0]+1);
        m0--;
        if (m0>=0) m0&=mask;
      }
    }
    return tab[(1<<n)-1];
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/