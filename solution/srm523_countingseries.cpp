/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10957
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

class CountingSeries {
public:
    long countThem(long a, long b, long c, long d, long upperBound);
};

long CountingSeries::countThem(long a, long b, long c, long d, long upperBound) {
    long ret;
    return ret;
}


int test0() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long a = 3;
    long b = 3;
    long c = 1;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 343;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long a = 40;
    long b = 77;
    long c = 40;
    long d = 100000;
    long upperBound = 40;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long a = 452;
    long b = 24;
    long c = 4;
    long d = 5;
    long upperBound = 600;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long a = 1000000000000;
    long b = 1000000000000;
    long c = 1000000000000;
    long d = 100000;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long a = 234;
    long b = 24;
    long c = 377;
    long d = 1;
    long upperBound = 10000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 408;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long a = 371658585308;
    long b = 274808924218;
    long c = 611329026706;
    long d = 75085;
    long upperBound = 848787675931;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long a = 867388102154;
    long b = 369340281620;
    long c = 588218623027;
    long d = 20738;
    long upperBound = 595665623712;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long a = 720176314585;
    long b = 488693376359;
    long c = 514776939786;
    long d = 38245;
    long upperBound = 382227406106;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long a = 478928595791;
    long b = 927825107205;
    long c = 691955627786;
    long d = 8732;
    long upperBound = 527228917412;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long a = 639578760203;
    long b = 756584032851;
    long c = 768951637486;
    long d = 13026;
    long upperBound = 249617460760;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long a = 294660282608;
    long b = 919869934522;
    long c = 111958739667;
    long d = 42568;
    long upperBound = 76329210161;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long a = 428171448558;
    long b = 486759454458;
    long c = 241431311633;
    long d = 95084;
    long upperBound = 484913386618;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long a = 829322015914;
    long b = 305771561762;
    long c = 934247930302;
    long d = 23495;
    long upperBound = 189410317101;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long a = 496623788408;
    long b = 167046026998;
    long c = 672185860465;
    long d = 32418;
    long upperBound = 96124753045;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long a = 71662204468;
    long b = 807601812789;
    long c = 635911143908;
    long d = 85558;
    long upperBound = 943389347742;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long a = 942731255767;
    long b = 584910857047;
    long c = 104048818207;
    long d = 73381;
    long upperBound = 712119963690;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long a = 233876905874;
    long b = 151430463683;
    long c = 789804879302;
    long d = 56137;
    long upperBound = 523032618537;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long a = 460963441574;
    long b = 589697270381;
    long c = 796248895674;
    long d = 84739;
    long upperBound = 881165733710;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long a = 801992493102;
    long b = 165925373974;
    long c = 292778598713;
    long d = 58875;
    long upperBound = 438429892615;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long a = 833015985283;
    long b = 448265436297;
    long c = 783187882729;
    long d = 79923;
    long upperBound = 951223756976;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long a = 237407359835;
    long b = 188972488073;
    long c = 830920010831;
    long d = 97989;
    long upperBound = 117025361579;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long a = 765604912886;
    long b = 343072271013;
    long c = 64676545504;
    long d = 59376;
    long upperBound = 505005951932;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long a = 563903306155;
    long b = 541064862087;
    long c = 656495759997;
    long d = 72055;
    long upperBound = 976935175915;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long a = 336429740255;
    long b = 800725590901;
    long c = 184558208830;
    long d = 96920;
    long upperBound = 189313950525;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long a = 85161031713;
    long b = 421587728632;
    long c = 146039974864;
    long d = 76620;
    long upperBound = 672420275606;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long a = 3;
    long b = 1;
    long c = 3;
    long d = 4;
    long upperBound = 948926270240;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 948926270238;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 9;
    long upperBound = 996142450594;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 996142450594;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long a = 1;
    long b = 2;
    long c = 2;
    long d = 4;
    long upperBound = 928060483512;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 464030241776;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long a = 3;
    long b = 3;
    long c = 3;
    long d = 3;
    long upperBound = 970328929867;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 323442976622;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long a = 2;
    long b = 1;
    long c = 1;
    long d = 8;
    long upperBound = 964239644830;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 964239644830;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long a = 3;
    long b = 2;
    long c = 1;
    long d = 7;
    long upperBound = 948306929651;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 474153464826;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long a = 1;
    long b = 2;
    long c = 2;
    long d = 5;
    long upperBound = 963919138837;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 481959569436;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long a = 3;
    long b = 2;
    long c = 1;
    long d = 9;
    long upperBound = 980268424985;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 490134212493;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long a = 2;
    long b = 2;
    long c = 2;
    long d = 5;
    long upperBound = 930564458280;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 465282229140;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long a = 1;
    long b = 2;
    long c = 2;
    long d = 2;
    long upperBound = 960084849436;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 480042424757;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long a = 1;
    long b = 1;
    long c = 3;
    long d = 5;
    long upperBound = 916758881378;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 916758881378;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long a = 1;
    long b = 1;
    long c = 3;
    long d = 6;
    long upperBound = 913632832357;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 913632832357;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long a = 3;
    long b = 2;
    long c = 3;
    long d = 3;
    long upperBound = 957935528651;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 478967764325;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long a = 1;
    long b = 2;
    long c = 3;
    long d = 3;
    long upperBound = 928252524401;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 464126262201;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long a = 1;
    long b = 2;
    long c = 3;
    long d = 8;
    long upperBound = 964130534211;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 482065267118;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long a = 3;
    long b = 2;
    long c = 3;
    long d = 2;
    long upperBound = 929911384896;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 464955692485;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long a = 3;
    long b = 3;
    long c = 1;
    long d = 6;
    long upperBound = 999127555255;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 333042518419;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long a = 3;
    long b = 3;
    long c = 2;
    long d = 9;
    long upperBound = 993642632817;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 331214210940;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long a = 1;
    long b = 2;
    long c = 3;
    long d = 6;
    long upperBound = 956754020260;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 478377010144;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long a = 2;
    long b = 3;
    long c = 3;
    long d = 5;
    long upperBound = 965285486728;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 321761828926;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long a = 376303384920;
    long b = 736356;
    long c = 1432;
    long d = 173;
    long upperBound = 987814005729;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 830460;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long a = 732961462973;
    long b = 941601;
    long c = 2681;
    long d = 681;
    long upperBound = 998853609733;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 282388;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long a = 224020918844;
    long b = 250213;
    long c = 1373;
    long d = 215;
    long upperBound = 957836995544;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2932770;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long a = 699844231271;
    long b = 591542;
    long c = 8254;
    long d = 245;
    long upperBound = 952589914538;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 427270;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long a = 559688158031;
    long b = 620546;
    long c = 9761;
    long d = 601;
    long upperBound = 930385180047;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 597376;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long a = 138496014408;
    long b = 788102;
    long c = 9530;
    long d = 159;
    long upperBound = 955369882363;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1036512;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long a = 699585500785;
    long b = 600252;
    long c = 2755;
    long d = 742;
    long upperBound = 960150731325;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 434097;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long a = 912966478293;
    long b = 540931;
    long c = 4694;
    long d = 252;
    long upperBound = 984538225716;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 132317;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long a = 370762489993;
    long b = 883058;
    long c = 1054;
    long d = 818;
    long upperBound = 959115721111;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 666272;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long a = 533215344776;
    long b = 998854;
    long c = 5715;
    long d = 875;
    long upperBound = 933337736018;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 400585;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long a = 158711978588;
    long b = 662444;
    long c = 944;
    long d = 377;
    long upperBound = 977348100441;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1235786;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long a = 671291997116;
    long b = 784622;
    long c = 5230;
    long d = 754;
    long upperBound = 973695776773;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 385417;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long a = 672877199421;
    long b = 519605;
    long c = 8688;
    long d = 792;
    long upperBound = 992294461378;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 614734;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long a = 211970627965;
    long b = 465323;
    long c = 1446;
    long d = 873;
    long upperBound = 933490121149;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1550581;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long a = 913829666089;
    long b = 627485;
    long c = 1491;
    long d = 344;
    long upperBound = 939734068618;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 41287;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long a = 247339894881;
    long b = 744276;
    long c = 3875;
    long d = 889;
    long upperBound = 957529730754;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 954206;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long a = 60855883069;
    long b = 870173;
    long c = 7120;
    long d = 575;
    long upperBound = 939264155148;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1009467;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long a = 862233030209;
    long b = 514179;
    long c = 6216;
    long d = 544;
    long upperBound = 952735638809;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 176017;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long a = 862996696717;
    long b = 342637;
    long c = 9445;
    long d = 99;
    long upperBound = 991425583612;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 374830;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long a = 689210813348;
    long b = 803705;
    long c = 7574;
    long d = 957;
    long upperBound = 998454499160;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 384776;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long a = 617621421628;
    long b = 900642;
    long c = 4762;
    long d = 7;
    long upperBound = 560244538;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long a = 762680069332;
    long b = 898536;
    long c = 7089;
    long d = 10;
    long upperBound = 708900000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long a = 144402958845;
    long b = 609080;
    long c = 5360;
    long d = 10;
    long upperBound = 536000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long a = 954429631397;
    long b = 114649;
    long c = 259;
    long d = 8;
    long upperBound = 4345298944;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long a = 210718650139;
    long b = 209059;
    long c = 9419;
    long d = 10;
    long upperBound = 941900000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long a = 747547304912;
    long b = 309607;
    long c = 1313;
    long d = 6;
    long upperBound = 2205335808;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long a = 24870819017;
    long b = 347339;
    long c = 2929;
    long d = 6;
    long upperBound = 819932544;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long a = 791381396077;
    long b = 10455;
    long c = 4384;
    long d = 6;
    long upperBound = 1227239424;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long a = 98904846545;
    long b = 65222;
    long c = 7271;
    long d = 5;
    long upperBound = 568046875;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long a = 973003709061;
    long b = 434931;
    long c = 5616;
    long d = 6;
    long upperBound = 262020096;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long a = 640198515416;
    long b = 287842;
    long c = 9557;
    long d = 4;
    long upperBound = 156581888;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long a = 677344970999;
    long b = 581336;
    long c = 1396;
    long d = 4;
    long upperBound = 1463812096;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long a = 322571760636;
    long b = 770602;
    long c = 6206;
    long d = 10;
    long upperBound = 620600000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long a = 601605433174;
    long b = 568544;
    long c = 6122;
    long d = 7;
    long upperBound = 720247178;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long a = 981037539735;
    long b = 604741;
    long c = 1640;
    long d = 10;
    long upperBound = 1640000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long a = 545090382832;
    long b = 937893;
    long c = 5863;
    long d = 7;
    long upperBound = 689776087;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long a = 497113296820;
    long b = 504429;
    long c = 9675;
    long d = 7;
    long upperBound = 162607725;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long a = 927862375912;
    long b = 265135;
    long c = 1522;
    long d = 5;
    long upperBound = 2972656250;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long a = 466159578425;
    long b = 163729;
    long c = 3346;
    long d = 5;
    long upperBound = 1307031250;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long a = 717793611911;
    long b = 574060;
    long c = 1740;
    long d = 8;
    long upperBound = 3649044480;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long a = 782666701792;
    long b = 653287;
    long c = 7626;
    long d = 2;
    long upperBound = 124944385;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long a = 19245862700;
    long b = 775963;
    long c = 7744;
    long d = 3;
    long upperBound = 152425153;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long a = 138373392075;
    long b = 475041;
    long c = 4716;
    long d = 10;
    long upperBound = 471600001;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long a = 784894160424;
    long b = 564215;
    long c = 9945;
    long d = 9;
    long upperBound = 587242306;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long a = 321885308513;
    long b = 536202;
    long c = 2412;
    long d = 7;
    long upperBound = 1986385717;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long a = 54621216416;
    long b = 639678;
    long c = 3788;
    long d = 9;
    long upperBound = 2013098509;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long a = 733514101918;
    long b = 691128;
    long c = 7885;
    long d = 7;
    long upperBound = 132523196;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long a = 199390837630;
    long b = 692289;
    long c = 7997;
    long d = 3;
    long upperBound = 157404952;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long a = 94290565690;
    long b = 876609;
    long c = 2536;
    long d = 2;
    long upperBound = 664797185;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long a = 719270751894;
    long b = 53171;
    long c = 7196;
    long d = 8;
    long upperBound = 235798529;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long a = 725999593735;
    long b = 40917;
    long c = 8474;
    long d = 7;
    long upperBound = 142422517;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long a = 111343227748;
    long b = 476197;
    long c = 2884;
    long d = 7;
    long upperBound = 339299715;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long a = 469139508618;
    long b = 435152;
    long c = 4526;
    long d = 3;
    long upperBound = 267255773;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long a = 390406387913;
    long b = 576578;
    long c = 2803;
    long d = 4;
    long upperBound = 734789631;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long a = 858843894325;
    long b = 114797;
    long c = 2595;
    long d = 6;
    long upperBound = 726433919;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long a = 331027318096;
    long b = 721020;
    long c = 9301;
    long d = 3;
    long upperBound = 183071582;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long a = 767270902908;
    long b = 60589;
    long c = 6206;
    long d = 10;
    long upperBound = 620599999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long a = 463024975992;
    long b = 861355;
    long c = 1282;
    long d = 3;
    long upperBound = 2043922085;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long a = 168578159443;
    long b = 804749;
    long c = 8677;
    long d = 5;
    long upperBound = 135578124;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long a = 976539781927;
    long b = 279655;
    long c = 8784;
    long d = 8;
    long upperBound = 287834111;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long a = 3794;
    long b = 75020;
    long c = 9041;
    long d = 4;
    long upperBound = 950208050054;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 12666078;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long a = 77115;
    long b = 83015;
    long c = 5774;
    long d = 4;
    long upperBound = 949749787615;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 11440715;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long a = 67376;
    long b = 49943;
    long c = 9347;
    long d = 5;
    long upperBound = 971727433880;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 19456741;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long a = 32806;
    long b = 79954;
    long c = 2247;
    long d = 4;
    long upperBound = 980426683142;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 12262400;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long a = 73653;
    long b = 15386;
    long c = 3837;
    long d = 3;
    long upperBound = 927016897659;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 60250690;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long a = 97277;
    long b = 26678;
    long c = 5723;
    long d = 3;
    long upperBound = 953014716425;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 35722885;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long a = 77530;
    long b = 62843;
    long c = 6169;
    long d = 5;
    long upperBound = 906552143125;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 14425678;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long a = 10813;
    long b = 75086;
    long c = 9069;
    long d = 5;
    long upperBound = 992378109371;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 13216566;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long a = 64245;
    long b = 63759;
    long c = 8847;
    long d = 4;
    long upperBound = 945998850663;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 14837117;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long a = 34831;
    long b = 37951;
    long c = 8645;
    long d = 3;
    long upperBound = 913525007501;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 24071188;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long a = 78208;
    long b = 59284;
    long c = 5014;
    long d = 5;
    long upperBound = 910607120213;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 15360094;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long a = 41316;
    long b = 59505;
    long c = 9188;
    long d = 4;
    long upperBound = 962290623277;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 16171607;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long a = 29411;
    long b = 2176;
    long c = 4905;
    long d = 5;
    long upperBound = 958736263908;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 440595709;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long a = 95;
    long b = 64022;
    long c = 2399;
    long d = 3;
    long upperBound = 971935396080;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 15181292;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long a = 78441;
    long b = 10944;
    long c = 3936;
    long d = 4;
    long upperBound = 975665777002;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 89150755;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long a = 68665;
    long b = 92077;
    long c = 967;
    long d = 4;
    long upperBound = 964677722732;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10476874;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long a = 5050;
    long b = 39328;
    long c = 1049;
    long d = 5;
    long upperBound = 921897327739;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 23441260;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long a = 88598;
    long b = 18328;
    long c = 8582;
    long d = 4;
    long upperBound = 966775183095;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 52748547;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long a = 80738;
    long b = 51693;
    long c = 8410;
    long d = 5;
    long upperBound = 999997702308;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 19344946;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long a = 44152;
    long b = 16688;
    long c = 1937;
    long d = 2;
    long upperBound = 948585047449;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 56842372;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long a = 56766;
    long b = 44866;
    long c = 310;
    long d = 5;
    long upperBound = 946843147565;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 21103814;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long a = 43145;
    long b = 45043;
    long c = 6446;
    long d = 4;
    long upperBound = 943793229024;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 20953174;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long a = 72428;
    long b = 20651;
    long c = 9462;
    long d = 4;
    long upperBound = 912240010406;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 44174143;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long a = 45628;
    long b = 71610;
    long c = 9390;
    long d = 4;
    long upperBound = 910763595477;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 12718399;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long a = 87926;
    long b = 56936;
    long c = 8712;
    long d = 2;
    long upperBound = 963917401229;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 16929866;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long a = 17753;
    long b = 30721;
    long c = 1385;
    long d = 2;
    long upperBound = 906447638110;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 29505828;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long a = 74328;
    long b = 95873;
    long c = 119;
    long d = 4;
    long upperBound = 993076001339;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10358261;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long a = 93863;
    long b = 63334;
    long c = 7964;
    long d = 3;
    long upperBound = 948329652840;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 14973484;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long a = 30130;
    long b = 28163;
    long c = 9415;
    long d = 5;
    long upperBound = 959578834615;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 34072334;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long a = 3017;
    long b = 68514;
    long c = 4107;
    long d = 2;
    long upperBound = 949948257352;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 13865052;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long a = 75717;
    long b = 33649;
    long c = 6281;
    long d = 1;
    long upperBound = 944490962902;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 28068915;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long a = 27700;
    long b = 39576;
    long c = 408;
    long d = 1;
    long upperBound = 965579114571;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 24398098;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long a = 34585;
    long b = 48798;
    long c = 479;
    long d = 1;
    long upperBound = 935420510508;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 19169239;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long a = 99402;
    long b = 30414;
    long c = 6564;
    long d = 1;
    long upperBound = 924737647747;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 30404998;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long a = 93812;
    long b = 63820;
    long c = 4938;
    long d = 1;
    long upperBound = 925567704873;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 14502785;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long a = 24264;
    long b = 9262;
    long c = 9079;
    long d = 1;
    long upperBound = 948488684571;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 102406465;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long a = 91796;
    long b = 78228;
    long c = 6065;
    long d = 1;
    long upperBound = 980056903676;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 12528212;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long a = 76447;
    long b = 12788;
    long c = 7333;
    long d = 1;
    long upperBound = 977696974295;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 76454248;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long a = 33937;
    long b = 3207;
    long c = 8809;
    long d = 1;
    long upperBound = 976503806215;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 304491356;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long a = 87951;
    long b = 91493;
    long c = 6017;
    long d = 3;
    long upperBound = 20899;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long a = 65767;
    long b = 68958;
    long c = 8240;
    long d = 1;
    long upperBound = 18262;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long a = 73629;
    long b = 69162;
    long c = 3343;
    long d = 3;
    long upperBound = 48110;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long a = 1379;
    long b = 86978;
    long c = 4008;
    long d = 3;
    long upperBound = 1114;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long a = 96821;
    long b = 15431;
    long c = 9981;
    long d = 3;
    long upperBound = 78957;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long a = 11860;
    long b = 88234;
    long c = 5513;
    long d = 2;
    long upperBound = 3747;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long a = 85931;
    long b = 89559;
    long c = 2758;
    long d = 2;
    long upperBound = 3291;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long a = 84954;
    long b = 75205;
    long c = 6737;
    long d = 5;
    long upperBound = 51643;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long a = 84699;
    long b = 92065;
    long c = 7597;
    long d = 2;
    long upperBound = 73244;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long a = 48383;
    long b = 34907;
    long c = 4563;
    long d = 3;
    long upperBound = 31941;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long a = 17340;
    long b = 40451;
    long c = 7763;
    long d = 1;
    long upperBound = 3462;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long a = 42864;
    long b = 90089;
    long c = 311;
    long d = 3;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long a = 5529;
    long b = 15243;
    long c = 2336;
    long d = 2;
    long upperBound = 2034;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long a = 64202;
    long b = 81863;
    long c = 6922;
    long d = 2;
    long upperBound = 1692;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long a = 66210;
    long b = 80780;
    long c = 4722;
    long d = 1;
    long upperBound = 4199;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long a = 46195;
    long b = 27542;
    long c = 4227;
    long d = 5;
    long upperBound = 1488;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long a = 53944;
    long b = 47250;
    long c = 373;
    long d = 5;
    long upperBound = 4;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long a = 87899;
    long b = 36747;
    long c = 6092;
    long d = 3;
    long upperBound = 1813;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long a = 20120;
    long b = 33341;
    long c = 5813;
    long d = 5;
    long upperBound = 4188;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    long a = 6227;
    long b = 74175;
    long c = 5402;
    long d = 1;
    long upperBound = 4168;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    long a = 48872;
    long b = 46109;
    long c = 1214;
    long d = 2;
    long upperBound = 372;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    long a = 4544;
    long b = 52341;
    long c = 2444;
    long d = 2;
    long upperBound = 1178;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    long a = 32866;
    long b = 16394;
    long c = 6813;
    long d = 4;
    long upperBound = 3225;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    long a = 81394;
    long b = 2660;
    long c = 897;
    long d = 4;
    long upperBound = 693;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    long a = 64272;
    long b = 43652;
    long c = 7234;
    long d = 3;
    long upperBound = 3531;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    long a = 59845;
    long b = 32166;
    long c = 5779;
    long d = 4;
    long upperBound = 5506;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    long a = 86404;
    long b = 90398;
    long c = 5518;
    long d = 4;
    long upperBound = 3988;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    long a = 94232;
    long b = 30831;
    long c = 1473;
    long d = 3;
    long upperBound = 1264;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    long a = 67879;
    long b = 42466;
    long c = 4156;
    long d = 3;
    long upperBound = 1103;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    long a = 44851;
    long b = 94780;
    long c = 5875;
    long d = 4;
    long upperBound = 5140;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    long a = 100000100000;
    long b = 100000;
    long c = 100000;
    long d = 100000;
    long upperBound = 100000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    long a = 452;
    long b = 24;
    long c = 4;
    long d = 5;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 41666666658;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    long a = 100;
    long b = 1;
    long c = 10;
    long d = 2;
    long upperBound = 90;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    long a = 100;
    long b = 1;
    long c = 100;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    long a = 30;
    long b = 10;
    long c = 30;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 999999999999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    long a = 6;
    long b = 4;
    long c = 1;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 250000000039;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    long a = 1000;
    long b = 1;
    long c = 1;
    long d = 100000;
    long upperBound = 990;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    long a = 100;
    long b = 1;
    long c = 100;
    long d = 100;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    long a = 1233123;
    long b = 3121;
    long c = 213;
    long d = 123;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    long a = 1;
    long b = 2;
    long c = 2;
    long d = 3;
    long upperBound = 123;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 66;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    long a = 100;
    long b = 10;
    long c = 100;
    long d = 1;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    long a = 474747;
    long b = 47;
    long c = 47;
    long d = 47;
    long upperBound = 47;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    long a = 1000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    long a = 8;
    long b = 2;
    long c = 9;
    long d = 2;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    long a = 10;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 100000;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    long a = 100000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    long a = 40;
    long b = 10;
    long c = 40;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    long a = 1000000;
    long b = 2;
    long c = 10001;
    long d = 1;
    long upperBound = 10000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    long a = 25;
    long b = 1;
    long c = 3;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    long a = 3;
    long b = 2;
    long c = 3;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    long a = 10;
    long b = 1;
    long c = 10;
    long d = 2;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    long a = 100;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    long a = 1000000;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    long a = 100;
    long b = 2;
    long c = 1;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1000;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    long a = 40;
    long b = 7;
    long c = 2;
    long d = 3;
    long upperBound = 7;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    long a = 100;
    long b = 2;
    long c = 3;
    long d = 2;
    long upperBound = 6;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    long a = 10;
    long b = 2;
    long c = 15;
    long d = 1;
    long upperBound = 14;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    long a = 1000;
    long b = 1000;
    long c = 1000;
    long d = 1000;
    long upperBound = 999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    long a = 10;
    long b = 10;
    long c = 105;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    long a = 100;
    long b = 1;
    long c = 100;
    long d = 1;
    long upperBound = 20;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    long a = 1;
    long b = 3;
    long c = 5;
    long d = 1;
    long upperBound = 4;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    long a = 100000000;
    long b = 10;
    long c = 1;
    long d = 10;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    long a = 1000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    long a = 200;
    long b = 2;
    long c = 10;
    long d = 2;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    long a = 10;
    long b = 1;
    long c = 10;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    long a = 2;
    long b = 2;
    long c = 1;
    long d = 1;
    long upperBound = 999999999999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000000;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    long a = 99999;
    long b = 24;
    long c = 377;
    long d = 1;
    long upperBound = 10000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    long a = 1000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    long a = 10000000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    long a = 1000;
    long b = 10;
    long c = 100;
    long d = 20;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    long a = 3;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    long a = 100000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    long a = 2;
    long b = 2;
    long c = 51;
    long d = 1;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    long a = 1;
    long b = 1;
    long c = 2;
    long d = 2;
    long upperBound = 10000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    long a = 40;
    long b = 2;
    long c = 40;
    long d = 100000;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    long a = 100;
    long b = 1;
    long c = 10;
    long d = 10;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    long a = 10;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 992;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    long a = 1;
    long b = 1;
    long c = 101;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    long a = 1;
    long b = 1;
    long c = 500000000000;
    long d = 100000;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    long a = 235;
    long b = 2;
    long c = 323;
    long d = 232;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    long a = 100000;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    long a = 10000000;
    long b = 2;
    long c = 2;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    long a = 3446;
    long b = 34;
    long c = 3;
    long d = 4;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    long a = 234;
    long b = 24;
    long c = 377;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    long a = 12;
    long b = 3;
    long c = 13;
    long d = 4;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    long a = 10000;
    long b = 100;
    long c = 300;
    long d = 2;
    long upperBound = 9000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    long a = 100000;
    long b = 100;
    long c = 1;
    long d = 2;
    long upperBound = 500;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    long a = 10000;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    long a = 10;
    long b = 2;
    long c = 2;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 499999999999;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    long a = 234;
    long b = 24;
    long c = 10001;
    long d = 1;
    long upperBound = 10000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 407;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    long a = 1000000000000;
    long b = 2;
    long c = 1;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    long a = 1000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    long a = 2;
    long b = 2;
    long c = 2;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000000;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    long a = 1233123;
    long b = 3121;
    long c = 213;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    long a = 1000000;
    long b = 1;
    long c = 100;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    long a = 10;
    long b = 10;
    long c = 11;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    long a = 1;
    long b = 3;
    long c = 3;
    long d = 2;
    long upperBound = 930000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 310000000039;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    long a = 11;
    long b = 1;
    long c = 11;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    long a = 5000;
    long b = 2;
    long c = 3;
    long d = 2;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    long a = 3000;
    long b = 1;
    long c = 2000;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    long a = 11;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    long a = 100;
    long b = 1;
    long c = 100;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    long a = 1000;
    long b = 1;
    long c = 1000;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    long a = 3000;
    long b = 4;
    long c = 2;
    long d = 10;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    long a = 2;
    long b = 3;
    long c = 4;
    long d = 2;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 33333333351;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    long a = 2;
    long b = 2;
    long c = 2;
    long d = 2;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    long a = 2;
    long b = 1;
    long c = 2;
    long d = 1;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    long a = 500000000;
    long b = 500000000;
    long c = 10000000000;
    long d = 1;
    long upperBound = 8000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    long a = 234;
    long b = 24;
    long c = 377;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    long a = 123;
    long b = 456;
    long c = 24;
    long d = 1;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 219298247;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    long a = 4;
    long b = 5;
    long c = 3;
    long d = 2;
    long upperBound = 999999999999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000030;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    long a = 7;
    long b = 2;
    long c = 5;
    long d = 6;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    long a = 1;
    long b = 2;
    long c = 2;
    long d = 1;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000001;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    long a = 10;
    long b = 1;
    long c = 10;
    long d = 2;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    long a = 10000;
    long b = 1;
    long c = 21;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    long a = 1000;
    long b = 2;
    long c = 2;
    long d = 3;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    long a = 2;
    long b = 2;
    long c = 9;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    long a = 2;
    long b = 3;
    long c = 7;
    long d = 3;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 333333333357;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    long a = 1111111;
    long b = 11;
    long c = 1;
    long d = 1;
    long upperBound = 2500;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    long a = 1000;
    long b = 1;
    long c = 100000;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    long a = 150;
    long b = 1;
    long c = 20;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    long a = 1000000;
    long b = 10;
    long c = 4000000;
    long d = 100000;
    long upperBound = 999999999999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 99999900000;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    long a = 999999999999;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 99999999999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    long a = 1000;
    long b = 24;
    long c = 100;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    long a = 2;
    long b = 3;
    long c = 5;
    long d = 1;
    long upperBound = 10000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3333;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    long a = 22;
    long b = 4;
    long c = 18;
    long d = 1;
    long upperBound = 20;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    long a = 103;
    long b = 3;
    long c = 5;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    long a = 100;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    long a = 500;
    long b = 5;
    long c = 1000;
    long d = 2;
    long upperBound = 499;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    long a = 1;
    long b = 2;
    long c = 4;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    long a = 10;
    long b = 3;
    long c = 8;
    long d = 1;
    long upperBound = 8;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    long a = 5;
    long b = 2;
    long c = 3;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    long a = 5;
    long b = 2;
    long c = 10;
    long d = 1;
    long upperBound = 9;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    long a = 1;
    long b = 1000000000;
    long c = 5;
    long d = 1;
    long upperBound = 1000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    long a = 1001;
    long b = 5;
    long c = 1001;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    long a = 1000;
    long b = 1;
    long c = 1000;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    long a = 100;
    long b = 1;
    long c = 1000;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    long a = 100;
    long b = 2;
    long c = 2;
    long d = 2;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    long a = 4;
    long b = 2;
    long c = 25;
    long d = 1;
    long upperBound = 20;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    long a = 1000;
    long b = 2;
    long c = 3;
    long d = 3;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    long a = 1;
    long b = 2;
    long c = 100000000002;
    long d = 1;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    long a = 10000;
    long b = 1000;
    long c = 20000;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    long a = 100;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 4;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    long a = 213;
    long b = 3121;
    long c = 213;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    long a = 1;
    long b = 2;
    long c = 12;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    long a = 1;
    long b = 1;
    long c = 2;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test299() {
    long a = 1;
    long b = 2;
    long c = 6;
    long d = 1;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 299: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 299: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test300() {
    long a = 1;
    long b = 2;
    long c = 1;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000039;
    if(result == expected) {
        cout << "Test Case 300: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 300: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test301() {
    long a = 10;
    long b = 2;
    long c = 5;
    long d = 1;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 301: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 301: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test302() {
    long a = 1000000000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 302: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 302: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test303() {
    long a = 10000;
    long b = 200;
    long c = 1000000;
    long d = 100;
    long upperBound = 9999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 303: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 303: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test304() {
    long a = 10;
    long b = 1;
    long c = 100;
    long d = 1;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999991;
    if(result == expected) {
        cout << "Test Case 304: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 304: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test305() {
    long a = 601;
    long b = 24;
    long c = 4;
    long d = 5;
    long upperBound = 600;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 305: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 305: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test306() {
    long a = 1;
    long b = 2;
    long c = 1;
    long d = 1;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000000;
    if(result == expected) {
        cout << "Test Case 306: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 306: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test307() {
    long a = 2;
    long b = 2;
    long c = 3;
    long d = 3;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 307: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 307: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test308() {
    long a = 1;
    long b = 1;
    long c = 2;
    long d = 1;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 308: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 308: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test309() {
    long a = 100;
    long b = 1;
    long c = 5;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 309: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 309: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test310() {
    long a = 100;
    long b = 100;
    long c = 100;
    long d = 100;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 310: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 310: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test311() {
    long a = 2;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 311: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 311: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test312() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 312: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 312: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test313() {
    long a = 20;
    long b = 10;
    long c = 10;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 313: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 313: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test314() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 10000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000;
    if(result == expected) {
        cout << "Test Case 314: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 314: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test315() {
    long a = 1;
    long b = 2;
    long c = 1;
    long d = 1;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000;
    if(result == expected) {
        cout << "Test Case 315: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 315: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test316() {
    long a = 1000000000;
    long b = 77;
    long c = 40;
    long d = 100000;
    long upperBound = 40;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 316: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 316: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test317() {
    long a = 100000;
    long b = 1;
    long c = 100000;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 317: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 317: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test318() {
    long a = 1;
    long b = 1;
    long c = 3;
    long d = 2;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000;
    if(result == expected) {
        cout << "Test Case 318: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 318: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test319() {
    long a = 100;
    long b = 1;
    long c = 12;
    long d = 12;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 319: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 319: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test320() {
    long a = 544;
    long b = 1;
    long c = 5315354;
    long d = 22221;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999457;
    if(result == expected) {
        cout << "Test Case 320: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 320: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test321() {
    long a = 4;
    long b = 1;
    long c = 3;
    long d = 2;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 321: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 321: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test322() {
    long a = 2;
    long b = 2;
    long c = 2;
    long d = 1;
    long upperBound = 1365434643;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 682717321;
    if(result == expected) {
        cout << "Test Case 322: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 322: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test323() {
    long a = 100;
    long b = 1;
    long c = 100;
    long d = 1;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999901;
    if(result == expected) {
        cout << "Test Case 323: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 323: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test324() {
    long a = 1000000;
    long b = 1000000;
    long c = 1000000;
    long d = 1000;
    long upperBound = 1000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000;
    if(result == expected) {
        cout << "Test Case 324: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 324: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test325() {
    long a = 100;
    long b = 100;
    long c = 1;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 325: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 325: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test326() {
    long a = 10;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 326: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 326: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test327() {
    long a = 100;
    long b = 100;
    long c = 100;
    long d = 100;
    long upperBound = 100000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000;
    if(result == expected) {
        cout << "Test Case 327: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 327: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test328() {
    long a = 10;
    long b = 5;
    long c = 100;
    long d = 100;
    long upperBound = 9;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 328: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 328: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test329() {
    long a = 5000;
    long b = 3;
    long c = 1;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 329: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 329: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test330() {
    long a = 5;
    long b = 4;
    long c = 100;
    long d = 2;
    long upperBound = 4;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 330: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 330: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test331() {
    long a = 10000;
    long b = 1;
    long c = 1;
    long d = 1000;
    long upperBound = 10000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9999990003;
    if(result == expected) {
        cout << "Test Case 331: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 331: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test332() {
    long a = 200;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 332: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 332: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test333() {
    long a = 10000;
    long b = 10000;
    long c = 10000;
    long d = 10000;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 333: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 333: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test334() {
    long a = 100500;
    long b = 1;
    long c = 3;
    long d = 10;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 334: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 334: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test335() {
    long a = 10;
    long b = 3;
    long c = 4;
    long d = 4;
    long upperBound = 9;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 335: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 335: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test336() {
    long a = 1000221;
    long b = 23;
    long c = 2;
    long d = 323;
    long upperBound = 212;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 336: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 336: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test337() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 337: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 337: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test338() {
    long a = 1;
    long b = 100;
    long c = 3;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 338: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 338: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test339() {
    long a = 8;
    long b = 2;
    long c = 10;
    long d = 1;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 339: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 339: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test340() {
    long a = 100;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 340: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 340: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test341() {
    long a = 10;
    long b = 10;
    long c = 10;
    long d = 10;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 341: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 341: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test342() {
    long a = 234;
    long b = 24;
    long c = 377;
    long d = 1;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 41666666658;
    if(result == expected) {
        cout << "Test Case 342: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 342: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test343() {
    long a = 1999;
    long b = 1;
    long c = 1;
    long d = 3;
    long upperBound = 55;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 343: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 343: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test344() {
    long a = 3;
    long b = 3;
    long c = 3;
    long d = 1;
    long upperBound = 7;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 344: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 344: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test345() {
    long a = 2;
    long b = 2;
    long c = 3;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000001;
    if(result == expected) {
        cout << "Test Case 345: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 345: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test346() {
    long a = 1000000;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 346: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 346: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test347() {
    long a = 1000000000;
    long b = 1;
    long c = 3;
    long d = 3;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 347: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 347: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test348() {
    long a = 999999999999;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 348: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 348: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test349() {
    long a = 1000000;
    long b = 1000000;
    long c = 100000;
    long d = 100000;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 349: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 349: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test350() {
    long a = 234;
    long b = 24;
    long c = 377;
    long d = 1;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4166666658;
    if(result == expected) {
        cout << "Test Case 350: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 350: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test351() {
    long a = 30;
    long b = 1;
    long c = 30;
    long d = 30;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 351: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 351: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test352() {
    long a = 1;
    long b = 3;
    long c = 20;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 352: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 352: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test353() {
    long a = 2;
    long b = 2;
    long c = 5;
    long d = 1;
    long upperBound = 4;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 353: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 353: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test354() {
    long a = 1000;
    long b = 10;
    long c = 10;
    long d = 10;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 354: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 354: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test355() {
    long a = 1;
    long b = 10;
    long c = 100;
    long d = 1;
    long upperBound = 20;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 355: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 355: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test356() {
    long a = 10;
    long b = 1;
    long c = 5;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 356: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 356: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test357() {
    long a = 100;
    long b = 2;
    long c = 100;
    long d = 1;
    long upperBound = 7;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 357: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 357: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test358() {
    long a = 100000000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 358: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 358: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test359() {
    long a = 100000;
    long b = 2;
    long c = 10000;
    long d = 2;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 359: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 359: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test360() {
    long a = 9;
    long b = 3;
    long c = 10;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 360: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 360: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test361() {
    long a = 100;
    long b = 10;
    long c = 8;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 361: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 361: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test362() {
    long a = 2;
    long b = 2;
    long c = 1000001;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500;
    if(result == expected) {
        cout << "Test Case 362: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 362: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test363() {
    long a = 100;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 363: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 363: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test364() {
    long a = 100;
    long b = 10;
    long c = 10;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 364: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 364: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test365() {
    long a = 100000000000;
    long b = 100000000000;
    long c = 100000000000;
    long d = 100000;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 365: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 365: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test366() {
    long a = 3;
    long b = 3;
    long c = 3;
    long d = 3;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 366: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 366: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test367() {
    long a = 1000000;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1024;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 367: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 367: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test368() {
    long a = 100;
    long b = 100;
    long c = 3;
    long d = 1;
    long upperBound = 99;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 368: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 368: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test369() {
    long a = 1231231;
    long b = 2;
    long c = 167883835;
    long d = 2;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 369: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 369: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test370() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 370: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 370: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test371() {
    long a = 10000000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 371: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 371: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test372() {
    long a = 500;
    long b = 1;
    long c = 10;
    long d = 10;
    long upperBound = 20;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 372: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 372: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test373() {
    long a = 100000;
    long b = 10;
    long c = 50;
    long d = 1000;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 373: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 373: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test374() {
    long a = 100;
    long b = 10;
    long c = 10;
    long d = 10;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 374: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 374: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test375() {
    long a = 20;
    long b = 1;
    long c = 11;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 375: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 375: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test376() {
    long a = 1;
    long b = 2;
    long c = 1;
    long d = 2;
    long upperBound = 10000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5000000033;
    if(result == expected) {
        cout << "Test Case 376: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 376: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test377() {
    long a = 10000000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 100000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 377: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 377: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test378() {
    long a = 100;
    long b = 1;
    long c = 999999;
    long d = 1000;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 378: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 378: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test379() {
    long a = 10;
    long b = 1;
    long c = 8;
    long d = 1;
    long upperBound = 7;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 379: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 379: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test380() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 4294967299;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4294967299;
    if(result == expected) {
        cout << "Test Case 380: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 380: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test381() {
    long a = 1;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 10000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000;
    if(result == expected) {
        cout << "Test Case 381: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 381: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test382() {
    long a = 500;
    long b = 1;
    long c = 1;
    long d = 3;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 382: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 382: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test383() {
    long a = 4;
    long b = 2;
    long c = 5;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 383: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 383: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test384() {
    long a = 100;
    long b = 1;
    long c = 5;
    long d = 5;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 384: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 384: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test385() {
    long a = 100;
    long b = 1;
    long c = 10;
    long d = 2;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 385: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 385: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test386() {
    long a = 2;
    long b = 3;
    long c = 12;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 386: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 386: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test387() {
    long a = 11;
    long b = 7;
    long c = 1;
    long d = 100000;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 142857142858;
    if(result == expected) {
        cout << "Test Case 387: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 387: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test388() {
    long a = 1000;
    long b = 1;
    long c = 1000;
    long d = 2;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 388: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 388: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test389() {
    long a = 10;
    long b = 10;
    long c = 10;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 389: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 389: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test390() {
    long a = 4;
    long b = 5;
    long c = 10;
    long d = 10;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 390: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 390: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test391() {
    long a = 50;
    long b = 5;
    long c = 1;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 391: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 391: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test392() {
    long a = 1000000000000;
    long b = 4;
    long c = 1;
    long d = 2;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 392: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 392: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test393() {
    long a = 10;
    long b = 2;
    long c = 2;
    long d = 1;
    long upperBound = 100000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 49997;
    if(result == expected) {
        cout << "Test Case 393: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 393: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test394() {
    long a = 20;
    long b = 10;
    long c = 10;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 394: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 394: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test395() {
    long a = 2;
    long b = 3;
    long c = 8;
    long d = 2;
    long upperBound = 100000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 33333345;
    if(result == expected) {
        cout << "Test Case 395: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 395: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test396() {
    long a = 1000000;
    long b = 10;
    long c = 4000000;
    long d = 100000;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 396: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 396: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test397() {
    long a = 100;
    long b = 1;
    long c = 2;
    long d = 2;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 397: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 397: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test398() {
    long a = 11;
    long b = 11;
    long c = 12;
    long d = 12;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 398: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 398: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test399() {
    long a = 10;
    long b = 10;
    long c = 1;
    long d = 2;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 399: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 399: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test400() {
    long a = 15;
    long b = 5;
    long c = 10;
    long d = 1;
    long upperBound = 20;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 400: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 400: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test401() {
    long a = 100;
    long b = 100;
    long c = 200;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 401: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 401: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test402() {
    long a = 2;
    long b = 1000;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 402: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 402: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test403() {
    long a = 100000000;
    long b = 1;
    long c = 3456;
    long d = 1;
    long upperBound = 1000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 403: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 403: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test404() {
    long a = 23545634646;
    long b = 34656757543;
    long c = 32534253456;
    long d = 23523;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 404: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 404: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test405() {
    long a = 10000000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 405: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 405: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test406() {
    long a = 1000;
    long b = 10000;
    long c = 10000;
    long d = 10000;
    long upperBound = 11;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 406: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 406: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test407() {
    long a = 100;
    long b = 1;
    long c = 100;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 407: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 407: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test408() {
    long a = 1000000;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 999999000021;
    if(result == expected) {
        cout << "Test Case 408: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 408: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test409() {
    long a = 1;
    long b = 2;
    long c = 10;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 409: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 409: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test410() {
    long a = 2;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 410: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 410: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test411() {
    long a = 4;
    long b = 2;
    long c = 7;
    long d = 1;
    long upperBound = 6;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 411: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 411: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test412() {
    long a = 20;
    long b = 10;
    long c = 101;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 412: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 412: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test413() {
    long a = 432424;
    long b = 56;
    long c = 42;
    long d = 54;
    long upperBound = 23;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 413: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 413: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test414() {
    long a = 1;
    long b = 4;
    long c = 1;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 414: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 414: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test415() {
    long a = 1;
    long b = 2;
    long c = 2;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 415: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 415: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test416() {
    long a = 100000;
    long b = 100000;
    long c = 100000;
    long d = 100000;
    long upperBound = 4;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 416: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 416: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test417() {
    long a = 1000000000000;
    long b = 1;
    long c = 1000000000000;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 417: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 417: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test418() {
    long a = 4;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 418: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 418: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test419() {
    long a = 234;
    long b = 24;
    long c = 24234;
    long d = 1;
    long upperBound = 10000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 407;
    if(result == expected) {
        cout << "Test Case 419: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 419: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test420() {
    long a = 372723;
    long b = 2;
    long c = 2;
    long d = 2;
    long upperBound = 33;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 420: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 420: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test421() {
    long a = 1;
    long b = 4;
    long c = 3;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 421: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 421: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test422() {
    long a = 100;
    long b = 1;
    long c = 100;
    long d = 1;
    long upperBound = 10000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 9999999901;
    if(result == expected) {
        cout << "Test Case 422: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 422: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test423() {
    long a = 1000000000000;
    long b = 10;
    long c = 10;
    long d = 10;
    long upperBound = 999999999999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 423: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 423: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test424() {
    long a = 2;
    long b = 3;
    long c = 1;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 333333333353;
    if(result == expected) {
        cout << "Test Case 424: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 424: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test425() {
    long a = 1000;
    long b = 1000;
    long c = 999;
    long d = 1;
    long upperBound = 20;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 425: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 425: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test426() {
    long a = 3;
    long b = 2;
    long c = 4;
    long d = 5;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 426: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 426: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test427() {
    long a = 55;
    long b = 55;
    long c = 50;
    long d = 1;
    long upperBound = 60;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 427: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 427: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test428() {
    long a = 100000;
    long b = 2;
    long c = 2;
    long d = 2;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 428: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 428: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test429() {
    long a = 1000;
    long b = 1;
    long c = 1000;
    long d = 1;
    long upperBound = 100000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 99001;
    if(result == expected) {
        cout << "Test Case 429: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 429: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test430() {
    long a = 123;
    long b = 456;
    long c = 24;
    long d = 1;
    long upperBound = 100000000001;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 219298247;
    if(result == expected) {
        cout << "Test Case 430: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 430: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test431() {
    long a = 100;
    long b = 100;
    long c = 100;
    long d = 100;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 431: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 431: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test432() {
    long a = 500;
    long b = 5;
    long c = 399;
    long d = 2;
    long upperBound = 399;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 432: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 432: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test433() {
    long a = 1000;
    long b = 2;
    long c = 100000;
    long d = 100000;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 433: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 433: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test434() {
    long a = 3;
    long b = 2;
    long c = 12;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 434: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 434: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test435() {
    long a = 199;
    long b = 100;
    long c = 10000;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 435: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 435: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test436() {
    long a = 10;
    long b = 2;
    long c = 10;
    long d = 2;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 436: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 436: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test437() {
    long a = 12345;
    long b = 1;
    long c = 12345;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 437: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 437: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test438() {
    long a = 1000;
    long b = 1000;
    long c = 1000;
    long d = 1000;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 438: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 438: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test439() {
    long a = 4;
    long b = 2;
    long c = 3;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 439: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 439: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test440() {
    long a = 1;
    long b = 1;
    long c = 3;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 440: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 440: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test441() {
    long a = 10;
    long b = 1;
    long c = 2;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 441: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 441: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test442() {
    long a = 100000000000;
    long b = 3;
    long c = 4;
    long d = 2;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 442: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 442: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test443() {
    long a = 100;
    long b = 100;
    long c = 100;
    long d = 1;
    long upperBound = 12;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 443: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 443: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test444() {
    long a = 1000;
    long b = 999;
    long c = 1;
    long d = 25;
    long upperBound = 125;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 444: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 444: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test445() {
    long a = 2;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 445: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 445: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test446() {
    long a = 20;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 986;
    if(result == expected) {
        cout << "Test Case 446: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 446: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test447() {
    long a = 34;
    long b = 1;
    long c = 2;
    long d = 3;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999970;
    if(result == expected) {
        cout << "Test Case 447: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 447: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test448() {
    long a = 15;
    long b = 2;
    long c = 1;
    long d = 2;
    long upperBound = 8;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 448: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 448: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test449() {
    long a = 3;
    long b = 1;
    long c = 4;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 998;
    if(result == expected) {
        cout << "Test Case 449: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 449: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test450() {
    long a = 239999;
    long b = 565555;
    long c = 3;
    long d = 7;
    long upperBound = 549;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 450: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 450: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test451() {
    long a = 1000;
    long b = 3;
    long c = 3;
    long d = 2;
    long upperBound = 93;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 451: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 451: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test452() {
    long a = 45;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 452: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 452: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test453() {
    long a = 10;
    long b = 5;
    long c = 5;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 200;
    if(result == expected) {
        cout << "Test Case 453: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 453: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test454() {
    long a = 10000000;
    long b = 2;
    long c = 1;
    long d = 2;
    long upperBound = 100000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 49995000025;
    if(result == expected) {
        cout << "Test Case 454: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 454: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test455() {
    long a = 100000;
    long b = 5;
    long c = 100000;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 455: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 455: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test456() {
    long a = 100000;
    long b = 7;
    long c = 51;
    long d = 1;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 456: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 456: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test457() {
    long a = 10;
    long b = 1;
    long c = 10;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 457: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 457: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test458() {
    long a = 1;
    long b = 1;
    long c = 2;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 458: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 458: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test459() {
    long a = 1000000000;
    long b = 1;
    long c = 1000000000;
    long d = 2;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 459: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 459: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test460() {
    long a = 100;
    long b = 1;
    long c = 2;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 460: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 460: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test461() {
    long a = 1;
    long b = 1;
    long c = 10;
    long d = 10;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 461: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 461: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test462() {
    long a = 5;
    long b = 1;
    long c = 5;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 462: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 462: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test463() {
    long a = 8;
    long b = 4;
    long c = 4;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 463: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 463: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test464() {
    long a = 100000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 464: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 464: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test465() {
    long a = 100;
    long b = 2;
    long c = 10;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 465: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 465: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test466() {
    long a = 10;
    long b = 2;
    long c = 9;
    long d = 1;
    long upperBound = 8;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 466: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 466: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test467() {
    long a = 1;
    long b = 3;
    long c = 1000001;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 467: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 467: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test468() {
    long a = 200000;
    long b = 1;
    long c = 10;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 468: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 468: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test469() {
    long a = 100003;
    long b = 2;
    long c = 4;
    long d = 5;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 469: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 469: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test470() {
    long a = 2;
    long b = 2;
    long c = 2;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 470: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 470: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test471() {
    long a = 1;
    long b = 10;
    long c = 100;
    long d = 1;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 471: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 471: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test472() {
    long a = 30;
    long b = 1;
    long c = 2;
    long d = 2;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 472: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 472: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test473() {
    long a = 432424;
    long b = 56;
    long c = 42;
    long d = 54;
    long upperBound = 432400;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 473: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 473: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test474() {
    long a = 17;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 16;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 474: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 474: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test475() {
    long a = 544;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 475: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 475: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test476() {
    long a = 1000;
    long b = 1;
    long c = 10;
    long d = 2;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 476: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 476: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test477() {
    long a = 10;
    long b = 10;
    long c = 1;
    long d = 1;
    long upperBound = 9;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 477: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 477: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test478() {
    long a = 1000;
    long b = 1;
    long c = 999;
    long d = 1;
    long upperBound = 100000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 99002;
    if(result == expected) {
        cout << "Test Case 478: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 478: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test479() {
    long a = 20;
    long b = 10;
    long c = 100;
    long d = 100;
    long upperBound = 19;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 479: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 479: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test480() {
    long a = 5;
    long b = 3;
    long c = 1;
    long d = 1;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 480: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 480: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test481() {
    long a = 10000;
    long b = 1;
    long c = 10000;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 481: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 481: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test482() {
    long a = 2;
    long b = 2;
    long c = 9;
    long d = 1;
    long upperBound = 8;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 482: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 482: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test483() {
    long a = 100;
    long b = 100;
    long c = 100;
    long d = 100;
    long upperBound = 99;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 483: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 483: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test484() {
    long a = 4;
    long b = 1;
    long c = 16;
    long d = 20;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 484: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 484: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test485() {
    long a = 11;
    long b = 20;
    long c = 100;
    long d = 2;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 485: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 485: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test486() {
    long a = 2;
    long b = 2;
    long c = 1;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000001;
    if(result == expected) {
        cout << "Test Case 486: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 486: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test487() {
    long a = 41;
    long b = 51;
    long c = 34;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 487: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 487: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test488() {
    long a = 10;
    long b = 1;
    long c = 9;
    long d = 1;
    long upperBound = 15;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 488: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 488: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test489() {
    long a = 100;
    long b = 10;
    long c = 10;
    long d = 2;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 95;
    if(result == expected) {
        cout << "Test Case 489: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 489: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test490() {
    long a = 1;
    long b = 3;
    long c = 1;
    long d = 3;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 333333333359;
    if(result == expected) {
        cout << "Test Case 490: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 490: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test491() {
    long a = 100;
    long b = 37;
    long c = 150;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 491: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 491: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test492() {
    long a = 10;
    long b = 3;
    long c = 1000;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 492: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 492: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test493() {
    long a = 11;
    long b = 5;
    long c = 15;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 493: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 493: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test494() {
    long a = 100000;
    long b = 2;
    long c = 20000;
    long d = 1;
    long upperBound = 10000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 494: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 494: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test495() {
    long a = 10;
    long b = 20;
    long c = 100000;
    long d = 1;
    long upperBound = 9999;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 500;
    if(result == expected) {
        cout << "Test Case 495: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 495: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test496() {
    long a = 6;
    long b = 4;
    long c = 3;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 496: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 496: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test497() {
    long a = 505;
    long b = 5;
    long c = 1;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 497: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 497: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test498() {
    long a = 10;
    long b = 13;
    long c = 200;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 498: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 498: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test499() {
    long a = 4;
    long b = 5;
    long c = 1;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 499: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 499: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test500() {
    long a = 11;
    long b = 11;
    long c = 11;
    long d = 11;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 500: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 500: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test501() {
    long a = 100;
    long b = 100;
    long c = 200;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 501: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 501: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test502() {
    long a = 100;
    long b = 7;
    long c = 52;
    long d = 1;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 502: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 502: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test503() {
    long a = 544;
    long b = 1;
    long c = 544;
    long d = 1;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 503: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 503: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test504() {
    long a = 1000000000000;
    long b = 1;
    long c = 10000;
    long d = 10000;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 504: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 504: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test505() {
    long a = 14605;
    long b = 3903;
    long c = 154;
    long d = 100000;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 256213168;
    if(result == expected) {
        cout << "Test Case 505: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 505: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test506() {
    long a = 2;
    long b = 3;
    long c = 3;
    long d = 1;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 506: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 506: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test507() {
    long a = 10;
    long b = 10;
    long c = 1000000000000;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 507: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 507: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test508() {
    long a = 200;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 100;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 508: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 508: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test509() {
    long a = 12;
    long b = 1;
    long c = 10;
    long d = 1;
    long upperBound = 9;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 509: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 509: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test510() {
    long a = 10;
    long b = 1;
    long c = 6;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 510: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 510: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test511() {
    long a = 10000;
    long b = 10000;
    long c = 100000;
    long d = 1;
    long upperBound = 10000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000;
    if(result == expected) {
        cout << "Test Case 511: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 511: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test512() {
    long a = 40;
    long b = 40;
    long c = 999;
    long d = 1;
    long upperBound = 60;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 512: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 512: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test513() {
    long a = 5;
    long b = 1;
    long c = 5;
    long d = 1;
    long upperBound = 7;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 513: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 513: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test514() {
    long a = 20;
    long b = 1;
    long c = 2;
    long d = 100;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 514: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 514: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test515() {
    long a = 4;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 4;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 515: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 515: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test516() {
    long a = 2;
    long b = 2;
    long c = 3;
    long d = 5;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 516: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 516: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test517() {
    long a = 900000000000;
    long b = 1;
    long c = 1;
    long d = 2;
    long upperBound = 800000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 517: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 517: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test518() {
    long a = 150;
    long b = 37;
    long c = 100;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 518: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 518: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test519() {
    long a = 1;
    long b = 2;
    long c = 2;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 519: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 519: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test520() {
    long a = 100;
    long b = 100;
    long c = 100;
    long d = 200;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 520: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 520: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test521() {
    long a = 757147;
    long b = 167851000;
    long c = 301413356;
    long d = 9;
    long upperBound = 791550396;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 521: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 521: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test522() {
    long a = 1;
    long b = 1;
    long c = 2;
    long d = 3;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 522: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 522: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test523() {
    long a = 7;
    long b = 1;
    long c = 3;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 523: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 523: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test524() {
    long a = 1000;
    long b = 1;
    long c = 5;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 524: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 524: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test525() {
    long a = 1000;
    long b = 5;
    long c = 2;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 525: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 525: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test526() {
    long a = 100;
    long b = 3;
    long c = 150;
    long d = 1;
    long upperBound = 50;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 526: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 526: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test527() {
    long a = 10;
    long b = 10;
    long c = 15;
    long d = 1;
    long upperBound = 10;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 527: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 527: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test528() {
    long a = 10;
    long b = 10;
    long c = 10;
    long d = 1;
    long upperBound = 9;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 528: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 528: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test529() {
    long a = 10;
    long b = 1;
    long c = 2;
    long d = 2;
    long upperBound = 1;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 529: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 529: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test530() {
    long a = 1000;
    long b = 1;
    long c = 1000;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 530: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 530: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test531() {
    long a = 10;
    long b = 10;
    long c = 1;
    long d = 1;
    long upperBound = 2;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 531: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 531: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test532() {
    long a = 1;
    long b = 2;
    long c = 4;
    long d = 1;
    long upperBound = 3;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 532: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 532: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test533() {
    long a = 1000;
    long b = 1000;
    long c = 1;
    long d = 1;
    long upperBound = 1000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 533: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 533: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test534() {
    long a = 1000000000000;
    long b = 1;
    long c = 1;
    long d = 1;
    long upperBound = 4;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 534: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 534: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test535() {
    long a = 100;
    long b = 2;
    long c = 101;
    long d = 1;
    long upperBound = 5;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 535: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 535: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test536() {
    long a = 1000000000000;
    long b = 1;
    long c = 100000000000;
    long d = 2;
    long upperBound = 1000000000000;
    CountingSeries* pObj = new CountingSeries();
    clock_t start = clock();
    long result = pObj->countThem(a, b, c, d, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 536: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 536: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    test291() == 0 ? ++passed : ++failed;
    test292() == 0 ? ++passed : ++failed;
    test293() == 0 ? ++passed : ++failed;
    test294() == 0 ? ++passed : ++failed;
    test295() == 0 ? ++passed : ++failed;
    test296() == 0 ? ++passed : ++failed;
    test297() == 0 ? ++passed : ++failed;
    test298() == 0 ? ++passed : ++failed;
    test299() == 0 ? ++passed : ++failed;
    test300() == 0 ? ++passed : ++failed;
    test301() == 0 ? ++passed : ++failed;
    test302() == 0 ? ++passed : ++failed;
    test303() == 0 ? ++passed : ++failed;
    test304() == 0 ? ++passed : ++failed;
    test305() == 0 ? ++passed : ++failed;
    test306() == 0 ? ++passed : ++failed;
    test307() == 0 ? ++passed : ++failed;
    test308() == 0 ? ++passed : ++failed;
    test309() == 0 ? ++passed : ++failed;
    test310() == 0 ? ++passed : ++failed;
    test311() == 0 ? ++passed : ++failed;
    test312() == 0 ? ++passed : ++failed;
    test313() == 0 ? ++passed : ++failed;
    test314() == 0 ? ++passed : ++failed;
    test315() == 0 ? ++passed : ++failed;
    test316() == 0 ? ++passed : ++failed;
    test317() == 0 ? ++passed : ++failed;
    test318() == 0 ? ++passed : ++failed;
    test319() == 0 ? ++passed : ++failed;
    test320() == 0 ? ++passed : ++failed;
    test321() == 0 ? ++passed : ++failed;
    test322() == 0 ? ++passed : ++failed;
    test323() == 0 ? ++passed : ++failed;
    test324() == 0 ? ++passed : ++failed;
    test325() == 0 ? ++passed : ++failed;
    test326() == 0 ? ++passed : ++failed;
    test327() == 0 ? ++passed : ++failed;
    test328() == 0 ? ++passed : ++failed;
    test329() == 0 ? ++passed : ++failed;
    test330() == 0 ? ++passed : ++failed;
    test331() == 0 ? ++passed : ++failed;
    test332() == 0 ? ++passed : ++failed;
    test333() == 0 ? ++passed : ++failed;
    test334() == 0 ? ++passed : ++failed;
    test335() == 0 ? ++passed : ++failed;
    test336() == 0 ? ++passed : ++failed;
    test337() == 0 ? ++passed : ++failed;
    test338() == 0 ? ++passed : ++failed;
    test339() == 0 ? ++passed : ++failed;
    test340() == 0 ? ++passed : ++failed;
    test341() == 0 ? ++passed : ++failed;
    test342() == 0 ? ++passed : ++failed;
    test343() == 0 ? ++passed : ++failed;
    test344() == 0 ? ++passed : ++failed;
    test345() == 0 ? ++passed : ++failed;
    test346() == 0 ? ++passed : ++failed;
    test347() == 0 ? ++passed : ++failed;
    test348() == 0 ? ++passed : ++failed;
    test349() == 0 ? ++passed : ++failed;
    test350() == 0 ? ++passed : ++failed;
    test351() == 0 ? ++passed : ++failed;
    test352() == 0 ? ++passed : ++failed;
    test353() == 0 ? ++passed : ++failed;
    test354() == 0 ? ++passed : ++failed;
    test355() == 0 ? ++passed : ++failed;
    test356() == 0 ? ++passed : ++failed;
    test357() == 0 ? ++passed : ++failed;
    test358() == 0 ? ++passed : ++failed;
    test359() == 0 ? ++passed : ++failed;
    test360() == 0 ? ++passed : ++failed;
    test361() == 0 ? ++passed : ++failed;
    test362() == 0 ? ++passed : ++failed;
    test363() == 0 ? ++passed : ++failed;
    test364() == 0 ? ++passed : ++failed;
    test365() == 0 ? ++passed : ++failed;
    test366() == 0 ? ++passed : ++failed;
    test367() == 0 ? ++passed : ++failed;
    test368() == 0 ? ++passed : ++failed;
    test369() == 0 ? ++passed : ++failed;
    test370() == 0 ? ++passed : ++failed;
    test371() == 0 ? ++passed : ++failed;
    test372() == 0 ? ++passed : ++failed;
    test373() == 0 ? ++passed : ++failed;
    test374() == 0 ? ++passed : ++failed;
    test375() == 0 ? ++passed : ++failed;
    test376() == 0 ? ++passed : ++failed;
    test377() == 0 ? ++passed : ++failed;
    test378() == 0 ? ++passed : ++failed;
    test379() == 0 ? ++passed : ++failed;
    test380() == 0 ? ++passed : ++failed;
    test381() == 0 ? ++passed : ++failed;
    test382() == 0 ? ++passed : ++failed;
    test383() == 0 ? ++passed : ++failed;
    test384() == 0 ? ++passed : ++failed;
    test385() == 0 ? ++passed : ++failed;
    test386() == 0 ? ++passed : ++failed;
    test387() == 0 ? ++passed : ++failed;
    test388() == 0 ? ++passed : ++failed;
    test389() == 0 ? ++passed : ++failed;
    test390() == 0 ? ++passed : ++failed;
    test391() == 0 ? ++passed : ++failed;
    test392() == 0 ? ++passed : ++failed;
    test393() == 0 ? ++passed : ++failed;
    test394() == 0 ? ++passed : ++failed;
    test395() == 0 ? ++passed : ++failed;
    test396() == 0 ? ++passed : ++failed;
    test397() == 0 ? ++passed : ++failed;
    test398() == 0 ? ++passed : ++failed;
    test399() == 0 ? ++passed : ++failed;
    test400() == 0 ? ++passed : ++failed;
    test401() == 0 ? ++passed : ++failed;
    test402() == 0 ? ++passed : ++failed;
    test403() == 0 ? ++passed : ++failed;
    test404() == 0 ? ++passed : ++failed;
    test405() == 0 ? ++passed : ++failed;
    test406() == 0 ? ++passed : ++failed;
    test407() == 0 ? ++passed : ++failed;
    test408() == 0 ? ++passed : ++failed;
    test409() == 0 ? ++passed : ++failed;
    test410() == 0 ? ++passed : ++failed;
    test411() == 0 ? ++passed : ++failed;
    test412() == 0 ? ++passed : ++failed;
    test413() == 0 ? ++passed : ++failed;
    test414() == 0 ? ++passed : ++failed;
    test415() == 0 ? ++passed : ++failed;
    test416() == 0 ? ++passed : ++failed;
    test417() == 0 ? ++passed : ++failed;
    test418() == 0 ? ++passed : ++failed;
    test419() == 0 ? ++passed : ++failed;
    test420() == 0 ? ++passed : ++failed;
    test421() == 0 ? ++passed : ++failed;
    test422() == 0 ? ++passed : ++failed;
    test423() == 0 ? ++passed : ++failed;
    test424() == 0 ? ++passed : ++failed;
    test425() == 0 ? ++passed : ++failed;
    test426() == 0 ? ++passed : ++failed;
    test427() == 0 ? ++passed : ++failed;
    test428() == 0 ? ++passed : ++failed;
    test429() == 0 ? ++passed : ++failed;
    test430() == 0 ? ++passed : ++failed;
    test431() == 0 ? ++passed : ++failed;
    test432() == 0 ? ++passed : ++failed;
    test433() == 0 ? ++passed : ++failed;
    test434() == 0 ? ++passed : ++failed;
    test435() == 0 ? ++passed : ++failed;
    test436() == 0 ? ++passed : ++failed;
    test437() == 0 ? ++passed : ++failed;
    test438() == 0 ? ++passed : ++failed;
    test439() == 0 ? ++passed : ++failed;
    test440() == 0 ? ++passed : ++failed;
    test441() == 0 ? ++passed : ++failed;
    test442() == 0 ? ++passed : ++failed;
    test443() == 0 ? ++passed : ++failed;
    test444() == 0 ? ++passed : ++failed;
    test445() == 0 ? ++passed : ++failed;
    test446() == 0 ? ++passed : ++failed;
    test447() == 0 ? ++passed : ++failed;
    test448() == 0 ? ++passed : ++failed;
    test449() == 0 ? ++passed : ++failed;
    test450() == 0 ? ++passed : ++failed;
    test451() == 0 ? ++passed : ++failed;
    test452() == 0 ? ++passed : ++failed;
    test453() == 0 ? ++passed : ++failed;
    test454() == 0 ? ++passed : ++failed;
    test455() == 0 ? ++passed : ++failed;
    test456() == 0 ? ++passed : ++failed;
    test457() == 0 ? ++passed : ++failed;
    test458() == 0 ? ++passed : ++failed;
    test459() == 0 ? ++passed : ++failed;
    test460() == 0 ? ++passed : ++failed;
    test461() == 0 ? ++passed : ++failed;
    test462() == 0 ? ++passed : ++failed;
    test463() == 0 ? ++passed : ++failed;
    test464() == 0 ? ++passed : ++failed;
    test465() == 0 ? ++passed : ++failed;
    test466() == 0 ? ++passed : ++failed;
    test467() == 0 ? ++passed : ++failed;
    test468() == 0 ? ++passed : ++failed;
    test469() == 0 ? ++passed : ++failed;
    test470() == 0 ? ++passed : ++failed;
    test471() == 0 ? ++passed : ++failed;
    test472() == 0 ? ++passed : ++failed;
    test473() == 0 ? ++passed : ++failed;
    test474() == 0 ? ++passed : ++failed;
    test475() == 0 ? ++passed : ++failed;
    test476() == 0 ? ++passed : ++failed;
    test477() == 0 ? ++passed : ++failed;
    test478() == 0 ? ++passed : ++failed;
    test479() == 0 ? ++passed : ++failed;
    test480() == 0 ? ++passed : ++failed;
    test481() == 0 ? ++passed : ++failed;
    test482() == 0 ? ++passed : ++failed;
    test483() == 0 ? ++passed : ++failed;
    test484() == 0 ? ++passed : ++failed;
    test485() == 0 ? ++passed : ++failed;
    test486() == 0 ? ++passed : ++failed;
    test487() == 0 ? ++passed : ++failed;
    test488() == 0 ? ++passed : ++failed;
    test489() == 0 ? ++passed : ++failed;
    test490() == 0 ? ++passed : ++failed;
    test491() == 0 ? ++passed : ++failed;
    test492() == 0 ? ++passed : ++failed;
    test493() == 0 ? ++passed : ++failed;
    test494() == 0 ? ++passed : ++failed;
    test495() == 0 ? ++passed : ++failed;
    test496() == 0 ? ++passed : ++failed;
    test497() == 0 ? ++passed : ++failed;
    test498() == 0 ? ++passed : ++failed;
    test499() == 0 ? ++passed : ++failed;
    test500() == 0 ? ++passed : ++failed;
    test501() == 0 ? ++passed : ++failed;
    test502() == 0 ? ++passed : ++failed;
    test503() == 0 ? ++passed : ++failed;
    test504() == 0 ? ++passed : ++failed;
    test505() == 0 ? ++passed : ++failed;
    test506() == 0 ? ++passed : ++failed;
    test507() == 0 ? ++passed : ++failed;
    test508() == 0 ? ++passed : ++failed;
    test509() == 0 ? ++passed : ++failed;
    test510() == 0 ? ++passed : ++failed;
    test511() == 0 ? ++passed : ++failed;
    test512() == 0 ? ++passed : ++failed;
    test513() == 0 ? ++passed : ++failed;
    test514() == 0 ? ++passed : ++failed;
    test515() == 0 ? ++passed : ++failed;
    test516() == 0 ? ++passed : ++failed;
    test517() == 0 ? ++passed : ++failed;
    test518() == 0 ? ++passed : ++failed;
    test519() == 0 ? ++passed : ++failed;
    test520() == 0 ? ++passed : ++failed;
    test521() == 0 ? ++passed : ++failed;
    test522() == 0 ? ++passed : ++failed;
    test523() == 0 ? ++passed : ++failed;
    test524() == 0 ? ++passed : ++failed;
    test525() == 0 ? ++passed : ++failed;
    test526() == 0 ? ++passed : ++failed;
    test527() == 0 ? ++passed : ++failed;
    test528() == 0 ? ++passed : ++failed;
    test529() == 0 ? ++passed : ++failed;
    test530() == 0 ? ++passed : ++failed;
    test531() == 0 ? ++passed : ++failed;
    test532() == 0 ? ++passed : ++failed;
    test533() == 0 ? ++passed : ++failed;
    test534() == 0 ? ++passed : ++failed;
    test535() == 0 ? ++passed : ++failed;
    test536() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22708061&rd=14548&pm=10957
********************************************************************************
#include <cstdio> 
#include <vector> 
#include <string> 
#include <cassert> 
#include <climits> 
#include <cstring> 
#include <utility> 
#include <queue> 
#include <stack> 
#include <map> 
#include <set> 
#include <algorithm> 
using namespace std; 
 
#ifdef mahou_shoujo_madoka 
    #define LLF "%I64d" 
    #define ASSERT(x) assert(x) 
#else 
    #define LLF "%lld" 
    #define ASSERT(x) 
#endif 
 
typedef long long LL; 
typedef pair<int,int> PII; 
 
class CountingSeries{ 
public: 
    long long countThem(long long a, long long b, long long c, long long d, long long hi){ 
        long long ret=0; 
        if(hi>=a) ret=(hi-a)/b+1; 
        for(long long x=c;x<=hi;x*=d){ 
            if(x<a || (x-a)%b) ret++; 
            if(d==1) break; 
        } 
        return ret; 
    } 
};

********************************************************************************
*******************************************************************************/