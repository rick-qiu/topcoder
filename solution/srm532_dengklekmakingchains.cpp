/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11754
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

class DengklekMakingChains {
public:
    int maxBeauty(vector<string> chains);
};

int DengklekMakingChains::maxBeauty(vector<string> chains) {
    int ret;
    return ret;
}


int test0() {
    vector<string> chains = {".15", "7..", "402", "..3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> chains = {"..1", "7..", "567", "24.", "8..", "234"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> chains = {"...", "..."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> chains = {"16.", "9.8", ".24", "52.", "3.1", "532", "4.4", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> chains = {"..1", "3..", "2..", ".7."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> chains = {"412", "..7", ".58", "7.8", "32.", "6..", "351", "3.9", "985", "...", ".46"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> chains = {"...", ".0."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
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
    vector<string> chains = {".4."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> chains = {"..9", "1.1", "2.2", "8.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> chains = {"...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "...", "..."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> chains = {"000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> chains = {"999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 1350;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> chains = {"1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1", "1.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> chains = {"65.", "12.", ".68", "..2", ".82", "0.4", "..0", ".15", ".41", "4.7", ".1.", "1.1", "8.6", "4.5", "..6", "6.1", "811", "83.", "...", "...", "...", ".46", "8..", ".1.", "260", "7.3", "..4", "4..", "4..", "66.", "708", "6.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> chains = {"3..", "90.", "..9", "30.", "7..", "5.4", "7.2", "9.0", ".6.", ".0.", ".42", "..1", "12.", "...", "..5", "..9", "..3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> chains = {"663", "...", "..1", "67.", "355", ".0.", "5.1", ".32", "1..", "8.6", "..8", "..6", ".67", "...", "07.", "37.", "58.", ".2.", "..0", "60.", "3.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> chains = {"9..", ".81", ".48", "222", "694", "1.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> chains = {"..9", "...", "0.4", "32.", "6..", "6..", ".4.", "3..", ".81", "22.", "5.2", "21.", "890", ".53", "8..", "...", "..8", ".4.", "9..", "4.5", ".0.", ".6.", "738", "..5", "8.0", "5.1", "6..", "974", ".1.", "1..", ".8.", "1..", "749", "..1", "...", "..3", "...", "39.", "9.0", "0.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> chains = {"2..", "131", ".77", "075", "...", "...", "..8", ".75", "523", "7.4", "4.2", "3.6", "9..", ".1.", ".97", "282", "61.", "3..", "9.1", "..3", "..7", ".4.", "...", "..1", "..1", "50.", ".80", "2.6", "3..", "83.", "..6", "6.3", ".03", "1..", ".3."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> chains = {"6.4", "...", "3.7", "..7", "8.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> chains = {"89.", "431", "0.9", ".49", "42.", ".86", "07.", "...", "54.", "2..", "...", "7.1", "79.", "7.5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> chains = {".6.", "636", "5.9", "..0", "...", ".9.", ".11", "...", "9.4", "5..", "503", "192", "7..", ".63", ".45", "652", "67."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> chains = {"59.", "8..", "...", ".26", "..1", ".3.", "25.", "6.7", "9..", "508", "85.", "..7", "4.4", ".0.", "..9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> chains = {"..8", ".17", ".4.", "...", "8.2", "..2", "5.5", "..3", "77.", ".4.", "...", ".76", ".90", "...", ".82", ".2.", "..8", ".7.", ".95", "...", "3..", ".6.", "45.", "97.", "9.4", "4.9", "88.", "..3", ".5.", "101", "...", "9.1", "95."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> chains = {"9..", "8..", "8.1", ".39", ".09", "1.3", "...", "...", "3..", "..2", "...", "..4", "02.", "...", "..0", "1..", "..9", "1.8", "7..", ".9.", "1..", ".48", ".10", "93.", "0.7", ".44", "65.", "2.6", "...", "4.3", ".5."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> chains = {"4..", "244", "3.6", "193", ".4.", "8..", ".7.", "...", "...", "..5", "0.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> chains = {".36", "..5", "...", "..0", "83.", ".94", "95.", "..3", "72.", ".87", "9.5", "04.", ".10", "...", "12.", "50.", "62.", "..9", "...", "2.4", "..0", "..8", "0.0", "6.1", "799", "1.8", ".76", ".8.", "0..", ".3.", "..1", "08.", "9.9", "97.", "...", "359", "..6", "90."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> chains = {"3..", "588", ".51", "...", "541", "003", ".81", "3..", "165", "..9", "6.8", "2.3", ".68", "9..", ".10", "...", ".66", "723", ".8.", "6..", "61.", "303", "9.5", "8.2", "..7", "..1", "9.3", ".34", ".7.", "0..", "777"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> chains = {"79.", "..7", "..9", "8..", "4.5", "0.4", "811", "..6", "8..", "...", "..6", "3.0", "4.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> chains = {"3.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> chains = {".2.", "87.", ".94", "..7", ".28", ".29", "4..", "280", "..3", "2..", "...", "3.1", "7.8", ".66", "40.", "...", "6.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> chains = {"741", "4..", "..5", ".9.", "4.3", "58."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> chains = {"9..", "...", "...", "3.7", "1..", "...", "998", ".5."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> chains = {"697", "..4", "4.5", "29.", ".86", "74.", ".90", "...", "...", "..0"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> chains = {"4..", ".3.", "140", "..0", ".4.", "..2", "64.", "011", "7.5", ".79", "3.7", "820", "7..", "..7", "...", ".36", ".8.", "168", "69.", ".41", ".0.", ".69", "0.8", "48.", "8..", "612", "6.8", "804", ".9.", "14.", "...", "8..", "9.3", "...", "2.4", ".7.", "..0", ".17", "6.7", "...", ".4.", ".3."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> chains = {".9.", "10."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> chains = {"3.3", "...", "..6", "637", "18.", "...", "5.8", "9.4", "970", "...", "6..", ".7.", ".2.", "..5", ".60", "088", "...", "593", "..4", "2..", ".80", "4.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> chains = {".12", ".7.", ".65", "8.0", "18.", "4..", "..8", "40.", "91.", "3.3", "8..", "...", "67.", ".6.", "2.3", ".79", "..5", "9.8", "9.5", "...", "1..", "145", "3.2", "0..", ".7.", "6.4", "1..", "42.", "...", "14.", "89.", "..7", "..1", ".27"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> chains = {"0..", ".8.", ".5.", "6..", ".89", "...", "603", "8..", ".1.", "5..", "5..", "1.9", "..6", ".0.", "6.1", "..4", "0.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> chains = {".14", "41.", "...", "99.", "2..", ".56", "...", "...", "3.7", "..8", "437", "6..", "...", "...", "23.", "...", "397", ".1.", "..5", "..4", "7..", "24.", "...", "197", "1..", "707", "9.6", ".3.", "73.", ".87", "...", "49."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> chains = {".5.", ".0.", ".80", "3..", "3.2", "7..", "35."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> chains = {".19", ".2.", "3.8", "90.", ".52", "4.2", ".5.", ".86", "..6", "106", "3..", ".9.", "68.", "6..", "9.2", "08.", "81.", ".84", ".3.", "3.1", "3..", "366", "7.1", "5.5", "..7", "2..", "...", ".04", "82.", "19."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> chains = {"24.", ".7.", "0..", "829", ".9.", "849", ".7.", "..4", "743", "8.2", "...", "9.7", ".85", "71.", ".34"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> chains = {"9.2", "7..", "716", "888", "27.", "04.", "3..", "..2", "632", ".2.", ".7.", "..2", ".8.", "..2", "5.8", "214", "997", "18.", "7..", ".2.", ".72", ".4.", "...", ".96", "5.3", "315", ".94", "93.", "2..", ".97"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> chains = {".4.", ".6.", ".9.", "8.6", "6.1", "..8", ".41", ".8.", ".1.", "618", "79.", "..8", "95.", "226", ".75", ".55", ".2.", "..8", "652", "888", "..4", "9.6", "...", "..1", ".1.", "844", ".2.", "9..", "..6", "...", ".17", "1..", "0.4", ".9.", "..0", "19.", "02.", "..4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> chains = {"..6", ".03", "...", "6.0", "0..", ".8.", "..3", "...", "5.3", ".77", "69.", "9.2", "45.", "...", "017", "..3", "32.", "392", "..5", ".0.", "...", "169", "..8", "91.", "429", ".6.", "723", "207", "..7", "..5", "0..", "94.", "..8", ".84", "853", "2.5", "...", ".4.", "...", "043", "80.", "442", "135", "...", ".84", ".0.", "410", "6.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> chains = {"97.", "239", ".0.", ".8.", ".52", ".80", "..1", "..5", "42.", "8..", "0..", "..9", "...", "8..", "..7", ".4.", "5.7", "..9", ".23", "1.0", ".93", "..2", "...", "28.", "...", "...", "...", "78.", ".9.", ".46", "9.1", ".41", "..9", ".6.", ".97", "..2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> chains = {".1.", ".37", ".80", "...", "7..", "145", "67.", "92.", ".55", "...", "61.", ".93", ".0.", "2.9", "0..", "501", "..5", "..0", "..6", ".71", "...", "5..", "...", ".1.", "...", ".4.", "...", ".21", "345", "..8", "..9", "..8", "96.", "..7", ".78", "324", ".48", "1..", "5..", "..1", ".84", "...", ".7.", "109"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> chains = {"2.6", "54.", "71.", "779", ".4.", ".0.", ".68", "098", "3.6", "9.6", "14.", "..9", "..3", ".72", "0..", ".5.", ".5.", "...", "..4", "870", "17.", "67.", ".6.", "..8", "3..", "4.4", ".4.", "8.5", "6.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> chains = {"...", "28.", "35.", "7..", "3.4", "..3", ".0.", "..2", "...", ".58", "...", "981", "6.0", "167", "377", ".2.", "5..", ".76", ".52", ".64", "73.", "99.", ".45", ".9.", "80.", "52.", "6.9", "...", "46.", "2.3", "..3", ".60", "..2", "...", ".4.", "...", "..3", "..."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> chains = {"...", "0.9", "52.", "...", "...", "83.", "...", "45.", ".67", "3.5", "753", ".9.", "2.3", "44.", ".1.", "930", "8.4", "6.7", "055", "...", "8.0", "0.3", ".10", ".4.", ".7.", "9..", "482"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> chains = {"4.5", "3.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> chains = {"8.7", "07.", ".87", "8.1", "184", "3.6", ".76", ".2.", ".1.", "8.8", "95.", "38.", "...", "7.3", "996", ".4.", ".1.", "..8", "06.", "..6", "..8", "532", "08.", "9.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> chains = {".7.", "32.", ".46", "890", ".08", ".02", ".49", "381", "0..", ".96", "..1", "..8"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> chains = {".2.", "22.", "33.", "99.", "...", "3..", "88.", ".16", ".1.", ".79", "..3", "111", "..3", ".35", "4.9", "780", "904", "..7", "3.6", "7..", "0..", "292", "..6", ".1.", "6..", "87.", ".88", "1.6", "..2", "379", "2.7", "07.", ".3.", "31.", "982", "3..", "0.9", "...", "912", ".40", "974", ".5.", ".1.", "512", ".4.", "92.", "2.9", ".54", "957", "..8"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> chains = {"44.", "5..", "...", "55.", "26.", "393", "...", "...", "49.", ".05", "73.", "3.5", ".7.", ".6.", "16.", "531", "3.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> chains = {"40.", "540", "..0", ".5."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> chains = {".8.", "1..", "0.4", ".1.", "4.4", "914", "372", "4..", "7..", "..4", "..3", "8.0", "..6", ".0.", "4.1", ".85", ".3.", ".16", "3.4", "664", ".81", "...", ".7.", "27.", "3.8", "437", "...", "323", "8.7", "0.9", "200", "09.", ".0.", "3..", "2.9", "...", ".41", "6..", "7.9", "8.3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> chains = {"4.6", "89.", ".9.", "04.", ".36", "55.", "...", ".58", ".93", ".3.", "9.0", "..0", "..4", ".63", "6.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> chains = {"101"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> chains = {"7.8"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> chains = {"412", "..7", ".58", "7.8", "32.", "6..", "351", "3.9", "985", "...", ".46"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> chains = {"5.5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> chains = {"7.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> chains = {"1.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> chains = {"8.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> chains = {"16.", "9.8", ".24", "52.", "3.1", "532", "4.4", "111", "8.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> chains = {"487", "482", "220", "149", "237", "097", "000", "161", "533", "943", "749", "875", "075", "164", "396", "588", "16.", "841", "368", "0.1", "30.", "598", "10.", "512", "805", "820", "617", "645", "458", "637", "298", "89.", "837", "5.0", "5.0", "178", "872", ".21", "033", "832", "950", "210", "377", "381", "866", "108", "8.4", "718", "2.2", "901"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 572;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> chains = {"9.8"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> chains = {"9.9", "123"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> chains = {"123", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> chains = {"123", "456", "2.2", "1..", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> chains = {"..1", "3..", "2..", ".7."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> chains = {"444", "..7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> chains = {"111", "8.8", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> chains = {"16.", "9.8", ".24", ".52", "3.1", "532", "4.4", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> chains = {"5.6", "102", ".7."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> chains = {"..5", "2..", "7.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> chains = {"111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> chains = {".9.", "123"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> chains = {"1.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> chains = {"..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> chains = {"123", "1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> chains = {"412", "..7", ".58", "7.8", "32.", "6..", "351", "3.9", "985", "...", ".46", "999", "777", "364", "224", ".97", "87."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> chains = {"111", "1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> chains = {"555", "4.5", "21.", ".01", "6.7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> chains = {"111", ".11", "11.", ".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> chains = {"0.0", "1.1", "2.2", "3.3", "4.4", "5.5", "6.6", "7.7", "8.8", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> chains = {"234", "435", "111", "...", "7.9", "44.", "23.", "3..", "..3", ".23", "..3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> chains = {"9.9", "8.8", "7.7", "6.6", "5.5", "4.4", "3.3", "2.2", "1.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> chains = {"9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> chains = {"1.9", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> chains = {"...", "..."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> chains = {".9.", ".1."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> chains = {"5.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> chains = {"123", "1.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> chains = {".99"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> chains = {"7.3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> chains = {"010", ".7."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> chains = {"..1", "9.8", "567", "24.", "8.6", ".42"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> chains = {"111", "111", "1.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> chains = {".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".1.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0.", ".0."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> chains = {"7.4", "..1", "5.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> chains = {"5.3", "123"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> chains = {"111", "6.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> chains = {"122", "..1", "2..", ".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> chains = {"111", ".9.", "11.", ".11"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> chains = {"16.", "9.8", ".24", "52.", "3.1", "532", "4.4", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> chains = {"9.6", "..1", "8.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> chains = {"..1", "123"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> chains = {"12.", ".12", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12.", "12."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> chains = {"...", ".6.", "111", "1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> chains = {"3.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> chains = {"1.1", "1.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> chains = {".15", "7..", "..3", "402", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> chains = {"123", ".2."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> chains = {"9.9", "9.9", "9.9", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> chains = {".9.", ".91"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> chains = {"7.7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> chains = {".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> chains = {"412", "..7", ".58", "7.8", "32.", "6..", "351", "3.9", "985", "...", ".46", "412", "..7", ".58", "7.8", "32.", "6..", "351", "3.9", "985", "...", ".46", "412", "..7", ".58", "7.8", "32.", "6..", "351", "3.9", "985", "...", ".46", "1..", "2..", "3..", "4..", "5..", "6..", "7..", "8..", "9..", "..1", "..2", "..3", "..4", "..5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> chains = {".7.", ".1."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> chains = {"111", "222", "333", "444", "555", "1.1", "1.9", "9.1", "5.5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> chains = {"4.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> chains = {"123", "..5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> chains = {"111", "1.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> chains = {"3.2", "3.4", "2.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> chains = {"9.6", "44.", "..4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> chains = {"..1", "2..", "888", "4.7", "4.7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> chains = {"123"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> chains = {"..9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> chains = {"123", "123"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> chains = {"111", ".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> chains = {".9.", "11.", "111", ".11"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> chains = {"5.9", "9.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> chains = {"9.8", "8.9", "2..", "..3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> chains = {"7.6", "8.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> chains = {"1.1", "2.2", "3.3", "8.8", "9.9", "111", "11.", "1..", "..2", ".22", ".3."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> chains = {".9.", "000", "000", ".01", "10.", "000", "000", "010", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000", "000"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> chains = {"9.8", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> chains = {"111", "5.2", "5..", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> chains = {"9.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> chains = {"32."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> chains = {".9.", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> chains = {"1.5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> chains = {"..1", ".2.", "2.3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> chains = {"4.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> chains = {"..1", "7..", "567", "24.", "8..", "234"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> chains = {"5.3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> chains = {".11"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> chains = {"111", ".9.", "11.", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> chains = {"123", "8.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> chains = {".15", "7..", "402", "..3", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> chains = {"9.9", "9.9", "1.3", "4.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> chains = {"111", ".7."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> chains = {"9.9", "11."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> chains = {"1.4", "1.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> chains = {".9.", "3.7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> chains = {"..9", "999"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> chains = {"99."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> chains = {"111", "222"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> chains = {".7."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> chains = {"..3", "4..", ".5."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> chains = {"999", "9.9", "..9", "1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> chains = {"1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> chains = {"3.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> chains = {"1.2", "..2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> chains = {"6.8", "111", "7.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> chains = {"123", "456", "2.2", "2..", "..2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> chains = {"2.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> chains = {"1.5", "3.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> chains = {".1."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> chains = {"999", ".99"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> chains = {"..5", "3..", "8.9", "9.8"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> chains = {".2.", ".1."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> chains = {"..7", "123"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> chains = {".1.", ".2."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> chains = {"5.7", "1.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> chains = {"79."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> chains = {"111", "..1", "1..", ".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> chains = {".5."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> chains = {".9.", "11.", "111", ".11", "23.", "123", "2.2", "91.", "11.", "2.9", "9.8", "238", "944", "2..", "191", "101", "...", "123", "322", "12.", "12.", "12.", "21.", "123", "43.", "23."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> chains = {"333", "1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> chains = {"3..", "333"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> chains = {"111", "5.5", "2..", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> chains = {"8.7", "123", "9.0", "0.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> chains = {"9.9", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> chains = {"..1", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> chains = {"123", "456", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> chains = {"111", "111", "111", "..8", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> chains = {"999", ".7.", ".7."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> chains = {"..1", "9.9", "3.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> chains = {"5.6", "..7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> chains = {"5.8"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> chains = {"111", "3.4", "1.3", "2.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> chains = {".1.", "000", ".0."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> chains = {".5.", ".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> chains = {"2.3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> chains = {"999", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> chains = {"1.3", "5.7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> chains = {"111", "9.9", "1.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> chains = {"9.9", "000", "1..", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> chains = {"999", "..7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> chains = {"1.1", "1.1", "1.1", ".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> chains = {"6.7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> chains = {"111", "6.4", "5.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> chains = {"9.8", "7..", "..7", "4.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> chains = {"8.9", ".43", "43."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> chains = {"1.1", "1.1", "9.9", "8.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> chains = {"1.1", "2.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> chains = {"222", "9.9", "5.1", "1.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> chains = {"5.2", "6.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> chains = {"532", "7.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> chains = {"9.7", "8.1", "8.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> chains = {"6.9", "1.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> chains = {"5.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> chains = {"..3", "1..", "5.9", "777"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> chains = {"13."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> chains = {"111", "111", ".9.", ".1.", "1..", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> chains = {"999", "99."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> chains = {"2.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<string> chains = {"9.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<string> chains = {"956", "482", "168", "314", "849", "207", "060", "705", "673", "849", "265", "774", "579", "830", "223", "671", "554", "026", "061", "117", "300", "483", "012", "903", "885", "770", "893", "074", "783", "710", "083", "450", "145", "620", "356", "667", "677", "191", "627", "276", "513", "995", "926", "532", "444", "279", "237", "315", "785", "832"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 664;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<string> chains = {"12."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<string> chains = {"999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999", "999"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 1350;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<string> chains = {"1..", "23.", "456", "..1", ".77"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<string> chains = {"...", ".7.", "211"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<string> chains = {"5.3", "4.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<string> chains = {"16.", "9.9", ".24", "52.", "8.8", "532", "4.4", "111", "...", "..."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<string> chains = {"..2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<string> chains = {".9.", "123", "1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<string> chains = {"9.9", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<string> chains = {"9.9", "111", "1.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<string> chains = {"9.9", "111", "8.8"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<string> chains = {"9.9", "3.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<string> chains = {"111", "3.5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<string> chains = {"6.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<string> chains = {"1.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<string> chains = {"3..", "..4", "7.7", "9.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<string> chains = {"9.9", "8.7", "2..", "..3", "010"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<string> chains = {"333", "2..", "777"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<string> chains = {"1..", "3.9", "402", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<string> chains = {"0.0", "9.9", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<string> chains = {"9..", "..1", "3.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<string> chains = {"402", "..3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<string> chains = {"111", "222", "333", "444", "555", "1.1", "5.5", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<string> chains = {"..8", "8.9", "123", "5.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<string> chains = {"111", "9.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<string> chains = {"9.9", "111", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<string> chains = {"123", ".45"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<string> chains = {"111", ".9.", "..1", "1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<string> chains = {"23."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<string> chains = {".22"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<string> chains = {"1.3", "3.4"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<string> chains = {"..1", "111", "11."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<string> chains = {"9.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<string> chains = {"..1", "8.7", "1.1", "9.9", "9.7", "123"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<string> chains = {"1..", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<string> chains = {".9.", ".2."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<string> chains = {".8.", "..9", "9..", "..."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<string> chains = {"111", "3.6"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<string> chains = {"9.8", "51."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<string> chains = {"13.", "9.9", ".24", "22.", "3.1", "532", "4.4", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<string> chains = {"111", "11."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<string> chains = {"111", "7.3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<string> chains = {"3.3", "11.", "..1", "111", ".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<string> chains = {"..8", "9.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<string> chains = {"6.5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<string> chains = {"6.3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<string> chains = {".9.", "999"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<string> chains = {"6..", "3.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<string> chains = {".9.", "...", "023", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    vector<string> chains = {"5.4", "4.5", "222"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    vector<string> chains = {"2.3", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    vector<string> chains = {"...", "..0", "..1", "..2", "..3", "..4", "..5", "..6", "..7", "..8", ".1.", ".10", ".11", ".12", ".13", ".14", ".15", ".16", ".17", ".18", ".2.", ".20", ".21", ".22", ".23", ".24", ".25", ".26", ".27", ".28", ".3.", ".30", ".31", ".32", ".33", ".34", ".35", ".36", ".37", ".38", ".4.", ".40", ".41", ".42", ".43", ".44", ".45", ".46", ".47", ".48"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    vector<string> chains = {"3.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    vector<string> chains = {"666", "4.5", "..3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    vector<string> chains = {"222"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    vector<string> chains = {"..1", "111", "1..", ".9."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    vector<string> chains = {"...", ".7.", "211", "..1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    vector<string> chains = {"...", "...", "000", "8.7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    vector<string> chains = {"15.", "9.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    vector<string> chains = {"1.2", ".9.", "6.9", "1.1", "111", "147", "8.8", "9.8", "7.5", "5..", ".7.", ".77"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    vector<string> chains = {".13", "9.9", "14."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    vector<string> chains = {"8.9", "1.9"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    vector<string> chains = {"16.", "9.8", ".24", "52.", "3.1", "532", "9.9", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    vector<string> chains = {"..3", "3..", "9.7", "777"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    vector<string> chains = {"9.8", "7..", "..5", "444"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    vector<string> chains = {"3.3", "2.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    vector<string> chains = {"6.6", "333", "2.5"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    vector<string> chains = {"1.9", "9.1"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    vector<string> chains = {"1.9", "9.1", "999"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    vector<string> chains = {"34."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    vector<string> chains = {"2.2"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    vector<string> chains = {".11", "11.", "5.3", "6.3"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    vector<string> chains = {"1.1", "8.7"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    vector<string> chains = {"123", "456", "1.."};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    vector<string> chains = {"7.9", "1.1", "138", ".20"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    vector<string> chains = {"16.", "9.9", ".24", "22.", "3.1", "532", "4.4", "111"};
    DengklekMakingChains* pObj = new DengklekMakingChains();
    clock_t start = clock();
    int result = pObj->maxBeauty(chains);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22752635&rd=14725&pm=11754
********************************************************************************
// Authored by dolphinigle
// TopCoder
 
#include <vector>
#include <list>
#include <map>
#include <set>
 
#include <queue>
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
#include <cstring>
#include <assert.h>
 
#define FORN(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define DEBUG(x) cout << '>' << #x << ':' << x << '\n';
 
#define REP(X,Y,Z) for (int (X) = (Y);(X) < (Z);++(X))
#define RESET(Z,Y) memset(Z,Y,sizeof(Z))
 
#define SZ(Z) ((int)(Z).size())
#define ALL(W) (W).begin(), (W).end()
#define PB push_back
 
#define MP make_pair
#define A first
#define B second
 
#define INF 1023123123
#define EPS 1e-11
 
#define MX(Z,Y) Z = max((Z),(Y))
#define MN(X,Y) X = min((X),(Y))
 
#define FORIT(X,Y) for(typeof((Y).begin()) X = (Y).begin();X!=(Y).end();X++)
 
using namespace std;
 
typedef long long ll;
typedef double db;
typedef vector<int> vint;
typedef vector<ll> vll;
 
class DengklekMakingChains {
public:
int maxBeauty(vector <string>);
};
 
int DengklekMakingChains::maxBeauty(vector <string> chains) {
  int score = 0;
  int n = SZ(chains);
  
  vector<string> sisa;
  sisa.PB("...");
  sisa.PB("...");
  
  FORN(i, n) {
    int ok = 1;
    FORN(j, 3) if (chains[i][j] == '.') ok = 0;
    if (ok) {
      FORN(j, 3) score += (chains[i][j] - '0');
    } else {
      sisa.PB(chains[i]);
    }
  }
  
  int best = score;
  FORN(i, SZ(sisa)) FORN(j, SZ(sisa)) if (i != j) {
    int tambah = score;
    FORN(k, 3) {
      if (sisa[j][k] == '.') break;
      tambah += sisa[j][k] - '0';
    }
    FORN(k, 3) {
      if (sisa[i][2-k] == '.') break;
      tambah += sisa[i][2-k] - '0';
    }
    MX(best, tambah);
  }
  
  FORN(i, SZ(sisa)) if (sisa[i][1] != '.') MX(best, sisa[i][1] - '0');
  
  return best;
  
}
 
 
//Powered by [KawigiEdit] 2.0!
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/