/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10342
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

class DigitsSwap {
public:
    string maximalProduct(string x, string y, int swaps);
};

string DigitsSwap::maximalProduct(string x, string y, int swaps) {
    string ret;
    return ret;
}


int test0() {
    string x = "123";
    string y = "321";
    int swaps = 2;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "39483";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string x = "4531";
    string y = "1332";
    int swaps = 0;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "6035292";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string x = "13425";
    string y = "87694";
    int swaps = 99;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1476187680";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string x = "2872876342876443222";
    string y = "2309482482304823423";
    int swaps = 5;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "6669566046086333877050194232995188906";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string x = "940948";
    string y = "124551";
    int swaps = 4893846;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "133434353148";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string x = "4614232";
    string y = "8168576";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "37866921973632";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string x = "9954312";
    string y = "4341138";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "46278912087056";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string x = "493198650286";
    string y = "524865090061";
    int swaps = 69656315;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "258913698078598524407446";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string x = "260661849";
    string y = "337882913";
    int swaps = 4;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "88578661588126537";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string x = "476361542";
    string y = "797372601";
    int swaps = 553689940;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "386140970899455642";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string x = "920014607";
    string y = "677773359";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "623561632755702913";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string x = "6660380125094";
    string y = "9835120164061";
    int swaps = 456302416;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "66114435687200959941726734";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string x = "139880";
    string y = "977838";
    int swaps = 2;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "168704363040";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string x = "33496";
    string y = "91099";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3051624904";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string x = "249925533";
    string y = "574380880";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "152386107989009040";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string x = "99722828907815";
    string y = "26124258626539";
    int swaps = 33784985;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2857219685158148717910271085";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string x = "9119762952003";
    string y = "5181953252586";
    int swaps = 233609756;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "47289665732789876615529758";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string x = "41969825549125";
    string y = "78393967997693";
    int swaps = 7;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3496825168144843525272127485";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string x = "58254416163";
    string y = "35532825361";
    int swaps = 7;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2129476176141483689443";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string x = "562915";
    string y = "336492";
    int swaps = 345500226;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "195392045680";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string x = "39634";
    string y = "68875";
    int swaps = 75406607;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2736780750";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string x = "544442930778";
    string y = "630382520372";
    int swaps = 5;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "343210742886137730809416";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string x = "83211325";
    string y = "95122264";
    int swaps = 3;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "7935158709435900";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string x = "60053106";
    string y = "65004549";
    int swaps = 0;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3903725071579194";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string x = "5168314849207";
    string y = "2607056738492";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "13624165540916274212575844";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string x = "357983022367";
    string y = "555402606111";
    int swaps = 9;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "198824822807187969260737";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string x = "38301";
    string y = "69038";
    int swaps = 0;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2644224438";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string x = "489307478371";
    string y = "908345014562";
    int swaps = 3;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "444476768551859599772492";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string x = "66767719162";
    string y = "82765139959";
    int swaps = 5;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "5526039954044037786288";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string x = "74442792";
    string y = "37315785";
    int swaps = 7;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2782701200651690";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string x = "515951064";
    string y = "530891347";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "273914551364363208";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string x = "22810315522";
    string y = "97482363035";
    int swaps = 3;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2576618094619200503270";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string x = "225910850790";
    string y = "834104859254";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "194415278486784344710660";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string x = "8279617719";
    string y = "2341753324";
    int swaps = 368637198;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "19613042954111525956";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string x = "2456807743136301904293148205593287";
    string y = "4814355268929594505880132227031337";
    int swaps = 3;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "12611042219257837716126148256025093490033577543892642928878825834719";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string x = "2378379391828018486093008763565839483976";
    string y = "4586155196454253268266394562535661446268";
    int swaps = 17;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "11327149934936224176650158228054836385842272040494590854643258163604217132790148";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string x = "6151760024336282343436847398008805";
    string y = "6436392198234023198989135142538928";
    int swaps = 9;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "39596547221895878067943674691147409147054305792678122059339399261040";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string x = "819359798014";
    string y = "755509282450";
    int swaps = 6;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "619276153921191048012540";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string x = "515908387269381033";
    string y = "248015413735856908";
    int swaps = 22021478;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "128194343764000510241187718054898814";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string x = "1789415666667140612149523415231688277126";
    string y = "9494603624588121498245299838698662382627";
    int swaps = 7;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "17068281351964785978530133001423405376640329982332943028947804500516595823890002";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string x = "18020892820";
    string y = "25276787816";
    int swaps = 2;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "457301549038017881120";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string x = "500072552148";
    string y = "846898355155";
    int swaps = 10;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "437558413409963082113910";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string x = "6721499030350";
    string y = "1678364419557";
    int swaps = 4;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "11776092136922110759354950";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string x = "888152324666290";
    string y = "693119955560594";
    int swaps = 3;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "616553661362525123851493776260";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string x = "753912881860249022154442504212";
    string y = "679554034122982278583944698566";
    int swaps = 27;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "512354186363241358366803489945083704281937558761500525359992";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string x = "36471321638328601260546793";
    string y = "27881638761723785858733108";
    int swaps = 8;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1016880215142688907599665102050021959699284024254194";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string x = "69157334220127702410373959720286708183036202841837";
    string y = "88170488136789555663008823065097228294482725847395";
    int swaps = 3062712;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "6098018701664206934388219362926466174088672573419192054298658183496015648325209630928894470434422495";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string x = "2143104079081407953823210407590";
    string y = "5120989173307660289899942087873";
    int swaps = 26;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "10977447729853728650103776863586284106287677975929961163350010";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string x = "719160336221432605496082740760";
    string y = "829385156688987079158639453823";
    int swaps = 14;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "597483408143268919303561591317524398017030253652299938501360";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string x = "5328164677964192631597";
    string y = "4261762534075531888017";
    int swaps = 5109239;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "22810030456788916560707525774461311990813149";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string x = "3354272672201175918178669926658403783";
    string y = "8125762161157485649843253832706801195";
    int swaps = 9;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "27263176942478869926052310519258435569640047559765492200090768606616920685";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string x = "834031790352912617015229051836886166704989";
    string y = "398756486878095690013558017746707412183571";
    int swaps = 5154630;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "332575721601415582925408193117868012130631832023957530786045993263837367975156095719";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string x = "102788597134713712753445514126633008138169801";
    string y = "193936554050655189622505252067280068306437052";
    int swaps = 16249851;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "20042403874085250264791344577089311078638541295798233511925854449892166917642059020193852";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string x = "9185659265";
    string y = "7321228887";
    int swaps = 234571835;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "67366289716981106055";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string x = "253099511123397233";
    string y = "948439249057476630";
    int swaps = 14;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "243775210887385027474689533893463590";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string x = "45103958962576385930251577941785788423";
    string y = "54130417721313151505122155389284275840";
    int swaps = 12;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2441766033291988052423211188211366318809051987659176325678356771296375139060";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string x = "58410334067556098357904874023541664529124";
    string y = "99376587897716501326057449061190421970933";
    int swaps = 10;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "5847163225424430422645845010955165916859886738503118356259681980683243287459952692";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string x = "3959883951362881981334392721761730602";
    string y = "8607209543256088157579237279363810687";
    int swaps = 3;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "34083578829587992824431270046511610749726655868536536027065447018622543574";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string x = "956154138509213352904857330303211081872892";
    string y = "502825581249882717950340153423294924904498";
    int swaps = 29;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "502352864029558480928041368674007568139629695888209511074368216898525321033333845816";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string x = "317198832933283402012107668058895732220023";
    string y = "368772879592913081920247581007169303730432";
    int swaps = 31;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "117054287775487967026044409949075647774178395019380953694259700305906376250603329526";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string x = "671307036319561510973081517179498";
    string y = "901850892808514736168086571028355";
    int swaps = 7297393;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "605545544110202290027216730868181586313337160034244296957402665790";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string x = "332337301487898979195896933141";
    string y = "757634638342789014073494568989";
    int swaps = 461698;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "261910310115920824077543357026098772785864958164583509764449";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string x = "36936200651619735006518272";
    string y = "15225869835505815073415641";
    int swaps = 2;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "596603373103475884480826727648127693505358117092352";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string x = "810552583278527";
    string y = "897631598954952";
    int swaps = 701171837;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "728145463520905335696253093554";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string x = "772837541829689816375410122854";
    string y = "577344918387971143529155679023";
    int swaps = 9;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "446291913227647381697536423433890294858141626664716220691642";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string x = "944435802949835043525777440411";
    string y = "540286814764987386280980496828";
    int swaps = 99832167;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "511945997557284556717870188778185439537049117000057025516308";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string x = "14818221466938136452";
    string y = "60103873314561219180";
    int swaps = 44112133;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "890662031617225109218712042873957834300";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string x = "89810325032263";
    string y = "36158219397213";
    int swaps = 305143302;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3432209315223093706419033019";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string x = "45032978011474399676209623035196792756824630918";
    string y = "16840379622730730736467401244634502016937915244";
    int swaps = 42;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "758445739252367468795962408876729975892624975540612366292091191657116727458297112514798572872";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string x = "38703446718121231110891097745167839313963";
    string y = "65207170671754817521753100050078649148089";
    int swaps = 11;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2523849051106860784691182174889271785662136775446327509449109269036514032152466707";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string x = "66063803694204436918911863509108226897789305";
    string y = "43977435833361047427157227036098964029032247";
    int swaps = 19;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2962582226820584985560922944903205918682448124406832542158129766102558612887444610218335";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string x = "133435216988414573027770200864501573279114033";
    string y = "158305102510406489562221747860021392415406681";
    int swaps = 6108143;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "21222825131459292056868858549465092699092278939110496015081284749095437783654920041949173";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string x = "8938984399697725232833857";
    string y = "9813512086553953548503508";
    int swaps = 230949553;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "87722831447951064865071001677439124187315745340006";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string x = "6602216501773835132194230148661387944354427756";
    string y = "8907098673201535654681585332876964632105870037";
    int swaps = 4;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "59416697170526115743954086490517208091748230736198603236986264999998588848751282999641546972";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string x = "71165349534377091540071237733391588802443367661481";
    string y = "45968719167637127947182488162048594449945321743190";
    int swaps = 692104578;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3271380733190164781780579074341413733094272891059214690705707017048655994555597091657631496206159380";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string x = "59877487832193744435132809034944398538123898510618";
    string y = "58772823669651380761603104315895457446775268891980";
    int swaps = 10;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3519274056313641522061472684305242471930272391427350538079223891218816987864110044747912789125043640";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string x = "90229267360521711532668158694662881687897905826971";
    string y = "75164499615560750795685370752304985800977447592322";
    int swaps = 0;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "6782037731832262386162897476335259877567039897092844107701827564574381433336453563507718698280116662";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string x = "30437808812749193620720053577443386445924424253";
    string y = "43402372077617567908574256588285276733569445969";
    int swaps = 299900361;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1350967281080151524151852569940843332773924282863411121201624589586118382400995676040116686157";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string x = "48372691004563646763914750055886981560604786403410";
    string y = "84361056867678945102867077462296564069629126470824";
    int swaps = 30;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "4080771547682559700751462201079462588794015396438736190830650499148590336078284423602188199807867840";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string x = "51798029897477539129611498697482582561937132068993";
    string y = "81134824914394952167251807574291844812846731585426";
    int swaps = 24;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "4202647558372567303170920964990963921853282337179326667374263961984850170749984821794955323645885308";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string x = "90466758115119076344572656296532163490565065332660";
    string y = "22005205610494026640726685100213843508705356302993";
    int swaps = 14;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2022125217347415820697067453224465746948042767465271889979432616312219880545395075180875167298651380";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string x = "20251183374671946128257784206505607244405066263175";
    string y = "45489981277921829799006425351978491987969564744865";
    int swaps = 236049554;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1026001941633846147524025439885404639709611032711455028116720466281759188468507881341167029380829375";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string x = "43457751337965340249804261561050487081728011910323";
    string y = "92818756264743705437380568268126624302051058013828";
    int swaps = 22;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "4053327635479871853636802755241934125931021404290162471109668555105220365082802695413877882275446444";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string x = "389162213856689357695770025930376152595355";
    string y = "566852102689625886616712524927004908100173";
    int swaps = 20;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "220721312140014941273979544843177695508486962036222526348088403357235272762452592375";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string x = "66623675256667864558004422865099938715199852310738";
    string y = "25969311912468089504686733173134277336553609563329";
    int swaps = 47771503;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1769839438603872944672018419806090711678451949297556087107988142090057451325254707721055656573996392";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string x = "74717996522370976956993581896184534641521754838523";
    string y = "43200085288710863222708474344460553721908880916786";
    int swaps = 9;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3273361161269041982024922827841480667261515572637337299393537561065451019161377663280183315630147078";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string x = "14676401884946409291243997766793945469868267586824";
    string y = "35662649242966225652957443492133733054512856018927";
    int swaps = 8;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "543390328457892858146997314103107409493974568734729339872989858731327153581486949830200909959817848";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string x = "77630293992229494846342833783759149176252286155962";
    string y = "98906406635418844732432512495068541919232229175099";
    int swaps = 469994272;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "7704218180767957172350600808538620854136457891319064541710248325459400029986864103263888007982756938";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string x = "80684550860546293256357285489286888599429987831306";
    string y = "33408376605207368794808572429201501400574775283597";
    int swaps = 19;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2708708145519470829277904384117589522824297755101474426134695909847636809195988246538626717429637882";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string x = "1019160143479690755494209733770531264246";
    string y = "4352711496598784029058262969839570120765";
    int swaps = 3;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "5455512893217106424046471609461046675444719510204981996736258938695222346668190";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string x = "55880194567718363383596119439192607093873086830685";
    string y = "69860563896059917548841170256880534375606109879537";
    int swaps = 15;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3943745774396953126317369755686898955853721498377289278852579783195921890251274201166587826465192845";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string x = "86914270864970131199959356143954550372243058030654";
    string y = "28848177809000204542168466628852769216076005584439";
    int swaps = 13;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2513120739485252176849004352452303802457109563240750497221405298805581535064465044176244449647393106";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string x = "41155429240576044755918446510499587548602627315959";
    string y = "69740847208860239137933125620617705612261055331257";
    int swaps = 15;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3042093878802958004174971363190848980937056240217192475422360867004193904313940164053136193547630463";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string x = "62809493141430487328239850835158371609053142015904";
    string y = "36052423850532973749888097307612428639835109625485";
    int swaps = 15;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2285377934524843673132549291037993525501679974163854056819422898774039108125852152056524104113713440";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string x = "10469685222178599296950625231610221035500801644909";
    string y = "55140215163082564245211505172373098449505124060199";
    int swaps = 17;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "775653346967032102441779805127614131189831252055388266380335162210704367540578401433359773607876891";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string x = "40857910269095991147513984344017417509581270967884";
    string y = "25135147246481486660979934140762286238937376413032";
    int swaps = 16;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1037811564398583434159893032724970055632367255884874184833912412994534917954297921345053942791064288";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string x = "37520760868943933007072373159181838884721267083419";
    string y = "92113511081244505530890728059891153790744721462711";
    int swaps = 15;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3456332847007367998131951733802258687562775476594776425980963707321407617601587896572823094534888909";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string x = "74685859721972352796528357359791038286156918929884";
    string y = "18617314975981552267379472493742196799462773129712";
    int swaps = 85738815;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1394400553588070173336889281703623367358122162585391629671222056191758453771202185200604146245113408";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string x = "42564153232929795942902531904759088285441475";
    string y = "71490607311860316841526043069563528506564225";
    int swaps = 15;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "3043818609286140754860828883087563317537443859693386055808626121557598922756864566231875";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string x = "80301437092522842858272203910154459926903568895691";
    string y = "52078781833517251582408153358579924416926852012829";
    int swaps = 26;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "4190377987230655673641680466033095902901884188141969002885961841654331200892780068352355345583141279";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string x = "38545910061871710779360344965980386431431207484939";
    string y = "51573285979375019846213907280920942066461364589744";
    int swaps = 23;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1988330148685237253759841476152196956402977812031605785741049925764423684638302739230359925942338566";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string x = "50233223989397552958970410382732356072966427596076";
    string y = "85025784192529302260925165474921971643175552908399";
    int swaps = 24;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "4420145550674001604625462597892407256348846125609468793536878048399547417310450206418329724975772324";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string x = "653628412669143468438474646638061169058111";
    string y = "283490819387470763926989517007126943022233";
    int swaps = 361476832;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "185374599749566978297644650996913051724100655377463697934773077136789939073165589863";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string x = "5992656634888835137374061946243013583747123";
    string y = "4082860781651405790539484388074332086469777";
    int swaps = 3;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "25376997517675892640036299344832478321831505323842872791633311159942187541420550201571";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string x = "56710852";
    string y = "18058360";
    int swaps = 1;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1050671725722720";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string x = "9";
    string y = "1";
    int swaps = 1000000000;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string x = "92345678910111213141516171819202122232425262728293";
    string y = "93233343536373839404142434445464748495051525354553";
    int swaps = 1000000000;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "8609696405949383656039808453846562975449226785797484526899591504258033152563108242253058424567056029";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string x = "38573829212345678545785423462342345678987651";
    string y = "23454365656556436543636456546456456456456546";
    int swaps = 1000000000;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "955924407521172119711731242184852555837311155159719816006239058084250823900372839457896";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string x = "1181111171111112345899911111111199999911199999";
    string y = "1181111171111112345899911111111199999911199999";
    int swaps = 1000000000;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1395023598523463306969148075892302579724716637077838657244716534866828657785485440177600001";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string x = "12345678999999999999999999999999999999999999999999";
    string y = "12345678987654321111111111111111111111111111111111";
    int swaps = 999999999;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "152415789818625211424157899999999999999999999999986282578892345678888888888888888888888888888888889";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string x = "123456789123456789";
    string y = "123456789123456789";
    int swaps = 100000000;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "15241578780673678515622620750190521";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string x = "23492873498729384298734928374987293874298734";
    string y = "87349872938429873492837498729387429873459834";
    int swaps = 1000000000;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "2291918490749025449253745432255490645910946397401309228674891036792230341451865922050156";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string x = "99999999999999999999999999999999999999999999999999";
    string y = "99999999999999999999999999999999999999999999999999";
    int swaps = 1000000000;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999999999999999999999999999999999999999999800000000000000000000000000000000000000000000000001";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string x = "123";
    string y = "999";
    int swaps = 100;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "183677";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string x = "56710852";
    string y = "18058360";
    int swaps = 165;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "1050690426221700";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string x = "24";
    string y = "11";
    int swaps = 4;
    DigitsSwap* pObj = new DigitsSwap();
    clock_t start = clock();
    string result = pObj->maximalProduct(x, y, swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "264";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22753197&rd=13698&pm=10342
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
 
using namespace std;
 
class DigitsSwap {
public:
  string maximalProduct(string, string, int);
};
 
int l, x[201], y[201], xx[201], yy[201], r[201], r2[201], cur, m, can, can2;
 
string DigitsSwap::maximalProduct(string _x, string _y, int swaps) {
     l = _x.length();
           can = swaps; can2 = can;
      memset(x, 0, sizeof(x));
      memset(y, 0, sizeof(y));
      memset(xx, 0, sizeof(xx));
      memset(yy, 0, sizeof(yy));
      memset(r2, 0, sizeof(r2));   
      memset(r, 0, sizeof(r));
         x[0] = 201;
         xx[0] = 201;
         r2[0] = 200;
         y[0] = 201;
         yy[0] = 201;
         r[0] = 200;
    for(int i = l - 1; i >= 0; --i) {
         x[--x[0]] = _x[i] - 48;
         y[--y[0]] = _y[i] - 48; 
         xx[--xx[0]] = _x[i] - 48;
         yy[--yy[0]] = _y[i] - 48;
    } 
        cur = x[0]; 
    while (cur < 201 && x[cur] == y[cur]) ++cur;
    if (cur < 201) {
          if (x[cur] < y[cur] && can) {
              --can; swap(x[cur], y[cur]); 
          } 
          if (xx[cur] > yy[cur] && can2) {
             --can2; swap(xx[cur], yy[cur]);
          }          
               ++cur;
    }        
    for(int i = cur; i < 201; ++i) {
       if (x[i] > y[i] && can) {
           --can; swap(x[i], y[i]);
       }
       if (xx[i] < yy[i] && can2) {
           --can2; swap(xx[i], yy[i]);
       }
    }
        cout << can % 2 << " " << can2%2 << endl;
   if (can % 2) {
        bool f = 0;
       for(int i = x[0]; i < 201; ++i)
          if (x[i] == y[i]) {
               f = 1; break;
           } 
       if (!f) swap(x[200], y[200]);
   }
   if (can2 % 2) {
          bool f = 0;
       for(int i = x[0]; i < 201; ++i)
          if (xx[i] == yy[i]) {
               f = 1; break;
           } 
       if (!f) swap(xx[200], yy[200]);
   }
    for(int i = 200; i >= x[0]; --i) {
         cur = i; int rem = 0;
            for(int j = 200; j >= y[0]; --j) {
                  m = x[i] * y[j] + rem + r[cur]; r[cur] = m%10; rem = m/10; --cur;
            }
         while (rem) {
             r[cur] = rem%10; rem /= 10; --cur;
         }
            r[0] = cur;
    } 
    for(int i = 200; i >= x[0]; --i) {
         cur = i; int rem = 0;
            for(int j = 200; j >= y[0]; --j) {
                  m = xx[i] * yy[j] + rem + r2[cur]; r2[cur] = m%10; rem = m/10; --cur;
            }
         while (rem) {
             r2[cur] = rem%10; rem /= 10; --cur;
         }
            r2[0] = cur;
    } 
        string ret = "", ret2 = "";
           bool f1 = 1;
        if (r[0] < r2[0]) f1 = 1; else
        if (r[0] > r2[0]) f1 = 0; else {
           for(int i = r[0]; i < 201; ++i)
              if (r[i] < r2[i]) {
                  f1 = 0; break;
              } else
              if (r[i] > r2[i]) break;
        }   
    for(int i = r[0] + 1; i < 201; ++i) ret += char(r[i] + 48);
    for(int i = r2[0] + 1; i < 201; ++i) ret2 += char(r2[i] + 48);
       if (f1) return ret; else return ret2;   
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/