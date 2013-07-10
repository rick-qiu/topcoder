/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6713
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

class IncompleteBST {
public:
    string missingValues(vector<string> tree);
};

string IncompleteBST::missingValues(vector<string> tree) {
    string ret;
    return ret;
}


int test0() {
    vector<string> tree = {"A 1", "? 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> tree = {"B 1", "? 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> tree = {"V 1", "? 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "WXYZ";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> tree = {"Z 1", "? 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> tree = {"A 1", "? 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> tree = {"K 1", "K 2", "A 6", "? 12", "Y 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> tree = {"D 1", "F 3", "A 2", "X 7", "? 14"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "GHIJKLMNOPQRSTUVWX";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> tree = {"A 1", "A 2", "? 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> tree = {"K 1", "K 2", "K 3", "? 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> tree = {"? 3", "K 1", "K 2", "K 4", "K 8", "K 16", "K 32", "K 64", "K 128"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "LMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> tree = {"? 9", "K 1", "K 2", "K 4", "K 8", "K 16", "K 32", "K 64", "K 128"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> tree = {"? 17", "K 1", "K 2", "K 4", "K 8", "K 16", "K 32", "K 64", "K 128"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> tree = {"? 33", "K 1", "K 2", "K 4", "K 8", "K 16", "K 32", "K 64", "K 128"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> tree = {"? 65", "K 1", "K 2", "K 4", "K 8", "K 16", "K 32", "K 64", "K 128"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> tree = {"A 1", "B 3", "? 31", "D 15", "C 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "EFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> tree = {"Y 3", "C 4", "E 2", "H 1", "? 9", "G 5"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "DE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> tree = {"Y 3", "C 4", "E 2", "H 1", "Y 9", "G 5", "? 8"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> tree = {"E 1", "G 3", "H 7", "? 6", "C 2", "V 15"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "FG";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> tree = {"E 1", "G 3", "H 7", "? 5", "C 2", "V 15"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "DE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> tree = {"E 1", "G 3", "H 7", "C 2", "V 15", "? 14"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> tree = {"K 1", "R 3", "J 5", "? 4", "Y 7", "H 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGH";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> tree = {"K 1", "R 3", "J 5", "? 14", "Y 7", "H 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "STUVWXY";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> tree = {"K 1", "R 3", "J 5", "? 6", "Y 7", "H 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "LMNOPQR";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> tree = {"K 1", "R 3", "J 5", "? 21", "Y 7", "H 2", "I 10"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "J";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> tree = {"H 2", "U 15", "S 14", "A 8", "N 3", "N 6", "K 5", "A 4", "R 28", "T 7", "? 9", "M 1"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEFGH";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> tree = {"H 2", "U 15", "S 14", "M 1", "? 11", "A 8", "N 3", "N 6", "K 5", "A 4", "R 28", "T 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "LM";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> tree = {"? 56", "H 2", "U 15", "S 14", "A 8", "N 3", "N 6", "M 1", "K 5", "A 4", "R 28", "T 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "OPQR";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> tree = {"? 57", "M 1", "H 2", "U 15", "S 14", "A 8", "N 3", "N 6", "K 5", "A 4", "R 28", "T 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> tree = {"? 57", "M 1", "Z 2", "U 15", "S 14", "A 8", "N 3", "N 6", "K 5", "A 4", "R 28", "T 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> tree = {"? 57", "M 1", "H 2", "U 15", "L 14", "A 8", "N 3", "N 6", "K 5", "A 4", "R 28", "T 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> tree = {"Z 1", "Y 2", "X 4", "W 8", "V 16", "U 32", "T 64", "S 128", "R 256", "Q 512", "P 1024", "O 2048", "N 4096", "M 8192", "L 16384", "K 32768", "J 65536", "? 65537"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> tree = {"Z 1", "Y 2", "X 4", "W 8", "V 16", "U 32", "T 64", "S 128", "R 256", "Q 512", "P 1024", "O 2048", "N 4096", "M 8192", "L 16384", "K 32768", "J 65536", "? 131072"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJ";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> tree = {"Z 1", "Y 2", "X 4", "W 8", "V 16", "U 32", "T 64", "S 128", "R 256", "Q 512", "P 1024", "O 2048", "N 4096", "M 8192", "L 16384", "K 32768", "J 65536", "? 33"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> tree = {"Z 1", "Y 2", "X 4", "W 8", "V 16", "U 32", "T 64", "S 128", "R 256", "Q 512", "P 1024", "O 2048", "N 4096", "M 8192", "L 16384", "K 32768", "J 65536", "? 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> tree = {"Z 1", "Y 2", "X 4", "W 8", "V 16", "U 32", "T 64", "S 128", "R 256", "Q 512", "P 1024", "O 2048", "N 4096", "M 8192", "L 16384", "K 32768", "J 65536", "? 17"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> tree = {"R 2", "R 1", "X 3", "R 6", "Z 5", "? 4"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> tree = {"R 2", "R 1", "X 3", "R 6", "Z 5", "? 13"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> tree = {"X 3", "V 6", "A 2", "R 1", "J 21", "N 23", "K 11", "C 10", "? 4", "H 5"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> tree = {"X 3", "V 6", "A 2", "R 1", "J 21", "N 23", "H 5", "K 11", "? 10"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> tree = {"X 3", "V 6", "H 5", "A 2", "R 1", "J 21", "N 23", "K 11", "C 10", "? 43"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> tree = {"X 3", "H 5", "V 6", "A 2", "R 1", "J 21", "N 23", "K 11", "C 10", "? 46"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "B 9", "A 8", "Y 7", "R 5", "R 1", "Q 2", "T 3", "A 4", "? 16"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "B 9", "A 8", "Y 7", "R 5", "R 1", "Q 2", "T 3", "A 4", "? 17"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "B 9", "A 8", "Y 7", "R 5", "R 1", "Q 2", "T 3", "A 4", "? 10"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "B 9", "A 8", "Y 7", "R 5", "R 1", "Q 2", "T 3", "A 4", "? 11"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "B 9", "A 8", "Y 7", "R 5", "R 1", "Q 2", "T 3", "A 4", "? 153"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "FG";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "B 9", "A 8", "Y 7", "R 5", "R 1", "Q 2", "T 3", "A 4", "? 305"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "B 9", "A 8", "Y 7", "R 5", "R 1", "Q 2", "T 3", "A 4", "? 58"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "Y";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "? 9", "A 8", "Y 7", "R 5", "R 1", "Q 2", "T 3", "A 4"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "BC";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> tree = {"? 1", "A 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> tree = {"X 28", "D 152", "H 77", "E 76", "M 79", "L 39", "G 38", "Y 29", "X 14", "K 19", "C 9", "A 8", "Y 7", "R 5", "? 1", "Q 2", "T 3", "A 4"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "RS";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> tree = {"V 6", "A 2", "? 1", "H 5", "X 3", "J 21", "N 23", "K 11", "C 10", "A 4"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> tree = {"H 2", "U 15", "S 14", "? 1", "L 11", "A 8", "N 3", "N 6", "K 5", "A 4", "R 28", "T 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "LM";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> tree = {"Z 65", "? 1", "K 2", "K 4", "K 8", "K 16", "K 32", "K 64", "K 128"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> tree = {"? 1", "G 3", "H 7", "D 5", "C 2", "V 15"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "DEF";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> tree = {"? 1", "Y 2", "X 4", "W 8", "V 16", "U 32", "T 64", "S 128", "R 256", "Q 512", "P 1024", "O 2048", "N 4096", "M 8192", "L 16384", "K 32768", "J 65536", "L 65537"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "YZ";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> tree = {"? 1", "Y 2", "X 4", "W 8", "V 16", "U 32", "T 64", "S 128", "R 256", "Q 512", "P 1024", "O 2048", "N 4096", "M 8192", "L 16384", "K 32768", "J 65536", "K 65537"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> tree = {"? 1"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> tree = {"Z 1", "Y 2", "X 4", "W 8", "V 16", "U 32", "T 64", "S 128", "R 256", "Q 512", "P 1024", "O 2048", "N 4096", "M 8192", "L 16384", "K 32768", "J 65536", "? 131072"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJ";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> tree = {"A 1", "? 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> tree = {"? 1", "A 2"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> tree = {"D 1", "A 2", "? 5", "C 10"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "CD";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> tree = {"D 1", "A 2", "? 3", "F 7", "B 6"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> tree = {"C 2", "? 1", "X 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "CDEFGHIJKLMNOPQRSTUVW";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> tree = {"B 1", "B 2", "A 4", "? 9", "A 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> tree = {"A 1", "? 2", "A 5", "A 3", "A 4"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> tree = {"? 5", "K 2", "W 3", "A 4", "N 1"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "LMN";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> tree = {"F 1", "? 2", "G 3", "F 6"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> tree = {"D 1", "? 3", "A 6", "B 7"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> tree = {"B 1", "A 2", "? 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "CDEFGHIJKLMNOPQRSTUVWXYZ";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> tree = {"K 1", "K 2", "A 6", "? 12", "Y 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> tree = {"A 1", "? 2", "C 4", "D 5"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> tree = {"A 1", "B 2", "? 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> tree = {"M 1", "Z 2", "? 3"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> tree = {"? 2", "V 1", "E 4", "H 5"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "EFG";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> tree = {"A 1", "? 2", "C 3", "A 6"};
    IncompleteBST* pObj = new IncompleteBST();
    clock_t start = clock();
    string result = pObj->missingValues(tree);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20018722&rd=9999&pm=6713
********************************************************************************
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
 
const int Max = 1<<23;
 
class IncompleteBST {
public:
  char Ch[Max];
  string missingValues(vector <string>);
  bool valid(int i)
  {
    int left = i*2;
    if(Ch[left])
    {
      while(Ch[left*2+1]) left = left*2 + 1;
      if(Ch[left] > Ch[i]||!valid(i*2)) return false;
    }
    int right = i*2 + 1;
    if(Ch[right])
    {
      while(Ch[right*2]) right *= 2;
      if(Ch[right] <= Ch[i]||!valid(i*2+1)) return false;
    }
    return true;
  }
};
 
string IncompleteBST::missingValues(vector <string> tree) {
  int n = tree.size(), i;
  memset(Ch,0,sizeof(Ch));
  int pos;
  for(i = 0;i < n;i ++)
  {
    int tmp = 0, len = tree[i].length();
    for(int j = 2;j < len;j ++) tmp = tmp * 10 + tree[i][j] - '0';
    Ch[tmp] = tree[i][0];
    if(tree[i][0] == '?') pos = tmp;
  }
  string ans = "";
  for(char c = 'A';c <= 'Z';c ++)
  {
    Ch[pos] = c;
    char max, min;
    if(valid(1))
      ans += c;
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/