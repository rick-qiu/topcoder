/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10251
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

class LinearPolyominoCovering {
public:
    string findCovering(string region);
};

string LinearPolyominoCovering::findCovering(string region) {
    string ret;
    return ret;
}


int test0() {
    string region = "XXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABB";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string region = "XX.XX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "BB.BB";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string region = "XXXX....XXX.....XX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string region = ".";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = ".";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string region = "X";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string region = "XX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "BB";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string region = "XXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAA";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string region = "XXXXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string region = "X.XXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string region = "XXXX.X";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string region = "XX.XXXX.XXXXXX.XXXXXXXX.XXXXXXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "BB.AAAA.AAAABB.AAAAAAAA.AAAAAAAABB";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string region = "XX.XXXXXXXXXX..XXXXXXXX...XXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "BB.AAAAAAAABB..AAAAAAAA...AAAABB";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string region = "..........XXXXXX........XXXX........XX..........";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "..........AAAABB........AAAA........BB..........";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string region = "...XXXXXXXXXXXX.....XXXXXXXXXXXXXX.......";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "...AAAAAAAAAAAA.....AAAAAAAAAAAABB.......";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string region = "XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string region = ".XX.XXXX.XX.XX.XXXX.XX.XX.XXXX.XX.XX.XXXX.XX.XX.XX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = ".BB.AAAA.BB.BB.AAAA.BB.BB.AAAA.BB.BB.AAAA.BB.BB.BB";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string region = "....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "....AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB....";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string region = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string region = ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string region = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string region = ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string region = "...XXXXXXXXXXXXXXXXXXXXXX.....XXXXXXXXXXXXXXXXXX..";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "...AAAAAAAAAAAAAAAAAAAABB.....AAAAAAAAAAAAAAAABB..";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string region = "...XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string region = ".........................................XXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = ".........................................AAAA";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string region = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string region = ".XX...XXXX.....XXXXXX.......XXXXXXXX.........";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = ".BB...AAAA.....AAAABB.......AAAAAAAA.........";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string region = "..XXX....XXXXX......XXXXXXX........XXXXXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string region = ".........XXXXXXXX.......XXXXXX.....XXXX...XX.";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = ".........AAAAAAAA.......AAAABB.....AAAA...BB.";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string region = "XXXXXXXXXXXXXXXXXXXXXX......XXXXXXXXXXX..XXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string region = "XXXXXX........XXXX..XXXXXX....XXXXXX..XXXXXXX.";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string region = "........XXXX..XXXXXX....XXXXXX..X....";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string region = "..X..XXXXXX....XXXXXX..XXXXXX....";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string region = "........XXXXXXXX..XXXXXX....X..XXXXXX....";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string region = "XX.XXXXXXXXXX..XXXXXXXX.XX.XXX.XXXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string region = "XXXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string region = "XXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string region = "X.X.";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string region = ".....";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = ".....";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string region = "...";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "...";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string region = "..";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "..";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string region = "XXXX....XX..XXXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAA....BB..AAAA";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string region = "....";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "....";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string region = "........";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "........";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string region = "XX.XXXXXXXXXX..XXXXXXXX...XXX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string region = ".XXX.XXX.XX.XXX.XXX.XX";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string region = "X.X";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string region = "...XX...";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "...BB...";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string region = "..........";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "..........";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string region = "......";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = "......";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string region = ".XXXX.XXXX.XX.XXXX.";
    LinearPolyominoCovering* pObj = new LinearPolyominoCovering();
    clock_t start = clock();
    string result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    string expected = ".AAAA.AAAA.BB.AAAA.";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22646424&rd=13520&pm=10251
********************************************************************************
#include<cstdio> 
#include<iostream> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<map> 
#include<stack> 
#include<queue> 
#include<cmath> 
#include<utility> 
#include<set> 
using namespace std; 
class LinearPolyominoCovering 
{ 
 public: 
 string findCovering(string r) 
 { 
  string t="",x=""; 
  for(int i=0;i<r.size();) 
  { 
   if(i<=r.size()-4 && r.substr(i,4)=="XXXX") 
   { 
    t+="AAAA"; 
    i+=4; 
    } 
   else 
   { 
    t+=r[i]; 
    i++; 
    } 
   } 
  for(int i=0;i<t.size();) 
  { 
    
   if(i<=t.size()-2 && t.substr(i,2)=="XX") 
   { 
    x+="BB"; 
    i+=2; 
    } 
   else 
   { 
    x+=t[i]; 
    i++; 
    } 
   } 
  bool found=false; 
  for(int i=0;i<x.size();i++) 
  { 
   if(x[i]=='X') 
   found=true; 
   } 
   if(found) 
   return "impossible"; 
   return x; 
  } 
};

********************************************************************************
*******************************************************************************/