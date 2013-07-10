/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11552
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

class BinaryCards {
public:
    long largestNumber(long A, long B);
};

long BinaryCards::largestNumber(long A, long B) {
    long ret;
    return ret;
}


int test0() {
    long A = 6;
    long B = 6;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long A = 6;
    long B = 7;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long A = 6;
    long B = 8;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long A = 1;
    long B = 11;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long A = 35;
    long B = 38;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long A = 337007621073450791;
    long B = 337259621176923563;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 337769972052787199;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long A = 337007621073450791;
    long B = 363243549783774699;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 432345564227567615;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long A = 337007621073450700;
    long B = 576460752303429290;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long A = 13;
    long B = 999999999999999947;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long A = 1;
    long B = 1000000000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long A = 1;
    long B = 1;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long A = 1000000000000000000;
    long B = 1000000000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long A = 1;
    long B = 2;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long A = 1;
    long B = 3;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long A = 2;
    long B = 2;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long A = 2;
    long B = 3;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
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
    long A = 3;
    long B = 3;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long A = 3;
    long B = 4;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long A = 4;
    long B = 4;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long A = 13435118322293023;
    long B = 13435118322293023;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 13435118322293023;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long A = 252967131130464888;
    long B = 252967131130464888;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 252967131130464888;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long A = 469891784347835618;
    long B = 469891784347835618;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 469891784347835618;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long A = 258474518727344664;
    long B = 258474518727344664;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 258474518727344664;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long A = 71857669457162785;
    long B = 71857669457162785;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 71857669457162785;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long A = 176818103997872891;
    long B = 176818103997873439;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 176818103997874175;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long A = 673336125333327877;
    long B = 673336125333328868;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 673336125333328895;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long A = 21184812552106628;
    long B = 21184812552106728;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 21184812552106751;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long A = 906611261103360176;
    long B = 906611261103360326;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 906611261103360511;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long A = 631896407723188043;
    long B = 631896407723188737;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 631896407723196415;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long A = 247024732614360996;
    long B = 247024732614361943;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 247024732614426623;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long A = 280721490791747993;
    long B = 280721490791748763;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 280721490791749631;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long A = 461657559838062496;
    long B = 461657559838062968;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 461657559838064639;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long A = 620089089696830274;
    long B = 620089089696830603;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 620089089696831487;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long A = 43566986678135226;
    long B = 43566986678135833;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 43566986678136831;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long A = 528042601210849297;
    long B = 528042601210849469;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 528042601210849535;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long A = 84536132133068665;
    long B = 84536132133069319;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 84536132133076991;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long A = 942126680384630477;
    long B = 942126680384631202;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 942126680384634879;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long A = 829161406158550903;
    long B = 829161406158551053;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 829161406158553087;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long A = 192864567966073284;
    long B = 192864567966074101;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 192864567966074879;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long A = 399896204401903756;
    long B = 399896204401903959;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 399896204401904127;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long A = 655725947309379779;
    long B = 655725947309380452;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 655725947309380607;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long A = 60991707593202488;
    long B = 60991707593202638;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 60991707593202687;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long A = 972578212996605153;
    long B = 972578212996605632;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 972578212996605951;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long A = 104679898968505965;
    long B = 104679898968506109;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 104679898968506111;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long A = 729958436560262555;
    long B = 729958436560262795;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 729958436560263167;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long A = 507500148014589508;
    long B = 507500148014590374;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 507500148014591999;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long A = 91417475999865401;
    long B = 91417475999865740;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 91417475999865855;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long A = 333840733864662438;
    long B = 333840733864663435;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 333840733864665087;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long A = 826286096177798903;
    long B = 826286096177799662;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 826286096177807359;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long A = 592225194635090984;
    long B = 592225194635091352;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 592225194635091455;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long A = 977759016201489584;
    long B = 977759016201490202;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 977759016201490431;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long A = 246644132110493584;
    long B = 246644132110494535;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 246644132110495743;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long A = 439335986138523394;
    long B = 439335986138524105;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 439335986138525695;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long A = 438788899128495824;
    long B = 438788899128496339;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 438788899128500223;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long A = 732687986402108031;
    long B = 836087143253585095;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 864691128455135231;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long A = 92645752026305337;
    long B = 550113554666774577;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long A = 602049742558610199;
    long B = 951600406774886073;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long A = 706337757793877497;
    long B = 726719184543046995;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 864691128455135231;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long A = 818371022660510048;
    long B = 980626001687600036;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long A = 80766787368399593;
    long B = 370922704980929886;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long A = 414364532474145686;
    long B = 535084885568801990;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long A = 749924328780360702;
    long B = 916969508550056468;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long A = 767103813160910190;
    long B = 937414842315000059;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long A = 824229608922636783;
    long B = 938157792592406450;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long A = 211914680349424630;
    long B = 567698046964858784;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long A = 513120303067513709;
    long B = 799984384704765630;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long A = 804032651298292590;
    long B = 986393890336885097;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long A = 565003508511569449;
    long B = 651915890827597517;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long A = 384546583644785051;
    long B = 928758421871023805;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long A = 236803334965751562;
    long B = 530175526899960478;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long A = 959666360481658390;
    long B = 983713329931865150;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1008806316530991103;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long A = 973589585442451164;
    long B = 999944508749318888;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1008806316530991103;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long A = 342003499769379916;
    long B = 498421883622934710;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long A = 767693274074903870;
    long B = 979738263141363679;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long A = 382513839723571656;
    long B = 410584681057222251;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 432345564227567615;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long A = 506496661205795359;
    long B = 541653773009968970;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long A = 318241991786901344;
    long B = 340649515483168172;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 360287970189639679;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long A = 541827877884334214;
    long B = 543084169345761379;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 544935554911830015;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long A = 520945445163048875;
    long B = 521672253894060363;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 522417556774977535;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long A = 337661893084541764;
    long B = 553806635450033820;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long A = 565112646848659645;
    long B = 568912171862912374;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long A = 312840585181419594;
    long B = 314902478955996726;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 315251973915934719;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long A = 365535731318166037;
    long B = 401109390394047050;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 432345564227567615;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long A = 399447785612834554;
    long B = 411816984965413976;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 414331165718085631;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long A = 423078048015223971;
    long B = 533193151865080675;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long A = 291746566948275431;
    long B = 376667410053414057;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 432345564227567615;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long A = 469070680029655150;
    long B = 471666199184921483;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 472877960873902079;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long A = 426305944372602670;
    long B = 482177657795403892;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long A = 345447906666288848;
    long B = 349191855013225804;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 351280770934898687;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long A = 350037591335932507;
    long B = 355584378117889903;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 360287970189639679;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long A = 484233815016952022;
    long B = 485024458018296310;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 485262859849170943;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long A = 329644275178521849;
    long B = 330818761457996727;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 331014572611731455;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long A = 533986048966540507;
    long B = 564712102537874406;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long A = 435417121318038471;
    long B = 435561360106135103;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 435723263948095487;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long A = 381905962783887868;
    long B = 382181453033419638;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 382243018373070847;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long A = 314290554338338618;
    long B = 314927847485414766;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 315251973915934719;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long A = 442177711350763352;
    long B = 442308151667821598;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 442478663389151231;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long A = 390483612063517613;
    long B = 423352170914714474;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 432345564227567615;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long A = 361239667840171496;
    long B = 395555987834915904;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 396316767208603647;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long A = 549741646066376252;
    long B = 550994623595740861;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 551690954352885759;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long A = 333541150425770125;
    long B = 334168082337383463;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 334392272332259327;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long A = 475673970210278164;
    long B = 476859012438865115;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 477381560501272575;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long A = 369689640656221229;
    long B = 413380679774870573;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 432345564227567615;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long A = 545397602878199236;
    long B = 559459808989470809;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long A = 298971176024131434;
    long B = 301092822522968189;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 301741175033823231;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long A = 498292963987240092;
    long B = 503456801495253550;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 504403158265495551;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long A = 314601835217001986;
    long B = 517160390750787098;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long A = 536116186576008757;
    long B = 536472320040157462;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 536491305610510335;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long A = 444641271288504247;
    long B = 493850093000353894;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 504403158265495551;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long A = 1125899906842630;
    long B = 1125899906842632;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842639;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long A = 1;
    long B = 100000000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 144115188075855871;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long A = 1;
    long B = 1125899906842632;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685247;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long A = 1;
    long B = 1000000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842623;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long A = 1;
    long B = 1099511627776;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2199023255551;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long A = 1;
    long B = 1000000230213021;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842623;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long A = 237;
    long B = 834457658766989797;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long A = 1;
    long B = 100000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355327;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long A = 999999999999999999;
    long B = 1000000000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000262143;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long A = 1;
    long B = 1000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627775;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long A = 7;
    long B = 8;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long A = 1;
    long B = 37124508045065437;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 72057594037927935;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long A = 1125899906842630;
    long B = 1688849860263942;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685247;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long A = 6419838068042;
    long B = 6432741199874;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 6459630813183;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long A = 1;
    long B = 10000000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 18014398509481983;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long A = 12;
    long B = 100000000000000000;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 144115188075855871;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long A = 16;
    long B = 16;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long A = 11;
    long B = 13;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long A = 576460752303423487;
    long B = 576460752303423488;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long A = 1;
    long B = 3475385758524527;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 4503599627370495;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long A = 8;
    long B = 13;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long A = 10;
    long B = 1000000000000008;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842623;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long A = 8;
    long B = 9;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long A = 1125899906842623;
    long B = 1125899906842624;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685247;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long A = 2147483648;
    long B = 2394967295;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2415919103;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long A = 1;
    long B = 999999999999999999;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long A = 9876543212345678;
    long B = 12345678987654321;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 13510798882111487;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long A = 50;
    long B = 52;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long A = 128;
    long B = 147;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 159;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long A = 288230376151711744;
    long B = 576460752303423488;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606846975;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long A = 10;
    long B = 10;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long A = 37;
    long B = 45;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 47;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long A = 149533581377535;
    long B = 167125767421951;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 175921860444159;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long A = 144115188075855872;
    long B = 288230376151711744;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303423487;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long A = 22;
    long B = 25;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long A = 71;
    long B = 73;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 79;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long A = 139480814;
    long B = 139546340;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 139591679;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long A = 19;
    long B = 21;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long A = 1099511627775;
    long B = 1099511627776;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2199023255551;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long A = 64;
    long B = 84;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 95;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long A = 4;
    long B = 6;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long A = 35;
    long B = 36;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long A = 33;
    long B = 37;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long A = 1125899906842624;
    long B = 1688849860263936;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685247;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long A = 234;
    long B = 34234;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 65535;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long A = 8;
    long B = 8;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long A = 19009999990999995;
    long B = 19909919990909995;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 20266198323167231;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long A = 288230376151711742;
    long B = 288230376151711743;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 288230376151711743;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long A = 8;
    long B = 10;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long A = 576460752504758272;
    long B = 576601524285743104;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 576742227280134143;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long A = 123456789123456789;
    long B = 234567892345678900;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 288230376151711743;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long A = 24;
    long B = 26;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long A = 2;
    long B = 13;
    BinaryCards* pObj = new BinaryCards();
    clock_t start = clock();
    long result = pObj->largestNumber(A, B);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22777893&rd=14544&pm=11552
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <numeric> 
#include <set> 
#include <map> 
#include <queue> 
#include <cmath> 
#include <cstdio> 
#include <cstring> 
using namespace std; 
 
 
class BinaryCards { 
  public: 
  long long largestNumber(long long A, long long B) { 
    long long res=A; 
    while(A<B){ 
      long long i=1; 
      while(i&A) i<<=1; 
      A|=i; 
      res=max(res, A); 
    } 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/