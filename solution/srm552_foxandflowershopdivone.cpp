/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11387
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

class FoxAndFlowerShopDivOne {
public:
    int theMaxFlowers(vector<string> flowers, int maxDiff);
};

int FoxAndFlowerShopDivOne::theMaxFlowers(vector<string> flowers, int maxDiff) {
    int ret;
    return ret;
}


int test0() {
    vector<string> flowers = {"LLL", "PPP", "LLL"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> flowers = {"LLL", "PPP", "LLL"};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> flowers = {"...", "...", "..."};
    int maxDiff = 3;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
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
    vector<string> flowers = {"LLPL.LPP", "PLPPPPLL", "L.P.PLLL", "LPL.PP.L", ".LLL.P.L", "PPLP..PL"};
    int maxDiff = 2;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> flowers = {"LLLLLLLLLL", "LLLLLLLLLL", "LLLLLLLLLL", "LLLLLLLLLL", "LLLLLLLLLL"};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
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
    vector<string> flowers = {"LLLP..LLP.PLL.LL..LP", "L.PL.L.LLLL.LPLLPLP.", "PLL.LL.LLL..PL...L..", ".LPPP.PPPLLLLPLP..PP", "LP.P.PPL.L...P.L.LLL", "L..LPLPP.PP...PPPL..", "PP.PLLL.LL...LP..LP.", "PL...P.PPPL..PLP.L..", "P.PPPLPLP.LL.L.LLLPL", "PLLPLLP.LLL.P..P.LPL", "..LLLPLPPPLP.P.LP.LL", "..LP..L..LLPPP.LL.LP", "LPLL.PLLPPLP...LL..P", "LL.....PLL.PLL.P....", "LLL...LPPPPL.PL...PP", ".PLPLLLLP.LPP...L...", "LL...L.LL.LLLPLPPPP.", "PLPLLLL..LP.LLPLLLL.", "PP.PLL..L..LLLPPL..P", ".LLPL.P.PP.P.L.PLPLL"};
    int maxDiff = 9;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> flowers = {".L", "L."};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> flowers = {".", "."};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
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
    vector<string> flowers = {".", "."};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> flowers = {".", "L"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> flowers = {"P", "."};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> flowers = {".L", "L."};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> flowers = {"PP", "PP"};
    int maxDiff = 3;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> flowers = {"PP", "PP"};
    int maxDiff = 2;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> flowers = {"LL", "LL"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> flowers = {"LL", "LL"};
    int maxDiff = 4;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> flowers = {"PLP", "LPL", "PLP"};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> flowers = {"P.P", "LPL", "P.P"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> flowers = {"........P..", ".......PP..", "P..P.P.PPPP", "..P..P.P.P."};
    int maxDiff = 11;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> flowers = {"L..LL......L.LL.L.", ".L..L.LL.L....LLLL", "LL...LL.L.......L.", "..L..L...L.LLLLL.L", ".L.L.L.L.L..L....L", ".L.L.L.....LL.LL..", "L..L.LLLLL.L..L..."};
    int maxDiff = 51;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> flowers = {"..L..L.LLL..L.L.L", "....LL..L..LLL..L", "LL..L.L.LL..L...L", ".LLL..L...LLL....", "LL.LLLL.LLL.LL..L", "LLL...LL....LL..L", "..LL..LLLLL...L.L", "LL.LLLL.L.LLLL..L", ".L....LL..L.L.LL.", ".LLL.L....L...LL.", "L.LLL..LL.LLL....", "L.LL..L...L..LL.L", "L.LL.L.LLL.L..LL.", "L....L..L.L..L..L", "...LL...L..LL.L..", "LLLLL.LL.L....LL.", ".L..LLLL....L.LLL", "LL.L..L.LL.LLL...", "LLL.L.LL.LLLLLL.L", ".L.L...L.L.L.L...", "...L.L....LL.LL.L", "....L...L.L..LLLL"};
    int maxDiff = 184;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> flowers = {"PP..P.PPPP...P..P.P.P..PP.", "..P..P.PP...PP...P.P.PP..P", "..P..PP.PPPPPPP..PP.P.PP.P", "P..PPPPP....PP.PPPP.P.PP.P", "P.P.P.P.P.P...PP..P.P.PPPP", "P.P...PPPP..P.P.PP...PPPP.", "...P.P..PP.PP.PP.PPPPPPP..", ".P..P.PPPPP..PP.PPP.P..PP.", "......P.PPPPPP.PP..PPPPP..", "P.P.P.P.PPP.P...PP..PP.P.P", ".PP.P.PP...P.P.P..PP..PP.P", "PPPPPP.PP.....P.PP...PPPPP", "PPPP.PP.P...PPPPPP..PPP...", "PP..PP.P..PPP.PPPP.P.PPPP.", ".PPPP.PP.PPP..PPP.PP.PPP.P", "PP.PP.......PPP.PP..P.P...", "P.P..PP.P.P.PPPP.....P.PP.", "P......PPPP.PPP..PP.PPPP..", "P.P.PP.P.P.P.P..PP..P..P..", "PPP....PP.PPP..P.P.P.P.P.P", "..PP.P..PP.PP.PPPPPP.P....", "..PPPPPPPP.PPP..P..P.P..PP", "P.P.P.P...P.P..P..PP.PP.P.", "PPP..PP..P..PP..PPPPPPP..P", "P.P..P...PPP..PPP..P....PP", "..PP........PPPPPP.P..P.PP", "..P.P.P.P..P.PPPPPP......P", "PPPPPP...P.PPPPP..PPPPPP..", ".PPP..P.P....PPPP.....PP.P", ".PP.PP....P.P.PPP..PPPP..P"};
    int maxDiff = 168;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> flowers = {"P..PPPPPP.P.PPPP..PP.P.PP.", "..PPPPPPPPP.P.PPPPPPP..PPP", ".PPPPPP.P.P.P.PPP.PP.P.P.P"};
    int maxDiff = 20;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> flowers = {".....P...", ".P.......", "..P.PPP.P", "...P.P..P", "..P......", "....PPPPP", ".P.......", "PP.......", "......P..", ".........", "...P...P.", "PP.......", "......P..", "PP..P....", ".........", ".....P.PP", "..P.P....", "..P......", "....PP..P", ".PP....PP"};
    int maxDiff = 11;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> flowers = {"........LLL", "L.LL.L..L..", "....L...LLL", "..LLLL....L", "....L....LL"};
    int maxDiff = 6;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> flowers = {"......L........LL.L", "L.L.....L.LL..L.L..", ".L...L.L...L.L.LL..", "......L...L..LL.LL.", "L.....L.LL..L....L.", "L.LL.LLL...LL....L.", "LL...L.L.L..LL...LL", "L..L..LLL.L..LLLL..", "....LL...LL..L..L..", "L.......LLLL..L.LLL", "L..LLLL.L....L.....", "....L.L.L....LLL.L.", ".......L..L...LL.L.", "..L.L.LLL.L....LL.L", ".L.L.........L..LLL", "..L....L.LL..L.....", "..L.L.LLL...LL..LL.", "L.L.....LL..L.LL..."};
    int maxDiff = 44;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> flowers = {"LL.LLL.L.LL..L...LL.L.", "LLL..L.LLL.LLLL..LLLLL", ".L.L.....L.LL.L..LLL.L", "L....L...L.LLL..LL..LL", "L.L.LLL..LL....L..L.L.", "L.LL..L..L..L.....LL.L", "L.L.LL..LL.L.LL.......", "..L.LLL....L...L....LL", "........L.LLLL..LL.L..", "..LL.....L.LLL..LLL.LL", ".....LL.LL...LLLLL....", "L..L.L.L....L..L....L.", "L.L...L....LLLLL.LLLLL", "L.L..LLLL.L.LL.LLL....", "LL.LL...LL.....L...LLL", "LL....LLLLLLL.L...LLLL", "..L...LLLL..L.L..L..L."};
    int maxDiff = 39;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> flowers = {"P.PP.P...PPPPPP...P....P.", "..P.PP...PP.......PP..PPP", "..PPPPPP...PPPP..PP....P."};
    int maxDiff = 19;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> flowers = {".L....", "..L...", "......", "......", "......", "...L..", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "L.....", "..L...", "......", "......", "...L..", "......", "......"};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> flowers = {"..P...PP.", "PPPPPPPPP", ".P.P.PPPP", "P.PPPP.PP", "P.PPP..PP", "..PPP...P", "PPPPPP.PP", "PPPPPPPPP", "PPPPPPPPP", "PPPPPP.PP", "P.P.P.PPP", "P..PPPPPP", "PPPPPPP.P", ".P.PPPPPP", "PPPP...PP", ".PPP.PPPP", "PPPPPPP.P", "PP.P.P.PP", "PP.PPPPPP", "P.P..PPPP", "..PPPPP.P", "P.PPPPPPP", ".PP.P.PPP", "PPPP.PPPP"};
    int maxDiff = 23;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> flowers = {"......", ".PP..P", "..P.P.", ".P.PP.", "......", "....P.", "..P...", ".....P"};
    int maxDiff = 3;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> flowers = {"...L...........L.L...L.L", "..L...L...........L.....", "..L.....................", "L...............L.......", ".......L...L........L.L.", "..........LL.L...L...L..", "L...L..................L", "............L.......L...", "..LL......L.............", "....L...................", "..............L.........", ".....L...LL......L......", ".L..L.............L.....", "L...LLL.L.L.........L...", ".L...........L.......L..", "......L.....L.L.........", "..LL.......L............", ".L..L..L.........L.L....", ".L.L..L.................", "...L....L....L..L...L...", "....L......L............", "L..L.......LL........L..", ".....L.......L......L...", "....L........L..L.......", "..........LL....L...L..."};
    int maxDiff = 69;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> flowers = {"......P.P..............", "..P..P.PP.P...P.....P..", "P.....P.....P........P.", "........P.....P..P....P", ".P...PP....P...........", ".......P..............."};
    int maxDiff = 7;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> flowers = {"...P.P.PP...PPP.P", "...PP............", "P..P.....PPP.....", "P..........PP.P..", "P.P.PPP..PPP.PP.P", ".P..P...PP...P...", "..........PP...P.", "P............PP..", "PP.P...P.P..PP..P", "..PPP..P.P.P.....", ".PPP......P....P.", "..PPP.....PPPPPP.", ".PP......P.......", "..P.P.....P......", "..P.....PPP..P...", ".P....PPP......PP", "....P.PP...P..PP.", "P...P..PP.......P", "P.P..PPPP.PPP....", "...PP..P....PPPP.", "P..P.P.....PP..P.", "P.P..P.....P.PP..", ".PP..PP.......P.P", "P...P.....PP...P.", "...P.PPP.PPP...PP", "...P......PPP.PPP"};
    int maxDiff = 138;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> flowers = {"LL.LLL.L.L..LLLLLL", "LL.LLLLLLL.LLLLL.L", "LLLLLLLL..LL..LL.L", "..LL.LLLL.L.LLLLLL", "LLLLLLLLLLLLLLLLLL", ".LL.L.LLL.LL.LLL.L", "LLLLLL.L.LLLLLL.L.", "L.L.LLL..LLLLL.L.L", ".L.LLL.LLLLLL.LLLL", "LLLLLLLLLL.LLL.LLL"};
    int maxDiff = 97;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> flowers = {"......PP................P...P.", "..P...PP.....P...P..P.......P.", "..PP...............PPP...P....", "......P.PP...P......P..P..P...", ".P..P...PP..P.P......P.....P..", ".PP..........P...P...PP.......", "..PP......P..........PPP.....P", "P...P..P......PP........P.....", "P....P....PP....P.P........P..", ".P.P.PP..P..P.P.P.......PP....", "....P...P.PP....P...P.......P.", "P...PP....P...........PP.....P", "..P.......P...................", "...P....PP.....P..PP.......P..", ".P..PP..P.P..PPP.P...........P", "P....PP.PP.P.PP....P......P..P", "P.PP.PP.....PP..PPP...P......P", ".PP...P.....PP...P...P.....P..", "....PPPP........P...P....P.PP.", ".P.PP.P...P.P............P....", "P..P..P....P........P.P...P...", ".P..P.P..P........P......PP..P"};
    int maxDiff = 58;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> flowers = {"LLLL.LL.LLLL", "LLLLL.LL.LLL", "LLLLLLLLLLL.", ".LLL.LLLLLL.", "LLLLLLL.LLLL", "LLL.LLLLLLLL", "LL.LLLLLLLLL", "LLL.LLLLLLLL", "LLLLLLLLLLLL", "LLLLL.LLLLLL", "LLL.LL.LLLLL"};
    int maxDiff = 91;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> flowers = {"LL.LLLL...LLLLLLLL.LLLL", "L.LLL..LLL.LLL..L..LLLL", "LLLLLLLLLLLLLLLLLLL.LLL", "L..LLLLLLLLLLLLLLLLLLLL", "LLLLL.LLLLLL.LLLLLLLLL.", "LLLL.LLL.LLLLLLL.L.LLL.", "LLLLLLLLLLLL.LLL.LLLLLL", "LLLL.LLL.L.LLLLLL.LLLLL", "LLLLLL.LLL.LL.LLLLLLLLL", "LLL.LLL.L.LLLLLLLLLLL..", "LLLLLLLLLLLLL.LLLLLLLLL", "LL.LLLLLLLLLLLLL.LLLLLL", "L.LLLLLLLL.LLLLLLLLLL.L", "LLLLLLLLLLLLLLLLLL..LLL", "LL.LLL.LLLL.LL..L..LLLL", "LLLL.LLLLLLLLLLLLLL.LLL", "LLLLL.LLLLL.LLLLLLLLLLL", "L.L.LLLLLLL.LLL..LLLL..", "LLL.LLL.LLLL.L.LL.LLLLL", "L.L.LL.LL.L..LL.LLLLL.L", "L.LLLLLLLLLL...LLLLLLL.", "LL.LLLLLL.LLLLLL.LLLL..", "LLLLLLLLLLLLLL.LLLLLLLL", "..LL..LLLLLL.LLLLLLLLLL", "LLLL.LLL.LL..LLLL..LLLL", "L..L..LLLLLL.LLL.LLLLLL", "LLLLLLL.LLLL.LLLLLLLLLL"};
    int maxDiff = 424;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 424;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> flowers = {"......LL..L", "..........L", ".L........L", "...........", "L..LLLL..L.", "L..........", "L..........", "........L..", "L.........."};
    int maxDiff = 12;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> flowers = {"..........P...........P......", "....PPPP..P..P.........P..P..", "P...P...........P............", "....PP.P....P.....PP....P..P.", "P...P.....P.PPP.P..PP....P...", "....P.....P.........P..P.....", "...P....P.......P....P.....P.", "P.P..........P.P....PP.......", "......P..P..P...P......P.....", ".............P........P......", ".....P.PP.PP..........P.P..PP", ".........P....P.........P..P.", ".....P...P.......PP..........", "P...P...P.............P.P....", "..P..P......PP...P....P...P..", ".....P......P.....P..PP......", "P...............PP..P........", "PP..P.P..........P...P.....P.", "...P.P..............P...P....", "PP........P.P.PP.......PPP..P", "P..P...P..PP...P...P.P....PP.", "..P....P.......P.............", ".....P.....P.....PP.........."};
    int maxDiff = 27;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> flowers = {"..........P..P...P....", ".........PP.P...P..P..", ".P...........P........", "........P......P..P...", "........P....P....P...", "...P.........P.....P..", "........P.........PPP.", "..................P.P.", "..........P.P.........", "..P.....P...P.........", "..................P...", "..........P......P....", "....PP..P..P...PPP....", "P...P........P...P..P.", ".............P.PP....P", "....................P.", "P...............P..PPP", "....P......P..P..P....", "......P...............", ".P.....P.P.......P...."};
    int maxDiff = 18;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> flowers = {"L", ".", ".", "L", "L", ".", ".", "L", ".", "L", ".", ".", ".", "L", "L", "L", "L", "L", "L", "L", "L", "L", "L", ".", "L", "L"};
    int maxDiff = 12;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> flowers = {"P......P.PP..P...P...P..PP..P", "..PPPP......P..P.PP......P..P", "PPP....P.P..P....P..PP...P...", "P...PP.P...PP.P.P......PP.P..", "...P..PP..P...PPP.P....PPPPP.", "..PP....P.........P.P......PP", ".PPPP..P......PP....PP.P...PP", "P.PP..P.....PP.P.PP..PP..P...", ".P.....P..........P....P.P..P"};
    int maxDiff = 38;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> flowers = {"PPP..LLLLPP.LL.LL.PPP", "PLP.PPPPL..LPPPPPLP..", "LLPPPPPLLLPPLPP..PLPP", "LPPPPLPP..LPPPL.PPLPL", ".LLLPLLL..PPP.P.PLPLP", "PLLLPPPLPPPPP.PPLL.PP", "PPP.LLLPPLLPLPLPL.PLP", ".PPPPPLPLPPPPLPLPPLLL", "LPLLLPPL.PPPPLLPPLPPP", "..LLP..LPLPL.LPLLPPLL", "LLPLLPPP.LLPPPLLL.PLP", "LPPLPPPPPLLLPPPPPLLPP", "PPPPLLLPPPLP.PPPPPLPP", "PPPPPPPPP.PPL.LLLPP.P", "PLPPLLPPPPLPPPPPPLPPP", "PLP.LPLL..PPPLPLPLPLP", "LP.PLPL.LPLPPLLLP.LPP", "LL.PPPPP.PPL.LPLPPPP.", "LLP.PLLLLPPP.LP..PL.P", "PPLPPPPPLPLP.PLP.PPPP", "..PPPLPLPPPPPPPPLPP.L", "PLPLP..PLPPL..LPP..PL", ".LLLPPLLP.PL.PPLPLPL.", "PLPPPPLPPPLPPLLLPPLPP", "LLLLLPLLP.LP.L.P.PP.L", "PPPPPPPPLPPPPPPPLPPPP", "LL.PLPPPPPPLPLLLP...L", "P.LPLPPPL.PLL.LPP.PL.", "PL.PPPLP.P.PPPLPPLPLL"};
    int maxDiff = 63;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> flowers = {"PP..LPPPPPP...P..P..PPP.PP", ".P.PPPP...LP...L..PP.L.LPP", ".PP.PL.P.P.L.PPPPPPPPP.P.P", "PP..PPLLP..PP.P...P..PPPPP", "..P.PPL.LPPP.P...P...PP.PP", "...P.PPPPP.P..PPPP.P.PP..P", ".PPP..PLP....PP...PP..P..P", "PPLL.PP..P..PPPPPLPPP.P...", "P.P...P..LP..P.....PPPPP..", "P..P.P..PP.PP...PPPPPP.P.P", ".PPP..P..PPPPP.P...P..PP..", ".P.LPP.PPP.PP...P..LLPP.P.", "..P..P.P.PPPL.P.LP.P.PP...", "P.P..PLPP.P.PPPP.PPP..P..."};
    int maxDiff = 103;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> flowers = {"LL", "LL", "LL", "LL", "LL", "LL", "LL", "LL", "LL", "LL", "LL", "LL", "LL", "PL", "LL", "LL", "LL", "LL"};
    int maxDiff = 19;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> flowers = {"LLLLLLLLLLPLLLLLLLL.", "LLLLLLLL.LLL.LL.LLLL", "LL.LLLPLL.LLLLLLLLLL", "LLLLLLLLLLLLLLLLL.LL", "L...LLLLLLLLLLL.LLLL", "LLLLLLLL.LLLLLLLLLLL", "LLLL.LLLLP.LLLLLLLL.", "LLLLL.LLLLLLLLLLL.LP", "..LLLLLLLLLLLLLLLLLL", "LLLLLLLLLPLLL.LLLLLL", "LLLLLLLL.LLLLLLLLLLL", "LLLLLLL.LLLLLLLLLLLL", "PLLLLLLLLLPLLLL.LLLL", "LLLLLLLLLLLLLLLLLLLL", "LLLLLL.PLLPLLLLLLLLL", "LLLLLLLLLLLLLLLLL..L", "LL.LLLLLLLL..LLLLLLL", "LLLL.L.LLLLL.LLLLLLL", "LLLLLLLLLLLLLLLLLL.L", "LLLLLL.LLLL.L.LLLLLL", "L.LLL.LLLLLLLLLLLLLL", "LLLLLLLLLLLLLLLLLLLL"};
    int maxDiff = 384;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 402;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> flowers = {"LPLLLLLLL", "LLPLL.LL.", "L...LL.LL", "PLLLPLPLP", ".LLLLLL.L", "..PLL.LLL", ".LLLLPLPL", "LPL.LLLPL", "LL.LLLP.L", "LLP.LLL..", "P...LLLLP"};
    int maxDiff = 27;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> flowers = {"PPPPPLPLPPLPPPPPLPPPPPPPPPPLP", "PPPP.PPPPPPPPPPPPPPPPPPLPPPPP", "PPPPLPPPPPPPPPP..PPLPPPLPP..L", ".PPP..PP.PPPPPPPP.PPPP..PPPPP", "P.PLPP.PPPP.PPPPLPPPPP..PPPPP", ".PPPPPPPPPPPPPPPP.PPL.PPPPPPP", ".PP.PPPP.PLPPPPPPPPPPPPPPPPPP", "PP.LPPPPPPPPPPLPPPPPPPPPPPP.P", "PLPL.PPPPP.PPPPPPPPLL.PPPPPPP", "PPLPPPPPPPLPPPPPPPPPPPPPLPPPP", "PP..PPPPPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPLPPPPPPPPPPPP.LPPPLP", "PPPPPPP.PP.PPLPPPPPPPPLPP.PPP", "PPPPPPPLPPPP.PPPPPPPPPLPPP.PP", "PPLLPLPPPPPPPP.PPPPPPPPPPPPPP", "P.PPPP.PPLPPPPPPPPPPPPPLP.PP.", "PP.PPPP.PPPPP.PP.P.PPPPPPPPPP", "PPPPPPPPPP.PPPP.PP.PPPPPPPPPP", "PPPPP.PPPLPP..PPPPPPPPPPPPPPL", "L..PP..PPPPPPLPPP.LPPPPPPPPPL"};
    int maxDiff = 219;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> flowers = {"LLLLLLPLLLLL.LLLLL.LLLLLLLLL", "LLLLL.LPLLLLL.LLLLPLLLLLLLLL", "LLLLLPLLLLLLLLPLLP.LLLLPLLPL", ".LLLPPPLLLLLLLLLLPLPLLLLLPLL", "LL.LLLLPLLPLLLLLLPLLLLPLLLPL", "LL.PLLLLLLLLLLL.LPPLLLLLPLLL", "LLLLLPL.PLLLLLLL.LLLLLLLLLLP"};
    int maxDiff = 29;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> flowers = {"PL.LL.LLPL.", ".PLL.P.L.L.", "L.LP.LL.LLL", "PL.LLLLPLLP", ".LL.LLLLLLP", "LLLPLLL.L..", ".LPL...LPPL", "LLPLLLLLLPP", "..LL..LLLL.", ".LLLL.P.L.L", "LLLP.P.LL.P", ".P.L.L.LPLL", "LPPP.P..L.P", "..LPL.L..LL"};
    int maxDiff = 75;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> flowers = {"P.P..", "LLLL.", "PL..L", "P.LPL", "P..PL", "LP.L.", "L.PP.", "LLPPP", "..P..", "PPPPL", ".PP.L", "....P", "LLL.P", ".P.LP", "PL.PP", "..P.L", "PLP.L", "....P", ".LP.P", "PLL..", "PLPP.", "..LPP", "P..P.", ".L.PP", "LP..."};
    int maxDiff = 12;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> flowers = {"PPLPPL.LP..LL.", "L.PLLP.LL..PLP", "PLLLPLLL.L.LP.", "LLPPPPLPP.LPLP", ".LPPLPPLLLLLLP", "L.PLLLLLPLLL.P", "PP.PLLLPLLPPLP", "PLLLP..PPLL.PP", "LPLLPPPLLLP.LP", "LPLLL.LPPLPLPL", "PLLPLLPP.LLLLP", "PLLPLLLLLLPPPP", "P.L.PLPPLPP.LP", "LPPPPPPPLPLLLL", "PLLLPPLPLLLPLP", "LPLLPPP.LLLPLP", "LLPPPLPPPPLLLL"};
    int maxDiff = 104;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> flowers = {"P.PPP", "PPPPP", "P.PPP", "PP...", "P.PPP", "PPPPP", "P.PPP", "PPP.P", "PPP..", "P.PP.", "P..PP", ".PP.P"};
    int maxDiff = 21;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> flowers = {"...", "...", "...", "..P", "...", ".P.", "...", "LL.", ".L.", "...", "P..", "LL.", "...", "PP.", ".L.", "L.P", "P..", "P.P", "...", "L..", "L.P", ".P.", "...", "...", "P..", "LP."};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> flowers = {"P..LPP..LLLP.LL..LLLP..LP.PP", "LPLL.LP.PP.LPLPP.....P.LPLLP", "LPLLPPLP.PPLPL.LLLP..P.PPP..", "P..PLP.PPPPPPLLL.P..LPPPL.L."};
    int maxDiff = 35;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> flowers = {"P..PP....PP", "..PP...PP..", ".PPP.P.PP..", "....PP.....", "P..PP..P...", "......P..P.", "P...PP.....", ".PP..PPPP..", "P....PP.PP.", ".PP.PP.P...", "..PP....LPP", ".P.PPP.P..P", "PPP.P....PP", "PP.........", "PP..PPP.P.P", "..PP.PP..P.", "P..P....P.P", "P.PP.......", ".P.P...P...", "P.P........", "PP.P..PL..."};
    int maxDiff = 12;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> flowers = {".P...", "PLPL.", "PPP..", ".LL.L", "L..L.", ".P...", "..P.L"};
    int maxDiff = 4;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> flowers = {".P.P.....PPPPP.LP....PPPP..LL", "P..P.PPPLPPPPPPLP..PLPL..PLP.", "PPPLLL.PL.PLP....L.P.....P..P", "....P..PP...LPP...L..PLPPL..P", "P.P...L.P.PP..PL.L...PLLP..PL", ".P.PPPL.....P..PP....P...P.P.", "..PPLPPPP.....PP.P..P..PP..PP", "P...P.PP.PPPPP..P.L.PLL..L..L", ".PLPP.PPPLLPPP.L.P..PPPP.P.P.", ".PPPL.P.P..P..LP..PL.PPLPP..P", "PPL.....LP.P.PPPLPPPP.P....PL", ".PP..LPP..PPL.PLL...PP..P..PP", "LLP....PP..PP.PPP.P.PPLP.P...", "PP..P.P.PPPP..PLPPL.P..P.LLPL", "LPLPP...PPP.LPPPL.L.L.....P..", "PP.P.L.L.P.P.PP.PP.LP.P.....P", "P.LPPPP..LP...PLPP.LPPL...LP.", "....L..LL.P..PPPLPL..LPP.P.LP", "..P..PPPP.PP..PP........L...P", "L.P..P.PPLPPPP.PPPPLPPPPLP..."};
    int maxDiff = 11;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> flowers = {".PPP.PP..PP.P", "..PPP...P.PP.", "..P.PPPPPPP.L", ".LPPP.P.LL.P.", "PL.PPLP.PPPP.", "LPPPPPP..PP.."};
    int maxDiff = 43;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> flowers = {"............L......", "....L.P..P........L"};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> flowers = {"LLL.LL..", "LLPLPPPP", "LLLLLLPL", "PLP.PLPL", "LPLLPPLP", "LLLLPPLP"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> flowers = {"..PLPP.PLPPPLPPPPPPPPPPPPPP.P", ".PPP.P.PP.LPPP.PPPPLP.P.PPPPP", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPP", "PPPPPPPPPPPPPLPPPPPPPPPPP.P.P", "PPPPPPPPPPPPPPPPPPPPPPPPPPPPP", "LPPLPPPPPPPPPPPPPPPPPPPPPPPPP", "PPPPP.PP.PPPPPPPPPPPP.P.P.PPP", "PPPPPPPLP.PPPPP.PPPPPPPPPPPPP", "PPPP..PPPPPPPP.PPPPPPPPPPPPP.", "PPPP..PPPPPPPPPPPPP.PP.PLPPPP", "PPPP.LPPPP.PP.PLPPLPPPPPPPPPP", "PPPPPP.PPPPPPLPPPPPP.PPPPLPPP", "PP.PPP.PPPPPPPPLPPPPPPPPPPPPP", "PPPPPPPPPPPP.PP.PP.P.PPPPP.PP", "PP..P.P.PPPPPP.PPPP.PPPPPPPPP", "PPPPPPPPPPPPP..PPPP.P.PPPPPPP", "P.PPPPLPLPPPPPP.PPPPPPP.PPPPP", "PPP.P.PPP.P.PPLP.PPPPPPPPPPPL", "PPPLPPPP.PP.PPPPPPPPPPPPPPPPP", "P..PPPPPPPPPP.PPPPPPPPPPPPPPP", "PL.PPPPP.PP.PP.PPPPPPPPPPPP.P", "..PPP.PPPP.PPPPPPPPP.PPPPPPP."};
    int maxDiff = 496;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 540;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> flowers = {"LL.", "..L", "L..", "...", "...", "L..", "LL.", "...", "LLL", "..L", ".L.", "...", "...", "...", "...", "...", "LL.", "..L", "..L", ".L.", "..."};
    int maxDiff = 13;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> flowers = {"L.L.P..P...P..LL..LLLPPL", ".LLL.LL....LPLLLPL..L..P", ".LLP.LLLP.L.L..L..LPPLPL", "....L.LP.P.P.P..L...PL.P", ".L.L.L.P.LP.L.P.LL...LLL", "..P....L.LL....PL.LL.L.P", ".PLL.L.L..L.LPLL.LL.PLPL", "PL...LLP.LLL...LLP.LP.L.", ".LLL.LL.LLL.L.L.LP...P..", "...LLPL.LL.L.LL.....PLL.", "LL...L...LP.L.LLLLLLLLL.", "L.L.L.LL.LL.L....L....LP", "L.P..PLL.LLL..L.P.L.LL.L", "L.P.L.P...LL..LL.P.L.PL.", "LLL.LL.L..P..PLL..P.LLL.", "LP.LL..P.PP.LLLP.P.L.LP.", ".L.L..LL..LL.P.L..LL.LPL", ".L...LP.PL.L.L.P.LL..L.."};
    int maxDiff = 122;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 236;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> flowers = {"L.LLLPLL", "PLLLLLLL", "LLLLLLLL", "LLLLLLLL", "LLPLL.LL", "LLPLLLLL", ".LLLLPLL", "L..L.LLL", "LLLLLL.L", "LLLLLLPL", "LLLL.LLL", "LLL..L.L", "LL.LL.P.", "LLL.LLLL", "LPLLLPLL", "LLLLLLLL", "LLLLPLLL", "LLLLLPLL", "L.LLLL.L", "PLLLLLLL", "LLLLLLLL", "LLLLLLL."};
    int maxDiff = 138;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> flowers = {"PPP....PPL....", "P...LLPP..P.PP", "P.LPL.PP.PP..P", "PP.P.PPPLP.PPP", "LLLLLPPLLPPPPP", "L..L...PPPPPPP", "P..LP.P.PLPLLP", "..P.PLP.P.LPPP", "PPPLP..L.LPL..", "PPP.L..P.PP.PL", ".PLPP.P.PPPLPP", "..PPPP.PLPPPP.", "PP.P.PPLP.PPPP", "...PPLPLPPLPLP", "PPP.LPPPPPLPP.", "P.PLP.PLP..PPL", ".PPP..PPL....P", "PPLPPPLPPL.PPP", "L.PPPPPP.P.PL.", "PPPLPP.P..L.PP", "PLPL.PPPP.P..P", "PPPPP.PLP.P..P", ".PPPPL.L.P.LPP", "P...PPPL..L.PP", "PP.PP.LP.LPLP."};
    int maxDiff = 19;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> flowers = {".P.LLLLLLLPLLLLL", "L.LLL.LLLLLLLPPP", ".LLLLL.PLLLLPP.L", "PLLLL.LLLPLL.L.P", ".L.LLLPLLPLLLLPP", "L.LP.PLLLPLP.LL.", "LL.L.PPLLLLPLPLL", "L.LPPLPPL.LPPLLP", ".PLLLPLLLLLLLP.L", ".LP.LP.LLPLPL..L", "LLLLPLLPL..LPPLL", "P.LPLLL.LLLLLLLL", "LLLPLLLLPPPPLPLL", "P..L.LPPLLLL.P.L", "LL.L.LLPP.LLL..P", "LLLLLLL.PL.LLLLL", "LLLLLL.PLLPL.LPP", ".PPLLLLL.LLLL.LL", "LLP.LLLLLLL.LLLL", "LLPLLLLLPPLLLLPL", "LLLPLLLLLLLLLLLL", "LLLLPLLLPLLPP.LL", "LLLPPLLL.PPL.PPL", "...LLP.LLLL.LLLL", "LLLPLLLLLLLL.LLP", "LLLLLLL.LLLLLLLL"};
    int maxDiff = 224;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 356;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> flowers = {"PPPLL..L", "PLPPPLLL", "PPPL.PPP", "LLPLPPPP", "LPPPLPPL", "LLPLL.LL", "LPPLPLLP", "LPLPLLPP", "PPPLPLPP", "PPLPPLLL", "PPLPLPPP", ".P.PPLPL", "LPPLLPLP", "L.LPLLP.", "LLPPL.LL", "LPPPLPPP", "PLPLPLPP", "LPLLPPLL", ".LPP.PLL", "LLPLPP.P"};
    int maxDiff = 41;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> flowers = {"PPLPLPPPPPP.LPLPLPP", "PPPLPLL.P.PPPLLLPP.", "PPPP.L.PLLLLLPPPPPL", "PPPPPLPLLLPPPPPLL.L", "PPPPLPL.L.PPPLPPLPL", "PPLPPLPLPPPPLPPLPL.", "PPLPLLPPPPPPPPLLLPP", "PPLPPPPPPPPLPLLLPLP", "LPLPPLLLLLP.PPLPPPP", "P.PPPLLL.P.P.LPLPLP"};
    int maxDiff = 65;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> flowers = {"...LL.P.......L..L", "...........L..P...", "P........L.P..L...", "....LL.....L..L.L.", "....L....L........", ".LPL.LL..........L", "....L.L.....L.L.L.", ".............P.PL."};
    int maxDiff = 14;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> flowers = {"LL", "PL", "LL", "LL", "LL", "LL", ".P", "L."};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> flowers = {"P.L...LLL.LL.L..", "PLLP..LL.....LL.", ".L.L.LPL.L..L..L", "LL..P..L.L..LL..", "..LLL...L.L.LLL.", "..L.......L..L.P", ".L.L..P...L.L..L", "L.LP.LLPL.......", ".PLLL.P...L..LL."};
    int maxDiff = 3;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> flowers = {"L", "L", "L", ".", "L", "L", "P", "L", "P", ".", "P", "P", "L", "L", ".", ".", "P", ".", "P", ".", ".", "P", "L", "P", "P", "L", "P", ".", "."};
    int maxDiff = 5;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
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
    vector<string> flowers = {".L.LLL..P..L", ".L....LL..P.", "LLL.LLLLL.LL", "..L.LL...LL.", ".LLL.....L.P", "......L.LL.L", "L...LLLL...."};
    int maxDiff = 9;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> flowers = {"LP.LPPP.PLLLPPLPPLLPPPPPPPL", "LLLLPLLLLPLPLPPLL.PP.PPPPPL", ".LPLLPLPPLLLLLPP.PPLPLPLLPP", "LLPLPP.PPLLLPPLLLLLLLLLPLPL", "PLPLPPLP.PLPLPLLLP.LLLLPPPL", "LLPPLL.L.PL..P.LP.PPLLL.PLP", "PPL.LLPLLPLPLLPLP..LLLLLLLP", "PPL.PLLLLLPLLLP.LPP..PLLLPL", "LLLLPLPP.PLLLLPLLL.LLPPLLLP"};
    int maxDiff = 9;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 179;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> flowers = {".P.PPLPP.PPP.", "L.P...LPP.LLL", "PLPPP.P.LPPL.", ".LP.PP.PP..PL", "LP..PPP..PPL.", ".LP..P.P.PPPP", "PPLLPP...PP.L", "P..PL.PPPPPPP", "PP.PL.P.P.P..", "P.PPP.PLP..LL", "..LPP.PLLPP.L", "PPPPPLPPL.LPP", ".PPPLL..PPPP.", "PPPLLPP....PP", "PPP...PPPPP.L", ".P...L..P..LL", "PL.PPLP.PPPLP", "LP..PP.PLPP.L", "P.P..LLL...LL", "P.P..PPP.PPPP", "P.P.PP.L.P...", "PPPPPPPPPPLLP", "L.LP.....P.L.", "PPPP....P.P.P"};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> flowers = {"..L.LL.....", ".L...P.L...", "..L..LL..LL", "LLL.L.L...L", ".LL.L..L.L.", ".L.L.LL...L", ".LL..LLL.L.", "LL.LL......", "LLLL.....L.", "LLL.LL.L...", "P....L..LLL", "......L...L", "....LL..L.L", "L.L...L.L.L", "L..LL.L..LP", "L.LLL.L...L", "..L....L...", "L.L.L.LP..L", "........LL.", "L.LL.LL....", ".LLLL.L....", "...L.LLL.LL", "..L.LL.LL..", "L..L....L.."};
    int maxDiff = 6;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> flowers = {"PLPPP.PLP", ".PP..PLPP", "P...LPP.P", "P.P.PLP..", "...PP..PP", "..PP.PPPP", "PLPPPPP.P", "L.PLP.PPL", "P.LPPPPPL", "L.LP.LPPP", "P.PPPL..P", "..P.P..PP", ".PPL...PP", "PL...P.PP", ".P..LPP.P", ".PPP.PPPL", ".PP.....P", "PP.P.PPPP", "L...PPPLP", "...LPPLPP", "P..L.P.P.", "LP.PP..PL", "PPLP..PPP", "PP...LP.P", "..PPPPP..", "L.PP.PP.L", "P.P.PPP.P", "PP...PPPP", "..P.P.PP."};
    int maxDiff = 5;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> flowers = {"PPPPPPPPPPPPPPPPLP.PP.P", "PPPPPPPPPPPLPP.P.PPP.LP", "LPLPLLP.PPPPPPPP.P.PP.P", "PPPLPPPPLPPP.PPPPPPPPPP", "PPLLPPPPPPP.PPPP.LP.PPL", "LPPPLPPPPPLLPPP.PPPPLPP", ".LP.PLP.PLPPPPP.PP.PPPP", "PPPPPLLPPPPPPPLPPPPPLPP", "PPLP.PPPPPP.PPPP.L...PP", "PPPPLPPPP.PPLPPPLPPPPPP", "LLPPPLPLPPLPPL.PPPLPPPP", "PLPPP.PPPPPLPP.LPPPPPPP", "PPPPLP.PPLPLLLP.PPLPPP.", "PLPPPPPLPPPLPPPPPPPPLPP", "PPPPP.PPPPPPLPP.PP..PP.", "LP.PPPPPPPPPPPLP..P.PPP", "PL.P.P.PPPPPPPPPPPPPPPL", "PLP.PPLPP.LPPPPLLPPPPP."};
    int maxDiff = 2;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> flowers = {"PLPLPP.LP.PLLL.PPPP.LPPLPL.LP", "PPLPLPPP..L.L.PP..PLLL.LP.P..", "PPLPLLPLLPPPPPP.PPPPPLPL.LPPL", "LPPL.LLLPPPPPLPPPLLLPPP.L.PPL", ".PPLPLPLLL..LLLL..LPPPLL..PP.", "PL.PPPPPPPPPPPPLLPPPPPL.LLPLL", "LPPL.PLPLLPPPLPPLP.PPPPLLPLL.", "LPLLPPL.PPPPLPPPPPLL.LPPPLPPP", "L.PPPP.L.PPPPPLL.L.LLPP..PPPP", "LLLPL.PPP.LPPPPPLPPPPPPLPLP.L", "LPLPPLPP.PLLPLLL.LLPPPL.PLP.L", "PLLPLLPPLLPPP.PLPLL.PLPPLLPPL", ".P.LPLPP.PPP.L.PP.PLP..PLLPPL", "PPLLPPPP.LLLPPPPLPPP..PLPLLPP", ".P.P..PL..P.L.PPPLPPLPLPLPPL.", "PPP.LL.PPP.LLPPPPLLPPLPP.PPPL", "PLP.PPPPPPPLP.L..L..LPPPP.PL.", "PPPPPLPLPLP.LLLL.LPL.PL.PLPLP", "PLLLPLLPP.PLPPPPPPPPPPPPPPLLL"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> flowers = {"..P.L..", ".L.....", "......L", "....P..", "..L....", "..P..LL", "......L", ".......", "..PP...", "....L..", ".......", ".L.L...", ".......", "..L....", "......L", ".L.....", ".......", "...P.P.", ".......", ".......", "......L", ".L.P.L.", "L...L..", ".......", ".......", "...L..P", "L......"};
    int maxDiff = 6;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> flowers = {".L.L..LL.", "LLLL..LLL", "LLLLLLP.L", "LL.L.LLLL", "LL.L.LLL.", "LLL..LLPL", "LLPLPL.L.", ".LLL..LLL", ".L.L.LL..", "LL..L.LLP", "..LLLLLLL", "L.LLL.L.L", "LLLLL..LL", "LLL.L.L..", "L.L.LLLLL", ".L.L..L.L", "LLL..L.LL", "LLLL..L.L", "L.LLLL.L.", ".LPL.LL.L", ".LLL..LLL", ".LLL.P..L", "LLL...L.."};
    int maxDiff = 7;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> flowers = {".PPPPP.P.P...", "PPP.PPP..PLPP", ".P..PLL..PLP.", "PP.PPP.P.PPLP", "PP.PP....PPPL", ".PLP.L.PLPP.P", "....PPLLPL.P.", "L.PPP..LPPLP.", "PPPPP.PP.PPPP", "P..PPP.LP.P..", ".PLPPL...PP..", ".P..PLPP.PLPL", "LPPP.PP.P..PP", ".P.L..PPPPPPP", "PL...PLLPPP.P", "LPPP.LL.PPLP.", "PP.P...P.P..P"};
    int maxDiff = 9;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> flowers = {"LLLLL.LL.", "LLLL.LP.L", "LLPLLLL.L", ".LLLL.LLL", ".LLLLL.L.", "LL...LLLL", "LLLLLLLPL", "LLLLLLPLL", ".LLLLLL..", ".LLLLL.L.", ".LL.LL.LL", "LLLLL.LLL", "PL.L..LLL", "L.LLLLLLL", "LL.LLL.LL", "LLLLL.L.L", "LL..LLLLL", "LLLLLLLLL", "LLLLLLL..", "LLLLPLLL.", "L.LL..LLL", "..LLLLL.L", ".LLLL..LP", "LLLLLLLPL", "LLLL.LLLL", "LLLL.LLLL", "LLL...LLL", "L.LLLL.PL", "..LL.LLLL", "LLL.LLLLL"};
    int maxDiff = 4;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> flowers = {"LLPPPP.LLPPLPLPLPPPPP.LLPPLPP", "LPLLLP.PPPLPLPLLPPPLPP..PPPPL", "PPLPLPLPPPLLPLPLPL.LPLLPLPL.L", "PLLLLLPLPLLLPLPPPLPLL.PP.PPLL", "LPPPLPPPLPLPLLLPLPPP.LPPPPPPL", "PPPLLPP.PPLLLPLPLPLPLLLPLPLPL", "LLPPLL.PP..LPPLP.PPPPPPPPPLPL", "LP.LPLLPLP.PPLPPLPLP.LPPLPPPL", "LPPLLLPPPPPPLPPPLPPPPL.PPLLPL"};
    int maxDiff = 2;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> flowers = {"LPPP.LP", "LP..PLL", "PLL.LLL", "L.LPLLL", "P.PPPPL", "PPPPLPP", "L....PL", "LP.LL.L", "P..PLPP", "..PLPPP", "P.LLPPP", "LPLLP.L", "PL.LPPL", "LLPPP.P", "PL.L.L.", ".LPPPL.", "L.P.L.L", "PP.PLPP", "LPLPL..", "LLLLLP.", "L..P...", "LPLPPPP", "P.PP..L", ".L.PPPL", "PLLPLL.", "LP.PL.P"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> flowers = {"LPL.PLPPPL..LL.....L", "L.P.LP...P..L..PL...", ".L.LL.......LP..L..P", "P.PP.P..PPLL...P.L..", ".PL....L...L..LPL..."};
    int maxDiff = 3;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> flowers = {"L.", "L.", "LL", "LP", "L.", "L.", "PP", "LP"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> flowers = {"..LP", "..PP", ".PLP"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> flowers = {"PP.LPP..LPPP.PPPLP.P", "LPLPPPP.LLLP..L.PP..", "PLPPLLL.P.PPPPLPPPPP", "PPPPPPLLPPP.P.PL.P.P", "PPPL.PLPPPPPPPPPPPLP", "PPPPPPPP.LP.PLPPPPPP", "PPP.PLPPPPPP.PPPPP.P", "PPPLLPPPP.PP.LPPPLPL", ".LP.PLP.LLP.PPPPPPLP", "P.PPPLP.PPPPPPPPPLP.", "..P.PP.PPPPLLPP.PP.P", "P.PP.LPP.LPPLPPLPP.P", "PPPPPPP.P..PP.PP.PLP", "P.PPPPPPLPPPPPLPP..P", "LPPPPPPPPLPPPPP.PPLP", "L..PPLP.PPL.PP.PPLPP", ".PLPLLPLPPP.LPPPPL.P", "PLP..PP.PLPPP..L.P.P", ".P.PPP..PP.LLPPPPPPP", "PPPPPPP..PPLLLPLP..L", "L.PPPP.P.PPPPP.PP.PP", "LLLPPPPPPP.LLLPPL...", "PPP.PPPPPPP.PPPPPPPP", "PPPLL.LPP.PLPPLPPPLP", "..PP.PLPPPPPLPP.PPPP", "PPPLPPL.PP.LPPL.PPPL", "PPPPPPPP..PP.PPPPPP.", "PL.PPPPPPLPLPPLPPPLP", "PP.PLLLP.PP.PPPPPP.P"};
    int maxDiff = 7;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> flowers = {"LLLLPLLL..PPLPLL", "LLLL.LLLPPLLL.LP", "LL.LLLLLLLPLLLPL", "PP..LLLL..PL.LLP", "LLPLPLPL.PPLLPLL", "PLP.LPLPLLLLPPPL", "LLLLLLLLL.LLLPLP", "LLLLLPLLLLLL.LL.", "L.L.L.LLL.L..PLL", ".LLP.L.LLPPLLPPL", "PLLP.LLLPLL.LL..", "PPLPL.LL.L.PLPLL", "LL.LLLLLLPLLLPLL", "PLLLLLLPLPL.PLLL", "LLLL.LLLLLL.LLPL", "LPLLLLPP.LLLLP.L", "LLLLPLLPLL...PLP", "LLLLLLL.LLLLLLLP", "LLLLLL.L.PPPLLLP", "LPL.LLLLLLPL..LL", "PLPPPLLPLLL.LLL.", "PLLPP.PPP.PLLP.L", "PLLLL..PLLLPLLPL", ".LPLLPLPLLL.PPLL", "LPLLLL..LPPLLLP.", "LPLPPLP.L.LPLLLP"};
    int maxDiff = 3;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> flowers = {"P.L.........L....LL...L.....L", "........LLPP.L..P.LLLPPP.....", "...L..P....L...P.L.......L...", ".L.L.L..L....PLP..LP..P.LP.L.", "PLLP..P.L.LL..LL.LL..LPP.P...", "..L...P.P..PP.PP.LP.......L..", "P.......P...L........P....L.L", "..LL.P..LL...L...P....L...L.L", "......L....P...........P.P.PL", "......LPP....LL...LL..PP.....", "...LP..P.P....P........P...P.", "......P.......LP...L.L..L.P.L", "...L.L..P....L..L..LLP...P...", "..P......P.P..P.L..LP.P......", "..PPLL.P.P.PL..L.....LL.P...P", "..L....PL..P...L..LL.LP.PP...", "L....P.PLP..L..PP..P.........", "P..P.....LL.P.P......P.L..L..", "..LP...L........P..P.L.P.L...", "...P...P.....L...L..P........"};
    int maxDiff = 10;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> flowers = {"PLPLPPPLPPPPPLPP", ".LPLPLLLPLPLLPPP", "LLPPPPLPLPPPPLPL", "LPPPPPPPPPPPPLPP", "PPPLLPPPLPPPPLLL", "LLPPPLPPLLPLPPLL", "PP.PPPPPPPPPLLPP", "LPPPLPPPPPPPPPLP", "LPPPPPLPLLPPPPPP", "LPPLPPPPPPPLPPPP"};
    int maxDiff = 4;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> flowers = {"P.LL...", "...P..P", "PL.PLLP", "P...P.P", "PPPPPL.", "PLP.PPP", "LPPP.L.", "P...PP.", "PL....P", "..PPLPP", "..LL.LL", "PPLP..P", "PP..P.P", ".P.LPPP", "..PLPP.", ".P.P...", ".PL..L.", ".PPP.PP", "L....L.", "...P..P", "L.P..P.", "P.LPP.L", "P..L.P.", "P...PP.", ".L..PP.", "..L.PPL", "LP.PP.P", "L.LPPP."};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> flowers = {"PP.P.PPP..PP.....P.", ".PPPP...P.PPPP..P..", ".......PP...L.P..PP", "PP...PP...P...P...P", ".PP.PP..PPPPPPPPLP.", ".PLPPP...P.P.L.P...", ".PP..PP.PPPP.PP...P", "PP.P..P.P.P.P.P....", "P..P.P...PP....P...", ".PP.P.PPPPPPPP.....", "..P.PP.P.PPPP.PP...", ".PP.P...PP..PPPP.PP", ".P....PP.P.PP....P.", "P.PP.PP.PP..PPPP...", "P.P..PPL..PPP.PP.PP", "PP..PPP..PP...P..PP", ".PPPPP..PL....PP...", "PPPPP.......PPP.P..", "PPPPPPP.P...P.P...P", "PP.P...P.PPP...PP..", ".P.P.PP.P.PP.PP..P.", "P..P.PP....P..PP..P", "P.P.PPP.P...P....PP", "P...PP.PP.PPP.P.PPP", "....P.PLP..P..P..PP", "....P.P.PP.PP..P...", ".PP....PP.P.....PP.", "..PPP...PP..P.PPP.P", ".PP....PPP......PP."};
    int maxDiff = 10;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> flowers = {"L.LLL.LLLLLLLL", "LLLLLLLPPLLLLL", "LLLLLLLLLLLPLL", "LLLLLLLLLLLLLP", "LLLLLLPLLLLLPP", "P.PLLLLLLLLL.L", "LLLLPLLLLLLLLL", "LPPLLLLLLLLLLL", "LLLLLLLLLLLLLL", ".LLLLLPLPLLLPL", "PLLLLLLLLPLLPL", "LLLLLLLLLPLLLL", "PPLLPLLLPLLLLL"};
    int maxDiff = 5;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> flowers = {"PLPLL.PL.LL.LPLL", "LLL...LLLPLLLPLL", "LPLLLLLLPL.LLLLL", "LLL.PLLLLLLLPLLL", "L.L.LPLLLLLPPLLP", "L.LPLPPLLLLLLLLL", "LPLLLLLPLPLL.PLL", "LLLLLPLL.LLLPLLP"};
    int maxDiff = 2;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> flowers = {"PPP.PP..P...P...P.PP.P", ".PP.P.PPL.P.PPL.PPPPP.", "..PPPP..PPPPPPLPLLLP.P", "PPP.P..PPPPP..LPPP.PPL", "PP...PP.PPPPP.PLLPLPPP", "PLPP....PPPPPPPP..PPP.", "PPPPPP.PPLPPPPLPP.P.P."};
    int maxDiff = 3;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> flowers = {"LLPLPPPPPLLLLPPPP", "LLPLLPLLPLLLLLPLP", "PLLLLLLPLPPPLPLPL", "PLLLLPPPLLPPLPPLP", "PLPLLLP.PLLLLLPLP", "LL.PPPPLLPLLLPLLL", "PLLP.PLPLPLLPLLLL", "PLPP.L.LLPPPLLLLP", "PPPLLLLLLLLLLLLPL", "PLLPLLLPLPPLLLLLL", "LPPLPPLLPPLP...LL", "LPP.PPPL..LPLLLLP", "PLL.LPLPLLLLLLPLL", "PPPPLP.LLLPPLPPLP", "LLPPPLPLPPLPLLPPL", "LPPLLPPLLPPLPPLPL"};
    int maxDiff = 0;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> flowers = {"LPLPPPPLPL..LPLLPLLPPL.LPL", "PLPLPP.LPL.LP.PLPL..PPPLPL", "PPL.LP.L..PPLL.LLPPL.LPLLP", ".LP.PPP.LPLL.LLPPP.PLLP..L"};
    int maxDiff = 8;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> flowers = {".LPLPLLP", "PPLLLPLL", "LPPLLLLL", "PPLL.PPL", "PLLPLPLP", "L.LPPPLP", "P...L.PP", "LPLL.LPL", ".LPPPLPP", "PP..P.LL", "PLP.L.PP", ".PPLPLLL", ".LP.PP..", "PPPLLLLL", "LPLLLPLL", "LPPPLPLP", "LPPLLPLL", "LPP.LLPL", "LPLPLLLP", "PLLP.LLP", "LL.L.LP.", "LLL.PLL.", "LLPPPLLP", "P.PPL.LL", ".LPPPLLP"};
    int maxDiff = 8;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> flowers = {"P..L...L............LL...L", ".....P....P.......L.LLL...", ".........L....L.........P.", "..P................L...LPL", "......L.....L.......P.....", "......P..L.....L.....PL...", ".L.L.L.PP.L......LL.LP.L..", "......LL.LL.......L.......", "LL............L...........", ".....L..L...LL...LLL......", "....L......P.L..L...PL....", ".LL...L......L.P......LL..", "LLLL....L...L........P....", ".L.L...P.L....L.....L.....", "...........P....LLLL..L..L", ".L.P........L...LL........", "..L....LL..P.L....L....L.P", "L.L.L........L.L.L....L..L"};
    int maxDiff = 3;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> flowers = {".LPPL.PPL..PL..LL.P.LL.LLLLP..", "L.LP.PLP..L..PPP..PPPLLPP...P.", ".L.L.PLLPPL...LPP.LPL.PPP.PL.P", "..P.LLL..L.LPPPP.LL..PP.P.PLPL", "PPLPLP.LPPP...L.P.PP...LLP.LPP", "PPPP.PP.PP.LLLP..LPLL.L...LPLP", ".PPP.L...PLL.PP..LPPPP.P...L..", ".PP.PP..PPP.LL.LPPP.LPL.PPL.PP", ".PP..P..LP.L....PL..L...PL.P..", "PP.PP.LP.LPP..PL.PP.PP.L.PPLP.", ".L.PLLP.PP.L...LP.LL.LPP.L..P.", "PP.PL.PPPL.LLP.LLP..PLPPLP.P..", "LLLLPP.PP.LPP.L.L.LP.L.P.LPPL.", "PP.P.LP...LLP..PLLLLPL.P.L.P.L", "P.L..LP.L.PLPLP.PPLPPPLPPPPLPP", "....P.L.PP..P.PPPLPPPL.P.P..PL", "LP..LLPL.L..LLPPPLPPP.LLLPPP.L", "LL...LPPP.L.L..P.L.L..P...L.P.", "P..L.LPLLP.LPP.PLPP..LPPLPP...", "PP.PPPPPPP.PLP..LPP...PLLLLPP.", "P.LPLPPPLPPLPLPP.LPP.PLLP...PL", "PP...PP..P.....PL..L.PLP.L.LL.", "L.L.P.LLL.P.LL..LL...PPPPP.LLP", "....PPPL.LPPPP.P.PLPPP.P.L..PP", ".L..LLPL.L.PPL.LL..PPL...PPPP.", "PLLP..L.LP.L..LLPL.LPLLL....LL", "PL....PL.LP...LL..PP..PP.PPLP.", "LPP.P.P.PL..PPLLLPPLLP..PPP..L", "PP.PLLPPP..LPPPLLPP.LPP..LL.PL", ".P..PP..P..PLP..PLPLLL.PLL..P."};
    int maxDiff = 288;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 574;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> flowers = {"PLL....LLL.P...PLP.L.LLL.LLLL.", ".LLLPP....L..L.L..P.P.P.LP....", "LL.LPPPLLLLL...LL.LL.PLLP.LLLL", "...LLPL..L.P.LPLLLL..PP.....L.", ".L...PPLL.PPLLP..LPLPLLL.PLLL.", "L.LLLLL.LPL.LL.LPLL.L..LPLLPLL", ".PL.PL..LL.LLL..L.LLP.L...LL.L", "LPLL.L..L.L.LLLL.L.LLPLLPLP..L", "P.L...L.L...PPL.LLLLLP.PLLL.P.", "LL.LLPLLLP..LPLL.LP.LL..L.L.LL", "LP.LLL.....LLLL.L.LL.L.P.P...P", ".PL.L.L.PP.....P.L....PL.L.L..", "LP.LPLLLLLP..L.L..LP.LLLPP.L.L", "L.L.....LLP...PP.LLL....PLPP.L", ".L.LLL.P...LLPLLLL.LL...L.L.PP", "L..LP..P..LPPLLL...PL...L.LPLL", ".L...LLLLLL.LLLLP.L.LLL.LLLLPP", "PLLL.P.PP.L..P...L.LPLPL.PLL..", "...LLP.LLPPLLLPPLPLL.LL.P...PP", "P...L..PLLLLLLPPPP...L..L.L.L.", "..L.PL.L.L..P..L...LLL..LL.LLL", "LLLP.LLLL.P.L.P.LL..PL.PPL.LPL", ".L..PL.LL.L.P.LL.LL..LLP.L.L.P", "PL.LL..LLL...LL..LLL..LLL.LLPP", "PLLP...LLL.LLLLL.L..L.LL.P.L.P", "P.L.L.LL.LL.PL.LPL.PL.PL.PLL.P", "LPPP...LLPLPPL.L...LL.L.....L.", "PPLLP..P.LL.P.PLLLLL..LL.LL...", "..L.P....L....P.L.LL.L.LL.L..L", "LLLPL.L.PPLPPLLL.L.LLL....LLL."};
    int maxDiff = 86;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> flowers = {".............P......P.....P...", ".....P........P....L.........P", "......L......................P", "..................L...........", ".............P.....L..........", "......................L.......", ".....P.P...................L..", "..............P......L...P.P..", "............L.L...............", ".......................P.L....", "P...P....P.L....P.............", "...L.....P.....P..............", "................LP............", "............P.................", ".....L........................", ".....P...............P........", "...............P.....P........", ".L...L..L.....................", "...P.....L....................", ".....L.................L..P...", "....L.........................", "......P...........L...........", "..............................", ".......L..........P...........", ".........L........L...........", ".P.............P.P....P.......", ".............P................", "..............................", "......P..L......L.L.........L.", "L...................L........."};
    int maxDiff = 4;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> flowers = {"LLL.LL.LLP.LLLLLLLLL.LLLLLL.LL", "LL.L.LLL.L.LL..PL.L.LLL.L.L.LL", "P.LLL.L.LLLLLLLL.LLL..L.LL.L..", "L.LLL..LLLL.LLLPLLPLLLLLLLLLLP", "LL...LLLLL.L.LLL.LLLLL.L.LLL.L", "L...L..LL.LL...LLLLL.LLLP.P.L.", "LLLLLLL.LLLLLLL.L.LLLLLLLLL.LL", "LLLLLL..LLP..L.LLL..LL.LLLLLLP", "L..L.L.PLL.LL.L.L.....PLLLP.L.", "LLL.L........LLPPL.LLLLL.PLLL.", "LL..LLL.LLLL..PLLLLLLLLPLLL..L", ".LPLLLLLLLLLLLLPLL.LLLLLLLLL..", "LP.L.LPLLP.L.LLLLLL.LLLLP.LL.L", "L.L.PL.LLLL.L.LLPLLL.LLL..LPL.", "L.LPLLLL.L.L.LLLL..LLLLLLLLLLL", "LLLLLL..L.L..PL.LL.LLLL.LL..LL", ".LLL..LLLLLL.LLLLLLLL.L..LLLL.", "LPLLLLLL.LLLL.LLL.PLLLLLLLL..L", "LLPLLLL.LLL.LL.LLL.LLL..LLL..L", "LLLLLLL.LL.LLL.L.LLLL...LLLLLL", "LLLLPLP.L.LL.LL.LLLLLLLLL.LL.L", ".LLL.LLLL.P..L.LL.LLLL.LPLL.L.", "P.LLLLLLL.LLLLLLLL.LLPPLLLL..L", ".L.L..LLP.LLLLLLLLLLL.LL.LLLLL", ".L.LLP.LL.L.LLLPL..LLLLLLLLL..", "L.LL.LLLL.L.L.LLLLL.PL...LLLLL", "LL.LL..LLL.LLLLLL....L.L..LLLL", "L.LLLLPLL...LLLPPLLLLLLLL.LL.L", "LLLL.L.LLL.LPPL.L.LL.LLL.LLLLL", "LLLLLLLLLLL.LL.PLLLL..LLPLLLLL"};
    int maxDiff = 169;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> flowers = {".L....L...L....PP...P.........", "...L.....L...........P..P.P...", "P...........L...........P.....", "....P..L...L....P......P......", "..L.......L...................", "....P..L....L................P", "....P.L.....P.................", ".........L.P.........L.....P..", "..PL......................L..L", "LPL..............P...L...LL...", "..................L...P......P", "................LP............", "..LL........P.................", ".........L.....L...........LL.", ".............L..L.P.........P.", "..P....P...................LL.", "...P...P.......L...L..........", ".PL.........L..............P..", ".L.P.......P...PL...P........L", ".......L......P..P............", "L............L.L..P.....P.P...", "..LL........L................P", "....L.PP...............P.P....", "........P.....LP..............", "............P..P......LP......", ".................L.L........L.", ".........PL..........L........", ".PL...........................", "...P....P.......L...LL....P...", "................P...........P."};
    int maxDiff = 52;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> flowers = {"PLPLPLPLPPLLLLLLPPPLPPPPLLPLLP", "LLPLPPPLPLPPLPLPLLPPLPLLLPLLPP", "LPPPPPPPPPPPPLPLPLPLPPPLLLLLPP", "PPLPLPPLLLLPPPLPLPLLPLPPPPPLPL", "PLLLLPPPPPLPLPPPLLPPLLLLLPLPPL", "PPPLLLLLLLLPLPLPLLLPLLLPPLPPLP", "PLPPLPLPLPPLPPPPPLPPPPPLPPLLLP", "PPLLPLPPLPLLLLLLP.PPPPPLPLLPPP", "PLPLPPPPPLLPLLLPLLLPPLLLPPPLLL", "PLPPLPPLLLLPLLLPLPPLLPLLPLLPPP", "LLLPPPPLPLPPPLPPLPPPLPPPLLPLPP", "PLLPPLPPLPPLPPLPPPPLPLPPPPLLLP", "PLLLLLLPLPPLPPPLPPLLPPLPLPLLPP", "PPLLPLLPLLLLPLPLLPPPLPPLLLPLPP", "PPLPLLLPPLLPPLPPLPPLLLPLPLPLLP", "PPLPLPPPLPPLLPPLPLPPLLLPPPPLPL", "LLPPLPLPPPLLLPLPLLLPPPPLLPPPPP", "PLPLLLPLPPPPPLPPLPPPLLPPPP.PPP", "PLPLPPLPPLPLPPPLPLLLPPLLPPPPPP", "PLPLPPLPPLLPPLPPLLPPPPPLPLPPPL", "PLLLPLPPPPLPPPLLPLLLLLLLLLPPLL", "LPLLPLLLLPPPPLPLPLPPPLPPPPPPPP", "LPPPLPPLLPLPLLLPPPLLPPLPLPPLLL", "PLPPPLLLPLPPPLLPLPPPPLPPPPLPPL", "LLLLLPLLPPLLPPPPPPLPLLPLPPLPPP", "LPLLPPPPPLLLPPPLPLPLLLLPLPPPPP", "PPPPPLPLLPPPPPLLPPLPLPLPLPPLLL", "LPPPPPPPLLLPPPLLLLPPLPLLLPLPPP", "LPPPPPPPPLPPLLLLPLLPPPPPLPLLPP", "PLPPLPLPPLPPLPPPPLLLPLLPPLPPLP"};
    int maxDiff = 494;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 898;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> flowers = {"PPPP.PLLPPPPPPP.P.PPPLP.P.PLLP", "L.PPLPPPLLLPPPPLPLLPLPLPP..PPP", "PPLPLPPLLLPPL..PPPPP.LL.PP.L.P", "PLLP.LPLPL.LPP.P.LPLPLLPPPPPLP", "PLPPLPP.PLL.PPPLPPL.PPPPPP.PPP", "PLPPP.PLP.LP.PP.PP..PPPPPP..L.", "LPPLP.PPPPP.PLLPPPP.LPPPPL..LP", "PP.PPP..PLPPLPLPLPPPPLP..LPP..", ".LPPLPLPPLPLPP.PLPP.PPPLP.PPLP", ".LPPPPPPPLPPPLPPPPLPPPPPP.PPP.", "P.PL.PPPLLP.PL.PPLLP.LPPP.PPLP", "LP.LPLL.P.PPP..LPP.LLLPP.LP.LL", "PPPP.P..PPPPPP.P.LPPLLPLP..PLP", "PP.L...P..LPL..PLPLPPPPLP..P..", ".LPP.PPLPPPPLPPPPLP.PLLPPLLPPL", "P.LL.PPPPPP..PPLPPP.PPPLPP.PL.", "PP.PPPLPLLPLPP.LPLL.LPLPLPLLLP", "L.P.PPPL.PPPPLPPP...PPPPPPP.PP", "LPPL.P..PPPPPLPPP.PPPPLPPPLLPP", "PPPPPPL.PPLPLLP..LLLP.LPPPLP..", "PLPPPPLPPLLP.PP.P.PPPPPPPP.PPP", "PPPPPPPL.L..LLL.PPPLPP.PLPPPPP", "LLPPPP....PPLP.PPLPL.PL.LLLPPP", "PLPPP.PPPLPL.PPLPPL.LLPL.P.PPP", "P.PLP.P.PPLLLPLP.PLLPLPP.PPPPP", "LPPP.PLLPP.L.L..PPPLLPPLPPLPP.", "LPPLP.PPPPPPPPP.PPLPPLP.PLL.PP", "P.PPLP.PLLLPL.PPLPPPPPPP.LPP.P", "PLLLPPPLPPPLPPPPP...PPPLPP..P.", "PPPPPLPPP.....PP.LPPP..LPPPPPL"};
    int maxDiff = 288;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 711;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> flowers = {"LPLLLLLPLPLLLLL.LLLLLPLLLLLLLL", "PLLLLLLPPLLPLPLLLLLLLLLLLLLLL.", "PLLLPLLLLLLLPLLLLLLLLLLLLLLPLP", "LLLLLLLLPLLLLPLLLLLL.LPLLLLPLL", "LLPLLLLLLLPLLLPLPLLLPLLLLLPLLL", "LLLLLLLLLLLLLLLPLLLLLLLP.LLLLL", "LLLLLLPPLL.PLLLLLPLLLLLPL.LLLL", "LLLPLLLLLLLPLPLLLLLLPLLLLLLLLL", "LLLLPLLLLLLLLLL.PLL.LLLLLLP.LL", "LLL.LLLLLLLLLLLLLPLLPLLL.LLLL.", "L.PLLLLLLLLLLLLLLLLPLLLLLLLLLL", "LLLL.LLLLLL.LLLPL.LLPLLLLP.LLL", "LLPLLLLPLLLLLLLLLPLL.PLLLLLL.L", "LLLLLLPLLLLLPLLPLL.LLLLPLLLPLL", "LLLLLLLLLLL.LPLLLLLLLLLLLLLPLL", "PLLLPLLLLLLLL.LLLLLLLLLLLLLPL.", "LLPLL.LLLLLLLLPLLL.LLLLLP.LLLL", "LLLLLLLLLLLPLLLLLLLLLPLLLLLLLL", "LLLLLLLLLLLLLLLLLPLLLL.LPLPLLP", "LLLPLL.LL.LL.PLL.L.LLPLLLPLLLL", "LL.L.LLLLPLLLLLLLLLL.LLLLL.LLP", "LLPLLLLLLLLLLLLLLLLLLL.LLLLLLL", "LLLLLLLLLLLLPPL.LLLL.LLLLLL.LL", "LLLLLPL.LLLLPLLLLL.LLLLLLLPLLL", "LLLLLLLPLLLLLPLLPLLLLLLLLLLLPL", "LLLLL.LLLLLLLLLLLLLLL.LLLLLLLL", "LLLLLLLLL.LLLLLLLLLP.LLLPLLLLL", "L.LLLLP.LLLLLLLLLLLPLLLPLLLLLL", "LLL.LLPLLLL.PLLLLLLL.L.LLLLLLL", "LLLLLLLLLLPLLLLLL.LLLPLLLLLLL."};
    int maxDiff = 651;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 837;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> flowers = {"PLPL..PPPPPP.P.PL.PPP..PPPLP.P", "PP.PLPPPPLLLP.L.PLP.PLPPPPPP.P", "PPPLPPPPLP.LLP.PPLLPPPLPPPPLPP", "PPP.PPP.PLP.P.PLPPPLP..PP.PPLP", "LLPPPP.PPPPPPPP.PP.PLPPP.P.PPP", "P.LLPP.PPPPPPPPP.P..P..P.PPPPL", ".L.P.P.PP.PPP.LL.L.PPPPPPLPPPP", "..PPPPPPLPP.LPPPPPPPP..PP.PLP.", "....PPPP.PPP.L.PPPP.PLLP.P.PP.", "PPP..PL..LPPPPPP.PPPPP.P.LPPPP", "PPPP.P.P.PLLP.PPPPPPLPPLPPPP.P", ".PPPPLPPPPP.PPPLPP..P..LPP.LPP", "..PL.PP.P....PP..LPP..PLLPL.PL", ".PPPLLP.PPPPLPPPLPP.LPLPL.PPLP", "LLPPPPPPP.PPL.P..P.PPPLL.L.PPP", "..P.P..PPLPPPPPPPP.PPPPPP.PP..", "PPPPLPPP..PPPPLPPPPLPP.PPPPP.P", "P.PPL..LLLPPPPPPLPPPPPPPLPP.L.", "P.LLPP.PPP.P..L.L.PP..PP.P..PP", ".PP.P.P.PPPPPPL.PPPPPL...LPPPP", "PPPLLPPPLPPPPP.PPPPLPLPP.PP.P.", "PLPPPP.P..L.PPLPPLP..P.P.LPPPL", ".PL.PP.....L.PLPLLL.P.PLPPPPPP", "PPLPPPPPPP..LL..PPPPPP.PPPP..P", "LPPP..PPLPP..PL.PPPLPLPPPPPPPL", ".PPP.PPPPPP.PLLPPPL.PLLL.PPPP.", ".PLP.P.P.PPP.P..PPP..PL.L.PP.L", "PPLPPPP.PL.PPLPPPP.LPPLLLPLPPP", "P.PPPLPL.PL.PP.PPPPPLP.LPPP.PP", "LL.P.PPPPPP..PPPPPLPPP.LP...PL"};
    int maxDiff = 24;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> flowers = {"L.PPLPLPLPPLP.PLP.PLLPPLP.PPLL", "PP.PPP.P..LPPLPPP.PLLLPP.LLPPL", ".PPPPPLPLPPPLPPLLLPPPPL.P.PPLL", "L.PP.PL.LPPPLPPP.PPPPPLLLLPPLP", ".PPLP.PLL.LPL.PLPPPLLPPP.PPPLP", "LLPPPPP.L.PLPLPP.PPPLPPLLPPPPP", "PPLPPPPPPLPPPPPLPPPLPP.LPLLP.P", "..PPP..L.PLPLPPPPPLPPPLLPPLLPP", "PPPPLPPPPPLP.PPPPL.PLP.PPLPPPL", "LPPLLLPLLPPPPPPPP.PPPPLPLPLP.L", "PPL.PP.PPPPLPPLLLLLPLPPLPPPLLP", ".LP.PPLLPLPPPLLLLPPLLLPPPPPPPP", "PLPPPPPLPPPPP.PLLP.PPPPPLPLPPP", "PPPPLLL.PPP.PPP.PPPPLP..LL.LPP", "PPPLPPPPPPPPPPLPLPPPL.PPP.PPPL", "P.PPP.P..PPP.PPPLP.PPPPLPLPLPP", "P.LLLPPL.PP.L.PPLPP.PPPLPP..PP", "LPPPLPPPP.LP.LPPPPLLPPPP..LPPL", "PPPLPPPLP.PPP.PPPLLPPPPPPPPPPP", "LPLPLPPPP.PP.PPPLPPPPLPPPPPPLP", "LLLPL.P.PP.PP.PPLLPP.LL.LPP.PL", "LPPPPPPPPLL.PPPPPPPPPP.PPPL.PL", ".PPPLLPP.LP.PPLPPPP.PPPPLP.PPP", "LPLL.L.PPPPLP.PLLPPLPPLPPPLPPP", "PPLPPLLL..LLP.LPPP.PLPLPPPPPPP", "PLPPLP.PPPPPPPPLL.PP.PPPPP.L.P", "LLPPPPPPPPPLPPPPLPP.PPP.PPL.LP", "PPLLPPPLPPPPPPPPPPPLPLLPPPPLPL", "PPLP..PPPPPPPPPLPPP.PLPP.LPLPP", "LPPLLPPLPPPPP..PPPLLP.P.PLLPP."};
    int maxDiff = 527;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 789;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> flowers = {"LLL.LPL.LLLLLL.LPLLPL.LL.LLLLL", "LLLLPPPPL.LP.PLP.LPP.LLLLLLLLL", "LLLLL.LLPLPL.L..LPLLLLLL.LLPPL", "LLLLL.L..LLLLLLLLL..L.LL.LL..L", ".LLPLLPLLL.LLL.P.LPL.L.L..LLLL", "LPP.LLLLL..LL.LLLLLLLPLLL.L.LP", "LL..LLPLLLLLLLLLL.LL.LLLL.P..P", ".PLLLLLLL.L..LLPPLL.PLLLLLL.L.", "LPLLP.LPLL.P.L.LLP.LLL.LLLLLPP", "LL.L.L.LP.LLLLLLL.LPLLLLL.LPL.", "LPLLL..LLPLP.LLLLLLLLLLL.LLLPP", "LLP.L.LLLLLPL.L.LLLL.LLLL.L..P", "PPL.PLPLLLLLLLLPLL.LLPLLLLLLL.", "P.LL.L.LLLLL.LLPLLP.LL.PLLLL.L", "PL..LL...L..L.LLLLLLLL..LLL..L", "LPPLLLL..PLLL.LL.LL..P.PL.PLLL", "LLLLLLLLL.LL.LL.LLLL..LL.LLL..", "....P.LLLL.LL...PLLLPL.LLL.PPP", "PLL.LL.P.LP.PLLLP..LP.LLL.L.L.", "LPLPPLLLLLPLLLLL.LLLLLLLLLLLLL", "PLL.LLLL.LL.LLLLLL.LLLLLLLLL..", ".PP.LLLL.LPLP..LLLPLLLLLPPPLPL", "LLLPL.L.LP.L.LP..PPL.LLLPLLLPL", "LPLPLLLLL.LL.LL.LLLLLLLPLPLP.L", "LLLLLLLPLL.P.PL..LLLPPPL.L.LLL", "L.LLLLL.PL.PLL.LLLLPLL.LLLLPLL", "LLLLP.L..LLPLPLLLLLL.LLLLLLPLL", ".LP.LLPLLPL.L.LLLLLLLLLL.PPL.L", "P....LL.LL.L.LLLLLLLPLL..L.LL.", "LP.L.LL.LLL..PLLLLLLP.....L.L."};
    int maxDiff = 362;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> flowers = {"LLLLLLPLLLLPLPLPPLLLPPLP.PLPPL", "LPPLLLLPPLLPLLP.LLLPLLLPLPLLPL", "PLPLPPLLPLPLLLLL.LPPPLLLLP.PPP", "LLLLPLLPPLLLLLLLPLPLLLLLLLLLL.", "LLPLPLLPLPPLL.LLLLLL.LLLLPPLPP", "PPLLPLLLLLLPLPLLLPLLLLLLLLLLPL", "LL.LLLLLPLLLPPLLLLLLPLLPLPL.LL", "PLLPLLPLPLPLLLLL.LLLPLLLPLPLLP", "LLPLLLLLPLLLLPPLLL.LLPLPLLLLLP", "LL.LLLPLLLLPPLPLLLLLLLPPL.PLLL", "LLPLLLPPL.LLLLLPLLLPPLLLLLPLLL", "LLLPLLLL.PPLLLPLPLL.LLLLLLPPLL", "LPPPLLLLLLLPLPLLLLLLPLLPLLPLL.", "LLPLLPPLLPLLLLLPPPLLLLPPPLP..L", "LLLLPLLLPPLLLPLLPLLP.PLLLPLLPL", "LPL.LLLPLLPLL.LLLLLPLLPLLLLPLL", "LLLLPPPLLPPLLPPLLLPL.LLLLLPLLL", "LLPLPLLLLLLLLPLLLLLLPLLLPLPLLL", "PLPLLP.LPPLLLLL.PLPPLLPLLLLL.L", "LLLLLLPLLPPLPL.PPLPLLLPPPPLPPL", "PLLLLLLPLLLLPL.LLPLLPPLLLLL.LL", "LLLLLLLLLPL.LPPLPLLPPPPLLLLPL.", "LPPLLPLLLLLPL.LPPPLLPLPLLLLPLL", "L.LPP.LLPLPPPLLLL.L.PPLLPLL.LP", "LLPLLLPL.LLLLPLLLL.LPPPPL.LLLL", "LPLLLPLLLPL.LLPLPLLP.LLPPPLP.P", "LLLLL.PLLPLLPLLPL.PLLLLPLLLLLL", "LLPLLLLPLPLLPPPLLPLPPPLLLPPPLP", "PPLPL.LPLLLPPLLLPLLPLPLLLPLLLL", ".PPLLPLLLPLLPLPLLLLLLPPPLLLPPL"};
    int maxDiff = 517;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 853;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> flowers = {"PL", "LL"};
    int maxDiff = 5;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> flowers = {".P..P.PP..LL.P..L.PL.......LPL", "PL.PP.PPL..........PP..PPP..PP", "LL..PL...PLL.P..L..PP...L.LL.P", ".PL.PPP.P..LPP..PL.L.L...PP.P.", "L..LLPL.......L.P.PPPP..LPPP.P", ".LL..P...L.P.PP.L....L..L.PPP.", "...PPP.PPPP.P.P..P..PLL..PPLP.", ".P.PP.LL...P..P.PP.LP.PPPP..P.", "PP.PP.LPL....LPL.LL.P..L.P...P", "PL.PL....P.P.PL..L.LPLPP..P..P", "LPP.LL.P..L.P.P.PLPPPPLP.LPLLL", "P.L...L.L..LL..P.L.L.PL...L.P.", "L..L.P.P....LPL...PPPLP..LP...", "...P..PPPP...P.L...P.PPL......", "..L.L....L..P.....L...LPL...L.", "PLL.P..LP...P.P..P.L.P.LLP.P.P", ".LLPP.LPPP.....LP.LL...L.L...P", "....P....P..PPLPP.PP..P.PP.P..", ".P..L...LL...LLLLPLPP.P.L.P.PL", "L..PPLP.LL......PP..P..LPPLP..", "...LPL..L.L..PP...P.L.LL.P....", "LL...P.P..L...L.P.P..LP..PL.PP", ".L.....PLP.L...PLP.PPL.PP.P...", ".PL......P.PP.LLP.PP....L...P.", "..P...P..LLP..PP.P...LL.LPP.PL", "P.L.LPP......P.....P.PLLP.PP.P", "P.P.P.P..P.PL.P...PPL.LLLP.P.P", ".PPL.LPL.LL.PL.L..L..LP.LL.P.L", "L.L.LLL...L.LP.LL...L.PL......", "L.P......LP.P.PP..PP.L...L.P.."};
    int maxDiff = 6;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> flowers = {"LLL", "PPP", "LLL"};
    int maxDiff = 1;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> flowers = {"LL...PLLLLPPP..PP...PLLLPLL.L.", "L.PPLP.LPPPPPP.L..LL.PPLL.P.PP", "LPLLPLPLPLLLP.PLL.PLPL.PP.L.LL", "LPLP.PLLLPPPP.PL.P.P..L.L.PPP.", "L.L.LP.PL.PL...LPL.LPPPPLLLLPL", "PLL.L...L..LPPLL....PPP.PPP.LL", "LPPPPLPP..PPLL.LPP.L.P.L..LPLP", "P.L.PLPLPLPLP..L..L..LL.PLP.PL", "LLPPPPL...LPPP.PPLLLLL.PPLPLPL", "PP.L....LPLPLLP..PPPLLPL..LL.L", "L.L..L..LPPPLP.PLLPP.PP.P...PL", "P..P.PP..PL.L.L.P..PPP...PLLPL", "L..LLPL.PPPL.PPPL.PLPPPLL.L.LP", "LL.PLPL..PPPPPP.L.PLPPL..LPPLL", "L..L..LLL.L.LLLLLPPL.P.LPL.L.L", "L.PLPPPL.PLPLLL.L..L..PLLPLL.P", "LP.P.L..PLP.L.LLL.P..LLLLLP.P.", ".PLL..LPPLPL.PPPPPLPLL.PL.P.P.", "..LLLL.PLPLLL..LLLPL.LLLLPLPP.", "PLLP.PLLPP.PLLLLLPPLPPPPLLP.L.", ".LPPPP..PPLPLLPLLLLPPPL.L.LP.L", ".LPLPP.LP...PPPP.PL.LL.P.PLLP.", "P..L.....L.LLLPL.LL..LLPPPL.LP", "PL.PPP.LPPLLP.LP.PLPLPPL.P.PPL", ".LPL.LP..PPP.PLLPPPLL..PP.PP.P", "L.PLLLPLPLPPPLPLPPPPL...PLP...", "P.L.PPL.PPLP...P..LLPPPLPPPL.L", ".P.L.LP.L.L..L.LLLL.L..PLLPPLL", "PPP.LPP.LLP.P.P.PLL.P..PLLPP..", "P..P.LPLL..LLL.LLL.PLLLL.LL..P"};
    int maxDiff = 37;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 639;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> flowers = {"..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".............................."};
    int maxDiff = 900;
    FoxAndFlowerShopDivOne* pObj = new FoxAndFlowerShopDivOne();
    clock_t start = clock();
    int result = pObj->theMaxFlowers(flowers, maxDiff);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22777893&rd=15174&pm=11387
********************************************************************************
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <list>
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
 
#define debug(x)
 
class FoxAndFlowerShopDivOne {
  public:
    int solve(vector <string> f, int diff)
    {
        int H=f.size();
        int W=f[0].size();
        if(H==1)
            return -1;
        int lsum[50][50]={{}}, psum[50][50]={{}};
        for(int y=0; y<H; y++)
            for(int x=0; x<W; x++){
                lsum[y+1][x+1]=lsum[y][x+1]+lsum[y+1][x]-lsum[y][x]+(f[y][x]=='L');
                psum[y+1][x+1]=psum[y][x+1]+psum[y+1][x]-psum[y][x]+(f[y][x]=='P');
            }
        int res=-1;
        for(int i=1; i<H; i++)
        {
            int max1[2000]={};
            int max2[2000]={};
            fill(max1, max1+2000, -1);
            fill(max2, max2+2000, -1);
            for(int x1=0; x1<W; x1++)
                for(int x2=x1; x2<W; x2++)
                    for(int y1=0; y1<i; y1++)
                        for(int y2=y1; y2<i; y2++){
                            int P=psum[y2+1][x2+1]-psum[y2+1][x1]-psum[y1][x2+1]+psum[y1][x1];
                            int L=lsum[y2+1][x2+1]-lsum[y2+1][x1]-lsum[y1][x2+1]+lsum[y1][x1];
                            max1[P-L+1000]=max(max1[P-L+1000], L+P);
                        }
            for(int x1=0; x1<W; x1++)
                for(int x2=x1; x2<W; x2++)
                    for(int y1=i; y1<H; y1++)
                        for(int y2=y1; y2<H; y2++){
                            int P=psum[y2+1][x2+1]-psum[y2+1][x1]-psum[y1][x2+1]+psum[y1][x1];
                            int L=lsum[y2+1][x2+1]-lsum[y2+1][x1]-lsum[y1][x2+1]+lsum[y1][x1];
                            max2[P-L+1000]=max(max2[P-L+1000], L+P);
                        }
            for(int a=0; a<2000; a++)
                for(int b=0; b<2000; b++){
                    if(max1[a]>=0 && max2[b]>=0 && abs(a+b-2000)<=diff){
                        res=max(res, max1[a]+max2[b]);
                    }
                }
        }
        return res;
    }
 
  int theMaxFlowers(vector <string> flowers, int maxDiff) {
        vector<string> rev(flowers[0].size(), string(flowers.size(), '.'));
        for(int i=0; i<flowers.size(); i++)
            for(int j=0; j<flowers[0].size(); j++)
                rev[j][i]=flowers[i][j];
        return max(solve(flowers, maxDiff), solve(rev, maxDiff));
  }
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/