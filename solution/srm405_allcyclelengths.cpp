/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9764
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

class AllCycleLengths {
public:
    string findAll(vector<string> arcs);
};

string AllCycleLengths::findAll(vector<string> arcs) {
    string ret;
    return ret;
}


int test0() {
    vector<string> arcs = {"NYNN", "NNYY", "NNNY", "YNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00110(1)";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> arcs = {"NY", "YN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> arcs = {"NYYYY", "NNYYY", "NNNYY", "NNNNY", "YNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> arcs = {"NYNNN", "NNYNN", "NNNYN", "NNNNY", "YNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "010(1)";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> arcs = {"NNNNNY", "NNYYNN", "YNNNNN", "NNYNNN", "NYNYNN", "NNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000110001110011110(1)";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> arcs = {"NNNNNYN", "YNNNNNY", "NYNNNNN", "NNNNYNN", "NNYNNNN", "NNNYNNN", "NNNNYYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> arcs = {"NNNYNYNN", "YNNNNNNN", "NYNNNNNN", "NNNNNNNY", "YNNNNNNN", "NNYNNNYY", "NNNNYNNN", "NNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(0001)";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> arcs = {"NNNNNNNYY", "YNYYNNNNN", "NNNNNYNNN", "NYNNNNNNN", "NNNNNNNYN", "YYNYYNYNY", "NNNNNNNYN", "NNNNNYNNN", "NNNYNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> arcs = {"NNNYYNNNNN", "NNNNYNNNNN", "YYNNNNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNNYN", "NNNYNNNNNY", "YNNNNNNNNN", "NNYNNNNYNN", "NNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00101110110(1)";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> arcs = {"NYNNNNNNNN", "NNNNNYNNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNYNNN", "NNYNYNNNNN", "NNNYNNNNNN", "YNNNNNNNNN", "NNNNNNNNNY", "NNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000110001110011110(1)";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> arcs = {"NNNNNNNNNNY", "NNNNYNNYNNN", "NNNNNNYNNNN", "NYNNNNNNNNN", "NNNNNYNNNNN", "NNNNNNNNYNN", "NNNNNNNNYNN", "NNNNNYNNNNN", "NNNNNNNNNYN", "YNNYNNNNNNN", "NNYNNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> arcs = {"NNNNYNNNNNYN", "YNNNNNNNNNNN", "NNNNNNNNNNYN", "NNNNNNNNYNNN", "NNYYNNNNNNNN", "NNNNNNNNNNNY", "NNYNNNNNNYNN", "NYNNNYNNNNYN", "YNYNNNNYNNNN", "NNNNNNNNYNNN", "NNNNNNNNNNNY", "NNNNNNYNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> arcs = {"NNNNYNNNNNNNN", "NNNYNNNNNNNNN", "YNNNNYNYNNNYN", "NYNNNNNYNYNNN", "YNNNNNYNNYNYN", "NNNYNNNNNNNNN", "NNNNNNNYYYNNY", "NNNNYNNNNNNNN", "NNYYNNNNNNNNY", "YNNNNYNNNNNNN", "NNNNNNNNNYNNN", "NNNNNNNNNNYNN", "NNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> arcs = {"NNNNNNNNYNNNNN", "NNNNNNNNNYNNNN", "NYNNNNNNYNNNYN", "NNYNNNNNNNNNNY", "NNNYNYNNNNNNNN", "NNNNNNYNNNNNNN", "NNYNNNNNNNNNNN", "NNNNNYNNNNNNNN", "NNNNNNNNNNYNNN", "YNNNYYNNNNNYNN", "NNNNNNNNNNNNNY", "NNNNNNYNNNNNNN", "NNNNNNNYNNNNNN", "NNNNNNYNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000011110(1)";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> arcs = {"NNNNNNNYNNNNNNN", "NNNNNNNNYNNNNYN", "NNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNN", "NYNYNNYNNNNNNYN", "NNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNN", "NNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNN", "NNYNNYNNNNNNYNN", "NYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNY", "NNYNNNNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "010111110(1)";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> arcs = {"NNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNN", "NNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYN", "NNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNN", "NNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNN", "NNNNNYNNNNNNNYN", "YNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00001010010101101011110(1)";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> arcs = {"NNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNN", "NNNNNNYNYNNNNNN", "NNNNNNYNNNNYNNN", "NNYNNNNNNNNNNNN", "NYNNYNNNNNNNNNN", "NNNNNNNNNNNNNYN", "NNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNY", "NNNNYNNNNNYNNNN", "NNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNN", "NNNNNYYNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0010010110010111110(1)";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> arcs = {"NNNYNNNNNNNNNNN", "NNNNNNNNNNNYNNN", "NNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNN", "NNNNNNNYYNNNNNN", "NNNNNNNYNNNNNNN", "NYNNNNNNNNNNNYN", "NYNNNNNNNNNNNYN", "NNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNN", "NNYNNNNNNNNNYNN", "NNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNN", "YNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(00000001)";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> arcs = {"NNNNNNNNYNNNNNNY", "NNNNNNNNNNYYNNNN", "NNNNNYNNNNNNNNYY", "NNNNNYNNYNNNNNNN", "NNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNN", "NNNNNNNYYNNNNNNN", "NNNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNN", "NNNNNNNNYNNNYNNN", "YNNNNNNNNNNNNNNN", "NNNYYNYNNYNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> arcs = {"NNYNNNNNNNNNNYNNN", "NNNNNNNYNNNYNNNNN", "NYNNNNNNNYNNNNNNN", "NNYNNNNNYNNNNNNYN", "NNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNN", "NNNYNNNNNNNNNYNNN", "NNNYYNNNNNNNNNNNY", "NYNNNNYNNNYNNNYNN", "NNNYNYNNNNNYNNNNN", "NNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNN", "YNNNNNNNYNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNY", "YNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNN", "YYNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNN", "NNNNNNNYNNYNNNYNNN", "NNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNYNN", "NNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNYNN", "NNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000011010(1)";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> arcs = {"NNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNYN", "NYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000110000111000111100111110(1)";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> arcs = {"NNYNNNNNNNYNYNNNNYN", "NNNNNNNNNNNNNNYNNYN", "NNNYNYNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNNYNNNNN", "YNNNNNNNNNNNNNNNNNY", "NYNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNN", "NNNNNNNYNYNNNYNNYYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNYNNN", "NNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNYNNNNN", "NNNNYNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000(0001)";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> arcs = {"NNNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNYNNN", "NNNNNNNNNNYNNNNNNNN", "NNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYN", "NNNNYNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000(001)";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> arcs = {"NNNNNNNNYNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNYN", "YNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000(0001)";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNYNNNNNN", "NNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000110000000000000000111000000000000000111100000000000000111110000000000000111111000000000000111111100000000000111111110000000000111111111000000000111111111100000000111111111110000000111111111111000000111111111111100000111111111111110000111111111111111000111111111111111100111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> arcs = {"NNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNYNNNNNNNN", "NNNNYNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000100000110000110000111000111000111100111100111110111110(1)";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> arcs = {"NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNN", "NNNNYNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNYN", "NNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNN", "NNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNN", "NNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000000000010000000010100000000101000000101010000001010100001010101000010101010010101010100101010101101010101011010101011110101010111101010111111010101111110101111111101011111111011111111110(1)";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> arcs = {"NNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNNN", "NNYNNYNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNYNNNN", "NNNNNNNNNYNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYN", "NNNNNNNYNNNNNNYYNNNN", "NYYNNNNNNNNNYNNNNNNN", "NNNNNNYNNYNNNNNNYNNN", "YNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYN", "NYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNY", "NYNNNYNYNNNNNNNNNYNN", "NNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNN", "NYNNNYNYNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> arcs = {"NNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNN", "NNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYNYNNNNNNN", "NNNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000011000000001110000000111100000011111000001111110000111111100011111111001111111110(1)";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000011000000000000000001110000000000000000111100000000000000011111000000000000001111110000000000000111111100000000000011111111000000000001111111110000000000111111111100000000011111111111000000001111111111110000000111111111111100000011111111111111000001111111111111110000111111111111111100011111111111111111001111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> arcs = {"NNNNNNNNNNNNNNYNNNNNN", "YNYYNYNNNNNNNNYYNNNNN", "NNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNN", "NNNNNNNYYNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNYYNNN", "YNNYYNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNYNN", "YNNNNYNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNYNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNYNYNNNNNNNNNNNN", "NNNNNNNNNNNYNNNYNNNNN", "NYNNYNNNNNNNNNNYNYNNN", "NNNNNNNNYNYNYNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> arcs = {"NNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000100000000010100000000010100000001010100000001010100000101010100000101010100010101010100(01)";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> arcs = {"NNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNN", "YNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNYNNYNN", "NNNNYNNNYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNN", "NYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0111010(1)";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> arcs = {"NNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNY", "NNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNN", "NNNNYNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(00000001)";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> arcs = {"NNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNYN", "YNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(00000001)";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNN", "NYNNYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110101110(1)";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> arcs = {"NNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000001000001000(001)";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> arcs = {"NNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNYNNNN", "NNNNNNNNNYNNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNYNYNN", "NNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNYNNNNNNNNN", "NNNYNYNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNYNNY", "NYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNNNNNYNNNNNN", "NNYNNNNNNNYNNNNNNNNNNN", "NNNNYNYNNNNNNNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNN", "NNNNNNNNNYNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> arcs = {"NNNNNNNNNYNNNNNNNNNNNN", "YNNNNYNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNNNYYNNN", "NNYNNNNNNNNNYNNNNYNNNN", "NNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNYNYNNNNNN", "NNNNNNNNNNNYNNNNNNNNYN", "NNNYNNNNNNNNNYNYNNNNNN", "NNNNNYNNYNNNNNNNYNNNNN", "NNNNYNNNNNNNNYNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNN", "NYNNNNNNNNYNNNNNNNNNNY", "NNYNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNN", "NNNNNNYNNNNNNNNNNNNYNN", "NYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNN", "YNNNNYNNYNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> arcs = {"NNYNNNNNNNNYNNYNNNNNNN", "NNYNNNNNNNNYNNYNYNNNNN", "NNNNNNNNNYNNNNNNNYNNNN", "NNNNYNNNNNNNNNNYNNNNNN", "YYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNN", "NNNYNYNNNNNNNNNNNNNNNN", "NNNYNYNNNNNNNNNNNNNNYN", "NYNNNNNNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNNYNNNNNNNYNNNN", "NYNNNNNNNNYNNNNNNNNNNN", "NNNYNYNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNNNNYNNNN", "YYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNYNNYNYNNNNN", "NNNNYNNNNNNNYNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> arcs = {"NNNNYNNNNYNNNNNNNNNNYN", "YNNNNNYNNNNYNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNNNNN", "NNYNNYNNNNNNNNNYNNNYNN", "NNNYNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNNYNNNNN", "NNNNYNNNNNNNNNNNNNNNYN", "NNYNNYNNNNNNNNNYNNNYNN", "NNNNNNNNNYNNNNYNNNNNYN", "NNNYNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNYNNNY", "NNNNYNNNNYNNNNYNNNNNNN", "YNNNNNNNYNNYNNNNNNNNNN", "NYNNNNNNNNNNYNNNNYNNNY", "NNNNNNNYNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNYNNNNN", "NYNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNYNNNNNNNNNN", "NNYNNYNNNNNNNNNYNNNYNN", "NNNNNNNNNNYNNNNNYNNNNN", "NNNYNNNYNNNNNNNNNNYNNN", "YNNNNNYNYNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> arcs = {"NNNNYNNNNNNNNNNYNNNNYN", "NNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNNNNYNY", "NNNNYNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNNNY", "YNNYNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNYNNNNNNNNNNN", "NNNNNYYNNNNNYNNNNNNNNN", "NNNNNYYNNNNNYNNNNNYNNN", "NNNNNNNNNYNNNNYNNYNNNN", "NNYNYNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNN", "NNNNNYYNNNNNYNNNNNYNNN", "NNNNNNNYNNNNNYNNNNNYNY", "NNNNNNNNYNNNNNNNNYNNNN", "NNNNNYYNNNNNYNNNNNYNNN", "YNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNYNNNNNYNNNNN", "NNNNNNNYNNNNNYNNNNNYNY", "NNNNNNNNNNYNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> arcs = {"NNNNNNNNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNYNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNYNNNN", "NYNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNYNNNNNNNNNNYNNNY", "YNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNN", "NNNYNNNNNYNNNNNNNNNNNNN", "NNNNNNNNYNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000(001)";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> arcs = {"NNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNYN", "NNNNNNNNNNNNNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000100000110000110000111000111000111100111100111110111110(1)";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNYNNNNNY", "NNYYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNN", "YNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000010000000100010000(0001)";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNYN", "NNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000111100000000000000001111111000000000000011111111110000000000111111111111100000001111111111111111000011111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNN", "NNNNYNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000010000000000101000000000010100000000101010000000010101000000101010100000010101010000101010101000010101010100101010101010010101010101101010101010110101010101111010101010111101010101111110101010111111010101111111101010111111110101111111111010111111111101111111111110(1)";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNNNNNNY", "NNNNNNNYNNNYNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNYNN", "NNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNYNYNNN", "NNNNNNNYNNNNNNNNNNNNNNNN", "NNNYYNYNNNNNNNNNNNNNNNNN", "NNNNYNYNNNNNNNNNYNNNNNNN", "NYNNNNNNNYNNNNNNNNNYYNNN", "NNNYNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNYYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNYNNNYNNNNNNNN", "NNYNNNNNYNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNYNNNNNNYN", "NNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNYNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000110000000000111000000000111100000000111110000000111111000000111111100000111111110000111111111000111111111100111111111110(1)";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> arcs = {"NNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000010000010100010100(01)";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNNNNYN", "NNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNN", "NYNYNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "010101010101110(1)";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> arcs = {"NNYNNNNNNNNNNYNNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNYN", "NYNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNYNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNYNYNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNYNNNN", "NNNYYNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNYNNNNNNNNNNN", "NNNNNYNNYNNYNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> arcs = {"NNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000001001001000(001)";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> arcs = {"NNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000000001000001001000(001)";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000000001000001001000(001)";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> arcs = {"NNYNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNYNYNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNNNNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNY", "NNNYNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0010010110110(1)";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> arcs = {"NNNNNNNNNYNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNYNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000(01)";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNYNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNYNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNNNYNNNYNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNYNNYNY", "NNNNNNNNNYNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> arcs = {"NNNNNNNNYNNNNNNNNYNNNNNNN", "NNNNNNNNNNNYNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNYNNNNYNNNNNNN", "NYNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNYNNNNNNNN", "NNNNNNNYNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNYYNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNNNNNNN", "NNNYNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNYNNNYN", "NNNNYNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> arcs = {"NNYNNNNNNNNNYYNNNNNNYNNNN", "NNNNNYNNNNNYNNNNNNNNNNNYN", "NNNYNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNYNNYYNNNNNNNN", "YNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNYNYNNNNNNYNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNYYNNYNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYY", "NNNYNNYNNNNNNNNNNNNNNNNYN", "NYNNNNNNYNNNNNNNNNNYNNNNN", "NNNNNNNYNNYYNNNNNNNNNNNYN", "YNNYNNNNNYNNNNNNNNNNNNNNN", "YNNNNYNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNNYY", "NNNNNNYNNNYNNNNNNNNNNNYNY", "YNNNNNYNNNNNNNYNNNNNNNNYN", "YNNYNYNNNNNNNNNNNNNNNNNYN", "NNNNYNNNYNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNYYNNNN", "NNNNNNNNNNNNNYNYNNNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNNNNYNNN", "NNNNNNYNNNNNNYNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNYNNNNYNNNNNYNNNNYNNYN", "YNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNYNNYNNNNYNNN", "NNNNNYNNYNNNNNNNNNNNYNNNN", "YNNNNNNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNYNNN", "NNNYNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYN", "NNYNNNNYNNNNNNNYYNYNNNNNN", "NNNNNNNNYNNNNNNYNYNNYNNYN", "NNNNNNYNYNNNNNNYNNNNNYNNN", "NYNNNNNNYYNNNNNYNNNNNYNNN", "NNYNNYNYNNNNNNNNYNNNNYNNN", "NNNNNNNYNNYNYNNNNNNNNNNYN", "NNNNNNNNNNNYNNNNNNYNNNNNN", "NNNYNNNNNNNNYNYNNNNYYNNNY", "NNNNNYNNYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNYNN", "YNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYYNNYNNNNNNN", "NNNYNNNNNNNNYNYNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNNNNNYYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> arcs = {"NNNNYYNNNNNNNNNNNNNNYNNNY", "NNYNNNNYNYNNNYNNNYNNNNNNN", "NNNNYNNNNNYNNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNYNYNNNNNN", "NNNYNNNNNNNYNNNYYNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNYNY", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYNYNNNNNNNNNNYNYN", "NNNNNNNYNNNNNYNNNYNNNNNNN", "NNNNNNNNYNNNNNYNNNNNNNNNN", "NNYNNNNNNYNNNNNNNNYNNNNNN", "NNNNNYNNNNYNNNYNNNNNYNNNN", "NNNNNNNNNNNNNYNYYNNYNNNNN", "NNNNYNNNYNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNYNNNNNNYNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYYNNN", "NYNNNYNNNNNNNNYNNNNNYNYNN", "NNNYNNNNNYNYNYNNNYNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNN", "NNYNNNNYNYNNNNNNYYNNNNNNN", "NNNNNNNYNNNYNNNYNNNYNNNNN", "NNYNNNNNNNNYNNNYNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> arcs = {"NNNNNYNNNNNNNYNYNNNNNNNNN", "NNNYNNNNYNNNNNNNNNYNYNNNN", "NYNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNNNNNNN", "YYYNNYNYNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNNYNNNNNYNNNNNNNN", "NNYNYNNNYNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNYNNNNNNNNNY", "NNNNNNYYNNYNNNNNNYNNYYNNN", "NNNNNYNNNNNNNNNNNNYNNNNNY", "NNYYYNNNNNNNNNNNNNYNYNNYY", "YNNYNNYNNYNNYNNNNNNNNNYNY", "YYNNNNYNNNYYYNYNNYNNNNNNN", "NNNNYNNNNNNNNNNYNNNNYNNYN", "NNNNNNNYNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNYNYNNYNYNNN", "NNNNYNYNNNNYNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNYYNNNNYNNN", "NNNNNNYYNYYNNNNYNNNNYYYNN", "NNYNYNNNNNNNYNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> arcs = {"NNNNNNNNNNNNNNYYNNNYNNYNN", "NNYNNYNNNYNNYNYYNNNYNNYYN", "NNNNNNNNNNNNNNNNNNYNNYNNY", "NNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNYYNNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNN", "NNYNNYNNNYNNNYYYNNNYNNYNN", "NNNNYNNNYYNNYNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNYNYNNNNNN", "YNNNNNNNNNNYNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNYNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNYNNYYN", "YNNNNNNNNNNNNNNNYYNNNYNNN", "NNNYNNNNNNNYNNNNNYNNNNNNN", "NYNNNNNNNNNYNNNNNNNNNNNNY", "YYNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNYNNNYYNNNN", "NNYNNNNNNYNNNNNNNNNYNNYNN", "NNNNNNNNYNNNNYNNNNNNYNYNN", "NYNNNNNYNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNYNNNYNNN", "NNYNNNNNNNNNYYNNNNNNNNNNN", "NYNNNNYYNNNNNNNNNNNNNNNNY", "YYNYNNNNNNNYNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> arcs = {"NNNNNNNNNYYNNNNNNNNNNNYNY", "NNNYNNNNYNNNNNNYNYNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNYN", "YNYNNNNYNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNYNNNNYNNYNNYN", "NNNNNNYNYNNNNNYNNNNNNNYNN", "YNNYNYYNNYNNNNNNYNNYNNNNN", "NYNNNNNNYNNNNYNNNNYNNNNNN", "NNNNNYNNNYNYNNYYNYNNNYYNN", "NNNNNNNNYYNNNNNNYNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNYNNNN", "NNNNYNNNNYNNNNNNYNNNNNYYN", "NNNYNNNNNNNNNNNNYNNNYNNNY", "NYNNNNYNNNNYNNNNNNYYNNYNN", "NNYNNNNNYYNYNNNNNNNNYNNYN", "NNNYYNNNNYNNNNNNNNNNNNNNN", "YYNNNNNNYNNNNNNNNYNNNNNNN", "NNNNNYYYNNNNNNNNNNYNNNNYN", "NNNNNYNNNNNNYNYYNNNNNNNNY", "NNNNNNYYNYNNNNNNNYYNNNNYN", "NNNNNNNNYYNNNNNNNYNNNYNNN", "YNYYNNYNNNNYNNNYNNNNYNNNN", "NNYYNNNNYNYYNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NYNNNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNYNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000(01)";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000110000000000000000000000111000000000000000000000111100000000000000000000111110000000000000000000111111000000000000000000111111100000000000000000111111110000000000000000111111111000000000000000111111111100000000000000111111111110000000000000111111111111000000000000111111111111100000000000111111111111110000000000111111111111111000000000111111111111111100000000111111111111111110000000111111111111111111000000111111111111111111100000111111111111111111110000111111111111111111111000111111111111111111111100111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> arcs = {"NNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000100000000000101000000000001010000000001010100000000010101000000010101010000000101010100000101010101000001010101010001010101010100(01)";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNYNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNYNNNNNNNNNNNNYNNN", "YNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNYNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNYNN", "NYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNNYNNNYNNNNNNYNNNNNNNNNN", "YNNNNNNNYNNNYNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0111010(1)";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> arcs = {"NNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNYNN", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(0000001)";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNYNNNN", "NYNYNNNNNNNNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNYNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00010001000110011001100111011101110(1)";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> arcs = {"NNNNNYNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNYNNYNNNN", "NNNYNYNNNYNNYNNNNNYNNNNNYN", "YYNNNNNNNNYNNYYNNNNNNNYYNN", "NNNNNNNYNNNNNNNNNYNNNNNNNN", "NNYNNNYYNNNNNNYNNNYYYNNNNN", "NNNNNNNNNNNYNNYNNNNNNYNNNN", "YNNNNNNNNNNNNNYNNYYNNNNNNN", "NNNNNNNYNNNYNNNNNYNYNNYNYN", "NNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNYYNNNNNNNNNNNY", "NNNNNNNNNNNNYYNNYNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNYNNNYNNNYYNYNYYN", "NYNNNNNNNNNYNNNNNYNYNNNNNN", "YYNNNNYYNNNNNNNNNNNYNNYNNN", "NNNNYNNNNNNNNNNNNNNNNYNNNN", "NNYYNNNNYNNNNYNNNNNNNNNYNN", "NYNYYNNNYNNNNNNNNNNNNNNNYY", "NNNNYNNNNNNNNNYNNNNNNYNYNN", "NNNNNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNYNN", "NNYNNNNYYNYYNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNNYYNNNNNNYNY", "NNNYNYYNNNNNYNNYNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> arcs = {"NNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000001010111100000000000101011111111111000010101111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> arcs = {"NNNNNNNNNNNYNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNYNNNNNNNNNNNYNNNNNNNY", "NNNNNYNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNYNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNNNNNYNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00100110(1)";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000100010000(0001)";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> arcs = {"NNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNYNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000001000010010000100101001001010010110100101101011011010110111101101111011111110(1)";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNYNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000100010000(0001)";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYYNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNYNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0101011101110(1)";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> arcs = {"NNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNYNYNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNYNNNNNN", "NNYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNYNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNYN", "NNNNNNYYNNNNNNNNNNNNNNNNNNN", "YNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNYNNN", "NYNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNYNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> arcs = {"NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNYNNNYYNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNNYNNNNNNNNNNNNYNNY", "NNYNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNYYNNYNNNNNNNNNNN", "NNNNYNNNNNNNNNNYNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNYYNNNNNNNYNNNNNNN", "YNNNNNNNNYNNNNNNNNNNYNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNNNYNN", "NNNNNYNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNYNNNNYNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> arcs = {"NNNNNNYNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNYNNNNNNNNYYNNNY", "NNYNNNNNNNNNNNNNNNNNNYNYNNN", "NNNNNNNNYNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNYNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNYNY", "NYNNNYNNYNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNYNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNYYYNNNNNNNN", "NNYNNNYNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNNYNNNNNNNNNYNYNNN", "NNNNNNNNNYNNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNYYN", "YYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNNYNNNNNNNNNYNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNYNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNYNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> arcs = {"NNNNNNYNNNNNNNNNNYNNNYNNNNY", "NNYNNNNNYNNNNNNNNNNNYYNNNNY", "NYNNNNNNNNYNNNYYNNNNNNNNNNN", "NNNNYNNYNNYNNYYYNNYNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNYNNNNNNNYNNNNNNNN", "YNNNNNNYNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNYNNNN", "NNNNNNNYNYNYNNYNNNNNNNNNNNN", "NNYNNNYNNNNNNNNNNYNNNNNNNNN", "NNYNNYYNNNNNNNNNYYNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYNNNNYNNNYNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNNNNYYN", "NNNNNNNNNNNNYNNNYNNNNNNNNNN", "NNYNNYYNNNNNNNNNNYNNNNYNNNN", "YYNNNNNYNYYNNNNNNNYYNNNNNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNNNNYNNNYNNNNNNNYNYNNNY", "NNNNNNNNNNNNNNNNNYNNYNNNNNN", "YNNNYNNYNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNYNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNYNNNNYNNNNNNNNN", "NYNNYNNYNNNNNNNYNNNNNNNNNNN", "NYNNNNNYNYNYNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYYYNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> arcs = {"NNNNYNYYNNNNNNNNYNNNNNNNYNN", "NNNNNNNNNNYNYNYNNNNNNNNNNYN", "YNNNYNNNYYNNNYNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNYYYYNNNNNYNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNYN", "YNNNNNNNNNNNNNNYNNNNYYYNNNN", "NNYNNNNNNNNNYNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYNYNNNNNNNNNN", "NYNNNYNYNNNNNNNNNYNNNYNNYNN", "NNYNYNNNNNNYNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNYNNNNYNNNNNNYYNNNYNNNNNN", "YNYNNYNNNYNNNYNNNNNYYNNNYNY", "NNNNNNNNNNNNNYYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNYNYYY", "NYNNNNNNNNNNNNYNNNNNNNNYNYN", "YNNNNNNNNNNNNNYNYNNYNNNNNNN", "NYNNNNNNNYNNNNNNYYNNNNNNNNY", "NYNNYNNYNNNNNYNYNNNNNNNNYNN", "YYNNNNNNNNYNNNNNNNNNYNNNNNN", "NYNNNNNYNNNYNNNNYNNNNNYNNYN", "NNNNYYNYNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNYNNYNNNNNNYNYNYNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> arcs = {"NNNNNYYNNNNNNYNYNNYNNNNNNNN", "NNNNNYNNNNNYNYNNNNYNNYNNNNN", "NNNNYNNYNYNNNNNNNNNNNNYYNNN", "NNNNNYYNNNNNNNNYNYNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNY", "NNYNNNNNNNNNNNNNYNNYNNNNYNY", "NNNNNNNNYNYNNNNNYNNYYNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNYNNNNYNNN", "YNNNNNNNNNYNNNNNNNNNNNNNNYN", "NNNNYNNYNYNNNNNYNNYNNNNNNNN", "NNNYNNNNYNNNNNYNNNNYNNNNNNN", "YYYNNNNNNNYNNNNNNNNNNNNNYNN", "NYNNNNNNNNNNNNNNYNNNNNNNYNN", "NNNNNNNNNNNNYYNNNYNNNYYNNNN", "NYNYNNNNNNYNNNNNNNNNYNNNNNY", "NNNNNYNNNYNNNNNYNYNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNYNNNNNYY", "NNYYNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNYYNNNNYNNN", "YNYNNNNNNNNNNNYNNNNYNNNNYNY", "YNNNNNNNYNNNNNYNYNNNNNNNNNN", "NNYNNNNNYNNNNNNNYNNNNNNNNNY", "NNNNNYNYNYNNYNNYNNNNNYNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNYYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNYNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNYNNNYNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNY", "NNNNNNYNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(001)";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNYNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNY", "NNNNNNNNNNNYNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNYNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNYNNNY", "NNNNNNNNYNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(001)";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNYNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNYNNNNYNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(001)";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> arcs = {"NNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNYNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNYNNN", "NYNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0001010100(01)";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> arcs = {"NNNNNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000100000000000010100000000000010100000000001010100000000001010100000000101010100000000101010100000010101010100000010101010100001010101010100001010101010100101010101010100101010101010110101010101010110101010101011110101010101011110101010101111110101010101111110101010111111110101010111111110101011111111110101011111111110101111111111110101111111111110111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNYNNNN", "NYNNNNNNNYNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNYN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNYNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> arcs = {"NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000000001001000(001)";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(0000000001)";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> arcs = {"NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00001000010000100011000110001100011001110011100111001110111101111011110(1)";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNYNYNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNYNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000001001001000(001)";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> arcs = {"NNNNNNNNNNYNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNYNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNYNNNNYNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNYNNYNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNYN", "NNNNNNNNNNNYNNNYNNYNNNYNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNNNYNNNNNNNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0010(1)";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNYYNNNNNNNNNNNNNNNN", "YNNNNNNNYNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNYNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNYNNNYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNYNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNYYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNYNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> arcs = {"NNNNNNNNNNNNYNNNNNNNYNYNYNNN", "NNNNNNNNNNNNYNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNY", "NNYNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNYYNNNNNNYNNNNNNYN", "YNNNNNNNNYNNNNNNNNNNNNNYNNNN", "NNNYNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNYNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNYNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNYYNNNNN", "NNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNYYNNNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNYNNNYNNNNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNNNYNNNNNNNYN", "NNYNNNNNNYNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "010(1)";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNNNNNYNNNNNNNNNNN", "YNNYNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNYNNYNYN", "NYNNNNNNNNNNNNNYYNNNNNYNYNNN", "YNNNNNNNNYNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYYNNNNNNNNNY", "NNYNNNYNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNYN", "YNNNNNNYNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNYNNNNNNNYNNNNNNNNNNN", "YNNNNNYNNNYNNNNNNNNNNNNNNNNN", "YNNYNNYYNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNYNNYNNNYNNNNNNNNYNNNY", "NNNNNNNNNNNNNNYNNNYYNNNNNNNN", "NNNNNNNYNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNYNNNNNY", "NNNNNNNNNNNNYNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNYNNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(1)";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNYNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNYNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNYNYNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNYNNNN", "NNNNNNNNNNNNNYNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYYNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNYYY", "YNNNNNNNNNNNYNNNYYNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNYYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNYNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYYN", "NNNNNNNNNNNNNNNNNNYNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNYNNYYNNNNNNNNNNNNNNNN", "NNYNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNYYNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> arcs = {"NNNNYNNNNNNYYNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNYNNNNNNN", "YNNNYNNYNNNNNNYNNNNNNNNNNNNN", "YNNNNYNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYNNNYN", "NYNNNNNNNNNNYNYNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNYYYNNNNNNNNN", "NNYNYNNNNYNNNNNNYNNNNYNYNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNYNNNNNN", "NNNYNNYNNNYNNNNNNYNNNNNYNYNN", "NNNNNNNNNNNNNYNNNNYNNNYNYNNY", "NNNNNNNNYNNNNNYNNNNNNNNNNNNN", "YNYNYNNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNYYNNNNYNYNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNNNNNNNNNNNNNYNNNYNNNNNYNY", "NNNNNNNYNNNNYNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNYNNNNNN", "YNNNNNNNNYNNNYNNNNNYNNYNYNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNYNN", "NNNNNNYYNNNNNNNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNYYNNNN", "NNYNNNNNNYNNNNNNNNNYNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> arcs = {"NNYNNNYNNNNYNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNYNNNYNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNYYYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNYNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNNNNNYNNNYNNNNNNN", "NNNNYYNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNYNNNNNNNN", "NNNNNNYNNNNYNNNNYNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNYNNNN", "NYNNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNYNNNNNNNNNNYNNN", "NNNNNNNYNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNYYN", "YNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNYNNNN", "YNNNNNNNNYNNYNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNYNNYNNNNNNNNNNYNNN", "NNNNNNNYNNYNNYNNNNNNNNNNYNNN", "NNNNNNNNYNNNYNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> arcs = {"NYNNYNNNNYNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNYNNNNNNYNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNNYNNNNYNN", "NNNNNNNYNNNNNNYNNNYNYNNNNNNN", "YNNNNNNNYNNYNNNNNNNNNNNNNNNN", "YNNNNYNNNYNYNNNNYNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNYYNNNNYN", "NNYYNNNNNYNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNYNNNNNNNNNNNNNNNY", "NNNYNYYNNNNNNYNNYNNNNNNNNNNN", "NNNNNNNNYNNNNYNNNYYNNNNNNNNN", "NNNNYNNNNYYNNYYNNNNNNNNNNNNN", "NNNYNYNNNNNNNNNNNNNYNNNNYNNN", "NNNYNNNNYNNNNNNNNNNNNYYYNNNN", "NNNNNYNNNNNNNNNNNYYNNNNYNNNN", "YNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNYNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNYNNNNNYYNYNNN", "NYYNNNNNNNNYNNNNNNNNYNYYNNNN", "NNNNNYNYNNYNNNNNNYNNNYNNNYNN", "NNNNNYNNNNNNNNNNNNYNNNNNNYNN", "NNYNNYNNNNNNNYNYNNNNNNNNNYYY", "NYNNNNYNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNYYYNYNNNNNNNNNNNNN", "YNNNNNNNYYYYNNNNNNNNNNNNYNYN", "NNNNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYYNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYNNNYN", "NNNNNNYNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNNNYNNNNYN", "NNNNNNNNNNNNNNYNYNNNNNNNYYNN", "NYNYNYNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNYNNNNNNNYYNN", "YNNNNNNNNNNNNNNNYNNNNNNNYYNN", "NNNYNYNNNNNNNYNNNNNNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNYYNNNNNNNN", "YNNNNNNNNNNNNNYNYNNNNNNNYNNN", "NNNNNNNYNNNNNNNNNNYYNNNNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNNNNNN", "NYNYNYNNNNNNNNNNNNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYYNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNNNYNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYNNYNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNYNNNNYN", "NNNNNNNYNNYNNNNNNNYYNNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNYNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNYNYNNNNNNNYYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000001)";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(001)";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> arcs = {"NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNYNNNNNNYNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNYNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000100010100(01)";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> arcs = {"NNNNNNNNNNNNNYNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYYNNNNYNYNNNNNNNYNN", "NNNNNYYNNNNYNNNNNNYNNYYNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNYNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNYNNNNNYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNYNYNN", "YNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNY", "NNNYNNNNNNNNYNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNYNNNNNNNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000101000000000001010100000000010101010000000101010101000001010101010100(01)";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> arcs = {"NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000000001000000001001000001001000(001)";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> arcs = {"NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNYNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000100000011000000110000011100000111000011110000111100011111000111110011111100111111011111110(1)";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> arcs = {"NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNYYNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNYNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNYNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNYNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "010101110101010(1)";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNYNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNYNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNNNNYNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNYNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01010101110(1)";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNYNNNNNN", "NNNNNYNNNYNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNYNNNNNNNNNNNYNNNNN", "YNYNNNNYNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNYNNNNNNNNN", "NNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNYNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNYY", "NNNNNNNNNNNNNNNYNNYNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNYNYNNNNNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "010(1)";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNYYNNNNNNNNNNN", "YNNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNYNNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNYYNNNNNNNNN", "NNNNNNNNNNYNNYNNNNYYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNYYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNNYNNNNNYNNNN", "NNNNNNNNYYNYNNYNNNNNNNNNNNYNN", "NNNNYNNNNNNNNNNNNNNNNNYNNYYNY", "NNYNNNNNNNNNNNNNNNNNNNYNNNNNY", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNYNNYNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNYNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNN", "NYNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNYNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNYNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNYNNNNY", "NNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNYNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNNNYNNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNNNNYNNNNNNYNNNYNN", "NNYYNNNNYNNNNNNNNNNYNNYNNNNNN", "NNNNNNNYYNNNNNNNNYNYNYYNNNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNYNNNNNNNNNNNYNNNNN", "NNNNYNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNNNNNNNNNNNNYNNNNNNNNNNNYNN", "NNNNNNNYNNNYNYNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(1)";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> arcs = {"NNNNYNNNNNNNNYNNNNNNNNNYNNNNN", "NNNNNNNNYNNNNNNNNNNNYNNNNNNNN", "YNNNNYNYYNNYNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNYNNNYNYNNNN", "YNNNNNNNNNNNNNNYNNNNNNYNNYYNN", "NNNYNYNNNNNNNNYNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNYNNNNNYNNNNNNYNNN", "NYNNNNYNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNYNNNNNNNNYNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNYNNYNNN", "NNYNNYNNNYNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NYNNNNNNNYNYNNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYNNYNYNNNNNNN", "YNNNNYNNNNNNYNNNNNNNNNYYNNYNN", "NNNNYYNNNNNNYNNNNNNNNNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(1)";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> arcs = {"NYNYNNNNNYNNNNNNNNNNNNNNNYNNN", "NNNNYNNYNNNNNNNNYNNNNNYNNYNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNNNNYNNYYNNNNNYN", "NNNNNYNNNNNNNNYNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNYYNNNNNNNNNY", "NNNNNNNNNYNNNNNNNYNNNNNNYNNNN", "NNYNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYNNYNNNNNNN", "NNNNYNNNYNNNNNNNNNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNNNYNNNNNNNNNNNNN", "NYNNYNNNNNNNNNYNNNNYNNNYNNNNN", "YNNNNNNYNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNYNNNNNYNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNYNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNYNN", "NNYYNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNYNNYYNNNYNYNYNNNNNNNNNNN", "NYYNNNNNNNNNNNYNNNNNNNNYNNNNY", "NYNNNNNYNNNNYYNNYNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNNNNNYYNYNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNYNYYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNYNYNNNNNNYNNNY", "NNNNNNNNYYNNNNNNNNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(1)";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> arcs = {"NNYNNYNNNNNNNNNYNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNNNNYNNNYNNNYNYNNNNNNNNNN", "NNNNNNNNNNNYNNNNYYNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNN", "NNNNYNNNNNNNNNYNNNNNNNNYNNYNN", "NNYNNNNNNNYNNNYNNNNNNNYNYNNNN", "NNNNNYNNNNNNNNYNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNYNNNNYNNNNNNNNNNYNNNNNN", "NNNYNNNNYNNNNNNNNNNNNNNNYNNNN", "NNYNNNNNYNNNNNNNNNNNNNNYNNNNN", "NNNNYNNYNNNNNNNYNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNYNNNNNNNNYYNNNN", "NNNNNYNNYNNNNNNNNNNNYNYNNNNNN", "YYNNYNNYYNNNNNNNNNNNNNYNNNNYN", "NNNNNNYYYNNNNNNYNNNNNNNNNNNNN", "NNNYNNNYNNNNNYNNNNYNYYNNYNNNN", "NNNNNNNYNNNYNNYNNNNNNNNNNYNNY", "YYNNNNNNNNNNNNNYYNNNNNNNNYNNN", "NNNNYNNNNNNNNNNNNNNNNNNNYNNYN", "NNNNNNNNNNNYNNNYNNNNNNNNNNNNN", "NNNNNNYNNYYNNNNNNNNYNNNYNNNNN", "NNNNNNNYNNNNNYNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNYNNYNYNNNNNNNNNN", "NNNNNNYNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYYNNNYNNNNYNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> arcs = {"NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNYNNNYNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000000011000000000000000000000000001110000000000000000000000000111100000000000000000000000011111000000000000000000000001111110000000000000000000000111111100000000000000000000011111111000000000000000000001111111110000000000000000000111111111100000000000000000011111111111000000000000000001111111111110000000000000000111111111111100000000000000011111111111111000000000000001111111111111110000000000000111111111111111100000000000011111111111111111000000000001111111111111111110000000000111111111111111111100000000011111111111111111111000000001111111111111111111110000000111111111111111111111100000011111111111111111111111000001111111111111111111111110000111111111111111111111111100011111111111111111111111111001111111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> arcs = {"NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000010000000000000101000000000000010100000000000101010000000000010101000000000101010100000000010101010000000101010101000000010101010100000101010101010000010101010101000101010101010100(01)";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> arcs = {"NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNYNNNNNNYYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNYNNNNNNNNNYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNYNNYYNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNYNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNYNNNNNN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> arcs = {"NNNYNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYYNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYYNNNNNYNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(00001)";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> arcs = {"NNNNYNNNNNNNNNNNNNNNNNNYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNYNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNYNNNNYNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNNNNNNNNNN", "NNNNNNNNNYNNYNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(0000000001)";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> arcs = {"NNNNNNNYNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNYNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNYN", "NNNNNNNNNNYNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000000000001)";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> arcs = {"NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000000000000000000000000001)";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYYNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNYNYNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00001111110(1)";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNYNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNYNNNNNNNNNYNNNNNNNNNNYNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNYNNNNNNNNNYYNNNNNNYN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNYNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNYNYNNN", "YNNNNNNNNNNNNNYNNYNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNYNYNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNY", "NNNNNNNNNNNNNYNNNNNNYNNNNNNNNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNNNNNNYNN", "NNNNNYNNYNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNYN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNYNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNYNYNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNYNNNYNNNNNNNNYNNNNN", "NNYNNNNNNYNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> arcs = {"NNNNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNYYNNNNYNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNYNNNNYNNNNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YNNNNYNNNNNNYNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000110(1)";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> arcs = {"NNNNNNNNNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNYNNNNNNNNNN", "NNNYNNYYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNYNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNYNNNNNN", "NNNNNYNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNYYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNYNYNNNNNNNNNNNNNNNNNNNNNNYNY", "NNNNNNNNNNNNYNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNY", "NNNNNNNNYNNYNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> arcs = {"NNNNNNNNNNNNNNYNYNNNNNNNNNNNNN", "NNNYNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNNNNYNNNNNNNNNNNNNNNYNNNNNYY", "NNNNNNNYNYNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNYNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNYNYYNNNNY", "NNNNNYNNNNNNNNYNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNYNNNNYNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNNNYNNNNNNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNYNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNYNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNYNNNNNN", "NNNNNNNNNNNNYNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNYNNNYNNNNNNNNYNNNNN", "NNNYNNNNNYNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNYNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNYN", "NNNNYNYNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNNNNNNNNYNNNNNYNYNNYYNNNNY", "NNNNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNYNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYYNNNNNNNNYNNN", "NNYNNNNYNNNNNNNNYNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNYNNNNNYNNNNNNNY", "NNNNNYNNNNNNNNNNNNNYNYNNYNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "010(1)";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> arcs = {"NNYNNNNNYNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNYYNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNYNNYNN", "NNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNNNNNNNY", "NNNYNNNNNNYNYNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNYNNNNYNNN", "NYNNNNYNNNNNYNYNNNYYNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNYNNNNNYNYNYNYNN", "NNNNNNNNNNYNNNNNNNNYYNNNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNYYNYNNNNNNNNNNNNN", "NNYNNNNNNNNNYNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNYNNNNYNNNNNNNNN", "NYNNNNNNYNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNYNYN", "NNNNNNNYNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNYNYNN", "YNNNYNNNNNNYNNNNNNNNNNYNNNNNNN", "NNNNNNNNYNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYYNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(1)";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNYNNNYNYN", "YNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNNYNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNYYNNNNNN", "NNNYYNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNYNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNYNNNNNNNNNNYNNNNNNYYNN", "NNNNNNNNNNNNNYYNNNNNNNNNNYNNNN", "NNNNYNNNYNNNNNNNYNYNNNNNNNNNNY", "NNNYNNNNNYNNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNYNYNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNYNNNNNNNNYNNNYNNNNNY", "NNNNNNYNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNYNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNYNNYNNYNNNNNYN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNY", "NYYNNNNNNNNNNNNYNNNNNYYNYNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNYNYN", "NYNNNNNNNNNNNNNNNNNNYYNNNNNNNY", "NYNNNNYYNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNYNNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(1)";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNNNYNNNNNNNNYN", "YNNNNNNNNNNYNNNNNNNNYYNNNNNNNN", "NNNNNNYNYNNNNNNNNNNYNNNNNNNNNN", "YYNNNYNYNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNYNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNYYNNN", "NNNYNNNNYNNNNNNNYNYNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNYNNYNNNNYNNNN", "YNNNNNNNNNNNNNNNYYNNNNNNNNNNNN", "NNYNNYNNNNNNNNNYNNNYNNNNNNNNNY", "NNNNNNNNNYNYNNNNNNNNNNNNNNNNNY", "YYNNNNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNNYNYNNNNNNNY", "NNNNNNNNYNYNNNNNNNNYNNNNYYNNNN", "YNNYYNNNNNNNYYNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNYNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNYYNNNNNN", "NNNNNYNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNYNNNNNNNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNYNNNNYNNYNN", "NNNNNNNNNNNYNNNNNNNNYNNNYNNNNN", "YYYNNNNYNNNYYNNNNNNNNYNNNNYNNN", "NNNYYNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(1)";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNYYNNNNNNNNYNYN", "YNNYNNNNNNNNNNNNNNNYNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNYNNNNYNY", "NNYNNYNNNNNNNNNNYNNNNNNNYNNNNN", "NYNYNNNYNNNNYNYNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNYNNNNNNNNNY", "NYNNNNNNNNNNNNNYNNNNNYNNNNNYNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNYNNNNNNNNNYNNNNNNYNYN", "YNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNY", "NNNNNNNYNNNYNNNYYNYNNNNNYNNNYN", "YNNNYNNNNNYNNNNYNYNNNNYNNNNNNN", "NNNYNNNNNNNYNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNNNNNNYNNNNNNNNNN", "NNNYNNYNNYNNNYNNNNNNNNNNNNNNYN", "NNNNNNNYNYNNNNNNNNNNYYNNNNNYNN", "NNNNYNNYNNNNNNNNNNYNNYNNYNNNYN", "NNNNNNYNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNYNNN", "NNNNNNNYNYNNNNNNNYNNNYNNNNNNYN", "NNNNYNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNYNNNNNNNN", "NNYNNNNYYNNNNNNNNNNNNYNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNYNNNN", "NNNNNNNNNYNNNNNNNNNNNNYNNYNNNN", "NYNNNNYNNNNNNNNNYNNNYNNNNNNNNN", "NNNNNYNNNYNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(1)";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> arcs = {"NNNNNYYNNNYNYNYYNNNNYNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNYNYNNNNYNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNYNY", "NNNYNNNNNNYNNNNNNNNNNYNNNNNNNN", "YNNNNYNYNNYNNNNYNNNNNNNNNNNYYN", "NNNNNNNNYNNYNYYNYNNNNYNNNNNNNN", "NNNNNNNNNNNYNYNNNNNNNNNNYNNNNY", "NNYNNNNNNNNNNYNYNYYNNNNNNNNNNN", "YNNNNYNNNNNNNNNNYNNNYNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNYNNNYYNNNNNYYNNN", "NNNNNNNNNNYNNNNNYNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNYNNNNNNNNN", "YYNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNYNN", "NNYNNNNNNYNNNYNNNNNYNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNYYNYNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNYNNNNYN", "NNNNNNNYNNNNNNYYNNNNNNNYNNYNNN", "NNNNNNNYNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNYNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNNNNNYNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYYNNNNNNYNNNNNYNNNNNNN", "NNNNNNYNNNNNNYNNNNNNYYNNNNNNNN", "NNYNNNNNNNNNNNNNNYYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYYNNNNNNNNNNNN", "YNNNYNNNNNYNNNYNNYNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> arcs = {"NYNNNYNNNNNNNNNNYNNNYYNNNYNNYN", "NNNNNNNYNNNNNYNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNYNNNYYNNNYN", "NNNNNYNNNYNNNYNNNNYYYNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYYNNNNNNYNNNNNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNYNNNNNNNYNNNYNNN", "YNNNNYNNNNNNYNNNYNNNNNNNNNNNNN", "YNNYNNNYNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNYYNNNNNNNNNNNYYNNNNNNNN", "NNYNNYNNNNNNYNNNNNNNYNNYNNNNNY", "YNYNNNYNNNNNNNNNNNNYNYNNNNNNNY", "NNNNNNNNYNNNNNNNNNYNNNNNNNNNNN", "YNYNNNNNNNNNNNNYNNNNNNNNNNNYNN", "YYNNNNYNNNNYNNNNNNYYYNNNYNYNYN", "NYNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNYNNNNNNNNNYN", "NNYNYYNNNNNYNNNNNYNNYYNYYNNNNN", "NYNNYNNNNNYNNNNNNNNNNNYNNNNYNN", "NYNYNNNYNNNNNNYNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNYNYNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "YNNYNYNNNNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNYNYYNNNNNNYNNYNNNYNYN", "NNNYNYNNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNYYNNNNNYNNNNNNNNYNNNNNNN", "NNNNYNNNNNNYNNNNNNNNNNNNNNNNNY", "YYNNNYNNNNNYNNNYNYNNYNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> arcs = {"NNNNNYNNNNNNNYNNNNNNNNNYNNNNNN", "NNYNNYNNNNNNNNNNNNNNNNNNNNYNYN", "NNNNNYNNNNNNNNNNNNYNNNYYNNNYYN", "NNNNNYNNNNNNYNYNNNNNNNYNYYNNNY", "NNNNNYNYYNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNYNNNYNNNNNNNYNNYYN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNYY", "NNYNNNNNNNNNNNYNNYYNNYNNNNNNNN", "NNNNNNNNNNNYNYNYYNNNNNNNNYNYNN", "NNNYNNYNYNNNNNNNNNNNYNNYNYNYNN", "NNYNNNNNNYNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNYYNYNNNYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNYNNNN", "NNYNNNYNNNYNNYNNNNNNNYNYNNNNNN", "NNNYNNNNNNYNNNYNNNNNNNNNYNNNNY", "NNNNNNYNNNYNNNNYNNNNNNNNNNNNNN", "NYNNNNNYNNNNYNNNNNNYNNNNNNNNNN", "YNNNNYYNNNNNNNNNNNNNNNNNNNYNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNNNNNYNNYNNNNNYY", "YNNNNNNNYNNNNNNNNNNNNNNNNNYNNN", "NNNNYNNNNNNNNNNNNNNNNNNNYNNNNN", "YNNYYYNNNNYYNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNYYNNNNYNNNNNNNNNNN", "NNNYNNNNYNNNYNNNNNYNNNNYNNNNNN", "NNNYNNNNNNNNNNNYNNYNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNYYNNNNYNNNYNNNN", "NYNNNNNNNNNNNNNNNYNYNYNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> arcs = {"NNNNNNNYYNNNNYNNNNNNNNNYNNNNNN", "YNNNNNNYYNNYNNYNNNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNYNN", "NNNYNNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNYNNNNNNNNNNNNNNN", "NNNYYNNYNYNNNNNYNNNNNYNNNNNNNN", "NNNNNNYNNNNNYNNNNNNNNNNNNNNNNY", "YNYNNNNNNNNYNNNNNNNNYNNNYNNYNN", "NYNNNYNYNNNNNNYNNNYNNYNYNNNNNY", "YNNNNNNNNNNYNNNNNYNNNNNNNNNNNN", "NYNYYNNNNNNNNYNNNYNNNNNNNNNNNN", "NNNNYNNNNYYNNNNNNNNNNNNNNNNYYN", "NNNNNNYNNNNYYNNYYNNNNNNYYNYNYN", "NNNNNNNNNNNYNYNYNNNNYNNNNNNYYN", "NNNNYNNNNNNNNNYNNNNNNNNNNYNYNN", "NNNNYNNNNNYNNNNYNNNNYNNNNYNNNY", "YNNYNYNNNNNNNNYNNNYNNNNNNNNNNY", "YNNNNNNNNNNYNNNNNNNNYNNNNNNNYN", "NYNNNNNNNNNYNNYYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYYNNNNNNYNNYYNNYNNNNNYNNNNNNN", "NNNNNYYYNNNNYNNNYNNNYNNYYNYNNN", "NYYNNYNNNNNYNNNNNNYNNNYNNNNNNN", "NYNNYNNNYNNNNYNNNNNNNNYNNNNNNN", "YNNNNNNNYNNNNYNNNNNNNNYNNNNNYN", "NNNNNNYNNNNNNYNYYYYNYYYNNYNNNN", "YNNNNNNYNNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNYNNNNNNYNYNNNNYNN", "YNNNNNNNNNNNYYNNNNNYNYNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> arcs = {"NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000100001000010100100001010010101101001010110101111011010111101111111110(1)";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> arcs = {"NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000110000111000111100111110(1)";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00010001000110111001100111011101110(1)";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000(0001)";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000001010001010001010100(01)";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNYNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNYN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000010000100010000100011000100011000110011000110011100110011100111011100111011110111011110111111110(1)";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> arcs = {"NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000110000000000000111000000000000111100000000000111110000000000111111000000000111111100000000111111110000000111111111000000111111111100000111111111110000111111111111000111111111111100111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000010100000001010100000101010100(01)";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNYN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000001001001000(001)";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNY", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000100001000010010100101001010010110101101011010110111101111011110(1)";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNYNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNNNNYNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0010010010010110010010110111110110(1)";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> arcs = {"NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0101010111011101110(1)";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> arcs = {"NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNYNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNYNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0101110101010(1)";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> arcs = {"NNNYNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNYNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNYNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0111010(1)";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> arcs = {"NNNNYNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNYNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNYNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNYNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0111010(1)";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNYNNYNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNYNNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNYNNNNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNYNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> arcs = {"NNNNNYNNNNNYNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNYNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNYNNNNYNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNYNNNNNNNNNNNYNNNNNYN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNYNNNNNYNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNNNYNNNNNNNNNNYYNYNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNYNNNYNNNNNNYNNNNNNNNNNNNY", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNYNNNNNNNNN", "NNNYNNNNNNNNNNNNNYNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYYNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNYNYNYNNNNNYNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NYNYNNNYNNNNNNNNNNNNNNNNNYNYNN", "YNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNYNNNNNNYY", "NNNNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNYNNNNNNYNNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNYNNNNNNNNNNNNNNNN", "NNYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> arcs = {"NNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNNNNYNNNNNYNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNYNYYYNNNYNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNYNNNNYN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNYNNYNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> arcs = {"NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNNNNNNYNNN", "YNNYNYNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNNNNNYNNNNNNNNYN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNYNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNYNYNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNYNYNYNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNYNNN", "NNNNNNNNYYNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNYNNNNNYNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNYNNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNYNNNNNYNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNYYNNNNNNYNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNYYNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNYNNYNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNYNNNNNNNNNNNNNNN", "YNNNNNNNNYNYYNNNNNNNNNNNNNNNNN", "NNNNNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYYNNNNNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNYNNNNNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110101110101110(1)";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNYNNYNYNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNYN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNYNNNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYYNNNNNNYNYYNNNNNNYNYNNNNNN", "NNNNNYNNNNNYNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNYNNNNNNN", "NNNYNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNYNNN", "NNNNNNYNNYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNYNNNNYYYNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNYNNNNYNY", "YNNNNNNNNYNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNYNNNNNNNNNNNNYYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "010(1)";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> arcs = {"NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNYNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0010(1)";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> arcs = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> arcs = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> arcs = {"NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0010010010010010010010110110110110110110110(1)";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0101010111010101010(1)";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> arcs = {"NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NYNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNYN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNYNNYNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNYNYNNNNNNNYNNNNNNNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNNNYNNYNNNNNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNYNNNYNNNNNN", "NNNNYNNYNNNNNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNYNNNNNNYNNNYNYNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNYNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000000000110000000000000000000000000001110000000000000000000000000011110000000000000000000000000111110000000000000000000000001111110000000000000000000000011111110000000000000000000000111111110000000000000000000001111111110000000000000000000011111111110000000000000000000111111111110000000000000000001111111111110000000000000000011111111111110000000000000000111111111111110000000000000001111111111111110000000000000011111111111111110000000000000111111111111111110000000000001111111111111111110000000000011111111111111111110000000000111111111111111111110000000001111111111111111111110000000011111111111111111111110000000111111111111111111111110000001111111111111111111111110000011111111111111111111111110000111111111111111111111111110001111111111111111111111111110011111111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> arcs = {"NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000010000000000000110000000000000110000000000001110000000000001110000000000011110000000000011110000000000111110000000000111110000000001111110000000001111110000000011111110000000011111110000000111111110000000111111110000001111111110000001111111110000011111111110000011111111110000111111111110000111111111110001111111111110001111111111110011111111111110011111111111110111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNYNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000010000000001000000100100000010010000001001000100100100010010010001001001100100100110010010011001001101100100110110010011011001101101100110110110011011011101101101110110110111011011111101101111110110111111011111111101111111110(1)";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000100000100000110000100000110000110000111000110000111000111000111100111000111100111100111110111100111110111110111111111110(1)";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> arcs = {"NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00001000010000100001010010100101001010010101101011010110101101011110111101111011110(1)";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000000000110000000000000000000000000001110000000000000000000000000011110000000000000000000000000111110000000000000000000000001111110000000000000000000000011111110000000000000000000000111111110000000000000000000001111111110000000000000000000011111111110000000000000000000111111111110000000000000000001111111111110000000000000000011111111111110000000000000000111111111111110000000000000001111111111111110000000000000011111111111111110000000000000111111111111111110000000000001111111111111111110000000000011111111111111111110000000000111111111111111111110000000001111111111111111111110000000011111111111111111111110000000111111111111111111111110000001111111111111111111111110000011111111111111111111111110000111111111111111111111111110001111111111111111111111111110011111111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000000000000010010000000000100100100000001001001001000010010010010010100100100100101101001001001011011010010010110110110100101101101101101011011011011011110110110110111111101101101111111111011011111111111110(1)";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000010000100000000000000000001000010000100000000000000100001000010000100000(00001)";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> arcs = {"NYNNNNNYNNNNNNNYNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000010101001010101111010(1)";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000100000000000001010000000000010100000000000101010000000001010100000000010101010000000101010100000001010101010000010101010100000101010101010001010101010100(01)";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000000000110000000000000000000000000001110000000000000000000000000011110000000000000000000000000111110000000000000000000000001111110000000000000000000000011111110000000000000000000000111111110000000000000000000001111111110000000000000000000011111111110000000000000000000111111111110000000000000000001111111111110000000000000000011111111111110000000000000000111111111111110000000000000001111111111111110000000000000011111111111111110000000000000111111111111111110000000000001111111111111111110000000000011111111111111111110000000000111111111111111111110000000001111111111111111111110000000011111111111111111111110000000111111111111111111111110000001111111111111111111111110000011111111111111111111111110000111111111111111111111111110001111111111111111111111111110011111111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000000000000000000000000001)";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000100000000000001010000000000010100000000000101010000000001010100000000010101010000000101010100000001010101010000010101010100000101010101010001010101010100(01)";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> arcs = {"NYNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000001000000010010000000100100001001001000010010010100100100101001001011010010010110100101101101001011011010110110110101101101111011011011110110111111101101111111011111111110(1)";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000110000000000000111000000000000111100000000000111110000000000111111000000000111111100000000111111110000000111111111000000111111111100000111111111110000111111111111000111111111111100111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000000000000000000001000000001000000000001000000001000000001001000000001000000001001000001001000000001001000001001000001001001000001001000001001001001001001000(001)";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> arcs = {"NYYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000000000110000000000000000000000000001110000000000000000000000000011110000000000000000000000000111110000000000000000000000001111110000000000000000000000011111110000000000000000000000111111110000000000000000000001111111110000000000000000000011111111110000000000000000000111111111110000000000000000001111111111110000000000000000011111111111110000000000000000111111111111110000000000000001111111111111110000000000000011111111111111110000000000000111111111111111110000000000001111111111111111110000000000011111111111111111110000000000111111111111111111110000000001111111111111111111110000000011111111111111111111110000000111111111111111111111110000001111111111111111111111110000011111111111111111111111110000111111111111111111111111110001111111111111111111111111110011111111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000000000110000000000000000000000000001110000000000000000000000000011110000000000000000000000000111110000000000000000000000001111110000000000000000000000011111110000000000000000000000111111110000000000000000000001111111110000000000000000000011111111110000000000000000000111111111110000000000000000001111111111110000000000000000011111111111110000000000000000111111111111110000000000000001111111111111110000000000000011111111111111110000000000000111111111111111110000000000001111111111111111110000000000011111111111111111110000000000111111111111111111110000000001111111111111111111110000000011111111111111111111110000000111111111111111111111110000001111111111111111111111110000011111111111111111111111110000111111111111111111111111110001111111111111111111111111110011111111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000001000000010010000000100100001001001000010010010100100100101001001011010010010110100101101101001011011010110110110101101101111011011011110110111111101101111111011111111110(1)";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> arcs = {"NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYYY", "NNNNNNNNYN", "NNNNNNNNNY", "YNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000111000001111100011111110(1)";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> arcs = {"NYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000010000100000001000010000100100001000010010100100001001010010100100101001010010110100101001011010110100101101011010110110101101011011110110101101111011110110111101111011111110111101111111111110(1)";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> arcs = {"NYNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000110000000000001110000000000011110000000000111110000000001111110000000011111110000000111111110000001111111110000011111111110000111111111110001111111111110011111111111110(1)";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000000000110000000000000000000000000001110000000000000000000000000011110000000000000000000000000111110000000000000000000000001111110000000000000000000000011111110000000000000000000000111111110000000000000000000001111111110000000000000000000011111111110000000000000000000111111111110000000000000000001111111111110000000000000000011111111111110000000000000000111111111111110000000000000001111111111111110000000000000011111111111111110000000000000111111111111111110000000000001111111111111111110000000000011111111111111111110000000000111111111111111111110000000001111111111111111111110000000011111111111111111111110000000111111111111111111111110000001111111111111111111111110000011111111111111111111111110000111111111111111111111111110001111111111111111111111111110011111111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000110000000000001110000000000011110000000000111110000000001111110000000011111110000000111111110000001111111110000011111111110000111111111110001111111111110011111111111110(1)";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> arcs = {"NYNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "000000000000010010000000000100100100000001001001001000010010010010010100100100100101101001001001011011010010010110110110100101101101101101011011011011011110110110110111111101101101111111111011011111111111110(1)";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000010001000000000000000000001000100010000000000000000100010001000100000000000010001000100010001000000001000100010001000100010000100010001000100010001000110001000100010001000100011001100010001000100010001100110011000100010001000110011001100110001000100011001100110011001100010001100110011001100110011000110011001100110011001100111001100110011001100110011101110011001100110011001110111011100110011001100111011101110111001100110011101110111011101110011001110111011101110111011100111011101110111011101110111101110111011101110111011111111011101110111011101111111111110111011101110111111111111111101110111011111111111111111111011101111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0111010111010111010111010111010(1)";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000000111000000000000000000000000111110000000000000000000000111111100000000000000000000111111111000000000000000000111111111110000000000000000111111111111100000000000000111111111111111000000000000111111111111111110000000000111111111111111111100000000111111111111111111111000000111111111111111111111110000111111111111111111111111100(1)";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> arcs = {"NYNNN", "YNYNN", "NNNNY", "NYYNN", "NNNYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> arcs = {"NYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000000010100000000000000000000000001010100000000000000000000000101010100000000000000000000010101010100000000000000000001010101010100000000000000000101010101010100000000000000010101010101010100000000000001010101010101010100000000000101010101010101010100000000010101010101010101010100000001010101010101010101010100000101010101010101010101010100(01)";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000010000000000001000100000000100010000000010001000100001000100010000100010001000110001000100011000100010001100110001000110011000100011001100110001100110011000110011001100111001100110011100110011001110111001100111011100110011101110111001110111011100111011101110111101110111011110111011101111111101110111111110111011111111111101111111111110(1)";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000100000010000000000000001000000100000010000000010000001000000100000010100000010000001000000101000010100000010000001010000101000010100000010100001010000101000010101000010100001010000101010010101000010100001010100101010010101000010101001010100101010010101010010101001010100101010110101010010101001010101101010110101010010101011010101101010110101010110101011010101101010111101010110101011010101111010111101010110101011110101111010111101010111101011110101111010111111010111101011110101111110111111010111101011111101111110111111010111111011111101111110111111110111111011111101111111111111110111111011111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> arcs = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0(1)";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> arcs = {"NYNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000101000000000001010100000000010101010000000101010101000001010101010100(01)";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(01)";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000000000000010100000000000000000000000001010100000000000000000000000101010100000000000000000000010101010100000000000000000001010101010100000000000000000101010101010100000000000000010101010101010100000000000001010101010101010100000000000101010101010101010100000000010101010101010101010100000001010101010101010101010100000101010101010101010101010100(01)";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNY", "YYNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000000011000000000000000001110000000000000000111100000000000000011111000000000000001111110000000000000111111100000000000011111111000000000001111111110000000000111111111100000000011111111111000000001111111111110000000111111111111100000011111111111111000001111111111111110000111111111111111100011111111111111111001111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(000000000000000000000000000001)";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> arcs = {"NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0000000000000000000000000000110000000000000000000000000001110000000000000000000000000011110000000000000000000000000111110000000000000000000000001111110000000000000000000000011111110000000000000000000000111111110000000000000000000001111111110000000000000000000011111111110000000000000000000111111111110000000000000000001111111111110000000000000000011111111111110000000000000000111111111111110000000000000001111111111111110000000000000011111111111111110000000000000111111111111111110000000000001111111111111111110000000000011111111111111111110000000000111111111111111111110000000001111111111111111111110000000011111111111111111111110000000111111111111111111111110000001111111111111111111111110000011111111111111111111111110000111111111111111111111111110001111111111111111111111111110011111111111111111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> arcs = {"NYNNNNNNNNNNNN", "NNYNNNNNNNNNNN", "NNNYNNNNNNNNYN", "NNNNYYNNNNNNNN", "YNNNNNNNNNNNNN", "NNNNNNYNNNNNNN", "NNNNNNNYNNNNNN", "NNNNNNNNYNNNNN", "NNNNNNNNNYNNNN", "NNNYNNNNNNNNNN", "NNYNNNNNNNNNNN", "NNNNNNNNNNYNNY", "NNNNNNNNNNNYNN", "NNNNNNNNNNNYNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0101110(1)";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> arcs = {"NYNYNN", "NNYNNN", "NNNYNN", "NNNNYN", "NNNNNY", "YNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00(01)";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> arcs = {"NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "00000000000000110000000000000111000000000000111100000000000111110000000000111111000000000111111100000000111111110000000111111111000000111111111100000111111111110000111111111111000111111111111100111111111111110(1)";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> arcs = {"NYNNNNN", "NNYNNYN", "NNNYNNN", "NNNNYNN", "YNNNNNY", "YNNNNNN", "NNYNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "0011110(1)";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> arcs = {"NYNNNNNN", "NNYNNNNN", "YNNYNNNN", "NNNNYNNN", "NNNNNYNN", "NNNNNNYN", "NNNNNNNY", "NNYNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "(001)";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> arcs = {"NYNNNNN", "NNYNNNY", "NNNYNNN", "NNNNYNN", "NNNYNYN", "NNNNNNY", "YNNNNNN"};
    AllCycleLengths* pObj = new AllCycleLengths();
    clock_t start = clock();
    string result = pObj->findAll(arcs);
    clock_t end = clock();
    delete pObj;
    string expected = "01110(1)";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=12177&pm=9764
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define SZ(X) ((int)(X.size()))
#define two(X) (1<<(X))
#define contain(S,X) (((S)&two(X))!=0)
 
const int ML=5000;
 
class AllCycleLengths
{
public:
  int n;
  int G[60],A[60],A0[60];
  char S[ML+5];
  string findAll(vector <string> vs)
  {
    n=SZ(vs);
    for (int i=0;i<n;i++) G[i]=0;
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) if (vs[i][j]=='Y') G[i]|=two(j);
    for (int i=0;i<n;i++) A[i]=two(i);
    for (int L=1;L<=ML;L++)
    {
      for (int i=0;i<n;i++) A0[i]=A[i];
      for (int i=0;i<n;i++) A[i]=0;
      for (int i=0;i<n;i++) for (int j=0;j<n;j++) if (contain(A0[i],j)) A[i]|=G[j];
      S[L]='0';
      for (int i=0;i<n;i++) if (contain(A[i],i)) S[L]='1';
    }
    int result=ML,cutpos=-1;
    for (int d=1;d<=ML;d++)
    {
      int k=ML-d;
      for (;k>0 && S[k]==S[k+d];k--);
      if (k+d<result) result=k+d,cutpos=k;
    }
    string retstr="";
    for (int i=1;i<=result;i++)
    {
      if (i==cutpos+1) retstr+="(";
      retstr+=S[i];
    }
    return retstr+")";
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/