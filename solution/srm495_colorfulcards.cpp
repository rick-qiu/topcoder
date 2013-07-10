/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11302
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

class ColorfulCards {
public:
    vector<int> theCards(int N, string colors);
};

vector<int> ColorfulCards::theCards(int N, string colors) {
    vector<int> ret;
    return ret;
}


int test0() {
    int N = 5;
    string colors = "RRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 7;
    string colors = "BBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 6};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 6;
    string colors = "RBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 4, 5};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 58;
    string colors = "RBRRBRBBRBRRBBRRBBBRRBBBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, 17, 18, 19, 23, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 47, 53};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 495;
    string colors = "RBRRBRBBRBRRBBRRBBBRRBBBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 2;
    string colors = "R";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 5;
    string colors = "RB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 4;
    string colors = "RRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 7;
    string colors = "BRRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 7;
    string colors = "RRBRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 9;
    string colors = "RRRBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 6, 8, 9};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 12;
    string colors = "RBBBBRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, 11, 12};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 11;
    string colors = "RRRRBBBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 15;
    string colors = "RBRRBBBBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 4, 5, 7, 8, 9, 10, 12, 13};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 25;
    string colors = "RRRRRRRRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 7, 11, 13, 17, 19, -1, 23};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 69;
    string colors = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 60, 62, 63, 64, 65, 66, 68, 69};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 69;
    string colors = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 60, 62, 63, 64, 65, 66, 68, 69};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 69;
    string colors = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 51, 52, 54, 55, 56, 57, 58, 60, 62, 63, 64, 65, 66, 68, 69};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 622;
    string colors = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 1000;
    string colors = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 232;
    string colors = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 231;
    string colors = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 229;
    string colors = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 286;
    string colors = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 1000;
    string colors = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 107;
    string colors = "BBBRBBBBRBRRRBRRBRBBRBBBBBBRRRRBBRBRBRBBBRRRRBRBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 6, 7, 8, 9, 10, 12, 13, -1, 17, 19, 23, -1, 29, 31, -1, 37, -1, -1, -1, -1, -1, -1, -1, -1, -1, 53, 59, 61, 67, -1, -1, 71, 72, 73, -1, 79, 80, 81, 82, 83, 89, 97, 101, 102, 103, 104, 105, 106};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 109;
    string colors = "RBRBRRRBBBRRBRBBBRBBRBRRBRBBBRRRRBRBBRBRRBRBRRBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 79, -1, 83, 89, -1, 97, -1, 101, 103, 104, 105, 106, 108};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 90;
    string colors = "BRBRRBBRRRBBBBBBRBRRBBBBBBBBBRBBBBBBRBBRBRRBBRBRRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 53, 54, 55, 56, 57, 58, 60, 61, -1, -1, 67, -1, 71, 73, -1, -1, 79, -1, 83, 89, 90};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 128;
    string colors = "BRBBRBRBBBRBBBBRRBBRRRRRBRBRRRRRBBBRBBRRBRRRBBRBRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 113, -1, 127, 128};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 155;
    string colors = "RRBBBBBBRRBRRBRBRRBBRBRRBRRRRRRRRRBRRRRRRBRBBBRBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 6, 8, 9, 10, 12, 13, 17, 18, 19, 23, -1, 29, 30, 31, 37, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 120;
    string colors = "RBRBBRBBBBRBBRBBRRRBBBBRBBRRRRBBRBRBRRBRBBBRRRBBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 138;
    string colors = "BRBRBRBRRRRRBRBBRRRRBBRBRRBRRRRBBRRRBRRBRRBRBBRBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 37, 41, 43, 47, -1, -1, 53, -1, 59, 61, -1, 67, 71, 73, 79, -1, -1, 83, 89, 97, -1, 101, 103, -1, 107, 109, -1, 113, -1, -1, 127, -1, 131, 137};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 98;
    string colors = "RRBRBRBRBRRRRBBBBBBBBRBRBRBRBBBRRBRBBBRRBBRRRBBBRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 79, 83, 89, -1, -1, -1, 97, 98};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 110;
    string colors = "RRBBBRBBBRRRBBBRRRRBRBBRBBRBBRBBBRRBBBRRBBRRBBRRBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, 17, 19, 23, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 79, 83, -1, -1, 89, 97, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 98;
    string colors = "BBRBRRBBRRBBBBBBBBRRBBRBRBRBBRBBRBBBRBRBBRBBRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, 17, 19, 20, 21, 22, 24, 25, 26, 27, 28, 29, 31, -1, -1, 37, -1, 41, 42, 43, -1, -1, 47, -1, -1, 53, -1, -1, -1, 59, 60, 61, -1, -1, 67, -1, -1, 71, 73, 79, 83, 89, 97};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 135;
    string colors = "BRRRBBRBBRRBRRRBRRRBRBRRBRBBBRBRBRRBBRRBBRBBRRBRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 141;
    string colors = "BRRBRRBRRRBRBRBRRRRBRRRBRBRRRBRRRRRRRBBBBBBRBRRRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 7, -1, 11, 13, 17, 18, 19, -1, 23, -1, 29, 31, 37, 41, 42, 43, 47, 53, -1, 59, 60, 61, 67, 71, 72, 73, 79, 83, 89, 97, 101, 103, -1, -1, -1, -1, -1, -1, 113, -1, 127, 131, 137, 138, 139};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 127;
    string colors = "RBBRBRBRRRRRBBRBRRRRBBRBBRBBBRBRBBBRRRRBBBBBRBBRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 37, -1, 41, 43, 47, 53, -1, -1, -1, -1, -1, 67, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 113, -1, 127};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 102;
    string colors = "BBBBRBBBRRBBRBBBBRBRBRBRBBBBBBBRRRBBBBBRBRBRBBRRRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, 17, 19, -1, -1, 23, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 53, 59, 61, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 114;
    string colors = "BBRBRRBRRRRBRRBRBRBRRBRBBBRBRRRBBRBBRRRBBRBRBRBRBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 5, 6, 7, 11, 12, 13, 17, 19, 23, -1, 29, 31, -1, 37, -1, 41, 42, 43, 47, -1, 53, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 79, -1, -1, 83, 89, 97, -1, -1, 101, 102, 103, -1, 107, 108, 109, -1, -1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 138;
    string colors = "RBRBRRRBBRBRRRRRRRBBRBRRRRRBRRRBRBRBRBBRBBRRBBBRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 4, 5, 6, 7, 11, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 113, 127, 128, 129, 130, 131, -1, 137};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 155;
    string colors = "RBBBBRRRBBRBRRBBRRRBRRBRBBRBBRRRRRRRRRRRRBBRRBBRBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 67, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 98;
    string colors = "BRBRBBBBBRRBBBBBRBRRBBBBBRBRRBRRBRRBBBRRBBRBBBBBRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 29, 30, 31, 37, -1, -1, -1, -1, -1, 47, -1, 53, 59, 60, 61, 67, -1, 71, 73, -1, -1, -1, 79, 83, -1, -1, 89, -1, -1, -1, -1, -1, 97, 98};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 158;
    string colors = "BBBRRRRRBRRRBRBRRRBRRRRRBRBBRRBRRBRRBBRBRRRRBRBBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 6, 7, 11, 13, 17, 19, -1, 23, 29, 31, -1, 37, -1, 41, 43, 47, -1, 53, 59, 61, 67, 71, 72, 73, -1, -1, 79, 83, -1, 89, 97, -1, 101, 103, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 129;
    string colors = "RBRRBRRRRBRBBBRBBRRRBRRRBRBBRRRRRBBRBRRBRBBRBBBBBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 127};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 105;
    string colors = "RBRBBRBRBRBRRBRBRRRBRBRRBBBRBRBBBBRBRBBBBBRRBRBRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, 11, 12, 13, -1, 17, 18, 19, 23, -1, 29, 30, 31, 37, 41, 42, 43, -1, 47, 53, -1, -1, -1, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 79, 83, -1, 89, -1, 97, 101, 103};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 101;
    string colors = "BRRBRBBBBRBBBRBBRBBBRBRRBBRBBBBBBRRBRRRBRRRBRBBBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23, -1, -1, -1, 29, 30, 31, 37, -1, -1, -1, -1, -1, -1, -1, -1, -1, 53, 59, 60, 61, 67, 71, 72, 73, 79, 83, -1, 89, -1, -1, -1, 97, 101};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 119;
    string colors = "RRRBRRRBBRRRBRRRRRRBBBBBBRBRBRBBBRBBRBRBBRRRRBRRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 6, 7, 11, 13, -1, -1, 17, 19, 23, -1, 29, 31, 37, 41, 43, 47, -1, -1, -1, -1, -1, -1, 59, 60, 61, -1, 67, -1, -1, -1, -1, -1, -1, 79, -1, 83, -1, -1, 89, 97, 101, 103, -1, 107, 109, -1, 113};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 132;
    string colors = "RRBRBBRRBRRRBRBBBRRRBBBBBRRRRRRBBBRBRBBRRBRBRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 53, 59, 61, 67, 71, 73, -1, -1, -1, 79, -1, 83, -1, -1, 89, 97, -1, 101, 102, 103, 107, 109, 113, 127, 131};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 104;
    string colors = "BBRRRBBRRBRRRBBBRRBRBBRBBRBBBRRRBBRBBBRBBBBRRBBRBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 89, 97, -1, -1, 101, 102, 104};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 134;
    string colors = "BBRBRBRRRBBBRBRBBRBBBRBRBBRRBBRRBBRRBBRBRRBRRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 37, 38, 39, 40, 41, 42, 43, -1, -1, 47, 53, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 109;
    string colors = "RRBBRRBBBRRBBBBRBRRRBRBRBBBBRRBRRRBRBRBBBRBRRRRBRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 29, 30, 31, 37, 41, 42, 43, -1, 47, -1, -1, -1, -1, 53, 59, 60, 61, 67, 71, 72, 73, -1, 79, 80, 81, 82, 83, -1, 89, 97, 101, 103, -1, 107, 108};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 108;
    string colors = "RBBBRBRRRBRRBBBRBBRBRBRBBBRBRRBBBBRBRBRRBRBBRRRBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 37, -1, -1, 41, 42, 43, -1, 47, -1, -1, -1, 53, -1, 59, 61, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 105;
    string colors = "BRRRBBBRRBBRRBBBRRRBBBBRRRBRBRRRRRRBBRRBBRBRBBRBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -1, -1, -1, -1, -1, -1, 11, 13, -1, -1, 17, 19, 20, 21, 22, 23, 29, 31, -1, -1, -1, -1, 37, 41, 43, -1, 47, -1, 53, 59, 61, 67, 71, 73, -1, -1, 79, 83, -1, -1, 89, -1, 97, -1, -1, 101, 102, 104, 105};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 106;
    string colors = "RRBBRBRRBRBBRBBBBBRBRRBBRRRBBBBBBRRRBBBBRRRRRRBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23, 24, 25, 26, 27, 28, 29, 30, 31, 37, -1, -1, 41, 43, 47, -1, -1, -1, -1, -1, -1, 59, 61, 67, 68, 69, 70, 72, 73, 79, 83, 89, 97, 101, 102, 104, 105, 106};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 482;
    string colors = "BBRBBBRRRRRBRBBRRRBRRBRRBBRRRBBRRBBBBRRBRBBRRRRRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 403;
    string colors = "BBBBRRRBBRBRRRBBRRRBBBRRBBRBRBRBBBBBBBRRBBBRRBRRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 899;
    string colors = "BRBRRRBBRRRRBBRRBBBRRRBRBRBRRBBRRRBBBBBBRBRBRBRBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 1000;
    string colors = "RBBBRRRBRBRBRBBRRRBRRBBRBBBBBRBRBRRRRBRRRRBRBRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 1000;
    string colors = "BBRBBBBRRBRRBRRBRBBRBBBRBBRRBBRBBRBRRRRRBBBRBRRRBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 1000;
    string colors = "BBRRBBRRBRRRRBBRBRRRBRBBBBBRBRRBBRRRBRRRBRBBBBBBBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 1;
    string colors = "B";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 2;
    string colors = "B";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 2;
    string colors = "BR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 80;
    string colors = "RBRRBRBBRBRRBBRRBBBRRBBBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 999;
    string colors = "RRRRRRRRRRRBBBBBRRRRRRRRRRRRRRRRBBBBBRRRRRRRRRRRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 695;
    string colors = "RBRRBRBBRBRRBBRRBBBRRBBBRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 7;
    string colors = "BRRR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 1000;
    string colors = "RRRRRRRRRBRRRRRRRRRBRRRRRRRRRBRRRRRRRRRBRRRRRRRRBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 1000;
    string colors = "BBBBBRRRRRRBBBBBBRRRRRBBBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 1000;
    string colors = "RRRRRBBBBBRRRRRBBBBBRRRRRBBBBBRRRRRBBBBBRRRRRBBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 126;
    string colors = "RBRRBRBBRBRRBBRRBBBRRBBBRRRBRRBRBBRBRRBBRRBBRRBBR";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 107, 109, -1, -1, 113};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 3;
    string colors = "R";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 50;
    string colors = "R";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 50;
    string colors = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 10;
    string colors = "RRRBBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 1000;
    string colors = "RRRRBBBRBRBRBRBRBRBRBRBBBRRRBRBRBRBRBRBBBRRBRBRBRB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 100;
    string colors = "BRRRRRRBBBRRBRBBBBBRRBRRRRBBRBBBBRRBRBRBBRBRRBBRBB";
    ColorfulCards* pObj = new ColorfulCards();
    clock_t start = clock();
    vector<int> result = pObj->theCards(N, colors);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 7, 11, 13, 14, 15, 16, 17, 19, -1, 23, 24, 25, 26, 27, 28, 29, 31, -1, 37, 41, 43, 47, -1, -1, 53, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 79, -1, 83, 89, -1, -1, 97, -1, -1};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20315020&rd=14424&pm=11302
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
vector <int> ans; 
 
int isp(int x) { 
  if (x == 1) return 0; 
  for (int i = 2; i*i <= x; i++) 
    if (x%i == 0) return 0; 
  return 1; 
} 
 
int a[1001], b[1001], L[1001], R[1001]; 
 
struct ColorfulCards {  
vector <int> theCards(int N, string colors) {  
  n = SZ(colors); 
  F1(i,N) a[i] = isp(i); 
  F1(i,n) b[i] = (colors[i-1] == 'R'); 
   
 
  k = 0; 
  F1(i,n) { 
    k++; 
    while (a[k] != b[i]) k++; 
    L[i] = k; 
  } 
 
    k = N+1; 
  for (i=n; i>=1; i--) { 
    k--; 
    while (a[k] != b[i]) k--; 
    R[i] = k; 
  } 
 
  ans.clear(); 
  F1(i,n) if (L[i] == R[i]) ans.push_back(L[i]); 
  else ans.push_back(-1); 
 
  return ans; 
}   
  
};  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/