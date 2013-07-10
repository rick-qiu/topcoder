/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11073
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

class BestApproximationDiv2 {
public:
    string findFraction(int maxDen, string number);
};

string BestApproximationDiv2::findFraction(int maxDen, string number) {
    string ret;
    return ret;
}


int test0() {
    int maxDen = 42;
    string number = "0.141592658";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/7 has 3 exact digits";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int maxDen = 3;
    string number = "0.1337";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 1 exact digits";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int maxDen = 80000;
    string number = "0.1234567891011121314151617181920";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/81 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int maxDen = 1000;
    string number = "0.42";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3/7 has 3 exact digits";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int maxDen = 100;
    string number = "0.420";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "21/50 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int maxDen = 115;
    string number = "0.141592658";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "16/113 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int maxDen = 512;
    string number = "0.000000000000";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 13 exact digits";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int maxDen = 1000;
    string number = "0.272727272727272727272727272727272727272727272727";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3/11 has 49 exact digits";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int maxDen = 100000;
    string number = "0.99979980180378574789041150739232438957325345";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "99881/99901 has 32 exact digits";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int maxDen = 99999;
    string number = "0.00001";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/50001 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int maxDen = 100000;
    string number = "0.00001";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/50001 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int maxDen = 100000;
    string number = "0.999999999999";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "99999/100000 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int maxDen = 100000;
    string number = "0.000099999999999999999999999999999999999999999999";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/10001 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int maxDen = 100000;
    string number = "0.000009999999999999999999999999999999999999999999";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int maxDen = 9172;
    string number = "0.618927954312334";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "739/1194 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int maxDen = 13016;
    string number = "0.13893446066184";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1609/11581 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int maxDen = 98926;
    string number = "0.165754120014607177";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "5873/35432 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int maxDen = 38912;
    string number = "0.6406189841439880877";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "8321/12989 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int maxDen = 35131;
    string number = "0.74380880681";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "19763/26570 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int maxDen = 17422;
    string number = "0.618211976295";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7081/11454 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int maxDen = 58425;
    string number = "0.4912508393967997693576658254416163355328253";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10977/22345 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int maxDen = 38467;
    string number = "0.75812574444429307787303825";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "27360/36089 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int maxDen = 57549;
    string number = "0.05310675004549564821683148492070607056";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1847/34779 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int maxDen = 29588;
    string number = "0.11173004830129";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1043/9335 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int maxDen = 96723;
    string number = "0.0356667677191627276513995926532444279237";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1528/42841 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int maxDen = 75536;
    string number = "0.65281031552217482363035280722591085079053";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "33717/51649 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int maxDen = 43779;
    string number = "0.32412908745";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7583/23395 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int maxDen = 89529;
    string number = "0.481435526892959";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "30653/63670 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int maxDen = 8171;
    string number = "0.9182801848609300876356583948397";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3225/3512 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int maxDen = 48997;
    string number = "0.566144626825510151760";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "22485/39716 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int maxDen = 25785;
    string number = "0.39219823402319898913514253892870148193597980";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6505/16586 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int maxDen = 24510;
    string number = "0.81033848015413735856908936069789415666667";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4405/5436 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int maxDen = 55122;
    string number = "0.603624588121";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10625/17602 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int maxDen = 27491;
    string number = "0.20892820552767878160958900072552148646";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4039/19332 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int maxDen = 80251;
    string number = "0.64419557473408815232466629049311995556059";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "11792/18305 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int maxDen = 70197;
    string number = "0.4212779554034122982278583944";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6593/15650 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int maxDen = 19371;
    string number = "0.4679347881638";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "861/1840 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int maxDen = 55854;
    string number = "0.2012770241037395972028670818303620284183";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7597/37744 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int maxDen = 79772;
    string number = "0.972282944827258473";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "23573/24245 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int maxDen = 76080;
    string number = "0.0407590512098917330";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2193/53804 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int maxDen = 87842;
    string number = "0.62214326054";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7704/12383 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int maxDen = 52802;
    string number = "0.8639453823948513281646779641926315970261762";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "29991/34714 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int maxDen = 80980;
    string number = "0.0117591817";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "576/48983 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int maxDen = 19897;
    string number = "0.5649843253832706801195363153403179035291261701";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "5586/9887 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int maxDen = 47434;
    string number = "0.8780956900135580177467074121835714";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "36981/42115 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int maxDen = 47730;
    string number = "0.126633008138";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2433/19213 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int maxDen = 27110;
    string number = "0.5206728006";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "5541/10642 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int maxDen = 17827;
    string number = "0.8887400599530995111233972330484392490574";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10616/11945 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int maxDen = 7402;
    string number = "0.1577941785788";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "578/3663 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int maxDen = 8517;
    string number = "0.92842758409443584103340675";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "5993/6455 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int maxDen = 48298;
    string number = "0.37658789771650132605744906119042197093331356959";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2757/7321 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int maxDen = 32413;
    string number = "0.025607209543256088157579";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "233/9099 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int maxDen = 68919;
    string number = "0.21335290485733030321108187289230282558124988271";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "9884/46327 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int maxDen = 98584;
    string number = "0.7198832933283402012";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "33309/46270 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int maxDen = 99238;
    string number = "0.929130819202475810071693037304323";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "40931/44053 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int maxDen = 93370;
    string number = "0.794980018508928085147361680865710283556";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "17705/22271 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int maxDen = 15278;
    string number = "0.14145763463";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1314/9289 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int maxDen = 81395;
    string number = "0.6200651619735006518272452258698";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "21125/34069 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int maxDen = 25240;
    string number = "0.7852729763159895495252230872837541829689";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6228/7931 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int maxDen = 69275;
    string number = "0.4352915567902319878";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "17998/41347 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int maxDen = 98617;
    string number = "0.0286814764987386280980";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2018/70359 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int maxDen = 98083;
    string number = "0.201038733145612191804774119810";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "14206/70663 has 12 exact digits";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int maxDen = 57270;
    string number = "0.32978011";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6404/19419 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int maxDen = 24763;
    string number = "0.3091876840379622730730736467401244";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1336/4321 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int maxDen = 4907;
    string number = "0.0395711003318866479448557569568547357671687";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "155/3917 has 44 exact digits";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int maxDen = 41477;
    string number = "0.97424025591379745769845946628504082835";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "11573/11879 has 39 exact digits";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int maxDen = 11910;
    string number = "0.6210866057019903";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "5773/9295 has 17 exact digits";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int maxDen = 27441;
    string number = "0.6524317912218268";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "550/843 has 17 exact digits";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int maxDen = 44336;
    string number = "0.96422494125273478648407";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "23799/24682 has 24 exact digits";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int maxDen = 57214;
    string number = "0.894353369763205828";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "491/549 has 19 exact digits";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int maxDen = 33476;
    string number = "0.21199119911991199119911991199119";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1927/9090 has 33 exact digits";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int maxDen = 79581;
    string number = "0.9109475267087478799111748352013428686331765";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "52098/57191 has 44 exact digits";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int maxDen = 73372;
    string number = "0.2176248108925869894";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2877/13220 has 20 exact digits";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int maxDen = 53660;
    string number = "0.62094155844155844155844155844155";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "765/1232 has 33 exact digits";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int maxDen = 21494;
    string number = "0.686157117278424350940017905";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "12263/17872 has 28 exact digits";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int maxDen = 87056;
    string number = "0.47009345794392";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "503/1070 has 15 exact digits";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int maxDen = 74811;
    string number = "0.3210181580848931260343581";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "13772/42901 has 26 exact digits";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int maxDen = 44372;
    string number = "0.5918419052444894";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2336/3947 has 17 exact digits";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int maxDen = 3415;
    string number = "0.1873767258382642998027613412228796844181459";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "95/507 has 44 exact digits";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int maxDen = 94278;
    string number = "0.33965632";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1522/4481 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int maxDen = 59923;
    string number = "0.13319661071833342328242214906";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2468/18529 has 30 exact digits";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int maxDen = 34618;
    string number = "0.936594202898550724637681";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "517/552 has 25 exact digits";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int maxDen = 82162;
    string number = "0.567176560374290738958755";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "17093/30137 has 25 exact digits";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int maxDen = 63217;
    string number = "0.2695081967213";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "411/1525 has 14 exact digits";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int maxDen = 24689;
    string number = "0.5195467183418";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "12333/23738 has 14 exact digits";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int maxDen = 79173;
    string number = "0.98250056342882899603611247365141652636184062255";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "74111/75431 has 48 exact digits";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int maxDen = 70587;
    string number = "0.59505530253741054001301236174365647364996";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4573/7685 has 42 exact digits";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int maxDen = 13180;
    string number = "0.73997821350762527233115468409586056";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6793/9180 has 36 exact digits";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int maxDen = 36081;
    string number = "0.0752759675488761803431";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "566/7519 has 23 exact digits";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int maxDen = 50188;
    string number = "0.7273240105697";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "24497/33681 has 14 exact digits";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int maxDen = 27875;
    string number = "0.798645013450234133705290425425924080";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "8016/10037 has 37 exact digits";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int maxDen = 65469;
    string number = "0.704744525547445255474452554744525547445";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1931/2740 has 40 exact digits";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int maxDen = 12099;
    string number = "0.3366159355416293643688451208594449";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "376/1117 has 35 exact digits";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int maxDen = 27810;
    string number = "0.8070713809206137424949966644429619746497665110";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6049/7495 has 47 exact digits";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int maxDen = 55554;
    string number = "0.398797734459154244414329";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "11477/28779 has 25 exact digits";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int maxDen = 76250;
    string number = "0.900650075";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "13716/15229 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int maxDen = 6732;
    string number = "0.705340699815837937384898710865561694290";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "383/543 has 40 exact digits";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int maxDen = 51863;
    string number = "0.259480696";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1519/5854 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int maxDen = 37241;
    string number = "0.13618587531631009";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "592/4347 has 18 exact digits";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int maxDen = 68961;
    string number = "0.5211327272134780200084726431";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "15992/30687 has 29 exact digits";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int maxDen = 90254;
    string number = "0.318529141071466792";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "14882/46721 has 19 exact digits";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int maxDen = 80270;
    string number = "0.4997191565588329057428688537033382417682510";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "32918/65873 has 44 exact digits";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int maxDen = 24828;
    string number = "0.65424979817783415984";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "5673/8671 has 21 exact digits";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int maxDen = 90368;
    string number = "0.77611137172659289";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "56251/72478 has 18 exact digits";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int maxDen = 99977;
    string number = "0.00058286134235501324108919045627906387400058";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "46/78921 has 45 exact digits";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int maxDen = 78041;
    string number = "0.58433079434167573449401523394994";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "537/919 has 33 exact digits";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int maxDen = 52549;
    string number = "0.82138526826311003334";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10839/13196 has 21 exact digits";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int maxDen = 8726;
    string number = "0.10144927536231884057971014492";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7/69 has 30 exact digits";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int maxDen = 55255;
    string number = "0.0355531971345184399044839479";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "134/3769 has 29 exact digits";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int maxDen = 87473;
    string number = "0.4873304782298358315488936473";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2731/5604 has 29 exact digits";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int maxDen = 81767;
    string number = "0.30067047016199558572439928372";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7220/24013 has 30 exact digits";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int maxDen = 27640;
    string number = "0.427052785923753665689149560117302052785923";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1165/2728 has 43 exact digits";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int maxDen = 87295;
    string number = "0.9467016605259173270075203149447332559430676828";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "18757/19813 has 47 exact digits";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int maxDen = 48498;
    string number = "0.32833353017597731372741";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2780/8467 has 17 exact digits";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int maxDen = 44559;
    string number = "0.19457615637700793497193728436810528353009483259";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "8043/41336 has 26 exact digits";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int maxDen = 12575;
    string number = "0.46418402205844323765192655805534005689164";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1957/4216 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int maxDen = 81449;
    string number = "0.30790927253496298037372194137373369373";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2620/8509 has 28 exact digits";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int maxDen = 4675;
    string number = "0.182266009852216748768472906403940886699507379";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "37/203 has 44 exact digits";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int maxDen = 71759;
    string number = "0.570346996695";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "27647/48474 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int maxDen = 36635;
    string number = "0.646241124";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "17201/26617 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int maxDen = 93850;
    string number = "0.0457983771145647091184146237106312749277";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "333/7271 has 24 exact digits";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int maxDen = 88064;
    string number = "0.841890367989215672566734500771";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "64951/77149 has 18 exact digits";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int maxDen = 53299;
    string number = "0.223230876432331990328";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "11533/51664 has 18 exact digits";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int maxDen = 42727;
    string number = "0.4131731821";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "5263/12738 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int maxDen = 84127;
    string number = "0.040621714962";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "541/13318 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int maxDen = 29247;
    string number = "0.330873644893867998815705566183838935957";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3632/10977 has 15 exact digits";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int maxDen = 54200;
    string number = "0.638610885171694309853139654135870";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "18058/28277 has 20 exact digits";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int maxDen = 80581;
    string number = "0.5212874312487268282735976777347728661641882";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2559/4909 has 21 exact digits";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int maxDen = 2758;
    string number = "0.792682926829268292682926829268292672";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "65/82 has 35 exact digits";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int maxDen = 65085;
    string number = "0.800731780299764919996966709638280";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "45082/56301 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int maxDen = 12588;
    string number = "0.473855030652722683014785430941208896501";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1314/2773 has 32 exact digits";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int maxDen = 45023;
    string number = "0.341266512895785279932899969031243447263577269";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3255/9538 has 26 exact digits";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int maxDen = 43846;
    string number = "0.410276438760452533202164289227742252";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "12081/29446 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int maxDen = 67667;
    string number = "0.587024377166274104287547155358855209590011";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "30655/52221 has 31 exact digits";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int maxDen = 89397;
    string number = "0.628603032077558722102834478495";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "9661/15369 has 22 exact digits";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int maxDen = 87516;
    string number = "0.448562084533077387935018307205473922007749457";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "25237/56262 has 31 exact digits";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int maxDen = 7378;
    string number = "0.819248826291069812206";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "349/426 has 14 exact digits";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int maxDen = 21726;
    string number = "0.2888446215039442231075697";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "145/502 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int maxDen = 52943;
    string number = "0.9705317114420243433696348494554772581";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1515/1561 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int maxDen = 87474;
    string number = "0.61636409480584972264246081780131114";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4889/7932 has 25 exact digits";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int maxDen = 7312;
    string number = "0.35064578180818906292937610225336630942";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1276/3639 has 25 exact digits";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int maxDen = 13885;
    string number = "0.7087496438021";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7590/10709 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int maxDen = 63781;
    string number = "0.092734733756717147044455300";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1921/20715 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int maxDen = 81871;
    string number = "0.594873150105708245233";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2251/3784 has 20 exact digits";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int maxDen = 3102;
    string number = "0.7668918918908";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "227/296 has 12 exact digits";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int maxDen = 26880;
    string number = "0.6339525000520878548485111554822467228";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6621/10444 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int maxDen = 94216;
    string number = "0.3979401507393479847538723542291";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4907/12331 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int maxDen = 44801;
    string number = "0.45505778966472432449135543031808195";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4764/10469 has 16 exact digits";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int maxDen = 48301;
    string number = "0.885265903736115775930663076405250";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "21041/23768 has 17 exact digits";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int maxDen = 44169;
    string number = "0.949226755";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10189/10734 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int maxDen = 31197;
    string number = "0.9353734217847206";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4371/4673 has 16 exact digits";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int maxDen = 69996;
    string number = "0.91565106743955888590404251378481549554644422";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "32382/35365 has 22 exact digits";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int maxDen = 85587;
    string number = "0.20299298519085869056897895";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6511/32075 has 13 exact digits";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int maxDen = 4029;
    string number = "0.59782607695652173913043";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "55/92 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int maxDen = 3440;
    string number = "0.575727676269018253576714356191415885545140601";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1167/2027 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int maxDen = 31867;
    string number = "0.94760857842120545898531";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "22844/24107 has 20 exact digits";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int maxDen = 41800;
    string number = "0.92095996718060920994153";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "26939/29251 has 23 exact digits";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int maxDen = 10960;
    string number = "0.6936538056082648113007644317942230655703141471";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3290/4743 has 22 exact digits";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int maxDen = 94241;
    string number = "0.42815716437043398075";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "34402/80349 has 18 exact digits";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int maxDen = 31956;
    string number = "0.1376730165619154508043396932285821";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3183/23120 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int maxDen = 71539;
    string number = "0.960522386886894752557715577884";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "61119/63631 has 27 exact digits";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int maxDen = 25651;
    string number = "0.4440343262971";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4812/10837 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int maxDen = 60924;
    string number = "0.4876482624390730780344850531499010197461447607";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "29314/60113 has 18 exact digits";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int maxDen = 100;
    string number = "0.909";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/11 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int maxDen = 99991;
    string number = "0.999979998599901993139519766383646855279869590871";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "49995/49996 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int maxDen = 100000;
    string number = "0.314159265358979323846264338327950288419716939937";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "71/226 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int maxDen = 45234;
    string number = "0.2341235423123234234";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4859/20754 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int maxDen = 97567;
    string number = "0.6876098797632487238476328437629876";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "23858/34697 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int maxDen = 99999;
    string number = "0.599067439767013706591197847890228232979542625952";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "17473/29167 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int maxDen = 100000;
    string number = "0.4200";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "21/50 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int maxDen = 100000;
    string number = "0.0000000083458734652746";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int maxDen = 10000;
    string number = "0.98493849148959862134119850850968234150985123095";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4643/4714 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int maxDen = 100000;
    string number = "0.43489090314967484371609146097601981960471390493";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4365/10037 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int maxDen = 100000;
    string number = "0.141592658";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4783/33780 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int maxDen = 99999;
    string number = "0.1234567899998777776666666666";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/81 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int maxDen = 98;
    string number = "0.1337";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2/15 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int maxDen = 7;
    string number = "0.141592658";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/7 has 3 exact digits";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int maxDen = 100000;
    string number = "0.448305799387298197748392834724989823468";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "18073/40314 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int maxDen = 100000;
    string number = "0.123456789";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/81 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int maxDen = 100000;
    string number = "0.141592658979323846264338326950288419716931418591";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4783/33780 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int maxDen = 100;
    string number = "0.0000000067860687";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 9 exact digits";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int maxDen = 89329;
    string number = "0.10290340007656086753";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6089/59172 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int maxDen = 97567;
    string number = "0.68760987976324872398757832998476328437629876";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "23858/34697 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int maxDen = 100000;
    string number = "0.222222222222222222222222222222222222222222222222";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2/9 has 49 exact digits";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int maxDen = 100000;
    string number = "0.123456789123456789123456789123456789";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/81 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int maxDen = 100000;
    string number = "0.123213213213123123345435354";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4103/33300 has 13 exact digits";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int maxDen = 100000;
    string number = "0.4567876545678765456787652345687906758495";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "13705/30003 has 25 exact digits";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int maxDen = 20;
    string number = "0.333333333333333333333333333333333333333333333333";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/3 has 49 exact digits";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int maxDen = 100000;
    string number = "0.254654864646546784321346546546546456";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "21117/82924 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int maxDen = 99999;
    string number = "0.45689894566568897312323156448897897895";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "6583/14408 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int maxDen = 100000;
    string number = "0.12345678910111213134343434151617181920";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/81 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int maxDen = 99999;
    string number = "0.123637461672645389056432785432123456783929239596";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "12284/99355 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int maxDen = 100000;
    string number = "0.197367625619736762561973676256197367625677";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "9792/49613 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int maxDen = 100000;
    string number = "0.000000000000000000000000000000000000000000000001";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 48 exact digits";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int maxDen = 100000;
    string number = "0.032794242021506118715156117852149748865146624782";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1900/57937 has 49 exact digits";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int maxDen = 100000;
    string number = "0.948576017495810295639485064104982057391749059938";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "33074/34867 has 11 exact digits";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int maxDen = 100;
    string number = "0.0";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 2 exact digits";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int maxDen = 100000;
    string number = "0.1234567891234567899876543223456789765213567";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/81 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int maxDen = 100000;
    string number = "0.784829027240752875472985719875981759187985719869";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "5256/6697 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int maxDen = 100000;
    string number = "0.618726487192648172648716348971648761284361183643";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "22203/35885 has 10 exact digits";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int maxDen = 99999;
    string number = "0.123456789012345678901234567890123456000";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/81 has 8 exact digits";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int maxDen = 100000;
    string number = "0.123451234512345123451234512345123451234512345123";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4115/33333 has 49 exact digits";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int maxDen = 99999;
    string number = "0.98765987659876598765987659876599";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "98765/99999 has 32 exact digits";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int maxDen = 100000;
    string number = "0.999999999999999999999999999999999999999999999999";
    BestApproximationDiv2* pObj = new BestApproximationDiv2();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "99999/100000 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22887607&rd=14236&pm=11073
********************************************************************************
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
#include <queue> 
#include <cstring> 
using namespace std; 
char str[100000];
class BestApproximationDiv2 {
  public:
    string findFraction(int maxDen, string number) {
      int rA = -1, rB = -1, rF = -1, len = (int)number.length()-2;
      for (int i = 1 ; i <= maxDen; ++i){
        int L = 0, R = i-1;
        while (L <= R){
          int M = (L+R)/2;
          string s = "0.";  
          int A = M, B = i;
          int diff = 0;
          int F = 0;
          for (int j = 0 ; j < len; ++j){
            A *= 10;
            int D = A/B;
            A -= D*B;
            if (!diff && number[j+2] == '0'+D) ++F;
            if (!diff) if (number[j+2] > '0'+D) diff = -1;
            else if (number[j+2] < '0'+D) diff = 1;
            //s = s + char(D+'0');
          }
          //for (int j = 2; j < len+2 && s[j]==number[j]; ++j, ++F);
          if (F > rF){
            //printf("%s --> %s\n", number.c_str(), s.c_str());
            rF = F;
            rA = M, rB = i;
          }
          if (!diff) break;
          if (diff > 0){
            R = M-1;
          }else{
            L = M+1;
          }
        }
      }
      memset(str, 0, sizeof(str));
      sprintf(str, "%d/%d has %d exact digits", rA, rB, rF+1);
      return string(str);
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/