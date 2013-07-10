/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=945
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

class BlueMoons {
public:
    int count(string interval, string fullMoon);
};

int BlueMoons::count(string interval, string fullMoon) {
    int ret;
    return ret;
}


int test0() {
    string interval = "01/2002 to 05/2002";
    string fullMoon = "28.95/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string interval = "01/1900 to 12/1999";
    string fullMoon = "28.95/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string interval = "01/2000 to 12/2002";
    string fullMoon = "28.95/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string interval = "01/2002 to 05/2002";
    string fullMoon = "01.00/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string interval = "01/2002 to 01/2002";
    string fullMoon = "02.46/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string interval = "01/2002 to 01/3002";
    string fullMoon = "02.46/01/1902";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 411;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string interval = "01/2002 to 01/2002";
    string fullMoon = "02.47/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
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
    string interval = "01/1900 to 12/9999";
    string fullMoon = "02.47/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3338;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string interval = "01/2002 to 01/2002";
    string fullMoon = "01.00/02/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
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
    string interval = "12/8817 to 11/9053";
    string fullMoon = "28.31/02/2126";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string interval = "01/4456 to 07/7380";
    string fullMoon = "02.83/03/6724";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1203;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string interval = "05/3727 to 02/7375";
    string fullMoon = "03.05/07/7838";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1504;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string interval = "07/3159 to 05/4905";
    string fullMoon = "04.30/04/8007";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string interval = "11/6961 to 12/8388";
    string fullMoon = "16.89/03/5058";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 588;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string interval = "05/9240 to 09/9684";
    string fullMoon = "16.78/08/2319";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string interval = "07/5194 to 05/5520";
    string fullMoon = "22.45/08/5395";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string interval = "03/5508 to 08/7468";
    string fullMoon = "29.86/01/5096";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 807;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string interval = "02/9784 to 05/9834";
    string fullMoon = "12.17/03/2436";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string interval = "07/3392 to 11/4479";
    string fullMoon = "24.93/07/6299";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 449;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string interval = "09/5704 to 08/9741";
    string fullMoon = "15.85/01/2802";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1662;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string interval = "04/2255 to 10/9113";
    string fullMoon = "18.77/08/3469";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2828;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string interval = "05/9260 to 12/9686";
    string fullMoon = "14.94/12/7070";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string interval = "07/3655 to 07/9277";
    string fullMoon = "23.28/09/2255";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2319;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string interval = "05/7618 to 09/8481";
    string fullMoon = "22.94/12/5628";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string interval = "01/7749 to 06/8600";
    string fullMoon = "31.49/10/5564";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 351;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string interval = "04/4131 to 07/9379";
    string fullMoon = "16.31/09/3199";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2162;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string interval = "02/8900 to 08/9993";
    string fullMoon = "16.27/05/6800";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 454;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string interval = "02/5030 to 02/5827";
    string fullMoon = "29.15/07/3758";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 328;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string interval = "08/9707 to 12/9827";
    string fullMoon = "17.94/12/4081";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string interval = "08/2560 to 11/5181";
    string fullMoon = "15.13/04/4325";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1081;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string interval = "01/4701 to 08/5822";
    string fullMoon = "03.37/06/5715";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 461;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string interval = "03/8640 to 08/9593";
    string fullMoon = "12.45/12/7844";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 392;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string interval = "03/8087 to 04/8768";
    string fullMoon = "31.63/03/5526";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 283;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string interval = "02/4702 to 11/5845";
    string fullMoon = "05.64/06/6490";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 469;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string interval = "10/3694 to 12/9993";
    string fullMoon = "27.49/10/2581";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2593;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string interval = "11/2010 to 10/8131";
    string fullMoon = "26.84/10/4892";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2522;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string interval = "02/3413 to 10/4668";
    string fullMoon = "11.67/03/5223";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 518;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string interval = "11/9330 to 11/9331";
    string fullMoon = "11.51/07/9203";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string interval = "01/2692 to 10/3896";
    string fullMoon = "12.30/10/9511";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 494;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string interval = "10/8942 to 10/9667";
    string fullMoon = "15.54/04/6082";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 298;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string interval = "04/6740 to 11/7076";
    string fullMoon = "29.19/09/1984";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string interval = "03/7301 to 03/7495";
    string fullMoon = "18.38/01/6453";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string interval = "05/6210 to 11/9881";
    string fullMoon = "01.32/03/6024";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1514;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string interval = "01/1952 to 01/3952";
    string fullMoon = "18.06/02/8510";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 823;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string interval = "11/7331 to 08/8705";
    string fullMoon = "18.09/10/2093";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 567;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string interval = "03/9662 to 03/9886";
    string fullMoon = "20.73/11/3828";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string interval = "07/4299 to 06/7290";
    string fullMoon = "21.03/04/4411";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1232;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string interval = "01/7915 to 01/9178";
    string fullMoon = "30.64/11/8286";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 522;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string interval = "11/6803 to 08/7447";
    string fullMoon = "11.86/04/5672";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string interval = "11/6239 to 02/7095";
    string fullMoon = "26.59/08/9388";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 353;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string interval = "08/3925 to 05/8453";
    string fullMoon = "27.84/01/4854";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1865;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string interval = "11/5773 to 08/6153";
    string fullMoon = "31.07/01/2043";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string interval = "12/3045 to 08/8677";
    string fullMoon = "09.74/10/6163";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2323;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string interval = "12/5104 to 02/6022";
    string fullMoon = "18.76/07/8844";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string interval = "04/5337 to 06/7131";
    string fullMoon = "06.43/10/3563";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 737;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string interval = "01/4203 to 05/7402";
    string fullMoon = "25.15/04/8848";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1318;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string interval = "06/8020 to 08/8780";
    string fullMoon = "30.53/05/5505";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 313;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string interval = "06/1915 to 11/9687";
    string fullMoon = "06.33/07/5216";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3202;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string interval = "07/7649 to 10/7968";
    string fullMoon = "26.95/12/8696";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string interval = "07/4953 to 09/6672";
    string fullMoon = "02.14/04/8223";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 706;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string interval = "03/2638 to 10/9973";
    string fullMoon = "18.51/07/3757";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3021;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string interval = "09/8187 to 01/8542";
    string fullMoon = "14.31/09/6729";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string interval = "02/9411 to 01/9660";
    string fullMoon = "12.82/12/4709";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string interval = "07/5288 to 08/5803";
    string fullMoon = "16.14/11/6624";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 212;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string interval = "02/4917 to 02/6207";
    string fullMoon = "04.84/01/8736";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 533;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string interval = "01/1913 to 05/9999";
    string fullMoon = "27.26/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3334;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string interval = "01/1900 to 12/9999";
    string fullMoon = "05.75/05/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3335;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string interval = "01/1900 to 12/9999";
    string fullMoon = "01.99/01/9999";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3337;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string interval = "01/3402 to 01/6002";
    string fullMoon = "01.00/02/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1077;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string interval = "01/1900 to 05/9999";
    string fullMoon = "28.95/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3338;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string interval = "01/1900 to 12/9999";
    string fullMoon = "01.00/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3336;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string interval = "01/2002 to 03/2002";
    string fullMoon = "30.99/01/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string interval = "01/3402 to 01/7002";
    string fullMoon = "01.00/02/2002";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1487;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string interval = "03/1900 to 09/9099";
    string fullMoon = "21.03/04/9994";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2969;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string interval = "01/5002 to 05/9999";
    string fullMoon = "01.00/01/1900";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2059;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string interval = "03/2000 to 03/2000";
    string fullMoon = "01.00/02/2000";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string interval = "01/3000 to 05/9999";
    string fullMoon = "01.00/01/1900";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 2883;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string interval = "01/2004 to 01/2004";
    string fullMoon = "28.99/02/2004";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string interval = "04/1900 to 05/9490";
    string fullMoon = "04.34/09/9988";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 3126;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string interval = "04/8713 to 04/8713";
    string fullMoon = "21.00/04/8713";
    BlueMoons* pObj = new BlueMoons();
    clock_t start = clock();
    int result = pObj->count(interval, fullMoon);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=293874&rd=4765&pm=945
********************************************************************************
#include<vector>
#include<string>
#include<set>
#include<map>
#include<list>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<queue>
#include<iterator>
 
#define q(x) #x
#define qq(x) #x[0]
 
#define fori(st, end) for (int i = ((int)(st)); i <= ((int)(end)); i++) 
#define forj(st, end) for (int j = ((int)(st)); j <= ((int)(end)); j++)
#define fork(st, end) for (int k = ((int)(st)); k <= ((int)(end)); k++)
#define forl(st, end) for (int l = ((int)(st)); l <= ((int)(end)); l++)
#define form(st, end) for (int m = ((int)(st)); m <= ((int)(end)); m++)
#define fordi(st, end) for (int i = ((int)(st)); i >= ((int)(end)); i--) 
#define fordj(st, end) for (int j = ((int)(st)); j >= ((int)(end)); j--)
#define fordk(st, end) for (int k = ((int)(st)); k >= ((int)(end)); k--)
#define repi(end) for (int i=0; i<((int)(end)); i++)
#define repj(end) for (int j=0; j<((int)(end)); j++)
#define repk(end) for (int k=0; k<((int)(end)); k++)
#define foreach(vec, it) for ( __typeof(vec.begin()) it = vec.begin(); it!=vec.end(); it++)
 
#define ITADJ for(int adx=-1; adx<=1; adx++) for(int ady=-1; ady<=1; ady++)
#define chk_cell(i, j, n, m) ((i)>=0&&(j)>=0&&(i)<n&&(j)<m)
 
#define VECI  vector<int>
#define LISTI list<int>
 
#define VECS vector<string>
#define LISTS list<string>
 
#define VECD vector<double>
 
using namespace std;
typedef vector<int> veci;
typedef vector<double> vecd;
typedef vector<string> vecs;
typedef vector<char>   vecch;
typedef string str;
 
 
#define ITRI vector<int>::iterator
#define ITRS vector<string>::iterator
 
#define vp(vec, val) vec.push_back(val)    
#define vf(vec, val) find(vec.begin(), vec.end(), val)
#define vs(vec) sort(vec.begin(), vec.end())
#define ve(vec, val) (vf(vec, val) != vec.end())
#define va(vec) vec.begin(), vec.end()
#define vind(vec, val) (ve(vec, val) ? vf(vec, val) - vec.begin() : -1)
#define vins(vec, val) do { if (!ve(vec, val)) vp(vec, val); } while(0)
 
#define lint long long
 
#define ABS(x) ((x) > 0 ? (x) : -(x))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define DIST(x, y) ABS((x)-(y))
 
typedef pair<int, int> PAIRI;
typedef pair<double, double> PAIRD;
 
typedef PAIRI pairi;
typedef PAIRD paird;
 
typedef pair< PAIRD, int > TRIPLEI;
 
#define mp(x, y) make_pair(x, y)
#define mt(x,y,z) mp(mp(x,y),z)
 
typedef pair<pairi, int> triplei;
typedef pair< paird, double > tripled;
 
#define pq priority_queue
 
#include <sstream>
 
#define vall(v) v.begin(), v.end()
 
#define   pint  parsestr<int>
#define   plint parsestr<lint>
#define   pstr  parsestr<string>
#define   pdouble parsestr<double>
 
template<class T> 
vector<T> parsestr(string s, string delims = " ") {
   string s1;
   vector<T> ret;
   while (s != "") {
      while(delims.find(s[0]) != string::npos) s = s.erase(0, 1);
      while(delims.find(s[s.length()-1]) != string::npos)  s = s.erase(s.length()-1, 1);   
 
      int pos = s.find_first_of(delims);
      if (pos == string::npos) {
         s1 = s;
         s  = "";
      } else {
         s1 = s.substr(0, pos);
         s  = s.substr(pos+1, s.length());
      }
 
      T val;
      istringstream st(s1);
      st >> val;
      vp(ret, val);
   }
   return ret;
 
}
 
string toupper(string s) {
   string s1 = "";
   fori(0, s.size()-1) s1 += toupper(s[i]);
   return s1;
}
 
string tolower(string s) {
   string s1 = "";
   fori(0, s.size()-1) s1 += tolower(s[i]);
   return s1;
}
 
lint gcd(lint a, lint b) {
  if (b > a) swap(a, b);
  if (b==0) return a;
  if ((a%b)==0) return b;
  return gcd(b, a%b);
}
 
int lcm(int a, int b) {
  return (a*b)/gcd(a, b);
}
 
lint choose(int n, int k) {
  lint ret = 1;
  int x = n;
  int y = 1;
  while (x != n-k) {
    ret *= x;
    x--;
    while (y != k+1 && (ret % y) == 0)  {  ret /= y; y++; }
  }
  return ret;
}
 
inline double dist(const paird &p1, const paird &p2) {
  double ret=(p1.first-p2.first)*(p1.first-p2.first)+(p1.second-p2.second)*(p1.second-p2.second);
  return sqrt(ret);
}
 
#define USE_EXTRA 0
#if USE_EXTRA
void bfForVECS(const VECS &field, PAIRI st, const vector< PAIRI > &adj, char wall, map< PAIRI, int > &dists) {
   list< PAIRI >  t;
   t.push_back(st);
   while (!t.empty()) {
      PAIRI cur = t.front(); 
      t.pop_front();
      fori(0, adj.size()-1) {
         int nx = cur.first + adj[i].first;
         int ny = cur.second + adj[i].second;
         if (nx < 0 || ny <0 || nx >= field.size() || ny >= field[0].size()) continue;
         if (field[nx][ny] == wall) continue;
         if (dists.find(mp(nx, ny)) == dists.end()) {
            dists[mp(nx, ny)] = dists[cur]+1;
            vp(t, mp(nx, ny));
         }
      }
   }
   return;
}
 
template<class T>
double get_area(const pair< T, T> &p1, const pair< T, T> &p2, const pair<T, T> &p3) {
  return ((double)0.5)*(p1.first*p2.second-p2.first*p1.second +
  p2.first*p3.second-p3.first*p2.second+p3.first*p1.second-p1.first*p3.second);
}
  
template <class T> 
vector<pair< T, T> > get_chull(vector<pair< T, T > > &v) {
  vector<pair<T, T> > ret;
    
  vs(v);
  vp(ret, v[0]);
    
  pair< T, T> cur=v[0];
  while(1) {
    pair< T, T > p;  
    fori(0, v.size()-1) if (v[i]!=cur) {
      bool f=true;
        
    forj(0, v.size()-1) if (j!=i&&v[j]!=cur)
      if (get_area(cur, v[i], v[j])<0) { f=false; break; }
        
      if (f) {p=v[i]; break; }
    }
    if (p==v[0]) break;
    vp(ret, p);
    cur=p;
  }
  return ret;
}
 
inline bool isect(const paird &p1, const paird &p2, const paird &p3, const paird &p4, paird &ret) {
  
  paird v1(p2.first-p1.first, p2.second-p1.second);
  paird v2(p3.first-p4.first, p3.second-p4.second);
  
  paird b(p3.first-p1.first, p3.second-p1.second);
  
  double det=v1.first*v2.second-v1.second*v2.first;
  if (ABS(det)<1e-9) return false;
 
  double alpha=b.first*v2.second-b.second*v2.first;
  alpha /= det;
  
//  if (alpha<0) return false;
  ret.first = p1.first + v1.first * alpha;
  ret.second = p1.second + v1.second * alpha;
  
  if (ret.first < MIN(p3.first, p4.first)) return false;
  if (ret.second < MIN(p3.second, p4.second)) return false;
  if (ret.first > MAX(p3.first, p4.first)) return false;
  if (ret.second > MAX(p3.second, p4.second)) return false;
 
  if (ret.first < MIN(p1.first, p2.first)) return false;
  if (ret.second < MIN(p1.second, p2.second)) return false;
  if (ret.first > MAX(p1.first, p2.first)) return false;
  if (ret.second > MAX(p1.second, p2.second)) return false;
 
  return true;
}
 
#endif
 
bool is_leap(int y) {
  if (y%4 != 0) return false;
  if (y%400 == 0) return true;
  
  return (y%100 != 0);
}
 
int ndays(int y, int m) {
  
  if (m == -1) { if (is_leap(y)) return 366; else return 365; }
  switch(m) {
    case 1:
      if (is_leap(y)) return 29; else return 28;
    case 0: case 2: case 4:  case 6: case 7: case 9: case 11:
      return 31;
    default:
      return 30;
  }
}
 
int get_days_between( int d1, int m1, int y1, int d, int m, int y) {
  int ret = 0;
  while(y != y1) {
    ret += ndays(y+1, -1);
    y++;
  }
 
  while (m < m1) {
    ret += ndays(y, m);
    m++;
  }  
  
  while (m1 < m) {
    ret -= ndays(y, m1);
    m1++;
  }
  
  ret += (d1-d);
  return ret;
}
 
inline void get_next_day(int &d, int &m, int &y) {
  d++;
  if (d == ndays(y, m)+1) {
    d=1;
    m++;
    if (m==12) {
      m=0;
      y++;
    }
  }
}
 
inline void get_prev_day(int &d, int &m, int &y) {
  d--;
  if (d == 0) {
    m--;
    if (m < 0) {
      y--;
      m = 11;
    }
    d = ndays(y, m);
  }
}
 
 
 
 
class BlueMoons {
  public:
  int count(string interval, string fullMoon) {
    
// BEGIN CUT HERE
    //static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
// END CUT HERE
    
    veci v = pint(fullMoon, "./");
    
    int fmday=v[0];
    int fmper = v[1];
    int fmmon = v[2]-1;
    int fmyear=v[3];
    
    veci iv = pint(interval, " /to");
    
    int m1, y1;
    int m2, y2;
    
    m1 = iv[0]-1;
    y1 = iv[1];
    
    m2 = iv[2]-1;
    y2 = iv[3];
    
    while (fmyear > y1 || (fmyear == y1 && fmmon >= m1)) {
      fori(0, 28) get_prev_day(fmday, fmmon, fmyear);
      if (fmper >= 53) { fmper -= 53; }
      else { get_prev_day(fmday, fmmon, fmyear); fmper += (100-53); }
    }
    
    int ret=0;
    int prevm=-1;
    
    while(fmyear < y2 || (fmyear == y2 && fmmon <= m2)) {
      if (fmyear > y1 || (fmyear == y1 && fmmon >= m1)) {
        if (fmmon == prevm) ret++;
        prevm=fmmon;
      }
      
      fori(0,28) get_next_day(fmday, fmmon, fmyear);
      if (fmper+53 < 100) { fmper += 53; }
      else { get_next_day(fmday, fmmon, fmyear); fmper += (53-100); }  
    }
    
    return ret;
    
  }
  
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { string Arg0 = "01/2002 to 05/2002"; string Arg1 = "28.95/01/2002"; int Arg2 = 0; verify_case(0, Arg2, count(Arg0, Arg1)); }
  void test_case_1() { string Arg0 = "01/2002 to 05/2002"; string Arg1 = "01.00/01/2002"; int Arg2 = 2; verify_case(1, Arg2, count(Arg0, Arg1)); }
  void test_case_2() { string Arg0 = "01/2002 to 01/2002"; string Arg1 = "02.46/01/2002"; int Arg2 = 1; verify_case(2, Arg2, count(Arg0, Arg1)); }
  void test_case_3() { string Arg0 = "01/2002 to 01/2002"; string Arg1 = "01.00/02/2002"; int Arg2 = 0; verify_case(3, Arg2, count(Arg0, Arg1)); }
 
// END CUT HERE
 
};
 
BlueMoons BlueMoons_obj;
 
extern  "C" void i_know_it_would_fail_but_at_least_i_can_try() {
  BlueMoons_obj.run_test(-1);
}
 
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/