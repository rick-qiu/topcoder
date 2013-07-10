/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8378
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

class PunctuationCleaner {
public:
    string clearExcess(string document);
};

string PunctuationCleaner::clearExcess(string document) {
    string ret;
    return ret;
}


int test0() {
    string document = "This cheese is really great!!!!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "This cheese is really great!";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string document = "You really like THIS cheese!?!?!?!!!?";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "You really like THIS cheese?";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string document = "a??a ?!a a!?b b!?!C C?!!D D?!?EE ??? FF!!! !???!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "a?a ?a a?b b?C C?D D?EE ? FF! ?";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string document = " a b c A B ! !!C!!! ! ! !C ?!!? ?!? ??";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = " a b c A B ! !C! ! ! !C ? ? ?";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string document = " !!?X! ?? This is delicious!!! ??!a!?!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = " ?X! ? This is delicious! ?a?";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string document = "??????????????????";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string document = "?";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string document = "!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "!";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string document = "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "!";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string document = "?!!!!!!!!!!!!!!!!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string document = "!!!!!!!!!!!!?";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string document = "!?";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string document = "?!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string document = "!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "!";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string document = "Aso!idjf ?owiej !?foj w!?efoji o!!wIEJ";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Aso!idjf ?owiej ?foj w?efoji o!wIEJ";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string document = "! !! !!! !!!! ? ?? ??? ???? !? !!? !?! ?!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "! ! ! ! ? ? ? ? ? ? ? ?";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string document = "!a !a! a!!! !!!!a b? c?? ?c?? ??C? !!?e !?!f d?!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "!a !a! a! !a b? c? ?c? ?C? ?e ?f d?";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string document = "ALKJOSDIJFI ABC ZZZ a z aaa zzz";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "ALKJOSDIJFI ABC ZZZ a z aaa zzz";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string document = "a";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string document = "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "!";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string document = " !!! ?? a ";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = " ! ? a ";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string document = "?!? ?!? ???????????? ?";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "? ? ? ?";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string document = "! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string document = "?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!?!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string document = "??A!EXCLAMATION dkkdkii!?lol! ! ? !a ? a?! ??";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?A!EXCLAMATION dkkdkii?lol! ! ? !a ? a? ?";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string document = "!!!HOORAY FOR THIS SENTENCE!!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "!HOORAY FOR THIS SENTENCE!";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string document = "test";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "test";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string document = "a!!!!!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "a!";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string document = "!?Go!!! S!!!OC!!?!?!CER !!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?Go! S!OC?CER !";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string document = " ?? ?! ?!?!a? ??!!?!ks??! !";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = " ? ? ?a? ?ks? !";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string document = "?????";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string document = "You really like THIS cheese!!!!??? ?? ?!?!?!!!?";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "You really like THIS cheese? ? ?";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string document = " !!?X! ?? This is delicious!!! ??!a!?!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = " ?X! ? This is delicious! ?a?";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string document = "ae! ae! ae!! ae!! ae!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "ae! ae! ae! ae! ae!";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string document = "??!X?!!?! A!!! B?? ??C!!?";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "?X? A! B? ?C?";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string document = "aaa?????";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "aaa?";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string document = "?!?!?!? !? asddd ?!?A?!C?A !!!!??? ???!!! ? ? ! !";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "? ? asddd ?A?C?A ? ? ? ? ! !";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string document = "Bleh?!!!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "Bleh?";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string document = " ??! teste tt? !! ??? !!?! ";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = " ? teste tt? ! ? ? ";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string document = "a!!! b!!? c!?! d?!! e!?? f?!? g??! l!!! p???! p???";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "a! b? c? d? e? f? g? l! p? p?";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string document = "! !";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "! !";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string document = "a!!?!!";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "a?";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string document = " !X? ";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = " !X? ";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string document = "a?";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = "a?";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string document = " ";
    PunctuationCleaner* pObj = new PunctuationCleaner();
    clock_t start = clock();
    string result = pObj->clearExcess(document);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22675800&rd=10796&pm=8378
********************************************************************************
#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 
 
class PunctuationCleaner 
{ 
  public: 
  string clearExcess(string doc) 
  { 
    string s=""; 
    int i,mark=0,l=doc.length(); 
    for(i=0;i<l;i++) 
    { 
      if(doc[i]=='!' || doc[i]=='?') 
      { 
        if(doc[i]=='?') 
        { 
          mark=2; 
        } 
        if(doc[i]=='!') 
        { 
          if(mark<2) mark=1; 
        } 
      } 
      else 
      { 
        if(mark==1) s+="!"; 
        else if(mark==2) s+="?"; 
        s+=doc[i]; 
        mark=0; 
      } 
    } 
    if(mark==1) s+="!"; 
    else if(mark==2) s+="?"; 
    return s; 
  } 
};

********************************************************************************
*******************************************************************************/