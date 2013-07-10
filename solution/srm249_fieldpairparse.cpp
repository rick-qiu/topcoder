/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4615
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

class FieldPairParse {
public:
    vector<int> getPairs(vector<string> data);
};

vector<int> FieldPairParse::getPairs(vector<string> data) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> data = {"XXXXX XXXXX", "XXXX XXXXX "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> data = {"XXXXXXXXXX XXXXXXXXXXX", "XXXXXXXXXXXXXXXXX XXXXX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> data = {"X X X", "X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> data = {"XXXX X X X X X", "XX XXX XX X X X XXX "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 3, 3, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> data = {"XXXX X X X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 2, 11, 1, 3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> data = {"X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> data = {"X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> data = {"XXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> data = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> data = {"X ", " X ", " X ", " X ", " X ", " X ", " X", " X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 4, 5, 6, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> data = {"XXXX ", " XXXX ", " XXXX ", " XX X ", " XXXX ", " XXXX ", " XXXX ", " XX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> data = {"XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX", "XXXXXXXX XXXXXXXX XXXXXXXXXX XXXXXXXX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> data = {"XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> data = {"XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXX XXXXXXXXXXXXXX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> data = {"XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXX XXXXXXXX", "XXXXXXXXX XXXXXXXXXX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> data = {"X XXX X X X XX X X X ", " X X X X X X X X X ", " X X X X X XX X X ", "X X XX X ", " XX X X X XX XX X X X ", " X X X X X X X XX X X X ", " X XX X X X X X X X XX X", " X XX X X X X X", " X X X X XX X X X X X ", " X X X X X X X X ", "X X X X X X XX X XX X", " XX X X X X X X XX ", " X X X X X X X X X ", "X X X X X XX ", " X XX X X X X X XXX X X", "X X X X X X ", " X X X X X X X XX ", " X XX X XX X ", "X X X X X XX X ", " X X X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> data = {" XX X XX X XXX X X XXX X", "X X X X X X X X XX ", " X X X X XX X X X ", " X X X XX X X X X X X X ", " X XX X X X X XXX X X X ", " X X X XXX X X X X X", " X X X X X X X X XX X X ", "X X X X X X X X X X X ", " X XXXX X X XX X X X", "X X X XX X X X X ", " X X X X X X X X X X X ", " XX X X XX X ", " X X X XX X XX X X X ", "X XX X X X X X X X X", " X XX X X X X X X X X ", " X XXX X XX X XX X ", " X XX X XX X X ", " X X X X", "X X X X X ", " X XX X X X X X X X X ", " X X XX X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> data = {" X X X X X X X X ", " XXX X X X X XX X X XXX", "X X X X X X X X X X X X ", " X XXX X X XXX ", " X X X X X X X ", " X X X X ", "X XX X XX X X X X ", "X XX XX X X XX X X X X ", " X X X X X X X X X ", "X X X X X X X X X ", " X X X X X X XX X ", " X X X XX X X X X ", " X X X X XX X XXX XX X X ", " XX X X XX X X X", " X X X X XXX X XX X XX X X ", " X X X X XX X XX XX X", " X X X X X ", "X X X X X XX X X ", " XX XX XXX XX X XX X ", " X X X XX X X X X ", " XXX X X XXX X X X X", " XX X X X X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> data = {" X X X XX XX ", "X X X XX X XX XX X ", " X X X XX X XX X X XX ", " X XX XX X X X ", " XX X X XX X X X XX ", "X X X X X X XX ", " X X X X X X X X X XX ", " XX XXXX X XX X X X X X", " X X XX X X X X ", " X X X X X X X X ", " X X X X X X X ", " X X X X X ", " X X X X X XX XX X ", " X X X X X XXX X X ", " X X XX X XX X X X XX XX ", "X X XX X X X X X ", " X X X X XX X X X X X XX XXX", " X X X X X X X X X ", " XX X XX X XX X X", " X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> data = {" X X X XX X X ", " X X X XXX X ", " XXXX X X X X X ", " X X X X X ", " XX XX X X XX X X ", " X X X X X X X X ", " X X X X X XX X X X ", "XX X X X XXX X X ", " X X X X X X X X", " X X X X X X X X X X X ", "XX X X XX X X X X X", " X X X X XXX ", " X XX X ", " XXX XX X X X ", " X X X X X XX XX X X X X ", " X X X X X X XX ", " XX X X XX X X X X ", " X X XX X X XX ", " XX X X X XX X X ", " X X X X X X ", " X X X X XX X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> data = {" X X X X X X ", " X X XX X X XX X X X X", " X XX X X ", " X X X X X X X X X ", "X X X X X X X X X ", " X X X X X X XX", " X X X XX X X XX X ", " X X X X XX X X", " X XX X X XX X X XX", "XX X XX XX X XX X X", " XX X XX XXX X XX X ", " X X X X X X ", " XX XX X X X ", "X X X X X X X X X ", " XX X XX XXXX X ", " XX X X ", "X X X X X X X X X X X ", "X X X X X X X XX X", " XX X X X X XXX X X X ", " X X X X X XX X XXXX ", " X X X XX X X X XX X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> data = {"X X X X X XX X XX ", " X XX XX X X XXX", " X X X X X X", " X X X X X X ", " X X X X X X ", " X X X X X XX X X XX X ", "X X XXX X X X X X X X", " XXXX X X X XX X XX XX ", " X X X X X XXX X ", "XX X X X X X X X X X ", " X X XXX X X ", " X X XX X ", " X X X X X XXX X ", " XX X XX X X X XX ", " X X X X X X", " X X X X X XX ", " X XX X X X XX X", " XX XX XX X X X XX X X X ", " X X X X X X X", " X X X X XX X X X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> data = {"X XX X X XXX XX X ", " X XX X XX X X X X X X X X", " X X X XX X X XX X XX ", " X XXX X X X ", " X XX XX XX X X", " X XX XX X X XX X ", " X X XX XX X X X XX X X ", "X XX X X X X ", " X X X X X X X ", " X X X XX X XXX X X X XX", "X X X X X X X X X X ", "X XX XX X X X X X ", " X XXXX X X X X X ", " XXXX X X X X X X X X ", " XX X X X X X ", " X XX X X XX X X ", " X X XX X X X X ", " X X X X X XX ", " X X XX X X ", " XXX X X X XXX X XX ", " X X X X X X X X X ", " XXX X X X X X", " X X XX X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> data = {"XX X X X X X X X", " X X X X X X ", " XX XX X X X X X ", " X X X X X X X X X ", " X X XX X X X ", "X X X X X X X X XX XX ", " X X X X X X X ", " XX X X XX X ", " X XX X X X X X X ", " XX X X X XX X ", " X X XX X X XX X XXX X X ", " XX XX X X X X ", " X XX XXX X X X ", " X X XX X X X X X X X", " X X X XX X XX ", " X X X X X ", " X X X X X X ", "X X X X X ", " X X X X X X X X X X X X", " X X X X X XX X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> data = {" X X X X X ", "XX X X X XX X X X X X X X ", "X XX X X X X X X X X X X ", " XX X X X ", " XX XX X X XXX X X X ", "X X X X XX X X ", " X X X X X XX ", " X X X X X X XXX X X X X ", " XX X X X X X X X XX X", " X X X X X X X X X ", " X XX X X XXX X X ", " X X X XX X ", " X X X X XX ", "X X X X X X X ", " XX X X XX X X X X X X X X X", " X X X X XXX X ", "X XX X X XXX X X X XX", "X XXX X X XX X", " XX X X X ", " X XX XX X X X ", "X X X X X X X", " X X X X X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> data = {"X X X X X X XX X ", " X X X X X X X X ", " XXX X X XX X ", "X XX XX X X XXX X X X X XX X ", " X X X X X XX ", " X X X X X X ", "XX X X X X X XX X X ", " X X X XXX XX XX X XXX ", " X X X X X ", " XX X X X X X X ", " X XXX X XX X X X ", "X X X X X X X", " X X X X X X X X XX XX X XX ", " XX X X X X X X ", "X X X XX X X X X X X ", " X X X XX X X X X X ", " X X X XX X ", " X X X XX X X XX X", " X XX X X X X X ", " XX X XX X X ", " X X X X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> data = {" X X X X X X X ", " X X X X X X XX XX ", " X XXX X XX XXX X X XX", " X XX X X X X", " X XX X ", " XX X X XX XX X X XX X", " X X X X X XX X X X ", " X XXX X X X X ", " X XX X X X ", " X X X X X X X X X XXX X ", " X X X XXX XX X X X ", "X X X X XX X X X X ", " XXX X X X X X X X X ", "X X X X XX XX XXX X X X ", " X X X X X ", " X X X X X X X XX ", " X X X XX X X", " X X XX X X X X ", "X X XX X X XX X ", "X X XXX X XXX X X ", " X X X XX X XX XX XXX "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> data = {" X X X X XXX X ", " XX XX XX XX X X X ", " X X X X XXX X X XXXX ", " X X X X X X X XXX X X X ", " X X X XX X ", "X XX X X XX X X X ", " X X X XX XX X X ", " X X XX X X X X X ", " X X X XX X XXX X X X ", " X X X X XX XX X ", " X X X XX X X XXX ", " X X X X X X X X X X ", " XX XX X X X X X X", " X X X XX X X X ", " XX X X XXXXX X X ", "X X X X X X X X X X X X X", " X X X XX X X XX XX X", " XX X X X X X XX XX ", " X XX X XX X X XX", " X X X X X XX XX", " X X X X X X X XX X X ", " X X X X X XX X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> data = {"X X X X X X X X X XX XX", " X X X X X XX XX ", " X X X X XX X X XX X X X X ", " X X X X X X X X X X X X ", " X X X X X X ", " X XX X XXX X XXX X X X X", " XX X XX X X XX X X ", " XX X X X X ", "X X XX X XX XX ", " X X X X X XX X ", " X X X X ", " X XXX X XX X XX X X X X X ", " X X X X XX X ", " X X X X X XX X XX X ", " X X X X X X XX XX X X ", " XX XX X X X X ", "X X X X", " XX X X X X X XX X X ", " X XX X X X X X ", " X X XXX X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> data = {"X X X X X X XX XX XXX ", " X XXX X X X", " XX X XX X X ", "XX X X X X X XX ", " X X X XX X XXX X XX X X ", " X XX X X X XXX XX X X ", " X X X X X XX ", " X XX X X X XX X ", " X X X X X X XX ", " X X X X X X XX X X X ", " X X X X X X X X XX X ", " X X X X X X X ", " X XX XX X ", "XX X X X XX X XX ", " X X X X XX X X X ", " X X X X XX X X X ", " XX X X X X X X X X X", " X X X XX X X X XXX X ", " X X X X X X", "X X XXX X XXX X XX X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> data = {" X X XX X X X XXX X ", " XX X X X X X X ", "X X X X X X ", " X X X X X XX X X X ", " X X X X XX XX X X ", " XXX X XX X X X X X X", " X X X X X X X X X X", " X X ", "X X X X ", " X X X X X X X ", " X X XX X X XXX X X ", " X X XXX X X X X X X", " X XX X X X X X XX ", " X X X X XX X X X X X ", "X X X XX XX X X X X ", " XXX XX X X X XX ", " X X XX X X XX XX X X ", " X X X X X X X X X X ", " X X X X XX X X X XXX ", " X X X X X X X X X X ", "XX XXX X XX X X XX X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> data = {" XX X X X X X X XX ", " X X X X X X X X XX", " X X X XX X X X ", " X X X X X X ", " X X X", " X X X XX X X X X X X ", " X X X X X X X X XX ", " X X X X X ", " X X X X ", " X X X X X X X XX ", " X XX X X X X X X XX X ", " X X X X XX X XXX X X X X", "X X X XX X XX X X ", "X X X XX X X X XX X X X ", "X X X X X XXX X X X X XXXX ", " XX X X X X X X X XX XX", " X X X X X X XX XX ", " X X X XX ", " X X X X X X X X ", " X XX X X X X ", " X X X X X X", " XX X X XX X X X XX ", "XX XXX XX X XX X X XX", " X X XX X ", " X XX X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> data = {" X XXX X X X XX XX X X", " X X X X X X X X X ", "X X X X X X X ", " X X X ", " X X X X X ", " X X X X X X X X X ", " X XX XX X XX X X X ", " X X X X XX X X X X X X ", " X XX X XX XX X XXX ", "XX X XXX X X ", "X X X XX X XXX X X ", " XX X XXX X X X X ", " X X X X XX X X X X X X", " XX XX X XX X X X X X XX ", " X XX X X XX X ", " X X X X X X X X ", " X X X X XX XXX", " X X X XX X XX X X X", " X XX X X X XX X X X X", " X X X X X XX X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> data = {" X X XX X X X X X ", " X X X X X X X ", " X X X XX X XX X X X XX X X ", "X XX X XX X X ", " X X X XX XX X X X X X", " X X X X X X X X ", " X X X X X ", " XX XX X X XX X XX X", "X X XX X XX X ", " X X X X X XXX X", " X X X X XX X X XXX X", " X X X XX X X XX X XX X", " X X X X X X X ", " X X X XX X ", " X X X X X X XX X", " X X X X X X ", " X XX X X X X X X ", "X X X XX XXX X X X ", "X X XX XX X X X X X", " X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> data = {" X X X X X X X X XX X X X X X ", " X X XX XX X X X X X", " X X X X X X X X", " X X X X X X X X X ", " X XX X X XX X X XX X X", "X X X X X X ", " X XX X X X XX X X ", " X X X X X ", " X X X XX X XX X X XX ", " X X X X X X X ", " X X XX X X XX X X X ", " X X X X X XXX ", " X X X ", " X X X X X XX ", " X X X X XX XX X", "XX X X XX X X X ", " X X X X X ", " X XXXXX X X X X XX ", " X X X X X X X X ", " X XX X X X X X X", " X X X X X X X ", " X X X X X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> data = {" X XXXXX X XX X XX ", "X X X X XX X X X X X X X ", "X XXXX X XX X X X X X XXX X ", " X XXX X X X X XX X XX X X X X X X", " XX X X XXX XXX X X X XX ", " X X X XX X XXXX XX X", "X XX XX X X X X X X X X X ", " XX XX XX X X XX X X X X ", " X XX X X X XX XX XXXXX XXX X ", "X X X XX XX X XXX X X X X ", " X X X XX X X X X X XX X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> data = {"X XX X XXX X X X XX X X X X ", "X X XX XX X X XX X XX XX X X X X", " X XX X X X X XXX X XXX X XX", " XXX X X XX XX X X XX X ", " X X XX XX XXX X X XXX X X X X X", "X X XX X X X XXX XXXX X XXX X X X", "X X X X X X XX XX X X XX ", " X X X XX X X X X X X XXX X ", "X X X X X X XX X X X X X X", " X X X XX X X XX X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> data = {" XXX X X X X X XX XXXX XX X X", " X XXX X X X X X XXX X ", "X X XX X X X X X X X X XXX ", " X X X X X X X X X X X X X ", " X XXX X X X X X X X ", " XX XX X X X X XX XXX X XX X ", " X X X XXXXX X X XX X XXX X X XX X XX ", " X X XX XX X XX X XX X X X", "XX X XXX X X X XXX", " X X XX X XX XXX X X XX ", " X X X XXXX X X X XXXX X X", " X X X XX X X X X X X XXX X ", " X X X XX X X XX X XX X XX X ", "X X X XX X X X XXXXX X XX X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> data = {"XXX X XX X X XX X X X ", " XX X X X X X X X X X X ", " XX X X X XX XXXX X X X X XX ", "X X XXX XX X X XX XXXX XX X XX X X", "X X X X X XX XXXX X X X X XX X X ", " X X X X X X X X X XX X X XX X X", " X XX X XX XXX X XX X XX X XX", " X XX X X XX X X X X X XX X ", " X XX X XXXX XXX XX XX XXXX XX ", " X X X X X XXX X X XXXX XX X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> data = {" XX X XXXXX X X X X X XX XX X X X X X", " X X XXX X X XX X X XX X XX X X X X ", "X XXX XX X XX X X X X XXX X", " X X X X X X ", "X X XX XX X X X X X XX X XX", " XXXXXXXX X XXX X XXX XX X ", "X X XX X XX XXX XX X X X X ", "X X X X XX X X X XXX XX X X ", "XX X XXX XX X XXXX XX ", " XXX X X XX X XX XX X XX "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> data = {"X X X X X X X X X ", "X XX XX X XX XXXX X XX X X XX", "X X X X X X XX XXX X X X X X X X X", " X XX XXXX X X XX X XX XX XX ", " X XX X X XX X X XX X XXX", "XX X X X XX X X X XX XXXX X X ", " X X X X X X X X X ", " X X X X X XXX X XX X XX ", " XX XXX XX X X XXXX X XXXXX X X", "XX XX XX X XXX XX X X X X ", "XXX XX XXX X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> data = {" XX X X X X X X X X X X XX X", " X X X XX X X X X X X XX ", " X XX X X X XX X X XX X ", "X XX X X XX X X X X X X XX", " X X X X XXX X X X X X XX", "X X XXX XXX X X X XXX X XXX X X ", " XXX X XX XX XXX XX X X X ", " X X X X X X X X X X XX X ", " X XX X XX X XXXXX X XX XX X ", " XX XX X XX XX XXX X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> data = {" XX X XX X X X X X XX X XX XX ", "XX XX XXXX X XX X X XXX XXX ", "X X X XX X XX X XX XXX X X X X", "X X XX X X X X XX X X X ", " XXX XX X XX X X XX X X XX X X X XX ", " X XX X XX X X XXXX X X ", "XX X X XX X XX X XX XXX X X ", " X XX X X XX X XX X X X X X ", " XXX XX X XX X X X XX X X", "XX XXX X X X XX X X XX X X X X ", "X X X XX X X X X X XX X XX X X X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> data = {" X X XXX X X XXXX X X ", " X X X XX XX X X X X X ", " X X XX X X X X X X X X X X ", "X X X X X XXX X XX X X X X XXX ", " X XX XXXXX X X XX XX XX XX ", " X X X XXX XXXX XXX XX X", " X X XXX X X X X X XX X X XXX X X", " X XX X XXX X X XX X X X", " X X XX X X XXX X XX X X ", "XXX X X XXX X XX X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> data = {" X X XX X X X X X XXX X X X ", " X X X XXX X X X XXX X", " X X X X X XXX X XXX X X X ", " X X XX X X XX XXX X X XXX X X", " X X XX X X XX X XXX XX XXX", " X X XX X X XX X X X X XX X", " X XXXX XX X X X X X X X X X", " X XXX X X X XX X X ", " X X X X X X X X X X X", "X X X XX XX XXXX X", " X X X X XXX X XX XXX XX X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> data = {" X XXX X X X XX X X X X ", " X X XX XX XXX X X X X X X X X X", "XXX XXX X X X XX X XX X XX X ", " X X X X X XX XX X X X ", " XX X X X X X X X X XX XXX X X X ", "XX X XX X XX X X X XXX X XX XX X ", "X X XX X X X X X X ", " X X XX X X XX X X X X X X X XX X", " X XX X X X X X X X X XX X ", " X X X X X XX X XXX X XX X XXX ", "XXX X X XXX XX X XX X XX X", " XXX XXX X XX X X X X X X ", " X X X X X X XX X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> data = {" XX X X XX X XX X XX XX XX", " XXXX X X XX X XX X X X X X XXX ", " X XXX X X X XX X X XXXX ", "X X X XXX X X X XX XX X ", " XX X X X XX X X X X X X ", " X X X XXXX X X XXXX X XX", "X X XXX X X X X XX X ", " XX X X X X X X X XX X ", " XXXX X XX X X XX X XX X X ", " X XX XX X X X X X X X X X XXX ", " X X X XX X XX X X X XX X X X XX X XX "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> data = {" X X X XX XX X X XXX XX X X", " XXX X XXX X XX XX X X X X X ", "X XX X X XX XX X X X X XX X X ", "X X XXX XX X X XXX XX X X X ", " X XX X XXX X X X XX ", " X XXX XX X XXX X XXX X X X X X ", " X X X X XX XX X X X X X X ", "X XXXXX XX X X X X X XX X X", "X X X X X X X XX XXXX", "X X X XX X XX X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> data = {" X X XXXX XX X XXX X X X", " X X X X XXX XX X X XX", " X X X X X X X X XXX X X", "XX X XXX X X X X X XX X XXX", " XX X X X X X XX X XX XX ", " XXXX XXX XX XXX X X XXX XX", "XX X X X XXX X XXXXXX X XXX ", " XX XX X XX X X X X X X XX XX X X X X ", " XX XX X X X X X X X XX X X X XX ", "X X X X XX X X XX X X XX X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> data = {" X X X XX XXX X X X X X ", " X X X XXX X X X X X X X X ", "X X X XX X X X X XX XX XX ", " X XXX X X X XX XX XXX X X X X ", " X XX XX XX X X X X X ", " X X X X X X X X XX X X ", " XXX XX X X XXX X X XX X XX", "X XX XX XXX X X X X XXXX XXXX", " XXX X X X X X X XXXX X XX XXX", "X X X X X X X X X X X X ", "X X XX X X XXX X X X X XX X X", "X X X X X XX X X XX XX X X XX X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> data = {"X X X X X X X X XX X X XX X ", " XX X X X X X X XX X ", "X X X X X X XX X XXX XXXX X", "X XXX X XX X X XX X XXXXX XXX X X X ", "XX X X XXXXX X X XX X X X X ", "X X XXX X X X XX X X X XX X ", " XX X X X X X X X XXX XXXX ", " X X X X X X X XXXXX X X X X X X X", "X XX X XX X XX X XXX X X XX XX XX ", " XXXX XX X XX X X X X XX XX X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> data = {"X X XX X X X XX XXXXXXX XX X X X X", "XX X XX X X XX X X XX X ", " X X X X X X X XX XX X X XX X ", " X X X XXX XXX X X XX XXXX X X XX X ", " X X X X X X X X X X X X", "X XXXX XX XXX XX XXXX X X XX XX XX ", " X X XX X X XXX XXX XXX ", "X X XX X X X X X XXX ", " XX X X X XXX X X X ", " XX XX X X X X X X XX", "X X XXX X X X X XX X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> data = {" X X X X XXX X X X X X XX XX", "X XXX XX XX X X X XX XX X XXX ", " X X X X X X X X X X XX X ", " X X X XXX XX X X X X X X ", "X X X XX XXX X XX X XX X X XX ", " X X X XX X XX X XX XX XX X X XX", " XX X X XX X XXX XXXX X X X X X", " X X XX X X X X X XX X XX XX X X X", " X XX X X X X X X X X X ", " X X X XX X X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> data = {" X XXX XX X X X X X XX X X X X X ", "XX X XX X X XX XXXX XX X ", " X X X X XX X XXX X XXX ", " X X X XX X X X X X X X XX ", "X XX X X X XX X X X X XX XX XX X X ", " X X X XX X X X X X X X X X XX ", "XX X X XXX X XX X X X X X XX X X X X X", " XX X X XX X X X XXXX XX XXXX X XXX ", " X X X XX X X X X XXX X ", " XX XX XXX XX XXX XX X XXXX XXX "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> data = {" XXX XXX X X XX XX X X XXXX X ", "X X X X X XX XX XX X X X X X", " X X XX X X X XX X X X ", " X X X X X XX X X XXX X XXXX", "X X X X X XXXX X XXX X X", "XXX XXX X X XX X X X X XX XX X X", " X X X X X X X X XXX", " XXX X X X X X X X X XXX ", "X XXX X X X X XX XX XX XX XX X X ", " X X X XXXXX X X X X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> data = {" X X X X XXX XX X XX XX X", "X X XXXX X X XXX X X X X X X X", " XX XX X X X X XX X X X X X", " XXX X XX X X XX X X X ", " X XX X X X X X XX", " XX X X X X X X XX X ", "X X X X X X XXX X X X XXX X ", " XXX X X X X X X X X X ", "X X X X X XX XX X X XX X X X XX X", " XXX XX X X X X XX X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> data = {" XX X X X X X X XX XXXXX XX X XX ", "XX X X X X XX X X X XX X ", "X X X X X X X X X XXX X ", " X X XX X X X X X X XX XX X XXX ", "X X X XXXX XX X XXX XX XXX X ", " X X X X X X XXX X X ", " XX X X X X X X X XX X", " X XX XX X X X X X XX X XX X X", " X X X X X X XX X X", " X X X X X X XX XX X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> data = {" X X X X X X X X X ", "X X XX XX X X XXX X X X X XX X ", " XX X X XX X XX X XX X X XX", " X X X X X X XX X XX X X X X ", " X X XX X X XX XX X XX ", "X XX XX XX XXX X XXXX XX X X ", " XX X XXXX X X X XX XXX ", " XX X X XX X X X XX X X ", " X XX XXX X XX X X X X X X X", " X X XXX X X X X X X X X XX X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> data = {" X X XX X X X X XX X XX XXX XX X X ", " X X XX X X X XX XX ", "XX X X X X X X X XXXX XXXX X X", "XX XX X X XX X XXX X X X XX X X X X ", " X X X XX X X X X XX X ", " X X X X X X X X XX X X X ", " XXX XXX XXXX X ", " X X X XX X XX XX X ", " X X X XX XX X X XX X X XX X X", " X X X X X XX XXXX XX XX XXXXXX X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> data = {" X XX XXX X X X XX X X X X", "X X X XXX XX X X X X X X X X", "XXX XX X X XX X X X XX ", "X X XXXXXX XX XX XX X XX XXX XXX X X ", " X XX X X XX XX XX X X X X", " XX X X X X X X XX X X X", " X X X X X X XX X X XXX ", "X X XXX XX X X X X X X ", "X X X XXX XXXX X XX XX X", " X X X XX X XX X XX XX X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> data = {" XXX X XX X X XX XX X X XX", "XX X X XX XXX X XXX X X X X X", " X XX X XX X X X X X X X ", " XX X X XX XX XXX X X X X X ", "X X XXX X XX XXX XXX X X X ", " XX X XX XX X X X X X X XXX ", " X XX X X X X X XX XX X X X ", "XX X X X XX X XXX X X X X ", "XX XXXX XXX X X XX X X X ", " X X X X X X X X X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> data = {" X X X XX XXX XX X X X X X X XX ", " X X X XX X XXX XX X ", " X XXX X X X X X X XX X X", " XXXX X XX X XX X X X XX ", "X X X X X XX XX X ", " X XX X XX XXX X X X X X X X X X", "XX X XX X X X X X X X X", " X X X XXX XXX XXXX XX X XX ", "X X X X X X XX X XXX X X X X ", " X X X X X XX X X X X X X X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> data = {"X X X XXXXX X X XX XX X X X X X X", "XX X X X X XX XX X X ", "XX X X X X X XX XXXX X XX X X XX XX XX ", " X XX X XX XX XX XX X X X XXX X ", "XX X XXX X XXX X X XXX X X XX X X ", " X X X X X XX X X", " XX XXX XX X XX X X X ", " X X X XX X X X XX X X X X X X", " X X X XX X XX X X XX XX X XXX ", " X X XXX XX X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> data = {"XXX XXX XXX XXX XXX"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> data = {" ", " ", " ", " ", " X", "X "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> data = {" ", " ", " ", " ", " ", "X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> data = {" X ", " ", " X ", " ", " ", "X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 23, 11};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> data = {" X ", " ", " XXX ", " ", " ", "X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 21, 11};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> data = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "X X", " ", " ", " ", " "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> data = {"X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> data = {"XXXX X X X X X", "XX XXX XX X X X XXX "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 3, 3, 2};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> data = {"XXXXX XXXXXX", "XXXX XXXXX X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> data = {"XXXXX XXXXX", "XXXX XXXXX "};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> data = {"XXX X X", "XXX X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> data = {"X X X X", "X X X X"};
    FieldPairParse* pObj = new FieldPairParse();
    clock_t start = clock();
    vector<int> result = pObj->getPairs(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7494854&rd=7224&pm=4615
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <iomanip>
#include <time.h>
#include <ctype.h>
 
using namespace std;
 
 
class FieldPairParse {
public:
  vector <int> getPairs(vector <string> data)
  {
    vector<int> result;
    int run=0;
    for(int j=0;;j++)
    {          
      
      int i;
      for(i=0;i<data.size();i++)
      {
        
        if(j==data[i].size())
        {
          if(result.size()&1)
            return result;
          result.clear();
          return result;
 
        }
        if(data[i][j]!=' ')
          break;
      }
      if(i==data.size())
      {
        run++;
      }
      else if(run!=0)
      {
        result.push_back(run);
        run=0;
      }
    }
    
    return result;
  }
};

********************************************************************************
*******************************************************************************/