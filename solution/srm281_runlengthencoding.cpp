/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5983
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

class RunLengthEncoding {
public:
    string decode(string text);
};

string RunLengthEncoding::decode(string text) {
    string ret;
    return ret;
}


int test0() {
    string text = "4A3BC2DE";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABBBCDDE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string text = "1A1B1C1D1E";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string text = "1A3A5A4BCCCC";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAABBBBCCCC";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string text = "50A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string text = "21Z13S9A8M";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string text = "123456789012345678901234567890B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string text = "51V";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string text = "70D";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string text = "99P";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string text = "100W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string text = "9999999999999999999999999999999999999999999999999X";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string text = "";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string text = "9I9P9J9W9N9K";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string text = "6X9V2W5E7T6X7Q2N5O3X2M8D4M4I2K5J4O1X2R1Z3T6W1W4L5B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string text = "1F1C1Q1S1V1U1A1F1X1S1S1R1N1M1P1C1F1I1E1P1N1S1X1Y1F";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "FCQSVUAFXSSRNMPCFIEPNSXYF";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string text = "10U10X10Q10L10T";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "UUUUUUUUUUXXXXXXXXXXQQQQQQQQQQLLLLLLLLLLTTTTTTTTTT";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string text = "IJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEF";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "IJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEF";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string text = "C1C11C1C11CCCCC1CCC";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string text = "1C1H1R1I1S1T1M1A1S1E2G";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CHRISTMASEGG";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string text = "39N4NF";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNF";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string text = "1A2V3I4C5U6J7Q8A9B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AVVIIICCCCUUUUUJJJJJJQQQQQQQAAAAAAAABBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string text = "9Q8I7O6G5J4V3C2P1X5Q";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QQQQQQQQQIIIIIIIIOOOOOOOGGGGGGJJJJJVVVVCCCPPXQQQQQ";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string text = "76P77N6D";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string text = "645455262083420D918834751939957R259096548487819O";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string text = "1159182460170284303814470125661599729002998854479W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string text = "57405485978621625332687896506518322600160772W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string text = "142379329097093383133057639871N";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string text = "650959453423L959834811047W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string text = "69S49J72X79N28H7D21S27O80S15Y39T38B76K";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string text = "2Y1I1C2T1U2A2V1G2K1U2D1Y2E1J1I2T1E2N1E2P2N1I2C1M1H";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "YYICTTUAAVVGKKUDDYEEJITTENNEPPNNICCMH";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string text = "TJDJE1LQG1KT1PDCD1R1EOH1YU1QN1R1Q1LYIJL1BG1T1N";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TJDJELQGKTPDCDREOHYUQNRQLYIJLBGTN";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string text = "1C1D1JKSBKKH1QUX1J1FIRFWN1Q1L1LH1M1J1UQQA1XDSG1X1J";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CDJKSBKKHQUXJFIRFWNQLLHMJUQQAXDSGXJ";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string text = "1K1DRP1J1QJNZP1YW1XG1T1Y1YF1IA1RJ1ZFJ1VX1C1W1OW1HO";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "KDRPJQJNZPYWXGTYYFIARJZFJVXCWOWHO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string text = "O1L1QXS1TKA1PO1ZQET1WDXAS1QR1Z1UKD1FG1V1H1NBZQ";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OLQXSTKAPOZQETWDXASQRZUKDFGVHNBZQ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string text = "2G1A2YC2H2I2XE2W1NMB2K1F2S2R2EX2U2G1K2A1D2O1L2DK2E";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "GGAYYCHHIIXXEWWNMBKKFSSRREEXUUGGKAADOOLDDKEE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string text = "2Y2B2K2E2EQ2W1T1R2G2CKU2X2LX2V2NND1S2G2OS2Q2H2IDE";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "YYBBKKEEEEQWWTRGGCCKUXXLLXVVNNNDSGGOOSQQHHIIDE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string text = "NJU1RN1L1K1P1IZMCLXR1PQSZBS1FE1NWQ1YB1A1Z1JW1IJR";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "NJURNLKPIZMCLXRPQSZBSFENWQYBAZJWIJR";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string text = "2P2B2D2G1CO1B1W2U";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "PPBBDDGGCOBWUU";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string text = "2A3B2G2A3JL";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBBGGAAJJJL";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string text = "4V1H2X3IH4I2S3PT4W4T2V1K4D2J";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "VVVVHXXIIIHIIIISSPPPTWWWWTTTTVVKDDDDJJ";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string text = "2D4V3B2F";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "DDVVVVBBBFF";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string text = "L5S3Y6B4V";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "LSSSSSYYYBBBBBBVVVV";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string text = "3S";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "SSS";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string text = "7O4G5B2P1H4N8W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OOOOOOOGGGGBBBBBPPHNNNNWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string text = "4O4OM2W1J";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OOOOOOOOMWWJ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string text = "8B2G1C1DHN";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBGGCDHN";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string text = "4A3R2Q";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAARRRQQ";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string text = "10G12F5K";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "GGGGGGGGGGFFFFFFFFFFFFKKKKK";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string text = "6K";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "KKKKKK";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string text = "4B14S9C2F1U1I";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBSSSSSSSSSSSSSSCCCCCCCCCFFUI";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string text = "11BH";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBBBBH";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string text = "10T12B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TTTTTTTTTTBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string text = "8L3F4C10R11Q3Y3V4B3W1P";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "LLLLLLLLFFFCCCCRRRRRRRRRRQQQQQQQQQQQYYYVVVBBBBWWWP";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string text = "13U7D11N9Q4W2B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "UUUUUUUUUUUUUDDDDDDDNNNNNNNNNNNQQQQQQQQQWWWWBB";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string text = "13R7GT2Y2N";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRRRRRRRRRGGGGGGGTYYNN";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string text = "10Q14X13V2G";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QQQQQQQQQQXXXXXXXXXXXXXXVVVVVVVVVVVVVGG";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string text = "S2JB4P1W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "SJJBPPPPW";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string text = "5J8M3T1H";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "JJJJJMMMMMMMMTTTH";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string text = "G";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "G";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string text = "6L21W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "LLLLLLWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string text = "2X7O5D18A10ZC";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "XXOOOOOOODDDDDAAAAAAAAAAAAAAAAAAZZZZZZZZZZC";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string text = "25J1H1MN";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "JJJJJJJJJJJJJJJJJJJJJJJJJHMN";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string text = "7I5C1T4T3P";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIICCCCCTTTTTPPP";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string text = "18S1I";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "SSSSSSSSSSSSSSSSSSI";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string text = "17R";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRRRRRRRRRRRRR";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string text = "4G9A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "GGGGAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string text = "8R6AA2A1O2QT";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRRRRAAAAAAAAAOQQT";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string text = "8QV4L";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QQQQQQQQVLLLL";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string text = "11C2V";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCCCCCCCCVV";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string text = "10O9R1D";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "OOOOOOOOOORRRRRRRRRD";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string text = "4C";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCC";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string text = "7Q25AT";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QQQQQQQAAAAAAAAAAAAAAAAAAAAAAAAAT";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string text = "W18Q14I1MG4E3D";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "WQQQQQQQQQQQQQQQQQQIIIIIIIIIIIIIIMGEEEEDDD";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string text = "14R6J";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRRRRRRRRRRJJJJJJ";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string text = "23T3Z9F7D2U";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TTTTTTTTTTTTTTTTTTTTTTTZZZFFFFFFFFFDDDDDDDUU";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string text = "16R7H9F4E";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRRRRRRRRRRRRHHHHHHHFFFFFFFFFEEEE";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string text = "7D7Q3Q1F";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "DDDDDDDQQQQQQQQQQF";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string text = "24D4E17A2F2X";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "DDDDDDDDDDDDDDDDDDDDDDDDEEEEAAAAAAAAAAAAAAAAAFFXX";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string text = "7P22W1R";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "PPPPPPPWWWWWWWWWWWWWWWWWWWWWWR";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string text = "2H9M";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "HHMMMMMMMMM";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string text = "1W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string text = "21R13I2B3L6I1N";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "RRRRRRRRRRRRRRRRRRRRRIIIIIIIIIIIIIBBLLLIIIIIIN";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string text = "15P4X5T10T";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "PPPPPPPPPPPPPPPXXXXTTTTTTTTTTTTTTT";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string text = "2C4R3I3EF";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CCRRRRIIIEEEF";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string text = "10W10R3YX2CZ";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWRRRRRRRRRRYYYXCCZ";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string text = "1C3W";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CWWW";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string text = "B2P2P1F4W1T1Y3NG1T1I4N2P4L1EQR4G3L3X";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BPPPPFWWWWTYNNNGTINNNNPPLLLLEQRGGGGLLLXXX";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string text = "1T2Y2I5G3I4F2T3U2O5WV1X4Z1B3U5F2I3UZ";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TYYIIGGGGGIIIFFFFTTUUUOOWWWWWVXZZZZBUUUFFFFFIIUUUZ";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string text = "3F2V3KM3K3J3H5J2Z4D3S4B5E2FD4K2S";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFVVKKKMKKKJJJHHHJJJJJZZDDDDSSSBBBBEEEEEFFDKKKKSS";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string text = "2B2Y3Y1ZO3N1F3A3CT2BX1Y2U2HQ3M1G2N3L3J1E3T1R";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BBYYYYYZONNNFAAACCCTBBXYUUHHQMMMGNNLLLJJJETTTR";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string text = "2Z1O2Z1U2KE3B2L2P2A1J2CI2P3X2H2Q3HN3EP2B1U2N3V1M1I";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZOZZUKKEBBBLLPPAAJCCIPPXXXHHQQHHHNEEEPBBUNNVVVMI";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string text = "2C2C2B1Y1F2K2L2X2M1A2Y2G2MH2U2L1W2X2U2I1M2Q2Q2P";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCBBYFKKLLXXMMAYYGGMMHUULLWXXUUIIMQQQQPP";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string text = "1I2ZXC2O1C2IB2P2SOR1F2A2MT2OJMPMC2S2M1O2O1LQ2O1F1F";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "IZZXCOOCIIBPPSSORFAAMMTOOJMPMCSSMMOOOLQOOFF";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string text = "2Q1E2SZ2MJ2PJ2PV2Z1VLP2Z2HI2UG2S2R2IUZ2C2P2OD";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "QQESSZMMJPPJPPVZZVLPZZHHIUUGSSRRIIUZCCPPOOD";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string text = "2E2J2D1DKP2C3J3W3Q3M2K1PMI1F3Y3K1LSR3O3J2M1W2L";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "EEJJDDDKPCCJJJWWWQQQMMMKKPMIFYYYKKKLSROOOJJJMMWLL";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string text = "3D1K3Z3Y4R5K4B3FS4T4G1Y5H1Q2E2M3F1I";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "DDDKZZZYYYRRRRKKKKKBBBBFFFSTTTTGGGGYHHHHHQEEMMFFFI";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string text = "1BM2Q3O2Z1X3U3N3B2AZ1P1D3W2O1W1V2M1I3D2XU1WYR3H1A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BMQQOOOZZXUUUNNNBBBAAZPDWWWOOWVMMIDDDXXUWYRHHHA";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string text = "2Y1E2DW1G2R1K2W2DJ1PLCI2K2PA2HQM2B1A2Z1Z1H2OH2CRJY";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "YYEDDWGRRKWWDDJPLCIKKPPAHHQMBBAZZZHOOHCCRJY";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string text = "2I4Z2P5H5T1W3P2V1B2H4T2B2P3O3Z2C";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "IIZZZZPPHHHHHTTTTTWPPPVVBHHTTTTBBPPOOOZZZCC";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string text = "1XOYJ2R2Y2A2XT2A2K2XIZ2D2A2GP2X2E2A2E2Q2K2VP";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "XOYJRRYYAAXXTAAKKXXIZDDAAGGPXXEEAAEEQQKKVVP";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string text = "D2QT1K2R1G2W1LH2QS2P2AV2R2Z1G2C2X2VMU1K2R1Q2U2BP";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "DQQTKRRGWWLHQQSPPAAVRRZZGCCXXVVMUKRRQUUBBP";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string text = "5F5S4R3HR3F4AL4O2Z4O4H3F1R";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFSSSSSRRRRHHHRFFFAAAALOOOOZZOOOOHHHHFFFR";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string text = "BP2V2D1LU1S2UA1JY2L1Q1R2D2M2DS2M2N2IE2K2O2PA2O1R1S";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "BPVVDDLUSUUAJYLLQRDDMMDDSMMNNIIEKKOOPPAOORS";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string text = "3C2P4DE3O2O3M1K2F3N1ME1N4B4K3XE1U2MK2JXI";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCPPDDDDEOOOOOMMMKFFNNNMENBBBBKKKKXXXEUMMKJJXI";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string text = "4T3U1F5F5L4X4N1H3Q2X4W2ZDUO1N";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TTTTUUUFFFFFFLLLLLXXXXNNNNHQQQXXWWWWZZDUON";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string text = "A2Q4L4Z2TV4Q2M4XOT4X2K2XMH2K2Y4H2L2R";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AQQLLLLZZZZTTVQQQQMMXXXXOTXXXXKKXXMHKKYYHHHHLLRR";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string text = "4P2Z4I4C4H4N2KL3R1N2V3XSJ1A3S2Q4U4K4L4X1C2R1K";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string text = "3M3Z3M4L5F3O2O3R2T2IYQ1J2M2P4R1M5T3AZ4UR";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string text = "2S1BF2VYGP3R1A3T4P2H3X4KS3W2V2Z3F2XV4M3F4H3I4W4I1T";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string text = "3PK3VJ2RI3C1I3D3O3H3Q2B1W2V2O2S2F2S2Q2CA3X3DG2H1C";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string text = "4J3P4TM2T3D2KZYU4I2WA3H2C3B3R2H2B4H2L1I2I";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string text = "5TL1C3I3P3W3N5Y4I2FA3Y3A3Q3M4QDKS";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TTTTTLCIIIPPPWWWNNNYYYYYIIIIFFAYYYAAAQQQMMMQQQQDKS";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string text = "2L4R4Q3XW3Q5A1P5A4Z2I4P3Y3J2S5OT4G5VT";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string text = "IV2T2S2G1QE3V2A1F2V3V2D3F3V2D2BI3V2D2T3H2B3V2C3PHS";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string text = "2R2W1N1GL2L2HG2T2B2BR2J2EN2J2T2M2H1D2K2Q2K1FU2T2L";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "RRWWNGLLLHHGTTBBBBRJJEENJJTTMMHHDKKQQKKFUTTLL";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string text = "2O3E1I4Z5L5A4S4T4Z3OZ4D5J1S3W2CY5C2P4R2V3L";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string text = "2147483648A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string text = "9223372036854775821F";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string text = "4294967347C";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string text = "18446744073709551633U";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string text = "23987459847593847598347583Q";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string text = "89040302197747474774329844222E";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string text = "487538499998437574287O";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string text = "123456789012345678901234567890B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string text = "25A25BC";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string text = "999999999999999999999999999999A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string text = "2147483647A234B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string text = "50A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string text = "9999999999A9999999999A9999999999A9999999999A99999A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string text = "5645646545646546545646546546123987954655645454454A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string text = "12345678901234567890123A555S41111111111567890BZ";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string text = "9999999999999999996A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string text = "4294967298A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string text = "11A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string text = "123C";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string text = "1111110000999999999999999999999999999999999A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string text = "123456789123456789C";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string text = "123456789123456789A123456789876B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string text = "4000000000A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string text = "45A5AB";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string text = "2147483648C";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string text = "9999999999999999999999999999999999999999999999999A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string text = "400000000000000A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string text = "2147483648A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string text = "90A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string text = "3147483647A20BCD";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string text = "1000000000E1000000000F1000000000G";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string text = "2147483650A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string text = "2000000000A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string text = "111A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string text = "123A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string text = "999999999A999999999A999999999A999999999A999999999A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string text = "42949672951B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string text = "10A10N10N10E";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAANNNNNNNNNNNNNNNNNNNNEEEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string text = "45A5B";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBB";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string text = "15A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string text = "3000000000A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string text = "48A";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string text = "13A5B1C";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAABBBBBC";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string text = "9911AAA";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string text = "1A13A5A4BCCCC";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAABBBBCCCC";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string text = "48ABBB";
    RunLengthEncoding* pObj = new RunLengthEncoding();
    clock_t start = clock();
    string result = pObj->decode(text);
    clock_t end = clock();
    delete pObj;
    string expected = "TOO LONG";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=12028179&rd=8078&pm=5983
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#define FOREACH(i,v) for(__typeof(v.begin()) i=v.begin(); i!=v.end(); ++i)
using namespace std;
 
class RunLengthEncoding {
  public:
  string decode(string text) {
    
 
string ret;
int n = text.size();
int ile;
    ile = 0;
    for(int i=0; i<n; i++)
    {
      if(isdigit(text[i])){
        ile = 10*ile+text[i]-'0';
        if(ile > 50) return "TOO LONG";
      }
      
      else
      {
        if(ile == 0) ile = 1;
        for(int j=0; j<ile; j++)
        ret += text[i];
        ile = 0;
      }
      if(ret.size() > 50) return "TOO LONG";
    }
    return ret;
  
  }
  
 
 
};
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/