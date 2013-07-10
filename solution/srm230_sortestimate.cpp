/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3561
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

class SortEstimate {
public:
    double howMany(int c, int time);
};

double SortEstimate::howMany(int c, int time) {
    double ret;
    return ret;
}


int test0() {
    int c = 1;
    int time = 8;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int c = 1;
    int time = 1073741824;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4.237868701779632E7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int c = 1;
    int time = 20971520;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1048576.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int c = 1;
    int time = 1744830463;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 6.7108863963560425E7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int c = 2;
    int time = 16;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int c = 37;
    int time = 12392342;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 23104.999312341137;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int c = 1;
    int time = 2000000000;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7.637495090348122E7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int c = 15;
    int time = 183518033;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 634711.5366691528;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int c = 94;
    int time = 528002855;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 308072.16281298193;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int c = 22;
    int time = 1891962415;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 3926030.802208677;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int c = 19;
    int time = 21449736;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 70129.92471231497;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int c = 41;
    int time = 251000508;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 333658.1565933969;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int c = 41;
    int time = 682091086;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 844976.7106648742;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int c = 15;
    int time = 324891869;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1080626.000222133;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int c = 100;
    int time = 269939035;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 156438.87972686428;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int c = 65;
    int time = 150597632;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 135872.67212630875;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int c = 82;
    int time = 1668460444;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1019427.0794480281;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int c = 94;
    int time = 698125302;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 399152.58894443273;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int c = 73;
    int time = 537393400;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 395894.080674982;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int c = 61;
    int time = 952343733;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 796412.1957200351;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int c = 62;
    int time = 1668728800;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1323517.520513234;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int c = 67;
    int time = 1422724322;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1060844.4313069163;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int c = 50;
    int time = 1302510048;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1283769.883887477;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int c = 72;
    int time = 1240983207;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 873315.4015855292;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int c = 61;
    int time = 1668868721;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1343872.2486778102;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int c = 70;
    int time = 672611577;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 507012.8623876511;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int c = 41;
    int time = 844981191;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1031674.1952518377;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int c = 69;
    int time = 346799919;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 277924.8297328659;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int c = 96;
    int time = 1650394599;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 871225.0564874781;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int c = 41;
    int time = 800275356;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 980681.0457517206;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int c = 47;
    int time = 1751439252;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1793764.4273233637;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int c = 72;
    int time = 1034087829;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 736868.1134626163;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int c = 65;
    int time = 1405206580;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1078722.5591509202;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int c = 97;
    int time = 698397013;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 387824.0070168886;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int c = 45;
    int time = 1345840599;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1460472.8429022175;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int c = 92;
    int time = 1248825953;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 699151.35947252;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int c = 22;
    int time = 1200654528;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 2563460.5078692725;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int c = 1;
    int time = 1999999999;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7.637495086728776E7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int c = 1;
    int time = 2000000000;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7.637495090348122E7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int c = 2;
    int time = 1999999997;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 3.962007767021034E7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int c = 1;
    int time = 1;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5596104694623691;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int c = 43;
    int time = 2000000000;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 2207091.972283502;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int c = 100;
    int time = 1;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0069076686081029;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int c = 1;
    int time = 3;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3884234844993384;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int c = 100;
    int time = 2523526;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 2264.2982128022004;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int c = 5;
    int time = 100;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 7.081840920218569;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int c = 1;
    int time = 2;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int c = 2;
    int time = 2000000000;
    SortEstimate* pObj = new SortEstimate();
    clock_t start = clock();
    double result = pObj->howMany(c, time);
    clock_t end = clock();
    delete pObj;
    double expected = 3.962007772642713E7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=6519&pm=3561
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
class SortEstimate { 
public: 
double howMany(int c, int time) { 
  int i, j, k, x, y, z, n; 
  double ret; 
  double lo = 0, hi = 1e20; 
 
  for( i = 0; i < 500; i++ ) { 
    ret = (hi+lo)/2; 
    if( ret*log(ret)/log(2.0)*c <= time ) lo = ret; else hi = ret; 
  } 
  ret = (hi+lo)/2; 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/