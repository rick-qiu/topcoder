/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2249
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

class Matching {
public:
    vector<string> findMatch(vector<string> first, vector<string> second);
};

vector<string> Matching::findMatch(vector<string> first, vector<string> second) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> first = {"DIAMOND", "BLUE", "SOLID", "ONE"};
    vector<string> second = {"DIAMOND", "GREEN", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DIAMOND", "RED", "SOLID", "THREE"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> first = {"CIRCLE", "RED", "SOLID", "TWO"};
    vector<string> second = {"SQUIGGLE", "GREEN", "EMPTY", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DIAMOND", "BLUE", "STRIPED", "TWO"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> first = {"CIRCLE", "RED", "STRIPED", "TWO"};
    vector<string> second = {"CIRCLE", "RED", "EMPTY", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "RED", "SOLID", "TWO"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> first = {"DIAMOND", "BLUE", "SOLID", "TWO"};
    vector<string> second = {"SQUIGGLE", "GREEN", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "RED", "SOLID", "TWO"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> first = {"CIRCLE", "GREEN", "EMPTY", "TWO"};
    vector<string> second = {"CIRCLE", "RED", "STRIPED", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "BLUE", "SOLID", "TWO"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> first = {"CIRCLE", "GREEN", "EMPTY", "TWO"};
    vector<string> second = {"DIAMOND", "BLUE", "STRIPED", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SQUIGGLE", "RED", "SOLID", "THREE"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> first = {"DIAMOND", "BLUE", "SOLID", "ONE"};
    vector<string> second = {"SQUIGGLE", "BLUE", "EMPTY", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "BLUE", "STRIPED", "THREE"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> first = {"DIAMOND", "BLUE", "SOLID", "ONE"};
    vector<string> second = {"SQUIGGLE", "BLUE", "STRIPED", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "BLUE", "EMPTY", "THREE"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> first = {"DIAMOND", "BLUE", "SOLID", "ONE"};
    vector<string> second = {"SQUIGGLE", "GREEN", "STRIPED", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "RED", "EMPTY", "THREE"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> first = {"DIAMOND", "BLUE", "SOLID", "ONE"};
    vector<string> second = {"SQUIGGLE", "RED", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "GREEN", "SOLID", "THREE"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> first = {"DIAMOND", "BLUE", "SOLID", "TWO"};
    vector<string> second = {"SQUIGGLE", "GREEN", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "RED", "SOLID", "TWO"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> first = {"DIAMOND", "GREEN", "EMPTY", "TWO"};
    vector<string> second = {"DIAMOND", "RED", "STRIPED", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DIAMOND", "BLUE", "SOLID", "TWO"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> first = {"DIAMOND", "GREEN", "SOLID", "TWO"};
    vector<string> second = {"SQUIGGLE", "GREEN", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "GREEN", "SOLID", "TWO"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> first = {"DIAMOND", "GREEN", "STRIPED", "ONE"};
    vector<string> second = {"DIAMOND", "RED", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DIAMOND", "BLUE", "EMPTY", "THREE"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> first = {"DIAMOND", "RED", "EMPTY", "TWO"};
    vector<string> second = {"CIRCLE", "RED", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SQUIGGLE", "RED", "STRIPED", "TWO"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> first = {"DIAMOND", "RED", "SOLID", "ONE"};
    vector<string> second = {"SQUIGGLE", "BLUE", "EMPTY", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "GREEN", "STRIPED", "ONE"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> first = {"DIAMOND", "RED", "SOLID", "ONE"};
    vector<string> second = {"SQUIGGLE", "GREEN", "SOLID", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "BLUE", "SOLID", "ONE"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> first = {"DIAMOND", "RED", "SOLID", "TWO"};
    vector<string> second = {"DIAMOND", "BLUE", "EMPTY", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DIAMOND", "GREEN", "STRIPED", "THREE"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> first = {"DIAMOND", "RED", "SOLID", "ONE"};
    vector<string> second = {"SQUIGGLE", "BLUE", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "GREEN", "SOLID", "THREE"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> first = {"DIAMOND", "RED", "STRIPED", "ONE"};
    vector<string> second = {"SQUIGGLE", "BLUE", "STRIPED", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "GREEN", "STRIPED", "THREE"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> first = {"SQUIGGLE", "BLUE", "SOLID", "TWO"};
    vector<string> second = {"SQUIGGLE", "GREEN", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SQUIGGLE", "RED", "SOLID", "TWO"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> first = {"SQUIGGLE", "BLUE", "STRIPED", "TWO"};
    vector<string> second = {"DIAMOND", "RED", "EMPTY", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "GREEN", "SOLID", "THREE"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> first = {"SQUIGGLE", "RED", "SOLID", "TWO"};
    vector<string> second = {"DIAMOND", "BLUE", "STRIPED", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CIRCLE", "GREEN", "EMPTY", "THREE"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> first = {"SQUIGGLE", "RED", "STRIPED", "ONE"};
    vector<string> second = {"SQUIGGLE", "RED", "STRIPED", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SQUIGGLE", "RED", "STRIPED", "ONE"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> first = {"SQUIGGLE", "RED", "STRIPED", "ONE"};
    vector<string> second = {"SQUIGGLE", "RED", "STRIPED", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SQUIGGLE", "RED", "STRIPED", "ONE"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> first = {"CIRCLE", "GREEN", "EMPTY", "TWO"};
    vector<string> second = {"DIAMOND", "BLUE", "STRIPED", "ONE"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SQUIGGLE", "RED", "SOLID", "THREE"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> first = {"DIAMOND", "BLUE", "SOLID", "ONE"};
    vector<string> second = {"DIAMOND", "GREEN", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DIAMOND", "RED", "SOLID", "THREE"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> first = {"DIAMOND", "GREEN", "SOLID", "ONE"};
    vector<string> second = {"DIAMOND", "BLUE", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DIAMOND", "RED", "SOLID", "THREE"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> first = {"SQUIGGLE", "BLUE", "STRIPED", "TWO"};
    vector<string> second = {"SQUIGGLE", "BLUE", "SOLID", "TWO"};
    Matching* pObj = new Matching();
    clock_t start = clock();
    vector<string> result = pObj->findMatch(first, second);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SQUIGGLE", "BLUE", "EMPTY", "TWO"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4685&pm=2249
********************************************************************************
#pragma warning( disable : 4786 ) 
 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <functional> 
#include <deque> 
 
using namespace std; 
 
char *sh1[] = { "CIRCLE", "SQUIGGLE", "DIAMOND" }; 
char *sh2[] = { "RED", "BLUE", "GREEN" }; 
char *sh3[] = { "SOLID", "STRIPED", "EMPTY" }; 
char *sh4[] = { "ONE", "TWO", "THREE" }; 
 
class Matching { 
  public: 
  vector <string> findMatch(vector <string> a, vector <string> b) { 
    vector< set< string > > foo; 
    foo.push_back( set< string >( sh1, sh1 + 3 ) ); 
    foo.push_back( set< string >( sh2, sh2 + 3 ) ); 
    foo.push_back( set< string >( sh3, sh3 + 3 ) ); 
    foo.push_back( set< string >( sh4, sh4 + 3 ) ); 
    vector< string > oot; 
    for( int i = 0; i < 4; i++ ) { 
      foo[ i ].erase( a[ i ] ); 
      foo[ i ].erase( b[ i ] ); 
      if( foo[ i ].size() == 1 ) { 
        oot.push_back( *foo[ i ].begin() ); 
      } else { 
        oot.push_back( a[ i ] ); 
      } 
    } 
    return oot; 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/