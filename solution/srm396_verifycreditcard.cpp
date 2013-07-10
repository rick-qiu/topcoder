/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8740
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

class VerifyCreditCard {
public:
    string checkDigits(string cardNumber);
};

string VerifyCreditCard::checkDigits(string cardNumber) {
    string ret;
    return ret;
}


int test0() {
    string cardNumber = "21378";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string cardNumber = "31378";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string cardNumber = "11111101";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string cardNumber = "50005";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string cardNumber = "542987223412";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string cardNumber = "91";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string cardNumber = "59568";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string cardNumber = "99476855";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string cardNumber = "72570633544";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string cardNumber = "23321694490569";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string cardNumber = "88106566792269381";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string cardNumber = "70227645677166800029";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string cardNumber = "21047627293442904261501";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string cardNumber = "79127827840531882116825684";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string cardNumber = "28961242341484572254466523926";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string cardNumber = "25364925833897951720819099911835";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string cardNumber = "61032330626219552613054515880636534";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string cardNumber = "19290330449571267952817267399620211473";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string cardNumber = "74922972607332151132338752676476341408348";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string cardNumber = "81867094695525064006190464380740237559855193";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string cardNumber = "42669548126204487976132951004015731353279892806";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string cardNumber = "27017016750677705086780154746898236617814106309520";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string cardNumber = "49";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string cardNumber = "61621";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string cardNumber = "95178989";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string cardNumber = "29093335373";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string cardNumber = "32954619575167";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string cardNumber = "22539207302620951";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string cardNumber = "64077257787006697336";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string cardNumber = "26227174957722514961366";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string cardNumber = "12832046134938915145774054";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string cardNumber = "58397339162308565128348011892";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string cardNumber = "82454218665928174671917666630233";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string cardNumber = "26428845325300615167107523257347460";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string cardNumber = "50374011226424691838735023319005512983";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string cardNumber = "97579853894121818386199015645028241263121";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string cardNumber = "14654562747376652905169683538132134738382198";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string cardNumber = "21203836254012751186313077845267326827113534829";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string cardNumber = "82632318411198690768949665112363891016569914570654";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string cardNumber = "0";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string cardNumber = "9";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string cardNumber = "1";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string cardNumber = "123";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string cardNumber = "133";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string cardNumber = "1234";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string cardNumber = "4523";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string cardNumber = "258";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string cardNumber = "565689";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string cardNumber = "9999999999";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string cardNumber = "5555";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string cardNumber = "101010101000000000000000000000000000";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string cardNumber = "12345678912345678912345678912345678912345678987654";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string cardNumber = "9999999999999999999999";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string cardNumber = "414";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string cardNumber = "141";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string cardNumber = "99999999999999999999999999999999999999999999999999";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string cardNumber = "0505";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "VALID";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string cardNumber = "05";
    VerifyCreditCard* pObj = new VerifyCreditCard();
    clock_t start = clock();
    string result = pObj->checkDigits(cardNumber);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22646424&rd=12168&pm=8740
********************************************************************************
#include<iostream> 
#include<vector> 
#include<string> 
#include<map> 
#include<stack> 
#include<queue> 
#include<cmath> 
#include<sstream> 
#include<algorithm> 
#include<stdio.h> 
using namespace std; 
class VerifyCreditCard 
{ 
 public: 
 int calsum(vector <int> v) 
 { 
  int s=0; 
  for(int i=0;i<v.size();i++) 
  { 
   if(v[i]<=9) 
   s+=v[i]; 
   else 
   { 
    s+=v[i]%10; 
    s+=v[i]/10; 
    } 
   } 
  return s; 
  }  
 string checkDigits(string s) 
 { 
  vector <int> v(s.size()+1,0); 
  for(int i=1;i<=s.size();i++) 
  v[i]=s[i-1]-'0'; 
  if(s.size()%2==0) 
  { 
   for(int i=1;i<=s.size();i+=2) 
   v[i]=v[i]*2; 
   } 
  else 
  { 
   for(int i=2;i<=s.size();i+=2) 
   v[i]=v[i]*2; 
   } 
  if(calsum(v)%10==0) 
  return "VALID"; 
  return "INVALID"; 
  } 
 };

********************************************************************************
*******************************************************************************/