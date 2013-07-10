/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1859
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

class Orchard {
public:
    vector<int> nextTree(vector<string> orchard);
};

vector<int> Orchard::nextTree(vector<string> orchard) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> orchard = {"----", "T---", "----", "----"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> orchard = {"---T--", "------", "------", "----T-", "------", "------"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> orchard = {"------------", "------------", "------------", "------------", "------------", "------------", "------------", "------------", "------------", "------------", "------------", "------------"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> orchard = {"-"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> orchard = {"-T----T", "T---T--", "-----TT", "---TT--", "T-----T", "-------", "T-T--T-"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> orchard = {"---TT-", "--TT-T", "--TT-T", "---T-T", "--TT-T", "--TT-T"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> orchard = {"---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT", "---TT-TT----------------------TTTTTTT------TTTTTTT"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 19};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> orchard = {"-----T-T", "--T---T-", "T-T--T-T", "--------", "--------", "---T----", "--------", "--------"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> orchard = {"-----T-T", "--T---T-", "T-T----T", "--------", "--------", "---T----", "--------", "--------"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> orchard = {"-----T-T", "--T---T-", "T-T----T", "--------", "--------", "--------", "--------", "--------"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> orchard = {"-"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> orchard = {"TTT", "T-T", "TTT"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> orchard = {"---", "---", "---"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> orchard = {"T--", "---", "---"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> orchard = {"TT-", "---", "---"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> orchard = {"TT-", "---", "--T"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> orchard = {"----", "--T-", "----", "----"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> orchard = {"-----", "--T--", "-----", "-----", "T----"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> orchard = {"TT-TT", "T---T", "-----", "T---T", "TT-TT"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> orchard = {"TT-TT", "T---T", "-----", "T---T", "T-TTT"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> orchard = {"TT-TT", "T---T", "--T--", "T---T", "T-TTT"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> orchard = {"TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "--------------------------------------------------"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> orchard = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 25};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> orchard = {"-T----T", "T---T--", "-----TT", "---TT--", "T-----T", "-------", "T-T--T-"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> orchard = {"TT-T---", "TT-T---", "TT-T---", "TT-TTTT", "-------", "TT-TTTT", "TT-TTTT"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> orchard = {"-"};
    Orchard* pObj = new Orchard();
    clock_t start = clock();
    vector<int> result = pObj->nextTree(orchard);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7494608&rd=4640&pm=1859
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <valarray>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) istringstream(s)>>d
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
 
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    {int t;s2d(*i,t);ret.push_back(t);}
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
};
 
 
class Orchard{
public:
  vector<int> nextTree(vector<string> orchard){
    int n = orchard.size();
    int m = orchard[0].length();
 
 
    int mm = 0;
    int i, j, k;
    vector<int> a, b;
    for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {
        if (orchard[i][j] == 'T') {
          a.push_back(i);
          b.push_back(j);
        }
      }
    }
    vector<int> ret(2);
  
    for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {
        if (orchard[i][j] != 'T') {
          int t = min(i + 1, j + 1);
          t = min(t, n - i);
          t = min(t, m - j);
          for (k = 0; k < a.size(); ++k) {
            t= min(t,abs(i -a[k]) + abs(j - b[k]));
          }
          if (t> mm) {
            mm = t;
            ret[0] = i + 1,ret[1] = j + 1;
          }
        }
      }
    }
    return ret;
  }
};
 
 
 
 
#ifdef WIN32
void test0(){
  string _orchard[]={ "----" , "T---" , "----" , "----" };
  vector<string> orchard(_orchard+0,_orchard+sizeof(_orchard)/sizeof(string));
  int _nextTree[]= { 2,  3 };
  vector<int> nextTree(_nextTree+0,_nextTree+sizeof(_nextTree)/sizeof(int));
  Orchard _Orchard;
  vector<int> ret=_Orchard.nextTree(orchard);
  cout<<"--------------------test 0--------------------"<<endl;
  cout<<"orchard = "<<orchard<<endl;
  cout<<"expected to return "<<nextTree<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==nextTree)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test1(){
  string _orchard[]={"---T--","------","------","----T-","------","------"};
  vector<string> orchard(_orchard+0,_orchard+sizeof(_orchard)/sizeof(string));
  int _nextTree[]= { 3,  3 };
  vector<int> nextTree(_nextTree+0,_nextTree+sizeof(_nextTree)/sizeof(int));
  Orchard _Orchard;
  vector<int> ret=_Orchard.nextTree(orchard);
  cout<<"--------------------test 1--------------------"<<endl;
  cout<<"orchard = "<<orchard<<endl;
  cout<<"expected to return "<<nextTree<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==nextTree)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test2(){
  string _orchard[]={"------------","------------","------------","------------","------------","------------","------------","------------","------------","------------","------------","------------"};
  vector<string> orchard(_orchard+0,_orchard+sizeof(_orchard)/sizeof(string));
  int _nextTree[]= { 6,  6 };
  vector<int> nextTree(_nextTree+0,_nextTree+sizeof(_nextTree)/sizeof(int));
  Orchard _Orchard;
  vector<int> ret=_Orchard.nextTree(orchard);
  cout<<"--------------------test 2--------------------"<<endl;
  cout<<"orchard = "<<orchard<<endl;
  cout<<"expected to return "<<nextTree<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==nextTree)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test3(){
  string _orchard[]={"-T----T", "T---T--", "-----TT", "---TT--", "T-----T", "-------", "T-T--T-"};
  vector<string> orchard(_orchard+0,_orchard+sizeof(_orchard)/sizeof(string));
  int _nextTree[]= { 2,  3 };
  vector<int> nextTree(_nextTree+0,_nextTree+sizeof(_nextTree)/sizeof(int));
  Orchard _Orchard;
  vector<int> ret=_Orchard.nextTree(orchard);
  cout<<"--------------------test 3--------------------"<<endl;
  cout<<"orchard = "<<orchard<<endl;
  cout<<"expected to return "<<nextTree<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==nextTree)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
int main(){
  test0();
  test1();
  test2();
  test3();
  return 0;
}
#endif

********************************************************************************
*******************************************************************************/