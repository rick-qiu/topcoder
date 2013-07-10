/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6464
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

class MonthlyPayment {
public:
    long minimalPayment(string totalSMS, string pack1, string pay1, string pack2, string pay2);
};

long MonthlyPayment::minimalPayment(string totalSMS, string pack1, string pay1, string pack2, string pay2) {
    long ret;
    return ret;
}


int test0() {
    string totalSMS = "92";
    string pack1 = "10";
    string pay1 = "90";
    string pack2 = "20";
    string pay2 = "170";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 790;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string totalSMS = "90";
    string pack1 = "10";
    string pay1 = "90";
    string pack2 = "20";
    string pay2 = "170";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 770;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string totalSMS = "99";
    string pack1 = "10";
    string pay1 = "90";
    string pack2 = "20";
    string pay2 = "170";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 850;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string totalSMS = "10";
    string pack1 = "1";
    string pay1 = "11";
    string pack2 = "20";
    string pay2 = "300";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string totalSMS = "0";
    string pack1 = "10";
    string pay1 = "80";
    string pack2 = "50";
    string pay2 = "400";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string totalSMS = "28";
    string pack1 = "1";
    string pay1 = "10";
    string pack2 = "1";
    string pay2 = "8";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 224;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string totalSMS = "152";
    string pack1 = "7";
    string pay1 = "61";
    string pack2 = "9";
    string pay2 = "53";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 901;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string totalSMS = "226";
    string pack1 = "5";
    string pay1 = "58";
    string pack2 = "1";
    string pay2 = "11";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2260;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string totalSMS = "384";
    string pack1 = "1";
    string pay1 = "7";
    string pack2 = "1";
    string pay2 = "6";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2304;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string totalSMS = "447";
    string pack1 = "1";
    string pay1 = "11";
    string pack2 = "5";
    string pay2 = "45";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4025;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string totalSMS = "580";
    string pack1 = "5";
    string pay1 = "33";
    string pack2 = "5";
    string pay2 = "25";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2900;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string totalSMS = "614";
    string pack1 = "3";
    string pay1 = "21";
    string pack2 = "1";
    string pay2 = "9";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4302;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string totalSMS = "780";
    string pack1 = "1";
    string pay1 = "9";
    string pack2 = "9";
    string pay2 = "60";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5214;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string totalSMS = "824";
    string pack1 = "3";
    string pay1 = "16";
    string pack2 = "7";
    string pay2 = "66";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4400;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string totalSMS = "920";
    string pack1 = "9";
    string pay1 = "83";
    string pack2 = "5";
    string pay2 = "26";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4784;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string totalSMS = "1028";
    string pack1 = "4";
    string pay1 = "20";
    string pack2 = "3";
    string pay2 = "32";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5140;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string totalSMS = "1188";
    string pack1 = "9";
    string pay1 = "62";
    string pack2 = "1";
    string pay2 = "6";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 7128;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string totalSMS = "1280";
    string pack1 = "5";
    string pay1 = "40";
    string pack2 = "5";
    string pay2 = "56";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 10240;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string totalSMS = "1332";
    string pack1 = "5";
    string pay1 = "56";
    string pack2 = "1";
    string pay2 = "11";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 13320;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string totalSMS = "1480";
    string pack1 = "5";
    string pay1 = "59";
    string pack2 = "7";
    string pay2 = "78";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 14800;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string totalSMS = "1550";
    string pack1 = "3";
    string pay1 = "31";
    string pack2 = "7";
    string pay2 = "57";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 12627;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string totalSMS = "1688";
    string pack1 = "1";
    string pay1 = "5";
    string pack2 = "1";
    string pay2 = "11";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 8440;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string totalSMS = "1728";
    string pack1 = "7";
    string pay1 = "64";
    string pack2 = "3";
    string pay2 = "29";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 15802;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string totalSMS = "1800";
    string pack1 = "1";
    string pay1 = "10";
    string pack2 = "3";
    string pay2 = "24";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 14400;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string totalSMS = "1996";
    string pack1 = "1";
    string pay1 = "9";
    string pack2 = "5";
    string pay2 = "28";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 11181;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string totalSMS = "9185162344";
    string pack1 = "221";
    string pay1 = "2247";
    string pack2 = "977";
    string pay2 = "6364";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 59830475476;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string totalSMS = "93596042432";
    string pack1 = "343";
    string pay1 = "3479";
    string pack2 = "111";
    string pay2 = "1053";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 887897591747;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string totalSMS = "118506995368";
    string pack1 = "339";
    string pay1 = "1988";
    string pack2 = "409";
    string pay2 = "2602";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 694961377394;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string totalSMS = "196035318013";
    string pack1 = "593";
    string pay1 = "6892";
    string pack2 = "71";
    string pay2 = "650";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 1794689531110;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string totalSMS = "228364637727";
    string pack1 = "66";
    string pay1 = "545";
    string pack2 = "33";
    string pay2 = "239";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 1653913588403;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string totalSMS = "285265176848";
    string pack1 = "369";
    string pay1 = "4305";
    string pack2 = "255";
    string pay2 = "2223";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2486841129944;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string totalSMS = "300356326080";
    string pack1 = "113";
    string pay1 = "1256";
    string pack2 = "633";
    string pay2 = "4486";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2128591594940;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string totalSMS = "382959486836";
    string pack1 = "904";
    string pay1 = "6536";
    string pack2 = "659";
    string pay2 = "4247";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2468025707345;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string totalSMS = "421160949792";
    string pack1 = "929";
    string pay1 = "7706";
    string pack2 = "853";
    string pay2 = "7811";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 3493505144448;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string totalSMS = "461577615324";
    string pack1 = "257";
    string pay1 = "1404";
    string pack2 = "284";
    string pay2 = "2612";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2521614677306;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string totalSMS = "544501885528";
    string pack1 = "345";
    string pay1 = "3573";
    string pack2 = "345";
    string pay2 = "2556";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4034048752260;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string totalSMS = "574746364312";
    string pack1 = "349";
    string pay1 = "4120";
    string pack2 = "937";
    string pay2 = "11049";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5747463643120;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string totalSMS = "631987707652";
    string pack1 = "89";
    string pay1 = "799";
    string pack2 = "879";
    string pay2 = "10211";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5673687397931;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string totalSMS = "683292664232";
    string pack1 = "657";
    string pay1 = "4844";
    string pack2 = "977";
    string pay2 = "7516";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5037853372944;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string totalSMS = "749802968960";
    string pack1 = "401";
    string pay1 = "4184";
    string pack2 = "649";
    string pay2 = "7692";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 7498029689600;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string totalSMS = "775569470184";
    string pack1 = "88";
    string pay1 = "812";
    string pack2 = "481";
    string pay2 = "4542";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 7156391020396;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string totalSMS = "813982138895";
    string pack1 = "977";
    string pay1 = "9821";
    string pack2 = "133";
    string pay2 = "1198";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 7331959416626;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string totalSMS = "897047618224";
    string pack1 = "501";
    string pay1 = "3236";
    string pack2 = "871";
    string pay2 = "9565";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5794103977248;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string totalSMS = "913182183940";
    string pack1 = "633";
    string pay1 = "5047";
    string pack2 = "281";
    string pay2 = "2471";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 7280932831511;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string totalSMS = "998349763552";
    string pack1 = "937";
    string pay1 = "5541";
    string pack2 = "849";
    string pay2 = "6645";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5903795135388;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string totalSMS = "46546956728";
    string pack1 = "3143";
    string pay1 = "35290";
    string pack2 = "264129";
    string pay2 = "1572081";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 277045003628;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string totalSMS = "158913370480";
    string pack1 = "102945";
    string pay1 = "1212396";
    string pack2 = "107649";
    string pay2 = "547923";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 808853795214;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string totalSMS = "276449422336";
    string pack1 = "210649";
    string pay1 = "2099791";
    string pack2 = "159809";
    string pay2 = "850830";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 1471828695420;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string totalSMS = "365059511406";
    string pack1 = "260993";
    string pay1 = "2191288";
    string pack2 = "279825";
    string pay2 = "1539026";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2007812742884;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string totalSMS = "450702146848";
    string pack1 = "63791";
    string pay1 = "433956";
    string pack2 = "115281";
    string pay2 = "666125";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2604279739220;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string totalSMS = "537322901112";
    string pack1 = "360339";
    string pay1 = "3303613";
    string pack2 = "76039";
    string pay2 = "596384";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4214295054208;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string totalSMS = "653504390400";
    string pack1 = "204653";
    string pay1 = "1990562";
    string pack2 = "57333";
    string pay2 = "636964";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 6356325151392;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string totalSMS = "777909874788";
    string pack1 = "341441";
    string pay1 = "3907700";
    string pack2 = "20761";
    string pay2 = "167820";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 6288176639370;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string totalSMS = "828393439984";
    string pack1 = "323937";
    string pay1 = "2350514";
    string pack2 = "130177";
    string pay2 = "1251711";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 6010892283288;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string totalSMS = "966707152106";
    string pack1 = "18695";
    string pay1 = "204468";
    string pack2 = "329809";
    string pay2 = "2845099";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 8339304165068;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string totalSMS = "43253205504";
    string pack1 = "26145712030";
    string pay1 = "131147554904";
    string pack2 = "29748828881";
    string pay2 = "241386341620";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 262295109808;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string totalSMS = "97242106488";
    string pack1 = "24463754853";
    string pay1 = "175311782079";
    string pack2 = "36220474081";
    string pay2 = "253196659158";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 685079135125;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string totalSMS = "141988023104";
    string pack1 = "20141951085";
    string pay1 = "196811411823";
    string pack2 = "23766366945";
    string pay2 = "161506837394";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 969041024364;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string totalSMS = "157698297856";
    string pack1 = "9737824788";
    string pay1 = "58811087081";
    string pack2 = "48708311529";
    string pay2 = "353699793104";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 959908405776;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string totalSMS = "238435501056";
    string pack1 = "5030352657";
    string pay1 = "41912362228";
    string pack2 = "22565993481";
    string pay2 = "113321757325";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 1244190907026;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string totalSMS = "281155055868";
    string pack1 = "19931849665";
    string pay1 = "163424762733";
    string pack2 = "17969132287";
    string pay2 = "128955350533";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2050510973625;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string totalSMS = "338609577788";
    string pack1 = "5249306697";
    string pay1 = "27697117595";
    string pack2 = "17385285678";
    string pay2 = "162183408728";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 1799155017880;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string totalSMS = "362532107432";
    string pack1 = "46482659201";
    string pay1 = "393000856788";
    string pack2 = "12356975288";
    string pay2 = "65297680848";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 1935430985392;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string totalSMS = "410965965568";
    string pack1 = "35880653505";
    string pay1 = "260465631090";
    string pack2 = "31337668277";
    string pay2 = "190388383892";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2510811770266;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string totalSMS = "470139736796";
    string pack1 = "47333626817";
    string pay1 = "258675320509";
    string pack2 = "26426838523";
    string pay2 = "223196077818";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2586753205090;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string totalSMS = "516562711176";
    string pack1 = "12997447911";
    string pay1 = "126472051156";
    string pack2 = "44220762113";
    string pay2 = "287597219993";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 3451166639916;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string totalSMS = "557274110224";
    string pack1 = "10972841525";
    string pay1 = "95237195001";
    string pack2 = "40337767861";
    string pay2 = "238605427749";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 3340475988486;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string totalSMS = "601481373408";
    string pack1 = "9246197811";
    string pay1 = "53204540849";
    string pack2 = "6275686089";
    string pay2 = "51515535430";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 3463080312115;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string totalSMS = "673450493665";
    string pack1 = "10773001937";
    string pay1 = "100558386396";
    string pack2 = "10704043917";
    string pay2 = "105409866206";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 6289863692262;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string totalSMS = "749590646339";
    string pack1 = "43410108853";
    string pay1 = "237050310820";
    string pack2 = "28302190865";
    string pay2 = "195469786312";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4146043242320;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string totalSMS = "766781549588";
    string pack1 = "25723275777";
    string pay1 = "145299513509";
    string pack2 = "33458863265";
    string pay2 = "298197581126";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4358985405270;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string totalSMS = "801654279150";
    string pack1 = "23349100017";
    string pay1 = "130263352526";
    string pack2 = "20389402770";
    string pay2 = "190052124090";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4506802771604;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string totalSMS = "882985080064";
    string pack1 = "17728923824";
    string pay1 = "107893919972";
    string pack2 = "49176099946";
    string pay2 = "402579369500";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5394695998600;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string totalSMS = "949571669292";
    string pack1 = "28879179183";
    string pay1 = "267415078555";
    string pack2 = "12575549057";
    string pay2 = "90925828983";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 6883492073895;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string totalSMS = "980165417728";
    string pack1 = "25315083237";
    string pay1 = "127066092917";
    string pack2 = "35013024433";
    string pay2 = "265005476039";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 4955577623763;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string totalSMS = "42";
    string pack1 = "10";
    string pay1 = "20";
    string pack2 = "3";
    string pay2 = "6";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 84;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string totalSMS = "45";
    string pack1 = "6";
    string pay1 = "12";
    string pack2 = "7";
    string pay2 = "14";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string totalSMS = "54";
    string pack1 = "15";
    string pay1 = "10";
    string pack2 = "12";
    string pay2 = "8";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string totalSMS = "54";
    string pack1 = "12";
    string pay1 = "8";
    string pack2 = "15";
    string pay2 = "10";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string totalSMS = "54";
    string pack1 = "12";
    string pay1 = "16";
    string pack2 = "15";
    string pay2 = "20";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 72;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string totalSMS = "63";
    string pack1 = "10";
    string pay1 = "10";
    string pack2 = "8";
    string pay2 = "9";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 67;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string totalSMS = "19";
    string pack1 = "1";
    string pay1 = "11";
    string pack2 = "18";
    string pay2 = "65";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string totalSMS = "99";
    string pack1 = "46";
    string pay1 = "183";
    string pack2 = "27";
    string pay2 = "101";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 385;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string totalSMS = "62";
    string pack1 = "48";
    string pay1 = "199";
    string pack2 = "35";
    string pay2 = "160";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 320;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string totalSMS = "70";
    string pack1 = "923";
    string pay1 = "2239";
    string pack2 = "16";
    string pay2 = "140";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 620;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string totalSMS = "0";
    string pack1 = "25315083237";
    string pay1 = "127066092917";
    string pack2 = "35013024433";
    string pay2 = "265005476039";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string totalSMS = "1000000000000";
    string pack1 = "3";
    string pay1 = "6";
    string pack2 = "1";
    string pay2 = "3";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000001;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string totalSMS = "1000000000000";
    string pack1 = "3";
    string pay1 = "6";
    string pack2 = "1";
    string pay2 = "4";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000002;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string totalSMS = "999999999999";
    string pack1 = "10";
    string pay1 = "60";
    string pack2 = "99999999999";
    string pay2 = "599999999995";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 5999999999995;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string totalSMS = "10000000000";
    string pack1 = "10";
    string pay1 = "50";
    string pack2 = "1";
    string pay2 = "10";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string totalSMS = "900400000100";
    string pack1 = "1001000";
    string pay1 = "9010000";
    string pack2 = "1000000";
    string pay2 = "9001000";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 8104499502000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string totalSMS = "999888777677";
    string pack1 = "45007";
    string pay1 = "405063";
    string pack2 = "62129";
    string pay2 = "559161";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 8998998999093;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string totalSMS = "999999999971";
    string pack1 = "100";
    string pay1 = "100";
    string pack2 = "110";
    string pay2 = "111";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999987;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string totalSMS = "100000000050";
    string pack1 = "100000000000";
    string pay1 = "100000000001";
    string pack2 = "100000000001";
    string pay2 = "100000000005";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000495;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string totalSMS = "1000000000000";
    string pack1 = "999";
    string pay1 = "999";
    string pack2 = "1000000000000";
    string pay2 = "1000000000000";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string totalSMS = "75";
    string pack1 = "11";
    string pay1 = "11";
    string pack2 = "10";
    string pay2 = "10";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string totalSMS = "98765432199";
    string pack1 = "16";
    string pay1 = "144";
    string pack2 = "18";
    string pay2 = "162";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 888888889792;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string totalSMS = "450342146848";
    string pack1 = "6379123";
    string pay1 = "4339561";
    string pack2 = "1152481";
    string pay2 = "6636125";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 306359987917;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string totalSMS = "111";
    string pack1 = "6";
    string pay1 = "2";
    string pack2 = "9";
    string pay2 = "3";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string totalSMS = "190000034";
    string pack1 = "17";
    string pay1 = "17";
    string pack2 = "190000000";
    string pay2 = "190000000";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 190000034;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string totalSMS = "1000000000000";
    string pack1 = "321332423443";
    string pay1 = "654456575657";
    string pack2 = "213123122111";
    string pay2 = "443223122121";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 2195359395556;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string totalSMS = "1000000000000";
    string pack1 = "1";
    string pay1 = "20";
    string pack2 = "999999999999";
    string pay2 = "1000000000000";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000010;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string totalSMS = "117";
    string pack1 = "16";
    string pay1 = "56";
    string pack2 = "18";
    string pay2 = "65";
    MonthlyPayment* pObj = new MonthlyPayment();
    clock_t start = clock();
    long result = pObj->minimalPayment(totalSMS, pack1, pay1, pack2, pay2);
    clock_t end = clock();
    delete pObj;
    long expected = 419;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21111148&rd=9994&pm=6464
********************************************************************************
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cstdio>
 
using namespace std;
 
typedef long long llong;
typedef long double ldbl;
 
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define abs(a) ((a) < 0 ? -(a) : (a))
 
class MonthlyPayment
{
public:
  long long minimalPayment( string sn, string ss1, string sp1, string ss2, string sp2 )
  {
    llong n, s1, p1, s2, p2, be, a, b, c;
    sscanf(sn.c_str(), "%Ld", &n);
    sscanf(ss1.c_str(), "%Ld", &s1);
    sscanf(sp1.c_str(), "%Ld", &p1);
    sscanf(ss2.c_str(), "%Ld", &s2);
    sscanf(sp2.c_str(), "%Ld", &p2);
    be = 10 * n;
    for (a = 0; a <= 5000000; a++)
    {
      b = max(0, (n - a * s1 + s2 - 1) / s2), c = max(0, n - s1 * a - s2 * b);
      be = min(be, a * p1 + b * p2 + c * 10);
      b = max(0, (n - a * s1) / s2), c = max(0, n - s1 * a - s2 * b);
      be = min(be, a * p1 + b * p2 + c * 10);
    }
    swap(s1, s2), swap(p1, p2);
    for (a = 0; a <= 5000000; a++)
    {
      b = max(0, (n - a * s1 + s2 - 1) / s2), c = max(0, n - s1 * a - s2 * b);
      be = min(be, a * p1 + b * p2 + c * 10);
      b = max(0, (n - a * s1) / s2), c = max(0, n - s1 * a - s2 * b);
      be = min(be, a * p1 + b * p2 + c * 10);
    }
    return be;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/