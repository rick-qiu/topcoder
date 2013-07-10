/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7600
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

class TournamentsAmbiguityNumber {
public:
    int scrutinizeTable(vector<string> table);
};

int TournamentsAmbiguityNumber::scrutinizeTable(vector<string> table) {
    int ret;
    return ret;
}


int test0() {
    vector<string> table = {"-10", "0-1", "10-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> table = {"----", "----", "----", "----"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> table = {"-1", "0-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
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
    vector<string> table = {"--1-10-1---1--1-00", "--0110000--0---10-", "01--00000100-00011", "-0---0010-11110100", "001--01-00-0001-1-", "11111--100--1-1-01", "-1110--00110-11-01", "0110-01--100110-10", "-111111---01--0-01", "--0-1100----10011-", "--10--011--1--101-", "01101-110-0--1-0-1", "---010-0-0---00-11", "--101-00-1-01-0-0-", "0-110001110-11-110", "-010-----011--0--0", "11010110100-010--0", "1-01-0010--00-111-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> table = {"-1-", "0-0", "-1-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> table = {"--0-1--1001-0-1-----1-0", "--00-0-00001-11---10-11", "11--0111001-00100--1111", "-1--1-1--101-11-100-00-", "0-10--1--01-11-0--0011-", "-10---1111-1-1010001011", "--0000-0---1--0000-0-11", "010--01---001001-0011-0", "111--0----10110--00--00", "111010----0--110---100-", "01010--101-0110-0---010", "-0-0-0011-1-010111-0-11", "1-1-0--00-01--10--10-11", "-01000-10000-----011-11", "0000-11110110--00111---", "--1-1010-1-01-1--0-101-", "--10-11---10--1--01-1--", "---1-1111--0-1011-00--0", "-0-111-11---000-01-10-0", "-10-1010-0-11000-10--11", "0-0101-0-11----10-1---0", "-001000-110000-0---0--1", "100--0011-1000---11010-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> table = {"-----0-0-0---011011000-0-000011", "--0-100110100-1--11---001-1-101", "-1-00-1---11101--0--1-11111-0-0", "--1-0-011101110001--000001-1-01", "-011--00--1101--101--11---1-001", "11----1000---1-0-00--0001-100-0", "-10110---0010--0--000--1-1-101-", "10-011--11--1-100000-1-1000-1-0", "-0-0-1-0-010001100000100-111-0-", "11-0-1101--00110-0-00111-011100", "-0010-1-0--10-1-11-01111-0-11-1", "-1000-0-110-10-0--1-00-0-1---01", "-1001-101110-1101-0101--1-1----", "1-1000--10-10-011----00010-1-11", "0001---0000-01--00-110-011101--", "0--1-11101-110---10---11001000-", "1--10--11-0-001---1-01011-0-000", "001011-1110---10--01--00-0-1001", "00--01111--01--101-0000100-0-11", "1-----11111-0-0--01-0010-0-0-11", "1-01--1-11011-0-1-11--01-11-011", "1--101-00001011-0-11--1100-101-", "-10101--100--1-0111010-1110-000", "1101-1001001-1100101000---1-101", "-001-0-1----00010-1--10----1-11", "1-00--010110-101-111010---100-0", "100-00-100--0-001---0-10-0--000", "1--0-10-000--011-011-0--01--10-", "101-1110-00---0111--1110-110--1", "01-11-0-11-1-0-1110000110-11--1", "001001-1-100-0--10000-10011-00-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1032;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> table = {"--0--11-0100111110---1000-0-0-0-01-", "--0-0000111000100--10101--01010--1-", "11-1--010-1-10--0100--1101-10010-11", "--0--01-000110010111-11---0-01111-1", "-1---110---10-0-1-00100-0----1111-0", "01-10-101-101-0011-110--0---1000100", "011000-01011-1100-10011-101-01-10-0", "-10-111-011-11100--1--1-11-00100-11", "1011-001-10-0--0-0---1---00000--0-0", "00-1--100-11-1001---001--0110110-1-", "1001-00010--10---1-111--01--1-11-1-", "11-0010--0--111-0-10---100-00-000-1", "010010-01-00-100-10-110-0-1-10-0010", "0111--00-0100-1010-11---1-11---110-", "00-11100-1-010--1-01-1011-0-010011-", "01-0-11111--11-----100--1-000011011", "01110011-0-1-00--1101-1-11--101-1--", "1-00-0--1-0-01--0-11110-1-010101-10", "--101-0----01-1-00-00110-1-010-1-01", "-0101010--01-000101--0-10101-1-10-1", "-1--001--10-00-1001---01--1110-01-1", "00-0110-010-0-01-001---01--0-0-0111", "11001-00-0--1-1-010-1---101000100-1", "100--------0--0---1001---0-11100100", "1-1-1100--11100000-1-00--1-0-0-0-0-", "--0---101101----0-00--110-0--1-01-0", "11-1--0-10--0011-1-10-0--1-10-00--0", "-00----110-1-0-1-01001101-0-10-1---", "1111-01111010-11010-0-10--10-0--00-", "-010010010--1-011010111010-11-00--0", "110001-1-001--1001----01--1--1-000-", "--100101-1011010-00011111110-11-1-1", "1--0001-1--110010--10010-0--1-10-1-", "000--1-0-00-0100-01--0-11---1-1-0--", "--0011101--01--0-1000001-11--1-0---"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1494;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> table = {"---1100-01", "----01011-", "---10-0-1-", "0-0-011-01", "0111--1--1", "10-0---00-", "11100--101", "-0---10-11", "1001-110--", "0--00-00--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> table = {"--00--0-", "---11011", "1--01-0-", "101--001", "-00---0-", "-1-1---1", "10111--0", "-0-0-01-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> table = {"-0-0-00-001-010111001-", "1-111100--10-001--01--", "-0-001-010-11-110011-1", "101---1-0--0-000--01--", "-01--101100-00011-1---", "100-0----0-00110--01-0", "11-01--1000--0--00--11", "-11-0-0--101-00001----", "1-010-1--110-1--1-0111", "1-1-11100-1-10-01100--", "00--1-1100--110-0-0101", "-101-1-01------0---011", "1-0-11---00---11010-11", "01-11011010---110-1110", "110110-1--1-00-1--1101", "000101-1-1-1000--10101", "0-1-0-11001-11---1011-", "0-1---10-0--0--00--0-0", "110101--111-10011----0", "1000-0--0101-00001--1-", "0-----0-0-1000110--0-1", "--0--10-0-000100-11-0-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> table = {"--0--1--00100110-00--", "--100-01000--1110-010", "10-0-1110-01100----00", "-11-1-01-00-0-11-111-", "-1-0-10000-0-1100--01", "0-0-0---1-00-001010-1", "-1011--1-11--0--11111", "-0001-0-1011---1-110-", "111-10-0---11001110-1", "11-11-01---1--0-10--0", "0111-100---0-1-0-01-0", "1-0-11-0001-1--01-01-", "1-01----0--0--1-0-110", "001-011-1-0----01101-", "001001--11--0--10-000", "10-010-00-11-10-110--", "-1--110-00-01010-1--0", "1--0-000011--0-00-011", "11-0-1001-010111-1--1", "-0101-01---0001--0---", "-11-000-011-1-1-100--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> table = {"--1---011110-0--1-0-000-1110-0100110-", "--00-0011-11-00-010-10110101-11111-1-", "01-1-01-11110--11110001--01011101-011", "-10---011-10-0111111-11-1100-11--1000", "--------0--10-100010-0-1-1111010111-0", "-11---0--1-1-110110000000-11-0111-01-", "1101-1-10110--110111-101--100--00-0--", "00-0--0-1--101-010--00-110010-0111101", "00001-10--110-10-1-01-01111001-0-0100", "0-0--00----1-1010----01---1-00-111100", "0000--0-0--10-011100-1-11010010000010", "10010010000-0-01---111-00--01-0---0--", "--1-1--11-11---000001011--1---0010010", "11-1-0-0-0----11-1--0----10-10-010---", "-1-0000-0111-0-1-100101110---1-01-010", "--0011011000100-11000001100010-1-100-", "01001010-10-1--0-011-0101011-1--10-0-", "-00010010-0-10001--1001--1---1--100-1", "1100010---1-1-110----11---0-10010000-", "--10110-1-101-1100----0-011-0-0-0-000", "101--1-10--00101-1----0-10-01000000--", "11101101-1001-11110----111--0010--101", "1000-11-10--0-0100011--011000111-110-", "-0--01000-010-001----01-11101111-11-0", "01-0-1-00-01--000--10000-01--101--0-1", "00100--10-1--01110-010001-0-10-1-0-1-", "01010001000-01-10-10--1001-0-001-10-1", "101100101-11---10---1-11--1-011-0-1--", "--0-0-111110-0-0--010110-0-1--1-1--10", "100011--010--101001-11000110--000---0", "000000-1--111-----1110001-1001-1-0-10", "101-1010101-1110--0-1100000--10-0-010", "100-0010-01-000-00111------101-1-111-", "00-00--0101-11-0111-1-00-10---1-0-0-0", "0-11011000111-11-11110001-10---101-0-", "1001-0-1110-0-011-11-11--0--0-000-1-1", "--011--0111-1-1--0-1-0-10-0-1111-1-0-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1992;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> table = {"-111100-1001", "0-111-1-0110", "00-000--0-11", "001-101-1110", "0010-111-111", "1-110-011-01", "10-001-010-1", "----001--000", "0110-00--101", "10-00-110-1-", "100001-110--", "010100010---"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> table = {"-01--00-10-1-10-01-0--1011--111--11010-0", "1--101-0-0-1-00--1-1-111-1110--1110-1---", "0--011-0101-011-11---00-1110000-00--011-", "-01-0---0--1-1-1111011001-01-000110--0-1", "-101-1-1-1100---101-00----1011-0---111--", "100-0-1001101100100011100101--1--001010-", "1----0-11-00-1-10001-101-011011-0--111--", "-11-010-11100-0010001-000100-10001001--0", "0-01-100-0-1-0-1--01--1-10010100110--1-1", "111-00-01-11-1-00-01--1-10-001101-11101-", "--0-0010-0--11-1---00001---001--1-0-0-0-", "00-0111100---1--0111000--10010001-11-110", "--1-10-1--0--010-11001-0-11110-000-00001", "0100-00-10001--101--11-0011011--00--001-", "110--1-1----0------0111-00-010--011101-0", "---0-101010-10----10-1-1-0-1-11-00000-11", "1-000010-1-1-1---000-10-0001-0-000--0-0-", "00001111---000--1-100--1--01-0001---111-", "---0011111-00--010-10-1011-1-01100-1-110", "10-1-10100101-11110-011--1-10001-1-11011", "---010-0--11100--111-0--011111110000001-", "-010100---1100000--01-01--10--01111-1101", "0011-0110011--0-1-00-1-1000-011-1--01110", "10-1-101--0-11-0-01--00-1-101011-001-0-1", "0-00-1-100---11-1-0-1-10-0----010-0--0--", "000--01011-000111-000-1-1-01-000-01-0010", "-00101011--100--11--0010-1-0-01--01--1--", "-010100101110110000001-1-01-000---0110--", "011-0-1-1110000----10-10---1-111-001--11", "0-110-000001101011110-01-1110-0001-110--", "0-11-00110-1---0-1010100110101---01-10-0", "-0-11--111-11---110000-001--01--0111-010", "-010--1100001111101-100-1----1-1-0---0-1", "0010-1-00---11011-1010-1-11-10101-0--1--", "01-1-1-11010--01----10-110011-00-1-1010-", "1---0001-0-01-01--001-10---000-0--0---00", "001-0100-01-111110-0100--1-0-00---1--111", "1-01000-01-0110--00110011101-111100-0-0-", "--0--1---01010-01000010--0--0--0--1101-1", "1--0---10--10-10--10-010-1--0-110--10-0-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 2352;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> table = {"--00-10-1-00-101", "--0100111-11-110", "11--1110--11-0-0", "10--101----10110", "-100--1-01001100", "0101---1-0--000-", "10000--0-0-101--", "-01--01---101011", "00--1----1011101", "----011-0-110-10", "100-1--010--11-1", "10001-0100---1-1", "---10110010--11-", "001001010-000-10", "10-011-010--00--", "01111--00100-1--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> table = {"--11-0101111010--0-11-000110-0--10010-00-011--", "---10-01-00-00-0111--0-00-00110-10010-1-1-0010", "0--01-111-1111-1--01-10001-0--10-0--0-10-1-0-0", "001---1-0111101-0--0-11-1-001-10-1-0---0--10--", "-10--01001-11-01-01-0111-11---001-101-1-1-01-0", "1---1-1-0-11-1-000-000--1101011---01--0--0000-", "010000-1-0--1111011------0-10-1--11--1-10-1-01", "100-1-0--1-0110100-0---0-010-0-1-01000-1011-11", "0-0111---1100-01000--010-010-1-1--1----1-10-10", "01-00-100-1--010--1--1--1100011000-00-011-010-", "0100-0--00--00110111101-11-111110101---1001---", "0-0000-11---10-11-10-0111-101-01100000-00--0--", "11000-001-10--0-1-00-01--1-00-010-01--100-1010", "0101-000-111--1-11101-10--0-1-111-11-1-1000-10", "1--01-01100-10---000110-01-10111-100110001-11-", "-10-01000100----0-00110-1-0110--011-0--10010-0", "-0-1-1111-1000-1-101111111-01-11110001010--111", "10--11011-0--01-0---101-----01111-0110---101--", "-01-0-0-100010111--0-10100--1100-000-1---11101", "0-01-1-1--0111110-1----01100110-00-00-00-10-0-", "0---11----0--00000---00--10100101-1-11-110-1-1", "-10001--10111-00010-1-1111111--01111111011-1-1", "1-100---0-000011001-10-110-111010-001---11---0", "111-0--11--0-1--0-01-00-0111000-00--1-000-0111", "1110-0---000--100-10-001---0000--101--001110-1", "0-0-0011100-0-0-0-100010--10100-01-00-11--0--0", "01-101-001-0-1-1---110-0-0-11-11000011111100--", "1111-00111011-001--10000110-100010000--0111-10", "-0-0-11--1001010010010011000-1-1--11010-1-11-0", "10---0-1000---01-0001-0111-10---------00-0-01-", "-100100--001100-00110-111101---1001000000-001-", "--111--00100000-001-110---010-0-1--0-11---0011", "00--0----11010-100-10011-110--10---01--010--0-", "1110--01-101--000-11-0-10011--1---01--0111-111", "11--01000-111010111-001-1-110-0--1-011-0110-11", "00-110-1-101001-1011-01-01110-11101-1-00101-1-", "111-0--1-1-1--0110-10000-1011-1-0-00-10110-01-", "------01---1-00-010-00----0-0-10--0-0-010010-1", "100-01---1--0-1-1--1-0-1100-1110-1-111-01---11", "1-11--00000110100--101-11001-11-1011001-101--0", "-0--0-11-01111111---00010-000-1-00000100-0-1-0", "1-0--1-00-1--101-000100-0-00-1--100111-11-001-", "01-01100110-01-0-101---101100-11--10-0-0-1--1-", "011101---0-11-01000-00-01-1-0111-0--11--01--00", "-0---11001--000-0-11---0---0-00010000-0--001-0", "-11-1-001---11-10-0-001001-11--0-00--0011--11-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 3411;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> table = {"-110110-1--1010-11010-0-01-110-10-1--11---01", "0-1-010000-0111-1010-111--1--1-1-10-01-11101", "00-011001111-1-111--000-0001010-010-00-1-101", "1-1---00-1----111--00-10-010-0010-10-0---1-1", "010---000------0011-1-10--1----11--1--0---1-", "000----00-100-0010010--1-1-001100100-0-000-1", "11111---100--100-0--100101-00000--00-0011-10", "-11111--1-1--10-1100100-0000---1-1--10-10011", "010-1100-10001-10-11-011-01000101-01-1--0-00", "-100--1-0-0--0101110-010-11101--100---0-0111", "--0--01011---0010--001010--010---000-0--10-1", "010--1--1---0-01110-00-000-001-110111-001111", "10---1--1--1-0100-000--1-111001-0-1-1101110-", "000---00011-1-1-0-0-0--111010101--100--0101-", "10-0-111-01100-011000---011-0-00-00---11-1-0", "--00111-01001-1-00110-001-10-1-000-0-001--11", "000010-010101101-0-000-00---001110--01-1100-", "010-0110-0-0--011-11---01100-1-1-1001-1-101-", "10--01-100-11110-0-10111-101-0-11----1---1--", "01-1-0-1011-1-10100----1000111-11-010-010110", "1-110100--1111111-1---01101-1-11101-1-111-10", "-01---111101----1-0----0--1100--110-11-11110", "10100-11001----1--0-1--011111100110--0-0111-", "-0-1100-010100-11100011-0--00001101000011--1", "1-1---11--11-01010-10-01--0001-1----1000-101", "0-11-00110-1000--0011-0---010101-1-01----0--", "-0100--100--0100-111000-11-010-10110100-1-10", "0-01-111101100-1-100-001101-0-001111-1110-01", "0-1--11-1101111-1--001011101-1--1111-1011-10", "1001-01-101010-01010-101001-0-1011-01-0-0110", "--11-01-0---011-0---0-11-1-1-0-1-0-0-0000011", "00-001101--0-01100000-100001-10-1--01--00101", "1-1101--00-01--10-000000--1000-0--100-0--00-", "-00--0-0-111--1110--1001-000001---111-110111", "0110-11-1110001--1-10110--000---00-1-00-10-0", "---1011-0-10-1-1-1-0---1-1100111100-01-0011-", "-11----0---001--10-100-1000--0-010-1-0-1-111", "0011-1110-1-0--10-0--0111-100-1---101-0-0--1", "0---1-1--1-11-01-0-10--11-10111-101--1-00101", "-00--100---101000--000101--00-11-0-10-1--1-0", "-0---101110000--00-10000--010111-101-11--10-", "-000-1-1-010010-1100-00-01---01010100-000--1", "111-0-0010-010-010-0000-1-01000110-00-1-1---", "0000-0101000--10---111-00-101100-01-0001-0--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 3000;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> table = {"-00--01", "1--1-0-", "1--00-0", "-01-0-1", "--11---", "11----0", "0-10-1-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> table = {"-0-11-1-01---", "1-01--00-1101", "-1--0--0011-1", "00--0001---10", "0-11-01-0--1-", "---11-001--00", "01-101-0101-0", "-110-11-1-100", "1-1-1000-100-", "000---1-0-1-0", "-00---0010-00", "-1-001-11-1--", "-001-111-11--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> table = {"-0--", "1-01", "-1--", "-0--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> table = {"---10-111000--0100101--00-1-0101-10", "--1010-1-101-11-000-00-00100111---0", "-0-1-110-0-1-001--1-01--11-11110-0-", "010-010--00000011--10-010-11----1-1", "10-1-0001110000--0--100-0--011-0100", "-1001--0--01110001-0000111010101111", "0-011---0-100111-----101----111----", "001-11--0-00-10-11111--0-0-1-1--100", "0---0-11-10001---00-010---1-1-11-01", "10110---0---0-0-000-0--10-10-0-1--0", "11-101011--1101010--001-0--0-1-000-", "100110111-0--11110-1----0-0001-000-", "---1101-110---1-0---001-0-1-01---01", "-01110000-10----0-1-011101011--0-01", "10111101-1000---00-0-0000111-1-1011", "0-00-10---10----0-101-000-1110-1-10", "11-0-1-0-1001111-0-00101101010---11", "11--10-01111--1-1---01-00110-111000", "010----011---0-0----10-10--1-11-0-1", "1--0-1-0---0--111---0-0-01011--11--", "011101-0111-11-01101-01-1-10--0100-", "-10-110-0-1-101-001-1-111010111---0", "---1111-1-0-00111--100---001000-1-1", "11-0-001-0---011010--0----0--11--1-", "110110---1111111011100----1110----0", "-00--0-1-----00-10-0-11---10-0-1101", "01-0-1--00-1010000-1001100-101--10-", "-10010-0-111-0001100110-010-00-1111", "100-010-0--110-00--0-01-0-11-001--1", "000-0000-1000-01100--01011011-101-1", "100--10-0--------00-1010----10-0-01", "0-1-10--0011-100-0-00----0-0011-0-0", "---000-0--11--1--1101-0--000-0-1-00", "0-1-10-11-11110001--1--0-110--1-1-1", "11-010-101--0001010--10-10-0000110-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1467;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> table = {"-111001-1", "0-010011-", "01-11-001", "000--1--0", "110---10-", "11-0---00", "001-0---0", "-01-11--1", "0-01-110-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> table = {"--01-111---100-11111111101--001-1-1", "--1-110100-111-000-0101-00010011-01", "10--0100001010-10-0011-0-11001-0100", "0----00--1100--010-011001-0--10000-", "-01--0--1-01---00-1----11010-00-110", "00011-0111--01---1001-0-11000-00--1", "0111-1-0-0---11111010-00-1-10-11001", "001--01-0--11-001100-0--101-1-11-01", "-11-00-1--1-1--110-11-00--0---1--11", "-110-01---0-00101001-0100101---1010", "--001---01--01000-1-10-00-01010--10", "00110--0----0-01110011--1-0--1-0---", "1001-1-00111-----0100101011101-1011", "101--00--10-----1010100--0-10010--1", "------01-011---11-01-1-----11--1-1-", "01011-010110--0--101110--010--0-0-0", "01101-000010-00---0100111--1000100-", "01-1-00011-011-0--1--0-01--000-10-1", "0-1-0111-101001110--0-0-10-0100-1-0", "0111-10100-111000----10-001---01-00", "0000-01-0-0010-01-1--10--1-101110--", "0100---1-110010011-00-0-10000------", "00-1-11-10--11-10-1111--11-1-010--1", "0-110-1-111-0---01-------11--1011--", "11-000-0-1101---0001-00---101011-10", "010-1001-0--01-1--110100--1100----0", "-10101-011110--0---0-1-000----1001-", "-01-110--00-0001011-010-10----101--", "111--110--1-110-110-11--01-------0-", "11001-----0001--111-0-1011----1---0", "00-111000-1--0-11-110-010-00-0-10-1", "-011-100-0-1010-00-00-100-11--0-01-", "0-010-1--1--1--1110-1--0--10--11--1", "-1110-11000-0-0-1--1----0-0-1--0---", "001-1000011-00-1-011--0-11---10-0--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1347;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> table = {"-1", "0-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
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
    vector<string> table = {"--1110-1-0--00-1--0--11--0-0----1010-0---", "--10-0--01111-1-1100----00-01000101100111", "00-100--00-10-0011-00-1---0-0---1-0101101", "010-0-0-1-010111--0010-1-1--1100-0-011-00", "0-11-1110---11-0--11-01-11-1-0-111-10--0-", "111-0--010-00-0010---110--0-0-01-0-11-101", "---10--0-0-100010-010011-111-0--1111-11-1", "0---011-0-0-0-0-01--1-0-00-00--100110----", "-11010-1-01--0-110-10-011-1-0-001-1-10101", "101--11-1---00---1--1---1----1--0----0-11", "-0-1---10--1001-00-000-0101111-----1100--", "-000-10---0--1--10-10101--0--0-0-0-00111-", "10110111-11--1-0--0---01-001110-1-1-1-100", "1--00-1-11100-10--00--11--1-0101111-10101", "-010-111--0--0-0110-01--000-0---1-1000--1", "0-10110-0---111-11-1-110-11110-1-110--110", "-00--0110-10--00--100000-010-11--0000-00-", "-00--1-01011--00---0----1--10-00-10-010-0", "11-10-1-----111-0--00-011-1101-01-0-100-1", "-1110-0-0-10-1-0111-10110000101100-10010-", "--10--101011--1-1-10-1-1--011011000--1-1-", "0--1101---10--001--10-0---11111-110-1-100", "0-0-00011--110-01-10-1-10-01-0-1101--1-1-", "---0-10-0-1000-11-000-0-10111-1000001-001", "-1--0--1000---1--001--10-01010--00111-1--", "11-00-01--1-1-101--1---11-10--01111101111", "--1--10-0-0110100-01101000--10-01-000-0-0", "11--0-01--0-0--01001000011--0-11-1-01-11-", "-010-1-11-0-0110-11000-00-01-0--1110001--", "-1-01-1--00100-10-01101-1-1-1-0-00001-1-1", "-1-1-1--1---11--01-000-0-1-0-1-11--0--1-0", "-1-100-01--1-0-0-1100-01-010--0-1-10-10-1", "000-0-0101--000---011001100-0100--010--1-", "11-10101---1-0-010-1101110-001-----00-100", "001---000---0000111-1101001-01-01--0-00-0", "10010000--01--111--0---100111111011---10-", "-11010-10-01001-1101-0-0011010--11----11-", "1100--0-1110-11--0110-0--0--1--0--1---1-1", "-00--00-0-1000-01110-0-100100001-01000-00", "-01111--10-011-01--10101-0-0----01-10-1-1", "-001-00-00--1001-10--1-0-01--010-11--010-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 2010;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> table = {"-11-1-1---01-1-111-1--0", "0---00-110-00001-111010", "0--1000-1-0-10100001011", "--0-0--1--0001--1--111-", "0111--000--010-1---1101", "-11-----10--11101-10100", "0-1-1--101-11--01-110-1", "-0-01-0-0111-0-110110--", "-00-1011-100-10-10101-0", "-1---1000----1101-10-10", "1-11---01----1-1001-010", "01-11-001---00010001-10", "-101000----1----10100-1", "011010-10001---011-100-", "-10--0--10-1----01-11--", "001-0110-100-1--01-1001", "0-10-00000110011-0--101", "001----11-1110001-1-001", "-01--00000010----0-1-01", "0000010011-01000--0-11-", "-11000110-1-110101-0-11", "-00011---000-1-111100--", "110-010-11110--0000-0--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 462;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> table = {"-00-0100--", "1--10001-1", "1--0--0001", "-01-111000", "11-0-1000-", "01-00--000", "11101--11-", "1011110-10", "--111100-0", "-001-1-11-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> table = {"-1111--", "0-01-1-", "01-1111", "000-00-", "0-01-11", "-0010-1", "--0-00-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> table = {"-00111-11-010-0-1111100010-00", "1--0----10-0010111110-01-11-0", "1--011-10---100001-0011--10-1", "011-101-1--010-0001101100000-", "0-00-10-010010-1-11-010--1000", "0-010-1--0---1-001010011-1-1-", "---010-0111-0100-00-000-0-101", "0-0---1-111--0-101-1---01---0", "00101-00-0111011--11-1001---1", "-1--01001---1--0-0-01--0-11--", "1---1-000--10100000111------0", "01-11---0-0---101100-0--0110-", "11000-1-001----101-101111-00-", "-01110011-0---10-1-00--0100--", "111---1-0-10-0--10-0101-010--", "-0110110011101--00--1-11110-0", "0011-1-1--101-01-00101-1--01-", "00010010-11000111-111001-1100", "00-0011-0-11----10-0001-1-10-", "0010-0-00101011-001-1-10--0-0", "0111111--00-11001010-10--0101", "1-00011-0-010-1-011-0-0000111", "1100101-1---0-00-10011-1---01", "10-1-0-111--01-000-1-10---100", "0--1--100--10010--0--1----000", "100100---0-0-100-0--11----11-", "-0111-0--0-01111100100-010-10", "1--1101----11---011-1011100-1", "110-1-010-1----1-1-100011-10-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 981;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> table = {"--11-", "--1-1", "00-0-", "0-1-1", "-0-0-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
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
    vector<string> table = {"--010", "--00-", "11-1-", "010-0", "1--1-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
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
    vector<string> table = {"-0-11100-11-10", "1-00011--11100", "-1--11001111--", "01--111111--10", "0100--101-1-10", "0000--00-11-00", "101001--0-01-1", "1-1011--1101-1", "--000-10----00", "0000-0-0------", "000-0011---0-0", "-00---00--1-0-", "01-001--1--1-0", "11-111001-1-1-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> table = {"---0-1-01--1-1001011-1-1011-1----0-", "--010-1010-100----0-010-----1--0-1-", "-1--1010-----0-001-11-10-0110010111", "10--101-0011100------1-10010001---0", "-100--0-1----001-0000100001-0010011", "0-11--11--110--0-0001--11010011-1-0", "-00010---01--0000-1100001-10-010110", "111--0--100010-0---1--0110000110-0-", "00-10--0-0010-1000-00--1001-001--10", "-1-1--111-1101100010-1-100-1111-001", "---0-00110-00100----011-1111-100-00", "00-0-0-1001-0101111-0110-1110--0000", "-1-0-1-01111-011-11----0110-10-1-11", "01111-11-0001--11----00-0-1-0-01111", "1--11-1-00110--001010-0-01-101---0-", "1-1-01111110001-011-1-01--1110--111", "0-1---1-11-0-011-001-1-111110110110", "1-0-11--11-00-001-1001101---000----", "01--110--0-00-1010-10--1-10-000100-", "0-0-110011----0-010-1-1---01--01101", "-10-101-1-11--10-110-11----00110111", "00-00-1--000-1--00--0-1-1101-0-101-", "-10-1-11--00-111-0-000-010001-0011-", "0-10101000-11--0010---1-0-1-100-011", "1--11000110-011-00---001--11-1--0-0", "0-1111-111000-0-0-0--01---010-00010", "0-0000010-0010-00-11-11001----1-001", "--01-111-000--000--0101-00--1-01-10", "001111-110-10110111-1-00-1-0-10--10", "--111010100-1-01011-01-10---0-000-1", "--000000001--1--01110-11-10111--1-0", "-11-1-11--1100--1-00101--1-0-1--01-", "--0-100--1-1-0-00-100101111--101-01", "100-0-01011100100-110000-0100--01-0", "--01011-101100-01--00--01101101-01-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1539;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> table = {"-011000", "1-0101-", "01-11--", "000-10-", "1100-11", "10-10-0", "1---01-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> table = {"-0--", "1--1", "---0", "-01-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
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
    vector<string> table = {"-100--111011010-110", "0--1010---0-1010101", "1---0-01-00110-1--1", "10----1-01---101001", "-11--01--010----010", "-0--1--11001001--00", "01100--0110100--000", "0-0--01--0--1111100", "0--1-00--111--01--0", "1-1011010-10-11000-", "011-011-00-1100-011", "0-0-100-010-0-001-0", "100--110--01-0-11--", "0110-110-01-1-01010", "10-1-0-01011-1-01-1", "-100---001-1001--1-", "00-11-10-110010--10", "01-10111-10--0-00-0", "100011111-01-10-11-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 285;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> table = {"-0-0--10000010-111----100001110-1-00-1100001", "1-11--1000-100-01-0-1-0-000-11010011-0--0-01", "-0--0-0110-0000--0-0010-11-111001011011-1010", "10--110001-1101-00-0-0011100---000--10-00-11", "--10-1001---000-1100-0-010-1----11-01-0001-0", "---00-1100-1101-01-1--011-01101011---000-001", "001110--011000110--11-101111011100-000011011", "110110--0-1111100111-100-0-0000000100-000-10", "11010111-1--00-000-0111-00--1-011--0001--11-", "1110-10-0-0011-11-1--00-0-10000-110-00--1---", "1-----00-1-1-0100001-1001010--11010--1-111--", "1010-010-10-001000---10-101-1-10111-0-11---0", "0110101010-1-1-11100101-11010101110-01-11---", "1111111010110-10011-1-00--1-1-0-00-1--0-1-0-", "--101000--00-0-101--01--10-11001111-0--01--0", "01----011011010-1-0-11001-1000110-100-010-1-", "00-1011110110110-0--1100-0111-1-1110-1-001-1", "0-1100-01-11000-1-0-0011---00-101-00-110-01-", "-1--1--0-01-10-1-1--01110111-1-10-011---0--1", "--1110001-0-1--------1-010--100-1--00010010-", "-01---0-0---0010011---11-11-000-1011-0--100-", "--011--001001-000100----10-000-110-0-111-1-0", "0111-101011101-1100-0-----10010-0---0100100-", "1--01011--1--1-110010---0-1101-0--0110000---", "1100000-11000-00--10-0-1-01-10-0-0-111-010-0", "11001-011-110-1-1-0101--1-010010-10---1--001", "11-1-10--00010-00-0-0-0001-001-0-00000011010", "0-010001-11-0-01010--110-01-0-101-10-010-10-", "000--01101-0100101-011110111---10110011110-0", "000--101-1--0-11--011100110---1--00-00--1-1-", "111--0011100111000-11-1--0-0-0-0100--0000101", "-011-1010-010-00-10--0-111110-1-100-111--011", "01010011001001010010001----01-00-101-111-100", "-1110011-000010-0---11--101-01110-1-0--001-0", "100----0-1101-00011-0--1-110011110-010-110--", "100-1-111----0-1110101-00-111---0-1-0101-110", "--100-1111-11-11--01--100-1-11-0-101--0---11", "0101-11-110-0---00-110010-1101100-10--11---1", "0-0-11110--0-1-1-0-0-011-0100-100--110---011", "1--11101--000-1011-1-0111-010-1-0100-0--0110", "11011-01-00-00011-110-010-0-001--10----1--1-", "1-1-011-0-0-----01-0101-11101-010010--10---1", "1100-1000----1-0-0-11-1--101-0101--00-000---", "00101001---1--1-0-0--1--101-1-0011-10001-0--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 3489;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> table = {"---10---0000-110--0100-", "--00111-0-01011-100-0-1", "-1--00-1110001--100110-", "01---00-11011--10-01011", "101---00001110----110-1", "-011--0001110-000-11---", "-0-111-011-010--1000---", "--0-111-11010-011-1100-", "11001100---101-10---1-1", "1-001000--1111---0-1010", "111100-1-0--000--00-0-0", "1010001000--1-0--00-1-0", "-11001011010-1-011-1000", "000-1-1-001-0-0--00-100", "00---1-1--11-1--111010-", "1--0-1-00---1---00--000", "-001-1001---0-01--1-01-", "-11---1--1110101---1--1", "11110010--11-10-0---100", "0-000010-0--0-1--0--0-0", "11011--1011010011-01--0", "1-10---1-0--11110-1---1", "-0-00---011111-1-01110-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> table = {"--1--1-01-00101-001-110011-", "---1100-1--11-0101--10-111-", "0----1101-1-1111-1-11-1-00-", "-0----0100-1110-1-----1-00-", "-0----0-1-1-0-0-1-1011---1-", "010---1-01-10-1110011111101", "-10110-11011-01001---011110", "1-10--0-00-01110-11-1011011", "00010101--1101-----110-1000", "---1-011--110-010-0-0000000", "1-0-0-0-00-100-1-01-0-11-10", "10-0-001000-010-11-01---0-0", "000011-01111-1011----0-010-", "1-00--100-100--0-1--1101-0-", "01011000-1-11--10111--01011", "-00--011-00-010-00---1--00-", "11-0001--1-00-11--101-011--", "100--100--10-001--0--10-0-0", "0---01-0-10---0-01--00-1010", "--0-10--0--1--0-1-----100-0", "000-00-00110-0--0-1---110--", "01--001111--10-0-01----1-1-", "1-00-000-10--11-11-00--1-1-", "10---000010-100-0-01000--0-", "0011-00111-10-1101111----00", "00110100110-1101--0--0011--", "-----0101111--0--111----1--"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 546;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> table = {"-011", "1-11", "00-1", "000-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> table = {"--0", "--0", "11-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
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
    vector<string> table = {"-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> table = {"-0000000000000000000000000000000000000000000000000", "1-000000000000000000000000000000000000000000000000", "11-00000000000000000000000000000000000000000000000", "111-0000000000000000000000000000000000000000000000", "1111-000000000000000000000000000000000000000000000", "11111-00000000000000000000000000000000000000000000", "111111-0000000000000000000000000000000000000000000", "1111111-000000000000000000000000000000000000000000", "11111111-00000000000000000000000000000000000000000", "111111111-0000000000000000000000000000000000000000", "1111111111-000000000000000000000000000000000000000", "11111111111-00000000000000000000000000000000000000", "111111111111-0000000000000000000000000000000000000", "1111111111111-000000000000000000000000000000000000", "11111111111111-00000000000000000000000000000000000", "111111111111111-0000000000000000000000000000000000", "1111111111111111-000000000000000000000000000000000", "11111111111111111-00000000000000000000000000000000", "111111111111111111-0000000000000000000000000000000", "1111111111111111111-000000000000000000000000000000", "11111111111111111111-00000000000000000000000000000", "111111111111111111111-0000000000000000000000000000", "1111111111111111111111-000000000000000000000000000", "11111111111111111111111-00000000000000000000000000", "111111111111111111111111-0000000000000000000000000", "1111111111111111111111111-000000000000000000000000", "11111111111111111111111111-00000000000000000000000", "111111111111111111111111111-0000000000000000000000", "1111111111111111111111111111-000000000000000000000", "11111111111111111111111111111-00000000000000000000", "111111111111111111111111111111-0000000000000000000", "1111111111111111111111111111111-000000000000000000", "11111111111111111111111111111111-00000000000000000", "111111111111111111111111111111111-0000000000000000", "1111111111111111111111111111111111-000000000000000", "11111111111111111111111111111111111-00000000000000", "111111111111111111111111111111111111-0000000000000", "1111111111111111111111111111111111111-000000000000", "11111111111111111111111111111111111111-00000000000", "111111111111111111111111111111111111111-0000000000", "1111111111111111111111111111111111111111-000000000", "11111111111111111111111111111111111111111-00000000", "111111111111111111111111111111111111111111-0000000", "1111111111111111111111111111111111111111111-000000", "11111111111111111111111111111111111111111111-00000", "111111111111111111111111111111111111111111111-0000", "1111111111111111111111111111111111111111111111-000", "11111111111111111111111111111111111111111111111-00", "111111111111111111111111111111111111111111111111-0", "1111111111111111111111111111111111111111111111111-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> table = {"-0000000000000000000000001111111111111111111111111", "1-000000000000000000000001111111111111111111111111", "11-00000000000000000000001111111111111111111111111", "111-0000000000000000000001111111111111111111111111", "1111-000000000000000000001111111111111111111111111", "11111-00000000000000000001111111111111111111111111", "111111-0000000000000000001111111111111111111111111", "1111111-000000000000000001111111111111111111111111", "11111111-00000000000000001111111111111111111111111", "111111111-0000000000000001111111111111111111111111", "1111111111-000000000000001111111111111111111111111", "11111111111-00000000000001111111111111111111111111", "111111111111-0000000000001111111111111111111111111", "1111111111111-000000000001111111111111111111111111", "11111111111111-00000000001111111111111111111111111", "111111111111111-0000000001111111111111111111111111", "1111111111111111-000000001111111111111111111111111", "11111111111111111-00000001111111111111111111111111", "111111111111111111-0000001111111111111111111111111", "1111111111111111111-000001111111111111111111111111", "11111111111111111111-00001111111111111111111111111", "111111111111111111111-0001111111111111111111111111", "1111111111111111111111-001111111111111111111111111", "11111111111111111111111-01111111111111111111111111", "111111111111111111111111-1111111111111111111111111", "0000000000000000000000000-111111111111111111111111", "00000000000000000000000000-11111111111111111111111", "000000000000000000000000000-1111111111111111111111", "0000000000000000000000000000-111111111111111111111", "00000000000000000000000000000-11111111111111111111", "000000000000000000000000000000-1111111111111111111", "0000000000000000000000000000000-111111111111111111", "00000000000000000000000000000000-11111111111111111", "000000000000000000000000000000000-1111111111111111", "0000000000000000000000000000000000-111111111111111", "00000000000000000000000000000000000-11111111111111", "000000000000000000000000000000000000-1111111111111", "0000000000000000000000000000000000000-111111111111", "00000000000000000000000000000000000000-11111111111", "000000000000000000000000000000000000000-1111111111", "0000000000000000000000000000000000000000-111111111", "00000000000000000000000000000000000000000-11111111", "000000000000000000000000000000000000000000-1111111", "0000000000000000000000000000000000000000000-111111", "00000000000000000000000000000000000000000000-11111", "000000000000000000000000000000000000000000000-1111", "0000000000000000000000000000000000000000000000-111", "00000000000000000000000000000000000000000000000-11", "000000000000000000000000000000000000000000000000-1", "0000000000000000000000000000000000000000000000000-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> table = {"--1-10-1---1--1-00", "--0110000--0---10-", "01--00000100-00011", "-0---0010-11110100", "001--01-00-0001-1-", "11111--100--1-1-01", "-1110--00110-11-01", "0110-01--100110-10", "-111111---01--0-01", "--0-1100----10011-", "--10--011--1--101-", "01101-110-0--1-0-1", "---010-0-0---00-11", "--101-00-1-01-0-0-", "0-110001110-11-110", "-010-----011--0--0", "11010110100-010--0", "1-01-0010--00-111-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> table = {"-10", "0-1", "10-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> table = {"-11", "0-1", "00-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> table = {"-10---", "0-1---", "10----", "------", "------", "------"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> table = {"-11--", "0-1--", "00-1-", "--0--", "-----"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> table = {"-1--", "0-1-", "-0-1", "--0-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> table = {"-111", "0-11", "00-1", "000-"};
    TournamentsAmbiguityNumber* pObj = new TournamentsAmbiguityNumber();
    clock_t start = clock();
    int result = pObj->scrutinizeTable(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21170546&rd=10780&pm=7600
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
 
class TournamentsAmbiguityNumber {
public:
  int scrutinizeTable(vector <string>);
};
 
int TournamentsAmbiguityNumber::scrutinizeTable(vector <string> table) {
  int ambig = 0;
  for(int i = 0 ; i < table.size() ; i++)
    for(int j = 0 ; j < table[0].size() ; j++)
      for(int k = 0 ; k < table.size() ; k++)
        if(i!=j && j!=k)
          if(table[i][j] == '1' && table[j][k] == '1' && table[k][i] == '1') ambig++;
  return ambig;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/