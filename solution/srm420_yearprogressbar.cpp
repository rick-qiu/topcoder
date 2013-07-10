/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10058
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

class YearProgressbar {
public:
    double percentage(string currentDate);
};

double YearProgressbar::percentage(string currentDate) {
    double ret;
    return ret;
}


int test0() {
    string currentDate = "January 01;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
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
    string currentDate = "December 31;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99980974124807;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string currentDate = "July 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string currentDate = "July 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string currentDate = "May 10;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 35.348363774733635;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string currentDate = "January 31;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 8.228120243531203;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string currentDate = "January 11;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8512176560121767;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string currentDate = "February 20;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 13.788622526636225;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string currentDate = "March 08;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 18.410746812386158;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string currentDate = "April 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 25.148782343987822;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string currentDate = "May 24;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 39.307267884322684;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string currentDate = "June 17;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 45.95890410958904;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string currentDate = "July 05;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 50.94793564055859;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string currentDate = "August 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 58.601027397260275;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string currentDate = "September 03;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 67.29261796042618;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string currentDate = "October 20;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 80.25861414693382;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string currentDate = "November 13;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 86.63584474885843;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string currentDate = "December 23;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 97.76032179720706;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string currentDate = "January 18;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 4.89014116575592;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string currentDate = "February 08;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 10.57781582952816;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string currentDate = "March 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 16.501141552511417;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string currentDate = "April 17;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 29.273211567732112;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string currentDate = "May 22;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 38.68531202435312;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string currentDate = "June 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 42.03950364298725;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string currentDate = "July 05;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 50.937024353120236;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string currentDate = "August 03;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 58.883006982392224;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string currentDate = "September 16;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 70.85331050228311;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string currentDate = "October 27;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 81.96042617960426;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string currentDate = "November 21;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 88.91324200913243;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string currentDate = "December 01;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 91.54566210045661;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string currentDate = "January 10;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6063546423135464;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string currentDate = "February 05;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 9.815068493150683;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string currentDate = "March 19;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 21.38091985428051;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string currentDate = "April 30;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 32.81155130540376;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string currentDate = "May 12;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0884703196347;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string currentDate = "June 03;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 41.96575342465753;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string currentDate = "January 01;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8973891924711593E-4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string currentDate = "January 31;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 8.205639040680024;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string currentDate = "February 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 8.904109589041095;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string currentDate = "July 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 50.13661202185792;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string currentDate = "July 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string currentDate = "September 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 66.98630136986301;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string currentDate = "March 10;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 18.768074581430746;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string currentDate = "May 10;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 35.348363774733635;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string currentDate = "January 01;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0018973891924711599;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string currentDate = "September 11;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 69.52071948998179;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string currentDate = "November 20;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 88.76617199391171;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string currentDate = "February 18;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 13.379629629629632;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string currentDate = "January 12;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0054644808743167;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string currentDate = "March 01;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 16.39344262295082;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string currentDate = "May 01;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 33.060109289617486;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string currentDate = "December 31;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99980974124807;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string currentDate = "July 02;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 49.863013698630134;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string currentDate = "November 20;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 88.4931506849315;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string currentDate = "February 17;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 12.913051750380516;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string currentDate = "February 12;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 11.595704310868244;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string currentDate = "August 01;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 58.19672131147541;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string currentDate = "February 15;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 12.433022161505768;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string currentDate = "April 29;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 32.337709284627095;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string currentDate = "January 23;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 6.277132665452337;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string currentDate = "February 29;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 16.392493928354586;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string currentDate = "January 12;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125758955676988;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string currentDate = "July 25;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 56.29762446873102;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string currentDate = "August 09;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 60.28044140030441;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string currentDate = "February 01;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 8.469945355191257;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string currentDate = "November 30;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 91.52986490588947;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string currentDate = "October 03;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 75.40983606557377;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string currentDate = "March 13;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 19.841188524590162;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string currentDate = "December 31;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99981026108073;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string currentDate = "December 31;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99980974124807;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string currentDate = "January 11;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 2.73224043715847;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string currentDate = "April 25;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 31.55035670916818;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string currentDate = "December 31;
    YearProgressbar* pObj = new YearProgressbar();
    clock_t start = clock();
    double result = pObj->percentage(currentDate);
    clock_t end = clock();
    delete pObj;
    double expected = 99.99980974124807;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22659007&rd=13511&pm=10058
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
  
#define is_leap(x)  ((x%400 ==0) || ((x%4==0)&&(x%100!=0))) 
#define min_a_day 1440 
  
using namespace std; 
class YearProgressbar { 
  public: 
  double percentage(string currentDate) { 
     string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 
     int days[12] ={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
     map< string ,int > mapping_month; 
     for(int i=0;i<12;i++) 
         mapping_month[month[i]] = i; 
         char mon[255]; 
         int day,year,hour,min; 
         sscanf(currentDate.c_str(),"%s %d, %d %d:%d",mon,&day,&year,&hour,&min); 
         if(is_leap(year)) 
         { 
             days[1] ++; 
         } 
         long long min_year=0; 
         for(int i=0;i<12;i++) 
              min_year += days[i]* min_a_day; 
         double ret=0; 
         string tmp = mon; 
         for(int i=0;i<=(mapping_month[tmp]-1);i++) 
            ret += days[i] * min_a_day; 
         ret+= (day-1)*min_a_day; 
         ret+= hour*60; 
         ret+= min; 
          
         ret = (double)ret/(double)min_year *100; 
         return ret; 
                  
  } 
}; 
 
 
// Powered by FileEdit 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/