/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7929
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

class SMSLanguage {
public:
    string translate(string text);
};

string SMSLanguage::translate(string text) {
    string ret;
    return ret;
}


int test0() {
    string text = "I HATE rats;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "i h8 r@s & U";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "What is the weather like today?";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "wh@ is the we@her like today";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "It is not too late to..";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "it is not too l8 to";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "this text is already in sms language";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "this text is already in sms language";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "only yoyoyou";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "only yoyoU";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "only yoyoyoU";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "only yoyoU";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "only YoYoYoU";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "only yoyoU";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = ".;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "THIS TEXT IS ALREADY IN SMS LANGUAGE";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "this text is already in sms language";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "ate ateate ate";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8 88 8";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "to toto to";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "to toto to";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "tototototototototototototototototototototototototo";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "tototototototototototototototototototototototototo";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "ototototototototototototototototototototototototot";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ototototototototototototototototototototototototot";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "totoototootooototoootooootootooototoooto";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "totoototootooototoootooootootooototoooto";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "ateatateateatateateaateteateattteaaeettateatate";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8@88@88a8te8@tteaaeett8@8";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "andatforyouyouforatandateatandforyou";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&@forUUfor@&8@&forU";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "a;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "@";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "toooooooooo cooooool";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "toooooooooo cooooool";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = "A..at;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a@ a t t a ";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = " ";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = ";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "tootoOtOotOOTooToOTOoTOO";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "tootootootootootootootoo";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "..qattaq..";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "q@taq";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "t.......o.........o";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "too";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "A.T.E";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = ".;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "yo u @8&";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "HaTe HanD YoU AteaTAte";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "h8 h& U 8@8";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "a.nd";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "a;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "AZ";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "az";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = "a?te";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "ate";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = "Y.O.U";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "at";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "@";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "a.n.d.";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = "a.te";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "a?nd";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = " a.n.d w;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = " & wh@ about this U gre8r";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "an.d a;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "& @ 8 U";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = "aha?";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "aha";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = " ";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "a;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "a";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = " atAtEatatATEATE ";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = " @8@@88 ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "at.ea.teate";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "888";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "yoaaa";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "yoaaa";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = "ate ate";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8 8";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = "ABC!!h!!!";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "abch";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "?Y.o.U!";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "yo;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "U are fima";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "at.e";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "fate";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "f8";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = " ATE uUuyou wet;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = " 8 uuuU wetwewett pwer ";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "atande an;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "@&e &";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = "a;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "an";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "an";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = "an;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "...a.n.d";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "andatand.;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&@&@8&UuufrU88";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = ".a.n.d.";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string text = "i am";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "i am";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string text = "!a!n!d!";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string text = "ha;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "h8";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string text = "a a";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "a a";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string text = "a!n!d";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string text = " yo;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = " U are fima ";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string text = "and and you you you";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "& & U U U";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string text = "at ";
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "@ ";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string text = "a?.;
    SMSLanguage* pObj = new SMSLanguage();
    clock_t start = clock();
    string result = pObj->translate(text);
    clock_t end = clock();
    delete pObj;
    string expected = "&";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22658543&rd=10765&pm=7929
********************************************************************************
#include <vector>
#include <string>
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
#include <ctime>
 
#define all(v) (v).begin(), (v).end()
#define fe(i, v) for(int i=0; i<(v).size(); i++)
 
using namespace std;
 
class SMSLanguage
{
public:
  string translate(string text)
  {
    string x="";
    for(int i=0; i<text.size(); i++)
      if(text[i]!='.' && text[i]!=',' && text[i]!='?' && text[i]!='!') x+=text[i];
    for(int i=0; i<x.size(); i++)
      x[i]=tolower(x[i]);
    while(x.find("and", 0)!=-1)
    {
      int p=x.find("and", 0);
      x=x.substr(0, p) + "&" + x.substr(p+3);
    }
    while(x.find("ate", 0)!=-1)
    {
      int p=x.find("ate", 0);
      x=x.substr(0, p) + "8" + x.substr(p+3);
    }
    while(x.find("at", 0)!=-1)
    {
      int p=x.find("at", 0);
      x=x.substr(0, p) + "@" + x.substr(p+2);
    }
    while(x.find("you", 0)!=-1)
    {
      int p=x.find("you", 0);
      x=x.substr(0, p) + "U" + x.substr(p+3);
    }
    return x;
  }
};
// Powered by myself...

********************************************************************************
*******************************************************************************/