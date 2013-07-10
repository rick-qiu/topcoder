/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3069
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

class WinningProbability {
public:
    double probability(int prevWins, int prevLosses, int gamesLeft, int mustWin);
};

double WinningProbability::probability(int prevWins, int prevLosses, int gamesLeft, int mustWin) {
    double ret;
    return ret;
}


int test0() {
    int prevWins = 2;
    int prevLosses = 0;
    int gamesLeft = 1;
    int mustWin = 1;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int prevWins = 0;
    int prevLosses = 3;
    int gamesLeft = 4;
    int mustWin = 4;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0142857142857;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int prevWins = 20;
    int prevLosses = 3;
    int gamesLeft = 5;
    int mustWin = 1;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9995284409077;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int prevWins = 0;
    int prevLosses = 20;
    int gamesLeft = 1;
    int mustWin = 1;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0454545454545;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int prevWins = 0;
    int prevLosses = 0;
    int gamesLeft = 1;
    int mustWin = 1;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int prevWins = 100;
    int prevLosses = 99;
    int gamesLeft = 7;
    int mustWin = 4;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5053622927646;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int prevWins = 0;
    int prevLosses = 100;
    int gamesLeft = 15;
    int mustWin = 1;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1293103448276;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int prevWins = 20;
    int prevLosses = 20;
    int gamesLeft = 4;
    int mustWin = 2;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6790697674418;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int prevWins = 78;
    int prevLosses = 54;
    int gamesLeft = 12;
    int mustWin = 3;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9950934183886;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int prevWins = 100;
    int prevLosses = 77;
    int gamesLeft = 4;
    int mustWin = 4;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1039720508716;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int prevWins = 90;
    int prevLosses = 80;
    int gamesLeft = 2;
    int mustWin = 2;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2813550208361;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int prevWins = 41;
    int prevLosses = 25;
    int gamesLeft = 9;
    int mustWin = 7;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2812915191208;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int prevWins = 49;
    int prevLosses = 6;
    int gamesLeft = 3;
    int mustWin = 2;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9543511027715;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int prevWins = 47;
    int prevLosses = 74;
    int gamesLeft = 10;
    int mustWin = 6;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1595323998988;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int prevWins = 96;
    int prevLosses = 41;
    int gamesLeft = 11;
    int mustWin = 7;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7775095151468;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int prevWins = 50;
    int prevLosses = 99;
    int gamesLeft = 2;
    int mustWin = 2;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1155454862321;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int prevWins = 53;
    int prevLosses = 41;
    int gamesLeft = 11;
    int mustWin = 7;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.43516880005;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int prevWins = 16;
    int prevLosses = 76;
    int gamesLeft = 4;
    int mustWin = 1;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5435344777825;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int prevWins = 20;
    int prevLosses = 68;
    int gamesLeft = 11;
    int mustWin = 3;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4864983176967;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int prevWins = 59;
    int prevLosses = 4;
    int gamesLeft = 2;
    int mustWin = 2;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8531468531469;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int prevWins = 30;
    int prevLosses = 20;
    int gamesLeft = 10;
    int mustWin = 2;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9962239869676;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int prevWins = 66;
    int prevLosses = 89;
    int gamesLeft = 4;
    int mustWin = 3;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2142039205366;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int prevWins = 74;
    int prevLosses = 87;
    int gamesLeft = 4;
    int mustWin = 4;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0467559298995;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int prevWins = 38;
    int prevLosses = 48;
    int gamesLeft = 8;
    int mustWin = 8;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0021466953109;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int prevWins = 77;
    int prevLosses = 42;
    int gamesLeft = 12;
    int mustWin = 4;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9912607771874;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int prevWins = 51;
    int prevLosses = 85;
    int gamesLeft = 12;
    int mustWin = 1;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9955060793368;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int prevWins = 100;
    int prevLosses = 100;
    int gamesLeft = 15;
    int mustWin = 7;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6898945883485;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int prevWins = 98;
    int prevLosses = 76;
    int gamesLeft = 15;
    int mustWin = 12;
    WinningProbability* pObj = new WinningProbability();
    clock_t start = clock();
    double result = pObj->probability(prevWins, prevLosses, gamesLeft, mustWin);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0590339352084;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310430&rd=5864&pm=3069
********************************************************************************
#include <vector>
#include <string>
#include <set>
#include <map>
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdio>
 
using namespace std;
 
class WinningProbability {
  double cnt1(int prevWins, int prevLosses, int gamesLeft, int mustWin) {
    double res=1.0;
    int i;
    for (i=0;i<mustWin;i++) res*=(double)(gamesLeft-i);
    for (i=0;i<mustWin;i++) res/=(double)(i+1);
    for (i=1;i<=prevLosses+1;i++) res*=(double)(prevWins+i);
    for (i=mustWin+1;i<=prevLosses+gamesLeft+1;i++) res/=(double)(prevWins+i);
    for (i=1;i<=prevLosses+gamesLeft-mustWin;i++) res*=(double)(i);
    for (i=1;i<=prevLosses;i++) res/=(double)(i);
    return res;
  }
public:
  double probability(int prevWins, int prevLosses, int gamesLeft, int mustWin) {
    double res=0.0;
    int i;
    for (i=mustWin;i<=gamesLeft;i++) res+=cnt1(prevWins,prevLosses,gamesLeft,i);
    return res;
  }
};
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/