/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9914
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

class DeckRearranging {
public:
    string rearrange(string deck, vector<int> above);
};

string DeckRearranging::rearrange(string deck, vector<int> above) {
    string ret;
    return ret;
}


int test0() {
    string deck = "BRBRR";
    vector<int> above = {0, 0, 1, 0, 3};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RRBRB";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string deck = "RRRRRR";
    vector<int> above = {0, 1, 2, 0, 1, 3};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRR";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string deck = "RBRRBRBB";
    vector<int> above = {0, 1, 2, 3, 4, 5, 6, 7};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBRRBRBB";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string deck = "RBRRBRBB";
    vector<int> above = {0, 0, 0, 0, 0, 0, 0, 0};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BBRBRRBR";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string deck = "RBRRBRBB";
    vector<int> above = {0, 1, 0, 0, 4, 0, 6, 7};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRBBBB";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string deck = "R";
    vector<int> above = {0};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string deck = "B";
    vector<int> above = {0};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string deck = "RB";
    vector<int> above = {0, 0};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BR";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string deck = "RB";
    vector<int> above = {0, 1};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RB";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string deck = "RBRBRBRBRBBBRBRBRBRBRBRBRBRBR";
    vector<int> above = {0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 20};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBBBRRRBBBRRRBBBRRBBRBBRRRBRB";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string deck = "RBRRRRBBRRBRBRRBBBBBRBRRBBBRRRRBBBRRRBRBRRRRBRBBRB";
    vector<int> above = {0, 0, 1, 0, 1, 3, 4, 2, 4, 1, 4, 9, 10, 5, 11, 9, 10, 3, 15, 17, 12, 21, 22, 9, 14, 5, 20, 0, 26, 20, 7, 24, 15, 24, 18, 12, 8, 33, 35, 39, 13, 18, 28, 8, 19, 12, 4, 42, 39, 39};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRBBBBRRRBRRBRRRRRBBRBBRRBBRRRRBBBBBBBRRBRBRRBRB";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string deck = "RBBBRRRBRBBBRBBRRRBRBRRRRRRRRRRBRRBRBRRBBRBRRRBBBR";
    vector<int> above = {0, 1, 0, 3, 3, 1, 6, 3, 4, 5, 10, 4, 0, 0, 1, 14, 16, 4, 0, 4, 18, 8, 15, 8, 18, 25, 8, 1, 23, 16, 20, 7, 23, 14, 30, 11, 35, 1, 29, 35, 39, 25, 6, 41, 23, 20, 3, 3, 39, 29};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BRRBBBBRBRBBRRRRRRRRBBRRRBRBRRRRRRRBRRRRBBBBBRBRBR";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string deck = "BBRRRBBBBBBBRRRBBRBRBRBRBBRRBBRBBBRRRBBRBBRRBBBBRB";
    vector<int> above = {0, 1, 1, 2, 3, 5, 1, 0, 7, 6, 3, 5, 3, 12, 12, 10, 10, 15, 4, 4, 9, 16, 16, 11, 4, 24, 2, 15, 11, 11, 24, 2, 31, 32, 10, 3, 28, 25, 17, 36, 5, 27, 8, 40, 35, 45, 7, 2, 44, 40};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBRRBBBRRBRBBRRBBBBBRRRRBBBBBBBRRRBBRRBRBRRRBBBB";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string deck = "BBBBBRRBRBRBBBRRBBBRBRRBRRRRRBRRBRRBRBBBBBBRBRBBBB";
    vector<int> above = {0, 0, 1, 1, 2, 1, 4, 2, 2, 3, 10, 2, 11, 4, 14, 5, 7, 10, 4, 15, 11, 12, 2, 17, 23, 14, 15, 23, 7, 22, 26, 28, 28, 7, 31, 31, 30, 27, 22, 34, 4, 39, 13, 30, 7, 12, 28, 37, 20, 18};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BRRBBRBBBRRRRBBBBBBBRBRRBBRBBBBBRBRRBRBBBRRBBRRBRR";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string deck = "BRBBBBBBRBRRRBBBRBBRBBBRRBRRRRRBBRBBRBRRBBBRBBBRBB";
    vector<int> above = {0, 0, 2, 1, 4, 1, 3, 2, 3, 3, 3, 5, 7, 12, 4, 15, 0, 14, 7, 12, 0, 9, 22, 5, 24, 22, 20, 17, 28, 25, 21, 20, 31, 11, 24, 21, 0, 12, 33, 35, 25, 12, 33, 2, 12, 8, 18, 9, 38, 32};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBRRRBBRBRRBBBBBBBRBRRRBRBRBBBBBBBRBRBBBBBRRBRBRBR";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string deck = "RBBRRRRRBRBRRBBBBRBBRBBBBBBBBBBRBBRBRBRRRRBBBRBBBR";
    vector<int> above = {0, 1, 0, 2, 0, 5, 2, 1, 0, 8, 7, 10, 8, 6, 11, 1, 0, 16, 1, 17, 0, 9, 3, 6, 20, 17, 16, 22, 15, 17, 16, 3, 22, 28, 32, 22, 4, 13, 18, 19, 22, 34, 5, 32, 39, 31, 23, 1, 25, 8};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBBBRRBBRBBBRRBRBBRBRRRBBBBRBBBRBBBRBBBRBRBBBRBRRR";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string deck = "BRRRRRBBRRRBBBBRRRRRBRRRRRRBBBBRRBBBRRBBBBBRBBBRRR";
    vector<int> above = {0, 0, 0, 3, 2, 1, 0, 0, 6, 1, 5, 10, 9, 8, 3, 1, 14, 3, 7, 11, 11, 16, 8, 15, 5, 0, 4, 4, 20, 8, 6, 18, 20, 4, 22, 2, 22, 26, 1, 33, 40, 21, 39, 10, 29, 45, 29, 41, 45, 25};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBBBRRBBRBRRBBRBRRRRRRBRBRRRBRBBRRRBBRBRBBRRBBRRBB";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string deck = "BRBBBRBRRRRRRBRRBBRBRRBBBBRRRRRRBRRBBRRBRRRBRBRRBR";
    vector<int> above = {0, 0, 2, 3, 0, 0, 3, 6, 5, 6, 0, 9, 9, 0, 7, 11, 2, 10, 15, 12, 10, 20, 6, 11, 0, 22, 19, 2, 19, 12, 17, 12, 30, 25, 2, 28, 32, 15, 23, 6, 9, 34, 14, 10, 27, 31, 45, 40, 2, 24};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBRRRBBRBRBRBBBRRRRRRBRRBRRBRRBRBRRRRBRRRRBBRBRRB";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string deck = "BBBRRRRRRBRBRRRRRRBBRBBBBBRBBRBRRRBBBBRRBBRRRBBRBR";
    vector<int> above = {0, 1, 1, 3, 2, 2, 6, 3, 3, 9, 4, 10, 6, 1, 3, 1, 15, 11, 17, 3, 17, 9, 19, 5, 12, 5, 4, 13, 2, 22, 25, 23, 6, 2, 24, 21, 3, 3, 4, 28, 27, 13, 4, 21, 33, 30, 23, 17, 37, 37};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BRRBRRBBRBRRBBBBRRRRRBRBBRBRRBRBBBRRRRBBRRRBBRBRBB";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string deck = "BBRBRBBRRBRBBRBBBBBRBRRBBBBRRBBRBRBRRBRRBBRBRRRBRR";
    vector<int> above = {0, 1, 2, 0, 4, 2, 5, 2, 5, 7, 6, 0, 12, 12, 1, 7, 7, 17, 15, 6, 7, 3, 20, 7, 18, 22, 14, 7, 0, 5, 3, 4, 14, 26, 8, 29, 24, 37, 13, 32, 31, 19, 7, 9, 17, 17, 21, 31, 25, 21};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBBBRBRRBBBBRBRRBRRRBRRBBBRBBRBRRBRBBBRRBRRBRBRBBB";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string deck = "RBRBRRRRBRBBRBBBBBRRBRRBRBBRRBRRRBRBRBBRBBRRRRRRRB";
    vector<int> above = {0, 0, 0, 3, 4, 3, 2, 2, 2, 5, 8, 1, 4, 10, 14, 12, 1, 2, 6, 0, 17, 0, 5, 18, 1, 4, 23, 19, 28, 25, 4, 13, 10, 22, 9, 17, 36, 31, 26, 15, 15, 27, 37, 9, 23, 2, 32, 11, 13, 43};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRRBBBRRRRRBRBBRBRRRBRRRRRRBBBRRBBBBBBBBBRBRBRR";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string deck = "BBBRRBRBRBRRRBRBBBRBBBRRRBRBRBRRRRBBRRBRRBBRBBRBBR";
    vector<int> above = {0, 0, 2, 1, 2, 4, 6, 5, 1, 5, 9, 9, 11, 2, 6, 9, 12, 14, 7, 13, 13, 4, 19, 14, 4, 3, 4, 16, 12, 4, 28, 24, 11, 28, 20, 16, 12, 11, 34, 20, 18, 25, 29, 29, 8, 29, 13, 44, 41, 40};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BRBBBRRRBBRBRRRRRRRBRBBRBBBBBBBRRBBBBRRBRRBRBRBRRR";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string deck = "RRBBRRRRBRRRBBBBRBRBRBRRRRBRRRRBBBBRRRBRRBRRBRRRRB";
    vector<int> above = {0, 0, 2, 3, 4, 1, 4, 1, 0, 9, 7, 4, 3, 9, 14, 3, 2, 5, 4, 13, 16, 14, 10, 10, 12, 2, 25, 22, 27, 20, 17, 15, 4, 21, 8, 16, 10, 15, 17, 5, 28, 29, 24, 12, 8, 45, 8, 29, 41, 37};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BRRRBRRRRBBBBRRBRRRRRBRRRBBRRRRBBRBBBBRRRRRBRRBRBR";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string deck = "RRRBRBBBBBRBRBRBBBBBRRRBRBRRRRBBRRRBRRRRRBBRBRRBRR";
    vector<int> above = {0, 0, 0, 0, 0, 4, 2, 5, 7, 6, 6, 10, 5, 12, 10, 13, 9, 11, 6, 3, 1, 6, 19, 10, 13, 9, 15, 9, 28, 11, 30, 27, 22, 13, 30, 32, 0, 16, 25, 34, 13, 25, 38, 40, 15, 36, 21, 11, 30, 33};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRBBBRRRRRBBRRBBRBRBRRRRBBBBBRRRRRBBRBBRRRBBBRRRB";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string deck = "RRRBBRBBBBRBRRRBBBBBRBRRRBRRRBBBBRRBBRBBRRRBRBBRRR";
    vector<int> above = {0, 0, 1, 0, 0, 2, 3, 1, 0, 1, 2, 7, 2, 5, 11, 7, 16, 13, 4, 7, 15, 19, 16, 13, 23, 6, 18, 23, 15, 28, 24, 2, 28, 14, 3, 6, 11, 18, 18, 18, 11, 8, 37, 11, 22, 12, 21, 9, 40, 28};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBRRRBBRRBBBBRRBBBBBRBRBRBRRBRRBRRRRBRRBRRBRBRRBB";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string deck = "RBRBRBBBBRRBRRBRRRRBRBRBBRRBBRRRRBRBRRBRBRRRRBBBRR";
    vector<int> above = {0, 0, 2, 2, 2, 0, 4, 1, 3, 9, 4, 7, 5, 13, 13, 0, 13, 15, 16, 0, 0, 8, 18, 3, 0, 4, 21, 8, 1, 2, 16, 4, 23, 0, 3, 25, 14, 7, 5, 26, 18, 35, 34, 7, 26, 8, 7, 6, 45, 10};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBRRBBRBRRBRRBRRBBBBRBBBRBRRRRRBRBBBRRRRRRRRRRRBR";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string deck = "BRBRBBBBRRBRRRRRBRBBRBRRBBRBBBBBRBRBRRBBBBRRRBBRRB";
    vector<int> above = {0, 0, 2, 3, 3, 3, 1, 1, 8, 5, 6, 1, 8, 1, 14, 1, 8, 0, 10, 9, 20, 5, 2, 7, 15, 19, 18, 23, 6, 16, 7, 31, 24, 14, 34, 19, 17, 32, 12, 14, 17, 26, 13, 13, 35, 23, 7, 15, 42, 40};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRRBBBBRBBBRRRBBBBBBBRBBBBBRBBRRBRBRBBBRRRRRRBR";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string deck = "RBRRRBBRRRRBBBRRRBRBRBBBRBRRBRBRRRBBRBRBBRRBRBRRBB";
    vector<int> above = {0, 1, 0, 3, 3, 2, 6, 7, 4, 0, 2, 0, 3, 5, 8, 7, 13, 11, 1, 1, 12, 1, 10, 4, 17, 10, 19, 21, 5, 17, 6, 14, 3, 31, 16, 22, 12, 29, 15, 11, 9, 24, 21, 30, 44, 13, 6, 34, 37, 21};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBRRBRBBRBRBBBRRBBRRBRBRBRBRRRBRBBRRRBBBRRRRRRBRR";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string deck = "RRBBBBBBBRRBRBRBBBBBBRRRBRBRRBBBBRBBRBBRRBRBBBRBRR";
    vector<int> above = {0, 1, 2, 2, 2, 0, 2, 1, 6, 2, 6, 4, 7, 1, 12, 15, 8, 15, 3, 18, 15, 13, 19, 14, 10, 8, 18, 26, 0, 13, 26, 31, 2, 16, 21, 13, 9, 6, 13, 20, 12, 41, 8, 43, 41, 16, 41, 22, 29, 13};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBBBBBBRRRBRBRRRBBRBBBBBRRRRBRRRBBBRBBBRBBBRRBBBBB";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string deck = "BBBBBBBBBRBBBBBBRBBRRRRBBBBBBBRRBBRBBBBBRBBRRBRBRB";
    vector<int> above = {0, 0, 2, 1, 1, 3, 5, 4, 1, 9, 0, 2, 8, 10, 0, 4, 13, 14, 9, 3, 6, 19, 10, 1, 10, 14, 9, 2, 5, 27, 25, 1, 4, 29, 18, 17, 19, 35, 4, 31, 1, 16, 23, 5, 1, 30, 6, 17, 47, 33};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BRRRBBRRBBBBBRBBRBBBBBBBBRBBRBBBBBBBBBRBBRBBRBBBRR";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string deck = "RBRRBRBB";
    vector<int> above = {0, 1, 0, 0, 4, 0, 6, 7};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRBBBB";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string deck = "RBRRBRBB";
    vector<int> above = {0, 1, 2, 3, 4, 5, 6, 7};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBRRBRBB";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string deck = "BRB";
    vector<int> above = {0, 0, 1};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "RBB";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string deck = "RB";
    vector<int> above = {0, 0};
    DeckRearranging* pObj = new DeckRearranging();
    clock_t start = clock();
    string result = pObj->rearrange(deck, above);
    clock_t end = clock();
    delete pObj;
    string expected = "BR";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22671912&rd=13511&pm=9914
********************************************************************************
#include<iostream>
#include<sstream>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;
 
class DeckRearranging
{
  public:
  string rearrange(string d, vector <int> a)
  {
    string ans="";
    ans+=d[0];
    for(int i=1;i<a.size();i++)
    {
      string res=ans.substr(0,a[i]);
      res+=d[i];
      res+=ans.substr(a[i],ans.size()-a[i]);
      ans=res;
    }
    return ans;
  }
};

********************************************************************************
*******************************************************************************/