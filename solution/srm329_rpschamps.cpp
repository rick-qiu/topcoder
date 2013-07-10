/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6845
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

class RPSChamps {
public:
    double numberOfMoves(int N);
};

double RPSChamps::numberOfMoves(int N) {
    double ret;
    return ret;
}


int test0() {
    int N = 1;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
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
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 10;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 35.59012622220019;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 20;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 1201.2046591553308;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 50;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1258780895391312E8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 100;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3552039578464264E17;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 200;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.509733035960696E34;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 473;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 6.51694834406221E82;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 500;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 3.70261258648865E87;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 321;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1173079840475635E56;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 123;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5209103288160166E21;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 444;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 5.097975758361231E77;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 499;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4684083909924314E87;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 4;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 4.928571428571429;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 5;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 7.342857142857143;
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
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 10.386635944700462;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 7;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 14.292165898617512;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 8;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 19.408371131027977;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 9;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 26.25243424268362;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 375;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 3.606624189509555E65;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 400;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 9.107147438266989E69;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 497;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0970703959966359E87;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 197;
    RPSChamps* pObj = new RPSChamps();
    clock_t start = clock();
    double result = pObj->numberOfMoves(N);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6325134921365016E34;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=10009&pm=6845
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
#include <cmath>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef pair<int, int> pii;
typedef long double ld;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
 
class RPSChamps
{
public:
    double numberOfMoves(int N);
};
 
double RPSChamps::numberOfMoves(int N)
{
    ld dp[501];
    ld choose[501][501];
 
    choose[0][0] = 0.0;
    for (int i = 1; i <= N; i++)
    {
        choose[i][0] = choose[i][i] = 1.0;
        for (int j = 1; j < i; j++)
            choose[i][j] = choose[i - 1][j - 1] + choose[i - 1][j];
    }
 
    dp[1] = 0.0;
    for (int i = 2; i <= N; i++)
    {
        dp[i] = 1.0 / (3 * powl(2.0 / 3.0, i) - 6 * powl(1.0 / 3.0, i));
        ld tw = 0.0;
        ld add = 0.0;
        for (int j = 1; j < i; j++)
        {
            ld w = choose[i][j];
            add += w * (dp[j] + dp[i - j]);
            tw += w;
        }
        dp[i] += add / tw;
    }
 
    return dp[N];
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/