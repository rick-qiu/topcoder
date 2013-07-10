/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4677
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

class MaxTrip {
public:
    int minBuy(string portA, string portB);
};

int MaxTrip::minBuy(string portA, string portB) {
    int ret;
    return ret;
}


int test0() {
    string portA = "AAX";
    string portB = "CBY";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
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
    string portA = "AAAAA";
    string portB = "CBXYQ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string portA = "ABBBBC";
    string portB = "BDDDCA";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
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
    string portA = "ABBBBCC";
    string portB = "BDDDCAB";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string portA = "ABCDEFGHIJKLM";
    string portB = "NOPQRSTUVWXYZ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string portA = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string portB = "AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYY";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string portA = "HGFDDX";
    string portB = "BCQKXK";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string portA = "AB";
    string portB = "AB";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string portA = "ALKSJDLFKSJDHFGHRASDJFKDLSLALSLDLDLDLDLDLDLDLEISHJ";
    string portB = "AAAAAAABBBBBBBBBBBBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCX";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string portA = "ABCDEFGHIJKLMNOPQRSTUVWXYZZZZZZZZZZZZZZZZZZZZZZZZZ";
    string portB = "ABCDEFGHIJKLMNOPQRSTUVWXYZZZZZZZZZZZZZZZZZZZZZZZZZ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string portA = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string portB = "QAZWSXEDCRFVTGBYHNUJMIKLOP";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string portA = "QRWEQAFGSDAZXCVZTYUIOPGHJKLBNM";
    string portB = "EWRQWADSFFSXCXCXIYOTUPLKGJGMBN";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string portA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string portB = "MNOPQRSTUVWXYZABCDEFGHIJKL";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string portA = "ZYWXTSRQ";
    string portB = "YZXWSTQR";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string portA = "KLMN";
    string portB = "KLMO";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string portA = "KLMNQP";
    string portB = "KLMONN";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string portA = "KLMNAB";
    string portB = "KLMOLA";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string portA = "KLMNABNN";
    string portB = "KLMOLAXZ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string portA = "KLMNABNNN";
    string portB = "KLMOLAXZF";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string portA = "AAAAAAAAAAZZZZZZZZZUV";
    string portB = "BCDEFGHIMKLMNOPQRSTUV";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string portA = "BUMNVXJBKSVHLCJUYHLWHHWWQQCRTVMGWZDLUOLGP";
    string portB = "PSVKDJBQWLILMWTJLREOFQXECJQSFOOUZPGVUOQJM";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string portA = "NHMLYTTWVFMSPLYOFCPPONRDLXUMJLGWANKUFQINPDKKROTE";
    string portB = "INNFRPYMHQCYDQPBNTKPOPRZZRBFNYUYHHXHWGRHPTVLZLUY";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string portA = "IAHWMFUOVNIPSWIPYDZGAJXAANNLWJTAXUEUFEXGXSRSABL";
    string portB = "FPTORFHXQHNPLREXFDMDURFHPKFMQGETDUHXHIYZWLEBSVI";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string portA = "GJKAOMMXXLPRGGUGEQIGKNYARQKHEQGLFPIJOYMPYMTQ";
    string portB = "VDNSGSNRMFGYVITJAXUPYGPVONRBPMEYKTPIYXYTTWRM";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string portA = "WCZSXTTXETTFAVVGJZCFHFALMRCXCQXLZFAGPUGKHBXNG";
    string portB = "BOPDGTFRYKYANIPEKOXBQVLAXLHYXAWFKGWIAJODOXXNQ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string portA = "XCFFROKBFCLYLPCIFPBQZEGXIJRFLIDBCOPJZBSMOPGUGB";
    string portB = "KRWHLSTBBORRYAQTDLVDOSUVZSRZFCIXCFPNXFOAKVZLDT";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string portA = "RPIBGHLIHLTEWENMNDFMSYYUSIIIKBJRHTSJXCLNWESPF";
    string portB = "JOXTBLXRMRQWNUEMPAMHSQNHOKQJDYSYCSPFBRTQTEABQ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string portA = "LKLWHBUNFEFKBKKBNVXBTUSSVRHLNCHZDJSCZWUKZZD";
    string portB = "PZRPPITUZPVQPUKQDUMJHYUYOGYNPADWXZIIGJYFEAE";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string portA = "PIDODEMIGXCWXYDSXZEGRUEYHJJWWHYPUUNTIEYYEXFHRD";
    string portB = "TASXCBITDIRNAELJDIDTVQDZQFXXTMUKWATSBITMCFYXFM";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string portA = "JJYMJZHOGKQQSZRCEUXZFGHUJWILCLQHCCENDRHIMR";
    string portB = "ZBEDJRFARLKGVLRTESZOETIZNCQZFRLBNLCJTQTUGR";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string portA = "DFAAFFABBCFBCCAFDAADFFBEFADDCBCACCEDBCDACBCEFBFFDE";
    string portB = "FDEBADFEFACDAACFFAEEBECAFADAABCEDDCAFAEAEEBAFFFDED";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string portA = "CDBEDAFDFECEBDFBDBBAEDFDCFFBDDEBCCEECEADC";
    string portB = "BABAFADBCACEACAAAACCBABDABEEFCFBBACFDCAFF";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string portA = "AEFAFADBCDDAEBEBAAECFDEBCFFCBCECFDFBECEFC";
    string portB = "EBEBEBCBFBFCABEEBEDDACECADBFFECFBFCBDCCCF";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string portA = "DCADDEDABEDACBEBDFFCDEBFDCABBCAFAEFBBDFEAD";
    string portB = "BBDEBBFFCACFBFCDAEDCABBCCAFBFCEEDDACBBEAEC";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string portA = "DDBDDCCEFECBABACDDAFFEBEFCCABDFEBBDABDDAFCDDCBCC";
    string portB = "ADCADFCBCEFEADBEFDFCABDADAFCDBCEDAFCEFEEDEBFEBDE";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string portA = "EFBDCFDBAEABFBECABAAADCBBDFBBAEBADCEEDBBCBC";
    string portB = "CFFFBEDBEDFFECBCFCCEADCCACBCFFFCEBFABEEAADD";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string portA = "ECADADCFCFEBACABEECBFEFBBFFDDEEEBCABBAFE";
    string portB = "DEACBBEFABBCACAECCABAABBCDBBAAFABBFCECFD";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string portA = "DFBEDBBCAEECBCEADFAEDEEFECCCCBCCADADCAEFDBAAE";
    string portB = "BCDACDDAEBFFDCEAFEAFDCBDAFACFABECFAACFFBFDBDB";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string portA = "AFBACDBBCCAFAEFECEFABBBEEADEEDAAFFFABAEEEEFDADB";
    string portB = "EAEEBBDBDAABACCAECDDEBDBDBECEDCEAEABBEEDCDFDEAB";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string portA = "DFBEFEFDCECEAAFDFDADAADBCBEBFFCDECBDEEDC";
    string portB = "CBEDCDCAFDAFFDEFAEEAEDDFBADBDBEEDFACEFEC";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string portA = "NTNKLNUURPLLUQNTNUTNNRKQPNUOUUOORSLNQKQTLSO";
    string portB = "ROQLPONLUOTPOUKKSKNNNONQSMTSUKUOMQSTKQPUNRK";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string portA = "ONUOPPMQRKLPKROUNOKLSRPMOLQLKTRKROTSNUTUTTRO";
    string portB = "LRRLNKULKPNKPOPNPPPTTUMRPOKUUQNTLSPORQRTNTSK";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string portA = "TLOOPSKQQULRSLMNUQNTORUUOSLUQNSROLPOMPTKTSML";
    string portB = "RKRMLKUSUNURKSQULRKUQUTMRTQRUORRSNUTNMUTKRTO";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string portA = "TRMMOLKNPONUQQNMMQKNSPUQRPUKSQLTOPTSOLNKNMO";
    string portB = "TNRLUTPKUQMMNSKOSSKRUTQQRSPSUURTPSQTNTNQMUR";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string portA = "UULOKKTROPRMMOPUNTRLNRKRTKONLMMNLURNNNQMONPRQTNL";
    string portB = "LUKSKPNMKTPKMQTKOSSQNPQLSSMTRNOUKMKLQMNOROQQPNMN";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string portA = "OLQPPMONLSROSNMPQLPKMLTUQQOUUQSUSLOUPKSQ";
    string portB = "POOPTMSNNRLPPNNSQOMUULLOQSKMKUPOSPPMNOLS";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string portA = "QNKPTQUUOPTMTPRRURUPMOMRKPNQNNNQSLSRRNNOLNOLSKTKUM";
    string portB = "SUSSLTMQPKUPNOQQNRKTRUTRMKQNMLNKOUNUMKOUKRPSMRQLMR";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string portA = "NPOPOULNQUQRLRMSSQNNQMPSPPLOQTLQPSLLUQLNRPQRSMSMQ";
    string portB = "KOSNTOSNOOPMQSUKNRUTMPPLLMLSLUONUQLLTPUPRROKQKQSK";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string portA = "SUPSUNQMQLQRNUUUQMMQMLMUSUNQSKTOTMKNTPRKS";
    string portB = "PPLSQOTLKNLRLOTKRQNPRNNRQPPTLOPKLLUOOTMTS";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string portA = "NLSRLKSTOPTSPUSQPLNLPUPKOQQTMQTUTLMSKROTPSONKLL";
    string portB = "STLRLMQTMNULUUUQTPPMQPPORTTOMMKSOTPQTTLLLOPUONL";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string portA = "WJYECOOREHIEINIMZFPNFAHLCTOFVRADIJZFIDOX";
    string portB = "XEAPDXVFWGMHYXFRHAXCFOLLFOJXJGUWVCYTIZJB";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string portA = "IHEOBGBRADONAHVZYQMGREVAFCROEIEWSRDCFTQQNTFPJWX";
    string portB = "RVZZQXKJMTJTKJWCQZVKRINZWOVPJJUNHKTSBRQRYSHCCCA";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string portA = "YHYDGMZBYIOPJGIULNJHMUHFNUJGETXSMIRNYCTVA";
    string portB = "KJVAENZKOFZQFBJNDTEPUUJFDCLIATOYVYBHRRWFG";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string portA = "KVDWGAUCFUKVELGZAVUNAEHBNXYROHENBBNRZEIYW";
    string portB = "KHDEQKYHPWEMSQCAJKOKPOHNDIVRNZDKFPSGKEJDE";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string portA = "GYBVVSSAYUVEYPVCXBWLUJTDSEAEOQWOPBDSFYZUI";
    string portB = "PRIUPGHQCXELHEZIXAKAYFZARSKOMHEXJQJSXDBGK";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string portA = "BBILMYYLETKBSWECOQIRPAJHSJPKPDFRYOOSGZQVBOFBOYSOX";
    string portB = "UFGEVUCNMLZESVXZZQRHPEHBIEFOFIKIZZVKEUBALMPGJJTIP";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string portA = "SIRPGHFPPELKYKNJZZANQSHRPENYWBAXRAQCXZTGWETEHSYUVM";
    string portB = "YVRFQJUDXIZHVLXOQMSPRAAPABAQLVXBROFXSYUNACCWOLOQUZ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string portA = "KGNRRVNSOFPASTIEUXHMTYWRDVMRGKJEOGVYMFBAYYKA";
    string portB = "FPMKEKLYOZYPXGPMGDONKBLEEMNSNIECGUPMNKIZXULG";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string portA = "SGTRWPLBEOCLXUVZMOECITDAFOJJMGSXMMEYZGBNFLP";
    string portB = "MXUJWDSAPZCNCUNLITIRKJEADPZYEKSWZLIZSHFDGLV";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string portA = "MQELPVDYLSHSQZVQUEEOYGFFQTQEIQVRNQBNUIAZRYODHIUHN";
    string portB = "IAZQMFESLOLAUETNOXRWQOAIHXZKFLZITZBGZNOQEBFFFHTYU";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string portA = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string portB = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string portA = "AACCEEEE";
    string portB = "BBDDFFGH";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string portA = "ABCDEFGHI";
    string portB = "BCAEFDHIG";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string portA = "DPAZHJCMTYZZJJZKOFYVCANUBMZJSWKVMEXQFYNGIJLPUSEKET";
    string portB = "TLXJCDBSCLPPLVNAMQROZWBCYPMTZXGUQDBMNUYZKZNXDOYINX";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string portA = "AAX";
    string portB = "BBY";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string portA = "KFJDUFHDBCHDGFJGKVCMDHFYFYDIFKJGFHDGFYTFGDKHSDHFSK";
    string portB = "GFHDGFYTFGDKHSDHFSKKFJDUFHDBCHDGFJGKVCMDHFYFYDIFKJ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string portA = "AACC";
    string portB = "BBDD";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string portA = "ABCDEF";
    string portB = "BCAEFD";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string portA = "AABBCCZ";
    string portB = "DEFGHJZ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string portA = "CCCCCCCCHHHHIJKLZZXXYYTORPNSWW";
    string portB = "BBAADDEEGGFFJKLMXYUVRTOLQPNWSS";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string portA = "AAAAAABCCXZ";
    string portB = "LMNOPBCDXYC";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string portA = "AAABAABB";
    string portB = "BBCCAABB";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string portA = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string portB = "XABCDEFGHIJKLMNOPQRSTUVWXZ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string portA = "AAAAAAAAAABBBBBBBBBCCCCCCCCDDDDDDDEEEEEEFFFFFGGGGH";
    string portB = "BCDEFGHIJKCDEFGIHJKDEFGHIJKEFGHIJKFGHIJKGHJIKHIJKI";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string portA = "AACCEE";
    string portB = "BBDDFF";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string portA = "VXXBY";
    string portB = "XBBCA";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string portA = "ASDJKHASJKDHASJDKHASKJDHKAASDLJALSDJASLDAJAA";
    string portB = "ASHDJKHJKASDFHJKSDAFASFJHJKASHDFJKSAJFHSJKFI";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string portA = "ABCDEFGZCDGHDUIJKCJSHUWFJHUWUHBSBXJHSDHKDKJHS";
    string portB = "EFGZCDGHDUIGTREHSGYUWNBCHDJKHSUHWBXUSVBXBNAHY";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string portA = "KLJSDHGKJDRSHGKLJHDFGF";
    string portB = "LFGJOEIRUVBOJLBJHERBHJ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string portA = "ABCDEFGHIJKLAMNAOSTNERNTTAPJAWEIRADSHFANSDKNXZCVVF";
    string portB = "ASLKJFAOITRNWKNRAKWJEORQPOWEQWDMASIFAIRJIAREJFOERU";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string portA = "ABBC";
    string portB = "BCCD";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
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
    string portA = "ABBBBBBBBCCCCDDEEEEEFHIJQVDXCXXPPPPRRRTTSSOQMMMMMM";
    string portB = "HHCGEDKJIHGEJJKGFXYZGGJKQVXCDPRRTSOTSOSOOKKQLNWLNW";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string portA = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD";
    string portB = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string portA = "QWERTYUIOPASDFGHJKLZXCVBNMQWERTYUIOPASDFGHJKLZXCVB";
    string portB = "QWERTYUIOPASDFGHJKLZXCVBNMMNBVCXZLKJHGFDSAPOIUYTRE";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string portA = "AAABBBCCCDDD";
    string portB = "XXXYYYZZZEEE";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string portA = "AAAAAIIIIIOOP";
    string portB = "BCDEFJKLMNPQQ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string portA = "AAAAAAAAAA";
    string portB = "CBXYQCBXYQ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string portA = "BBB";
    string portB = "AAC";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string portA = "AAAA";
    string portB = "ABCD";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string portA = "AABBXC";
    string portB = "BBCCAY";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string portA = "AAAAAAAAXXYYZZ";
    string portB = "CBDEFGIHXXYYZZ";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string portA = "AAAAAA";
    string portB = "BBCCDD";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string portA = "CBCDE";
    string portB = "ACDEC";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
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
    string portA = "AABEEF";
    string portB = "BCDFGH";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string portA = "AAAACCBBBDDABCBABCBDABDABCASDAAS";
    string portB = "BHGCHGEFDEFAESAJKDHAAKJDADWADAER";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string portA = "AB";
    string portB = "BA";
    MaxTrip* pObj = new MaxTrip();
    clock_t start = clock();
    int result = pObj->minBuy(portA, portB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=8001&pm=4677
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
int g[26][26]; 
int degree[26]; 
int bio[26]; 
 
class MaxTrip {  
   public:  
 
   int dfs( int i ) { 
      if( bio[i] ) return 0; 
      bio[i] = 1; 
      int ret = 0; 
      if( degree[i] % 2 ) ret++; 
      for( int j = 0; j < 26; ++j )  
         if( g[i][j] )  
            ret += dfs( j ); 
      return ret; 
   } 
 
   int minBuy(string portA, string portB) {  
      int n = portA.size(); 
      memset( g, 0, sizeof g ); 
      memset( degree, 0, sizeof degree ); 
      memset( bio, 0, sizeof bio ); 
      for( int i = 0; i < n; ++i ) { 
         g[portA[i]-'A'][portB[i]-'A'] = 1; 
         g[portB[i]-'A'][portA[i]-'A'] = 1; 
         degree[portA[i]-'A']++; 
         degree[portB[i]-'A']++;          
      } 
       
      int ret = -1; 
      for( int i = 0; i < 26; ++i ) { 
         if( degree[i] == 0 ) continue; 
         if( bio[i] ) continue; 
         ret += 1 + max( 0, dfs( i )/2 - 1 ); 
      } 
      return ret; 
   }  
 
 
 
 
 
    
 
};  
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/