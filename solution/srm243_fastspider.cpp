/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4004
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

class FastSpider {
public:
    int findTime(double spiderSpeed, double manSpeed);
};

int FastSpider::findTime(double spiderSpeed, double manSpeed) {
    int ret;
    return ret;
}


int test0() {
    double spiderSpeed = 0.25;
    double manSpeed = 1.0;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    double spiderSpeed = 0.5;
    double manSpeed = 1.0;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
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
    double spiderSpeed = 0.5;
    double manSpeed = 4.8877377;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3600;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    double spiderSpeed = 0.2;
    double manSpeed = 1.0;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    double spiderSpeed = 0.47;
    double manSpeed = 2.78;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    double spiderSpeed = 0.23237120490148247;
    double manSpeed = 1.3861233623877531;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    double spiderSpeed = 0.4860346899195756;
    double manSpeed = 2.1453090856549557;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    double spiderSpeed = 0.3893122084936773;
    double manSpeed = 1.3775108049378084;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    double spiderSpeed = 0.22192978592904428;
    double manSpeed = 1.2179259257344017;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    double spiderSpeed = 0.4337737603217932;
    double manSpeed = 1.091448852734342;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    double spiderSpeed = 0.4614311459654846;
    double manSpeed = 3.7619849110399772;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 923;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    double spiderSpeed = 0.37935574071561684;
    double manSpeed = 1.7729609003439992;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    double spiderSpeed = 0.2865618752931029;
    double manSpeed = 1.777203892905189;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 277;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    double spiderSpeed = 0.29099121644108056;
    double manSpeed = 1.6774062722861003;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    double spiderSpeed = 0.45570150300173223;
    double manSpeed = 2.80458595082542;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    double spiderSpeed = 0.3049742992182573;
    double manSpeed = 1.5922319450854472;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    double spiderSpeed = 0.4216300548816815;
    double manSpeed = 3.223493194659371;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 648;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    double spiderSpeed = 0.46503486836221286;
    double manSpeed = 3.8548576573670252;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1033;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    double spiderSpeed = 0.3617935378639448;
    double manSpeed = 2.3538538806281015;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 284;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    double spiderSpeed = 0.4719693229540898;
    double manSpeed = 3.5402887877668636;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 511;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    double spiderSpeed = 0.406814213831339;
    double manSpeed = 1.4749308802703385;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    double spiderSpeed = 0.24517434438026817;
    double manSpeed = 2.181079373387396;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3348;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    double spiderSpeed = 0.3418729955154742;
    double manSpeed = 2.2681865966398957;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 335;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    double spiderSpeed = 0.495274020717714;
    double manSpeed = 3.4950643511536716;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 332;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    double spiderSpeed = 0.4884484221062418;
    double manSpeed = 2.794435616043163;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    double spiderSpeed = 0.47;
    double manSpeed = 2.78;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    double spiderSpeed = 0.25;
    double manSpeed = 1.0;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    double spiderSpeed = 0.5;
    double manSpeed = 4.8877377;
    FastSpider* pObj = new FastSpider();
    clock_t start = clock();
    int result = pObj->findTime(spiderSpeed, manSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3600;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=10606125&rd=7218&pm=4004
********************************************************************************
#include <math.h>
 
class FastSpider
{
  public:
  int findTime(double spiderSpeed, double manSpeed)
  {
    double s = spiderSpeed, m = manSpeed;
    //sln(1+mt)/m = 1;
    double result = (exp(m/s)-1)/m;
    if(result<=0) return -1;
    return int(result+.5);
  }  
};

********************************************************************************
*******************************************************************************/