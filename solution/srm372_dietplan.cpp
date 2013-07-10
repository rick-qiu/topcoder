/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8222
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

class DietPlan {
public:
    string chooseDinner(string diet, string breakfast, string lunch);
};

string DietPlan::chooseDinner(string diet, string breakfast, string lunch) {
    string ret;
    return ret;
}


int test0() {
    string diet = "ABCD";
    string breakfast = "AB";
    string lunch = "C";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string diet = "ABEDCS";
    string breakfast = "";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDES";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string diet = "EDSMB";
    string breakfast = "MSD";
    string lunch = "A";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string diet = "";
    string breakfast = "";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string diet = "IWANTSODER";
    string breakfast = "SOW";
    string lunch = "RAT";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "DEIN";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string diet = "HUMEAYLN";
    string breakfast = "LFDXIRCVSGBWKNQUO";
    string lunch = "ZTJPEYM";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string diet = "PEV";
    string breakfast = "IKE";
    string lunch = "FMZNASVWRYCXTLGPD";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string diet = "OEFXZBCJUVPAYGL";
    string breakfast = "FXBLZUA";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CEGJOPVY";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string diet = "EHWQNRPMXUJLOVASCBKFZTDYI";
    string breakfast = "XFUAWZJKYOQ";
    string lunch = "ERTP";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDHILMNSV";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string diet = "KOAUGZQRCDITEJ";
    string breakfast = "KU";
    string lunch = "JRIACGTO";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "DEQZ";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string diet = "UBFAOVL";
    string breakfast = "AFBO";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "LUV";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string diet = "PWS";
    string breakfast = "W";
    string lunch = "S";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "P";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string diet = "HDIZCOBNFWLQJTVXRGYUSMP";
    string breakfast = "I";
    string lunch = "VMCJOPXZYDRN";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BFGHLQSTUW";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string diet = "UKE";
    string breakfast = "EK";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string diet = "EKJDQZN";
    string breakfast = "ENK";
    string lunch = "DJQ";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string diet = "ZJAU";
    string breakfast = "U";
    string lunch = "Z";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "AJ";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string diet = "BFQMKIWZ";
    string breakfast = "F";
    string lunch = "Z";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BIKMQW";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string diet = "SKRTEMQDCYZJUHOIPFNAV";
    string breakfast = "YMTABDZQSOEUVN";
    string lunch = "PCXHLG";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string diet = "UNKDMBPWEQTGJOAR";
    string breakfast = "PWBJU";
    string lunch = "TOA";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "DEGKMNQR";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string diet = "BHAWDYCPRJ";
    string breakfast = "";
    string lunch = "ACY";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BDHJPRW";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string diet = "WQYUHRZNBFV";
    string breakfast = "VR";
    string lunch = "HQ";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BFNUWYZ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string diet = "XIOGVLEDZUSRKJBM";
    string breakfast = "JZE";
    string lunch = "RI";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BDGKLMOSUVX";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string diet = "AMDIGP";
    string breakfast = "NPUHGXQJWMASLRZDTF";
    string lunch = "O";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string diet = "JTN";
    string breakfast = "";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "JNT";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string diet = "MZCNOKVFAJRXTHWBULI";
    string breakfast = "MPYH";
    string lunch = "CZRIWKBAXGFEJUTVQOS";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string diet = "SHFROEWJXGUZYPIQLDVC";
    string breakfast = "QZUHED";
    string lunch = "WFIPLYX";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CGJORSV";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string diet = "BURISWTECYKAFVDZOHJQP";
    string breakfast = "HOAWIJVES";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDFKPQRTUYZ";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string diet = "JGKE";
    string breakfast = "E";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "GJK";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string diet = "AMCEROSWITDPLFKJYHQBNXVG";
    string breakfast = "";
    string lunch = "O";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNPQRSTVWXY";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string diet = "HNGYCDRUMPEKOTWSFZQVLXAJB";
    string breakfast = "MAXZO";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEFGHJKLNPQRSTUVWY";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string diet = "AYXQKOZWMUBCPH";
    string breakfast = "AOZHKQC";
    string lunch = "MX";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BPUWY";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string diet = "YRGZVXDHPOA";
    string breakfast = "VAO";
    string lunch = "RYZ";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "DGHPX";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string diet = "DIHERSGBZJUXMYPNA";
    string breakfast = "JGBU";
    string lunch = "EHDZSRPN";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "AIMXY";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string diet = "JOTG";
    string breakfast = "GO";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "JT";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string diet = "GFI";
    string breakfast = "";
    string lunch = "IG";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string diet = "METOGPSXNVJIUALYK";
    string breakfast = "AUGTK";
    string lunch = "NESLMI";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "JOPVXY";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string diet = "KGIPDFOJMQWUHVZYLSABTRNCEX";
    string breakfast = "UOSAHDK";
    string lunch = "NBRQGZMJ";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CEFILPTVWXY";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string diet = "NVRUIHOSWKFYGTDA";
    string breakfast = "WKGRN";
    string lunch = "I";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ADFHOSTUVY";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string diet = "TGONZLJHAUIRE";
    string breakfast = "UL";
    string lunch = "IEJO";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "AGHNRTZ";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string diet = "E";
    string breakfast = "E";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string diet = "C";
    string breakfast = "HJCD";
    string lunch = "YRFVIUEGQAKBNPOLWX";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string diet = "MAUSJGHCDNPQKRTFLVZEOXYIWB";
    string breakfast = "XWRGCPZE";
    string lunch = "UJMO";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDFHIKLNQSTVY";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string diet = "DXFMVZCAUTKYSO";
    string breakfast = "DFXCM";
    string lunch = "TYAU";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "KOSVZ";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string diet = "MKXGBFCPYQHD";
    string breakfast = "FXGDP";
    string lunch = "Y";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BCHKMQ";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string diet = "GINFRCLMZJUWBSQHOPETYVXD";
    string breakfast = "VJUDPIGBHSC";
    string lunch = "REZMF";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "LNOQTWXY";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string diet = "BUPMKTLNDSYGV";
    string breakfast = "";
    string lunch = "KVSUD";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BGLMNPTY";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string diet = "UQHCESKMVNOWAFXGBIP";
    string breakfast = "QH";
    string lunch = "SX";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCEFGIKMNOPUVW";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string diet = "FQWEHTXDZUJLNMRGK";
    string breakfast = "HRLU";
    string lunch = "XQMKNTE";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "DFGJWZ";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string diet = "XAHJMB";
    string breakfast = "B";
    string lunch = "JMX";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "AH";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string diet = "DWCLVXROPBYJZUTHMGFN";
    string breakfast = "CP";
    string lunch = "TOXFVYNL";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BDGHJMRUWZ";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string diet = "BQPNCKWVHEMTDYG";
    string breakfast = "EBDN";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CGHKMPQTVWY";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string diet = "MUDQBHKNFXAJLZTSEOVP";
    string breakfast = "QUH";
    string lunch = "EPSFV";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDJKLMNOTXZ";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string diet = "PSWYXLIJHE";
    string breakfast = "WJSIY";
    string lunch = "P";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "EHLX";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string diet = "GRONUATDQLHYJMEZSKPXIVW";
    string breakfast = "IN";
    string lunch = "HXOTJ";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ADEGKLMPQRSUVWYZ";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string diet = "WJOPMLEBKSUCVZ";
    string breakfast = "QLYNWCMB";
    string lunch = "VHROPJTGIXA";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string diet = "";
    string breakfast = "A";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string diet = "BADE";
    string breakfast = "D";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ABE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string diet = "AB";
    string breakfast = "";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string diet = "ABCD";
    string breakfast = "A";
    string lunch = "B";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CD";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string diet = "ABC";
    string breakfast = "L";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string diet = "";
    string breakfast = "A";
    string lunch = "B";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string diet = "ABC";
    string breakfast = "C";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string diet = "ABC";
    string breakfast = "D";
    string lunch = "E";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string diet = "";
    string breakfast = "AB";
    string lunch = "CD";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string diet = "ZXABRQ";
    string breakfast = "ZAQR";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BX";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string diet = "ABC";
    string breakfast = "ABCD";
    string lunch = "FG";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string diet = "ZDCS";
    string breakfast = "C";
    string lunch = "S";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "DZ";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string diet = "KLMN";
    string breakfast = "Z";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string diet = "ZXYDGFJK";
    string breakfast = "D";
    string lunch = "K";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "FGJXYZ";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string diet = "AB";
    string breakfast = "AB";
    string lunch = "C";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string diet = "";
    string breakfast = "A";
    string lunch = "BC";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string diet = "A";
    string breakfast = "ABC";
    string lunch = "DE";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string diet = "ABEDCS";
    string breakfast = "E";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDS";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string diet = "ABC";
    string breakfast = "AD";
    string lunch = "BC";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string diet = "IWANTSODERZ";
    string breakfast = "SOW";
    string lunch = "RAT";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "DEINZ";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string diet = "BA";
    string breakfast = "";
    string lunch = "";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string diet = "EDSMB";
    string breakfast = "MSD";
    string lunch = "AB";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string diet = "AB";
    string breakfast = "E";
    string lunch = "A";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "CHEATER";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string diet = "IWANTSODERCB";
    string breakfast = "SOW";
    string lunch = "RAT";
    DietPlan* pObj = new DietPlan();
    clock_t start = clock();
    string result = pObj->chooseDinner(diet, breakfast, lunch);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEIN";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22700010&rd=10789&pm=8222
********************************************************************************
#include<iostream>
#include<sstream>
#include<algorithm>
#include<queue>
#include <string>
#include <vector>
#include<stack>
#include<map>
#include<math.h>
#include<set>
using namespace std;
class DietPlan {
  public:
  string chooseDinner(string d, string b, string l) {
    int i;
    string res="";
    vector<bool> per(26);
    for(i=0;i<26;i++)per[i]=false;
    for(i=0;i<d.length();i++)per[d[i]-'A']=true;
    for(i=0;i<b.length();i++)
    if(per[b[i]-'A']==true)per[b[i]-'A']=false;
    else return "CHEATER";
    for(i=0;i<l.length();i++)
    if(per[l[i]-'A']==true)per[l[i]-'A']=false;
    else return "CHEATER";
    for(i=0;i<26;i++)
    if(per[i])res+=('A'+i);
    return res;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/