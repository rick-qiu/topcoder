/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8471
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

class TurningMaze {
public:
    int minTime(vector<string> maze);
};

int TurningMaze::minTime(vector<string> maze) {
    int ret;
    return ret;
}


int test0() {
    vector<string> maze = {"AA", "AA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> maze = {"AAA", "BBA", "AAA", "ABB", "AAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> maze = {"AAACAAA", "BBBBBBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> maze = {"ACDCDCA", "BBBBBBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> maze = {"CA", "BA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> maze = {"CAA", "DAA", "ACA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> maze = {"AAAAAAA", "BBBBBBA", "ADDDCDA", "CBBBBBB", "CBADCDA", "CBCBBBC", "AAABBBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> maze = {"DDDDDDD", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> maze = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "DDDDDDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> maze = {"CCCCCCC", "CCCCCCC", "CCCCCCC", "CCCCCCC", "CCCCCCC", "CCCCCCC", "CCCCCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> maze = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> maze = {"DAACCDC", "CADADAD", "DDAACDC", "DDCCDAC", "ADDDCCA", "DCAAAAD", "DCCDCCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> maze = {"AAACACD", "CDDDCDD", "AACAADC", "CACACDC", "AADDDDA", "DDDDDCC", "DDAADAC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
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
    vector<string> maze = {"DAACDDD", "CCDDCDC", "DDDCDAD", "DCDACCA", "ACCCDCD", "CCCDDDC", "AAADDDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> maze = {"DADCDCC", "AACCAAD", "ADACCAD", "ADCAAAC", "ACAACCC", "AADCDCA", "CDCCADD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> maze = {"AAAACDC", "CDDCDDD", "CACDDDC", "AAACCAD", "AAACADC", "DAACDCC", "DACADCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> maze = {"AADCDDD", "DADCDAA", "CAAAAAD", "CACDCAC", "DDDDDCA", "AACAAAC", "ADCDDCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> maze = {"CDAACDD", "CCDDDCA", "DADAACC", "ACAADDD", "CCCCCCC", "ADAADAC", "AAADDCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> maze = {"DACCCDC", "AACACCA", "CADCDCD", "DDAAAAA", "CADACDD", "DAADCDC", "ACCDCDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> maze = {"CDCDDCC", "DDCCAAD", "DACDCCD", "DCACDDD", "CCACDCD", "DDCDDDA", "ACAAACA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> maze = {"DADCADA", "DCCDCDA", "CDDCDAD", "ADDADDC", "DCCDACA", "DACAACD", "DCACCDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> maze = {"ABAABDC", "BDBDABD", "BCACBBC", "CDBABDD", "BDADCBB", "ACDDBDB", "CABCBDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> maze = {"ABAACBB", "BBDBDCD", "DDDACDA", "ADDBAAB", "CADCDCD", "CDBCAAC", "DDADDAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> maze = {"ABCBACC", "CBCCCCB", "BCDCABC", "BBDBCBB", "DCBCBAA", "CCADCBC", "ADCCDAC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> maze = {"CABACCA", "ABDCCCA", "DDABADA", "BBBDBAB", "DDACCCB", "DBACCDC", "BBBBBDB"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> maze = {"CCDABAA", "ADDBCCC", "BBBACBD", "ADACDAA", "BDADBCC", "BABBBAA", "BDBBDCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> maze = {"CDBBCDD", "DDACDDA", "CABDCAD", "CCCBDCC", "BBCBADC", "DDDCCBA", "BACCBBB"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> maze = {"DACCDDA", "DADDCCA", "DDDADDD", "DCBCBDC", "ACCDAAD", "ACDACAB", "ADBCAAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> maze = {"DBCADDC", "BDDBDAB", "DBBBAAC", "BBAAAAC", "BDBACDA", "DDAADBA", "DABDCDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> maze = {"DCBDBCA", "CCACACD", "DDDBDCD", "AACBDDD", "CBCBDCC", "ABADDDB", "ABCCBBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> maze = {"CCBCDDD", "DBCCBCD", "AADDDBD", "ADBCABB", "BCDCCAC", "DACDABB", "BCCDADA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> maze = {"AC", "AC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> maze = {"AD", "AC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
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
    vector<string> maze = {"CA", "AC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> maze = {"CB", "AC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> maze = {"CC", "AC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
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
    vector<string> maze = {"CD", "AC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> maze = {"DA", "AD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> maze = {"DA", "BD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> maze = {"DA", "CD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> maze = {"DA", "DD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
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
    vector<string> maze = {"CAC", "DAD", "ACA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> maze = {"DAB", "DDD", "DAC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> maze = {"DAD", "BDC", "CAC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> maze = {"DCA", "AAD", "AAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> maze = {"DCA", "ADA", "CCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> maze = {"DCA", "BBD", "CAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> maze = {"DCA", "DBD", "DBD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> maze = {"DCA", "DDA", "CCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> maze = {"CAA", "AAD", "CCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> maze = {"CDB", "DDC", "ACD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
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

int test51() {
    vector<string> maze = {"CAC", "ACA", "CCD", "CDC", "CCD", "CDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> maze = {"CCD", "CAC", "DDA", "CDC", "DCD", "ACD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> maze = {"CCD", "DDC", "CDC", "CDA", "DCD", "ACD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> maze = {"CDA", "CCC", "DCD", "CCC", "DCD", "ACD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> maze = {"CDC", "DAD", "CAC", "CCD", "DCC", "ACD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> maze = {"DCA", "CAD", "CCC", "DDD", "ACD", "CDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> maze = {"DCA", "DCD", "CCC", "DAD", "CCD", "CCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> maze = {"DCA", "DDC", "DCD", "DCC", "DCD", "CCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> maze = {"DDA", "CCD", "CCC", "CCD", "CCC", "DDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> maze = {"CDA", "DDD", "CDC", "DAC", "CDD", "ACD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> maze = {"AABAA", "BAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> maze = {"AABAB", "AAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> maze = {"AABBA", "BAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> maze = {"AABBB", "AAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> maze = {"AABBB", "BAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> maze = {"ABAAA", "AAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> maze = {"ABABB", "AAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> maze = {"ABBAA", "AAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> maze = {"ABBBB", "AAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> maze = {"ABAAA", "AAABA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> maze = {"CCADAA", "CDCAAD", "CACDCC", "ACDDAC", "CDCCCA", "CCCCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> maze = {"ACCAAD", "DCADDA", "CDDDAD", "DDAACD", "DDDCAD", "CDDCCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> maze = {"DDCAAC", "DDCCDA", "AADADD", "DACAAD", "AADDAC", "ACCDCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> maze = {"CAAAAA", "DAADCC", "ACCDDD", "ADDCCC", "AACACD", "DDCDCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> maze = {"DCDDAC", "DCCCDD", "CADDAD", "DDDACC", "DDCAAD", "DACDDA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> maze = {"DCDDAC", "DCDACC", "DCCDAC", "AADCAC", "CDDDAD", "AADDDA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> maze = {"CDADAA", "DCCCDC", "CDACCC", "CAAACA", "ADDDAD", "CACDCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> maze = {"DCDDAC", "AACDAD", "DDACAD", "ACCCDC", "AACDAC", "ADCDDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> maze = {"CADACD", "ADADAD", "DDDCCD", "CDAACD", "DDDDAC", "DACDDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> maze = {"CDAADD", "CDCADC", "DADCDC", "DCCCCD", "ACADDC", "DCCADC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> maze = {"DDCADCD", "DDAADCD", "ACCACDA", "CAABCDD", "BABAAAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> maze = {"ADCDDCA", "ACCDCBD", "CCACBCA", "ADACBBA", "BBCBDCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> maze = {"CBCDDCB", "DAADDBA", "AACBABB", "DBACDAA", "CDCADAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> maze = {"CCCCCCA", "ACACBDB", "CAACAAC", "DCDAABB", "BACACDA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> maze = {"ADACDAA", "BADBABD", "CCDBBBC", "DDCBCDD", "DBDCCDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> maze = {"CBBBCDB", "ABADACB", "DABBDAA", "ACDCDAA", "AAABABD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> maze = {"CCABCBC", "DDDCCBC", "ADCADCA", "BBBBBAD", "CDCAACC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> maze = {"AAACAAD", "BDAACAC", "CDDBBCA", "BCCACAC", "BBBAACC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> maze = {"DADABCD", "CACDCAA", "DAABDDB", "DCBBAAB", "BBCBACC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> maze = {"DCCAACD", "CACACCB", "ACCCDBB", "DADBACB", "AAADCDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> maze = {"CACA", "CACA", "CACA", "CAAA", "ACCC", "ACAC", "CCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> maze = {"CACC", "CCCA", "CAAA", "CCCC", "ACAC", "CACA", "CCCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> maze = {"CCAA", "ACCC", "CACA", "CCCA", "ACCC", "AACC", "CCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> maze = {"CCAC", "CAAC", "CCCC", "CCCC", "ACCC", "AACC", "CCAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> maze = {"CACA", "CCAA", "CACC", "CCCC", "AACC", "ACAC", "CCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> maze = {"ACCC", "CCAA", "CCAC", "ACCC", "CCCA", "ACAC", "CACC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> maze = {"ACCC", "CCAA", "CCAC", "CCCA", "CCCA", "ACAC", "CACC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> maze = {"CCAA", "ACCC", "ACCC", "CCAC", "ACAC", "ACAC", "CCCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> maze = {"CAAC", "CACA", "CCCC", "ACCC", "CACC", "ACAC", "CCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> maze = {"CAAC", "CACA", "CCCC", "CCCA", "CCCA", "ACAC", "CACC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> maze = {"DCDDCDA", "CCCDCDD", "DCCCCCC", "DDCDCDD", "ADCCCCC", "CDDCCDD", "DCCADCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> maze = {"CCADDDD", "CDACCDA", "ADCDDDC", "DAADDCC", "DCDCACA", "AACCDCC", "DCDDDDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> maze = {"CDCCCDA", "DACAACA", "CCDCDDC", "ACACDDC", "CCAACDD", "CDDCDCA", "DDCDCCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> maze = {"CDCCDAA", "DCCDCCC", "DCDDCCD", "ADDCCAD", "CCDCCCD", "CDCCCAC", "DCCDACA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> maze = {"CACDAAC", "CCACCCD", "ADDDADD", "DACCCCD", "ACDDCDD", "CCCDDCD", "DACDCDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> maze = {"DCADCAC", "ACDDDDA", "CCADDDC", "ADADCCD", "CADCACD", "CCDCADC", "DCDDCCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> maze = {"DCCCDAC", "DCDDDCA", "ADCACAC", "ACDDCCD", "CCDDDDA", "ADCCADA", "CCCDCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> maze = {"CCCCDCC", "DDDCCDC", "DDCACAC", "DDCDDCC", "DCCDDDD", "ADCCCAC", "DDCADCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> maze = {"CCACACD", "ACCCDCC", "CDCDADC", "DCCCDAC", "DCDCCDC", "ADADCDD", "CCDDACC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> maze = {"DCCAACC", "ACDDDCA", "CADCDCC", "CDDDCDA", "CDCCCAC", "ADDADCC", "CDADCDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> maze = {"AABBBBB", "AABBABB", "ABABABB", "ABABBBB", "ABABBBA", "AAAAAAA", "BBABBAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> maze = {"AABBBBB", "BABBBBA", "BAAABAA", "AAAABBB", "BAAAABA", "ABBAABB", "BABAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> maze = {"ABAAABA", "AAABBAA", "ABBABAB", "AAAAABA", "ABBBABA", "ABAAAAA", "BAAABAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> maze = {"ABAAABB", "AABABBB", "BAABBBA", "BAAABAB", "ABAAAAB", "AAABAAA", "AAAABBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> maze = {"ABBAAAA", "ABBBABB", "AAAAABB", "ABAAAAB", "BBBBAAA", "ABABBBA", "BBAABAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> maze = {"ABBABBB", "AAABBBA", "AAAAAAA", "AAABBBA", "AAAABBA", "BBBAAAB", "ABBBBAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> maze = {"ABBBBBA", "AAABABB", "BAABBAB", "BBAAAAA", "ABAABAA", "ABBAAAB", "AABBBAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> maze = {"ABBBBBA", "ABABBBA", "AABABAB", "BAAAAAB", "BAABBAB", "AAAAAAA", "ABBAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> maze = {"ABBBBBB", "AABBBAB", "AAAAAAA", "ABAABBA", "ABAAABB", "ABAAAAA", "ABAABBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> maze = {"AAABBAA", "AAABAAA", "AAAAABA", "BABBBBA", "ABBBAAA", "ABAAAAA", "BBABBBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> maze = {"DCDDDAD", "AADCDDA", "DCCAACC", "ACACCAD", "CACDAAC", "CAACADD", "CCADDCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> maze = {"DDCCCAC", "AADACDA", "CADAADA", "DCACDAC", "DCDADDC", "DCAADCD", "DCACDDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> maze = {"DACCCDC", "CACADCD", "DDACADC", "DDCDDCA", "CDACDAD", "DACCCAC", "DDADADA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> maze = {"CCADDCC", "ACDACCC", "CDDDCAA", "CADACDC", "DAACDAD", "CCAADCD", "CCDDCDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> maze = {"DCCDCAC", "ACDDCAD", "CDCCCCC", "DCDCCDD", "ACDCADA", "DAADCAC", "DDAACDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> maze = {"DCDCADC", "CDAAACC", "CACAADC", "CCCAADD", "CDCCACD", "CACCDCA", "DCDCDAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> maze = {"DDACADD", "DDCDDAA", "AADACAC", "CCCADCC", "AADDCDD", "CAADAAC", "DCCADCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> maze = {"CDDACAA", "ADCDCCC", "DCACCDC", "ACCCDCD", "CCCCCCA", "ACCDDAD", "CDDDCDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> maze = {"CDACCAD", "DACAACD", "CADCCAC", "CDDADCC", "DAAACAC", "ACDDDAC", "DACDCDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> maze = {"CDADCCA", "DDCCDDC", "CCCDCCA", "DDDCDDD", "DDDDAAA", "AAAADDD", "DCCCDDA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> maze = {"DADCDAC", "ABBBADA", "BDDACCC", "BACBAAA", "DDCACDD", "CDBCCBD", "DCBBDDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> maze = {"DDACAAC", "BAAADCC", "AABCBCB", "CBACBBB", "CDDDBCD", "AABBAAD", "DAADACC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> maze = {"CBBCCBA", "AABDAAA", "AACADAD", "ADDCADD", "BBBADBC", "BABDCCD", "ABBDBCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> maze = {"ABBBADA", "CBCACBB", "CABCDBC", "DCDCCDB", "CBDBABB", "DDDCCAB", "ACADCDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> maze = {"ACDCDAC", "BBABDDA", "DCADBCC", "DCCDDDA", "CCBBCAB", "DACDACA", "DABCAAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> maze = {"CDADDCD", "CBDCCAD", "AABDDAA", "BCDBADA", "BDAABCA", "DADCDAC", "ADDACDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> maze = {"CDBDCDC", "DAADBDA", "DADCACB", "ACACCAD", "BCBBCDA", "DDBAACA", "DABADBC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> maze = {"DCABADB", "BBCADDB", "ABAABCD", "ADCDDAC", "AADCDCA", "BAABBCB", "ADBBDAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> maze = {"CBDADAD", "DDBAACB", "CBCCCAC", "ADDDADC", "CBCCCAD", "ACDDBAA", "BCAACBC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> maze = {"DCDACAD", "AAABAAB", "CCCBBDC", "ACCBCCA", "DAACBCC", "ADCCDAC", "DAAACCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> maze = {"CCACCAA", "CCCCCCC", "CCCAAAA", "CCACACC", "CCCCCCC", "ACCCAAC", "CCCACCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> maze = {"ACCCCAC", "CCCCCCC", "CAACCAC", "CCCCCCA", "CCACCCC", "CCCACAC", "CAACACA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> maze = {"CACAACC", "CCAACAC", "CCCAACA", "CACACCC", "CCCCCCC", "ACAACCC", "CACCCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> maze = {"CACACAC", "CCCCCAA", "CACACAA", "CCCCACA", "CCACCCC", "ACCACCC", "CCACCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> maze = {"CACCACC", "ACCCCCC", "CCCAAAC", "CCCACCC", "CAACACA", "ACCACCC", "CCCCCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> maze = {"CCCACCA", "CACCCAA", "CCCCACA", "CAAACCC", "CCCCACC", "ACCACCC", "CCACCCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> maze = {"CACACCC", "CACCCCC", "CCACACC", "CCCCCCA", "AACCCCC", "ACCCAAC", "CCAACCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> maze = {"CCCCCAA", "CAACCAA", "CAAACAC", "CACCCCA", "CCCCCCC", "ACCCCAC", "CACCCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> maze = {"CCACACA", "CCCACCC", "ACCCCAC", "CAACACC", "ACACCCC", "ACCCCAC", "CCCCCCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> maze = {"CCCCCAC", "CCCCAAC", "CAAACAC", "CCCCACA", "CCCCCCC", "AACCCCC", "CCCCCCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> maze = {"CCCCDAA", "ADDADDD", "CCCDCAD", "DCDCCAC", "ADCCAAC", "CCCCAAD", "DACDCCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> maze = {"ADCDADD", "BDDCCDA", "CCCCAAC", "CDBDCDD", "CACCDAC", "BAADDDA", "DDCDCDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> maze = {"DDCCADC", "DCACDCD", "DCDCCCA", "ACDCACC", "CAACCCC", "CCCDCAA", "ACCCDCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> maze = {"DDDDDAD", "DDDDDDD", "ADDDCCD", "DACDADD", "DADDCAD", "DDDCDDD", "DADDDDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> maze = {"CCDAADC", "DADDADD", "DAACADD", "DCADDDD", "CDCADDD", "ACAAAAC", "CADCDCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> maze = {"CADDAAC", "CDDADCC", "DCDCDAA", "CCCCDDA", "CDACACC", "ACACACC", "CDCCDCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> maze = {"CDCDDAD", "CDADCDA", "DCDDDDC", "CCDDDCC", "CDCCDAD", "AAAACDC", "DCDCDCC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> maze = {"CAAAACA", "CCABBCA", "CADAACC", "CBCAAAC", "ABAABCD", "CADAABD", "AACBDBC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> maze = {"CACADAC", "DDAACDD", "CCDCCDC", "ADCAADC", "CDCACCC", "CCACDCD", "CACDCDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> maze = {"DDCADDD", "AACDDDD", "DDDCCAD", "CDACDAC", "CDAAADD", "ADDCACD", "DADDDDA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> maze = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAB"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> maze = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAB", "DCDDCDA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> maze = {"AAAAAAA", "ABBBBBB", "ACCDDCA", "BBBBBBA", "ADDCDDA", "ABBBBBB", "ACDCDCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> maze = {"ACDCDCA", "BBBBBBA", "ACDCDCA", "ABBBBBB", "ADDDDDA", "BBBBBCA", "AAAAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> maze = {"AAAAAAA", "AAAACAA", "BBBCBBB", "AAADAAA", "AAAAAAA", "AAADAAA", "AAAAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> maze = {"AAABAAA", "BBABABD", "AACAABA", "ABABBBC", "AAABBBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> maze = {"AAAAACA", "ABCADCD", "ADCCBDC", "AAADDCD", "ACCDDCD", "ACDDDCC", "CDDDCCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> maze = {"ACDCDCA", "BBBBBBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> maze = {"ACADACA", "BBBBBBA", "ADCCDAA", "ABBBBBB", "ACADAAA", "BBBBCBC", "AAAAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> maze = {"AAAAAAC", "AAAAACA", "AAAACAA", "AAACAAA", "AACAABB", "ACAAADD", "CAAAABA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> maze = {"ADCDCDC", "CDCDCDC", "CDCDCDC", "CDCDCDC", "CDCDCDC", "CDCDCDB", "CDCDCBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> maze = {"ACCADCC", "BDCDCCD", "CCDDCDA", "CADCDDC", "ABBCDDC", "CDCCCDA", "DDCACCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> maze = {"CADBACA", "AAAABAB", "AACCBAA", "CDADCDA", "AAADAAD", "CADAABA", "DDAAACA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> maze = {"DACDCDC", "DCACDCD", "CAAACDC", "AAAAAAA", "CDCDADC", "DCDCDCD", "CDCDDAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> maze = {"ACDCBCD", "CDCBCDC", "BCDCDCB", "CBCDCDC", "BCDCDCB", "CDCBCDC", "AADAAAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> maze = {"AAACA", "BBBBA", "ACAAA", "ABBBB", "ACAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> maze = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> maze = {"AAAAAAA", "BBBBBBA", "AAAAAAA", "ADDDDDC", "CAAAAAC", "AABBBBB", "AACDAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> maze = {"AABDDBD", "CAAABAA", "AACCCBD", "CABABAD", "BBAACDC", "AACAAAC", "DDAADCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> maze = {"ADCACDA", "CADCACD", "DADCAAC", "DACACDD", "ACDCDCD", "DACCAAC", "ADACDCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> maze = {"DCDCDCD", "BBBBBBC", "DCDCDCD", "CBBBBBB", "DCDCDCB", "DCDCDCD", "DCDCDCD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> maze = {"CDCADDA", "ACDCADB", "BACBDAD", "DCDDDCD", "DDBDBDD", "BCDDBDC"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> maze = {"CAAC", "DBDC", "ADAC", "BAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> maze = {"AADAAAD", "CADACAA", "CAAAADA", "ACAACAD", "CAAAAAC", "AAACAAA", "ADAAAAB"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> maze = {"ACDACDA", "CDDAACC", "DACDADA", "CADDAAA", "ACDAADD", "ADDACCD", "CCACCAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> maze = {"CDCDCDC", "DCDCDCD", "CDCDCDC", "DCDCDCD", "CDCDCDC", "DCDCDCD", "CCCDDDA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> maze = {"CDCDCDC", "CDCDCDC", "CDCDCDC", "CDCDCDC", "CDCDCDC", "CDCDCDC", "CDCDCDD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> maze = {"ACADACA", "BBBBBBD", "ADACADA", "DBBBBBB", "ACADACA", "BBBBBBD", "BBBBBBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> maze = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAABB", "AAAAABA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> maze = {"ADADADA", "DADADAD", "ACADADA", "ADADADA", "ADADADA", "DADADAD", "AAADDDB"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> maze = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAB", "AAAAAAB", "AAAACCA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> maze = {"ACDCDCA", "BBBBBBA", "ACDCDCA", "ABBBBBB", "ACDCDCA", "BBBBBBA", "AAAAAAD"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> maze = {"AABA", "AACA", "BDAA", "AAAA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> maze = {"AAAAAAA", "DBBBBBA", "BAAAAAA", "BABDBDB", "AAACAAA", "ABBBBBB", "AAAACBA"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> maze = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAB"};
    TurningMaze* pObj = new TurningMaze();
    clock_t start = clock();
    int result = pObj->minTime(maze);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11972352&rd=10810&pm=8471
********************************************************************************
// Cry as challenge phase is passing by 
 
#include <algorithm> 
#include <functional> 
 
#include <cmath> 
#include <cctype> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
 
#include <queue> 
#include <vector> 
#include <string> 
#include <sstream> 
#include <iostream> 
 
using namespace std; 
 
#define FORC(it,v) for( __typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it ) 
 
int R, S; 
int dp[ 1 << 7 ][ 1 << 7 ][ 7 ][ 7 ]; 
 
vector< string > grid; 
 
struct state { 
    int x, y; 
    int row; 
    int col; 
 
    state() {} 
    state( int _x, int _y, int _row, int _col ) : x( _x ), y( _y ), row( _row ), col( _col ) {} 
     
    int &ref() { return dp[row][col][x][y]; } 
}; 
 
const int dx[4] = { -1, 0, 1, 0 }; 
const int dy[4] = { 0, 1, 0, -1 }; 
 
inline bool valid( int x, int y ) { if( x < 0 || y < 0 || x >= R || y >= S ) return false; return true; } 
 
inline bool has_door( state ex, int x, int y, int pc ) 
{ 
    int ch = ( ( ex.row >> x ) & 1 ) ^ ( ( ex.col >> y ) & 1 ); 
    if( grid[x][y] == 'A' ) return true; 
    if( grid[x][y] == 'B' ) return false; 
 
    if( ( grid[x][y] == 'C' && ch == 0 ) || ( grid[x][y] == 'D' && ch == 1 ) ) { 
        if( pc == 0 || pc == 2 ) return true; 
        return false; 
    } 
 
    if( pc == 1 || pc == 3 ) return true; 
    return false; 
} 
 
class TurningMaze { 
public: 
    int minTime( vector <string> maze ) { 
        grid = maze; 
        R = ( int )grid.size(); 
        S = ( int )grid[0].size(); 
 
        queue< state > Q; 
 
        memset( dp, -1, sizeof dp ); 
        state start( 0, 0, 0, 0 ); 
 
        for( Q.push( start ), start.ref() = 0; !Q.empty(); Q.pop() ) { 
            state ex = Q.front(); 
 
            if( ex.x == R-1 && ex.y == S-1 ) return ex.ref(); 
 
            for( int pc = 0; pc < 4; ++pc ) { 
                int nx = ex.x + dx[pc]; 
                int ny = ex.y + dy[pc]; 
 
                if( !valid( nx, ny ) ) continue; 
                if( !has_door( ex, ex.x, ex.y, pc ) ) continue; 
                if( !has_door( ex, nx, ny, pc^2 ) ) continue; 
 
                state nov( nx, ny, ex.row, ex.col ); 
 
                if( nov.ref() != -1 ) continue; 
 
                nov.ref() = ex.ref() + 1; 
                Q.push( nov ); 
            } 
 
            { 
                state nov( ex.x, ex.y, ex.row ^ (1<<ex.x), ex.col ^ (1<<ex.y) ); 
                if( nov.ref() != -1 ) continue; 
                nov.ref() = ex.ref() + 1; 
                Q.push( nov ); 
            } 
        } 
 
        return -1; 
    } 
}; 
 
 
 
 
 
 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/