/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2450
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

class DigitMultiples {
public:
    int getLongest(string single, string multiple);
};

int DigitMultiples::getLongest(string single, string multiple) {
    int ret;
    return ret;
}


int test0() {
    string single = "3211113321571";
    string multiple = "5555266420";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string single = "100200300";
    string multiple = "100400600";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string single = "111111111100000000000000000000000000000000000";
    string multiple = "122333444455555666666777777788888888999999999";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string single = "000000000000";
    string multiple = "000000000000";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string single = "11111111111";
    string multiple = "11111111111";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string single = "89248987092734709478099";
    string multiple = "00000000000000000000000";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string single = "99999999999999999999999999999999";
    string multiple = "0000000000000000000000000999999999999";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string single = "11111211312112212313113213321121222122323123223331";
    string multiple = "12346612363621621636216126316363636216263661623261";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
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
    string single = "00101101010100010101011101110110110101010101001011";
    string multiple = "00010110101101101110101010110101010100101001010111";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string single = "49348938595890134493859890581397857501935890571033";
    string multiple = "98905819084901000000000000000189347875831758578933";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string single = "8978575893475895487346384673892579238753847928347";
    string multiple = "7897857589347589548734638467389257923875384792834";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string single = "01234801395880000101390302439000430485839583015007";
    string multiple = "48013958800001013903024390004304858395830150012346";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string single = "12131415161718191920212223242526272829303132333435";
    string multiple = "71727374757677787980818283848586878789909192939495";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string single = "01020304050607080910112131415161718192102223242526";
    string multiple = "71727374757677787981828384858687878991939495979899";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string single = "01020304050607080901020304050607080901020304050607";
    string multiple = "99989796959493929179787776757473727189888786858483";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string single = "90919293949596979899808182838485868788897071727374";
    string multiple = "01020304050610111213141516202122232425263031323334";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string single = "2222222222222222222222222233333333333333333333333";
    string multiple = "4444444444444444446666666666666666669999999999999";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string single = "22222222222222222222222222222223333333333333";
    string multiple = "22222222222222226666666666666666999999999999";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string single = "77777777777777777777777777777777777777777777777777";
    string multiple = "55555555555555555555555555555555555555555555555555";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string single = "77777777777777777777777777777777777777777777777773";
    string multiple = "35555555555555555555555555555555555555555555555555";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string single = "00000000000000000000000000000000000000000000000000";
    string multiple = "00000000000000000000000000000000000000000000000000";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string single = "11111111111111111111111111111111111111111111111111";
    string multiple = "00000000000000000000000001111111111111111111111111";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string single = "39";
    string multiple = "71";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string single = "16";
    string multiple = "32";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string single = "000";
    string multiple = "123";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string single = "9";
    string multiple = "7";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string single = "000";
    string multiple = "111";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string single = "36";
    string multiple = "72";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string single = "123";
    string multiple = "216";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string single = "25";
    string multiple = "75";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string single = "6";
    string multiple = "00";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string single = "09";
    string multiple = "81";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string single = "121";
    string multiple = "131";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
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
    string single = "2";
    string multiple = "3";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
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
    string single = "11111111111111111111111111111111111111111111111111";
    string multiple = "0000000000000000000111111111111111111111111111111";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string single = "04";
    string multiple = "32";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string single = "52";
    string multiple = "31";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string single = "12121";
    string multiple = "23232";
    DigitMultiples* pObj = new DigitMultiples();
    clock_t start = clock();
    int result = pObj->getLongest(single, multiple);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8547850&rd=4780&pm=2450
********************************************************************************
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <setjmp.h>
#define ll long long
#define ld long double
#define EPS 1e-9
using namespace std;
 
int tryit(const char*a, const char*b, int m) {
 int i=0;
 while(1) {
  if (!*a || !*b) return i;
  if (*b != (*a-'0')*m+'0') return i;
  i++;a++;b++;
 }
}
 
class DigitMultiples {
 public:
  int getLongest(string single, string multiple) {
 
// BEGIN CUT HERE
    static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
// END CUT HERE
 
   int i, j, k, l = 0;
   for (i = 0; i < 10; i++)
    for (j = 0; j < single.length(); j++)
     for (k = 0; k < multiple.length(); k++)
      l >?= tryit(single.c_str()+j, multiple.c_str()+k, i);
   return l;
   
   
   
   
  }
 
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { string Arg0 = "3211113321571"; string Arg1 = "5555266420"; int Arg2 = 5; verify_case(0, Arg2, getLongest(Arg0, Arg1)); }
  void test_case_1() { string Arg0 = "100200300"; string Arg1 = "100400600"; int Arg2 = 8; verify_case(1, Arg2, getLongest(Arg0, Arg1)); }
  void test_case_2() { string Arg0 = "111111111100000000000000000000000000000000000"; string Arg1 = "122333444455555666666777777788888888999999999"; int Arg2 = 9; verify_case(2, Arg2, getLongest(Arg0, Arg1)); }
  void test_case_3() { string Arg0 = "000000000000"; string Arg1 = "000000000000"; int Arg2 = 12; verify_case(3, Arg2, getLongest(Arg0, Arg1)); }
  void test_case_4() { string Arg0 = "11111111111"; string Arg1 = "11111111111"; int Arg2 = 11; verify_case(4, Arg2, getLongest(Arg0, Arg1)); }
  void test_case_5() { string Arg0 = "89248987092734709478099"; string Arg1 = "00000000000000000000000"; int Arg2 = 23; verify_case(5, Arg2, getLongest(Arg0, Arg1)); }
  void test_case_6() { string Arg0 = "11111111111111111111111111111111111111111111111111"; string Arg1 = "00000000000000000000000001111111111111111111111111"; int Arg2 = 25; verify_case(6, Arg2, getLongest(Arg0, Arg1)); }
 
// END CUT HERE
 
};
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/