/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2983
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

class CultureShock {
public:
    string translate(string text);
};

string CultureShock::translate(string text) {
    string ret;
    return ret;
}


int test0() {
    string text = "THE TWENTY SIXTH LETTER OF THE ALPHABET IS ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "THE TWENTY SIXTH LETTER OF THE ALPHABET IS ZED";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "SPELLING IN ENGLISH IS EZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "SPELLING IN ENGLISH IS EZEE";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "ZEE ZEE ZED ZEDS ZEE ZEES";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED ZED ZEDS ZED ZEES";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "MJXVTE NHACJDEZ";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "MJXVTE NHACJDEZ";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "ERLJBPU HWSYYO ZED UVZ KGHVAJC A";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ERLJBPU HWSYYO ZED UVZ KGHVAJC A";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "ZEE ZEEZEE ZEEP ZEE ZE ZE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZEEZEE ZEEP ZED ZE ZE";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = "ZEE ZEE ZEEZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED ZEEZEE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "ZEE IZEE EEVMEN HORTS ZE N";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED IZEE EEVMEN HORTS ZE N";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "MJWI ZHT TV XAZOBN QRFVDCTIY DTVS GDABUWFD C";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "MJWI ZHT TV XAZOBN QRFVDCTIY DTVS GDABUWFD C";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "NZ EIEZLZCQCL X TKF LMPQWVQ";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "NZ EIEZLZCQCL X TKF LMPQWVQ";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "MCTP UDOWXPS ZEE OHEC TEICBQVOL MND";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "MCTP UDOWXPS ZED OHEC TEICBQVOL MND";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "BWQICNFHXO MJ NJRNPKAS WMTMJUO";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BWQICNFHXO MJ NJRNPKAS WMTMJUO";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "SWADSQ ZEB ZEE ZEE UNPUXDQKG ZEE ZEE ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "SWADSQ ZEB ZED ZED UNPUXDQKG ZED ZED ZED";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "ZEE UTPJWFWFG BCNLCGXGDD B ZEE LYVN";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED UTPJWFWFG BCNLCGXGDD B ZED LYVN";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "XAYPU ZED ZE ZEE V UNRDRSU ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "XAYPU ZED ZE ZED V UNRDRSU ZED";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "EGN XL ZEB WFLATCKI G";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "EGN XL ZEB WFLATCKI G";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "ZEEP LXRDQOKYOP ZE IZEE ZE ZEB EE ZE VPFY ZEXO";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZEEP LXRDQOKYOP ZE IZEE ZE ZEB EE ZE VPFY ZEXO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = "SSXKKXIKO TTTDFHRX";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "SSXKKXIKO TTTDFHRX";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "ZE ZEE ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZE ZED ZED";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "ZEE EE ZEE ZEE RSJKBV ZED IMA ZEE ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED EE ZED ZED RSJKBV ZED IMA ZED ZED";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "O HHAP ZEES ZEEZEE ZEEP ZEEP IZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "O HHAP ZEES ZEEZEE ZEEP ZEEP IZEE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "ZED EEZ ZEE ZEEP NX FXUYWXQEQG IZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED EEZ ZED ZEEP NX FXUYWXQEQG IZEE";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "OMTE AQREBHRVOJ QGF ATD ZE KKCO RWNO ZED";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OMTE AQREBHRVOJ QGF ATD ZE KKCO RWNO ZED";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "XXNLCJVLE EEZ ZE EDBIAZQBX ZEES ZEEP V EE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "XXNLCJVLE EEZ ZE EDBIAZQBX ZEES ZEEP V EE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "LS QQYRHOHO OMY QLUTZFQX ZEE ZEE ZEE GF";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "LS QQYRHOHO OMY QLUTZFQX ZED ZED ZED GF";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "IQKL ZEE ZEE ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "IQKL ZED ZED ZED";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "QQNTTYMJC LCWTBKYBE ZEEP ZEE TXRHVJZ EKE YE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QQNTTYMJC LCWTBKYBE ZEEP ZED TXRHVJZ EKE YE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "IZEE EEZ";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "IZEE EEZ";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "ZEEP ZED ZEB EE ZEES ZEEZEE ZED ZEES EEZ ZEB";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZEEP ZED ZEB EE ZEES ZEEZEE ZED ZEES EEZ ZEB";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "QHMWCCDDXI BVGXGHFFV VPBEEJLEX XNSZZW JH";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QHMWCCDDXI BVGXGHFFV VPBEEJLEX XNSZZW JH";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = "ZEE ZEE ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED ZED";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "ZED ZEE GTXFAU ZEE ZEE ZEE QFVJJAOKD ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED GTXFAU ZED ZED ZED QFVJJAOKD ZED";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = "QOQ W HRO UKVTDNA ZE TBQAR SGVQPG TJAMQ AHPW";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QOQ W HRO UKVTDNA ZE TBQAR SGVQPG TJAMQ AHPW";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "ZEE PPBKHMCWHU FHOWGH";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED PPBKHMCWHU FHOWGH";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "ZEE C NMK";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED C NMK";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = "ZEE ZEE EEZ ZEES IZEE ZEB URHUXVGM ZEES ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED EEZ ZEES IZEE ZEB URHUXVGM ZEES ZED";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "ZE XD IZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZE XD IZEE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = "BWVKORLHY PHDFPMJF YRZGNGX NOIJ";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BWVKORLHY PHDFPMJF YRZGNGX NOIJ";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "ZEE ZEE BMAV ZEEP ZEE ZEE ZEE IZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED BMAV ZEEP ZED ZED ZED IZEE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = "ZEE BJYWIGH";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED BJYWIGH";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = "QCGDFOEQ ZEE BHSW";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QCGDFOEQ ZED BHSW";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "UHXJS ZEE JRZF YRFH";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "UHXJS ZED JRZF YRFH";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "ZEEZEE EEZ";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZEEZEE EEZ";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "ZEE ZEE BMBYCOZO KKRVY ZEEP ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED BMBYCOZO KKRVY ZEEP ZED";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "ZEEP LJKKPWIKYN UCDFCIM CPDH ZFCNG EEZ ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZEEP LJKKPWIKYN UCDFCIM CPDH ZFCNG EEZ ZED";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "ZEE JMCKEIX";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED JMCKEIX";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = "ZE ZEE LXEMMSGYH ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZE ZED LXEMMSGYH ZED";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = "IZEE ZEE ZEE ZEE ZEE ZEEZEE ZEE ZE ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "IZEE ZED ZED ZED ZED ZEEZEE ZED ZE ZED";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "THRUXY CBX ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "THRUXY CBX ZED";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "A";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "Z";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "ZE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "EE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "EE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "E";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = "ZEES";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZEES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "ZEE ZEE ZED ZEDS ZEE ZEES";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED ZED ZEDS ZED ZEES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = "ZEEZEEZEE ZEE ZEE ZED";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZEEZEEZEE ZED ZED ZED";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "ZEE ZEE ZED ZEDS ZEE ZEES EZEE BOY";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED ZED ZEDS ZED ZEES EZEE BOY";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "ZEE ZEE ZED ZEE ZEE ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZED ZED ZED ZED ZED";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = "ZEE ZOO";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED ZOO";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string text = "THE TWENTY SIXTH LETTER OF THE ALPHABET IS ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "THE TWENTY SIXTH LETTER OF THE ALPHABET IS ZED";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string text = "ZEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZED";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string text = "Z EE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "Z EE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string text = "ZEEE";
    CultureShock* pObj = new CultureShock();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZEEE";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8535434&rd=5862&pm=2983
********************************************************************************
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
vector<string> parseWords(string a)
{
  vector<string> ret; string word=""; int i=0;
 
  for(i=0;i<a.size();i++)
  {
    if(a[i]==' ')
    {
      if(word!="") ret.push_back(word); word="";
    }
    else word+=a[i];
  }
 
  if(word!="") ret.push_back(word); return ret;
}
 
class CultureShock
{
  public:
 
   string translate(string text)
  {
    vector<string> temp=parseWords(text); int i=0;
 
    for(i=0;i<temp.size();i++)
    {
      if(temp[i]=="ZEE") temp[i]="ZED";
    }
 
    string ret=temp[0];
 
    for(i=1;i<temp.size();i++)
    {
      ret+=" "; ret+=temp[i];
    }
 
    return ret;
  }
};

********************************************************************************
*******************************************************************************/