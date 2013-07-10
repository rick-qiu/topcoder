/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8486
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

class LittleTree {
public:
    int minCost(int N, vector<string> edges, int height);
};

int LittleTree::minCost(int N, vector<string> edges, int height) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    vector<string> edges = {"0,1 1,2 2,3 2,4"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 5;
    vector<string> edges = {"0,1 1,2 2,3 2,4"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 3;
    vector<string> edges = {"0,1 1,2"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 9;
    vector<string> edges = {"0,3 3,1 1,8 ", "8,", "6 2,7 4,2 0,4 7", ",5"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 2;
    vector<string> edges = {"0,1"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 10;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 10;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 10;
    vector<string> edges = {"0,1 0,2 0,3 0,4 0,5 0,6 0,7 0,8 0,9"};
    int height = 9;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 13;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 0,7 7,8 8,9 9,10 10,11", " 11,12"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 9;
    vector<string> edges = {"0,1 1,3 3,5 5,7 0,2 2,4 4,6 6,8"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 9;
    vector<string> edges = {"0,1 1,2 2,3 2,4 4,5 4,6 4,7 4,8"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 18;
    vector<string> edges = {"0,1 1,2 2,3 2,4 4,5 4,6 4,7 4,8 0,10 10,11 ", "10,16 11,12 11,15 12,13 12,17 12,14 1,9"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 13;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 1,7 2,8 3,9 4,10 5,11 6,12"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 17;
    vector<string> edges = {"0,1 1,2 0,3 1,4 3,5 0,6 0,7 3,8 2,9 5,10 4,11 3,12", " 11,13 8,14 10,15 0,16"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 5;
    vector<string> edges = {"0,1 0,2 2,3 1,4"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 14;
    vector<string> edges = {"0,1 0,2 1,3 2,4 4,5 2,6 6,7 4,8 2,9 7,10 3,11 4,12", " 12,13"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 6;
    vector<string> edges = {"0,1 0,2 2,3 0,4 1,5"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 19;
    vector<string> edges = {"0,1 0,2 2,3 2,4 0,5 4,6 4,7 0,8 3,9 4,10 6,11 6,12", " 9,13 3,14 2,15 0,16 10,17 7,18"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 14;
    vector<string> edges = {"0,1 0,2 0,3 0,4 0,5 1,6 0,7 1,8 8,9 4,10 4,11 0,12", " 0,13"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 18;
    vector<string> edges = {"0,1 0,2 1,3 0,4 2,5 0,6 1,7 5,8 2,9 3,10 4,11 3,12", " 0,13 12,14 4,15 6,16 5,17"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 10;
    vector<string> edges = {"0,1 0,2 2,3 1,4 0,5 3,6 3,7 6,8 4,9"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 15;
    vector<string> edges = {"0,1 0,2 0,3 2,4 4,5 3,6 4,7 2,8 7,9 5,10 1,11 1,12", " 7,13 8,14"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 20;
    vector<string> edges = {"0,1 0,2 1,3 2,4 4,5 3,6 6,7 6,8 7,9 4,10 10,11 4,1", "2 10,13 9,14 3,15 3,16 2,17 1,18 10,19"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 9;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 2,6 6,7 7,8"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 13;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 2,6 6,7 7,8 ", "6,9 9,10 3,11 11,12"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 17;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 2,6 6,7 7,8 ", "6,9 9,10 3,11 11,12 7,13 9,14 11,15 4,16"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 34;
    vector<string> edges = {"0,1 1,2 1,3 0,4 0,5 2,6 3,7 3,8 7,9 0,10 2,11 11,1", "2 5,13 11,14 0,15 6,16 0,17 11,18 15,19 12,20 14,2", "1 5,22 13,23 16,24 8,25 8,26 13,27 24,28 7,29 27,3", "0 26,31 15,32 11,33"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 15;
    vector<string> edges = {"0,1 0,2 1,3 1,4 4,5 0,6 0,7 3,8 4,9 4,10 4,11 6,12", " 2,13 0,14"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 54;
    vector<string> edges = {"0,1 1,2 0,3 0,4 2,5 4,6 0,7 7,8 2,9 7,10 5,11 0,12", " 0,13 4,14 12,15 9,16 8,17 13,18 4,19 1,20 12,21 2", "1,22 11,23 2,24 6,25 10,26 12,27 27,28 10,29 13,30", " 14,31 6,32 6,33 14,34 20,35 27,36 9,37 23,38 33,3", "9 34,40 25,41 12,42 16,43 6,44 41,45 2,46 1,47 44,", "48 41,49 28,50 15,51 26,52 37,53"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 68;
    vector<string> edges = {"0,1 1,2 1,3 2,4 3,5 1,6 2,7 6,8 6,9 0,10 8,11 3,12", " 10,13 8,14 1,15 7,16 3,17 9,18 8,19 11,20 16,21 1", "3,22 8,23 22,24 9,25 18,26 2,27 23,28 14,29 19,30 ", "26,31 30,32 20,33 29,34 27,35 9,36 6,37 22,38 37,3", "9 2,40 12,41 12,42 8,43 35,44 4,45 4,46 36,47 7,48", " 32,49 27,50 0,51 13,52 26,53 27,54 31,55 4,56 14,", "57 7,58 0,59 12,60 25,61 60,62 40,63 4,64 44,65 58", ",66 0,67"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 95;
    vector<string> edges = {"0,1 1,2 2,3 3,4 2,5 1,6 3,7 2,8 0,9 9,10 5,11 6,12", " 12,13 9,14 13,15 14,16 13,17 4,18 15,19 3,20 9,21", " 4,22 18,23 17,24 7,25 0,26 10,27 19,28 16,29 23,3", "0 2,31 1,32 21,33 19,34 25,35 33,36 16,37 1,38 13,", "39 22,40 30,41 39,42 14,43 25,44 22,45 11,46 37,47", " 12,48 0,49 26,50 36,51 50,52 37,53 42,54 44,55 37", ",56 42,57 1,58 10,59 15,60 51,61 4,62 37,63 57,64 ", "28,65 54,66 45,67 21,68 17,69 56,70 19,71 34,72 27", ",73 36,74 51,75 38,76 9,77 24,78 32,79 65,80 35,81", " 63,82 10,83 35,84 79,85 24,86 5,87 56,88 21,89 68", ",90 88,91 57,92 14,93 90,94"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 95;
    vector<string> edges = {"0,1 1,2 2,3 3,4 2,5 1,6 3,7 2,8 0,9 9,10 5,11 6,12", " 12,13 9,14 13,15 14,16 13,17 4,18 15,19 3,20 9,21", " 4,22 18,23 17,24 7,25 0,26 10,27 19,28 16,29 23,3", "0 2,31 1,32 21,33 19,34 25,35 33,36 16,37 1,38 13,", "39 22,40 30,41 39,42 14,43 25,44 22,45 11,46 37,47", " 12,48 0,49 26,50 36,51 50,52 37,53 42,54 44,55 37", ",56 42,57 1,58 10,59 15,60 51,61 4,62 37,63 57,64 ", "28,65 54,66 45,67 21,68 17,69 56,70 19,71 34,72 27", ",73 36,74 51,75 38,76 9,77 24,78 32,79 65,80 35,81", " 63,82 10,83 35,84 79,85 24,86 5,87 56,88 21,89 68", ",90 88,91 57,92 14,93 90,94"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 49;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 1,6 5,7 2,8 3,9 8,10 3,11 1,12", " 0,13 8,14 8,15 11,16 9,17 14,18 16,19 7,20 14,21 ", "3,22 19,23 7,24 8,25 16,26 9,27 12,28 26,29 17,30 ", "14,31 7,32 25,33 0,34 20,35 8,36 14,37 3,38 16,39 ", "30,40 22,41 7,42 26,43 30,44 6,45 26,46 33,47 38,4", "8"};
    int height = 7;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 40;
    vector<string> edges = {"0,1 1,2 1,3 3,4 3,5 1,6 5,7 0,8 4,9 0,10 9,11 1,12", " 0,13 13,14 14,15 1,16 6,17 17,18 8,19 1,20 19,21 ", "15,22 20,23 6,24 0,25 1,26 26,27 14,28 25,29 22,30", " 9,31 4,32 20,33 20,34 15,35 32,36 28,37 26,38 10,", "39"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 55;
    vector<string> edges = {"0,1 0,2 2,3 1,4 4,5 4,6 5,7 0,8 8,9 1,10 1,11 4,12", " 10,13 4,14 3,15 15,16 0,17 11,18 11,19 11,20 2,21", " 7,22 11,23 9,24 3,25 11,26 17,27 10,28 0,29 27,30", " 21,31 28,32 2,33 9,34 21,35 34,36 24,37 3,38 14,3", "9 23,40 20,41 35,42 19,43 2,44 16,45 23,46 17,47 2", ",48 22,49 20,50 49,51 13,52 19,53 9,54"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 81;
    vector<string> edges = {"0,1 0,2 1,3 2,4 3,5 4,6 6,7 4,8 2,9 0,10 10,11 8,1", "2 11,13 3,14 0,15 6,16 3,17 8,18 18,19 3,20 15,21 ", "20,22 3,23 20,24 3,25 19,26 9,27 6,28 2,29 2,30 26", ",31 31,32 4,33 25,34 19,35 21,36 34,37 4,38 29,39 ", "11,40 38,41 18,42 25,43 16,44 27,45 31,46 38,47 8,", "48 38,49 19,50 34,51 50,52 9,53 24,54 39,55 51,56 ", "53,57 0,58 34,59 10,60 20,61 9,62 23,63 43,64 62,6", "5 63,66 24,67 35,68 32,69 27,70 36,71 69,72 52,73 ", "70,74 35,75 37,76 3,77 1,78 17,79 28,80"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 60;
    vector<string> edges = {"0,1 1,2 0,3 2,4 2,5 1,6 3,7 4,8 7,9 4,10 3,11 3,12", " 10,13 7,14 10,15 5,16 13,17 17,18 16,19 18,20 15,", "21 11,22 17,23 8,24 22,25 3,26 14,27 5,28 7,29 9,3", "0 29,31 26,32 15,33 18,34 21,35 3,36 23,37 25,38 1", "5,39 10,40 6,41 36,42 38,43 13,44 25,45 16,46 33,4", "7 40,48 38,49 17,50 1,51 35,52 33,53 25,54 15,55 4", "8,56 37,57 28,58 14,59"};
    int height = 7;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 39;
    vector<string> edges = {"0,1 1,2 1,3 3,4 1,5 5,6 6,7 5,8 4,9 8,10 5,11 10,1", "2 8,13 10,14 12,15 4,16 7,17 10,18 14,19 6,20 15,2", "1 5,22 14,23 4,24 16,25 14,26 4,27 5,28 12,29 23,3", "0 0,31 22,32 27,33 11,34 23,35 5,36 27,37 31,38"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 72;
    vector<string> edges = {"0,1 0,2 1,3 1,4 1,5 1,6 6,7 7,8 2,9 7,10 1,11 9,12", " 5,13 13,14 2,15 7,16 3,17 15,18 0,19 9,20 1,21 14", ",22 1,23 14,24 15,25 20,26 25,27 2,28 2,29 16,30 3", ",31 14,32 5,33 6,34 34,35 29,36 7,37 29,38 3,39 8,", "40 7,41 29,42 21,43 4,44 32,45 41,46 31,47 43,48 2", "5,49 14,50 30,51 40,52 15,53 15,54 29,55 22,56 4,5", "7 55,58 24,59 1,60 10,61 49,62 51,63 30,64 29,65 2", "5,66 40,67 59,68 33,69 66,70 51,71"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 89;
    vector<string> edges = {"0,1 1,2 1,3 0,4 1,5 5,6 3,7 7,8 7,9 7,10 0,11 8,12", " 8,13 10,14 9,15 5,16 15,17 4,18 14,19 18,20 2,21 ", "14,22 2,23 4,24 6,25 8,26 23,27 15,28 14,29 19,30 ", "8,31 24,32 5,33 33,34 25,35 4,36 35,37 37,38 16,39", " 15,40 21,41 13,42 19,43 1,44 44,45 45,46 12,47 27", ",48 22,49 14,50 34,51 3,52 50,53 35,54 0,55 10,56 ", "41,57 27,58 54,59 57,60 12,61 12,62 10,63 3,64 36,", "65 65,66 2,67 49,68 6,69 9,70 2,71 32,72 49,73 62,", "74 54,75 15,76 6,77 13,78 71,79 40,80 62,81 51,82 ", "70,83 4,84 75,85 67,86 25,87 29,88"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 92;
    vector<string> edges = {"0,1 0,2 0,3 1,4 2,5 0,6 3,7 6,8 6,9 9,10 10,11 9,1", "2 6,13 2,14 3,15 15,16 7,17 11,18 18,19 6,20 16,21", " 6,22 1,23 5,24 17,25 6,26 14,27 27,28 11,29 24,30", " 10,31 18,32 25,33 16,34 20,35 17,36 22,37 27,38 1", ",39 32,40 21,41 7,42 37,43 19,44 0,45 21,46 17,47 ", "41,48 39,49 12,50 30,51 42,52 25,53 15,54 40,55 50", ",56 18,57 40,58 24,59 24,60 15,61 37,62 7,63 13,64", " 43,65 45,66 17,67 46,68 26,69 42,70 50,71 46,72 1", "8,73 7,74 43,75 27,76 60,77 74,78 41,79 11,80 57,8", "1 43,82 21,83 43,84 49,85 10,86 6,87 33,88 62,89 8", "8,90 70,91"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 22;
    vector<string> edges = {"0,1 1,2 1,3 2,4 3,5 1,6 4,7 6,8 5,9 4,10 3,11 3,12", " 0,13 11,14 12,15 11,16 13,17 2,18 4,19 6,20 5,21"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 25;
    vector<string> edges = {"0,1 1,2 2,3 2,4 2,5 2,6 2,7 7,8 4,9 1,10 10,11 11,", "12 8,13 4,14 14,15 11,16 4,17 14,18 17,19 6,20 1,2", "1 21,22 17,23 7,24"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 90;
    vector<string> edges = {"0,1 1,2 1,3 1,4 2,5 2,6 6,7 3,8 4,9 7,10 4,11 6,12", " 2,13 13,14 2,15 2,16 16,17 6,18 6,19 11,20 14,21 ", "16,22 19,23 4,24 8,25 19,26 19,27 2,28 28,29 17,30", " 1,31 4,32 32,33 7,34 28,35 6,36 21,37 31,38 20,39", " 27,40 6,41 25,42 10,43 11,44 8,45 1,46 15,47 25,4", "8 46,49 6,50 38,51 36,52 19,53 25,54 8,55 12,56 56", ",57 52,58 18,59 20,60 42,61 18,62 18,63 17,64 2,65", " 5,66 64,67 50,68 3,69 18,70 34,71 64,72 6,73 31,7", "4 27,75 71,76 7,77 34,78 19,79 29,80 18,81 38,82 6", "9,83 74,84 48,85 51,86 68,87 53,88 18,89"};
    int height = 64;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 72;
    vector<string> edges = {"0,1 1,2 2,3 2,4 3,5 1,6 3,7 7,8 1,9 6,10 1,11 3,12", " 6,13 11,14 8,15 6,16 5,17 11,18 17,19 15,20 12,21", " 6,22 7,23 4,24 7,25 15,26 25,27 8,28 3,29 15,30 2", "0,31 13,32 4,33 13,34 21,35 4,36 14,37 12,38 38,39", " 23,40 16,41 19,42 36,43 6,44 3,45 23,46 12,47 9,4", "8 2,49 3,50 18,51 39,52 31,53 16,54 45,55 2,56 0,5", "7 25,58 43,59 21,60 5,61 37,62 8,63 47,64 22,65 56", ",66 15,67 3,68 36,69 63,70 27,71"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 100;
    vector<string> edges = {"0,1 1,2 0,3 3,4 2,5 1,6 4,7 3,8 2,9 5,10 10,11 7,1", "2 6,13 12,14 5,15 12,16 16,17 6,18 8,19 7,20 4,21 ", "16,22 22,23 23,24 8,25 23,26 17,27 4,28 12,29 20,3", "0 27,31 16,32 6,33 3,34 19,35 28,36 2,37 13,38 14,", "39 2,40 32,41 2,42 42,43 20,44 21,45 31,46 34,47 4", "6,48 24,49 2,50 27,51 24,52 20,53 31,54 3,55 35,56", " 27,57 18,58 49,59 16,60 34,61 43,62 5,63 36,64 5,", "65 50,66 60,67 10,68 11,69 55,70 51,71 20,72 39,73", " 54,74 51,75 27,76 61,77 69,78 9,79 33,80 77,81 23", ",82 67,83 8,84 59,85 7,86 3,87 25,88 64,89 86,90 8", "9,91 46,92 22,93 9,94 37,95 61,96 92,97 0,98 0,99"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 89;
    vector<string> edges = {"0,1 1,2 1,3 2,4 0,5 0,6 4,7 5,8 4,9 0,10 2,11 8,12", " 0,13 8,14 7,15 13,16 8,17 13,18 5,19 13,20 11,21 ", "12,22 20,23 9,24 21,25 23,26 6,27 0,28 12,29 4,30 ", "4,31 0,32 7,33 10,34 34,35 35,36 34,37 1,38 27,39 ", "7,40 3,41 12,42 38,43 32,44 19,45 41,46 27,47 33,4", "8 6,49 0,50 50,51 13,52 26,53 22,54 47,55 7,56 35,", "57 7,58 40,59 7,60 24,61 23,62 35,63 22,64 39,65 1", "0,66 9,67 34,68 13,69 36,70 66,71 27,72 46,73 69,7", "4 17,75 14,76 5,77 4,78 78,79 1,80 56,81 33,82 14,", "83 39,84 25,85 29,86 78,87 84,88"};
    int height = 5;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 19;
    vector<string> edges = {"0,1 0,2 0,3 3,4 3,5 4,6 3,7 2,8 3,9 8,10 8,11 11,1", "2 7,13 0,14 14,15 5,16 2,17 2,18"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 23;
    vector<string> edges = {"0,1 1,2 2,3 0,4 2,5 5,6 1,7 3,8 2,9 5,10 4,11 6,12", " 3,13 8,14 1,15 5,16 10,17 14,18 2,19 4,20 14,21 1", "7,22"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 100;
    vector<string> edges = {"0,1 0,2 0,3 0,4 1,5 1,6 5,7 3,8 8,9 8,10 6,11 1,12", " 1,13 9,14 3,15 4,16 4,17 7,18 0,19 11,20 14,21 10", ",22 1,23 20,24 20,25 25,26 18,27 2,28 6,29 25,30 2", "6,31 1,32 24,33 11,34 27,35 6,36 1,37 2,38 7,39 25", ",40 2,41 23,42 34,43 23,44 30,45 10,46 27,47 3,48 ", "48,49 46,50 39,51 11,52 49,53 3,54 13,55 28,56 19,", "57 44,58 31,59 33,60 52,61 9,62 7,63 53,64 61,65 3", "3,66 4,67 41,68 1,69 63,70 24,71 58,72 39,73 6,74 ", "65,75 37,76 39,77 37,78 45,79 14,80 18,81 49,82 16", ",83 61,84 19,85 67,86 13,87 48,88 1,89 46,90 68,91", " 39,92 7,93 86,94 81,95 2,96 46,97 84,98 5,99"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 73;
    vector<string> edges = {"0,1 1,2 1,3 0,4 4,5 2,6 5,7 5,8 5,9 2,10 10,11 4,1", "2 4,13 8,14 13,15 7,16 2,17 7,18 2,19 16,20 1,21 4", ",22 20,23 16,24 15,25 10,26 21,27 1,28 23,29 13,30", " 0,31 7,32 25,33 33,34 15,35 23,36 20,37 4,38 35,3", "9 23,40 39,41 7,42 32,43 39,44 23,45 16,46 18,47 3", "8,48 32,49 46,50 8,51 37,52 19,53 28,54 5,55 11,56", " 31,57 2,58 51,59 28,60 37,61 24,62 16,63 2,64 23,", "65 19,66 58,67 5,68 29,69 31,70 48,71 38,72"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 10;
    vector<string> edges = {"6,4 0,6 0,5 1,2 8,3 4,9 1,8 0,1 2,7"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 20;
    vector<string> edges = {"12,3 0,4 5,2 10,17 15,1 7,14 4,15 0,16 16,8 15,12 ", "19,13 11,18 4,19 4,7 13,9 9,6 4,10 16,11 0,5"};
    int height = 5;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 30;
    vector<string> edges = {"12,6 0,19 19,22 13,24 7,27 0,18 0,15 20,29 15,21 1", "9,23 22,7 10,4 21,28 13,11 24,1 24,8 22,12 22,14 7", ",5 12,10 29,16 10,17 13,9 14,2 4,26 13,3 21,13 20,", "25 0,20"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 40;
    vector<string> edges = {"23,18 4,30 32,38 15,26 0,8 25,15 25,17 0,32 19,37 ", "6,31 38,16 0,14 6,25 12,9 0,5 32,4 38,21 8,27 5,13", " 16,24 14,6 15,10 6,20 21,34 6,35 0,39 22,28 31,36", " 30,29 22,7 22,23 22,12 14,11 0,22 1,2 17,33 1,3 0", ",1 23,19"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 50;
    vector<string> edges = {"45,44 42,8 11,22 27,26 11,14 19,47 24,40 38,46 12,", "19 25,33 26,43 24,2 6,41 17,42 40,32 37,31 26,9 5,", "16 0,28 0,20 26,7 27,5 29,35 7,10 21,6 29,12 1,48 ", "31,4 29,23 25,15 17,25 40,38 35,21 25,30 32,18 38,", "36 0,13 29,45 45,39 20,29 20,37 20,17 12,1 44,49 4", "4,3 45,34 0,27 29,11 27,24"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 60;
    vector<string> edges = {"56,34 19,17 31,6 0,24 44,29 52,35 36,25 8,41 0,20 ", "20,48 33,4 33,31 51,47 56,23 0,8 23,27 20,51 55,58", " 28,32 44,18 59,13 20,9 14,56 24,55 1,22 33,28 46,", "45 28,49 33,16 0,15 0,7 8,44 33,59 0,37 33,46 51,1", " 19,53 0,33 50,10 43,19 59,36 59,38 5,57 50,39 33,", "43 28,12 2,26 14,40 7,14 5,30 55,2 48,5 48,54 19,5", "2 10,3 12,21 56,50 14,42 37,11"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 70;
    vector<string> edges = {"32,51 6,24 37,54 44,55 21,33 33,50 49,18 33,69 29,", "40 6,43 8,47 24,28 26,5 33,16 43,58 0,44 39,68 10,", "20 38,57 31,23 21,48 34,2 38,26 32,14 63,27 46,37 ", "48,1 48,36 52,34 53,63 49,29 3,31 18,52 36,46 0,7 ", "18,4 7,6 33,66 40,3 6,15 7,21 55,11 0,8 6,17 7,12 ", "32,65 29,60 22,67 52,30 45,35 45,19 39,10 17,41 35", ",39 43,59 3,64 0,53 69,25 53,49 45,38 8,32 55,56 5", "5,62 55,45 26,9 10,42 57,22 3,61 8,13"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 80;
    vector<string> edges = {"49,32 49,56 66,60 34,48 34,37 20,43 75,12 75,38 8,", "9 68,4 54,71 62,49 8,24 0,75 0,62 70,41 76,66 49,1", "5 33,55 30,69 33,16 20,23 76,13 27,11 42,50 75,52 ", "63,7 18,26 75,10 60,45 64,6 7,68 26,31 66,1 0,36 1", "4,73 27,39 18,47 64,22 8,44 32,29 49,8 75,63 1,65 ", "55,77 75,21 32,3 10,35 19,2 3,54 9,57 66,20 21,67 ", "25,46 62,74 17,34 46,59 61,78 35,40 71,58 76,33 72", ",79 20,42 10,51 62,76 25,18 54,27 42,5 0,25 70,64 ", "35,61 3,17 19,14 76,72 21,28 50,53 70,19 29,30 66,", "70"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 90;
    vector<string> edges = {"24,2 59,9 32,3 24,19 46,30 29,45 39,1 59,83 33,6 4", "3,13 30,14 59,10 59,66 24,47 63,44 65,16 32,46 72,", "64 66,80 59,69 59,7 72,48 22,42 32,38 4,87 49,26 3", "3,70 5,51 57,58 24,79 53,37 8,56 0,33 72,28 9,36 8", ",50 52,77 46,12 22,67 25,31 84,52 11,40 79,60 63,6", "5 24,11 47,29 22,71 64,21 43,35 38,5 22,43 61,4 86", ",74 43,82 24,72 63,84 67,27 20,32 73,78 24,85 48,7", "3 54,76 86,23 72,89 86,75 2,62 74,41 72,8 19,88 43", ",34 54,17 20,24 22,18 64,39 0,20 48,81 15,53 86,49", " 8,86 0,63 56,57 22,61 33,54 15,55 19,22 21,25 4,6", "8 22,15 0,59"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 100;
    vector<string> edges = {"83,10 11,28 65,8 47,56 14,57 73,58 76,81 81,13 8,4", "7 22,86 85,20 83,82 67,91 20,33 85,95 38,63 8,67 2", "6,25 53,44 20,87 92,80 70,98 80,21 22,99 8,23 77,6", "9 85,27 85,40 12,78 61,31 49,35 0,73 15,52 51,42 6", "1,26 51,7 0,85 0,5 4,88 58,60 76,3 14,83 29,90 26,", "4 79,29 83,46 21,37 42,84 67,51 18,16 57,36 71,72 ", "10,24 82,55 44,17 15,45 2,97 11,68 83,49 5,14 0,76", " 36,75 22,11 69,19 5,79 3,62 34,12 25,30 18,2 92,6", "5 8,9 61,1 20,64 34,32 4,71 73,48 21,54 3,15 73,89", " 34,6 65,70 65,77 70,18 22,66 82,94 92,22 40,53 24", ",50 65,43 92,39 21,96 14,41 85,34 90,74 12,38 0,61", " 90,59 42,93 5,92"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 66,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 66,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 50;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 66,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 99;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 66,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 12;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 66,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 64;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 0,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 66;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 0,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 65;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 0,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 15;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 0,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 3,4 4,5 5,6 6,7 7,8 8,9 9,10 10,11 11,", "12 12,13 13,14 14,15 15,16 16,17 17,18 18,19 19,20", " 20,21 21,22 22,23 23,24 24,25 25,26 26,27 27,28 2", "8,29 29,30 30,31 31,32 32,33 33,34 34,35 35,36 36,", "37 37,38 38,39 39,40 40,41 41,42 42,43 43,44 44,45", " 45,46 46,47 47,48 48,49 49,50 50,51 51,52 52,53 5", "3,54 54,55 55,56 56,57 57,58 58,59 59,60 60,61 61,", "62 62,63 63,64 64,65 65,66 0,67 67,68 68,69 69,70", " 70,71 71,72 72,73 73,74 74,75 75,76 76,77 77,78 7", "8,79 79,80 80,81 81,82 82,83 83,84 84,85 85,86 86,", "87 87,88 88,89 89,90 90,91 91,92 92,93 93,94 94,95", " 95,96 96,97 97,98 98,99"};
    int height = 99;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 100;
    vector<string> edges = {"0,1 0,2 0,3 0,4 0,5 0,6 0,7 0,8 0,9 0,10 0,11 0,12", " 0,13 0,14 0,15 0,16 0,17 0,18 0,19 0,20 0,21 0,22", " 0,23 0,24 0,25 0,26 0,27 0,28 0,29 0,30 0,31 0,32", " 0,33 0,34 0,35 0,36 0,37 0,38 0,39 0,40 0,41 0,42", " 0,43 0,44 0,45 0,46 0,47 0,48 0,49 0,50 0,51 0,52", " 0,53 0,54 0,55 0,56 0,57 0,58 0,59 0,60 0,61 0,62", " 0,63 0,64 0,65 0,66 0,67 0,68 0,69 0,70 0,71 0,72", " 0,73 0,74 0,75 0,76 0,77 0,78 0,79 0,80 0,81 0,82", " 0,83 0,84 0,85 0,86 0,87 0,88 0,89 0,90 0,91 0,92", " 0,93 0,94 0,95 0,96 0,97 0,98 0,99"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 100;
    vector<string> edges = {"0,1 0,2 0,3 0,4 0,5 0,6 0,7 0,8 0,9 0,10 0,11 0,12", " 0,13 0,14 0,15 0,16 0,17 0,18 0,19 0,20 0,21 0,22", " 0,23 0,24 0,25 0,26 0,27 0,28 0,29 0,30 0,31 0,32", " 0,33 0,34 0,35 0,36 0,37 0,38 0,39 0,40 0,41 0,42", " 0,43 0,44 0,45 0,46 0,47 0,48 0,49 0,50 0,51 0,52", " 0,53 0,54 0,55 0,56 0,57 0,58 0,59 0,60 0,61 0,62", " 0,63 0,64 0,65 0,66 0,67 0,68 0,69 0,70 0,71 0,72", " 0,73 0,74 0,75 0,76 0,77 0,78 0,79 0,80 0,81 0,82", " 0,83 0,84 0,85 0,86 0,87 0,88 0,89 0,90 0,91 0,92", " 0,93 0,94 0,95 0,96 0,97 0,98 0,99"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 100;
    vector<string> edges = {"0,1 1,2 2,3 0,4 2,5 0,6 5,7 4,8 7,9 8,10 0,11 1,12", " 3,13 13,14 5,15 7,16 9,17 11,18 3,19 8,20 3,21 4,", "22 14,23 5,24 11,25 22,26 14,27 24,28 24,29 11,30 ", "2,31 22,32 7,33 33,34 16,35 25,36 19,37 16,38 24,3", "9 35,4", "0 17,41 34,42 23,43 1,44 6,45 40,46 37,47 0,", "48 43,49 10,50 45,51 45,52 14,53 30,54 22,55 20,56", " 6,57 28,58 43,59 15,60 26,61 24,6", "2 4,63 24,64 58,", "65 40,66 15,67 52,68 53,69 30,70 23,71 64,72 7,73 ", "10,74 19,75 39,76 3,77 20,78 13,79 11,80 48,81 65,", "82 47,83 29,84 26,85 44,86 49,87 40,88 65,89 74,90", " 2,91 49,92 85,93 43,94 45,9", "5 64,96 89,97 25,98 51", ",99"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 100;
    vector<string> edges = {"0,1 0,2 1,3 0,4 2,5 5,6 5,7 1,8 3,9 7,10 5,11 0,12", " 4,13 13,14 5,15 3,16 10,17 13,18 14,19 1,20 2,21 ", "14,22 21,23 10,24 18,25 15,26 15,27 15,28 0,29 3,3", "0 2,31 26,32 5,33 0,34 1,35 23,36 29,37 29,38 38,3", "9 10,40 7,41 16,42 28,43 19,44 1,45 35,46 45", ",", "47 46", ",48 13,49 10,50 29,51 50,52 35,53 14,54 31,55 9,56", " 19,57 14,58 4,59 31,60 43,61 11,62 36,63 46,64 51", ",65 27,66 6,67 55,68 13,69 55,70 16,71 60,72 69,73", " 23,74 19,75 19,76 55,77 43,78 11,79 39,80 12,81 3", ",82 74,83 36,84 50,85 0,86 70,87 1", "0,", "88 35,89 48,90", " 69,91", " ", "6,92 58,93 73,94 37,95 65,96 66,97 54,98 25", ",9", "9"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 100;
    vector<string> edges = {"0,1 0,2 1,3 3,4 1,5 5,6 1,7 3,8 0,9 6,10 3,11 0,1", "2", " 4,13 9,14 13,15 7,16 4,17 11,18 1,19 13,20 11,21 ", "6,22 19,23 17,24 10,25 17,26 18,27 21,28 20,29 23,", "30 7,31 0,32 8,33 27,34 19,35 4,36 8,37 14,38 7,39", " 28,40 10,41 13,42 5,43 9,44 0,45 22,46 34,47 0,48", " 41,49 15,50 29,51", " 1", "7,52 34,53 32,54 31,55 4,56 27", ",57 32,58 40,59 12,60 50,61 6,62 56,63 12,64 9,65 ", "26,66 63,67 47,68 34,69 25,70 42,71 22,72 69,73 6,", "7", "4 31,75 36,76 49,77", " 4", "9,78 36,79 27,80 70,81 1,82 ", "26,83 68,84 71,85 9,86 23,87 34,88 61,89 6,90 51,9", "1 77,92 51,93 68,94 13,95 24,96 83,97 58,98 98,99"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 71;
    vector<string> edges = {"0,1 1,2 0,3 3,4 3,5 3,6 3,7 2,8 8,9 9,10 8,11 11,1", "2 2,13 4,14 0,15 13,16 11,17 14,18 16,19 5,20 6,21", " 3,22 4,23 21,24 18,25 11,26 0,27 22,28 21,29 14,3", "0 4,31 7,32 9,33 12,34 4,35 33,36 1,37 8,38 6,39 1", "2,40 28,41 24,42 36,43 14,44 43,45 41,46 22,47 38,", "48 3,49 4,50 21,51 28,52 31,53 43,54 19,55 38,56 4", "0,57 33,58 35,59 19,60 35,61 50,62 19,63 18,64 45,", "65 40,66 18,67 34,68 32,69 16,70"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 47;
    vector<string> edges = {"0,1 0,2 1,3 1,4 4,5 5,6 6,7 6,8 0,9 8,10 7,11 7,12", " 2,13 5,14 7,15 2,16 6,17 13,18 12,19 11,20 3,21 1", "5,22 13,23 0,24 0,25 18,26 9,27 15,28 13,29 17,30 ", "20,31 6,32 13,33 32,34 6,35 5,36 19,37 3,38 11,39 ", "0,40 22,41 35,42 21,43 37,44 26,45 13,46"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 77;
    vector<string> edges = {"0,1 1,2 1,3 2,4 4,5 2,6 1,7 4,8 5,9 3,10 1,11 10,1", "2 5,13 3,14 9,15 15,16 9,17 15,18 18,19 1,20 13,21", " 21,22 0,23 10,24 15,25 22,26 3,27 5,28 9,29 3,30 ", "9,31 13,32 9,33 8,34 27,35 14,36 20,37 32,38 6,39 ", "9,40 23,41 8,42 42,43 30,44 36,45 1,46 34,47 41,48", " 37,49 4,50 40,51 2,52 1,53 14,54 11,55 21,56 52,5", "7 41,58 55,59 14,60 22,61 3,62 29,63 31,64 7,65 24", ",66 55,67 67,68 20,69 53,70 64,71 36,72 7,73 71,74", " 50,75 37,76"};
    int height = 6;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 56;
    vector<string> edges = {"0,1 0,2 1,3 3,4 4,5 5,6 4,7 2,8 0,9 4,10 1,11 1,12", " 9,13 13,14 2,15 8,16 0,17 5,18 1,19 5,20 16,21 10", ",22 9,23 21,24 24,25 4,26 9,27 25,28 21,29 2,30 28", ",31 23,32 5,33 15,34 16,35 1,36 31,37 23,38 14,39 ", "28,40 3,41 27,42 12,43 4,44 13,45 39,46 46,47 42,4", "8 26,49 1,50 42,51 30,52 8,53 10,54 52,55"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 91;
    vector<string> edges = {"0,1 0,2 2,3 0,4 3,5 5,6 2,7 2,8 8,9 1,10 8,11 1,12", " 3,13 7,14 4,15 9,16 8,17 17,18 14,19 4,20 12,21 1", "8,22 19,23 15,24 12,25 10,26 5,27 14,28 0,29 22,30", " 19,31 8,32 22,33 19,34 1,35 10,36 10,37 31,38 23,", "39 27,40 31,41 10,42 18,43 15,44 18,45 1,46 13,47 ", "17,48 36,49 2,50 9,51 6,52 2,53 19,54 20,55 31,56 ", "38,57 41,58 33,59 34,60 55,61 37,62 6,63 20,64 61,", "65 56,66 27,67 60,68 59,69 27,70 54,71 9,72 28,73 ", "32,74 36,75 66,76 5,77 11,78 72,79 1,80 16,81 31,8", "2 75,83 20,84 64,85 32,86 34,87 3,88 78,89 29,90"};
    int height = 7;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
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
    int N = 85;
    vector<string> edges = {"0,1 1,2 2,3 1,4 1,5 0,6 1,7 7,8 8,9 9,10 3,11 0,12", " 12,13 13,14 11,15 0,16 2,17 6,18 16,19 16,20 0,21", " 15,22 21,23 4,24 1,25 22,26 20,27 0,28 9,29 17,30", " 16,31 29,32 10,33 15,34 7,35 6,36 30,37 19,38 8,3", "9 6,40 35,41 20,42 38,43 42,44 34,45 17,46 27,47 2", "8,48 19,49 49,50 37,51 43,52 7,53 43,54 1,55 33,56", " 3,57 38,58 46,59 5,60 10,61 46,62 58,63 17,64 41,", "65 52,66 4,67 23,68 21,69 22,70 8,71 44,72 13,73 1", "2,74 38,75 7,76 21,77 8,78 37,79 15,80 46,81 20,82", " 62,83 56,84"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 86;
    vector<string> edges = {"0,1 1,2 2,3 0,4 4,5 0,6 2,7 7,8 5,9 6,10 0,11 3,12", " 3,13 7,14 1,15 0,16 11,17 1,18 16,19 9,20 0,21 1,", "22 9,23 6,24 24,25 2,26 1,27 14,28 16,29 5,30 18,3", "1 11,32 0,33 15,34 32,35 15,36 17,37 22,38 7,39 6,", "40 0,41 27,42 23,43 18,44 10,45 30,46 13,47 44,48 ", "21,49 49,50 21,51 22,52 19,53 25,54 10,55 39,56 15", ",57 48,58 36,59 44,60 52,61 32,62 23,63 30,64 0,65", " 65,66 47,67 3,68 26,69 8,70 25,71 71,72 59,73 14,", "74 6,75 30,76 68,77 50,78 41,79 61,80 13,81 77,82 ", "3,83 80,84 73,85"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 73;
    vector<string> edges = {"0,1 0,2 1,3 0,4 3,5 1,6 2,7 0,8 4,9 3,10 7,11 3,12", " 10,13 0,14 3,15 0,16 2,17 14,18 8,19 9,20 15,21 1", "0,22 18,23 0,24 13,25 8,26 9,27 4,28 24,29 25,30 1", "1,31 28,32 18,33 20,34 5,35 24,36 12,37 30,38 16,3", "9 5,40 26,41 12,42 29,43 30,44 8,45 38,46 27,47 3,", "48 31,49 49,50 14,51 50,52 13,53 34,54 32,55 7,56 ", "9,57 1,58 38,59 20,60 41,61 34,62 13,63 38,64 59,6", "5 65,66 46,67 27,68 42,69 11,70 66,71 13,72"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 7;
    vector<string> edges = {"0,1 0,2 2,3 1,4 2,5 2,6"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 97;
    vector<string> edges = {"0,1 0,2 0,3 1,4 0,5 4,6 2,7 4,8 4,9 8,10 0,11 5,12", " 3,13 11,14 0,15 5,16 15,17 7,18 2,19 9,20 13,21 4", ",22 15,23 12,24 18,25 19,26 26,27 10,28 22,29 16,3", "0 26,31 9,32 11,33 32,34 32,35 20,36 31,37 6,38 8,", "39 33,40 26,41 28,42 42,43 29,44 12,45 29,46 29,47", " 18,48 37,49 48,50 25,51 44,52 0,53 24,54 40,55 55", ",56 26,57 4,58 23,59 4,60 43,61 15,62 12,63 43,64 ", "31,65 22,66 11,67 21,68 38,69 27,70 54,71 20,72 71", ",73 39,74 36,75 72,76 18,77 30,78 20,79 56,80 74,8", "1 24,82 71,83 58,84 34,85 55,86 70,87 6,88 51,89 7", ",90 13,91 47,92 70,93 0,94 53,95 84,96"};
    int height = 5;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 5;
    vector<string> edges = {"0,1 1,2 2,3 2,4"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 9;
    vector<string> edges = {"0,3 3,1 1,8 ", "8,", "6 2,7 4,2 0,4 7", ",5"};
    int height = 3;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 3;
    vector<string> edges = {"0,1 1,2"};
    int height = 2;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 9;
    vector<string> edges = {"0,3 3,1 1,8 ", "8,", "6 2,7 4,2 0,4 7", ",5"};
    int height = 4;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 100;
    vector<string> edges = {"0,1 0,2 0,3 0,4 0,5 0,6 0,7 0,8 0,9 0,10 ", "0,11 0,12 0,13 0,14 0,15 0,16 0,17 0,18 0", ",19 0,20 0,21 0,22 0,23 0,24 0,25 0,26 0,", "27 0,28 0,29 0,30 0,31 0,32 0,33 0,34 0,3", "5 0,36 0,37 0,38 0,39 0,40 0,41 0,42 0,43", " 0,44 0,45 0,46 0,47 0,48 0,49 0,50 0,51 ", "0,52 0,53 0,54 0,55 0,56 0,57 0,58 0,59 0", ",60 0,61 0,62 0,63 0,64 0,65 0,66 0,67 0,", "68 0,69 0,70 0,71 0,72 0,73 0,74 0,75 0,7", "6 0,77 0,78 0,79 0,80 0,81 0,82 0,83 0,84", " 0,85 0,86 0,87 0,88 0,89 0,90 0,91 0,92 ", "0,93 0,94 0,95 0,96 0,97 0,98 0,99"};
    int height = 1;
    LittleTree* pObj = new LittleTree();
    clock_t start = clock();
    int result = pObj->minCost(N, edges, height);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22666424&rd=11120&pm=8486
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <limits> 
#include <list> 
#include <map> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <vector> 
using namespace std; 
 
#define debug(c) cout << "> " << #c << " = " << c << endl; 
#define forn(i, a, b) for (int i = (int)(a); i < int(b); ++i) 
#define rep(i, n) for (int i = 0; i < (int)(n); ++i) 
#define repsz(i, c) for (int i = 0; i < (int)(c.size()); ++i) 
#define all(x) (x).begin(), (x).end() 
#define mp make_pair 
#define pb push_back 
#define inf(type) numeric_limits<type>::max() 
typedef pair<int, int> PI; 
typedef vector<PI> VPI; 
typedef long long ll; 
 
vector <vector<int> > tbl; 
vector <int> h; 
vector <int> len; 
int val = 0; 
int norm; 
void go(int x) 
{ 
  for (int i = 0; i < tbl[x].size(); ++i) 
  { 
    int dst = tbl[x][i]; 
    h[dst] = h[x] + 1; 
    go(dst); 
    len[x] = max(len[x], 1 + len[dst]); 
  } 
} 
void go1(int x) 
{ 
  int maxh = h[x] + len[x]; 
  int need = max(0, maxh - norm); 
  int can = max(h[x] - 1, 0); 
  int add = min(can, need); 
  debug(x); 
  debug(maxh); 
  debug(need); 
  debug(can); 
  val += add; 
  h[x] -= add; 
  for (int i = 0; i < tbl[x].size(); ++i) 
  { 
    int dst = tbl[x][i]; 
    h[dst] = h[x] + 1; 
    go1(dst); 
  } 
} 
class LittleTree 
{ 
public: 
  int minCost(int n, vector <string> edges, int height) 
  { 
    norm = height; 
    tbl.resize(n); 
    string s; 
    for (int i = 0; i < edges.size(); ++i) s += edges[i]; 
    istringstream c(s); 
    int f; 
    while (c >> f) 
    { 
      char cc; 
      c >> cc; 
      int l; 
      c >> l; 
      tbl[f].pb(l); 
      debug(f); 
      debug(l); 
    } 
    h.resize(n); 
    len.assign(n, 0); 
    h[0] = 0; 
    go(0); 
    for (int i = 0; i < n; ++i) debug(h[i]); 
    for (int i = 0; i < n; ++i) debug(len[i]); 
    go1(0); 
    return val; 
  } 
};

********************************************************************************
*******************************************************************************/