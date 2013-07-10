/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8721
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

class RemovingDigits {
public:
    string maxNumber(string number, string digits);
};

string RemovingDigits::maxNumber(string number, string digits) {
    string ret;
    return ret;
}


int test0() {
    string number = "12345";
    string digits = "513";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "24";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string number = "112352";
    string digits = "1123";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "52";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string number = "123456654321";
    string digits = "612534";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "654321";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string number = "654321123456";
    string digits = "612534";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "654321";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string number = "2654982765982365";
    string digits = "2345978";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "698265265";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string number = "19919293";
    string digits = "1132";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9999";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string number = "2834284798354";
    string digits = "";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2834284798354";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string number = "1627346856394756487394857463748593872718624";
    string digits = "112245647593";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "7686397648739485746374853878624";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string number = "112";
    string digits = "1";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "12";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string number = "67";
    string digits = "";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "67";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string number = "52565";
    string digits = "2";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "5565";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string number = "14683252";
    string digits = "826";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "14352";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string number = "88746889659";
    string digits = "678869898";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "45";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string number = "29889232193237";
    string digits = "8392228199233";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "7";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string number = "87283878457688339";
    string digits = "7788893834";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "8728563";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string number = "96949171972825919472";
    string digits = "9779249281511";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9699742";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string number = "94769124617372135977258";
    string digits = "77937283475492";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "976161215";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string number = "13283889825213517114725573";
    string digits = "13253521572493";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "888853171172";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string number = "96621384976426847917861718424";
    string digits = "4499664117288867896";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "6374271142";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string number = "63948242229649179794785535958628";
    string digits = "3885947849645725546998129";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9227362";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string number = "88975381139391321535871435441653578";
    string digits = "4143589814179533313";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9833258715165578";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string number = "69221355545295117949465859399554889731";
    string digits = "138152121869443575994";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "95555299969554873";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string number = "32136392761328166213138275575345131411252";
    string digits = "191226156528315137243354";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "86633277531311122";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string number = "68569657831934818124522155187229135529614332";
    string digits = "58835729956121532482212567852413635";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "998411613";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string number = "33257212876142487923324949965131895716459126931";
    string digits = "9115217672583";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "3728764249233249499653189516491231";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string number = "15817371143718659984352444646293885924219925618152";
    string digits = "1";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "5817371143718659984352444646293885924219925618152";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string number = "4512662372147424494846615339527745862687";
    string digits = "129442268461762778594634753263454864";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "7215";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string number = "44182882939243692312166314948157233491561";
    string digits = "9229793154613843324412916491316516228";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "8843";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string number = "619646946696729432186628869914553157975535";
    string digits = "69893825463966162696";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9949743218661455177555";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string number = "3597295411957252375755621371819212983145919";
    string digits = "9912122521143821725594979355759837553";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "976111";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string number = "27256881971492548195588821717668937618636782";
    string digits = "612548586277167717355998";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "99248888217186186362";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string number = "428257596197582243488843949876582354934925879";
    string digits = "9893855619428729782233469854549894452828";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "77543";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string number = "1376917715759221241513721961534698539655655666";
    string digits = "7713752199";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "769715922141513219615346853655655666";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string number = "92561243695236753989413744234548379339291363463";
    string digits = "33726546337";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "961295275989414423454839339291363463";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string number = "162725575229241779383391335271974927622374559787";
    string digits = "2474277529757291399357629331717755638892245272";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "31";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string number = "2165296726141463852622838344911192267919488882288";
    string digits = "213896884421882622322";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "6597641856883491119267914822";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string number = "33822185421845685447412783725133438895729547478948";
    string digits = "8348841";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "3822854218568547412783725133439572954747948";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string number = "2312";
    string digits = "23";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "21";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string number = "122232232124324221222";
    string digits = "2223232";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "13222144221222";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string number = "81234578961229139393931234567898765432198762134";
    string digits = "12345667895";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "896122913939393123478987654321872134";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string number = "663539473627384927364738283747637273434621475";
    string digits = "2345857373723432476";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "69769767388374763234346214";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string number = "123456789123456789123456789123456789123456";
    string digits = "1234566789123455679123498761225";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "98834713456";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string number = "7863274619324325786437856438756438756348";
    string digits = "12345678923";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "87643278643785643875643875634";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string number = "12345678912345678912345678912345678912345678912345";
    string digits = "1111223344556677889";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9923456789234567891234567812345";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string number = "123456789123456789123456789123456789123456789";
    string digits = "123456789123456789123456789";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "998123456781234567";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string number = "96324823648325471325426483245732834852345825432458";
    string digits = "182343284583246583245327";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "98687648324532452345254324";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string number = "93919353216243561277542961447639692577889623397251";
    string digits = "9995264517526473627892375";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9995321643619614738233721";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string number = "69617738813683866442384143539389328426849931699266";
    string digits = "2962426937544369131897913";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9888866844339383864316266";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string number = "12345678911234567891123456789112345678911234567891";
    string digits = "1234567891123456789112345678911234567891123456789";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string number = "18957615728297624857926196512491856784163851186577";
    string digits = "261965186573895761579";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "98297624872665124188418511577";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string number = "123456789123456789123456789123456789123456789";
    string digits = "339998845511122";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "679467923456781234567812345678";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string number = "12345678912345678912345678912345678912345678912345";
    string digits = "12345678912345678912345691234567891234567891";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "875432";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string number = "6578923421435365435643765364573266786786723452345";
    string digits = "892342143536543567886536432623";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "7765645776763452345";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string number = "341248623646327632457843653345123123453475347573";
    string digits = "12312312764568567";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "4866437324743533452323453475343";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string number = "324125";
    string digits = "2354";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "21";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string number = "123456789123456789123456789123456789123456789";
    string digits = "123456789987654321123456789";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "998123456781234567";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string number = "191";
    string digits = "1";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "91";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string number = "123897651236912873663763745614669834";
    string digits = "2865136374646";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "97651291287366376341983";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string number = "123456789123456789123456789123456789123456789";
    string digits = "12345678912345678912345678912345679123456789";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string number = "68765167964657653132468764565753461987614165196873";
    string digits = "131687987465649";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "96657653326876456575461876141651673";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string number = "9182736455463782911467899753125895765433";
    string digits = "997875511223344";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9876691468975312585765433";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string number = "11111111111111111111111111111111111111111111111111";
    string digits = "11111111111111111111111";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string number = "1234567891234567891234567891234567891234567891234";
    string digits = "1";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "234567891234567891234567891234567891234567891234";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string number = "12345678911111111111111111111111111111111111111";
    string digits = "111111";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "23456789111111111111111111111111111111111";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string number = "123456789123456789123456789123456789123456789";
    string digits = "987654321";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "912345678912345678912345678912345678";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string number = "935231";
    string digits = "35";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9321";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string number = "1129591444444444444444444444444444444444444444444";
    string digits = "119444444444444444";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2951444444444444444444444444444";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string number = "345";
    string digits = "4";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "35";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string number = "4975615589463567455681945874574854549747523141";
    string digits = "87691534587345194";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "99656755684587457454547452141";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string number = "21232";
    string digits = "2";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2132";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string number = "11223344556677889911223344556677889911223344556677";
    string digits = "1122334455667788991122334455667788991122334455667";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "7";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string number = "91827364554637829114678997531253456645764895765433";
    string digits = "1122334455789";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9876691467899753125345664576485765433";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string number = "52152";
    string digits = "21";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "552";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string number = "96324823648325471325426483245732834852345825432458";
    string digits = "182343284582465845327";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "98687354268324532345234524324";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string number = "91919";
    string digits = "9";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "9191";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string number = "3923";
    string digits = "39";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "32";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string number = "24124879687945";
    string digits = "9789";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2412487645";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string number = "211221112";
    string digits = "11";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "2221112";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string number = "12539859892349896878433468634444446223492398234322";
    string digits = "123459387833423493";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "98599996886864444446224238234322";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string number = "5645";
    string digits = "56";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "54";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string number = "26121";
    string digits = "26";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "211";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string number = "112312";
    string digits = "1123";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "21";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string number = "123456789123456789123456789123456789123456789";
    string digits = "123456789123456789123456789123456789";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "987612345";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string number = "59415";
    string digits = "59";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "541";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string number = "12345678912345678912345678912345678912345678912345";
    string digits = "1234567891234567891234567891234567891234567891234";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string number = "1236549873214568798975463214653128799786451232233";
    string digits = "795479832";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "1698732145698975463214653128786451232233";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string number = "123";
    string digits = "";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "123";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string number = "12345665432111911119112654982765982365";
    string digits = "1116125342345978";
    RemovingDigits* pObj = new RemovingDigits();
    clock_t start = clock();
    string result = pObj->maxNumber(number, digits);
    clock_t end = clock();
    delete pObj;
    string expected = "6911119112654982652365";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692170&rd=12168&pm=8721
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
 
class RemovingDigits {
public:
  string maxNumber(string, string);
};
 
  int a[51], p[51];
    int s[10];
  int v[51];
  int n, m;
  
int cmp(const int & i, const int & j)
{
    if (a[i] > a[j]) return 1;
    if (a[i] < a[j]) return 0;
    if (i < j) return 1;
    return 0;
}
 
int check(int pos, int last)
{
    int ss[10];
    for (int i = 1; i <= 9; i++) ss[i] = s[i];
    for (int i = last + 1; i < pos; i++) if (v[i] == 0) {
        ss[a[i]]--;
        if (ss[a[i]] < 0) return 0;
    }
    
    for (int i = pos + 1; i <= n; i++) ss[a[i]]--;
    for (int i = 1; i <= 9; i++) if (ss[i] > 0) return 0;
    return 1;
}
 
string RemovingDigits::maxNumber(string number, string digits) {
 
  
 
  string ans;
  
  memset(s, 0, sizeof(s));
  for (int i = 0; i < digits.length(); i++) s[digits[i] - '0']++;
  
  
  n = number.size(), m = digits.length();
  for (int i = 0; i < number.size(); i++) a[i + 1] = number[i] - '0';
  
  for (int i = 1; i <= n; i++) p[i] = i;
  sort(p + 1, p + n + 1, cmp);
  
  int pos = 0;
  memset(v, 0, sizeof(v));
  for (int i = 1; i <= n - m; i++) {
      int j;
        for (j = 1; j <= n; j++) 
          if ((p[j] > pos) && (check(p[j], pos))) break;
        
     
        for (int i = pos + 1; i < p[j]; i++) if (v[i] == 0) {
            v[i] = 1;
            s[a[i]]--;
        }
        
        pos = p[j];
        ans = ans + (char)(a[pos] + '0');
    }
    
    return ans;
}

********************************************************************************
*******************************************************************************/