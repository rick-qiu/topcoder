/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12169
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

class PlatypusDuckAndBeaver {
public:
    int minimumAnimals(int webbedFeet, int duckBills, int beaverTails);
};

int PlatypusDuckAndBeaver::minimumAnimals(int webbedFeet, int duckBills, int beaverTails) {
    int ret;
    return ret;
}


int test0() {
    int webbedFeet = 4;
    int duckBills = 1;
    int beaverTails = 1;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int webbedFeet = 0;
    int duckBills = 0;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int webbedFeet = 10;
    int duckBills = 2;
    int beaverTails = 2;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int webbedFeet = 60;
    int duckBills = 10;
    int beaverTails = 10;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int webbedFeet = 2;
    int duckBills = 1;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
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
    int webbedFeet = 4;
    int duckBills = 0;
    int beaverTails = 1;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int webbedFeet = 824;
    int duckBills = 309;
    int beaverTails = 81;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 331;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int webbedFeet = 866;
    int duckBills = 135;
    int beaverTails = 207;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int webbedFeet = 870;
    int duckBills = 198;
    int beaverTails = 205;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 230;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int webbedFeet = 636;
    int duckBills = 180;
    int beaverTails = 118;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int webbedFeet = 404;
    int duckBills = 92;
    int beaverTails = 88;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int webbedFeet = 798;
    int duckBills = 199;
    int beaverTails = 146;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int webbedFeet = 540;
    int duckBills = 186;
    int beaverTails = 60;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int webbedFeet = 792;
    int duckBills = 69;
    int beaverTails = 170;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int webbedFeet = 504;
    int duckBills = 120;
    int beaverTails = 112;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int webbedFeet = 754;
    int duckBills = 228;
    int beaverTails = 120;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 257;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int webbedFeet = 884;
    int duckBills = 234;
    int beaverTails = 122;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int webbedFeet = 622;
    int duckBills = 194;
    int beaverTails = 63;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 248;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int webbedFeet = 820;
    int duckBills = 254;
    int beaverTails = 104;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int webbedFeet = 510;
    int duckBills = 128;
    int beaverTails = 102;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int webbedFeet = 792;
    int duckBills = 328;
    int beaverTails = 45;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 351;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int webbedFeet = 622;
    int duckBills = 199;
    int beaverTails = 83;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 228;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int webbedFeet = 742;
    int duckBills = 147;
    int beaverTails = 176;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int webbedFeet = 450;
    int duckBills = 123;
    int beaverTails = 65;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int webbedFeet = 836;
    int duckBills = 277;
    int beaverTails = 95;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int webbedFeet = 466;
    int duckBills = 61;
    int beaverTails = 109;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int webbedFeet = 972;
    int duckBills = 384;
    int beaverTails = 68;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int webbedFeet = 976;
    int duckBills = 466;
    int beaverTails = 11;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 477;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int webbedFeet = 968;
    int duckBills = 94;
    int beaverTails = 229;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 255;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int webbedFeet = 438;
    int duckBills = 149;
    int beaverTails = 35;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int webbedFeet = 752;
    int duckBills = 166;
    int beaverTails = 185;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 191;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int webbedFeet = 994;
    int duckBills = 285;
    int beaverTails = 129;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int webbedFeet = 866;
    int duckBills = 299;
    int beaverTails = 122;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 311;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int webbedFeet = 724;
    int duckBills = 280;
    int beaverTails = 68;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 294;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int webbedFeet = 776;
    int duckBills = 89;
    int beaverTails = 159;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int webbedFeet = 648;
    int duckBills = 75;
    int beaverTails = 161;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int webbedFeet = 906;
    int duckBills = 272;
    int beaverTails = 138;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 315;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int webbedFeet = 956;
    int duckBills = 315;
    int beaverTails = 89;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 389;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int webbedFeet = 930;
    int duckBills = 310;
    int beaverTails = 133;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 332;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int webbedFeet = 958;
    int duckBills = 162;
    int beaverTails = 198;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int webbedFeet = 854;
    int duckBills = 253;
    int beaverTails = 118;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 309;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int webbedFeet = 856;
    int duckBills = 359;
    int beaverTails = 45;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 383;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int webbedFeet = 730;
    int duckBills = 164;
    int beaverTails = 136;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int webbedFeet = 930;
    int duckBills = 30;
    int beaverTails = 228;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int webbedFeet = 932;
    int duckBills = 111;
    int beaverTails = 212;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 254;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int webbedFeet = 672;
    int duckBills = 125;
    int beaverTails = 118;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int webbedFeet = 632;
    int duckBills = 223;
    int beaverTails = 74;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 242;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int webbedFeet = 918;
    int duckBills = 131;
    int beaverTails = 220;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int webbedFeet = 294;
    int duckBills = 81;
    int beaverTails = 54;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int webbedFeet = 990;
    int duckBills = 309;
    int beaverTails = 134;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int webbedFeet = 534;
    int duckBills = 47;
    int beaverTails = 118;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int webbedFeet = 982;
    int duckBills = 279;
    int beaverTails = 140;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 351;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int webbedFeet = 682;
    int duckBills = 74;
    int beaverTails = 146;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int webbedFeet = 496;
    int duckBills = 127;
    int beaverTails = 77;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int webbedFeet = 798;
    int duckBills = 211;
    int beaverTails = 176;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int webbedFeet = 892;
    int duckBills = 401;
    int beaverTails = 45;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 401;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int webbedFeet = 990;
    int duckBills = 251;
    int beaverTails = 162;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 333;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int webbedFeet = 996;
    int duckBills = 248;
    int beaverTails = 169;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 329;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int webbedFeet = 976;
    int duckBills = 242;
    int beaverTails = 164;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int webbedFeet = 1000;
    int duckBills = 246;
    int beaverTails = 169;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 331;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int webbedFeet = 968;
    int duckBills = 240;
    int beaverTails = 162;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 322;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int webbedFeet = 980;
    int duckBills = 244;
    int beaverTails = 163;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 327;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int webbedFeet = 996;
    int duckBills = 250;
    int beaverTails = 168;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int webbedFeet = 976;
    int duckBills = 243;
    int beaverTails = 164;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int webbedFeet = 1000;
    int duckBills = 249;
    int beaverTails = 170;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int webbedFeet = 978;
    int duckBills = 241;
    int beaverTails = 164;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int webbedFeet = 1000;
    int duckBills = 375;
    int beaverTails = 125;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 375;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int webbedFeet = 960;
    int duckBills = 349;
    int beaverTails = 131;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 349;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int webbedFeet = 926;
    int duckBills = 356;
    int beaverTails = 107;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 356;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int webbedFeet = 886;
    int duckBills = 343;
    int beaverTails = 100;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int webbedFeet = 818;
    int duckBills = 305;
    int beaverTails = 104;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int webbedFeet = 848;
    int duckBills = 321;
    int beaverTails = 103;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int webbedFeet = 986;
    int duckBills = 368;
    int beaverTails = 125;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int webbedFeet = 964;
    int duckBills = 366;
    int beaverTails = 116;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 366;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int webbedFeet = 986;
    int duckBills = 376;
    int beaverTails = 117;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int webbedFeet = 890;
    int duckBills = 327;
    int beaverTails = 118;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 327;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int webbedFeet = 970;
    int duckBills = 373;
    int beaverTails = 112;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 373;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int webbedFeet = 364;
    int duckBills = 54;
    int beaverTails = 91;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int webbedFeet = 456;
    int duckBills = 26;
    int beaverTails = 114;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int webbedFeet = 792;
    int duckBills = 58;
    int beaverTails = 198;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int webbedFeet = 980;
    int duckBills = 74;
    int beaverTails = 245;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int webbedFeet = 316;
    int duckBills = 54;
    int beaverTails = 79;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int webbedFeet = 56;
    int duckBills = 13;
    int beaverTails = 14;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int webbedFeet = 756;
    int duckBills = 83;
    int beaverTails = 189;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int webbedFeet = 828;
    int duckBills = 12;
    int beaverTails = 207;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 207;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int webbedFeet = 492;
    int duckBills = 107;
    int beaverTails = 123;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int webbedFeet = 600;
    int duckBills = 116;
    int beaverTails = 150;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int webbedFeet = 364;
    int duckBills = 178;
    int beaverTails = 2;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int webbedFeet = 666;
    int duckBills = 103;
    int beaverTails = 115;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int webbedFeet = 570;
    int duckBills = 95;
    int beaverTails = 95;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int webbedFeet = 654;
    int duckBills = 235;
    int beaverTails = 46;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int webbedFeet = 852;
    int duckBills = 200;
    int beaverTails = 113;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 313;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int webbedFeet = 930;
    int duckBills = 175;
    int beaverTails = 145;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int webbedFeet = 768;
    int duckBills = 348;
    int beaverTails = 18;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 366;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int webbedFeet = 774;
    int duckBills = 115;
    int beaverTails = 136;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int webbedFeet = 892;
    int duckBills = 84;
    int beaverTails = 181;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int webbedFeet = 452;
    int duckBills = 54;
    int beaverTails = 86;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int webbedFeet = 844;
    int duckBills = 422;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int webbedFeet = 868;
    int duckBills = 434;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 434;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int webbedFeet = 800;
    int duckBills = 400;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int webbedFeet = 886;
    int duckBills = 443;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int webbedFeet = 918;
    int duckBills = 459;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 459;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int webbedFeet = 998;
    int duckBills = 499;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int webbedFeet = 992;
    int duckBills = 496;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 496;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int webbedFeet = 874;
    int duckBills = 437;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 437;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int webbedFeet = 864;
    int duckBills = 432;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 432;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int webbedFeet = 810;
    int duckBills = 405;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 405;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int webbedFeet = 960;
    int duckBills = 240;
    int beaverTails = 240;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int webbedFeet = 924;
    int duckBills = 231;
    int beaverTails = 231;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int webbedFeet = 892;
    int duckBills = 223;
    int beaverTails = 223;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int webbedFeet = 896;
    int duckBills = 224;
    int beaverTails = 224;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int webbedFeet = 880;
    int duckBills = 220;
    int beaverTails = 220;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int webbedFeet = 896;
    int duckBills = 224;
    int beaverTails = 224;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int webbedFeet = 940;
    int duckBills = 235;
    int beaverTails = 235;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int webbedFeet = 920;
    int duckBills = 230;
    int beaverTails = 230;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 230;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int webbedFeet = 932;
    int duckBills = 233;
    int beaverTails = 233;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int webbedFeet = 908;
    int duckBills = 227;
    int beaverTails = 227;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int webbedFeet = 952;
    int duckBills = 0;
    int beaverTails = 238;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int webbedFeet = 956;
    int duckBills = 0;
    int beaverTails = 239;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int webbedFeet = 892;
    int duckBills = 0;
    int beaverTails = 223;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int webbedFeet = 888;
    int duckBills = 0;
    int beaverTails = 222;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 222;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int webbedFeet = 884;
    int duckBills = 0;
    int beaverTails = 221;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int webbedFeet = 932;
    int duckBills = 0;
    int beaverTails = 233;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int webbedFeet = 892;
    int duckBills = 0;
    int beaverTails = 223;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int webbedFeet = 880;
    int duckBills = 0;
    int beaverTails = 220;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int webbedFeet = 900;
    int duckBills = 0;
    int beaverTails = 225;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int webbedFeet = 952;
    int duckBills = 0;
    int beaverTails = 238;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int webbedFeet = 1000;
    int duckBills = 500;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int webbedFeet = 1000;
    int duckBills = 0;
    int beaverTails = 250;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int webbedFeet = 1000;
    int duckBills = 250;
    int beaverTails = 250;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int webbedFeet = 1000;
    int duckBills = 200;
    int beaverTails = 200;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int webbedFeet = 64;
    int duckBills = 11;
    int beaverTails = 11;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int webbedFeet = 10;
    int duckBills = 5;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int webbedFeet = 16;
    int duckBills = 2;
    int beaverTails = 3;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int webbedFeet = 6;
    int duckBills = 2;
    int beaverTails = 1;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int webbedFeet = 4;
    int duckBills = 2;
    int beaverTails = 0;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int webbedFeet = 1000;
    int duckBills = 400;
    int beaverTails = 50;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int webbedFeet = 502;
    int duckBills = 101;
    int beaverTails = 100;
    PlatypusDuckAndBeaver* pObj = new PlatypusDuckAndBeaver();
    clock_t start = clock();
    int result = pObj->minimumAnimals(webbedFeet, duckBills, beaverTails);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23066991&rd=15175&pm=12169
********************************************************************************
#include <string> 
#include <vector> 
#include<iostream> 
using namespace std; 
class PlatypusDuckAndBeaver { 
  public: 
  int minimumAnimals(int webbedFeet, int duckBills, int beaverTails) { 
      int counter=0,counter1=0; 
      int webbedFeet1=webbedFeet; int duckBills1=duckBills; int beaverTails1=beaverTails; 
      for(int i=0;i<1000;i++) 
      { 
     webbedFeet=webbedFeet1; 
     duckBills=duckBills1; 
     beaverTails=beaverTails1; 
          counter1=i;; 
          webbedFeet=webbedFeet-4*i; 
          duckBills=duckBills-1*i; 
          beaverTails=beaverTails-1*i; 
           
           if(webbedFeet<0||duckBills<0||beaverTails<0) 
          continue;     
      
          counter1=counter1+beaverTails; 
          webbedFeet=webbedFeet-4*beaverTails; 
          beaverTails=beaverTails-1*beaverTails; 
          
           if(webbedFeet<0||duckBills<0||beaverTails<0) 
          continue;   
             counter1=counter1+duckBills; 
          webbedFeet=webbedFeet-2*duckBills; 
         duckBills=duckBills-1*duckBills; 
     
         if(webbedFeet<0||duckBills<0||beaverTails<0) 
          continue; 
         if(webbedFeet==0&&duckBills==0&&beaverTails==0) 
         counter=counter1; 
     
           
      }         
      return counter; 
     
  } 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/