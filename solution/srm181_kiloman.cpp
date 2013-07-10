/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2268
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

class KiloMan {
public:
    int hitsTaken(vector<int> pattern, string jumps);
};

int KiloMan::hitsTaken(vector<int> pattern, string jumps) {
    int ret;
    return ret;
}


int test0() {
    vector<int> pattern = {1, 3, 2, 3, 3, 1, 2, 2, 1};
    string jumps = "JJSSSJSSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> pattern = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7};
    string jumps = "SSSSSSSSSSSSSSJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> pattern = {1, 2, 2, 1};
    string jumps = "SJJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    vector<int> pattern = {1};
    string jumps = "J";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    vector<int> pattern = {1, 2, 3, 4, 5, 6, 7};
    string jumps = "SJJSJSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    vector<int> pattern = {2, 7, 6, 1, 5, 1, 6, 3, 1, 6, 3};
    string jumps = "SSJSJSSSJJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> pattern = {5, 6, 3, 7, 2, 7, 7, 3, 6, 5, 1, 6, 7, 2, 3, 3, 7, 1, 3, 3, 2, 7, 7};
    string jumps = "SSSJSSSJSJJJSJSJJJSJSJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    vector<int> pattern = {7, 2, 2, 7, 3, 2, 4, 4, 3, 5, 7, 5, 3, 6, 1, 2, 4, 2, 1, 7, 2, 6, 6, 7, 4, 5, 2, 3, 5};
    string jumps = "JSJSJSJSJSSSSSJSJSJJSSSJJSSJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> pattern = {2, 3, 3, 3, 5, 6, 1, 3, 2};
    string jumps = "SJJSSSSSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> pattern = {7, 3, 2, 2, 4, 1, 2, 5, 6, 6, 3, 6, 5, 6, 1, 5, 1, 4, 3, 3, 5, 3, 4, 7, 1, 4, 3, 3, 4, 3, 3, 4, 5, 2, 3, 2, 3, 3, 4, 1, 6, 7, 4, 4, 3};
    string jumps = "SSSSSJSJSSJSJSSJJJSJSJJSJJJSJSSSJJJSJSSSJSSSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> pattern = {3, 6, 7, 7, 7};
    string jumps = "SSSSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> pattern = {5, 7, 2, 5, 1, 5, 1, 2, 3, 6, 5, 2, 4, 1, 4, 2, 5, 4, 5, 4, 4, 1, 3, 4};
    string jumps = "SJJJSSSJSJJJJJSSJSSJSSSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> pattern = {4, 3, 6, 5, 5, 7, 2, 3, 6, 5, 6, 5, 6, 6, 6, 7, 1, 7, 4, 2, 1, 7, 2, 5, 4, 2};
    string jumps = "JSSJJJJSSJJSSJJJJSJJJSSSSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> pattern = {6, 5, 5, 7, 4, 5, 1, 1, 7, 5, 2, 4, 4, 3, 2, 2, 7, 3, 5, 3, 7, 6, 7, 3, 6, 4, 3, 7, 1, 3, 1, 4, 5, 6, 3, 1, 3, 1, 6, 1, 3, 7, 4};
    string jumps = "SJJJJJSSSSJJSSJJSSJSJSSSJJJJJSJJSJJSSSSJJSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> pattern = {3, 5, 1, 1, 2, 2, 2, 3, 6, 4, 5, 6, 6, 4, 5, 1, 2, 6, 7, 5, 1, 2, 2, 6, 6, 4, 4, 3, 7, 2, 6, 7, 4, 7, 6, 5};
    string jumps = "SSJJSJSSSJJSJJJSSSJJJJJSSJSSJJSJSSJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> pattern = {7, 2, 7, 2, 1, 3, 6, 7, 2, 4, 3, 3, 6, 2, 3, 6, 4, 4, 3, 3, 2, 7};
    string jumps = "JJSJJSSJJJJJJJSJJJJSSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> pattern = {3, 1, 7, 7, 1, 2, 1, 7, 1, 4, 7, 3, 4, 6, 3, 1, 1, 6, 4, 7, 5, 7, 1, 7, 1, 1, 6, 4, 2, 2, 6, 4, 7, 5, 3, 7, 7, 2, 4};
    string jumps = "JJSSJSSJSJJSSSJSJSSJJSJJSSSSJJSJSJSSSJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> pattern = {3, 3, 7, 7, 7, 6, 4, 2, 6, 6, 5, 6, 6, 7, 1, 7, 6, 4, 3, 7, 2, 3, 5, 1, 6, 5, 1, 3, 4, 2, 7, 6, 4, 6, 4, 2, 3, 7, 1};
    string jumps = "JJSSJSSSJJSSSSJJSJJJJJJJJJJJSSJSSSJSJSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> pattern = {3, 7, 1, 1, 3, 7, 4, 2, 1, 5, 3, 5, 2, 4, 4, 7, 1};
    string jumps = "SJJSJSJSSJSSJSJJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> pattern = {5, 2, 1, 6, 2, 5, 7, 4, 4, 1, 1, 4, 6, 1, 6, 3, 3, 1, 6, 3, 4, 7};
    string jumps = "JJSJSJSSSJJJJJSJSJSJJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> pattern = {4, 5, 6, 2};
    string jumps = "JJSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    vector<int> pattern = {5, 4, 5, 4, 4, 6, 7, 6, 2, 4, 2, 2, 7, 1, 6, 6, 3, 3, 6, 1, 5};
    string jumps = "JSSJSSSJJSSJJSJJJSSSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> pattern = {7, 3, 6, 5, 5, 1, 1, 5, 4, 4, 4, 3};
    string jumps = "JJSSJSJSSSJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> pattern = {7, 5, 4, 7, 7, 2, 6, 2, 5, 3, 6, 3, 2, 1, 6, 5, 4, 7, 6, 7, 5, 5, 3, 3, 5, 1, 6, 5, 1, 1, 3, 7, 3, 5, 6, 3, 6, 2, 4, 1};
    string jumps = "JSJSSJSSSJJSSJJSJJJSSSSJJSSSSJJSSJJJJJSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> pattern = {5, 2, 4, 7, 2, 6, 7, 7, 4, 1, 1, 5, 7, 7, 6, 4, 5, 5, 7, 7, 4, 6, 2, 6, 7, 3, 6, 7, 7, 1, 7};
    string jumps = "JJSJSJSSSJSJSSJSJJSJSJJSSSJSJJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> pattern = {4, 3, 5, 3, 4, 7, 4, 5, 1, 6, 2, 3, 1, 4, 5, 2, 3, 1, 3, 4, 3, 6, 4, 5, 4, 4, 1, 3, 1, 4, 7, 3, 6, 2, 5, 3, 2, 7, 5, 7, 3, 4, 2, 3, 1};
    string jumps = "SJSSSJSJJSJJSJSSSJJSJJJSSJSSSJJSJSJJSSJJJJJSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> pattern = {5, 5, 4, 2, 6, 4, 1, 2, 3, 3, 2, 6, 1, 3, 7, 4, 1, 4, 2, 3, 5, 6};
    string jumps = "SSSSSSJJSSJSSJSJJJJJJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> pattern = {1, 4, 1, 2, 5, 3, 6, 1, 1, 1, 7, 1};
    string jumps = "SJJSSSJJJJSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> pattern = {4, 4, 2, 5, 4, 1, 6, 7, 1, 7, 2, 2, 4, 3, 7};
    string jumps = "SJSJJSJJJJJSJJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> pattern = {4, 6, 2, 2, 2, 2, 5, 7, 1, 2, 6, 2, 3, 1, 1, 5, 7, 5, 1, 1, 3, 3, 2, 5, 7, 3, 7, 3, 5, 4, 3, 2, 2};
    string jumps = "JSJJJSSJJJSSSSSSSSSJSJJSSSJJSJSJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> pattern = {1, 7, 3, 7, 3, 4, 7};
    string jumps = "JSJSJSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    vector<int> pattern = {1, 1, 5, 1, 4, 5, 5, 6, 6, 4, 4, 1, 1, 3, 1, 4, 1, 5, 7, 5, 1, 1};
    string jumps = "JSJJSJSJSJSSSJSJSJSSJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> pattern = {4, 5, 6, 2, 2, 3, 7, 2, 4, 1, 6, 5, 7, 6};
    string jumps = "SSJJJSSSJSJSJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    vector<int> pattern = {7, 2, 1, 2, 7, 7, 3, 7, 6, 4, 1, 7, 2, 5, 6, 6};
    string jumps = "JJJJJSJSJSSSJJJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> pattern = {2, 2, 4, 2, 4, 1, 5, 5, 1, 2, 7, 3, 1, 3, 3, 4, 4, 1, 3, 4, 4, 1, 5, 4, 3};
    string jumps = "SSSSSSSSSJSSSJSJSSSJJJSJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> pattern = {3, 6, 4, 7, 1, 6, 2, 1, 3, 5, 4, 1, 4, 6, 4, 4, 7, 7, 2, 1, 2, 1, 6, 1, 5, 3, 3, 1, 3, 1, 4, 3, 4, 5, 2, 2, 3};
    string jumps = "JJSSSJSSJJSSSSSJSJJSSSSJJSSSJSSJJSSSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> pattern = {3, 6, 2, 4, 6, 2, 7, 5, 2, 4, 4, 4, 3, 1, 1, 2, 5, 4, 5, 2, 5};
    string jumps = "SJJJJSSSJJJSSJJSSJSSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> pattern = {5, 4, 3, 6, 7, 4, 1, 1, 7, 1, 6, 4, 4, 2, 5, 1, 4, 7, 6, 5};
    string jumps = "JSJSJSSSSJJSSJJJJSJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> pattern = {3, 3, 5, 5, 5, 6, 6, 2, 2, 3, 6, 5, 3, 2, 7, 3, 4, 2, 2};
    string jumps = "SJSJSSSSSSSSJSSSJSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> pattern = {3, 4, 7, 5, 4, 7, 5, 6, 3, 4, 5, 6, 6, 6, 1, 5, 4, 2, 4, 1, 7, 7, 7, 3, 5, 3, 5, 5, 2, 1, 6, 2, 4, 6, 7, 7, 5, 2, 4, 5, 3, 1, 1, 1, 6};
    string jumps = "JJJJJSJJJSJJJSSJSJSJJJSJSSJJSJSJJSJSSJSSJSJJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> pattern = {3, 3, 7, 1, 4, 4, 3, 1, 7, 7, 1, 5, 4, 2, 2, 6, 3, 1, 2, 7, 3, 1, 5, 7, 6, 1, 2, 7, 6, 3};
    string jumps = "JSJSJSSJSJSJJJSJJJJJSJSSJJJJJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> pattern = {6, 5, 6, 3, 4, 3, 1, 3, 7, 3, 1, 5, 3, 2, 3, 6, 6, 2, 6, 5, 6, 3, 1, 6, 2, 1, 5, 3, 1, 7, 6, 4, 4, 2, 6, 5};
    string jumps = "JSJSSSSJJSJJSJJJJSSJSJSSSSSSSJJSSJJJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> pattern = {3, 4, 5, 4, 7, 2, 4, 6, 1, 2, 7, 6, 2, 2, 4, 6, 5, 7, 2, 3, 6, 5, 3, 2, 5, 5, 2, 4, 2, 3, 1, 4, 4, 6, 5, 1, 5, 1, 6, 6, 7, 5, 2, 2, 5};
    string jumps = "SSJSJJJJJJJJSJSJSJSJJJSJSSSJSSSJJSSJJJJJJJJSS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> pattern = {5, 5, 2, 7, 6, 4, 5, 4, 3, 6, 6, 7, 2, 1, 3, 1, 1, 4, 5, 6, 1};
    string jumps = "SJSSJSJSJJSJJSJSJJSJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> pattern = {5, 3, 3, 3, 1, 6, 7, 7, 6, 2, 3, 1, 2, 2, 3, 1, 4, 1};
    string jumps = "SJSJJSSJSJSJJJJSSJ";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    vector<int> pattern = {2};
    string jumps = "J";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> pattern = {1, 2, 2, 1};
    string jumps = "SJJS";
    KiloMan* pObj = new KiloMan();
    clock_t start = clock();
    int result = pObj->hitsTaken(pattern, jumps);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287130&rd=4725&pm=2268
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <queue>
#include <climits>
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef long long ll;
 
char buffer[500];
string sval(int num)    { sprintf(buffer, "%d", num); return buffer; }
int    ival(string inp) { return atoi(inp.c_str()); }
float  fval(string inp) { return (float)atof(inp.c_str()); }
double dval(string inp) { return (double)atof(inp.c_str()); }
 
VS split(string inp, string sep) {
   VS ans;
   inp += sep;      // this is SO ugly...
   for (int i = 0, j = 0; i < inp.length(); i++)
      if (inp[i] == sep[0]) {
         ans.push_back(inp.substr(j, i - j));
         j = i + 1;
      }
   return ans;
}
 
// ****************************************** //
 
class KiloMan {
   public:
 
   int hitsTaken(vector <int> pattern, string jumps) {
    int hits = 0;
    for (int i = 0; i < jumps.length(); i++) {
      if (jumps[i] == 'J' && pattern[i] > 2) hits++;
      else if (pattern[i] <=2 && jumps[i] == 'S') hits++;
    }
    return hits;
   }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/